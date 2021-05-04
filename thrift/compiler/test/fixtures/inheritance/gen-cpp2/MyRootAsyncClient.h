/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyRootAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyRoot";
  }


  virtual void do_root(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void do_root(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void do_rootImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  virtual void sync_do_root();
  virtual void sync_do_root(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::Future<folly::Unit> future_do_root();
  virtual folly::SemiFuture<folly::Unit> semifuture_do_root();
  virtual folly::Future<folly::Unit> future_do_root(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<folly::Unit> semifuture_do_root(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_do_root(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_do_root(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_do_root() {
    return co_do_root<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<void> co_do_root(apache::thrift::RpcOptions& rpcOptions) {
    return co_do_root<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_do_root(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = do_rootCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      do_rootImpl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback));
    } else {
      do_rootImpl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx->ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header() && !returnState.header()->getHeaders().empty()) {
        rpcOptions->setReadHeaders(returnState.header()->releaseHeaders());
      }
    };
    if (auto ew = recv_wrapped_do_root(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void do_root(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_do_root(::apache::thrift::ClientReceiveState& state);
  static void recv_do_root(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_do_root(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_do_root(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void do_rootT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> do_rootCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // cpp2
