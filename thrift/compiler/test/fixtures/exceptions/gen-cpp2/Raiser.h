/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include "src/gen-cpp2/RaiserAsyncClient.h"
#include "src/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class RaiserSvAsyncIf {
 public:
  virtual ~RaiserSvAsyncIf() {}
  virtual void async_tm_doBland(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_doBland() = 0;
  virtual void async_tm_doRaise(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_doRaise() = 0;
  virtual void async_tm_get200(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<std::string>> future_get200() = 0;
  virtual void async_tm_get500(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<std::string>> future_get500() = 0;
};

class RaiserAsyncProcessor;

class RaiserSvIf : public RaiserSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef RaiserAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void doBland();
  folly::Future<folly::Unit> future_doBland() override;
  void async_tm_doBland(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual void doRaise();
  folly::Future<folly::Unit> future_doRaise() override;
  void async_tm_doRaise(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual void get200(std::string& /*_return*/);
  folly::Future<std::unique_ptr<std::string>> future_get200() override;
  void async_tm_get200(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) override;
  virtual void get500(std::string& /*_return*/);
  folly::Future<std::unique_ptr<std::string>> future_get500() override;
  void async_tm_get500(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) override;
};

class RaiserSvNull : public RaiserSvIf {
 public:
  void doBland() override;
  void doRaise() override;
  void get200(std::string& /*_return*/) override;
  void get500(std::string& /*_return*/) override;
};

class RaiserAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
  using HasFrozen2 = std::false_type;
 protected:
  RaiserSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<RaiserAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const RaiserAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const RaiserAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<RaiserAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const RaiserAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const RaiserAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_doBland(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_doBland(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_doBland(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_doBland(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_doRaise(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_doRaise(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_doRaise(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_doRaise(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_get200(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_get200(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_get200(int32_t protoSeqId, apache::thrift::ContextStack* ctx, std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_get200(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_get500(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_get500(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_get500(int32_t protoSeqId, apache::thrift::ContextStack* ctx, std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_get500(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  RaiserAsyncProcessor(RaiserSvIf* iface) :
      iface_(iface) {}

  virtual ~RaiserAsyncProcessor() {}
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
