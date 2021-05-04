/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace apache { namespace thrift { namespace fixtures { namespace types {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::string>, ::apache::thrift::fixtures::types::SomeMap*>> SomeService_bounce_map_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::string>, ::apache::thrift::fixtures::types::SomeMap*>> SomeService_bounce_map_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int64_t>*>> SomeService_binary_keyed_map_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::map<::apache::thrift::type_class::binary, ::apache::thrift::type_class::integral>, ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>*>> SomeService_binary_keyed_map_presult;

template <typename Protocol_>
void SomeServiceAsyncClient::bounce_mapT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::apache::thrift::fixtures::types::SomeMap& p_m) {

  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  SomeService_bounce_map_pargs args;
  args.get<0>().value = const_cast<::apache::thrift::fixtures::types::SomeMap*>(&p_m);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  static constexpr std::string_view methodName = "bounce_map";
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::move(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), apache::thrift::ManagedStringView::from_static(methodName), writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}

template <typename Protocol_>
void SomeServiceAsyncClient::binary_keyed_mapT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::int64_t>& p_r) {

  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  SomeService_binary_keyed_map_pargs args;
  args.get<0>().value = const_cast<::std::vector<::std::int64_t>*>(&p_r);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  static constexpr std::string_view methodName = "binary_keyed_map";
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::move(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), apache::thrift::ManagedStringView::from_static(methodName), writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}



void SomeServiceAsyncClient::bounce_map(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  ::apache::thrift::RpcOptions rpcOptions;
  bounce_map(rpcOptions, std::move(callback), p_m);
}

void SomeServiceAsyncClient::bounce_map(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  auto ctx = bounce_mapCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::move(ctx->ctx);
  auto* contextStack = callbackContext.ctx.get();
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  bounce_mapImpl(rpcOptions, std::move(ctx), contextStack, std::move(wrappedCallback), p_m);
}

void SomeServiceAsyncClient::bounce_mapImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      bounce_mapT(&writer, rpcOptions, std::move(ctx), contextStack, std::move(callback), p_m);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      bounce_mapT(&writer, rpcOptions, std::move(ctx), contextStack, std::move(callback), p_m);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> SomeServiceAsyncClient::bounce_mapCtx(apache::thrift::RpcOptions* rpcOptions) {
  return std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      channel_->getProtocolId(),
      rpcOptions ? rpcOptions->releaseWriteHeaders() : std::map<std::string, std::string>{},
      handlers_,
      getServiceName(),
      "SomeService.bounce_map");
}

void SomeServiceAsyncClient::sync_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_bounce_map(rpcOptions, _return, p_m);
}

void SomeServiceAsyncClient::sync_bounce_map(apache::thrift::RpcOptions& rpcOptions, ::apache::thrift::fixtures::types::SomeMap& _return, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = bounce_mapCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  bounce_mapImpl(rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_m);
  callback.waitUntilDone(evb);

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctx->ctx));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_bounce_map(_return, returnState);
  });
}


folly::Future<::apache::thrift::fixtures::types::SomeMap> SomeServiceAsyncClient::future_bounce_map(const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_bounce_map(rpcOptions, p_m);
}

folly::SemiFuture<::apache::thrift::fixtures::types::SomeMap> SomeServiceAsyncClient::semifuture_bounce_map(const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_bounce_map(rpcOptions, p_m);
}

folly::Future<::apache::thrift::fixtures::types::SomeMap> SomeServiceAsyncClient::future_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  folly::Promise<::apache::thrift::fixtures::types::SomeMap> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::apache::thrift::fixtures::types::SomeMap>>(std::move(promise), recv_wrapped_bounce_map, channel_);
  bounce_map(rpcOptions, std::move(callback), p_m);
  return future;
}

folly::SemiFuture<::apache::thrift::fixtures::types::SomeMap> SomeServiceAsyncClient::semifuture_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_bounce_map, channel_);
  auto callback = std::move(callbackAndFuture.first);
  bounce_map(rpcOptions, std::move(callback), p_m);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::apache::thrift::fixtures::types::SomeMap, std::unique_ptr<apache::thrift::transport::THeader>>> SomeServiceAsyncClient::header_future_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  folly::Promise<std::pair<::apache::thrift::fixtures::types::SomeMap, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::apache::thrift::fixtures::types::SomeMap>>(std::move(promise), recv_wrapped_bounce_map, channel_);
  bounce_map(rpcOptions, std::move(callback), p_m);
  return future;
}

folly::SemiFuture<std::pair<::apache::thrift::fixtures::types::SomeMap, std::unique_ptr<apache::thrift::transport::THeader>>> SomeServiceAsyncClient::header_semifuture_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_bounce_map, channel_);
  auto callback = std::move(callbackAndFuture.first);
  bounce_map(rpcOptions, std::move(callback), p_m);
  return std::move(callbackAndFuture.second);
}

