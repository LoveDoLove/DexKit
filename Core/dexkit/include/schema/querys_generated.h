// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_QUERYS_DEXKIT_SCHEMA_H_
#define FLATBUFFERS_GENERATED_QUERYS_DEXKIT_SCHEMA_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

#include "matchers_generated.h"

namespace dexkit {
namespace schema {

struct FindClass;
struct FindClassBuilder;

struct FindMethod;
struct FindMethodBuilder;

struct FindField;
struct FindFieldBuilder;

struct BatchFindClassUsingStrings;
struct BatchFindClassUsingStringsBuilder;

struct BatchFindMethodUsingStrings;
struct BatchFindMethodUsingStringsBuilder;

struct FindClass FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef FindClassBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SEARCH_PACKAGE = 4,
    VT_IN_CLASSES = 6,
    VT_MATCHER = 8
  };
  const ::flatbuffers::String *search_package() const {
    return GetPointer<const ::flatbuffers::String *>(VT_SEARCH_PACKAGE);
  }
  const ::flatbuffers::Vector<int64_t> *in_classes() const {
    return GetPointer<const ::flatbuffers::Vector<int64_t> *>(VT_IN_CLASSES);
  }
  const dexkit::schema::ClassMatcher *matcher() const {
    return GetPointer<const dexkit::schema::ClassMatcher *>(VT_MATCHER);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SEARCH_PACKAGE) &&
           verifier.VerifyString(search_package()) &&
           VerifyOffset(verifier, VT_IN_CLASSES) &&
           verifier.VerifyVector(in_classes()) &&
           VerifyOffset(verifier, VT_MATCHER) &&
           verifier.VerifyTable(matcher()) &&
           verifier.EndTable();
  }
};

struct FindClassBuilder {
  typedef FindClass Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_search_package(::flatbuffers::Offset<::flatbuffers::String> search_package) {
    fbb_.AddOffset(FindClass::VT_SEARCH_PACKAGE, search_package);
  }
  void add_in_classes(::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_classes) {
    fbb_.AddOffset(FindClass::VT_IN_CLASSES, in_classes);
  }
  void add_matcher(::flatbuffers::Offset<dexkit::schema::ClassMatcher> matcher) {
    fbb_.AddOffset(FindClass::VT_MATCHER, matcher);
  }
  explicit FindClassBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<FindClass> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<FindClass>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<FindClass> CreateFindClass(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> search_package = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_classes = 0,
    ::flatbuffers::Offset<dexkit::schema::ClassMatcher> matcher = 0) {
  FindClassBuilder builder_(_fbb);
  builder_.add_matcher(matcher);
  builder_.add_in_classes(in_classes);
  builder_.add_search_package(search_package);
  return builder_.Finish();
}

struct FindClass::Traits {
  using type = FindClass;
  static auto constexpr Create = CreateFindClass;
};

inline ::flatbuffers::Offset<FindClass> CreateFindClassDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *search_package = nullptr,
    const std::vector<int64_t> *in_classes = nullptr,
    ::flatbuffers::Offset<dexkit::schema::ClassMatcher> matcher = 0) {
  auto search_package__ = search_package ? _fbb.CreateString(search_package) : 0;
  auto in_classes__ = in_classes ? _fbb.CreateVector<int64_t>(*in_classes) : 0;
  return dexkit::schema::CreateFindClass(
      _fbb,
      search_package__,
      in_classes__,
      matcher);
}

struct FindMethod FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef FindMethodBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SEARCH_PACKAGE = 4,
    VT_IN_CLASSES = 6,
    VT_IN_METHODS = 8,
    VT_MATCHER = 10
  };
  const ::flatbuffers::String *search_package() const {
    return GetPointer<const ::flatbuffers::String *>(VT_SEARCH_PACKAGE);
  }
  const ::flatbuffers::Vector<int64_t> *in_classes() const {
    return GetPointer<const ::flatbuffers::Vector<int64_t> *>(VT_IN_CLASSES);
  }
  const ::flatbuffers::Vector<int64_t> *in_methods() const {
    return GetPointer<const ::flatbuffers::Vector<int64_t> *>(VT_IN_METHODS);
  }
  const dexkit::schema::MethodMatcher *matcher() const {
    return GetPointer<const dexkit::schema::MethodMatcher *>(VT_MATCHER);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SEARCH_PACKAGE) &&
           verifier.VerifyString(search_package()) &&
           VerifyOffset(verifier, VT_IN_CLASSES) &&
           verifier.VerifyVector(in_classes()) &&
           VerifyOffset(verifier, VT_IN_METHODS) &&
           verifier.VerifyVector(in_methods()) &&
           VerifyOffset(verifier, VT_MATCHER) &&
           verifier.VerifyTable(matcher()) &&
           verifier.EndTable();
  }
};

