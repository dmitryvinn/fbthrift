/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/C.h"
#include "src/gen-cpp2/C.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> CSvIf::getProcessor() {
  return std::make_unique<CAsyncProcessor>(this);
}

void CSvIf::f() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("f");
}

folly::Future<folly::Unit> CSvIf::future_f() {
  return apache::thrift::detail::si::future([&] { return f(); });
}

void CSvIf::async_tm_f(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_f(); });
}

void CSvNull::f() {}

const char* CAsyncProcessor::getServiceName() {
  return "C";
}

folly::Optional<std::string> CAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void CAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool CAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> CAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> CAsyncProcessor::cacheKeyMap_ {};
const CAsyncProcessor::BinaryProtocolProcessMap& CAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const CAsyncProcessor::BinaryProtocolProcessMap CAsyncProcessor::binaryProcessMap_ {
  {"f", &CAsyncProcessor::_processInThread_f<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const CAsyncProcessor::CompactProtocolProcessMap& CAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const CAsyncProcessor::CompactProtocolProcessMap CAsyncProcessor::compactProcessMap_ {
  {"f", &CAsyncProcessor::_processInThread_f<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
