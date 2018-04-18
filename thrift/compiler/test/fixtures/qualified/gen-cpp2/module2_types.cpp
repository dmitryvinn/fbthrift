/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/module2_types.h"
#include "src/gen-cpp2/module2_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "src/gen-cpp2/module2_data.h"

namespace module2 {

Struct::Struct(apache::thrift::FragileConstructor,  ::module0::Struct first__arg,  ::module1::Struct second__arg) :
    first(std::move(first__arg)),
    second(std::move(second__arg)) {
  __isset.first = true;
  __isset.second = true;
}

void Struct::__clear() {
  // clear all fields
  ::apache::thrift::Cpp2Ops<  ::module0::Struct>::clear(&first);
  ::apache::thrift::Cpp2Ops<  ::module1::Struct>::clear(&second);
  __isset = {};
}

bool Struct::operator==(const Struct& rhs) const {
  (void)rhs;
  if (!(first == rhs.first)) {
    return false;
  }
  if (!(second == rhs.second)) {
    return false;
  }
  return true;
}

bool Struct::operator<(const Struct& rhs) const {
  (void)rhs;
  if (!(first == rhs.first)) {
    return first < rhs.first;
  }
  if (!(second == rhs.second)) {
    return second < rhs.second;
  }
  return false;
}

const  ::module0::Struct& Struct::get_first() const& {
  return first;
}

 ::module0::Struct Struct::get_first() && {
  return std::move(first);
}

const  ::module1::Struct& Struct::get_second() const& {
  return second;
}

 ::module1::Struct Struct::get_second() && {
  return std::move(second);
}

void Struct::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "first") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "second") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

void swap(Struct& a, Struct& b) {
  using ::std::swap;
  swap(a.first, b.first);
  swap(a.second, b.second);
  swap(a.__isset, b.__isset);
}

template void Struct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Struct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Struct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Struct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Struct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Struct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Struct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Struct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // module2
namespace module2 {

BigStruct::BigStruct(apache::thrift::FragileConstructor,  ::module2::Struct s__arg, int32_t id__arg) :
    s(std::move(s__arg)),
    id(std::move(id__arg)) {
  __isset.s = true;
  __isset.id = true;
}

void BigStruct::__clear() {
  // clear all fields
  ::apache::thrift::Cpp2Ops<  ::module2::Struct>::clear(&s);
  id = 0;
  __isset = {};
}

bool BigStruct::operator==(const BigStruct& rhs) const {
  (void)rhs;
  if (!(s == rhs.s)) {
    return false;
  }
  if (!(id == rhs.id)) {
    return false;
  }
  return true;
}

bool BigStruct::operator<(const BigStruct& rhs) const {
  (void)rhs;
  if (!(s == rhs.s)) {
    return s < rhs.s;
  }
  if (!(id == rhs.id)) {
    return id < rhs.id;
  }
  return false;
}

const  ::module2::Struct& BigStruct::get_s() const& {
  return s;
}

 ::module2::Struct BigStruct::get_s() && {
  return std::move(s);
}

void BigStruct::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "s") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "id") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
}

void swap(BigStruct& a, BigStruct& b) {
  using ::std::swap;
  swap(a.s, b.s);
  swap(a.id, b.id);
  swap(a.__isset, b.__isset);
}

template void BigStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t BigStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t BigStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t BigStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void BigStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t BigStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t BigStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t BigStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // module2
