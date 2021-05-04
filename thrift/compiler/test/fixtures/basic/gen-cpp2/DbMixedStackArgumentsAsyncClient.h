/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {

class DbMixedStackArgumentsAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "DbMixedStackArguments";
  }


  virtual void getDataByKey0(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key);
  virtual void getDataByKey0(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key);
 protected:
  void getDataByKey0Impl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& p_key);
 public:

  virtual void sync_getDataByKey0(::std::string& _return, const ::std::string& p_key);
  virtual void sync_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, const ::std::string& p_key);

  virtual folly::Future<::std::string> future_getDataByKey0(const ::std::string& p_key);
  virtual folly::SemiFuture<::std::string> semifuture_getDataByKey0(const ::std::string& p_key);
  virtual folly::Future<::std::string> future_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);
  virtual folly::SemiFuture<::std::string> semifuture_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);
  virtual folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);
  virtual folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<::std::string> co_getDataByKey0(const ::std::string& p_key) {
    return co_getDataByKey0<false>(nullptr, p_key);
  }
  template <int = 0>
  folly::coro::Task<::std::string> co_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
    return co_getDataByKey0<true>(&rpcOptions, p_key);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::string> co_getDataByKey0(apache::thrift::RpcOptions* rpcOptions, const ::std::string& p_key) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = getDataByKey0Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      getDataByKey0Impl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_key);
    } else {
      getDataByKey0Impl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_key);
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
    ::std::string _return;
    if (auto ew = recv_wrapped_getDataByKey0(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void getDataByKey0(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::string& p_key);


  static folly::exception_wrapper recv_wrapped_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void getDataByKey0T(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& p_key);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> getDataByKey0Ctx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void getDataByKey1(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key);
  virtual void getDataByKey1(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key);
 protected:
  void getDataByKey1Impl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& p_key);
 public:

  virtual void sync_getDataByKey1(::std::string& _return, const ::std::string& p_key);
  virtual void sync_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, const ::std::string& p_key);

  virtual folly::Future<::std::string> future_getDataByKey1(const ::std::string& p_key);
  virtual folly::SemiFuture<::std::string> semifuture_getDataByKey1(const ::std::string& p_key);
  virtual folly::Future<::std::string> future_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);
  virtual folly::SemiFuture<::std::string> semifuture_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);
  virtual folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);
  virtual folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<::std::string> co_getDataByKey1(const ::std::string& p_key) {
    return co_getDataByKey1<false>(nullptr, p_key);
  }
  template <int = 0>
  folly::coro::Task<::std::string> co_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
    return co_getDataByKey1<true>(&rpcOptions, p_key);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::string> co_getDataByKey1(apache::thrift::RpcOptions* rpcOptions, const ::std::string& p_key) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = getDataByKey1Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      getDataByKey1Impl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_key);
    } else {
      getDataByKey1Impl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_key);
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
    ::std::string _return;
    if (auto ew = recv_wrapped_getDataByKey1(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void getDataByKey1(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::string& p_key);


  static folly::exception_wrapper recv_wrapped_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void getDataByKey1T(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& p_key);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> getDataByKey1Ctx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // cpp2