struct FindMethodBuilder {
  typedef FindMethod Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_search_package(::flatbuffers::Offset<::flatbuffers::String> search_package) {
    fbb_.AddOffset(FindMethod::VT_SEARCH_PACKAGE, search_package);
  }
  void add_in_classes(::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_classes) {
    fbb_.AddOffset(FindMethod::VT_IN_CLASSES, in_classes);
  }
  void add_in_methods(::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_methods) {
    fbb_.AddOffset(FindMethod::VT_IN_METHODS, in_methods);
  }
  void add_matcher(::flatbuffers::Offset<dexkit::schema::MethodMatcher> matcher) {
    fbb_.AddOffset(FindMethod::VT_MATCHER, matcher);
  }
  explicit FindMethodBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<FindMethod> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<FindMethod>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<FindMethod> CreateFindMethod(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> search_package = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_classes = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_methods = 0,
    ::flatbuffers::Offset<dexkit::schema::MethodMatcher> matcher = 0) {
  FindMethodBuilder builder_(_fbb);
  builder_.add_matcher(matcher);
  builder_.add_in_methods(in_methods);
  builder_.add_in_classes(in_classes);
  builder_.add_search_package(search_package);
  return builder_.Finish();
}

struct FindMethod::Traits {
  using type = FindMethod;
  static auto constexpr Create = CreateFindMethod;
};

inline ::flatbuffers::Offset<FindMethod> CreateFindMethodDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *search_package = nullptr,
    const std::vector<int64_t> *in_classes = nullptr,
    const std::vector<int64_t> *in_methods = nullptr,
    ::flatbuffers::Offset<dexkit::schema::MethodMatcher> matcher = 0) {
  auto search_package__ = search_package ? _fbb.CreateString(search_package) : 0;
  auto in_classes__ = in_classes ? _fbb.CreateVector<int64_t>(*in_classes) : 0;
  auto in_methods__ = in_methods ? _fbb.CreateVector<int64_t>(*in_methods) : 0;
  return dexkit::schema::CreateFindMethod(
      _fbb,
      search_package__,
      in_classes__,
      in_methods__,
      matcher);
}

struct FindField FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef FindFieldBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SEARCH_PACKAGE = 4,
    VT_IN_CLASSES = 6,
    VT_IN_FIELDS = 8,
    VT_MATCHER = 10
  };
  const ::flatbuffers::String *search_package() const {
    return GetPointer<const ::flatbuffers::String *>(VT_SEARCH_PACKAGE);
  }
  const ::flatbuffers::Vector<int64_t> *in_classes() const {
    return GetPointer<const ::flatbuffers::Vector<int64_t> *>(VT_IN_CLASSES);
  }
  const ::flatbuffers::Vector<int64_t> *in_fields() const {
    return GetPointer<const ::flatbuffers::Vector<int64_t> *>(VT_IN_FIELDS);
  }
  const dexkit::schema::FieldMatcher *matcher() const {
    return GetPointer<const dexkit::schema::FieldMatcher *>(VT_MATCHER);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SEARCH_PACKAGE) &&
           verifier.VerifyString(search_package()) &&
           VerifyOffset(verifier, VT_IN_CLASSES) &&
           verifier.VerifyVector(in_classes()) &&
           VerifyOffset(verifier, VT_IN_FIELDS) &&
           verifier.VerifyVector(in_fields()) &&
           VerifyOffset(verifier, VT_MATCHER) &&
           verifier.VerifyTable(matcher()) &&
           verifier.EndTable();
  }
};