void SomeServiceAsyncClient::bounce_map(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
  bounce_map(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_m);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper SomeServiceAsyncClient::recv_wrapped_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = SomeService_bounce_map_presult;
  constexpr auto const fname = "bounce_map";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void SomeServiceAsyncClient::recv_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_bounce_map(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void SomeServiceAsyncClient::recv_instance_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_bounce_map(_return, state);
}

folly::exception_wrapper SomeServiceAsyncClient::recv_instance_wrapped_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_bounce_map(_return, state);
}

void SomeServiceAsyncClient::binary_keyed_map(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::int64_t>& p_r) {
  ::apache::thrift::RpcOptions rpcOptions;
  binary_keyed_map(rpcOptions, std::move(callback), p_r);
}

void SomeServiceAsyncClient::binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::int64_t>& p_r) {
  auto ctx = binary_keyed_mapCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::move(ctx->ctx);
  auto* contextStack = callbackContext.ctx.get();
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  binary_keyed_mapImpl(rpcOptions, std::move(ctx), contextStack, std::move(wrappedCallback), p_r);
}

void SomeServiceAsyncClient::binary_keyed_mapImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::int64_t>& p_r) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      binary_keyed_mapT(&writer, rpcOptions, std::move(ctx), contextStack, std::move(callback), p_r);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      binary_keyed_mapT(&writer, rpcOptions, std::move(ctx), contextStack, std::move(callback), p_r);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> SomeServiceAsyncClient::binary_keyed_mapCtx(apache::thrift::RpcOptions* rpcOptions) {
  return std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      channel_->getProtocolId(),
      rpcOptions ? rpcOptions->releaseWriteHeaders() : std::map<std::string, std::string>{},
      handlers_,
      getServiceName(),
      "SomeService.binary_keyed_map");
}

void SomeServiceAsyncClient::sync_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, const ::std::vector<::std::int64_t>& p_r) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_binary_keyed_map(rpcOptions, _return, p_r);
}

void SomeServiceAsyncClient::sync_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, const ::std::vector<::std::int64_t>& p_r) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = binary_keyed_mapCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  binary_keyed_mapImpl(rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_r);
  callback.waitUntilDone(evb);

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctx->ctx));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_binary_keyed_map(_return, returnState);
  });
}


folly::Future<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> SomeServiceAsyncClient::future_binary_keyed_map(const ::std::vector<::std::int64_t>& p_r) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_binary_keyed_map(rpcOptions, p_r);
}

folly::SemiFuture<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> SomeServiceAsyncClient::semifuture_binary_keyed_map(const ::std::vector<::std::int64_t>& p_r) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_binary_keyed_map(rpcOptions, p_r);
}

folly::Future<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> SomeServiceAsyncClient::future_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
  folly::Promise<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>>(std::move(promise), recv_wrapped_binary_keyed_map, channel_);
  binary_keyed_map(rpcOptions, std::move(callback), p_r);
  return future;
}

folly::SemiFuture<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> SomeServiceAsyncClient::semifuture_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_binary_keyed_map, channel_);
  auto callback = std::move(callbackAndFuture.first);
  binary_keyed_map(rpcOptions, std::move(callback), p_r);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>, std::unique_ptr<apache::thrift::transport::THeader>>> SomeServiceAsyncClient::header_future_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
  folly::Promise<std::pair<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>>(std::move(promise), recv_wrapped_binary_keyed_map, channel_);
  binary_keyed_map(rpcOptions, std::move(callback), p_r);
  return future;
}

folly::SemiFuture<std::pair<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>, std::unique_ptr<apache::thrift::transport::THeader>>> SomeServiceAsyncClient::header_semifuture_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_binary_keyed_map, channel_);
  auto callback = std::move(callbackAndFuture.first);
  binary_keyed_map(rpcOptions, std::move(callback), p_r);
  return std::move(callbackAndFuture.second);
}

void SomeServiceAsyncClient::binary_keyed_map(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::vector<::std::int64_t>& p_r) {
  binary_keyed_map(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_r);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper SomeServiceAsyncClient::recv_wrapped_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = SomeService_binary_keyed_map_presult;
  constexpr auto const fname = "binary_keyed_map";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void SomeServiceAsyncClient::recv_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_binary_keyed_map(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void SomeServiceAsyncClient::recv_instance_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_binary_keyed_map(_return, state);
}

folly::exception_wrapper SomeServiceAsyncClient::recv_instance_wrapped_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_binary_keyed_map(_return, state);
}


}}}} // apache::thrift::fixtures::types
