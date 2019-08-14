// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ARRAYSTEST_MYGAME_EXAMPLE_H_
#define FLATBUFFERS_GENERATED_ARRAYSTEST_MYGAME_EXAMPLE_H_

#include "flatbuffers/flatbuffers.h"

namespace MyGame {
namespace Example {

struct NestedStruct;

struct ArrayStruct;

struct ArrayTable;
struct ArrayTableT;

inline const flatbuffers::TypeTable *NestedStructTypeTable();

inline const flatbuffers::TypeTable *ArrayStructTypeTable();

inline const flatbuffers::TypeTable *ArrayTableTypeTable();

enum class TestEnum : int8_t {
  A = 0,
  B = 1,
  C = 2,
  MIN = A,
  MAX = C
};

inline const TestEnum (&EnumValuesTestEnum())[3] {
  static const TestEnum values[] = {
    TestEnum::A,
    TestEnum::B,
    TestEnum::C
  };
  return values;
}

inline const char * const *EnumNamesTestEnum() {
  static const char * const names[4] = {
    "A",
    "B",
    "C",
    nullptr
  };
  return names;
}

inline const char *EnumNameTestEnum(TestEnum e) {
  if (e < TestEnum::A || e > TestEnum::C) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesTestEnum()[index];
}

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) NestedStruct FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t a_[2];
  int8_t b_;
  int8_t c_[2];
  int8_t padding0__;

 public:
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return NestedStructTypeTable();
  }
  NestedStruct() {
    memset(static_cast<void *>(this), 0, sizeof(NestedStruct));
  }
  NestedStruct(MyGame::Example::TestEnum _b)
      : b_(flatbuffers::EndianScalar(static_cast<int8_t>(_b))) {
    std::memset(a_, 0, sizeof(a_));
    std::memset(c_, 0, sizeof(c_));
    (void)padding0__;
  }
  const flatbuffers::Array<int32_t, 2> *a() const {
    return reinterpret_cast<const flatbuffers::Array<int32_t, 2> *>(a_);
  }
  flatbuffers::Array<int32_t, 2> *mutable_a() {
    return reinterpret_cast<flatbuffers::Array<int32_t, 2> *>(a_);
  }
  MyGame::Example::TestEnum b() const {
    return static_cast<MyGame::Example::TestEnum>(flatbuffers::EndianScalar(b_));
  }
  void mutate_b(MyGame::Example::TestEnum _b) {
    flatbuffers::WriteScalar(&b_, static_cast<int8_t>(_b));
  }
  const flatbuffers::Array<MyGame::Example::TestEnum, 2> *c() const {
    return reinterpret_cast<const flatbuffers::Array<MyGame::Example::TestEnum, 2> *>(c_);
  }
  flatbuffers::Array<MyGame::Example::TestEnum, 2> *mutable_c() {
    return reinterpret_cast<flatbuffers::Array<MyGame::Example::TestEnum, 2> *>(c_);
  }
};
FLATBUFFERS_STRUCT_END(NestedStruct, 12);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) ArrayStruct FLATBUFFERS_FINAL_CLASS {
 private:
  float a_;
  int32_t b_[15];
  int8_t c_;
  int8_t padding0__;  int16_t padding1__;
  MyGame::Example::NestedStruct d_[2];

 public:
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return ArrayStructTypeTable();
  }
  ArrayStruct() {
    memset(static_cast<void *>(this), 0, sizeof(ArrayStruct));
  }
  ArrayStruct(float _a, int8_t _c)
      : a_(flatbuffers::EndianScalar(_a)),
        c_(flatbuffers::EndianScalar(_c)),
        padding0__(0),
        padding1__(0) {
    std::memset(b_, 0, sizeof(b_));
    (void)padding0__;    (void)padding1__;
    std::memset(d_, 0, sizeof(d_));
  }
  float a() const {
    return flatbuffers::EndianScalar(a_);
  }
  void mutate_a(float _a) {
    flatbuffers::WriteScalar(&a_, _a);
  }
  const flatbuffers::Array<int32_t, 15> *b() const {
    return reinterpret_cast<const flatbuffers::Array<int32_t, 15> *>(b_);
  }
  flatbuffers::Array<int32_t, 15> *mutable_b() {
    return reinterpret_cast<flatbuffers::Array<int32_t, 15> *>(b_);
  }
  int8_t c() const {
    return flatbuffers::EndianScalar(c_);
  }
  void mutate_c(int8_t _c) {
    flatbuffers::WriteScalar(&c_, _c);
  }
  const flatbuffers::Array<MyGame::Example::NestedStruct, 2> *d() const {
    return reinterpret_cast<const flatbuffers::Array<MyGame::Example::NestedStruct, 2> *>(d_);
  }
  flatbuffers::Array<MyGame::Example::NestedStruct, 2> *mutable_d() {
    return reinterpret_cast<flatbuffers::Array<MyGame::Example::NestedStruct, 2> *>(d_);
  }
};
FLATBUFFERS_STRUCT_END(ArrayStruct, 92);

struct ArrayTableT : public flatbuffers::NativeTable {
  typedef ArrayTable TableType;
  flatbuffers::unique_ptr<MyGame::Example::ArrayStruct> a;
  ArrayTableT() {
  }
};