struct FindFieldBuilder {
  typedef FindField Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_search_package(::flatbuffers::Offset<::flatbuffers::String> search_package) {
    fbb_.AddOffset(FindField::VT_SEARCH_PACKAGE, search_package);
  }
  void add_in_classes(::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_classes) {
    fbb_.AddOffset(FindField::VT_IN_CLASSES, in_classes);
  }
  void add_in_fields(::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_fields) {
    fbb_.AddOffset(FindField::VT_IN_FIELDS, in_fields);
  }
  void add_matcher(::flatbuffers::Offset<dexkit::schema::FieldMatcher> matcher) {
    fbb_.AddOffset(FindField::VT_MATCHER, matcher);
  }
  explicit FindFieldBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<FindField> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<FindField>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<FindField> CreateFindField(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> search_package = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_classes = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_fields = 0,
    ::flatbuffers::Offset<dexkit::schema::FieldMatcher> matcher = 0) {
  FindFieldBuilder builder_(_fbb);
  builder_.add_matcher(matcher);
  builder_.add_in_fields(in_fields);
  builder_.add_in_classes(in_classes);
  builder_.add_search_package(search_package);
  return builder_.Finish();
}

struct FindField::Traits {
  using type = FindField;
  static auto constexpr Create = CreateFindField;
};

inline ::flatbuffers::Offset<FindField> CreateFindFieldDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *search_package = nullptr,
    const std::vector<int64_t> *in_classes = nullptr,
    const std::vector<int64_t> *in_fields = nullptr,
    ::flatbuffers::Offset<dexkit::schema::FieldMatcher> matcher = 0) {
  auto search_package__ = search_package ? _fbb.CreateString(search_package) : 0;
  auto in_classes__ = in_classes ? _fbb.CreateVector<int64_t>(*in_classes) : 0;
  auto in_fields__ = in_fields ? _fbb.CreateVector<int64_t>(*in_fields) : 0;
  return dexkit::schema::CreateFindField(
      _fbb,
      search_package__,
      in_classes__,
      in_fields__,
      matcher);
}

struct BatchFindClassUsingStrings FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef BatchFindClassUsingStringsBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SEARCH_PACKAGE = 4,
    VT_IN_CLASSES = 6,
    VT_MATCHERS = 8
  };
  const ::flatbuffers::String *search_package() const {
    return GetPointer<const ::flatbuffers::String *>(VT_SEARCH_PACKAGE);
  }
  const ::flatbuffers::Vector<int64_t> *in_classes() const {
    return GetPointer<const ::flatbuffers::Vector<int64_t> *>(VT_IN_CLASSES);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>> *matchers() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>> *>(VT_MATCHERS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SEARCH_PACKAGE) &&
           verifier.VerifyString(search_package()) &&
           VerifyOffset(verifier, VT_IN_CLASSES) &&
           verifier.VerifyVector(in_classes()) &&
           VerifyOffset(verifier, VT_MATCHERS) &&
           verifier.VerifyVector(matchers()) &&
           verifier.VerifyVectorOfTables(matchers()) &&
           verifier.EndTable();
  }
};

struct BatchFindClassUsingStringsBuilder {
  typedef BatchFindClassUsingStrings Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_search_package(::flatbuffers::Offset<::flatbuffers::String> search_package) {
    fbb_.AddOffset(BatchFindClassUsingStrings::VT_SEARCH_PACKAGE, search_package);
  }
  void add_in_classes(::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_classes) {
    fbb_.AddOffset(BatchFindClassUsingStrings::VT_IN_CLASSES, in_classes);
  }
  void add_matchers(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>>> matchers) {
    fbb_.AddOffset(BatchFindClassUsingStrings::VT_MATCHERS, matchers);
  }
  explicit BatchFindClassUsingStringsBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<BatchFindClassUsingStrings> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<BatchFindClassUsingStrings>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<BatchFindClassUsingStrings> CreateBatchFindClassUsingStrings(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> search_package = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_classes = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>>> matchers = 0) {
  BatchFindClassUsingStringsBuilder builder_(_fbb);
  builder_.add_matchers(matchers);
  builder_.add_in_classes(in_classes);
  builder_.add_search_package(search_package);
  return builder_.Finish();
}

struct BatchFindClassUsingStrings::Traits {
  using type = BatchFindClassUsingStrings;
  static auto constexpr Create = CreateBatchFindClassUsingStrings;
};

inline ::flatbuffers::Offset<BatchFindClassUsingStrings> CreateBatchFindClassUsingStringsDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *search_package = nullptr,
    const std::vector<int64_t> *in_classes = nullptr,
    const std::vector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>> *matchers = nullptr) {
  auto search_package__ = search_package ? _fbb.CreateString(search_package) : 0;
  auto in_classes__ = in_classes ? _fbb.CreateVector<int64_t>(*in_classes) : 0;
  auto matchers__ = matchers ? _fbb.CreateVector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>>(*matchers) : 0;
  return dexkit::schema::CreateBatchFindClassUsingStrings(
      _fbb,
      search_package__,
      in_classes__,
      matchers__);
}

