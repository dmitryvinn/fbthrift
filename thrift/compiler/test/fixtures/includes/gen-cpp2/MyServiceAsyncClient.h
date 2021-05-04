/**
 * Autogenerated by Thrift for src/service.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/service_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServiceAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyService";
  }


  virtual void query(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual void query(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
 protected:
  void queryImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
 public:

  virtual void sync_query(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual void sync_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);

  virtual folly::Future<folly::Unit> future_query(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual folly::SemiFuture<folly::Unit> semifuture_query(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual folly::Future<folly::Unit> future_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual folly::SemiFuture<folly::Unit> semifuture_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_query(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
    return co_query<false>(nullptr, p_s, p_i);
  }
  template <int = 0>
  folly::coro::Task<void> co_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
    return co_query<true>(&rpcOptions, p_s, p_i);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_query(apache::thrift::RpcOptions* rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = queryCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      queryImpl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_s, p_i);
    } else {
      queryImpl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_s, p_i);
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
    if (auto ew = recv_wrapped_query(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void query(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);


  static folly::exception_wrapper recv_wrapped_query(::apache::thrift::ClientReceiveState& state);
  static void recv_query(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_query(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_query(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void queryT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> queryCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void has_arg_docs(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual void has_arg_docs(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
 protected:
  void has_arg_docsImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
 public:

  virtual void sync_has_arg_docs(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual void sync_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);

  virtual folly::Future<folly::Unit> future_has_arg_docs(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual folly::SemiFuture<folly::Unit> semifuture_has_arg_docs(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual folly::Future<folly::Unit> future_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual folly::SemiFuture<folly::Unit> semifuture_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_has_arg_docs(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
    return co_has_arg_docs<false>(nullptr, p_s, p_i);
  }
  template <int = 0>
  folly::coro::Task<void> co_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
    return co_has_arg_docs<true>(&rpcOptions, p_s, p_i);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_has_arg_docs(apache::thrift::RpcOptions* rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = has_arg_docsCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      has_arg_docsImpl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_s, p_i);
    } else {
      has_arg_docsImpl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_s, p_i);
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
    if (auto ew = recv_wrapped_has_arg_docs(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void has_arg_docs(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);


  static folly::exception_wrapper recv_wrapped_has_arg_docs(::apache::thrift::ClientReceiveState& state);
  static void recv_has_arg_docs(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_has_arg_docs(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_has_arg_docs(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void has_arg_docsT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> has_arg_docsCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // cpp2
