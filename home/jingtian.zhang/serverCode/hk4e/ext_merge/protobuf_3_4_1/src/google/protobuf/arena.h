// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/arena.h

// Line 71: range 000000000C94DE90-000000000C94DE93
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::Any>(void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C919660-000000000C919663
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto_ExtensionRange>(
        void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C919680-000000000C919683
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto_ReservedRange>(
        void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C919630-000000000C919633
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::EnumDescriptorProto>(void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C919690-000000000C919693
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::EnumValueDescriptorProto>(
        void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C919650-000000000C919653
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::FieldDescriptorProto>(void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C9401C0-000000000C9401C3
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::FileDescriptorProto>(void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C940200-000000000C940203
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::GeneratedCodeInfo_Annotation>(
        void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C8B8190-000000000C8B91A9
// attributes: thunk
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap>(
        void *object)
{
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::~InnerMap((google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *const)object);
};

// Line 71: range 000000000C8B6330-000000000C8B6350
// attributes: thunk
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::MapKey>(void *object)
{
  google::protobuf::MapKey::~MapKey((google::protobuf::MapKey *const)object);
};

// Line 71: range 000000000C9196A0-000000000C9196A3
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::MethodDescriptorProto>(
        void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C919670-000000000C919673
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::OneofDescriptorProto>(void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C8EF000-000000000C8EF048
// attributes: thunk
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<bool>>(void *object)
{
  google::protobuf::RepeatedField<bool>::~RepeatedField((google::protobuf::RepeatedField<bool> *const)object);
};

// Line 71: range 000000000C919640-000000000C919643
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::ServiceDescriptorProto>(
        void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C9401F0-000000000C9401F3
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::SourceCodeInfo_Location>(
        void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C94DE80-000000000C94DE83
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::SourceContext>(void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C9401D0-000000000C9401D3
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>(void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C9401E0-000000000C9401E3
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption_NamePart>(
        void *object)
{
  (**(void (__fastcall ***)(void *))object)(object);
};

// Line 71: range 000000000C8B6100-000000000C8B6139
// attributes: thunk
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::internal::Mutex>(void *object)
{
  google::protobuf::internal::Mutex::~Mutex((google::protobuf::internal::Mutex *const)object);
};

// Line 74: range 000000000C8AB2E0-000000000C8AB2F0
void __fastcall google::protobuf::internal::arena_delete_object<google::protobuf::Message>(void *object)
{
  if ( object )
    (*(void (__fastcall **)(void *))(*(_QWORD *)object + 8LL))(object);
};

// Line 74: range 000000000C89DC00-000000000C89DC10
void __fastcall google::protobuf::internal::arena_delete_object<google::protobuf::MessageLite>(void *object)
{
  if ( object )
    (*(void (__fastcall **)(void *))(*(_QWORD *)object + 8LL))(object);
};

// Line 74: range 000000000C8AB470-000000000C8AB4A0
void __fastcall google::protobuf::internal::arena_delete_object<std::string>(void *object)
{
  char *v2; // rdi

  if ( object )
  {
    v2 = *(char **)object;
    if ( v2 != (char *)object + 16 )
      operator delete(v2);
    operator delete(object, 0x20uLL);
  }
};

// Line 272: range 000000000C732ACA-000000000C732ADA
void __fastcall __noreturn google::protobuf::BoolValue::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x18uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C732B5E-000000000C732B6E
void __fastcall __noreturn google::protobuf::BytesValue::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C73290E-000000000C73291E
void __fastcall __noreturn google::protobuf::DoubleValue::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C732658-000000000C732668
void __fastcall __noreturn google::protobuf::Enum::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x28uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C73256A-000000000C73257A
void __fastcall __noreturn google::protobuf::Enum::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x58uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C732642-000000000C732652
void __fastcall __noreturn google::protobuf::EnumValue::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x28uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C73247E-000000000C73248E
void __fastcall __noreturn google::protobuf::EnumValue::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x38uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C73262C-000000000C73263C
void __fastcall __noreturn google::protobuf::Field::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x28uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C732424-000000000C732434
void __fastcall __noreturn google::protobuf::Field::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C732958-000000000C732968
void __fastcall __noreturn google::protobuf::FloatValue::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x18uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C732A36-000000000C732A46
void __fastcall __noreturn google::protobuf::Int32Value::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x18uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C7329A2-000000000C7329B2
void __fastcall __noreturn google::protobuf::Int64Value::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C7323AC-000000000C7323BC
void __fastcall __noreturn google::protobuf::Option::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x28uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C732B14-000000000C732B24
void __fastcall __noreturn google::protobuf::StringValue::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C73FC84-000000000C73FC94
void __fastcall __noreturn google::protobuf::Timestamp::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C732682-000000000C732692
void __fastcall __noreturn google::protobuf::Type::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C7324FC-000000000C73250C
void __fastcall __noreturn google::protobuf::Type::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x70uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C732A80-000000000C732A90
void __fastcall __noreturn google::protobuf::UInt32Value::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x18uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C7329EC-000000000C7329FC
void __fastcall __noreturn google::protobuf::UInt64Value::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 272: range 000000000C72C990-000000000C72C9CB
void __fastcall __noreturn google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver::ResolveEnumType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbx
  void *v20; // rbp

  operator delete(v20, 0x38uLL);
  if ( a17 != &a19 )
    operator delete(a17);
  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v19);
};

// Line 333: range 000000000C72ABF0-000000000C72AC13
void __fastcall __noreturn google::protobuf::internal::DynamicMapField::DynamicMapField()
{
  struct _Unwind_Exception *v0; // rbx
  google::protobuf::internal::MapFieldBase *v1; // rbp
  void *v2; // r12

  operator delete(v2, 0x30uLL);
  v1->_vptr_MapFieldBase = (int (**)(...))&unk_1A171CA0;
  google::protobuf::internal::MapFieldBase::~MapFieldBase(v1);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C7318D2-000000000C7318E2
void __fastcall __noreturn google::protobuf::DescriptorProto::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C7322AA-000000000C7322BA
void __fastcall __noreturn google::protobuf::Enum::_slow_mutable_source_context()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 343: range 000000000C7317FA-000000000C73180A
void __fastcall __noreturn google::protobuf::EnumOptions::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C7317B8-000000000C7317C8
void __fastcall __noreturn google::protobuf::EnumValueOptions::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C731760-000000000C731770
void __fastcall __noreturn google::protobuf::ExtensionRangeOptions::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C7318A6-000000000C7318B6
void __fastcall __noreturn google::protobuf::FieldOptions::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C73199C-000000000C7319AC
void __fastcall __noreturn google::protobuf::FileDescriptorProto::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r14

  operator delete(v1, 0xE8uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C731A1A-000000000C731A2A
void __fastcall __noreturn google::protobuf::FileDescriptorSet::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0xD8uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C73174A-000000000C73175A
void __fastcall __noreturn google::protobuf::FileOptions::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C73123C-000000000C73124C
void __fastcall __noreturn google::protobuf::GeneratedCodeInfo::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x40uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C731890-000000000C7318A0
void __fastcall __noreturn google::protobuf::MessageOptions::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C73183A-000000000C73184A
void __fastcall __noreturn google::protobuf::MethodOptions::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C73178C-000000000C73179C
void __fastcall __noreturn google::protobuf::OneofOptions::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C732316-000000000C732326
void __fastcall __noreturn google::protobuf::Option::_slow_mutable_value()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x38uLL);
  _Unwind_Resume(v1);
};

// Line 343: range 000000000C7317E4-000000000C7317F4
void __fastcall __noreturn google::protobuf::ServiceOptions::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C7312F0-000000000C731300
void __fastcall __noreturn google::protobuf::SourceCodeInfo::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x70uLL);
  _Unwind_Resume(v0);
};

// Line 343: range 000000000C73223E-000000000C73224E
void __fastcall __noreturn google::protobuf::Type::_slow_mutable_source_context()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 343: range 000000000C7311DE-000000000C7311EE
void __fastcall __noreturn google::protobuf::UninterpretedOption::MergePartialFromCodedStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0x28uLL);
  _Unwind_Resume(v0);
};

// Line 531: range 000000000C8B6420-000000000C8B6430
void __fastcall google::protobuf::Arena::OwnDestructor<google::protobuf::MapKey>(
        google::protobuf::Arena *const this,
        google::protobuf::MapKey *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_destruct_object<google::protobuf::MapKey>);
};

// Line 531: range 000000000C8B6440-000000000C8B6450
void __fastcall google::protobuf::Arena::OwnDestructor<google::protobuf::MapValueRef>(
        google::protobuf::Arena *const this,
        google::protobuf::MapValueRef *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_destruct_object<google::protobuf::MapValueRef>);
};

// Line 531: range 000000000C8EEFE0-000000000C8EEFF0
void __fastcall google::protobuf::Arena::OwnDestructor<std::map<int,google::protobuf::internal::ExtensionSet::Extension>>(
        google::protobuf::Arena *const this,
        std::map<int,google::protobuf::internal::ExtensionSet::Extension> *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_destruct_object<std::map<int,google::protobuf::internal::ExtensionSet::Extension>>);
};

// Line 833: range 000000000C8F2A90-000000000C8F2AA0
void __fastcall google::protobuf::Arena::Own<google::protobuf::Any>(
        google::protobuf::Arena *const this,
        google::protobuf::Any *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940310-000000000C940320
void __fastcall google::protobuf::Arena::Own<google::protobuf::DescriptorProto>(
        google::protobuf::Arena *const this,
        google::protobuf::DescriptorProto *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C9402B0-000000000C9402C0
void __fastcall google::protobuf::Arena::Own<google::protobuf::DescriptorProto_ExtensionRange>(
        google::protobuf::Arena *const this,
        google::protobuf::DescriptorProto_ExtensionRange *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C9402E0-000000000C9402F0
void __fastcall google::protobuf::Arena::Own<google::protobuf::DescriptorProto_ReservedRange>(
        google::protobuf::Arena *const this,
        google::protobuf::DescriptorProto_ReservedRange *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C9403B0-000000000C9403C0
void __fastcall google::protobuf::Arena::Own<google::protobuf::EnumDescriptorProto>(
        google::protobuf::Arena *const this,
        google::protobuf::EnumDescriptorProto *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C9404D0-000000000C9404E0
void __fastcall google::protobuf::Arena::Own<google::protobuf::EnumOptions>(
        google::protobuf::Arena *const this,
        google::protobuf::EnumOptions *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C9403D0-000000000C9403E0
void __fastcall google::protobuf::Arena::Own<google::protobuf::EnumValueDescriptorProto>(
        google::protobuf::Arena *const this,
        google::protobuf::EnumValueDescriptorProto *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C9404F0-000000000C940500
void __fastcall google::protobuf::Arena::Own<google::protobuf::EnumValueOptions>(
        google::protobuf::Arena *const this,
        google::protobuf::EnumValueOptions *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940330-000000000C940340
void __fastcall google::protobuf::Arena::Own<google::protobuf::ExtensionRangeOptions>(
        google::protobuf::Arena *const this,
        google::protobuf::ExtensionRangeOptions *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940350-000000000C940360
void __fastcall google::protobuf::Arena::Own<google::protobuf::FieldDescriptorProto>(
        google::protobuf::Arena *const this,
        google::protobuf::FieldDescriptorProto *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940490-000000000C9404A0
void __fastcall google::protobuf::Arena::Own<google::protobuf::FieldOptions>(
        google::protobuf::Arena *const this,
        google::protobuf::FieldOptions *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940230-000000000C940240
void __fastcall google::protobuf::Arena::Own<google::protobuf::FileDescriptorProto>(
        google::protobuf::Arena *const this,
        google::protobuf::FileDescriptorProto *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940210-000000000C940220
void __fastcall google::protobuf::Arena::Own<google::protobuf::FileDescriptorSet>(
        google::protobuf::Arena *const this,
        google::protobuf::FileDescriptorSet *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940450-000000000C940460
void __fastcall google::protobuf::Arena::Own<google::protobuf::FileOptions>(
        google::protobuf::Arena *const this,
        google::protobuf::FileOptions *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940610-000000000C940620
void __fastcall google::protobuf::Arena::Own<google::protobuf::GeneratedCodeInfo>(
        google::protobuf::Arena *const this,
        google::protobuf::GeneratedCodeInfo *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C9405E0-000000000C9405F0
void __fastcall google::protobuf::Arena::Own<google::protobuf::GeneratedCodeInfo_Annotation>(
        google::protobuf::Arena *const this,
        google::protobuf::GeneratedCodeInfo_Annotation *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C8AB860-000000000C8AB870
void __fastcall google::protobuf::Arena::Own<google::protobuf::Message>(
        google::protobuf::Arena *const this,
        google::protobuf::Message *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940470-000000000C940480
void __fastcall google::protobuf::Arena::Own<google::protobuf::MessageOptions>(
        google::protobuf::Arena *const this,
        google::protobuf::MessageOptions *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940420-000000000C940430
void __fastcall google::protobuf::Arena::Own<google::protobuf::MethodDescriptorProto>(
        google::protobuf::Arena *const this,
        google::protobuf::MethodDescriptorProto *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940530-000000000C940540
void __fastcall google::protobuf::Arena::Own<google::protobuf::MethodOptions>(
        google::protobuf::Arena *const this,
        google::protobuf::MethodOptions *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940380-000000000C940390
void __fastcall google::protobuf::Arena::Own<google::protobuf::OneofDescriptorProto>(
        google::protobuf::Arena *const this,
        google::protobuf::OneofDescriptorProto *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C9404B0-000000000C9404C0
void __fastcall google::protobuf::Arena::Own<google::protobuf::OneofOptions>(
        google::protobuf::Arena *const this,
        google::protobuf::OneofOptions *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940400-000000000C940410
void __fastcall google::protobuf::Arena::Own<google::protobuf::ServiceDescriptorProto>(
        google::protobuf::Arena *const this,
        google::protobuf::ServiceDescriptorProto *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940510-000000000C940520
void __fastcall google::protobuf::Arena::Own<google::protobuf::ServiceOptions>(
        google::protobuf::Arena *const this,
        google::protobuf::ServiceOptions *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C9405C0-000000000C9405D0
void __fastcall google::protobuf::Arena::Own<google::protobuf::SourceCodeInfo>(
        google::protobuf::Arena *const this,
        google::protobuf::SourceCodeInfo *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C9405A0-000000000C9405B0
void __fastcall google::protobuf::Arena::Own<google::protobuf::SourceCodeInfo_Location>(
        google::protobuf::Arena *const this,
        google::protobuf::SourceCodeInfo_Location *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C970FC0-000000000C970FD0
void __fastcall google::protobuf::Arena::Own<google::protobuf::SourceContext>(
        google::protobuf::Arena *const this,
        google::protobuf::SourceContext *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940580-000000000C940590
void __fastcall google::protobuf::Arena::Own<google::protobuf::UninterpretedOption>(
        google::protobuf::Arena *const this,
        google::protobuf::UninterpretedOption *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C940550-000000000C940560
void __fastcall google::protobuf::Arena::Own<google::protobuf::UninterpretedOption_NamePart>(
        google::protobuf::Arena *const this,
        google::protobuf::UninterpretedOption_NamePart *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 840: range 000000000C89DC40-000000000C89DC50
void __fastcall google::protobuf::Arena::Own<google::protobuf::MessageLite>(
        google::protobuf::Arena *const this,
        google::protobuf::MessageLite *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::MessageLite>);
};

// Line 840: range 000000000C8AB840-000000000C8AB850
void __fastcall google::protobuf::Arena::Own<std::string>(google::protobuf::Arena *const this, std::string *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<std::string>);
};