struct BatchFindMethodUsingStrings FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef BatchFindMethodUsingStringsBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SEARCH_PACKAGE = 4,
    VT_IN_CLASSES = 6,
    VT_IN_METHODS = 8,
    VT_MATCHERS = 10
  };
  const ::flatbuffers::String *search_package() const {
    return GetPointer<const ::flatbuffers::String *>(VT_SEARCH_PACKAGE);
  }
  const ::flatbuffers::Vector<int64_t> *in_classes() const {
    return GetPointer<const ::flatbuffers::Vector<int64_t> *>(VT_IN_CLASSES);
  }
  const ::flatbuffers::Vector<int64_t> *in_methods() const {
    return GetPointer<const ::flatbuffers::Vector<int64_t> *>(VT_IN_METHODS);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>> *matchers() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>> *>(VT_MATCHERS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SEARCH_PACKAGE) &&
           verifier.VerifyString(search_package()) &&
           VerifyOffset(verifier, VT_IN_CLASSES) &&
           verifier.VerifyVector(in_classes()) &&
           VerifyOffset(verifier, VT_IN_METHODS) &&
           verifier.VerifyVector(in_methods()) &&
           VerifyOffset(verifier, VT_MATCHERS) &&
           verifier.VerifyVector(matchers()) &&
           verifier.VerifyVectorOfTables(matchers()) &&
           verifier.EndTable();
  }
};

struct BatchFindMethodUsingStringsBuilder {
  typedef BatchFindMethodUsingStrings Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_search_package(::flatbuffers::Offset<::flatbuffers::String> search_package) {
    fbb_.AddOffset(BatchFindMethodUsingStrings::VT_SEARCH_PACKAGE, search_package);
  }
  void add_in_classes(::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_classes) {
    fbb_.AddOffset(BatchFindMethodUsingStrings::VT_IN_CLASSES, in_classes);
  }
  void add_in_methods(::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_methods) {
    fbb_.AddOffset(BatchFindMethodUsingStrings::VT_IN_METHODS, in_methods);
  }
  void add_matchers(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>>> matchers) {
    fbb_.AddOffset(BatchFindMethodUsingStrings::VT_MATCHERS, matchers);
  }
  explicit BatchFindMethodUsingStringsBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<BatchFindMethodUsingStrings> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<BatchFindMethodUsingStrings>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<BatchFindMethodUsingStrings> CreateBatchFindMethodUsingStrings(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> search_package = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_classes = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> in_methods = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>>> matchers = 0) {
  BatchFindMethodUsingStringsBuilder builder_(_fbb);
  builder_.add_matchers(matchers);
  builder_.add_in_methods(in_methods);
  builder_.add_in_classes(in_classes);
  builder_.add_search_package(search_package);
  return builder_.Finish();
}

struct BatchFindMethodUsingStrings::Traits {
  using type = BatchFindMethodUsingStrings;
  static auto constexpr Create = CreateBatchFindMethodUsingStrings;
};

inline ::flatbuffers::Offset<BatchFindMethodUsingStrings> CreateBatchFindMethodUsingStringsDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *search_package = nullptr,
    const std::vector<int64_t> *in_classes = nullptr,
    const std::vector<int64_t> *in_methods = nullptr,
    const std::vector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>> *matchers = nullptr) {
  auto search_package__ = search_package ? _fbb.CreateString(search_package) : 0;
  auto in_classes__ = in_classes ? _fbb.CreateVector<int64_t>(*in_classes) : 0;
  auto in_methods__ = in_methods ? _fbb.CreateVector<int64_t>(*in_methods) : 0;
  auto matchers__ = matchers ? _fbb.CreateVector<::flatbuffers::Offset<dexkit::schema::BatchUsingStringsMatcher>>(*matchers) : 0;
  return dexkit::schema::CreateBatchFindMethodUsingStrings(
      _fbb,
      search_package__,
      in_classes__,
      in_methods__,
      matchers__);
}

}  // namespace schema
}  // namespace dexkit

#endif  // FLATBUFFERS_GENERATED_QUERYS_DEXKIT_SCHEMA_H_
