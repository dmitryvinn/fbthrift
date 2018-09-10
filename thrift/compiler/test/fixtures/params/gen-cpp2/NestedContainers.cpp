/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/NestedContainers.h"
#include "src/gen-cpp2/NestedContainers.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> NestedContainersSvIf::getProcessor() {
  return std::make_unique<NestedContainersAsyncProcessor>(this);
}

void NestedContainersSvIf::mapList(std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mapList");
}

folly::Future<folly::Unit> NestedContainersSvIf::future_mapList(std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> foo) {
  return apache::thrift::detail::si::future([&] { return mapList(std::move(foo)); });
}

void NestedContainersSvIf::async_tm_mapList(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_mapList(std::move(foo)); });
}

void NestedContainersSvIf::mapSet(std::unique_ptr<std::map<int32_t, std::set<int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mapSet");
}

folly::Future<folly::Unit> NestedContainersSvIf::future_mapSet(std::unique_ptr<std::map<int32_t, std::set<int32_t>>> foo) {
  return apache::thrift::detail::si::future([&] { return mapSet(std::move(foo)); });
}

void NestedContainersSvIf::async_tm_mapSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::map<int32_t, std::set<int32_t>>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_mapSet(std::move(foo)); });
}

void NestedContainersSvIf::listMap(std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("listMap");
}

folly::Future<folly::Unit> NestedContainersSvIf::future_listMap(std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> foo) {
  return apache::thrift::detail::si::future([&] { return listMap(std::move(foo)); });
}

void NestedContainersSvIf::async_tm_listMap(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_listMap(std::move(foo)); });
}

void NestedContainersSvIf::listSet(std::unique_ptr<std::vector<std::set<int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("listSet");
}

folly::Future<folly::Unit> NestedContainersSvIf::future_listSet(std::unique_ptr<std::vector<std::set<int32_t>>> foo) {
  return apache::thrift::detail::si::future([&] { return listSet(std::move(foo)); });
}

void NestedContainersSvIf::async_tm_listSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::set<int32_t>>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_listSet(std::move(foo)); });
}

void NestedContainersSvIf::turtles(std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("turtles");
}

folly::Future<folly::Unit> NestedContainersSvIf::future_turtles(std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> foo) {
  return apache::thrift::detail::si::future([&] { return turtles(std::move(foo)); });
}

void NestedContainersSvIf::async_tm_turtles(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_turtles(std::move(foo)); });
}

void NestedContainersSvNull::mapList(std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> /*foo*/) {}

void NestedContainersSvNull::mapSet(std::unique_ptr<std::map<int32_t, std::set<int32_t>>> /*foo*/) {}

void NestedContainersSvNull::listMap(std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> /*foo*/) {}

void NestedContainersSvNull::listSet(std::unique_ptr<std::vector<std::set<int32_t>>> /*foo*/) {}

void NestedContainersSvNull::turtles(std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> /*foo*/) {}

const char* NestedContainersAsyncProcessor::getServiceName() {
  return "NestedContainers";
}

folly::Optional<std::string> NestedContainersAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void NestedContainersAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool NestedContainersAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> NestedContainersAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> NestedContainersAsyncProcessor::cacheKeyMap_ {};
const NestedContainersAsyncProcessor::BinaryProtocolProcessMap& NestedContainersAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const NestedContainersAsyncProcessor::BinaryProtocolProcessMap NestedContainersAsyncProcessor::binaryProcessMap_ {
  {"mapList", &NestedContainersAsyncProcessor::_processInThread_mapList<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mapSet", &NestedContainersAsyncProcessor::_processInThread_mapSet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"listMap", &NestedContainersAsyncProcessor::_processInThread_listMap<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"listSet", &NestedContainersAsyncProcessor::_processInThread_listSet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"turtles", &NestedContainersAsyncProcessor::_processInThread_turtles<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const NestedContainersAsyncProcessor::CompactProtocolProcessMap& NestedContainersAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const NestedContainersAsyncProcessor::CompactProtocolProcessMap NestedContainersAsyncProcessor::compactProcessMap_ {
  {"mapList", &NestedContainersAsyncProcessor::_processInThread_mapList<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mapSet", &NestedContainersAsyncProcessor::_processInThread_mapSet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"listMap", &NestedContainersAsyncProcessor::_processInThread_listMap<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"listSet", &NestedContainersAsyncProcessor::_processInThread_listSet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"turtles", &NestedContainersAsyncProcessor::_processInThread_turtles<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
