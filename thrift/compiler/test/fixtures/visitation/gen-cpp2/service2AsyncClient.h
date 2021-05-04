/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/reflection_dep_B_types.h"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/reflection_dep_C_types.h"
#include "thrift/test/fatal_custom_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace test_cpp2 { namespace cpp_reflection {

class service2AsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "service2";
  }


  virtual void methodA(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void methodA(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void methodAImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  virtual void sync_methodA();
  virtual void sync_methodA(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::Future<folly::Unit> future_methodA();
  virtual folly::SemiFuture<folly::Unit> semifuture_methodA();
  virtual folly::Future<folly::Unit> future_methodA(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<folly::Unit> semifuture_methodA(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodA(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodA(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_methodA() {
    return co_methodA<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<void> co_methodA(apache::thrift::RpcOptions& rpcOptions) {
    return co_methodA<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_methodA(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = methodACtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      methodAImpl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback));
    } else {
      methodAImpl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback));
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
    if (auto ew = recv_wrapped_methodA(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void methodA(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_methodA(::apache::thrift::ClientReceiveState& state);
  static void recv_methodA(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodA(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodA(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodAT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodACtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void methodB(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual void methodB(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
 protected:
  void methodBImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
 public:

  virtual void sync_methodB(::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual void sync_methodB(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);

  virtual folly::Future<folly::Unit> future_methodB(::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::SemiFuture<folly::Unit> semifuture_methodB(::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::Future<folly::Unit> future_methodB(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::SemiFuture<folly::Unit> semifuture_methodB(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodB(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodB(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_methodB(::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z) {
    return co_methodB<false>(nullptr, p_x, p_y, p_z);
  }
  template <int = 0>
  folly::coro::Task<void> co_methodB(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z) {
    return co_methodB<true>(&rpcOptions, p_x, p_y, p_z);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_methodB(apache::thrift::RpcOptions* rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = methodBCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      methodBImpl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_x, p_y, p_z);
    } else {
      methodBImpl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_x, p_y, p_z);
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
    if (auto ew = recv_wrapped_methodB(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void methodB(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);


  static folly::exception_wrapper recv_wrapped_methodB(::apache::thrift::ClientReceiveState& state);
  static void recv_methodB(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodB(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodB(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodBT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodBCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void methodC(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void methodC(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void methodCImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  virtual ::std::int32_t sync_methodC();
  virtual ::std::int32_t sync_methodC(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::Future<::std::int32_t> future_methodC();
  virtual folly::SemiFuture<::std::int32_t> semifuture_methodC();
  virtual folly::Future<::std::int32_t> future_methodC(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<::std::int32_t> semifuture_methodC(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodC(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodC(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_methodC() {
    return co_methodC<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_methodC(apache::thrift::RpcOptions& rpcOptions) {
    return co_methodC<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::int32_t> co_methodC(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = methodCCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      methodCImpl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback));
    } else {
      methodCImpl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback));
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
    ::std::int32_t _return;
    if (auto ew = recv_wrapped_methodC(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void methodC(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_methodC(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static ::std::int32_t recv_methodC(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual ::std::int32_t recv_instance_methodC(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodC(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodCT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodCCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void methodD(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual void methodD(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
 protected:
  void methodDImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
 public:

  virtual ::std::int32_t sync_methodD(::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual ::std::int32_t sync_methodD(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);

  virtual folly::Future<::std::int32_t> future_methodD(::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::SemiFuture<::std::int32_t> semifuture_methodD(::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::Future<::std::int32_t> future_methodD(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::SemiFuture<::std::int32_t> semifuture_methodD(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::Future<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodD(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::SemiFuture<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodD(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_methodD(::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    return co_methodD<false>(nullptr, p_i, p_j, p_k);
  }
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_methodD(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    return co_methodD<true>(&rpcOptions, p_i, p_j, p_k);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::int32_t> co_methodD(apache::thrift::RpcOptions* rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = methodDCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      methodDImpl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_i, p_j, p_k);
    } else {
      methodDImpl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_i, p_j, p_k);
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
    ::std::int32_t _return;
    if (auto ew = recv_wrapped_methodD(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void methodD(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);


  static folly::exception_wrapper recv_wrapped_methodD(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static ::std::int32_t recv_methodD(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual ::std::int32_t recv_instance_methodD(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodD(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodDT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodDCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void methodE(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void methodE(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void methodEImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  virtual void sync_methodE(::test_cpp2::cpp_reflection::struct2& _return);
  virtual void sync_methodE(apache::thrift::RpcOptions& rpcOptions, ::test_cpp2::cpp_reflection::struct2& _return);

  virtual folly::Future<::test_cpp2::cpp_reflection::struct2> future_methodE();
  virtual folly::SemiFuture<::test_cpp2::cpp_reflection::struct2> semifuture_methodE();
  virtual folly::Future<::test_cpp2::cpp_reflection::struct2> future_methodE(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<::test_cpp2::cpp_reflection::struct2> semifuture_methodE(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodE(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodE(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_methodE() {
    return co_methodE<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_methodE(apache::thrift::RpcOptions& rpcOptions) {
    return co_methodE<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_methodE(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = methodECtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      methodEImpl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback));
    } else {
      methodEImpl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback));
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
    ::test_cpp2::cpp_reflection::struct2 _return;
    if (auto ew = recv_wrapped_methodE(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void methodE(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_methodE(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_methodE(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodE(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodE(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodET(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodECtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void methodF(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual void methodF(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
 protected:
  void methodFImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
 public:

  virtual void sync_methodF(::test_cpp2::cpp_reflection::struct2& _return, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual void sync_methodF(apache::thrift::RpcOptions& rpcOptions, ::test_cpp2::cpp_reflection::struct2& _return, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);

  virtual folly::Future<::test_cpp2::cpp_reflection::struct2> future_methodF(::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::SemiFuture<::test_cpp2::cpp_reflection::struct2> semifuture_methodF(::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::Future<::test_cpp2::cpp_reflection::struct2> future_methodF(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::SemiFuture<::test_cpp2::cpp_reflection::struct2> semifuture_methodF(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::Future<std::pair<::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodF(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::SemiFuture<std::pair<::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_methodF(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_methodF(::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    return co_methodF<false>(nullptr, p_l, p_m, p_n);
  }
  template <int = 0>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_methodF(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    return co_methodF<true>(&rpcOptions, p_l, p_m, p_n);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_methodF(apache::thrift::RpcOptions* rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = methodFCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      methodFImpl(*rpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_l, p_m, p_n);
    } else {
      methodFImpl(defaultRpcOptions, ctx, ctx->ctx.get(), std::move(wrappedCallback), p_l, p_m, p_n);
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
    ::test_cpp2::cpp_reflection::struct2 _return;
    if (auto ew = recv_wrapped_methodF(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void methodF(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);


  static folly::exception_wrapper recv_wrapped_methodF(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_methodF(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodF(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodF(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodFT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> methodFCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

}} // test_cpp2::cpp_reflection