struct ArrayTable FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ArrayTableT NativeTableType;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return ArrayTableTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_A = 4
  };
  const MyGame::Example::ArrayStruct *a() const {
    return GetStruct<const MyGame::Example::ArrayStruct *>(VT_A);
  }
  MyGame::Example::ArrayStruct *mutable_a() {
    return GetStruct<MyGame::Example::ArrayStruct *>(VT_A);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<MyGame::Example::ArrayStruct>(verifier, VT_A) &&
           verifier.EndTable();
  }
  ArrayTableT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ArrayTableT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ArrayTable> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ArrayTableT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ArrayTableBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_a(const MyGame::Example::ArrayStruct *a) {
    fbb_.AddStruct(ArrayTable::VT_A, a);
  }
  explicit ArrayTableBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ArrayTableBuilder &operator=(const ArrayTableBuilder &);
  flatbuffers::Offset<ArrayTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ArrayTable>(end);
    return o;
  }
};

inline flatbuffers::Offset<ArrayTable> CreateArrayTable(
    flatbuffers::FlatBufferBuilder &_fbb,
    const MyGame::Example::ArrayStruct *a = 0) {
  ArrayTableBuilder builder_(_fbb);
  builder_.add_a(a);
  return builder_.Finish();
}

flatbuffers::Offset<ArrayTable> CreateArrayTable(flatbuffers::FlatBufferBuilder &_fbb, const ArrayTableT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline ArrayTableT *ArrayTable::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new ArrayTableT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void ArrayTable::UnPackTo(ArrayTableT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = a(); if (_e) _o->a = flatbuffers::unique_ptr<MyGame::Example::ArrayStruct>(new MyGame::Example::ArrayStruct(*_e)); };
}

inline flatbuffers::Offset<ArrayTable> ArrayTable::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ArrayTableT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateArrayTable(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ArrayTable> CreateArrayTable(flatbuffers::FlatBufferBuilder &_fbb, const ArrayTableT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ArrayTableT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _a = _o->a ? _o->a.get() : 0;
  return MyGame::Example::CreateArrayTable(
      _fbb,
      _a);
}

inline const flatbuffers::TypeTable *TestEnumTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    MyGame::Example::TestEnumTypeTable
  };
  static const char * const names[] = {
    "A",
    "B",
    "C"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_ENUM, 3, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *NestedStructTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, -1 },
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_SEQUENCE, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    MyGame::Example::TestEnumTypeTable
  };
  static const int64_t values[] = { 0, 8, 9, 12 };
  static const char * const names[] = {
    "a",
    "b",
    "c"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_STRUCT, 3, type_codes, type_refs, values, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *ArrayStructTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_FLOAT, 0, -1 },
    { flatbuffers::ET_SEQUENCE, 0, -1 },
    { flatbuffers::ET_CHAR, 0, -1 },
    { flatbuffers::ET_SEQUENCE, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    MyGame::Example::NestedStructTypeTable
  };
  static const int64_t values[] = { 0, 4, 64, 68, 92 };
  static const char * const names[] = {
    "a",
    "b",
    "c",
    "d"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_STRUCT, 4, type_codes, type_refs, values, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *ArrayTableTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    MyGame::Example::ArrayStructTypeTable
  };
  static const char * const names[] = {
    "a"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 1, type_codes, type_refs, nullptr, names
  };
  return &tt;
}

inline const MyGame::Example::ArrayTable *GetArrayTable(const void *buf) {
  return flatbuffers::GetRoot<MyGame::Example::ArrayTable>(buf);
}

inline const MyGame::Example::ArrayTable *GetSizePrefixedArrayTable(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<MyGame::Example::ArrayTable>(buf);
}

inline ArrayTable *GetMutableArrayTable(void *buf) {
  return flatbuffers::GetMutableRoot<ArrayTable>(buf);
}

inline const char *ArrayTableIdentifier() {
  return "ARRT";
}

inline bool ArrayTableBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, ArrayTableIdentifier());
}

inline bool VerifyArrayTableBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<MyGame::Example::ArrayTable>(ArrayTableIdentifier());
}

inline bool VerifySizePrefixedArrayTableBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<MyGame::Example::ArrayTable>(ArrayTableIdentifier());
}

inline const char *ArrayTableExtension() {
  return "mon";
}

inline void FinishArrayTableBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<MyGame::Example::ArrayTable> root) {
  fbb.Finish(root, ArrayTableIdentifier());
}

inline void FinishSizePrefixedArrayTableBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<MyGame::Example::ArrayTable> root) {
  fbb.FinishSizePrefixed(root, ArrayTableIdentifier());
}

inline flatbuffers::unique_ptr<MyGame::Example::ArrayTableT> UnPackArrayTable(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return flatbuffers::unique_ptr<MyGame::Example::ArrayTableT>(GetArrayTable(buf)->UnPack(res));
}

inline flatbuffers::unique_ptr<MyGame::Example::ArrayTableT> UnPackSizePrefixedArrayTable(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return flatbuffers::unique_ptr<MyGame::Example::ArrayTableT>(GetSizePrefixedArrayTable(buf)->UnPack(res));
}

}  // namespace Example
}  // namespace MyGame

#endif  // FLATBUFFERS_GENERATED_ARRAYSTEST_MYGAME_EXAMPLE_H_
