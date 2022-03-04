/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/split/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::cpp2::MyEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("module.MyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "module.MyEnum";
  using EnumTraits = TEnumTraits<::cpp2::MyEnum>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyDataItem>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyDataItem", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyDataItem = res.first->second;
  module_MyDataItem.name_ref() = "module.MyDataItem";
  module_MyDataItem.is_union_ref() = false;
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name_ref() = "module.MyStruct";
  module_MyStruct.is_union_ref() = false;
  static const EncodedThriftField
  module_MyStruct_fields[] = {
    {1, "MyIntField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "MyStringField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "MyDataField", false, std::make_unique<Typedef>("module.MyDataItem", std::make_unique<Struct<::cpp2::MyDataItem>>("module.MyDataItem"), std::vector<ThriftConstStruct>{}), std::vector<ThriftConstStruct>{}},
    {4, "myEnum", false, std::make_unique<Enum<::cpp2::MyEnum>>("module.MyEnum"), std::vector<ThriftConstStruct>{}},
    {5, "oneway", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {6, "readonly", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {7, "idempotent", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyStruct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnion = res.first->second;
  module_MyUnion.name_ref() = "module.MyUnion";
  module_MyUnion.is_union_ref() = true;
  static const EncodedThriftField
  module_MyUnion_fields[] = {
    {1, "myEnum", false, std::make_unique<Enum<::cpp2::MyEnum>>("module.MyEnum"), std::vector<ThriftConstStruct>{}},
    {2, "myStruct", false, std::make_unique<Struct<::cpp2::MyStruct>>("module.MyStruct"), std::vector<ThriftConstStruct>{}},
    {3, "myDataItem", false, std::make_unique<Struct<::cpp2::MyDataItem>>("module.MyDataItem"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_MyUnion.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_ping(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "ping";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getRandomData(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getRandomData";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_sink(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "sink";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_sink_sink_1;
  module_MyService_sink_sink_1.id_ref() = 1;
  module_MyService_sink_sink_1.name_ref() = "sink";
  module_MyService_sink_sink_1.is_optional_ref() = false;
  auto module_MyService_sink_sink_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_sink_sink_1_type->writeAndGenType(*module_MyService_sink_sink_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_sink_sink_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_putDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "putDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_id_1;
  module_MyService_putDataById_id_1.id_ref() = 1;
  module_MyService_putDataById_id_1.name_ref() = "id";
  module_MyService_putDataById_id_1.is_optional_ref() = false;
  auto module_MyService_putDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_putDataById_id_1_type->writeAndGenType(*module_MyService_putDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_putDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_data_2;
  module_MyService_putDataById_data_2.id_ref() = 2;
  module_MyService_putDataById_data_2.name_ref() = "data";
  module_MyService_putDataById_data_2.is_optional_ref() = false;
  auto module_MyService_putDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_putDataById_data_2_type->writeAndGenType(*module_MyService_putDataById_data_2.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_putDataById_data_2));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_hasDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "hasDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_hasDataById_id_1;
  module_MyService_hasDataById_id_1.id_ref() = 1;
  module_MyService_hasDataById_id_1.name_ref() = "id";
  module_MyService_hasDataById_id_1.is_optional_ref() = false;
  auto module_MyService_hasDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_hasDataById_id_1_type->writeAndGenType(*module_MyService_hasDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_hasDataById_id_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_getDataById_id_1;
  module_MyService_getDataById_id_1.id_ref() = 1;
  module_MyService_getDataById_id_1.name_ref() = "id";
  module_MyService_getDataById_id_1.is_optional_ref() = false;
  auto module_MyService_getDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_getDataById_id_1_type->writeAndGenType(*module_MyService_getDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_getDataById_id_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_deleteDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "deleteDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_deleteDataById_id_1;
  module_MyService_deleteDataById_id_1.id_ref() = 1;
  module_MyService_deleteDataById_id_1.name_ref() = "id";
  module_MyService_deleteDataById_id_1.is_optional_ref() = false;
  auto module_MyService_deleteDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_deleteDataById_id_1_type->writeAndGenType(*module_MyService_deleteDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_deleteDataById_id_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_lobDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "lobDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_id_1;
  module_MyService_lobDataById_id_1.id_ref() = 1;
  module_MyService_lobDataById_id_1.name_ref() = "id";
  module_MyService_lobDataById_id_1.is_optional_ref() = false;
  auto module_MyService_lobDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_lobDataById_id_1_type->writeAndGenType(*module_MyService_lobDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_lobDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_data_2;
  module_MyService_lobDataById_data_2.id_ref() = 2;
  module_MyService_lobDataById_data_2.name_ref() = "data";
  module_MyService_lobDataById_data_2.is_optional_ref() = false;
  auto module_MyService_lobDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_lobDataById_data_2_type->writeAndGenType(*module_MyService_lobDataById_data_2.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_lobDataById_data_2));
  func.is_oneway_ref() = true;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::cpp2::MyServiceSvIf>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata_ref(), *response.services_ref());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module_ref() = *self->module_ref();
  context.service_info_ref() = response.metadata_ref()->services_ref()->at(*self->service_name_ref());
  response.context_ref() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::cpp2::MyServiceSvIf>::genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name_ref() = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_ping,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getRandomData,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_sink,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_putDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_hasDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_deleteDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_lobDataById,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services_ref()->emplace("module.MyService", std::move(module_MyService));
  context.service_name_ref() = "module.MyService";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
  return &context;
}
void ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::gen_getDataByKey0(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getDataByKey0";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_DbMixedStackArguments_getDataByKey0_key_1;
  module_DbMixedStackArguments_getDataByKey0_key_1.id_ref() = 1;
  module_DbMixedStackArguments_getDataByKey0_key_1.name_ref() = "key";
  module_DbMixedStackArguments_getDataByKey0_key_1.is_optional_ref() = false;
  auto module_DbMixedStackArguments_getDataByKey0_key_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_DbMixedStackArguments_getDataByKey0_key_1_type->writeAndGenType(*module_DbMixedStackArguments_getDataByKey0_key_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_DbMixedStackArguments_getDataByKey0_key_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::gen_getDataByKey1(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getDataByKey1";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_DbMixedStackArguments_getDataByKey1_key_1;
  module_DbMixedStackArguments_getDataByKey1_key_1.id_ref() = 1;
  module_DbMixedStackArguments_getDataByKey1_key_1.name_ref() = "key";
  module_DbMixedStackArguments_getDataByKey1_key_1.is_optional_ref() = false;
  auto module_DbMixedStackArguments_getDataByKey1_key_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_DbMixedStackArguments_getDataByKey1_key_1_type->writeAndGenType(*module_DbMixedStackArguments_getDataByKey1_key_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_DbMixedStackArguments_getDataByKey1_key_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata_ref(), *response.services_ref());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module_ref() = *self->module_ref();
  context.service_info_ref() = response.metadata_ref()->services_ref()->at(*self->service_name_ref());
  response.context_ref() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_DbMixedStackArguments;
  module_DbMixedStackArguments.name_ref() = "module.DbMixedStackArguments";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::gen_getDataByKey0,
    ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::gen_getDataByKey1,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_DbMixedStackArguments);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services_ref()->emplace("module.DbMixedStackArguments", std::move(module_DbMixedStackArguments));
  context.service_name_ref() = "module.DbMixedStackArguments";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
  return &context;
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
