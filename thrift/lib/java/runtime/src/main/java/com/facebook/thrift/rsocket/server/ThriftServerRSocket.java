/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.facebook.thrift.rsocket.server;

import static com.facebook.thrift.rsocket.util.MetadataUtil.decodeRequestRpcMetadata;
import static com.facebook.thrift.rsocket.util.PayloadUtil.createPayload;

import com.facebook.thrift.payload.Reader;
import com.facebook.thrift.payload.ServerRequestPayload;
import com.facebook.thrift.payload.ServerResponsePayload;
import com.facebook.thrift.payload.Writer;
import com.facebook.thrift.protocol.ByteBufTProtocol;
import com.facebook.thrift.protocol.TProtocolType;
import com.facebook.thrift.server.RpcServerHandler;
import com.google.common.base.Preconditions;
import io.netty.buffer.ByteBuf;
import io.netty.buffer.ByteBufAllocator;
import io.rsocket.Payload;
import io.rsocket.RSocket;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.function.Function;
import org.apache.thrift.RequestRpcMetadata;
import org.apache.thrift.RpcKind;
import org.apache.thrift.protocol.TProtocol;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import reactor.core.Exceptions;
import reactor.core.publisher.Mono;

public class ThriftServerRSocket implements RSocket {
  private static final Logger log = LoggerFactory.getLogger(ThriftServerRSocket.class);
  private final RpcServerHandler rpcServerHandler;
  private final TProtocolType protocolType;
  private final ByteBufAllocator alloc;

  public ThriftServerRSocket(
      RpcServerHandler rpcServerHandler, TProtocolType protocolType, ByteBufAllocator alloc) {
    this.rpcServerHandler = rpcServerHandler;
    this.protocolType = protocolType;
    this.alloc = alloc;
  }

  @Override
  public Mono<Payload> requestResponse(Payload payload) {
    ServerRequestPayload serverRequestPayload =
        payloadToServerRequestPayload(payload, protocolType);
    RequestRpcMetadata metadata = serverRequestPayload.getRequestRpcMetadata();
    Preconditions.checkArgument(metadata.getKind() == RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE);
    return rpcServerHandler
        .singleRequestSingleResponse(serverRequestPayload)
        .doOnError(Throwable::printStackTrace)
        .map(this::serverResponsePayloadToRSocketPayload);
  }

  @Override
  public Mono<Void> fireAndForget(Payload payload) {
    ServerRequestPayload serverRequestPayload =
        payloadToServerRequestPayload(payload, protocolType);
    RequestRpcMetadata metadata = serverRequestPayload.getRequestRpcMetadata();
    Preconditions.checkArgument(metadata.getKind() == RpcKind.SINGLE_REQUEST_NO_RESPONSE);
    return rpcServerHandler.singleRequestNoResponse(serverRequestPayload);
  }

  private Payload serverResponsePayloadToRSocketPayload(ServerResponsePayload responsePayload) {
    ByteBuf data = null;
    ByteBuf metadata = null;
    try {
      data = alloc.buffer();
      metadata = alloc.buffer();

      final ByteBufTProtocol in = protocolType.apply(data);

      final Writer writer = responsePayload.getDataWriter();
      writer.write(in);

      final ByteBufTProtocol metadataProtocol = TProtocolType.TCompact.apply(metadata);
      responsePayload.getResponseRpcMetadata().write0(metadataProtocol);

      return createPayload(
          alloc, responsePayload.getResponseRpcMetadata().getCompression(), data, metadata);

    } catch (Throwable t) {
      if (data != null && data.refCnt() > 0) {
        data.release();
      }

      if (metadata != null && metadata.refCnt() > 0) {
        metadata.release();
      }

      throw Exceptions.propagate(t);
    }
  }

  private ServerRequestPayload payloadToServerRequestPayload(
      Payload requestPayload, TProtocolType protocolType) {
    RequestRpcMetadata rpcMetadata = decodeRequestRpcMetadata(requestPayload);
    final ByteBufTProtocol data = protocolType.apply(requestPayload.sliceData());

    return ServerRequestPayload.create(createReaderFunction(data), rpcMetadata, null);
  }

  @SuppressWarnings("rawtypes")
  private static Function<List<Reader>, List<Object>> createReaderFunction(TProtocol out) {
    return readers -> {
      out.readStructBegin();
      List<Object> requestArguments = Collections.emptyList();
      if (readers != null && !readers.isEmpty()) {
        requestArguments = new ArrayList<>();
        for (Reader r : readers) {
          out.readFieldBegin();
          requestArguments.add(r.read(out));
          out.readFieldEnd();
        }
      }

      out.readStructEnd();
      out.readMessageEnd();
      return requestArguments;
    };
  }
}
