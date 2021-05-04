/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyRootAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyRoot_do_root_pargs;
typedef apache::thrift::ThriftPresult<true> MyRoot_do_root_presult;

template <typename Protocol_>
void MyRootAsyncClient::do_rootT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback) {

  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  MyRoot_do_root_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  static constexpr std::string_view methodName = "do_root";
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::move(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), apache::thrift::ManagedStringView::from_static(methodName), writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}



void MyRootAsyncClient::do_root(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  do_root(rpcOptions, std::move(callback));
}

void MyRootAsyncClient::do_root(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto ctx = do_rootCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::move(ctx->ctx);
  auto* contextStack = callbackContext.ctx.get();
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  do_rootImpl(rpcOptions, std::move(ctx), contextStack, std::move(wrappedCallback));
}

void MyRootAsyncClient::do_rootImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      do_rootT(&writer, rpcOptions, std::move(ctx), contextStack, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      do_rootT(&writer, rpcOptions, std::move(ctx), contextStack, std::move(callback));
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> MyRootAsyncClient::do_rootCtx(apache::thrift::RpcOptions* rpcOptions) {
  return std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      channel_->getProtocolId(),
      rpcOptions ? rpcOptions->releaseWriteHeaders() : std::map<std::string, std::string>{},
      handlers_,
      getServiceName(),
      "MyRoot.do_root");
}

void MyRootAsyncClient::sync_do_root() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_do_root(rpcOptions);
}

void MyRootAsyncClient::sync_do_root(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = do_rootCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  do_rootImpl(rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback));
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
      recv_do_root(returnState);
  });
}


folly::Future<folly::Unit> MyRootAsyncClient::future_do_root() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_do_root(rpcOptions);
}

folly::SemiFuture<folly::Unit> MyRootAsyncClient::semifuture_do_root() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_do_root(rpcOptions);
}

folly::Future<folly::Unit> MyRootAsyncClient::future_do_root(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_do_root, channel_);
  do_root(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<folly::Unit> MyRootAsyncClient::semifuture_do_root(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_do_root, channel_);
  auto callback = std::move(callbackAndFuture.first);
  do_root(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyRootAsyncClient::header_future_do_root(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_do_root, channel_);
  do_root(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyRootAsyncClient::header_semifuture_do_root(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_do_root, channel_);
  auto callback = std::move(callbackAndFuture.first);
  do_root(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void MyRootAsyncClient::do_root(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  do_root(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper MyRootAsyncClient::recv_wrapped_do_root(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyRoot_do_root_presult;
  constexpr auto const fname = "do_root";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyRootAsyncClient::recv_do_root(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_do_root(state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyRootAsyncClient::recv_instance_do_root(::apache::thrift::ClientReceiveState& state) {
  recv_do_root(state);
}

folly::exception_wrapper MyRootAsyncClient::recv_instance_wrapped_do_root(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_do_root(state);
}


} // cpp2
