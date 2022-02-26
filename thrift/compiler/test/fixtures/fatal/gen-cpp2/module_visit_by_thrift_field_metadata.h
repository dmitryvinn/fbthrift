/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::union1> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).ui_ref());
    case 3:
      return f(1, static_cast<T&&>(t).ud_ref());
    case 5:
      return f(2, static_cast<T&&>(t).us_ref());
    case 7:
      return f(3, static_cast<T&&>(t).ue_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::union1");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::union2> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).ui_2_ref());
    case 2:
      return f(1, static_cast<T&&>(t).ud_2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).us_2_ref());
    case 4:
      return f(3, static_cast<T&&>(t).ue_2_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::union2");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::union3> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).ui_3_ref());
    case 2:
      return f(1, static_cast<T&&>(t).ud_3_ref());
    case 3:
      return f(2, static_cast<T&&>(t).us_3_ref());
    case 4:
      return f(3, static_cast<T&&>(t).ue_3_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::union3");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::structA> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).a_ref());
    case 2:
      return f(1, static_cast<T&&>(t).b_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::structA");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::unionA> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).i_ref());
    case 2:
      return f(1, static_cast<T&&>(t).d_ref());
    case 3:
      return f(2, static_cast<T&&>(t).s_ref());
    case 4:
      return f(3, static_cast<T&&>(t).e_ref());
    case 5:
      return f(4, static_cast<T&&>(t).a_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::unionA");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::structB> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).c_ref());
    case 2:
      return f(1, static_cast<T&&>(t).d_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::structB");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::structC> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).a_ref());
    case 2:
      return f(1, static_cast<T&&>(t).b_ref());
    case 3:
      return f(2, static_cast<T&&>(t).c_ref());
    case 4:
      return f(3, static_cast<T&&>(t).d_ref());
    case 5:
      return f(4, static_cast<T&&>(t).e_ref());
    case 6:
      return f(5, static_cast<T&&>(t).f_ref());
    case 7:
      return f(6, static_cast<T&&>(t).g_ref());
    case 8:
      return f(7, static_cast<T&&>(t).h_ref());
    case 9:
      return f(8, static_cast<T&&>(t).i_ref());
    case 10:
      return f(9, static_cast<T&&>(t).j_ref());
    case 11:
      return f(10, static_cast<T&&>(t).j1_ref());
    case 12:
      return f(11, static_cast<T&&>(t).j2_ref());
    case 13:
      return f(12, static_cast<T&&>(t).j3_ref());
    case 14:
      return f(13, static_cast<T&&>(t).k_ref());
    case 15:
      return f(14, static_cast<T&&>(t).k1_ref());
    case 16:
      return f(15, static_cast<T&&>(t).k2_ref());
    case 17:
      return f(16, static_cast<T&&>(t).k3_ref());
    case 18:
      return f(17, static_cast<T&&>(t).l_ref());
    case 19:
      return f(18, static_cast<T&&>(t).l1_ref());
    case 20:
      return f(19, static_cast<T&&>(t).l2_ref());
    case 21:
      return f(20, static_cast<T&&>(t).l3_ref());
    case 22:
      return f(21, static_cast<T&&>(t).m1_ref());
    case 23:
      return f(22, static_cast<T&&>(t).m2_ref());
    case 24:
      return f(23, static_cast<T&&>(t).m3_ref());
    case 25:
      return f(24, static_cast<T&&>(t).n1_ref());
    case 26:
      return f(25, static_cast<T&&>(t).n2_ref());
    case 27:
      return f(26, static_cast<T&&>(t).n3_ref());
    case 28:
      return f(27, static_cast<T&&>(t).o1_ref());
    case 29:
      return f(28, static_cast<T&&>(t).o2_ref());
    case 30:
      return f(29, static_cast<T&&>(t).o3_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::structC");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::struct1> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field0_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field1_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field2_ref());
    case 4:
      return f(3, static_cast<T&&>(t).field3_ref());
    case 5:
      return f(4, static_cast<T&&>(t).field4_ref());
    case 6:
      return f(5, static_cast<T&&>(t).field5_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::struct1");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::struct2> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).fieldA_ref());
    case 2:
      return f(1, static_cast<T&&>(t).fieldB_ref());
    case 3:
      return f(2, static_cast<T&&>(t).fieldC_ref());
    case 4:
      return f(3, static_cast<T&&>(t).fieldD_ref());
    case 5:
      return f(4, static_cast<T&&>(t).fieldE_ref());
    case 6:
      return f(5, static_cast<T&&>(t).fieldF_ref());
    case 7:
      return f(6, static_cast<T&&>(t).fieldG_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::struct2");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::struct3> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).fieldA_ref());
    case 2:
      return f(1, static_cast<T&&>(t).fieldB_ref());
    case 3:
      return f(2, static_cast<T&&>(t).fieldC_ref());
    case 4:
      return f(3, static_cast<T&&>(t).fieldD_ref());
    case 5:
      return f(4, static_cast<T&&>(t).fieldE_ref());
    case 6:
      return f(5, static_cast<T&&>(t).fieldF_ref());
    case 7:
      return f(6, static_cast<T&&>(t).fieldG_ref());
    case 8:
      return f(7, static_cast<T&&>(t).fieldH_ref());
    case 9:
      return f(8, static_cast<T&&>(t).fieldI_ref());
    case 10:
      return f(9, static_cast<T&&>(t).fieldJ_ref());
    case 11:
      return f(10, static_cast<T&&>(t).fieldK_ref());
    case 12:
      return f(11, static_cast<T&&>(t).fieldL_ref());
    case 13:
      return f(12, static_cast<T&&>(t).fieldM_ref());
    case 14:
      return f(13, static_cast<T&&>(t).fieldN_ref());
    case 15:
      return f(14, static_cast<T&&>(t).fieldO_ref());
    case 16:
      return f(15, static_cast<T&&>(t).fieldP_ref());
    case 17:
      return f(16, static_cast<T&&>(t).fieldQ_ref());
    case 18:
      return f(17, static_cast<T&&>(t).fieldR_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::struct3");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::struct4> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field0_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field1_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field2_ref());
    case 6:
      return f(3, static_cast<T&&>(t).field3_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::struct4");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::struct5> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field0_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field1_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field2_ref());
    case 4:
      return f(3, static_cast<T&&>(t).field3_ref());
    case 5:
      return f(4, static_cast<T&&>(t).field4_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::struct5");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::struct_binary> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).bi_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::struct_binary");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::dep_A_struct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).b_ref());
    case 2:
      return f(1, static_cast<T&&>(t).c_ref());
    case 3:
      return f(2, static_cast<T&&>(t).i_a_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::dep_A_struct");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::dep_B_struct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).b_ref());
    case 2:
      return f(1, static_cast<T&&>(t).c_ref());
    case 3:
      return f(2, static_cast<T&&>(t).i_a_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::dep_B_struct");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::annotated> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).a_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::annotated");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::union_with_special_names> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).get_ref());
    case 2:
      return f(1, static_cast<T&&>(t).getter_ref());
    case 3:
      return f(2, static_cast<T&&>(t).lists_ref());
    case 4:
      return f(3, static_cast<T&&>(t).maps_ref());
    case 5:
      return f(4, static_cast<T&&>(t).name_ref());
    case 6:
      return f(5, static_cast<T&&>(t).name_to_value_ref());
    case 7:
      return f(6, static_cast<T&&>(t).names_ref());
    case 8:
      return f(7, static_cast<T&&>(t).prefix_tree_ref());
    case 9:
      return f(8, static_cast<T&&>(t).sets_ref());
    case 10:
      return f(9, static_cast<T&&>(t).setter_ref());
    case 11:
      return f(10, static_cast<T&&>(t).str_ref());
    case 12:
      return f(11, static_cast<T&&>(t).strings_ref());
    case 13:
      return f(12, static_cast<T&&>(t).type_ref());
    case 14:
      return f(13, static_cast<T&&>(t).value_ref());
    case 15:
      return f(14, static_cast<T&&>(t).value_to_name_ref());
    case 16:
      return f(15, static_cast<T&&>(t).values_ref());
    case 17:
      return f(16, static_cast<T&&>(t).id_ref());
    case 18:
      return f(17, static_cast<T&&>(t).ids_ref());
    case 19:
      return f(18, static_cast<T&&>(t).descriptor_ref());
    case 20:
      return f(19, static_cast<T&&>(t).descriptors_ref());
    case 21:
      return f(20, static_cast<T&&>(t).key_ref());
    case 22:
      return f(21, static_cast<T&&>(t).keys_ref());
    case 23:
      return f(22, static_cast<T&&>(t).annotation_ref());
    case 24:
      return f(23, static_cast<T&&>(t).annotations_ref());
    case 25:
      return f(24, static_cast<T&&>(t).member_ref());
    case 26:
      return f(25, static_cast<T&&>(t).members_ref());
    case 27:
      return f(26, static_cast<T&&>(t).field_ref());
    case 28:
      return f(27, static_cast<T&&>(t).fields_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::union_with_special_names");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::struct_with_special_names> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).get_ref());
    case 2:
      return f(1, static_cast<T&&>(t).getter_ref());
    case 3:
      return f(2, static_cast<T&&>(t).lists_ref());
    case 4:
      return f(3, static_cast<T&&>(t).maps_ref());
    case 5:
      return f(4, static_cast<T&&>(t).name_ref());
    case 6:
      return f(5, static_cast<T&&>(t).name_to_value_ref());
    case 7:
      return f(6, static_cast<T&&>(t).names_ref());
    case 8:
      return f(7, static_cast<T&&>(t).prefix_tree_ref());
    case 9:
      return f(8, static_cast<T&&>(t).sets_ref());
    case 10:
      return f(9, static_cast<T&&>(t).setter_ref());
    case 11:
      return f(10, static_cast<T&&>(t).str_ref());
    case 12:
      return f(11, static_cast<T&&>(t).strings_ref());
    case 13:
      return f(12, static_cast<T&&>(t).type_ref());
    case 14:
      return f(13, static_cast<T&&>(t).value_ref());
    case 15:
      return f(14, static_cast<T&&>(t).value_to_name_ref());
    case 16:
      return f(15, static_cast<T&&>(t).values_ref());
    case 17:
      return f(16, static_cast<T&&>(t).id_ref());
    case 18:
      return f(17, static_cast<T&&>(t).ids_ref());
    case 19:
      return f(18, static_cast<T&&>(t).descriptor_ref());
    case 20:
      return f(19, static_cast<T&&>(t).descriptors_ref());
    case 21:
      return f(20, static_cast<T&&>(t).key_ref());
    case 22:
      return f(21, static_cast<T&&>(t).keys_ref());
    case 23:
      return f(22, static_cast<T&&>(t).annotation_ref());
    case 24:
      return f(23, static_cast<T&&>(t).annotations_ref());
    case 25:
      return f(24, static_cast<T&&>(t).member_ref());
    case 26:
      return f(25, static_cast<T&&>(t).members_ref());
    case 27:
      return f(26, static_cast<T&&>(t).field_ref());
    case 28:
      return f(27, static_cast<T&&>(t).fields_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::struct_with_special_names");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::struct_with_indirections> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).real_ref());
    case 2:
      return f(1, static_cast<T&&>(t).fake_ref());
    case 3:
      return f(2, static_cast<T&&>(t).number_ref());
    case 4:
      return f(3, static_cast<T&&>(t).result_ref());
    case 5:
      return f(4, static_cast<T&&>(t).phrase_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::struct_with_indirections");
    }
  }
};

template <>
struct VisitByFieldId<::test_cpp2::cpp_reflection::StructWithFieldAdapter> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    default:
      throwInvalidThriftId(fieldId, "::test_cpp2::cpp_reflection::StructWithFieldAdapter");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
