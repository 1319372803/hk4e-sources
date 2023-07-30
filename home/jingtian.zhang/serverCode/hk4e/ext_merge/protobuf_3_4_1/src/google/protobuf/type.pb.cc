// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/type.pb.cc

// Line 147: range 000000000C947530-000000000C94762B
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors(
        google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::_anonymous_namespace_ *this)
{
  int (**v1)(...); // rax
  __m128i si128; // xmm0
  __int64 v3; // [rsp+8h] [rbp-38h] BYREF
  google::protobuf::internal::FunctionClosure0 closure[2]; // [rsp+10h] [rbp-30h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::AddDescriptors(void)::once != 2 )
  {
    closure[0].self_deleting_ = 0;
    closure[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    closure[0].function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::AddDescriptors(void)::once,
      &closure[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(closure);
  }
  v3 = 26LL;
  closure[0]._vptr_Closure = (int (**)(...))&closure[0].self_deleting_;
  v1 = (int (**)(...))std::string::_M_create(closure, &v3, 0LL);
  closure[0]._vptr_Closure = v1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1A179090);
  *(_QWORD *)&closure[0].self_deleting_ = v3;
  qmemcpy(v1 + 2, "type.proto", 10);
  *(__m128i *)v1 = si128;
  closure[0].function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)v3;
  *((_BYTE *)closure[0]._vptr_Closure + v3) = 0;
  google::protobuf::internal::AssignDescriptors(
    (google::protobuf::DescriptorPool *)closure,
    (google::protobuf::internal::MigrationSchema *)&google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::schemas,
    (__int64)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::file_default_instances,
    (google::protobuf::uint32 *)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::offsets,
    0LL,
    (google::protobuf::internal::Mutex *)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata,
    (__int64)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_enum_descriptors,
    0LL);
  if ( (bool *)closure[0]._vptr_Closure != &closure[0].self_deleting_ )
    operator delete(closure[0]._vptr_Closure);
};

// Line 161: range 000000000C947440-000000000C9474A0
void google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_RegisterTypes()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
  google::protobuf::internal::RegisterAllTypes(
    google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::file_level_metadata,
    5);
};

// Line 167: range 000000000C949D60-000000000C949E10
void __cdecl google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "google/protobuf/type.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::InitDefaults((google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto *)0x2DD660);
  google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::InitDefaults((google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto *)0x2DD660);
  google::protobuf::Type::Type((google::protobuf::Type *)&google::protobuf::_Type_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_Type_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::Field::Field((google::protobuf::Field *)&google::protobuf::_Field_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_Field_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::Enum::Enum((google::protobuf::Enum *)&google::protobuf::_Enum_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_Enum_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::EnumValue::EnumValue((google::protobuf::EnumValue *)&google::protobuf::_EnumValue_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_EnumValue_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::Option::Option((google::protobuf::Option *)&google::protobuf::_Option_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_Option_default_instance_,
    (const void *)0x2DD660);
  *((_QWORD *)&google::protobuf::_Type_default_instance_._instance.union_.align_to_ptr + 12) = &google::protobuf::_SourceContext_default_instance_;
  *((_QWORD *)&google::protobuf::_Enum_default_instance_._instance.union_.align_to_ptr + 9) = &google::protobuf::_SourceContext_default_instance_;
  *((_QWORD *)&google::protobuf::_Option_default_instance_._instance.union_.align_to_ptr + 3) = &google::protobuf::_Any_default_instance_;
};

// Line 196: range 000000000C9474B0-000000000C947520
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl(
        google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::_anonymous_namespace_ *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
  google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    (google::protobuf::DescriptorPool *)&google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl(void)::descriptor,
    (const void *)0x63A);
  google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/type.proto",
    (const char *)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::protobuf_RegisterTypes);
  google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::AddDescriptors((google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto *)"google/protobuf/type.proto");
  google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::AddDescriptors((google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto *)"google/protobuf/type.proto");
};

// Line 267: range 000000000C947730-000000000C947736
bool __fastcall google::protobuf::Field_Kind_IsValid(int value)
{
  return (unsigned int)value <= 0x12;
};

// Line 322: range 000000000C9477A0-000000000C9477A6
bool __fastcall google::protobuf::Field_Cardinality_IsValid(int value)
{
  return (unsigned int)value <= 3;
};

// Line 347: range 000000000C947810-000000000C947816
bool __fastcall google::protobuf::Syntax_IsValid(int value)
{
  return (unsigned int)value <= 1;
};

// Line 359: range 000000000C947820-000000000C9478BE
void __fastcall google::protobuf::Type::_slow_mutable_source_context(google::protobuf::Type *this)
{
  unsigned __int64 ptr; // rax
  google::protobuf::Arena *hint; // rdi
  google::protobuf::SourceContext *AlignedAndAddCleanup; // rbp
  google::protobuf::SourceContext *v5; // rbp

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  hint = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
  if ( (ptr & 1) != 0 )
    hint = (google::protobuf::Arena *)hint->impl_.hint_;
  if ( hint )
  {
    if ( hint->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        hint,
        (const std::type_info *)&`typeinfo for'google::protobuf::SourceContext,
        0x20uLL);
    AlignedAndAddCleanup = (google::protobuf::SourceContext *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                &hint->impl_,
                                                                0x20uLL,
                                                                google::protobuf::internal::arena_destruct_object<google::protobuf::SourceContext>);
    google::protobuf::SourceContext::SourceContext(AlignedAndAddCleanup);
    this->source_context_ = AlignedAndAddCleanup;
  }
  else
  {
    v5 = (google::protobuf::SourceContext *)operator new(0x20uLL);
    google::protobuf::SourceContext::SourceContext(v5);
    this->source_context_ = v5;
  }
};

// Line 363: range 000000000C9478D0-000000000C94790C
google::protobuf::SourceContext *__fastcall google::protobuf::Type::_slow_release_source_context(
        google::protobuf::Type *this)
{
  google::protobuf::SourceContext *source_context; // r12

  source_context = this->source_context_;
  if ( source_context )
  {
    source_context = (google::protobuf::SourceContext *)operator new(0x20uLL);
    google::protobuf::SourceContext::SourceContext(source_context, this->source_context_);
    this->source_context_ = 0LL;
  }
  return source_context;
};

// Line 367: range 000000000C732254-000000000C732264
void __fastcall __noreturn google::protobuf::Type::_slow_release_source_context()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 375: range 000000000C947920-000000000C94792C
google::protobuf::SourceContext *__fastcall google::protobuf::Type::unsafe_arena_release_source_context(
        google::protobuf::Type *const this)
{
  google::protobuf::SourceContext *result; // rax

  result = this->source_context_;
  this->source_context_ = 0LL;
  return result;
};

// Line 380: range 000000000C947930-000000000C947984
void __fastcall google::protobuf::Type::unsafe_arena_set_allocated_source_context(
        google::protobuf::Type *const this,
        google::protobuf::SourceContext *source_context)
{
  unsigned __int64 v3; // rdx
  google::protobuf::SourceContext *v4; // rdi

  v3 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    v3 = *(_QWORD *)(v3 + 8);
  if ( v3 || (v4 = this->source_context_) == 0LL )
  {
    this->source_context_ = source_context;
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::SourceContext *))v4->_vptr_MessageLite + 1))(v4);
    this->source_context_ = source_context;
  }
};

// Line 401: range 000000000C949890-000000000C949960
void __fastcall google::protobuf::Type::Type(google::protobuf::Type *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A182498;
  this->_internal_metadata_.ptr_ = 0LL;
  this->fields_.arena_ = 0LL;
  *(_QWORD *)&this->fields_.current_size_ = 0LL;
  this->fields_.rep_ = 0LL;
  this->oneofs_.arena_ = 0LL;
  *(_QWORD *)&this->oneofs_.current_size_ = 0LL;
  this->oneofs_.rep_ = 0LL;
  this->options_.arena_ = 0LL;
  *(_QWORD *)&this->options_.current_size_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( this != (google::protobuf::Type *)&google::protobuf::_Type_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->source_context_ = 0LL;
  this->syntax_ = 0;
  this->_cached_size_ = 0;
};

// Line 409: range 000000000C949970-000000000C949A28
void __fastcall google::protobuf::Type::Type(google::protobuf::Type *this, google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A182498;
  this->fields_.arena_ = a2;
  *(_QWORD *)&this->fields_.current_size_ = 0LL;
  this->fields_.rep_ = 0LL;
  this->oneofs_.arena_ = a2;
  *(_QWORD *)&this->oneofs_.current_size_ = 0LL;
  this->oneofs_.rep_ = 0LL;
  this->options_.arena_ = a2;
  *(_QWORD *)&this->options_.current_size_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->source_context_ = 0LL;
  this->syntax_ = 0;
  this->_cached_size_ = 0;
};

// Line 420: range 000000000C94ACF0-000000000C94AF94
__int64 __fastcall google::protobuf::Type::Type(
        google::protobuf::Type *this,
        google::protobuf::TypeDefaultTypeInternal *a2)
{
  int v4; // r12d
  int v5; // r12d
  int v6; // r12d
  unsigned __int64 v7; // rax
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v9; // rdi
  std::string *v10; // rdx
  google::protobuf::Arena *hint; // rsi
  google::protobuf::SourceContext *v12; // r12
  __int64 result; // rax
  void **v14; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v15; // rax
  int v16; // r12d
  void **v17; // r15
  void **v18; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v19; // rax
  int v20; // r12d
  void **v21; // r14
  void **v22; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v24; // r12d
  google::protobuf::UnknownFieldSet *other; // [rsp+8h] [rbp-40h]
  google::protobuf::UnknownFieldSet *othera; // [rsp+8h] [rbp-40h]

  *(_QWORD *)&this->fields_.current_size_ = 0LL;
  v4 = *((_DWORD *)&a2->_instance.union_.align_to_ptr + 6);
  this->_vptr_MessageLite = (int (**)(...))off_1A182498;
  this->_internal_metadata_.ptr_ = 0LL;
  this->fields_.arena_ = 0LL;
  this->fields_.rep_ = 0LL;
  if ( v4 )
  {
    v21 = (void **)(*((_QWORD *)&a2->_instance.union_.align_to_ptr + 4) + 8LL);
    v22 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->fields_, v4);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Field>::TypeHandler>(
      &this->fields_,
      v22,
      v21,
      v4,
      this->fields_.rep_->allocated_size - this->fields_.current_size_);
    rep = this->fields_.rep_;
    v24 = this->fields_.current_size_ + v4;
    this->fields_.current_size_ = v24;
    if ( v24 > rep->allocated_size )
      rep->allocated_size = v24;
  }
  *(_QWORD *)&this->oneofs_.current_size_ = 0LL;
  v5 = *((_DWORD *)&a2->_instance.union_.align_to_ptr + 12);
  this->oneofs_.arena_ = 0LL;
  this->oneofs_.rep_ = 0LL;
  if ( v5 )
  {
    v17 = (void **)(*((_QWORD *)&a2->_instance.union_.align_to_ptr + 7) + 8LL);
    v18 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->oneofs_, v5);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
      &this->oneofs_,
      v18,
      v17,
      v5,
      this->oneofs_.rep_->allocated_size - this->oneofs_.current_size_);
    v19 = this->oneofs_.rep_;
    v20 = this->oneofs_.current_size_ + v5;
    this->oneofs_.current_size_ = v20;
    if ( v20 > v19->allocated_size )
      v19->allocated_size = v20;
  }
  *(_QWORD *)&this->options_.current_size_ = 0LL;
  v6 = *((_DWORD *)&a2->_instance.union_.align_to_ptr + 18);
  this->options_.arena_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( v6 )
  {
    othera = (google::protobuf::UnknownFieldSet *)(*((_QWORD *)&a2->_instance.union_.align_to_ptr + 10) + 8LL);
    v14 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->options_, v6);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
      &this->options_,
      v14,
      (void **)&othera->fields_,
      v6,
      this->options_.rep_->allocated_size - this->options_.current_size_);
    v15 = this->options_.rep_;
    v16 = this->options_.current_size_ + v6;
    this->options_.current_size_ = v16;
    if ( v16 > v15->allocated_size )
      v15->allocated_size = v16;
  }
  v7 = *((_QWORD *)&a2->_instance.union_.align_to_ptr + 1);
  this->_cached_size_ = 0;
  if ( (v7 & 1) != 0 )
  {
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    other = (google::protobuf::UnknownFieldSet *)(v7 & 0xFFFFFFFFFFFFFFFELL);
    if ( (ptr & 1) != 0 )
      v9 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v9, other);
  }
  v10 = (std::string *)*((_QWORD *)&a2->_instance.union_.align_to_ptr + 11);
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v10->_M_string_length )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->name_.ptr_, hint, (__int64)v10);
  }
  if ( a2 == &google::protobuf::_Type_default_instance_ || !*((_QWORD *)&a2->_instance.union_.align_to_ptr + 12) )
  {
    this->source_context_ = 0LL;
  }
  else
  {
    v12 = (google::protobuf::SourceContext *)operator new(0x20uLL);
    google::protobuf::SourceContext::SourceContext(
      v12,
      *((const google::protobuf::SourceContext **)&a2->_instance.union_.align_to_ptr + 12));
    this->source_context_ = v12;
  }
  result = *((unsigned int *)&a2->_instance.union_.align_to_ptr + 26);
  this->syntax_ = result;
  return result;
};

// Line 434: range 000000000C732598-000000000C7325CC
void __fastcall __noreturn google::protobuf::Type::Type()
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *v2; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v3; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v4; // r14
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // r15

  operator delete(v2, 0x20uLL);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(v5);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(v4);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Field>::TypeHandler>(v3);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v0 + 1);
  _Unwind_Resume(v1);
};

// Line 450: range 000000000C949B40-000000000C949B52
void __fastcall google::protobuf::Type::~Type(google::protobuf::Type *const this)
{
  google::protobuf::Type::~Type(this);
  operator delete(this, 0x70uLL);
};

// Line 450: range 000000000C949AB0-000000000C949B34
void __fastcall google::protobuf::Type::~Type(google::protobuf::Type *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rdx

  this->_vptr_MessageLite = (int (**)(...))off_1A182498;
  google::protobuf::Type::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(&this->options_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(&this->oneofs_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Field>::TypeHandler>(&this->fields_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v2 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v3 = ptr & 0xFFFFFFFFFFFFFFFELL;
    if ( (ptr & 1) != 0 )
      v3 = v2[1];
    if ( !v3 && v2 )
    {
      if ( *v2 )
        google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
      operator delete(v2, 0x10uLL);
    }
  }
};

// Line 455: range 000000000C9479B0-000000000C947A34
void __fastcall google::protobuf::Type::SharedDtor(google::protobuf::Type *const this)
{
  unsigned __int64 v1; // rdx
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::SourceContext *source_context; // rdi

  v1 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    v1 = *(_QWORD *)(v1 + 8);
  if ( !v1 )
  {
    ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
    if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
    {
      if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
        operator delete(ptr->union_.align_to_ptr);
      operator delete(ptr, 0x20uLL);
    }
    if ( this != (google::protobuf::Type *const)&google::protobuf::_Type_default_instance_ )
    {
      source_context = this->source_context_;
      if ( source_context )
        (*((void (__fastcall **)(google::protobuf::SourceContext *))source_context->_vptr_MessageLite + 1))(source_context);
    }
  }
};

// Line 469: range 000000000C947A40-000000000C947AA8
void __fastcall google::protobuf::Type::ArenaDtor(void *object)
{
  ;
};

// Line 474: range 000000000C946B00-000000000C946B03
void __fastcall google::protobuf::Type::SetCachedSize(const google::protobuf::Type *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 487: range 000000000C949A30-000000000C949AA7
google::protobuf::Type *__fastcall google::protobuf::Type::New(
        google::protobuf::Type *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::Type *Aligned; // r12
  google::protobuf::Type *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::Type,
        0x70uLL);
    Aligned = (google::protobuf::Type *)google::protobuf::internal::ArenaImpl::AllocateAligned(&a2->impl_, 0x70uLL);
    google::protobuf::Type::Type(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::Type *)operator new(0x70uLL);
    google::protobuf::Type::Type(v4);
    return v4;
  }
};

// Line 491: range 000000000C948F40-000000000C94904C
void __fastcall google::protobuf::Type::Clear(google::protobuf::Type *const this)
{
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  google::protobuf::Field **elements; // rbx
  __int64 v5; // r12
  google::protobuf::Field *v6; // rdi
  int v7; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v8; // rcx
  void **v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  std::string *ptr; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  google::protobuf::SourceContext *source_context; // r8
  google::protobuf::UnknownFieldSet *v16; // rdi

  current_size = this->fields_.current_size_;
  if ( current_size > 0 )
  {
    rep = this->fields_.rep_;
    elements = (google::protobuf::Field **)rep->elements;
    v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v6 = *elements++;
      google::protobuf::Field::Clear(v6);
    }
    while ( elements != (google::protobuf::Field **)v5 );
    this->fields_.current_size_ = 0;
  }
  v7 = this->oneofs_.current_size_;
  if ( v7 > 0 )
  {
    v8 = this->oneofs_.rep_;
    v9 = v8->elements;
    v10 = (__int64)&v8[1] + 8 * (unsigned int)(v7 - 1);
    do
    {
      v11 = (__int64)*v9++;
      *(_QWORD *)(v11 + 8) = 0LL;
      **(_BYTE **)v11 = 0;
    }
    while ( (void **)v10 != v9 );
    this->oneofs_.current_size_ = 0;
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
    (google::protobuf::internal::RepeatedPtrFieldBase *const)&this->options_.current_size_,
    &this->options_.rep_);
  ptr = this->name_.ptr_;
  if ( ptr != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  v13 = (unsigned __int64)this->_internal_metadata_.ptr_;
  v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v13 & 1) != 0 )
    v14 = *(_QWORD *)(v14 + 8);
  if ( !v14 )
  {
    source_context = this->source_context_;
    if ( source_context )
    {
      (*((void (__fastcall **)(google::protobuf::SourceContext *))source_context->_vptr_MessageLite + 1))(this->source_context_);
      v13 = (unsigned __int64)this->_internal_metadata_.ptr_;
    }
  }
  this->source_context_ = 0LL;
  this->syntax_ = 0;
  if ( (v13 & 1) != 0 )
  {
    v16 = (google::protobuf::UnknownFieldSet *)(v13 & 0xFFFFFFFFFFFFFFFELL);
    if ( v16->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v16);
  }
};

// Line 510: range 000000000C94C820-000000000C94CE1C
__int64 __fastcall google::protobuf::Type::MergePartialFromCodedStream(
        google::protobuf::Type *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer_end; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  unsigned __int64 v9; // rax
  google::protobuf::UnknownFieldSet *v10; // rdx
  const google::protobuf::uint8 *v11; // rax
  google::protobuf::uint32 v12; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  google::protobuf::SourceContext *source_context; // r13
  const google::protobuf::uint8 *v15; // rax
  int v16; // esi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  google::protobuf::Option *v21; // r13
  const google::protobuf::uint8 *v22; // rax
  int v23; // esi
  std::pair<int,int> v24; // rax
  int first; // r14d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v26; // rax
  __int64 v27; // rcx
  int v28; // edx
  std::string *v29; // rsi
  const char *v30; // r8
  const char *v31; // rcx
  std::string *v32; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::Field *Aligned; // r13
  const google::protobuf::uint8 *v37; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v39; // rax
  google::protobuf::Arena *hint; // rsi
  std::string *v41; // r8
  int v42; // ecx
  google::protobuf::Arena *v43; // r14
  __int64 v44; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v45; // rdx
  int v46; // ecx
  google::protobuf::Arena *v47; // rdi
  std::string *AlignedAndAddCleanup; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v49; // rdx
  __int64 v50; // rax
  int total_size; // ecx
  google::protobuf::Arena *arena; // r14
  __int64 v53; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v54; // rdx
  std::pair<int,int> v55; // rax

  p_internal_metadata = &this->_internal_metadata_;
  buffer_end = a2->buffer_end_;
  buffer = a2->buffer_;
LABEL_2:
  if ( buffer_end <= buffer )
    goto LABEL_11;
  while ( 1 )
  {
    TagFallback = *buffer;
    if ( (char)TagFallback <= 0 )
      break;
    a2->buffer_ = buffer + 1;
LABEL_13:
    if ( TagFallback > 0x37 )
      goto handle_unusual_24;
    switch ( TagFallback >> 3 )
    {
      case 0u:
        goto handle_unusual_24;
      case 1u:
        ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
        v9 = ptr & 1;
        if ( TagFallback != 10 )
          goto LABEL_7;
        hint = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
        if ( (ptr & 1) != 0 )
          hint = (google::protobuf::Arena *)hint->impl_.hint_;
        v41 = this->name_.ptr_;
        if ( v41 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstance(
            &this->name_.ptr_,
            hint,
            (__int64)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          v41 = this->name_.ptr_;
        }
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, v41) )
          return 0LL;
        v32 = this->name_.ptr_;
        v31 = "google.protobuf.Type.name";
        goto LABEL_61;
      case 2u:
        if ( TagFallback != 18 )
          goto LABEL_6;
        rep = this->fields_.rep_;
        if ( !rep )
        {
          total_size = this->fields_.total_size_;
LABEL_80:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->fields_, total_size + 1);
          rep = this->fields_.rep_;
          allocated_size = rep->allocated_size;
          goto LABEL_81;
        }
        current_size = this->fields_.current_size_;
        allocated_size = rep->allocated_size;
        if ( (int)current_size < rep->allocated_size )
        {
          Aligned = (google::protobuf::Field *)rep->elements[current_size];
          this->fields_.current_size_ = current_size + 1;
          goto LABEL_48;
        }
        total_size = this->fields_.total_size_;
        if ( allocated_size == total_size )
          goto LABEL_80;
LABEL_81:
        arena = this->fields_.arena_;
        rep->allocated_size = allocated_size + 1;
        if ( arena )
        {
          if ( arena->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              arena,
              (const std::type_info *)&`typeinfo for'google::protobuf::Field,
              0x60uLL);
          Aligned = (google::protobuf::Field *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                 &arena->impl_,
                                                 0x60uLL);
          google::protobuf::Field::Field(Aligned, arena);
        }
        else
        {
          Aligned = (google::protobuf::Field *)operator new(0x60uLL);
          google::protobuf::Field::Field(Aligned);
        }
        v53 = this->fields_.current_size_;
        v54 = this->fields_.rep_;
        this->fields_.current_size_ = v53 + 1;
        v54->elements[v53] = Aligned;
LABEL_48:
        v37 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_
          && (VarintSizeAsIntFallback = *v37, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
        {
          a2->buffer_ = v37 + 1;
        }
        else
        {
          VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( VarintSizeAsIntFallback < 0 )
            return 0LL;
        }
        v39 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
        first = v39.first;
        if ( v39.second >= 0 && (unsigned __int8)google::protobuf::Field::MergePartialFromCodedStream(Aligned, a2) )
          goto LABEL_89;
        return 0LL;
      case 3u:
        if ( TagFallback != 26 )
          goto LABEL_6;
        v26 = this->oneofs_.rep_;
        if ( !v26 )
        {
          v46 = this->oneofs_.total_size_;
LABEL_73:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->oneofs_, v46 + 1);
          v26 = this->oneofs_.rep_;
          v28 = v26->allocated_size;
          goto LABEL_74;
        }
        v27 = this->oneofs_.current_size_;
        v28 = v26->allocated_size;
        if ( (int)v27 < v26->allocated_size )
        {
          v29 = (std::string *)v26->elements[v27];
          this->oneofs_.current_size_ = v27 + 1;
          goto LABEL_42;
        }
        v46 = this->oneofs_.total_size_;
        if ( v28 == v46 )
          goto LABEL_73;
LABEL_74:
        v47 = this->oneofs_.arena_;
        v26->allocated_size = v28 + 1;
        if ( v47 )
        {
          if ( v47->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(v47, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
          AlignedAndAddCleanup = (std::string *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                  &v47->impl_,
                                                  0x20uLL,
                                                  google::protobuf::internal::arena_destruct_object<std::string>);
        }
        else
        {
          AlignedAndAddCleanup = (std::string *)operator new(0x20uLL);
        }
        v29 = AlignedAndAddCleanup;
        AlignedAndAddCleanup->_anon_0._M_local_buf[0] = 0;
        v49 = this->oneofs_.rep_;
        AlignedAndAddCleanup->_M_dataplus._M_p = AlignedAndAddCleanup->_anon_0._M_local_buf;
        v50 = this->oneofs_.current_size_;
        v29->_M_string_length = 0LL;
        this->oneofs_.current_size_ = v50 + 1;
        v49->elements[v50] = v29;
LABEL_42:
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, v29) )
          return 0LL;
        v31 = "google.protobuf.Type.oneofs";
        v32 = (std::string *)this->oneofs_.rep_->elements[this->oneofs_.current_size_ - 1];
LABEL_61:
        if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                 (google::protobuf::internal::WireFormatLite *)v32->_M_dataplus._M_p,
                                 (const char *)LODWORD(v32->_M_string_length),
                                 0,
                                 (google::protobuf::internal::WireFormatLite::Operation)v31,
                                 v30) )
          return 0LL;
        break;
      case 4u:
        if ( TagFallback != 34 )
          goto LABEL_6;
        v18 = this->options_.rep_;
        if ( !v18 )
        {
          v42 = this->options_.total_size_;
LABEL_66:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->options_, v42 + 1);
          v18 = this->options_.rep_;
          v20 = v18->allocated_size;
          goto LABEL_67;
        }
        v19 = this->options_.current_size_;
        v20 = v18->allocated_size;
        if ( (int)v19 < v18->allocated_size )
        {
          v21 = (google::protobuf::Option *)v18->elements[v19];
          this->options_.current_size_ = v19 + 1;
          goto LABEL_32;
        }
        v42 = this->options_.total_size_;
        if ( v20 == v42 )
          goto LABEL_66;
LABEL_67:
        v43 = this->options_.arena_;
        v18->allocated_size = v20 + 1;
        if ( v43 )
        {
          if ( v43->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              v43,
              (const std::type_info *)&`typeinfo for'google::protobuf::Option,
              0x28uLL);
          v21 = (google::protobuf::Option *)google::protobuf::internal::ArenaImpl::AllocateAligned(&v43->impl_, 0x28uLL);
          google::protobuf::Option::Option(v21, v43);
        }
        else
        {
          v21 = (google::protobuf::Option *)operator new(0x28uLL);
          google::protobuf::Option::Option(v21);
        }
        v44 = this->options_.current_size_;
        v45 = this->options_.rep_;
        this->options_.current_size_ = v44 + 1;
        v45->elements[v44] = v21;
LABEL_32:
        v22 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v23 = *v22, (unsigned int)v23 <= 0x7F) )
        {
          a2->buffer_ = v22 + 1;
        }
        else
        {
          v23 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v23 < 0 )
            return 0LL;
        }
        v24 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v23);
        first = v24.first;
        if ( v24.second < 0 || !google::protobuf::Option::MergePartialFromCodedStream(v21, a2) )
          return 0LL;
LABEL_89:
        if ( !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
          return 0LL;
        break;
      case 5u:
        if ( TagFallback != 42 )
          goto LABEL_6;
        source_context = this->source_context_;
        if ( !source_context )
        {
          google::protobuf::Type::_slow_mutable_source_context(this);
          source_context = this->source_context_;
        }
        v15 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v16 = *v15, (unsigned int)v16 <= 0x7F) )
        {
          a2->buffer_ = v15 + 1;
        }
        else
        {
          v16 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v16 < 0 )
            return 0LL;
        }
        v55 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v16);
        first = v55.first;
        if ( v55.second >= 0 && google::protobuf::SourceContext::MergePartialFromCodedStream(source_context, a2) )
          goto LABEL_89;
        return 0LL;
      case 6u:
        if ( TagFallback != 48 )
          goto LABEL_6;
        v11 = a2->buffer_;
        buffer_end = a2->buffer_end_;
        if ( a2->buffer_ >= buffer_end )
        {
          v12 = 0;
        }
        else
        {
          v12 = *v11;
          if ( *(char *)v11 >= 0 )
          {
            buffer = v11 + 1;
            a2->buffer_ = buffer;
            goto LABEL_20;
          }
        }
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v12);
        v12 = Varint32Fallback;
        if ( Varint32Fallback < 0 )
          return 0LL;
        buffer = a2->buffer_;
        buffer_end = a2->buffer_end_;
LABEL_20:
        this->syntax_ = v12;
        goto LABEL_2;
    }
LABEL_10:
    buffer = a2->buffer_;
    if ( a2->buffer_end_ <= a2->buffer_ )
    {
LABEL_11:
      TagFallback = 0;
      break;
    }
  }
  TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
  if ( TagFallback - 1 <= 0x7E )
    goto LABEL_13;
handle_unusual_24:
  if ( TagFallback )
  {
LABEL_6:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v9 = ptr & 1;
LABEL_7:
    if ( v9 )
      v10 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v10) )
      return 0LL;
    goto LABEL_10;
  }
  return 1LL;
};

// Line 624: range 000000000C946C20-000000000C946DA6
void __fastcall google::protobuf::Type::SerializeWithCachedSizes(
        const google::protobuf::Type *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const char *v2; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  int current_size; // r13d
  int i; // ebp
  __int64 v8; // rdx
  int v9; // r14d
  int v10; // ebp
  __int64 v11; // r13
  google::protobuf::internal::WireFormatLite **v12; // rax
  int v13; // r13d
  int j; // ebp
  __int64 v15; // rdx
  google::protobuf::SourceContext *source_context; // rsi
  int syntax; // esi
  google::protobuf::UnknownFieldSet *v18; // rdi
  const google::protobuf::UnknownFieldSet *v19; // rdi

  ptr = this->name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Type.name",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  }
  current_size = this->fields_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v8 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        2,
        (const google::protobuf::MessageLite *)this->fields_.rep_->elements[v8],
        output);
    }
  }
  v9 = this->oneofs_.current_size_;
  if ( v9 > 0 )
  {
    v10 = 0;
    do
    {
      v11 = v10++;
      v12 = (google::protobuf::internal::WireFormatLite **)this->oneofs_.rep_->elements[v11];
      google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        *v12,
        (const char *)*((unsigned int *)v12 + 2),
        1,
        (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Type.oneofs",
        v2);
      google::protobuf::internal::WireFormatLite::WriteString(3LL, this->oneofs_.rep_->elements[v11], output);
    }
    while ( v9 != v10 );
  }
  v13 = this->options_.current_size_;
  if ( v13 )
  {
    for ( j = 0; j != v13; ++j )
    {
      v15 = j;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        4,
        (const google::protobuf::MessageLite *)this->options_.rep_->elements[v15],
        output);
    }
  }
  if ( this != (const google::protobuf::Type *const)&google::protobuf::_Type_default_instance_ )
  {
    source_context = this->source_context_;
    if ( source_context )
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(5, source_context, output);
  }
  syntax = this->syntax_;
  if ( syntax )
    google::protobuf::internal::WireFormatLite::WriteEnum(6, syntax, output);
  v18 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v18 & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)v18 & 1) != 0 )
      v19 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFELL);
    else
      v19 = google::protobuf::UnknownFieldSet::default_instance(v18);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v19, output);
  }
};

// Line 683: range 000000000C94D1C0-000000000C94D416
google::protobuf::uint8 *__fastcall google::protobuf::Type::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::Type *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const char *v3; // r8
  const google::protobuf::Type *v4; // r14
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  int current_size; // ebx
  int i; // r15d
  google::protobuf::uint8 *v11; // rdx
  unsigned int j; // eax
  char v13; // cl
  int v14; // r13d
  int v15; // r15d
  __int64 v16; // rbx
  google::protobuf::internal::WireFormatLite **v17; // rax
  int v18; // ebx
  int k; // r15d
  google::protobuf::uint8 *v20; // rdx
  unsigned int m; // eax
  char v22; // cl
  unsigned int v23; // eax
  google::protobuf::uint8 *n; // rdx
  char v25; // cl
  unsigned __int64 syntax; // rcx
  google::protobuf::uint8 *ii; // rdx
  char v28; // al
  unsigned __int64 v29; // rax
  const google::protobuf::UnknownFieldSet *v30; // rdi

  v4 = this;
  ptr = this->name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Type.name",
      v3);
    this = (const google::protobuf::Type *const)this->name_.ptr_;
    *target = 10;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray((const std::string *)this, target + 1);
  }
  current_size = v4->fields_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      this = (const google::protobuf::Type *const)v4->fields_.rep_->elements[i];
      *target = 18;
      v11 = target + 1;
      for ( j = HIDWORD(this->name_.ptr_); j > 0x7F; *(v11 - 1) = v13 | 0x80 )
      {
        v13 = j;
        j >>= 7;
        ++v11;
      }
      *v11 = j;
      target = google::protobuf::Field::InternalSerializeWithCachedSizesToArray(
                 (const google::protobuf::Field *const)this,
                 deterministic,
                 v11 + 1);
    }
  }
  v14 = v4->oneofs_.current_size_;
  if ( v14 > 0 )
  {
    v15 = 0;
    do
    {
      v16 = v15++;
      v17 = (google::protobuf::internal::WireFormatLite **)v4->oneofs_.rep_->elements[v16];
      google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        *v17,
        (const char *)*((unsigned int *)v17 + 2),
        1,
        (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Type.oneofs",
        v3);
      this = (const google::protobuf::Type *const)v4->oneofs_.rep_->elements[v16];
      *target = 26;
      target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(
                 (const std::string *)this,
                 target + 1);
    }
    while ( v15 != v14 );
  }
  v18 = v4->options_.current_size_;
  if ( v18 )
  {
    for ( k = 0; k != v18; ++k )
    {
      this = (const google::protobuf::Type *const)v4->options_.rep_->elements[k];
      *target = 34;
      v20 = target + 1;
      for ( m = (unsigned int)this->fields_.rep_; m > 0x7F; *(v20 - 1) = v22 | 0x80 )
      {
        v22 = m;
        m >>= 7;
        ++v20;
      }
      *v20 = m;
      target = google::protobuf::Option::InternalSerializeWithCachedSizesToArray(
                 (const google::protobuf::Option *const)this,
                 deterministic,
                 v20 + 1);
    }
  }
  if ( v4 != (const google::protobuf::Type *)&google::protobuf::_Type_default_instance_ )
  {
    this = (const google::protobuf::Type *const)v4->source_context_;
    if ( this )
    {
      *target = 42;
      v23 = this->fields_.current_size_;
      for ( n = target + 1; v23 > 0x7F; *(n - 1) = v25 | 0x80 )
      {
        v25 = v23;
        v23 >>= 7;
        ++n;
      }
      *n = v23;
      target = google::protobuf::SourceContext::InternalSerializeWithCachedSizesToArray(
                 (const google::protobuf::SourceContext *const)this,
                 deterministic,
                 n + 1);
    }
  }
  syntax = v4->syntax_;
  if ( (_DWORD)syntax )
  {
    *target = 48;
    for ( ii = target + 1; syntax > 0x7F; *(ii - 1) = v28 | 0x80 )
    {
      v28 = syntax;
      syntax >>= 7;
      ++ii;
    }
    *ii = syntax;
    target = ii + 1;
  }
  v29 = (unsigned __int64)v4->_internal_metadata_.ptr_;
  if ( (v29 & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return target;
  if ( (v29 & 1) != 0 )
    v30 = (const google::protobuf::UnknownFieldSet *)(v29 & 0xFFFFFFFFFFFFFFFELL);
  else
    v30 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v30, target);
};

// Line 747: range 000000000C94D9E0-000000000C94DB7E
size_t __fastcall google::protobuf::Type::ByteSizeLong(const google::protobuf::Type *const this)
{
  size_t v1; // rax
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v4; // rdi
  __int64 current_size; // r12
  size_t v6; // rbp
  int v7; // r13d
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // r13
  size_t v12; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  void **elements; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r12
  size_t v19; // r13
  int v20; // ebp
  __int64 v21; // rdx
  size_t v22; // rdx
  unsigned int v23; // eax
  std::string::size_type M_string_length; // rax
  __int64 v25; // rbp
  google::protobuf::SourceContext *source_context; // rdi
  size_t v27; // rdx
  unsigned int v28; // eax
  int syntax; // eax
  __int64 v30; // rax

  v1 = 0LL;
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  current_size = (unsigned int)this->fields_.current_size_;
  v6 = v1 + current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::Field::ByteSizeLong((const google::protobuf::Field *const)this->fields_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  v11 = (unsigned int)this->oneofs_.current_size_;
  v12 = v11 + v6;
  if ( (int)v11 > 0 )
  {
    rep = this->oneofs_.rep_;
    elements = rep->elements;
    v15 = (__int64)&rep[1] + 8 * (unsigned int)(v11 - 1);
    do
    {
      v16 = (__int64)*elements++;
      _BitScanReverse(&v17, *(_QWORD *)(v16 + 8) | 1);
      v12 += *(_QWORD *)(v16 + 8) + ((9 * v17 + 73) >> 6);
    }
    while ( (void **)v15 != elements );
  }
  v18 = (unsigned int)this->options_.current_size_;
  v19 = v12 + v18;
  if ( (_DWORD)v18 )
  {
    v20 = 0;
    do
    {
      v21 = v20++;
      v22 = google::protobuf::Option::ByteSizeLong((const google::protobuf::Option *const)this->options_.rep_->elements[v21]);
      _BitScanReverse(&v23, v22 | 1);
      v19 += v22 + ((9 * v23 + 73) >> 6);
    }
    while ( (_DWORD)v18 != v20 );
  }
  M_string_length = this->name_.ptr_->_M_string_length;
  if ( M_string_length )
  {
    v25 = M_string_length + v19 + 1;
    _BitScanReverse((unsigned int *)&M_string_length, M_string_length | 1);
    v19 = v25 + ((unsigned int)(9 * M_string_length + 73) >> 6);
  }
  if ( this != (const google::protobuf::Type *const)&google::protobuf::_Type_default_instance_ )
  {
    source_context = this->source_context_;
    if ( source_context )
    {
      v27 = google::protobuf::SourceContext::ByteSizeLong(source_context);
      _BitScanReverse(&v28, v27 | 1);
      v19 += v27 + 1 + ((9 * v28 + 73) >> 6);
    }
  }
  syntax = this->syntax_;
  if ( syntax )
  {
    if ( syntax < 0 )
    {
      v30 = 10LL;
    }
    else
    {
      _BitScanReverse((unsigned int *)&syntax, syntax | 1);
      v30 = (unsigned int)(9 * syntax + 73) >> 6;
    }
    v19 += v30 + 1;
  }
  this->_cached_size_ = v19;
  return v19;
};

// Line 813: range 000000000C94A930-000000000C94A97D
void __fastcall google::protobuf::Type::MergeFrom(
        google::protobuf::Type *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::Type *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::Type *)__dynamic_cast(
                                         from,
                                         (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                         (const struct __class_type_info *)&`typeinfo for'google::protobuf::Type,
                                         0LL);
  if ( v2 )
    google::protobuf::Type::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 828: range 000000000C94A6F0-000000000C94A924
void __fastcall google::protobuf::Type::MergeFrom(
        google::protobuf::Type *const this,
        const google::protobuf::Type *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  int v9; // r12d
  int v10; // r12d
  std::string *v11; // rsi
  google::protobuf::SourceContext *source_context; // rsi
  google::protobuf::SourceContext *v13; // rdi
  int syntax; // eax
  void **v15; // r13
  void **v16; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v17; // rax
  int v18; // r12d
  google::protobuf::Arena *hint; // r8
  std::string *v20; // rdi
  void **v21; // r13
  void **v22; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v23; // rax
  int v24; // r12d
  void **elements; // r13
  void **v26; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v28; // r12d

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->fields_.current_size_;
  if ( current_size )
  {
    elements = from->fields_.rep_->elements;
    v26 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->fields_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Field>::TypeHandler>(
      &this->fields_,
      v26,
      elements,
      current_size,
      this->fields_.rep_->allocated_size - this->fields_.current_size_);
    rep = this->fields_.rep_;
    v28 = this->fields_.current_size_ + current_size;
    this->fields_.current_size_ = v28;
    if ( v28 > rep->allocated_size )
      rep->allocated_size = v28;
  }
  v9 = from->oneofs_.current_size_;
  if ( v9 )
  {
    v21 = from->oneofs_.rep_->elements;
    v22 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->oneofs_, v9);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
      &this->oneofs_,
      v22,
      v21,
      v9,
      this->oneofs_.rep_->allocated_size - this->oneofs_.current_size_);
    v23 = this->oneofs_.rep_;
    v24 = this->oneofs_.current_size_ + v9;
    this->oneofs_.current_size_ = v24;
    if ( v24 > v23->allocated_size )
      v23->allocated_size = v24;
  }
  v10 = from->options_.current_size_;
  if ( v10
    && (v15 = from->options_.rep_->elements,
        v16 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->options_, v10),
        google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
          &this->options_,
          v16,
          v15,
          v10,
          this->options_.rep_->allocated_size - this->options_.current_size_),
        v17 = this->options_.rep_,
        v18 = this->options_.current_size_ + v10,
        this->options_.current_size_ = v18,
        v18 > v17->allocated_size) )
  {
    v11 = from->name_.ptr_;
    v17->allocated_size = v18;
    if ( !v11->_M_string_length )
      goto LABEL_9;
  }
  else
  {
    v11 = from->name_.ptr_;
    if ( !v11->_M_string_length )
      goto LABEL_9;
  }
  hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    hint = (google::protobuf::Arena *)hint->impl_.hint_;
  v20 = this->name_.ptr_;
  if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->name_.ptr_, hint, (__int64)v11);
  else
    std::string::_M_assign(v20, v11);
LABEL_9:
  if ( from != (const google::protobuf::Type *)&google::protobuf::_Type_default_instance_ )
  {
    source_context = from->source_context_;
    if ( source_context )
    {
      v13 = this->source_context_;
      if ( !v13 )
      {
        google::protobuf::Type::_slow_mutable_source_context(this);
        source_context = from->source_context_;
        v13 = this->source_context_;
        if ( !source_context )
          source_context = (google::protobuf::SourceContext *)&google::protobuf::_SourceContext_default_instance_;
      }
      google::protobuf::SourceContext::MergeFrom(v13, source_context);
    }
  }
  syntax = from->syntax_;
  if ( syntax )
    this->syntax_ = syntax;
};

// Line 851: range 000000000C94A990-000000000C94A9C0
void __fastcall google::protobuf::Type::CopyFrom(
        google::protobuf::Type *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::Type::Clear(this);
    google::protobuf::Type::MergeFrom(this, from);
  }
};

// Line 858: range 000000000C94AAD0-000000000C94AB00
void __fastcall google::protobuf::Type::CopyFrom(
        google::protobuf::Type *const this,
        const google::protobuf::Type *from)
{
  if ( from != this )
  {
    google::protobuf::Type::Clear(this);
    google::protobuf::Type::MergeFrom(this, from);
  }
};

// Line 865: range 000000000C946B10-000000000C946B15
bool __fastcall google::protobuf::EnumValue::IsInitialized(const google::protobuf::Type *const this)
{
  return 1;
};

// Line 868: range 000000000C94A9D0-000000000C94AAC4
void __fastcall google::protobuf::Type::Swap(google::protobuf::Type *const this, google::protobuf::Type *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::Type *v5; // r13
  unsigned __int64 v6; // rdx

  if ( other != this )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    v4 = (unsigned __int64)other->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
    if ( ((__int64)other->_internal_metadata_.ptr_ & 1) != 0 )
      v4 = *(_QWORD *)(v4 + 8);
    if ( (google::protobuf::Arena *)v4 == hint )
    {
      google::protobuf::Type::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::Type::New(this, hint);
      google::protobuf::Type::MergeFrom(v5, other);
      google::protobuf::Type::Clear(other);
      google::protobuf::Type::MergeFrom(other, this);
      google::protobuf::Type::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::Type *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 882: range 000000000C948910-000000000C948920
void __fastcall google::protobuf::Type::UnsafeArenaSwap(
        google::protobuf::Type *const this,
        google::protobuf::Type *other)
{
  if ( other != this )
    google::protobuf::Type::InternalSwap(this, other);
};

// Line 886: range 000000000C9487E0-000000000C94890B
void __fastcall google::protobuf::Type::InternalSwap(google::protobuf::Type *const this, google::protobuf::Type *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v5; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v6; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v8; // rax
  std::string *ptr; // rdx
  std::string *v10; // rax
  google::protobuf::SourceContext *source_context; // rdx
  google::protobuf::SourceContext *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rcx
  int cached_size; // eax
  _QWORD *v19; // [rsp+0h] [rbp-18h]

  rep = this->fields_.rep_;
  this->fields_.rep_ = other->fields_.rep_;
  current_size = other->fields_.current_size_;
  other->fields_.rep_ = rep;
  LODWORD(rep) = this->fields_.current_size_;
  this->fields_.current_size_ = current_size;
  total_size = other->fields_.total_size_;
  other->fields_.current_size_ = (int)rep;
  LODWORD(rep) = this->fields_.total_size_;
  this->fields_.total_size_ = total_size;
  v5 = other->oneofs_.rep_;
  other->fields_.total_size_ = (int)rep;
  v6 = this->oneofs_.rep_;
  this->oneofs_.rep_ = v5;
  LODWORD(v5) = other->oneofs_.current_size_;
  other->oneofs_.rep_ = v6;
  LODWORD(v6) = this->oneofs_.current_size_;
  this->oneofs_.current_size_ = (int)v5;
  LODWORD(v5) = other->oneofs_.total_size_;
  other->oneofs_.current_size_ = (int)v6;
  LODWORD(v6) = this->oneofs_.total_size_;
  this->oneofs_.total_size_ = (int)v5;
  v7 = other->options_.rep_;
  other->oneofs_.total_size_ = (int)v6;
  v8 = this->options_.rep_;
  this->options_.rep_ = v7;
  LODWORD(v7) = other->options_.current_size_;
  other->options_.rep_ = v8;
  LODWORD(v8) = this->options_.current_size_;
  this->options_.current_size_ = (int)v7;
  LODWORD(v7) = other->options_.total_size_;
  other->options_.current_size_ = (int)v8;
  LODWORD(v8) = this->options_.total_size_;
  this->options_.total_size_ = (int)v7;
  ptr = other->name_.ptr_;
  other->options_.total_size_ = (int)v8;
  v10 = this->name_.ptr_;
  this->name_.ptr_ = ptr;
  source_context = other->source_context_;
  other->name_.ptr_ = v10;
  v12 = this->source_context_;
  this->source_context_ = source_context;
  LODWORD(source_context) = other->syntax_;
  other->source_context_ = v12;
  LODWORD(v12) = this->syntax_;
  this->syntax_ = (int)source_context;
  v13 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->syntax_ = (int)v12;
  v14 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v14 & 1) != 0 )
  {
    if ( (v13 & 1) == 0 )
    {
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v14 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v13 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v14 & 1) != 0 )
  {
    v16 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v19 = v15;
    v16 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v15 = v19;
  }
  v17 = *v16;
  *v16 = *v15;
  *v15 = v17;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 1193: range 000000000C9494F0-000000000C9495A0
void __fastcall google::protobuf::Field::Field(google::protobuf::Field *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A182570;
  this->_internal_metadata_.ptr_ = 0LL;
  this->options_.arena_ = 0LL;
  *(_QWORD *)&this->options_.current_size_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( this != (google::protobuf::Field *)&google::protobuf::_Field_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->type_url_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->json_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->default_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->packed_ = 0;
  this->_cached_size_ = 0;
  *(_OWORD *)&this->kind_ = 0LL;
};

// Line 1201: range 000000000C9495B0-000000000C949650
void __fastcall google::protobuf::Field::Field(google::protobuf::Field *this, google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A182570;
  this->options_.arena_ = a2;
  *(_QWORD *)&this->options_.current_size_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->type_url_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->json_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->default_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->packed_ = 0;
  this->_cached_size_ = 0;
  *(_OWORD *)&this->kind_ = 0LL;
};

// Line 1210: range 000000000C94AFA0-000000000C94B1A8
__int64 __fastcall google::protobuf::Field::Field(google::protobuf::Field *this, const google::protobuf::Field *a2)
{
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // r12
  google::protobuf::UnknownFieldSet *v8; // rdi
  std::string *v9; // rdx
  google::protobuf::Arena *hint; // rsi
  std::string *v11; // rdx
  google::protobuf::Arena *v12; // rsi
  std::string *v13; // rdx
  google::protobuf::Arena *v14; // rsi
  std::string *v15; // rdx
  google::protobuf::Arena *v16; // rsi
  __int64 result; // rax
  void **elements; // r14
  void **v19; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v21; // r12d

  *(_QWORD *)&this->options_.current_size_ = 0LL;
  current_size = a2->options_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182570;
  this->_internal_metadata_.ptr_ = 0LL;
  this->options_.arena_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->options_.rep_->elements;
    v19 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->options_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
      &this->options_,
      v19,
      elements,
      current_size,
      this->options_.rep_->allocated_size - this->options_.current_size_);
    rep = this->options_.rep_;
    v21 = this->options_.current_size_ + current_size;
    this->options_.current_size_ = v21;
    if ( v21 > rep->allocated_size )
      rep->allocated_size = v21;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v6 & 1) != 0 )
      v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
  }
  v9 = a2->name_.ptr_;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v9->_M_string_length )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->name_.ptr_, hint, (__int64)v9);
  }
  v11 = a2->type_url_.ptr_;
  this->type_url_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v11->_M_string_length )
  {
    v12 = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      v12 = (google::protobuf::Arena *)v12->impl_.hint_;
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->type_url_.ptr_, v12, (__int64)v11);
  }
  v13 = a2->json_name_.ptr_;
  this->json_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v13->_M_string_length )
  {
    v14 = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      v14 = (google::protobuf::Arena *)v14->impl_.hint_;
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->json_name_.ptr_, v14, (__int64)v13);
  }
  v15 = a2->default_value_.ptr_;
  this->default_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v15->_M_string_length )
  {
    v16 = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      v16 = (google::protobuf::Arena *)v16->impl_.hint_;
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->default_value_.ptr_, v16, (__int64)v15);
  }
  *(__m128i *)&this->kind_ = _mm_loadu_si128((const __m128i *)&a2->kind_);
  result = a2->packed_;
  this->packed_ = result;
  return result;
};

// Line 1247: range 000000000C947B10-000000000C947B43
void __fastcall google::protobuf::Field::SharedCtor(google::protobuf::Field *const this)
{
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->type_url_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->json_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->default_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->packed_ = 0;
  this->_cached_size_ = 0;
  *(_OWORD *)&this->kind_ = 0LL;
};

// Line 1253: range 000000000C949BE0-000000000C949BF2
void __fastcall google::protobuf::Field::~Field(google::protobuf::Field *const this)
{
  google::protobuf::Field::~Field(this);
  operator delete(this, 0x60uLL);
};

// Line 1253: range 000000000C949B60-000000000C949BD4
void __fastcall google::protobuf::Field::~Field(google::protobuf::Field *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rdx

  this->_vptr_MessageLite = (int (**)(...))off_1A182570;
  google::protobuf::Field::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(&this->options_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v2 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v3 = ptr & 0xFFFFFFFFFFFFFFFELL;
    if ( (ptr & 1) != 0 )
      v3 = v2[1];
    if ( !v3 && v2 )
    {
      if ( *v2 )
        google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
      operator delete(v2, 0x10uLL);
    }
  }
};

// Line 1258: range 000000000C947B50-000000000C947C5C
void __fastcall google::protobuf::Field::SharedDtor(google::protobuf::Field *const this)
{
  unsigned __int64 v1; // rdx
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v3; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v4; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v5; // rbp

  v1 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    v1 = *(_QWORD *)(v1 + 8);
  if ( !v1 )
  {
    ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
    if ( ptr && ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
        operator delete(ptr->union_.align_to_ptr);
      operator delete(ptr, 0x20uLL);
    }
    v3 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->type_url_.ptr_;
    if ( v3 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v3 )
    {
      if ( (void **)v3->union_.align_to_int64 != &v3->union_.align_to_ptr + 2 )
        operator delete(v3->union_.align_to_ptr);
      operator delete(v3, 0x20uLL);
    }
    v4 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->json_name_.ptr_;
    if ( v4 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v4 )
    {
      if ( (void **)v4->union_.align_to_int64 != &v4->union_.align_to_ptr + 2 )
        operator delete(v4->union_.align_to_ptr);
      operator delete(v4, 0x20uLL);
    }
    v5 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->default_value_.ptr_;
    if ( v5 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v5 )
    {
      if ( (void **)v5->union_.align_to_int64 != &v5->union_.align_to_ptr + 2 )
        operator delete(v5->union_.align_to_ptr);
      operator delete(v5, 0x20uLL);
    }
  }
};

// Line 1279: range 000000000C946B20-000000000C946B23
void __fastcall google::protobuf::Field::SetCachedSize(const google::protobuf::Field *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 1292: range 000000000C949660-000000000C9496D7
google::protobuf::Field *__fastcall google::protobuf::Field::New(
        google::protobuf::Field *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::Field *Aligned; // r12
  google::protobuf::Field *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::Field,
        0x60uLL);
    Aligned = (google::protobuf::Field *)google::protobuf::internal::ArenaImpl::AllocateAligned(&a2->impl_, 0x60uLL);
    google::protobuf::Field::Field(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::Field *)operator new(0x60uLL);
    google::protobuf::Field::Field(v4);
    return v4;
  }
};

// Line 1296: range 000000000C948E90-000000000C948F33
void __fastcall google::protobuf::Field::Clear(google::protobuf::Field *const this)
{
  std::string *ptr; // rax
  std::string *v3; // rax
  std::string *v4; // rax
  std::string *v5; // rax
  unsigned __int64 v6; // rdi
  google::protobuf::UnknownFieldSet *v7; // rdi

  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
    (google::protobuf::internal::RepeatedPtrFieldBase *const)&this->options_.current_size_,
    &this->options_.rep_);
  ptr = this->name_.ptr_;
  if ( ptr != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  v3 = this->type_url_.ptr_;
  if ( v3 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    v3->_M_string_length = 0LL;
    *v3->_M_dataplus._M_p = 0;
  }
  v4 = this->json_name_.ptr_;
  if ( v4 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    v4->_M_string_length = 0LL;
    *v4->_M_dataplus._M_p = 0;
  }
  v5 = this->default_value_.ptr_;
  if ( v5 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    v5->_M_string_length = 0LL;
    *v5->_M_dataplus._M_p = 0;
  }
  v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->packed_ = 0;
  *(_OWORD *)&this->kind_ = 0LL;
  if ( (v6 & 1) != 0 )
  {
    v7 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    if ( v7->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v7);
  }
};

// Line 1314: range 000000000C94B9E0-000000000C94BFD5
__int64 __fastcall google::protobuf::Field::MergePartialFromCodedStream(
        google::protobuf::Field *this,
        google::protobuf::io::CodedInputStream *a2)
{
  const google::protobuf::uint8 *buffer_end; // rcx
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  google::protobuf::UnknownFieldSet *v8; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::Option *Aligned; // r13
  const google::protobuf::uint8 *v13; // rax
  int VarintSizeAsIntFallback; // esi
  __int64 result; // rax
  google::protobuf::Arena *v16; // rsi
  std::string *v17; // r8
  const char *v18; // r8
  std::string *v19; // rax
  const char *v20; // rcx
  google::protobuf::Arena *v21; // rsi
  std::string *v22; // r8
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  const google::protobuf::uint8 *v24; // rdx
  google::protobuf::uint32 v25; // esi
  google::protobuf::int64 v26; // rax
  google::protobuf::Arena *v27; // rsi
  std::string *v28; // r8
  google::protobuf::Arena *hint; // rsi
  std::string *v30; // r8
  const google::protobuf::uint8 *v31; // rdx
  google::protobuf::uint32 v32; // esi
  google::protobuf::int64 v33; // rax
  const google::protobuf::uint8 *v34; // rdx
  google::protobuf::uint32 v35; // esi
  google::protobuf::int64 v36; // rax
  const google::protobuf::uint8 *v37; // rdx
  google::protobuf::uint32 v38; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  std::pair<int,int> v40; // rax
  int first; // r14d
  int total_size; // ecx
  google::protobuf::Arena *arena; // r14
  __int64 v44; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v45; // rdx

  buffer_end = a2->buffer_end_;
  buffer = a2->buffer_;
  while ( 2 )
  {
    if ( buffer_end <= buffer )
      goto LABEL_11;
LABEL_3:
    TagFallback = *buffer;
    if ( (char)TagFallback > 0 )
    {
      a2->buffer_ = buffer + 1;
      goto LABEL_13;
    }
    while ( 1 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        goto handle_unusual_23;
LABEL_13:
      if ( TagFallback <= 0x5F )
        break;
handle_unusual_23:
      if ( !TagFallback )
        return 1LL;
LABEL_6:
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      v7 = ptr & 1;
LABEL_7:
      if ( v7 )
        v8 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      else
        v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
      if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v8) )
        goto LABEL_22;
LABEL_10:
      buffer = a2->buffer_;
      if ( a2->buffer_end_ > a2->buffer_ )
        goto LABEL_3;
LABEL_11:
      TagFallback = 0;
    }
    switch ( TagFallback >> 3 )
    {
      case 0u:
      case 5u:
        goto handle_unusual_23;
      case 1u:
        if ( TagFallback != 8 )
          goto LABEL_6;
        v37 = a2->buffer_;
        buffer_end = a2->buffer_end_;
        if ( a2->buffer_ >= buffer_end )
        {
          v38 = 0;
        }
        else
        {
          v38 = *v37;
          if ( *(char *)v37 >= 0 )
          {
            buffer = v37 + 1;
            a2->buffer_ = buffer;
            goto LABEL_82;
          }
        }
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v38);
        v38 = Varint32Fallback;
        if ( Varint32Fallback < 0 )
          goto LABEL_22;
        buffer_end = a2->buffer_end_;
        buffer = a2->buffer_;
LABEL_82:
        this->kind_ = v38;
        continue;
      case 2u:
        if ( TagFallback != 16 )
          goto LABEL_6;
        v34 = a2->buffer_;
        buffer_end = a2->buffer_end_;
        if ( a2->buffer_ >= buffer_end )
        {
          v35 = 0;
        }
        else
        {
          v35 = *v34;
          if ( *(char *)v34 >= 0 )
          {
            buffer = v34 + 1;
            a2->buffer_ = buffer;
            goto LABEL_76;
          }
        }
        v36 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v35);
        v35 = v36;
        if ( v36 < 0 )
          goto LABEL_22;
        buffer_end = a2->buffer_end_;
        buffer = a2->buffer_;
LABEL_76:
        this->cardinality_ = v35;
        continue;
      case 3u:
        if ( TagFallback != 24 )
          goto LABEL_6;
        v31 = a2->buffer_;
        buffer_end = a2->buffer_end_;
        if ( a2->buffer_ >= buffer_end )
        {
          v32 = 0;
        }
        else
        {
          v32 = *v31;
          if ( *(char *)v31 >= 0 )
          {
            buffer = v31 + 1;
            a2->buffer_ = buffer;
            goto LABEL_70;
          }
        }
        v33 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v32);
        v32 = v33;
        if ( v33 < 0 )
          goto LABEL_22;
        buffer_end = a2->buffer_end_;
        buffer = a2->buffer_;
LABEL_70:
        this->number_ = v32;
        continue;
      case 4u:
        ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
        v7 = ptr & 1;
        if ( TagFallback != 34 )
          goto LABEL_7;
        hint = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
        if ( (ptr & 1) != 0 )
          hint = (google::protobuf::Arena *)hint->impl_.hint_;
        v30 = this->name_.ptr_;
        if ( v30 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstance(
            &this->name_.ptr_,
            hint,
            (__int64)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          v30 = this->name_.ptr_;
        }
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, v30) )
          goto LABEL_22;
        v19 = this->name_.ptr_;
        v20 = "google.protobuf.Field.name";
        goto LABEL_63;
      case 6u:
        ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
        v7 = ptr & 1;
        if ( TagFallback != 50 )
          goto LABEL_7;
        v27 = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
        if ( (ptr & 1) != 0 )
          v27 = (google::protobuf::Arena *)v27->impl_.hint_;
        v28 = this->type_url_.ptr_;
        if ( v28 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstance(
            &this->type_url_.ptr_,
            v27,
            (__int64)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          v28 = this->type_url_.ptr_;
        }
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, v28) )
          goto LABEL_22;
        v19 = this->type_url_.ptr_;
        v20 = "google.protobuf.Field.type_url";
        goto LABEL_63;
      case 7u:
        if ( TagFallback != 56 )
          goto LABEL_6;
        v24 = a2->buffer_;
        buffer_end = a2->buffer_end_;
        if ( a2->buffer_ >= buffer_end )
        {
          v25 = 0;
        }
        else
        {
          v25 = *v24;
          if ( *(char *)v24 >= 0 )
          {
            buffer = v24 + 1;
            a2->buffer_ = buffer;
            goto LABEL_48;
          }
        }
        v26 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v25);
        v25 = v26;
        if ( v26 < 0 )
          goto LABEL_22;
        buffer_end = a2->buffer_end_;
        buffer = a2->buffer_;
LABEL_48:
        this->oneof_index_ = v25;
        continue;
      case 8u:
        if ( TagFallback != 64 )
          goto LABEL_6;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        buffer_end = a2->buffer_end_;
        if ( a2->buffer_ < buffer_end
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          buffer = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
          a2->buffer_ = buffer;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
          if ( !Varint64Fallback.second )
            goto LABEL_22;
          buffer_end = a2->buffer_end_;
          buffer = a2->buffer_;
        }
        this->packed_ = Varint64Fallback.first != 0;
        continue;
      case 9u:
        if ( TagFallback != 74 )
          goto LABEL_6;
        rep = this->options_.rep_;
        if ( !rep )
        {
          total_size = this->options_.total_size_;
LABEL_102:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->options_, total_size + 1);
          rep = this->options_.rep_;
          allocated_size = rep->allocated_size;
          goto LABEL_90;
        }
        current_size = this->options_.current_size_;
        allocated_size = rep->allocated_size;
        if ( (int)current_size < rep->allocated_size )
        {
          Aligned = (google::protobuf::Option *)rep->elements[current_size];
          this->options_.current_size_ = current_size + 1;
          goto LABEL_19;
        }
        total_size = this->options_.total_size_;
        if ( allocated_size == total_size )
          goto LABEL_102;
LABEL_90:
        arena = this->options_.arena_;
        rep->allocated_size = allocated_size + 1;
        if ( arena )
        {
          if ( arena->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              arena,
              (const std::type_info *)&`typeinfo for'google::protobuf::Option,
              0x28uLL);
          Aligned = (google::protobuf::Option *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                  &arena->impl_,
                                                  0x28uLL);
          google::protobuf::Option::Option(Aligned, arena);
        }
        else
        {
          Aligned = (google::protobuf::Option *)operator new(0x28uLL);
          google::protobuf::Option::Option(Aligned);
        }
        v44 = this->options_.current_size_;
        v45 = this->options_.rep_;
        this->options_.current_size_ = v44 + 1;
        v45->elements[v44] = Aligned;
LABEL_19:
        v13 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_
          && (VarintSizeAsIntFallback = *v13, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
        {
          a2->buffer_ = v13 + 1;
        }
        else
        {
          VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( VarintSizeAsIntFallback < 0 )
            goto LABEL_22;
        }
        v40 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
        first = v40.first;
        if ( v40.second >= 0
          && google::protobuf::Option::MergePartialFromCodedStream(Aligned, a2)
          && google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
        {
          goto LABEL_10;
        }
LABEL_22:
        result = 0LL;
        break;
      case 0xAu:
        ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
        v7 = ptr & 1;
        if ( TagFallback != 82 )
          goto LABEL_7;
        v21 = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
        if ( (ptr & 1) != 0 )
          v21 = (google::protobuf::Arena *)v21->impl_.hint_;
        v22 = this->json_name_.ptr_;
        if ( v22 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstance(
            &this->json_name_.ptr_,
            v21,
            (__int64)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          v22 = this->json_name_.ptr_;
        }
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, v22) )
          goto LABEL_22;
        v19 = this->json_name_.ptr_;
        v20 = "google.protobuf.Field.json_name";
        goto LABEL_63;
      case 0xBu:
        ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
        v7 = ptr & 1;
        if ( TagFallback != 90 )
          goto LABEL_7;
        v16 = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
        if ( (ptr & 1) != 0 )
          v16 = (google::protobuf::Arena *)v16->impl_.hint_;
        v17 = this->default_value_.ptr_;
        if ( v17 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstance(
            &this->default_value_.ptr_,
            v16,
            (__int64)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          v17 = this->default_value_.ptr_;
        }
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, v17) )
          goto LABEL_22;
        v19 = this->default_value_.ptr_;
        v20 = "google.protobuf.Field.default_value";
LABEL_63:
        if ( !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                 (google::protobuf::internal::WireFormatLite *)v19->_M_dataplus._M_p,
                                 (const char *)LODWORD(v19->_M_string_length),
                                 0,
                                 (google::protobuf::internal::WireFormatLite::Operation)v20,
                                 v18) )
          goto LABEL_22;
        goto LABEL_10;
    }
    return result;
  }
};

// Line 1492: range 000000000C946FE0-000000000C947206
void __fastcall google::protobuf::Field::SerializeWithCachedSizes(
        const google::protobuf::Field *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const char *v2; // r8
  int kind; // esi
  int cardinality; // esi
  google::protobuf::int32 number; // esi
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  std::string *v9; // rax
  const char *v10; // rsi
  google::protobuf::int32 oneof_index; // esi
  int current_size; // r13d
  int i; // ebx
  __int64 v14; // rdx
  std::string *v15; // rax
  const char *v16; // rsi
  std::string *v17; // rax
  const char *v18; // rsi
  google::protobuf::UnknownFieldSet *v19; // rdi
  const google::protobuf::UnknownFieldSet *v20; // rdi

  kind = this->kind_;
  if ( kind )
    google::protobuf::internal::WireFormatLite::WriteEnum(1, kind, output);
  cardinality = this->cardinality_;
  if ( cardinality )
    google::protobuf::internal::WireFormatLite::WriteEnum(2, cardinality, output);
  number = this->number_;
  if ( number )
    google::protobuf::internal::WireFormatLite::WriteInt32(3, number, output);
  ptr = this->name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Field.name",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, this->name_.ptr_, output);
  }
  v9 = this->type_url_.ptr_;
  v10 = (const char *)v9->_M_string_length;
  if ( v10 )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)v9->_M_dataplus._M_p,
      v10,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Field.type_url",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, this->type_url_.ptr_, output);
  }
  oneof_index = this->oneof_index_;
  if ( oneof_index )
    google::protobuf::internal::WireFormatLite::WriteInt32(7, oneof_index, output);
  if ( this->packed_ )
    google::protobuf::internal::WireFormatLite::WriteBool(8, 1, output);
  current_size = this->options_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v14 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        9,
        (const google::protobuf::MessageLite *)this->options_.rep_->elements[v14],
        output);
    }
  }
  v15 = this->json_name_.ptr_;
  v16 = (const char *)v15->_M_string_length;
  if ( v16 )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)v15->_M_dataplus._M_p,
      v16,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Field.json_name",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(10LL, this->json_name_.ptr_, output);
  }
  v17 = this->default_value_.ptr_;
  v18 = (const char *)v17->_M_string_length;
  if ( v18 )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)v17->_M_dataplus._M_p,
      v18,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Field.default_value",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(11LL, this->default_value_.ptr_, output);
  }
  v19 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v19 & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)v19 & 1) != 0 )
      v20 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFELL);
    else
      v20 = google::protobuf::UnknownFieldSet::default_instance(v19);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v20, output);
  }
};

// Line 1579: range 000000000C94CF20-000000000C94D1B4
google::protobuf::uint8 *__fastcall google::protobuf::Field::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::Field *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const char *v3; // r8
  const google::protobuf::Field *v4; // r13
  google::protobuf::uint8 *v5; // r12
  unsigned __int64 kind; // rax
  google::protobuf::uint8 *i; // rdx
  char v9; // cl
  unsigned __int64 cardinality; // rax
  _BYTE *j; // rdx
  char v12; // cl
  unsigned __int64 number; // rax
  _BYTE *k; // rdx
  char v15; // cl
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  std::string *v18; // rax
  const char *v19; // rsi
  unsigned __int64 oneof_index; // rax
  _BYTE *m; // rdx
  char v22; // cl
  int current_size; // ebp
  int n; // r14d
  _BYTE *v25; // rdx
  unsigned int ii; // eax
  char v27; // cl
  std::string *v28; // rax
  const char *v29; // rsi
  std::string *v30; // rax
  const char *v31; // rsi
  unsigned __int64 v32; // rax
  const google::protobuf::UnknownFieldSet *v33; // rdi

  v4 = this;
  v5 = target;
  kind = this->kind_;
  if ( (_DWORD)kind )
  {
    *target = 8;
    for ( i = target + 1; kind > 0x7F; *(i - 1) = v9 | 0x80 )
    {
      v9 = kind;
      kind >>= 7;
      ++i;
    }
    *i = kind;
    v5 = i + 1;
  }
  cardinality = this->cardinality_;
  if ( (_DWORD)cardinality )
  {
    *v5 = 16;
    for ( j = v5 + 1; cardinality > 0x7F; *(j - 1) = v12 | 0x80 )
    {
      v12 = cardinality;
      cardinality >>= 7;
      ++j;
    }
    *j = cardinality;
    v5 = j + 1;
  }
  number = this->number_;
  if ( (_DWORD)number )
  {
    *v5 = 24;
    for ( k = v5 + 1; number > 0x7F; *(k - 1) = v15 | 0x80 )
    {
      v15 = number;
      number >>= 7;
      ++k;
    }
    *k = number;
    v5 = k + 1;
  }
  ptr = this->name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Field.name",
      v3);
    this = (const google::protobuf::Field *const)this->name_.ptr_;
    *v5 = 34;
    v5 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray((const std::string *)this, v5 + 1);
  }
  v18 = v4->type_url_.ptr_;
  v19 = (const char *)v18->_M_string_length;
  if ( v19 )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)v18->_M_dataplus._M_p,
      v19,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Field.type_url",
      v3);
    this = (const google::protobuf::Field *const)v4->type_url_.ptr_;
    *v5 = 50;
    v5 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray((const std::string *)this, v5 + 1);
  }
  oneof_index = v4->oneof_index_;
  if ( (_DWORD)oneof_index )
  {
    *v5 = 56;
    for ( m = v5 + 1; oneof_index > 0x7F; *(m - 1) = v22 | 0x80 )
    {
      v22 = oneof_index;
      oneof_index >>= 7;
      ++m;
    }
    *m = oneof_index;
    v5 = m + 1;
  }
  if ( v4->packed_ )
  {
    v5 += 2;
    *((_WORD *)v5 - 1) = 320;
  }
  current_size = v4->options_.current_size_;
  if ( current_size )
  {
    for ( n = 0; n != current_size; ++n )
    {
      this = (const google::protobuf::Field *const)v4->options_.rep_->elements[n];
      *v5 = 74;
      v25 = v5 + 1;
      for ( ii = (unsigned int)this->options_.rep_; ii > 0x7F; *(v25 - 1) = v27 | 0x80 )
      {
        v27 = ii;
        ii >>= 7;
        ++v25;
      }
      *v25 = ii;
      v5 = google::protobuf::Option::InternalSerializeWithCachedSizesToArray(
             (const google::protobuf::Option *const)this,
             deterministic,
             v25 + 1);
    }
  }
  v28 = v4->json_name_.ptr_;
  v29 = (const char *)v28->_M_string_length;
  if ( v29 )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)v28->_M_dataplus._M_p,
      v29,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Field.json_name",
      v3);
    this = (const google::protobuf::Field *const)v4->json_name_.ptr_;
    *v5 = 82;
    v5 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray((const std::string *)this, v5 + 1);
  }
  v30 = v4->default_value_.ptr_;
  v31 = (const char *)v30->_M_string_length;
  if ( v31 )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)v30->_M_dataplus._M_p,
      v31,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Field.default_value",
      v3);
    this = (const google::protobuf::Field *const)v4->default_value_.ptr_;
    *v5 = 90;
    v5 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray((const std::string *)this, v5 + 1);
  }
  v32 = (unsigned __int64)v4->_internal_metadata_.ptr_;
  if ( (v32 & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return v5;
  if ( (v32 & 1) != 0 )
    v33 = (const google::protobuf::UnknownFieldSet *)(v32 & 0xFFFFFFFFFFFFFFFELL);
  else
    v33 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v33, v5);
};

// Line 1672: range 000000000C94D810-000000000C94D9DA
size_t __fastcall google::protobuf::Field::ByteSizeLong(const google::protobuf::Field *const this)
{
  size_t v2; // rax
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v4; // rdi
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax
  std::string::size_type M_string_length; // rax
  __int64 v12; // rcx
  std::string::size_type v13; // rax
  __int64 v14; // rcx
  std::string::size_type v15; // rax
  __int64 v16; // rcx
  std::string::size_type v17; // rax
  __int64 v18; // rcx
  int kind; // eax
  __int64 v20; // rax
  int cardinality; // eax
  __int64 v22; // rax
  google::protobuf::int32 number; // eax
  __int64 v24; // rax
  google::protobuf::int32 oneof_index; // eax
  __int64 v26; // rax

  v2 = 0LL;
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    v2 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  current_size = (unsigned int)this->options_.current_size_;
  v6 = v2 + current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::Option::ByteSizeLong((const google::protobuf::Option *const)this->options_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  M_string_length = this->name_.ptr_->_M_string_length;
  if ( M_string_length )
  {
    v12 = M_string_length + v6 + 1;
    _BitScanReverse((unsigned int *)&M_string_length, M_string_length | 1);
    v6 = v12 + ((unsigned int)(9 * M_string_length + 73) >> 6);
  }
  v13 = this->type_url_.ptr_->_M_string_length;
  if ( v13 )
  {
    v14 = v13 + v6 + 1;
    _BitScanReverse((unsigned int *)&v13, v13 | 1);
    v6 = v14 + ((unsigned int)(9 * v13 + 73) >> 6);
  }
  v15 = this->json_name_.ptr_->_M_string_length;
  if ( v15 )
  {
    v16 = v15 + v6 + 1;
    _BitScanReverse((unsigned int *)&v15, v15 | 1);
    v6 = v16 + ((unsigned int)(9 * v15 + 73) >> 6);
  }
  v17 = this->default_value_.ptr_->_M_string_length;
  if ( v17 )
  {
    v18 = v17 + v6 + 1;
    _BitScanReverse((unsigned int *)&v17, v17 | 1);
    v6 = v18 + ((unsigned int)(9 * v17 + 73) >> 6);
  }
  kind = this->kind_;
  if ( kind )
  {
    if ( kind < 0 )
    {
      v20 = 10LL;
    }
    else
    {
      _BitScanReverse((unsigned int *)&kind, kind | 1);
      v20 = (unsigned int)(9 * kind + 73) >> 6;
    }
    v6 += v20 + 1;
  }
  cardinality = this->cardinality_;
  if ( cardinality )
  {
    if ( cardinality < 0 )
    {
      v22 = 10LL;
    }
    else
    {
      _BitScanReverse((unsigned int *)&cardinality, cardinality | 1);
      v22 = (unsigned int)(9 * cardinality + 73) >> 6;
    }
    v6 += v22 + 1;
  }
  number = this->number_;
  if ( number )
  {
    if ( number < 0 )
    {
      v24 = 10LL;
    }
    else
    {
      _BitScanReverse((unsigned int *)&number, number | 1);
      v24 = (unsigned int)(9 * number + 73) >> 6;
    }
    v6 += v24 + 1;
  }
  oneof_index = this->oneof_index_;
  if ( oneof_index )
  {
    if ( oneof_index < 0 )
    {
      v26 = 10LL;
    }
    else
    {
      _BitScanReverse((unsigned int *)&oneof_index, oneof_index | 1);
      v26 = (unsigned int)(9 * oneof_index + 73) >> 6;
    }
    v6 += v26 + 1;
  }
  if ( this->packed_ )
    v6 += 2LL;
  this->_cached_size_ = v6;
  return v6;
};

// Line 1758: range 000000000C94AB10-000000000C94AB5D
void __fastcall google::protobuf::Field::MergeFrom(
        google::protobuf::Field *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::Field *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::Field *)__dynamic_cast(
                                          from,
                                          (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                          (const struct __class_type_info *)&`typeinfo for'google::protobuf::Field,
                                          0LL);
  if ( v2 )
    google::protobuf::Field::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 1773: range 000000000C94A440-000000000C94A6DC
void __fastcall google::protobuf::Field::MergeFrom(
        google::protobuf::Field *const this,
        const google::protobuf::Field *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  std::string *v9; // rsi
  std::string *v10; // rsi
  std::string *v11; // rsi
  std::string *v12; // rsi
  int kind; // eax
  int cardinality; // eax
  google::protobuf::int32 number; // eax
  google::protobuf::int32 oneof_index; // eax
  void **elements; // r13
  void **v18; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v20; // r12d
  google::protobuf::Arena *hint; // r8
  std::string *v22; // rdi
  google::protobuf::Arena *v23; // r8
  std::string *v24; // rdi
  google::protobuf::Arena *v25; // r8
  std::string *v26; // rdi
  google::protobuf::Arena *v27; // r8
  std::string *v28; // rdi

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->options_.current_size_;
  if ( current_size
    && (elements = from->options_.rep_->elements,
        v18 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->options_, current_size),
        google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
          &this->options_,
          v18,
          elements,
          current_size,
          this->options_.rep_->allocated_size - this->options_.current_size_),
        rep = this->options_.rep_,
        v20 = this->options_.current_size_ + current_size,
        this->options_.current_size_ = v20,
        v20 > rep->allocated_size) )
  {
    v9 = from->name_.ptr_;
    rep->allocated_size = v20;
    if ( !v9->_M_string_length )
      goto LABEL_7;
  }
  else
  {
    v9 = from->name_.ptr_;
    if ( !v9->_M_string_length )
      goto LABEL_7;
  }
  hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    hint = (google::protobuf::Arena *)hint->impl_.hint_;
  v22 = this->name_.ptr_;
  if ( v22 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    std::string::_M_assign(v22, v9);
    v10 = from->type_url_.ptr_;
    if ( !v10->_M_string_length )
      goto LABEL_8;
    goto LABEL_27;
  }
  google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->name_.ptr_, hint, (__int64)v9);
LABEL_7:
  v10 = from->type_url_.ptr_;
  if ( !v10->_M_string_length )
    goto LABEL_8;
LABEL_27:
  v23 = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    v23 = (google::protobuf::Arena *)v23->impl_.hint_;
  v24 = this->type_url_.ptr_;
  if ( v24 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    std::string::_M_assign(v24, v10);
    v11 = from->json_name_.ptr_;
    if ( !v11->_M_string_length )
      goto LABEL_9;
    goto LABEL_31;
  }
  google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->type_url_.ptr_, v23, (__int64)v10);
LABEL_8:
  v11 = from->json_name_.ptr_;
  if ( !v11->_M_string_length )
    goto LABEL_9;
LABEL_31:
  v25 = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    v25 = (google::protobuf::Arena *)v25->impl_.hint_;
  v26 = this->json_name_.ptr_;
  if ( v26 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    std::string::_M_assign(v26, v11);
    v12 = from->default_value_.ptr_;
    if ( !v12->_M_string_length )
      goto LABEL_10;
    goto LABEL_35;
  }
  google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->json_name_.ptr_, v25, (__int64)v11);
LABEL_9:
  v12 = from->default_value_.ptr_;
  if ( !v12->_M_string_length )
    goto LABEL_10;
LABEL_35:
  v27 = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    v27 = (google::protobuf::Arena *)v27->impl_.hint_;
  v28 = this->default_value_.ptr_;
  if ( v28 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->default_value_.ptr_, v27, (__int64)v12);
  else
    std::string::_M_assign(v28, v12);
LABEL_10:
  kind = from->kind_;
  if ( kind )
    this->kind_ = kind;
  cardinality = from->cardinality_;
  if ( cardinality )
    this->cardinality_ = cardinality;
  number = from->number_;
  if ( number )
    this->number_ = number;
  oneof_index = from->oneof_index_;
  if ( oneof_index )
    this->oneof_index_ = oneof_index;
  if ( from->packed_ )
    this->packed_ = 1;
};

// Line 1812: range 000000000C94AB70-000000000C94ABA0
void __fastcall google::protobuf::Field::CopyFrom(
        google::protobuf::Field *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::Field::Clear(this);
    google::protobuf::Field::MergeFrom(this, from);
  }
};

// Line 1819: range 000000000C94ACB0-000000000C94ACE0
void __fastcall google::protobuf::Field::CopyFrom(
        google::protobuf::Field *const this,
        const google::protobuf::Field *from)
{
  if ( from != this )
  {
    google::protobuf::Field::Clear(this);
    google::protobuf::Field::MergeFrom(this, from);
  }
};

// Line 1829: range 000000000C94ABB0-000000000C94ACA4
void __fastcall google::protobuf::Field::Swap(google::protobuf::Field *const this, google::protobuf::Field *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::Field *v5; // r13
  unsigned __int64 v6; // rdx

  if ( other != this )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    v4 = (unsigned __int64)other->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
    if ( ((__int64)other->_internal_metadata_.ptr_ & 1) != 0 )
      v4 = *(_QWORD *)(v4 + 8);
    if ( (google::protobuf::Arena *)v4 == hint )
    {
      google::protobuf::Field::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::Field::New(this, hint);
      google::protobuf::Field::MergeFrom(v5, other);
      google::protobuf::Field::Clear(other);
      google::protobuf::Field::MergeFrom(other, this);
      google::protobuf::Field::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::Field *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 1843: range 000000000C948D40-000000000C948D50
void __fastcall google::protobuf::Field::UnsafeArenaSwap(
        google::protobuf::Field *const this,
        google::protobuf::Field *other)
{
  if ( other != this )
    google::protobuf::Field::InternalSwap(this, other);
};

// Line 1847: range 000000000C948C10-000000000C948D3B
void __fastcall google::protobuf::Field::InternalSwap(
        google::protobuf::Field *const this,
        google::protobuf::Field *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  std::string *ptr; // rdx
  std::string *v6; // rax
  std::string *v7; // rdx
  std::string *v8; // rax
  std::string *v9; // rdx
  std::string *v10; // rax
  std::string *v11; // rdx
  std::string *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rcx
  int cached_size; // eax
  _QWORD *v19; // [rsp+0h] [rbp-18h]

  rep = this->options_.rep_;
  this->options_.rep_ = other->options_.rep_;
  current_size = other->options_.current_size_;
  other->options_.rep_ = rep;
  LODWORD(rep) = this->options_.current_size_;
  this->options_.current_size_ = current_size;
  total_size = other->options_.total_size_;
  other->options_.current_size_ = (int)rep;
  LODWORD(rep) = this->options_.total_size_;
  this->options_.total_size_ = total_size;
  ptr = other->name_.ptr_;
  other->options_.total_size_ = (int)rep;
  v6 = this->name_.ptr_;
  this->name_.ptr_ = ptr;
  v7 = other->type_url_.ptr_;
  other->name_.ptr_ = v6;
  v8 = this->type_url_.ptr_;
  this->type_url_.ptr_ = v7;
  v9 = other->json_name_.ptr_;
  other->type_url_.ptr_ = v8;
  v10 = this->json_name_.ptr_;
  this->json_name_.ptr_ = v9;
  v11 = other->default_value_.ptr_;
  other->json_name_.ptr_ = v10;
  v12 = this->default_value_.ptr_;
  this->default_value_.ptr_ = v11;
  LODWORD(v11) = other->kind_;
  other->default_value_.ptr_ = v12;
  LODWORD(v12) = this->kind_;
  this->kind_ = (int)v11;
  LODWORD(v11) = other->cardinality_;
  other->kind_ = (int)v12;
  LODWORD(v12) = this->cardinality_;
  this->cardinality_ = (int)v11;
  LODWORD(v11) = other->number_;
  other->cardinality_ = (int)v12;
  LODWORD(v12) = this->number_;
  this->number_ = (int)v11;
  LODWORD(v11) = other->oneof_index_;
  other->number_ = (int)v12;
  LODWORD(v12) = this->oneof_index_;
  this->oneof_index_ = (int)v11;
  LOBYTE(v11) = other->packed_;
  other->oneof_index_ = (int)v12;
  LOBYTE(v12) = this->packed_;
  this->packed_ = (char)v11;
  v13 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->packed_ = (char)v12;
  v14 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v14 & 1) != 0 )
  {
    if ( (v13 & 1) == 0 )
    {
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v14 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v13 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v14 & 1) != 0 )
  {
    v16 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v19 = v15;
    v16 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v15 = v19;
  }
  v17 = *v16;
  *v16 = *v15;
  *v15 = v17;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 2275: range 000000000C947D40-000000000C947DDE
void __fastcall google::protobuf::Enum::_slow_mutable_source_context(google::protobuf::Enum *this)
{
  unsigned __int64 ptr; // rax
  google::protobuf::Arena *hint; // rdi
  google::protobuf::SourceContext *AlignedAndAddCleanup; // rbp
  google::protobuf::SourceContext *v5; // rbp

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  hint = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
  if ( (ptr & 1) != 0 )
    hint = (google::protobuf::Arena *)hint->impl_.hint_;
  if ( hint )
  {
    if ( hint->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        hint,
        (const std::type_info *)&`typeinfo for'google::protobuf::SourceContext,
        0x20uLL);
    AlignedAndAddCleanup = (google::protobuf::SourceContext *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                &hint->impl_,
                                                                0x20uLL,
                                                                google::protobuf::internal::arena_destruct_object<google::protobuf::SourceContext>);
    google::protobuf::SourceContext::SourceContext(AlignedAndAddCleanup);
    this->source_context_ = AlignedAndAddCleanup;
  }
  else
  {
    v5 = (google::protobuf::SourceContext *)operator new(0x20uLL);
    google::protobuf::SourceContext::SourceContext(v5);
    this->source_context_ = v5;
  }
};

// Line 2279: range 000000000C947DF0-000000000C947E2C
google::protobuf::SourceContext *__fastcall google::protobuf::Enum::_slow_release_source_context(
        google::protobuf::Enum *this)
{
  google::protobuf::SourceContext *source_context; // r12

  source_context = this->source_context_;
  if ( source_context )
  {
    source_context = (google::protobuf::SourceContext *)operator new(0x20uLL);
    google::protobuf::SourceContext::SourceContext(source_context, this->source_context_);
    this->source_context_ = 0LL;
  }
  return source_context;
};

// Line 2283: range 000000000C7322C0-000000000C7322D0
void __fastcall __noreturn google::protobuf::Enum::_slow_release_source_context()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 2291: range 000000000C947E40-000000000C947E4C
google::protobuf::SourceContext *__fastcall google::protobuf::Enum::unsafe_arena_release_source_context(
        google::protobuf::Enum *const this)
{
  google::protobuf::SourceContext *result; // rax

  result = this->source_context_;
  this->source_context_ = 0LL;
  return result;
};

// Line 2296: range 000000000C947E50-000000000C947EA4
void __fastcall google::protobuf::Enum::unsafe_arena_set_allocated_source_context(
        google::protobuf::Enum *const this,
        google::protobuf::SourceContext *source_context)
{
  unsigned __int64 v3; // rdx
  google::protobuf::SourceContext *v4; // rdi

  v3 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    v3 = *(_QWORD *)(v3 + 8);
  if ( v3 || (v4 = this->source_context_) == 0LL )
  {
    this->source_context_ = source_context;
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::SourceContext *))v4->_vptr_MessageLite + 1))(v4);
    this->source_context_ = source_context;
  }
};

// Line 2316: range 000000000C949CA0-000000000C949D58
void __fastcall google::protobuf::Enum::Enum(google::protobuf::Enum *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A182648;
  this->_internal_metadata_.ptr_ = 0LL;
  this->enumvalue_.arena_ = 0LL;
  *(_QWORD *)&this->enumvalue_.current_size_ = 0LL;
  this->enumvalue_.rep_ = 0LL;
  this->options_.arena_ = 0LL;
  *(_QWORD *)&this->options_.current_size_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( this != (google::protobuf::Enum *)&google::protobuf::_Enum_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->source_context_ = 0LL;
  this->syntax_ = 0;
  this->_cached_size_ = 0;
};

// Line 2324: range 000000000C949E20-000000000C949EC0
void __fastcall google::protobuf::Enum::Enum(google::protobuf::Enum *this, google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A182648;
  this->enumvalue_.arena_ = a2;
  *(_QWORD *)&this->enumvalue_.current_size_ = 0LL;
  this->enumvalue_.rep_ = 0LL;
  this->options_.arena_ = a2;
  *(_QWORD *)&this->options_.current_size_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->source_context_ = 0LL;
  this->syntax_ = 0;
  this->_cached_size_ = 0;
};

// Line 2334: range 000000000C94B580-000000000C94B790
__int64 __fastcall google::protobuf::Enum::Enum(
        google::protobuf::Enum *this,
        google::protobuf::EnumDefaultTypeInternal *a2)
{
  int v4; // r12d
  int v5; // r12d
  unsigned __int64 v6; // r12
  unsigned __int64 ptr; // rdi
  const google::protobuf::UnknownFieldSet *v8; // r12
  google::protobuf::UnknownFieldSet *v9; // rdi
  std::string *v10; // rdx
  google::protobuf::Arena *hint; // rsi
  google::protobuf::SourceContext *v12; // r12
  __int64 result; // rax
  void **v14; // r15
  void **v15; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v16; // rax
  int v17; // r12d
  void **v18; // r14
  void **v19; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v21; // r12d

  *(_QWORD *)&this->enumvalue_.current_size_ = 0LL;
  v4 = *((_DWORD *)&a2->_instance.union_.align_to_ptr + 6);
  this->_vptr_MessageLite = (int (**)(...))off_1A182648;
  this->_internal_metadata_.ptr_ = 0LL;
  this->enumvalue_.arena_ = 0LL;
  this->enumvalue_.rep_ = 0LL;
  if ( v4 )
  {
    v18 = (void **)(*((_QWORD *)&a2->_instance.union_.align_to_ptr + 4) + 8LL);
    v19 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->enumvalue_, v4);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::TypeHandler>(
      &this->enumvalue_,
      v19,
      v18,
      v4,
      this->enumvalue_.rep_->allocated_size - this->enumvalue_.current_size_);
    rep = this->enumvalue_.rep_;
    v21 = this->enumvalue_.current_size_ + v4;
    this->enumvalue_.current_size_ = v21;
    if ( v21 > rep->allocated_size )
      rep->allocated_size = v21;
  }
  *(_QWORD *)&this->options_.current_size_ = 0LL;
  v5 = *((_DWORD *)&a2->_instance.union_.align_to_ptr + 12);
  this->options_.arena_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( v5 )
  {
    v14 = (void **)(*((_QWORD *)&a2->_instance.union_.align_to_ptr + 7) + 8LL);
    v15 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->options_, v5);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
      &this->options_,
      v15,
      v14,
      v5,
      this->options_.rep_->allocated_size - this->options_.current_size_);
    v16 = this->options_.rep_;
    v17 = this->options_.current_size_ + v5;
    this->options_.current_size_ = v17;
    if ( v17 > v16->allocated_size )
      v16->allocated_size = v17;
  }
  v6 = *((_QWORD *)&a2->_instance.union_.align_to_ptr + 1);
  this->_cached_size_ = 0;
  if ( (v6 & 1) != 0 )
  {
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v8 = (const google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    if ( (ptr & 1) != 0 )
      v9 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v9, v8);
  }
  v10 = (std::string *)*((_QWORD *)&a2->_instance.union_.align_to_ptr + 8);
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v10->_M_string_length )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->name_.ptr_, hint, (__int64)v10);
  }
  if ( a2 == &google::protobuf::_Enum_default_instance_ || !*((_QWORD *)&a2->_instance.union_.align_to_ptr + 9) )
  {
    this->source_context_ = 0LL;
  }
  else
  {
    v12 = (google::protobuf::SourceContext *)operator new(0x20uLL);
    google::protobuf::SourceContext::SourceContext(
      v12,
      *((const google::protobuf::SourceContext **)&a2->_instance.union_.align_to_ptr + 9));
    this->source_context_ = v12;
  }
  result = *((unsigned int *)&a2->_instance.union_.align_to_ptr + 20);
  this->syntax_ = result;
  return result;
};

// Line 2347: range 000000000C7325EA-000000000C732616
void __fastcall __noreturn google::protobuf::Enum::Enum()
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *v2; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v3; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v4; // r14

  operator delete(v2, 0x20uLL);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(v4);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::TypeHandler>(v3);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v0 + 1);
  _Unwind_Resume(v1);
};

// Line 2363: range 000000000C949FE0-000000000C949FF2
void __fastcall google::protobuf::Enum::~Enum(google::protobuf::Enum *const this)
{
  google::protobuf::Enum::~Enum(this);
  operator delete(this, 0x58uLL);
};

// Line 2363: range 000000000C949F50-000000000C949FD4
void __fastcall google::protobuf::Enum::~Enum(google::protobuf::Enum *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rdx

  this->_vptr_MessageLite = (int (**)(...))off_1A182648;
  google::protobuf::Enum::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(&this->options_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::TypeHandler>(&this->enumvalue_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v2 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v3 = ptr & 0xFFFFFFFFFFFFFFFELL;
    if ( (ptr & 1) != 0 )
      v3 = v2[1];
    if ( !v3 && v2 )
    {
      if ( *v2 )
        google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
      operator delete(v2, 0x10uLL);
    }
  }
};

// Line 2368: range 000000000C947ED0-000000000C947F54
void __fastcall google::protobuf::Enum::SharedDtor(google::protobuf::Enum *const this)
{
  unsigned __int64 v1; // rdx
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::SourceContext *source_context; // rdi

  v1 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    v1 = *(_QWORD *)(v1 + 8);
  if ( !v1 )
  {
    ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
    if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
    {
      if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
        operator delete(ptr->union_.align_to_ptr);
      operator delete(ptr, 0x20uLL);
    }
    if ( this != (google::protobuf::Enum *const)&google::protobuf::_Enum_default_instance_ )
    {
      source_context = this->source_context_;
      if ( source_context )
        (*((void (__fastcall **)(google::protobuf::SourceContext *))source_context->_vptr_MessageLite + 1))(source_context);
    }
  }
};

// Line 2387: range 000000000C946B30-000000000C946B33
void __fastcall google::protobuf::Enum::SetCachedSize(const google::protobuf::Enum *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 2400: range 000000000C949ED0-000000000C949F47
google::protobuf::Enum *__fastcall google::protobuf::Enum::New(
        google::protobuf::Enum *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::Enum *Aligned; // r12
  google::protobuf::Enum *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::Enum,
        0x58uLL);
    Aligned = (google::protobuf::Enum *)google::protobuf::internal::ArenaImpl::AllocateAligned(&a2->impl_, 0x58uLL);
    google::protobuf::Enum::Enum(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::Enum *)operator new(0x58uLL);
    google::protobuf::Enum::Enum(v4);
    return v4;
  }
};

// Line 2404: range 000000000C949050-000000000C94911C
void __fastcall google::protobuf::Enum::Clear(google::protobuf::Enum *const this)
{
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  google::protobuf::EnumValue **elements; // rbp
  __int64 v5; // r12
  google::protobuf::EnumValue *v6; // rdi
  std::string *ptr; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  google::protobuf::SourceContext *source_context; // r8
  google::protobuf::UnknownFieldSet *v11; // rdi

  current_size = this->enumvalue_.current_size_;
  if ( current_size > 0 )
  {
    rep = this->enumvalue_.rep_;
    elements = (google::protobuf::EnumValue **)rep->elements;
    v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v6 = *elements++;
      google::protobuf::EnumValue::Clear(v6);
    }
    while ( elements != (google::protobuf::EnumValue **)v5 );
    this->enumvalue_.current_size_ = 0;
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
    (google::protobuf::internal::RepeatedPtrFieldBase *const)&this->options_.current_size_,
    &this->options_.rep_);
  ptr = this->name_.ptr_;
  if ( ptr != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) != 0 )
    v9 = *(_QWORD *)(v9 + 8);
  if ( !v9 )
  {
    source_context = this->source_context_;
    if ( source_context )
    {
      (*((void (__fastcall **)(google::protobuf::SourceContext *))source_context->_vptr_MessageLite + 1))(this->source_context_);
      v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    }
  }
  this->source_context_ = 0LL;
  this->syntax_ = 0;
  if ( (v8 & 1) != 0 )
  {
    v11 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    if ( v11->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v11);
  }
};

// Line 2422: range 000000000C94C300-000000000C94C817
__int64 __fastcall google::protobuf::Enum::MergePartialFromCodedStream(
        google::protobuf::Enum *this,
        google::protobuf::io::CodedInputStream *a2)
{
  const google::protobuf::uint8 *buffer_end; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  google::protobuf::UnknownFieldSet *v8; // rdx
  const google::protobuf::uint8 *v9; // rax
  google::protobuf::uint32 v10; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  google::protobuf::SourceContext *source_context; // r13
  const google::protobuf::uint8 *v14; // rax
  int v15; // esi
  std::pair<int,int> v16; // rax
  int first; // r14d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  int v21; // ecx
  google::protobuf::Arena *v22; // r14
  google::protobuf::Option *v23; // r13
  __int64 v24; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v25; // rdx
  const google::protobuf::uint8 *v26; // rax
  int v27; // esi
  std::pair<int,int> v28; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  int total_size; // ecx
  google::protobuf::Arena *arena; // r14
  google::protobuf::EnumValue *Aligned; // r13
  __int64 v35; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v36; // rdx
  const google::protobuf::uint8 *v37; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v39; // rax
  google::protobuf::Arena *hint; // rsi
  std::string *v41; // r8
  const char *v42; // r8

  buffer_end = a2->buffer_end_;
  buffer = a2->buffer_;
LABEL_2:
  if ( buffer >= buffer_end )
    goto LABEL_11;
  while ( 1 )
  {
    TagFallback = *buffer;
    if ( (char)TagFallback <= 0 )
      break;
    a2->buffer_ = buffer + 1;
LABEL_13:
    if ( TagFallback > 0x2F )
      goto handle_unusual_22;
    switch ( TagFallback >> 3 )
    {
      case 0u:
        goto handle_unusual_22;
      case 1u:
        ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
        v7 = ptr & 1;
        if ( TagFallback != 10 )
          goto LABEL_7;
        hint = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
        if ( (ptr & 1) != 0 )
          hint = (google::protobuf::Arena *)hint->impl_.hint_;
        v41 = this->name_.ptr_;
        if ( v41 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstance(
            &this->name_.ptr_,
            hint,
            (__int64)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          v41 = this->name_.ptr_;
        }
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, v41)
          || !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                 (google::protobuf::internal::WireFormatLite *)this->name_.ptr_->_M_dataplus._M_p,
                                 (const char *)LODWORD(this->name_.ptr_->_M_string_length),
                                 0,
                                 (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Enum.name",
                                 v42) )
        {
          return 0LL;
        }
        break;
      case 2u:
        if ( TagFallback != 18 )
          goto LABEL_6;
        rep = this->enumvalue_.rep_;
        if ( !rep )
        {
          total_size = this->enumvalue_.total_size_;
LABEL_79:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->enumvalue_, total_size + 1);
          rep = this->enumvalue_.rep_;
          allocated_size = rep->allocated_size;
          goto LABEL_49;
        }
        current_size = this->enumvalue_.current_size_;
        allocated_size = rep->allocated_size;
        if ( (int)current_size < rep->allocated_size )
        {
          Aligned = (google::protobuf::EnumValue *)rep->elements[current_size];
          this->enumvalue_.current_size_ = current_size + 1;
          goto LABEL_54;
        }
        total_size = this->enumvalue_.total_size_;
        if ( allocated_size == total_size )
          goto LABEL_79;
LABEL_49:
        arena = this->enumvalue_.arena_;
        rep->allocated_size = allocated_size + 1;
        if ( arena )
        {
          if ( arena->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              arena,
              (const std::type_info *)&`typeinfo for'google::protobuf::EnumValue,
              0x38uLL);
          Aligned = (google::protobuf::EnumValue *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                     &arena->impl_,
                                                     0x38uLL);
          google::protobuf::EnumValue::EnumValue(Aligned, arena);
        }
        else
        {
          Aligned = (google::protobuf::EnumValue *)operator new(0x38uLL);
          google::protobuf::EnumValue::EnumValue(Aligned);
        }
        v35 = this->enumvalue_.current_size_;
        v36 = this->enumvalue_.rep_;
        this->enumvalue_.current_size_ = v35 + 1;
        v36->elements[v35] = Aligned;
LABEL_54:
        v37 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_
          && (VarintSizeAsIntFallback = *v37, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
        {
          a2->buffer_ = v37 + 1;
        }
        else
        {
          VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( VarintSizeAsIntFallback < 0 )
            return 0LL;
        }
        v39 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
        first = v39.first;
        if ( v39.second >= 0 && (unsigned __int8)google::protobuf::EnumValue::MergePartialFromCodedStream(Aligned, a2) )
          goto LABEL_28;
        return 0LL;
      case 3u:
        if ( TagFallback != 26 )
          goto LABEL_6;
        v18 = this->options_.rep_;
        if ( !v18 )
        {
          v21 = this->options_.total_size_;
LABEL_81:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->options_, v21 + 1);
          v18 = this->options_.rep_;
          v20 = v18->allocated_size;
          goto LABEL_34;
        }
        v19 = this->options_.current_size_;
        v20 = v18->allocated_size;
        if ( (int)v19 < v18->allocated_size )
        {
          v23 = (google::protobuf::Option *)v18->elements[v19];
          this->options_.current_size_ = v19 + 1;
          goto LABEL_39;
        }
        v21 = this->options_.total_size_;
        if ( v20 == v21 )
          goto LABEL_81;
LABEL_34:
        v22 = this->options_.arena_;
        v18->allocated_size = v20 + 1;
        if ( v22 )
        {
          if ( v22->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              v22,
              (const std::type_info *)&`typeinfo for'google::protobuf::Option,
              0x28uLL);
          v23 = (google::protobuf::Option *)google::protobuf::internal::ArenaImpl::AllocateAligned(&v22->impl_, 0x28uLL);
          google::protobuf::Option::Option(v23, v22);
        }
        else
        {
          v23 = (google::protobuf::Option *)operator new(0x28uLL);
          google::protobuf::Option::Option(v23);
        }
        v24 = this->options_.current_size_;
        v25 = this->options_.rep_;
        this->options_.current_size_ = v24 + 1;
        v25->elements[v24] = v23;
LABEL_39:
        v26 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v27 = *v26, (unsigned int)v27 <= 0x7F) )
        {
          a2->buffer_ = v26 + 1;
        }
        else
        {
          v27 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v27 < 0 )
            return 0LL;
        }
        v28 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v27);
        first = v28.first;
        if ( v28.second < 0 || !google::protobuf::Option::MergePartialFromCodedStream(v23, a2) )
          return 0LL;
LABEL_28:
        if ( !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
          return 0LL;
        break;
      case 4u:
        if ( TagFallback != 34 )
          goto LABEL_6;
        source_context = this->source_context_;
        if ( !source_context )
        {
          google::protobuf::Enum::_slow_mutable_source_context(this);
          source_context = this->source_context_;
        }
        v14 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v15 = *v14, (unsigned int)v15 <= 0x7F) )
        {
          a2->buffer_ = v14 + 1;
        }
        else
        {
          v15 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v15 < 0 )
            return 0LL;
        }
        v16 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v15);
        first = v16.first;
        if ( v16.second >= 0 && google::protobuf::SourceContext::MergePartialFromCodedStream(source_context, a2) )
          goto LABEL_28;
        return 0LL;
      case 5u:
        if ( TagFallback != 40 )
          goto LABEL_6;
        v9 = a2->buffer_;
        buffer_end = a2->buffer_end_;
        if ( a2->buffer_ >= buffer_end )
        {
          v10 = 0;
        }
        else
        {
          v10 = *v9;
          if ( *(char *)v9 >= 0 )
          {
            buffer = v9 + 1;
            a2->buffer_ = buffer;
            goto LABEL_72;
          }
        }
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v10);
        v10 = Varint32Fallback;
        if ( Varint32Fallback < 0 )
          return 0LL;
        buffer_end = a2->buffer_end_;
        buffer = a2->buffer_;
LABEL_72:
        this->syntax_ = v10;
        goto LABEL_2;
    }
LABEL_10:
    buffer = a2->buffer_;
    if ( a2->buffer_ >= a2->buffer_end_ )
    {
LABEL_11:
      TagFallback = 0;
      break;
    }
  }
  TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
  if ( TagFallback - 1 <= 0x7E )
    goto LABEL_13;
handle_unusual_22:
  if ( TagFallback )
  {
LABEL_6:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v7 = ptr & 1;
LABEL_7:
    if ( v7 )
      v8 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v8) )
      return 0LL;
    goto LABEL_10;
  }
  return 1LL;
};

// Line 2519: range 000000000C946DB0-000000000C946EE6
void __fastcall google::protobuf::Enum::SerializeWithCachedSizes(
        const google::protobuf::Enum *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const char *v2; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  int current_size; // r13d
  int i; // ebx
  __int64 v8; // rdx
  int v9; // r13d
  int j; // ebx
  __int64 v11; // rdx
  google::protobuf::SourceContext *source_context; // rsi
  int syntax; // esi
  google::protobuf::UnknownFieldSet *v14; // rdi
  const google::protobuf::UnknownFieldSet *v15; // rdi

  ptr = this->name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Enum.name",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  }
  current_size = this->enumvalue_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v8 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        2,
        (const google::protobuf::MessageLite *)this->enumvalue_.rep_->elements[v8],
        output);
    }
  }
  v9 = this->options_.current_size_;
  if ( v9 )
  {
    for ( j = 0; j != v9; ++j )
    {
      v11 = j;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        3,
        (const google::protobuf::MessageLite *)this->options_.rep_->elements[v11],
        output);
    }
  }
  if ( this != (const google::protobuf::Enum *const)&google::protobuf::_Enum_default_instance_ )
  {
    source_context = this->source_context_;
    if ( source_context )
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(4, source_context, output);
  }
  syntax = this->syntax_;
  if ( syntax )
    google::protobuf::internal::WireFormatLite::WriteEnum(5, syntax, output);
  v14 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v14 & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)v14 & 1) != 0 )
      v15 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL);
    else
      v15 = google::protobuf::UnknownFieldSet::default_instance(v14);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v15, output);
  }
};

// Line 2568: range 000000000C94D560-000000000C94D756
google::protobuf::uint8 *__fastcall google::protobuf::Enum::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::Enum *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const char *v3; // r8
  const google::protobuf::Enum *v4; // r14
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  int current_size; // ebx
  int i; // r15d
  google::protobuf::uint8 *v11; // rdx
  unsigned int j; // eax
  char v13; // cl
  int v14; // ebx
  int k; // r15d
  google::protobuf::uint8 *v16; // rdx
  unsigned int m; // eax
  char v18; // cl
  unsigned int v19; // eax
  google::protobuf::uint8 *n; // rdx
  char v21; // cl
  unsigned __int64 syntax; // rcx
  google::protobuf::uint8 *ii; // rdx
  char v24; // al
  unsigned __int64 v25; // rax
  const google::protobuf::UnknownFieldSet *v26; // rdi

  v4 = this;
  ptr = this->name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Enum.name",
      v3);
    this = (const google::protobuf::Enum *const)this->name_.ptr_;
    *target = 10;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray((const std::string *)this, target + 1);
  }
  current_size = v4->enumvalue_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      this = (const google::protobuf::Enum *const)v4->enumvalue_.rep_->elements[i];
      *target = 18;
      v11 = target + 1;
      for ( j = this->options_.total_size_; j > 0x7F; *(v11 - 1) = v13 | 0x80 )
      {
        v13 = j;
        j >>= 7;
        ++v11;
      }
      *v11 = j;
      target = google::protobuf::EnumValue::InternalSerializeWithCachedSizesToArray(
                 (const google::protobuf::EnumValue *const)this,
                 deterministic,
                 v11 + 1);
    }
  }
  v14 = v4->options_.current_size_;
  if ( v14 )
  {
    for ( k = 0; k != v14; ++k )
    {
      this = (const google::protobuf::Enum *const)v4->options_.rep_->elements[k];
      *target = 26;
      v16 = target + 1;
      for ( m = (unsigned int)this->enumvalue_.rep_; m > 0x7F; *(v16 - 1) = v18 | 0x80 )
      {
        v18 = m;
        m >>= 7;
        ++v16;
      }
      *v16 = m;
      target = google::protobuf::Option::InternalSerializeWithCachedSizesToArray(
                 (const google::protobuf::Option *const)this,
                 deterministic,
                 v16 + 1);
    }
  }
  if ( v4 != (const google::protobuf::Enum *)&google::protobuf::_Enum_default_instance_ )
  {
    this = (const google::protobuf::Enum *const)v4->source_context_;
    if ( this )
    {
      *target = 34;
      v19 = this->enumvalue_.current_size_;
      for ( n = target + 1; v19 > 0x7F; *(n - 1) = v21 | 0x80 )
      {
        v21 = v19;
        v19 >>= 7;
        ++n;
      }
      *n = v19;
      target = google::protobuf::SourceContext::InternalSerializeWithCachedSizesToArray(
                 (const google::protobuf::SourceContext *const)this,
                 deterministic,
                 n + 1);
    }
  }
  syntax = v4->syntax_;
  if ( (_DWORD)syntax )
  {
    *target = 40;
    for ( ii = target + 1; syntax > 0x7F; *(ii - 1) = v24 | 0x80 )
    {
      v24 = syntax;
      syntax >>= 7;
      ++ii;
    }
    *ii = syntax;
    target = ii + 1;
  }
  v25 = (unsigned __int64)v4->_internal_metadata_.ptr_;
  if ( (v25 & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return target;
  if ( (v25 & 1) != 0 )
    v26 = (const google::protobuf::UnknownFieldSet *)(v25 & 0xFFFFFFFFFFFFFFFELL);
  else
    v26 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v26, target);
};

// Line 2622: range 000000000C94DC80-000000000C94DDD7
size_t __fastcall google::protobuf::Enum::ByteSizeLong(const google::protobuf::Enum *const this)
{
  size_t v1; // rax
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v4; // rdi
  __int64 current_size; // rbx
  size_t v6; // rbp
  int v7; // r13d
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rbx
  size_t v12; // r13
  int v13; // ebp
  __int64 v14; // rdx
  size_t v15; // rdx
  unsigned int v16; // eax
  std::string::size_type M_string_length; // rax
  __int64 v18; // r13
  google::protobuf::SourceContext *source_context; // rdi
  size_t v20; // rdx
  unsigned int v21; // eax
  int syntax; // eax
  __int64 v23; // rax

  v1 = 0LL;
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  current_size = (unsigned int)this->enumvalue_.current_size_;
  v6 = v1 + current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::EnumValue::ByteSizeLong((const google::protobuf::EnumValue *const)this->enumvalue_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  v11 = (unsigned int)this->options_.current_size_;
  v12 = v6 + v11;
  if ( (_DWORD)v11 )
  {
    v13 = 0;
    do
    {
      v14 = v13++;
      v15 = google::protobuf::Option::ByteSizeLong((const google::protobuf::Option *const)this->options_.rep_->elements[v14]);
      _BitScanReverse(&v16, v15 | 1);
      v12 += v15 + ((9 * v16 + 73) >> 6);
    }
    while ( (_DWORD)v11 != v13 );
  }
  M_string_length = this->name_.ptr_->_M_string_length;
  if ( M_string_length )
  {
    v18 = M_string_length + v12 + 1;
    _BitScanReverse((unsigned int *)&M_string_length, M_string_length | 1);
    v12 = ((unsigned int)(9 * M_string_length + 73) >> 6) + v18;
  }
  if ( this != (const google::protobuf::Enum *const)&google::protobuf::_Enum_default_instance_ )
  {
    source_context = this->source_context_;
    if ( source_context )
    {
      v20 = google::protobuf::SourceContext::ByteSizeLong(source_context);
      _BitScanReverse(&v21, v20 | 1);
      v12 += ((9 * v21 + 73) >> 6) + v20 + 1;
    }
  }
  syntax = this->syntax_;
  if ( syntax )
  {
    if ( syntax < 0 )
    {
      v23 = 10LL;
    }
    else
    {
      _BitScanReverse((unsigned int *)&syntax, syntax | 1);
      v23 = (unsigned int)(9 * syntax + 73) >> 6;
    }
    v12 += v23 + 1;
  }
  this->_cached_size_ = v12;
  return v12;
};

// Line 2680: range 000000000C94B3A0-000000000C94B3ED
void __fastcall google::protobuf::Enum::MergeFrom(
        google::protobuf::Enum *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::Enum *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::Enum *)__dynamic_cast(
                                         from,
                                         (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                         (const struct __class_type_info *)&`typeinfo for'google::protobuf::Enum,
                                         0LL);
  if ( v2 )
    google::protobuf::Enum::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 2695: range 000000000C94B1B0-000000000C94B394
void __fastcall google::protobuf::Enum::MergeFrom(
        google::protobuf::Enum *const this,
        const google::protobuf::Enum *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  int v9; // r12d
  std::string *v10; // rsi
  google::protobuf::SourceContext *source_context; // rsi
  google::protobuf::SourceContext *v12; // rdi
  int syntax; // eax
  void **v14; // r13
  void **v15; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v16; // rax
  int v17; // r12d
  google::protobuf::Arena *hint; // r8
  std::string *v19; // rdi
  void **elements; // r13
  void **v21; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v23; // r12d

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->enumvalue_.current_size_;
  if ( current_size )
  {
    elements = from->enumvalue_.rep_->elements;
    v21 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->enumvalue_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::TypeHandler>(
      &this->enumvalue_,
      v21,
      elements,
      current_size,
      this->enumvalue_.rep_->allocated_size - this->enumvalue_.current_size_);
    rep = this->enumvalue_.rep_;
    v23 = this->enumvalue_.current_size_ + current_size;
    this->enumvalue_.current_size_ = v23;
    if ( v23 > rep->allocated_size )
      rep->allocated_size = v23;
  }
  v9 = from->options_.current_size_;
  if ( v9
    && (v14 = from->options_.rep_->elements,
        v15 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->options_, v9),
        google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
          &this->options_,
          v15,
          v14,
          v9,
          this->options_.rep_->allocated_size - this->options_.current_size_),
        v16 = this->options_.rep_,
        v17 = this->options_.current_size_ + v9,
        this->options_.current_size_ = v17,
        v17 > v16->allocated_size) )
  {
    v10 = from->name_.ptr_;
    v16->allocated_size = v17;
    if ( !v10->_M_string_length )
      goto LABEL_8;
  }
  else
  {
    v10 = from->name_.ptr_;
    if ( !v10->_M_string_length )
      goto LABEL_8;
  }
  hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    hint = (google::protobuf::Arena *)hint->impl_.hint_;
  v19 = this->name_.ptr_;
  if ( v19 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->name_.ptr_, hint, (__int64)v10);
  else
    std::string::_M_assign(v19, v10);
LABEL_8:
  if ( from != (const google::protobuf::Enum *)&google::protobuf::_Enum_default_instance_ )
  {
    source_context = from->source_context_;
    if ( source_context )
    {
      v12 = this->source_context_;
      if ( !v12 )
      {
        google::protobuf::Enum::_slow_mutable_source_context(this);
        source_context = from->source_context_;
        v12 = this->source_context_;
        if ( !source_context )
          source_context = (google::protobuf::SourceContext *)&google::protobuf::_SourceContext_default_instance_;
      }
      google::protobuf::SourceContext::MergeFrom(v12, source_context);
    }
  }
  syntax = from->syntax_;
  if ( syntax )
    this->syntax_ = syntax;
};

// Line 2717: range 000000000C94B400-000000000C94B430
void __fastcall google::protobuf::Enum::CopyFrom(
        google::protobuf::Enum *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::Enum::Clear(this);
    google::protobuf::Enum::MergeFrom(this, from);
  }
};

// Line 2724: range 000000000C94B540-000000000C94B570
void __fastcall google::protobuf::Enum::CopyFrom(
        google::protobuf::Enum *const this,
        const google::protobuf::Enum *from)
{
  if ( from != this )
  {
    google::protobuf::Enum::Clear(this);
    google::protobuf::Enum::MergeFrom(this, from);
  }
};

// Line 2734: range 000000000C94B440-000000000C94B534
void __fastcall google::protobuf::Enum::Swap(google::protobuf::Enum *const this, google::protobuf::Enum *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::Enum *v5; // r13
  unsigned __int64 v6; // rdx

  if ( other != this )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    v4 = (unsigned __int64)other->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
    if ( ((__int64)other->_internal_metadata_.ptr_ & 1) != 0 )
      v4 = *(_QWORD *)(v4 + 8);
    if ( (google::protobuf::Arena *)v4 == hint )
    {
      google::protobuf::Enum::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::Enum::New(this, hint);
      google::protobuf::Enum::MergeFrom(v5, other);
      google::protobuf::Enum::Clear(other);
      google::protobuf::Enum::MergeFrom(other, this);
      google::protobuf::Enum::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::Enum *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 2748: range 000000000C948BF0-000000000C948C00
void __fastcall google::protobuf::Enum::UnsafeArenaSwap(
        google::protobuf::Enum *const this,
        google::protobuf::Enum *other)
{
  if ( other != this )
    google::protobuf::Enum::InternalSwap(this, other);
};

// Line 2752: range 000000000C948AF0-000000000C948BEB
void __fastcall google::protobuf::Enum::InternalSwap(google::protobuf::Enum *const this, google::protobuf::Enum *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v5; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v6; // rax
  std::string *ptr; // rdx
  std::string *v8; // rax
  google::protobuf::SourceContext *source_context; // rdx
  google::protobuf::SourceContext *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rcx
  int cached_size; // eax
  _QWORD *v17; // [rsp+0h] [rbp-18h]

  rep = this->enumvalue_.rep_;
  this->enumvalue_.rep_ = other->enumvalue_.rep_;
  current_size = other->enumvalue_.current_size_;
  other->enumvalue_.rep_ = rep;
  LODWORD(rep) = this->enumvalue_.current_size_;
  this->enumvalue_.current_size_ = current_size;
  total_size = other->enumvalue_.total_size_;
  other->enumvalue_.current_size_ = (int)rep;
  LODWORD(rep) = this->enumvalue_.total_size_;
  this->enumvalue_.total_size_ = total_size;
  v5 = other->options_.rep_;
  other->enumvalue_.total_size_ = (int)rep;
  v6 = this->options_.rep_;
  this->options_.rep_ = v5;
  LODWORD(v5) = other->options_.current_size_;
  other->options_.rep_ = v6;
  LODWORD(v6) = this->options_.current_size_;
  this->options_.current_size_ = (int)v5;
  LODWORD(v5) = other->options_.total_size_;
  other->options_.current_size_ = (int)v6;
  LODWORD(v6) = this->options_.total_size_;
  this->options_.total_size_ = (int)v5;
  ptr = other->name_.ptr_;
  other->options_.total_size_ = (int)v6;
  v8 = this->name_.ptr_;
  this->name_.ptr_ = ptr;
  source_context = other->source_context_;
  other->name_.ptr_ = v8;
  v10 = this->source_context_;
  this->source_context_ = source_context;
  LODWORD(source_context) = other->syntax_;
  other->source_context_ = v10;
  LODWORD(v10) = this->syntax_;
  this->syntax_ = (int)source_context;
  v11 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->syntax_ = (int)v10;
  v12 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v12 & 1) != 0 )
  {
    if ( (v11 & 1) == 0 )
    {
      v13 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v12 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v11 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v13 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v12 & 1) != 0 )
  {
    v14 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v17 = v13;
    v14 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v13 = v17;
  }
  v15 = *v14;
  *v14 = *v13;
  *v13 = v15;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 2982: range 000000000C9496E0-000000000C949770
void __fastcall google::protobuf::EnumValue::EnumValue(google::protobuf::EnumValue *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A182720;
  this->_internal_metadata_.ptr_ = 0LL;
  this->options_.arena_ = 0LL;
  *(_QWORD *)&this->options_.current_size_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( this != (google::protobuf::EnumValue *)&google::protobuf::_EnumValue_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_QWORD *)&this->number_ = 0LL;
};

// Line 2990: range 000000000C949780-000000000C949800
void __fastcall google::protobuf::EnumValue::EnumValue(google::protobuf::EnumValue *this, google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A182720;
  this->options_.arena_ = a2;
  *(_QWORD *)&this->options_.current_size_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_QWORD *)&this->number_ = 0LL;
};

// Line 2999: range 000000000C94A300-000000000C94A431
__int64 __fastcall google::protobuf::EnumValue::EnumValue(
        google::protobuf::EnumValue *this,
        const google::protobuf::EnumValue *a2)
{
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // r12
  google::protobuf::UnknownFieldSet *v8; // rdi
  std::string *v9; // rdx
  google::protobuf::Arena *hint; // rsi
  __int64 result; // rax
  void **elements; // r14
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d

  *(_QWORD *)&this->options_.current_size_ = 0LL;
  current_size = a2->options_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182720;
  this->_internal_metadata_.ptr_ = 0LL;
  this->options_.arena_ = 0LL;
  this->options_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->options_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->options_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
      &this->options_,
      v13,
      elements,
      current_size,
      this->options_.rep_->allocated_size - this->options_.current_size_);
    rep = this->options_.rep_;
    v15 = this->options_.current_size_ + current_size;
    this->options_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v6 & 1) != 0 )
      v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
  }
  v9 = a2->name_.ptr_;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v9->_M_string_length )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->name_.ptr_, hint, (__int64)v9);
  }
  result = (unsigned int)a2->number_;
  this->number_ = result;
  return result;
};

// Line 3020: range 000000000C949C00-000000000C949C74
void __fastcall google::protobuf::EnumValue::~EnumValue(google::protobuf::EnumValue *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rdx

  this->_vptr_MessageLite = (int (**)(...))off_1A182720;
  google::protobuf::EnumValue::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(&this->options_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v2 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v3 = ptr & 0xFFFFFFFFFFFFFFFELL;
    if ( (ptr & 1) != 0 )
      v3 = v2[1];
    if ( !v3 && v2 )
    {
      if ( *v2 )
        google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
      operator delete(v2, 0x10uLL);
    }
  }
};

// Line 3020: range 000000000C949C80-000000000C949C92
void __fastcall google::protobuf::EnumValue::~EnumValue(google::protobuf::EnumValue *const this)
{
  google::protobuf::EnumValue::~EnumValue(this);
  operator delete(this, 0x38uLL);
};

// Line 3043: range 000000000C946B40-000000000C946B43
void __fastcall google::protobuf::EnumValue::SetCachedSize(const google::protobuf::EnumValue *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 3056: range 000000000C949810-000000000C949887
google::protobuf::EnumValue *__fastcall google::protobuf::EnumValue::New(
        google::protobuf::EnumValue *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::EnumValue *Aligned; // r12
  google::protobuf::EnumValue *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::EnumValue,
        0x38uLL);
    Aligned = (google::protobuf::EnumValue *)google::protobuf::internal::ArenaImpl::AllocateAligned(&a2->impl_, 0x38uLL);
    google::protobuf::EnumValue::EnumValue(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::EnumValue *)operator new(0x38uLL);
    google::protobuf::EnumValue::EnumValue(v4);
    return v4;
  }
};

// Line 3060: range 000000000C948E40-000000000C948E8B
void __fastcall google::protobuf::EnumValue::Clear(google::protobuf::EnumValue *const this)
{
  std::string *ptr; // rax
  unsigned __int64 v3; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
    (google::protobuf::internal::RepeatedPtrFieldBase *const)&this->options_.current_size_,
    &this->options_.rep_);
  ptr = this->name_.ptr_;
  if ( ptr != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  v3 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->number_ = 0;
  if ( (v3 & 1) != 0 )
  {
    v4 = (google::protobuf::UnknownFieldSet *)(v3 & 0xFFFFFFFFFFFFFFFELL);
    if ( v4->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
  }
};

// Line 3073: range 000000000C94BFE0-000000000C94C2FB
__int64 __fastcall google::protobuf::EnumValue::MergePartialFromCodedStream(
        google::protobuf::EnumValue *this,
        google::protobuf::io::CodedInputStream *a2)
{
  const google::protobuf::uint8 *buffer_end; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  google::protobuf::UnknownFieldSet *v8; // rdx
  google::protobuf::uint32 v9; // eax
  google::protobuf::Arena *hint; // rsi
  std::string *v11; // r8
  const char *v12; // r8
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::Option *Aligned; // r13
  const google::protobuf::uint8 *v18; // rax
  google::protobuf::uint32 v19; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  int total_size; // esi
  google::protobuf::Arena *arena; // r14
  __int64 v23; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v24; // rdx
  const google::protobuf::uint8 *v25; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v27; // rax
  int first; // r14d

  buffer_end = a2->buffer_end_;
  buffer = a2->buffer_;
LABEL_2:
  if ( buffer >= buffer_end )
    goto LABEL_11;
  while ( 1 )
  {
    TagFallback = *buffer;
    if ( (char)TagFallback <= 0 )
      break;
    a2->buffer_ = buffer + 1;
LABEL_13:
    v9 = TagFallback >> 3;
    if ( TagFallback >> 3 == 2 )
    {
      if ( TagFallback == 16 )
      {
        v18 = a2->buffer_;
        buffer_end = a2->buffer_end_;
        if ( a2->buffer_ >= buffer_end )
        {
          v19 = 0;
LABEL_31:
          Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v19);
          v19 = Varint32Fallback;
          if ( Varint32Fallback < 0 )
            return 0LL;
          buffer_end = a2->buffer_end_;
          buffer = a2->buffer_;
        }
        else
        {
          v19 = *v18;
          if ( *(char *)v18 < 0 )
            goto LABEL_31;
          buffer = v18 + 1;
          a2->buffer_ = buffer;
        }
        this->number_ = v19;
        goto LABEL_2;
      }
      goto LABEL_6;
    }
    if ( v9 == 3 )
    {
      if ( TagFallback != 26 )
        goto LABEL_6;
      rep = this->options_.rep_;
      if ( rep )
      {
        current_size = this->options_.current_size_;
        allocated_size = rep->allocated_size;
        if ( (int)current_size < rep->allocated_size )
        {
          Aligned = (google::protobuf::Option *)rep->elements[current_size];
          this->options_.current_size_ = current_size + 1;
          goto LABEL_41;
        }
        total_size = this->options_.total_size_;
        if ( allocated_size != total_size )
        {
LABEL_36:
          arena = this->options_.arena_;
          rep->allocated_size = allocated_size + 1;
          if ( arena )
          {
            if ( arena->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                arena,
                (const std::type_info *)&`typeinfo for'google::protobuf::Option,
                0x28uLL);
            Aligned = (google::protobuf::Option *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                    &arena->impl_,
                                                    0x28uLL);
            google::protobuf::Option::Option(Aligned, arena);
          }
          else
          {
            Aligned = (google::protobuf::Option *)operator new(0x28uLL);
            google::protobuf::Option::Option(Aligned);
          }
          v23 = this->options_.current_size_;
          v24 = this->options_.rep_;
          this->options_.current_size_ = v23 + 1;
          v24->elements[v23] = Aligned;
LABEL_41:
          v25 = a2->buffer_;
          if ( a2->buffer_ < a2->buffer_end_
            && (VarintSizeAsIntFallback = *v25, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
          {
            a2->buffer_ = v25 + 1;
          }
          else
          {
            VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
            if ( VarintSizeAsIntFallback < 0 )
              return 0LL;
          }
          v27 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
          first = v27.first;
          if ( v27.second < 0
            || !google::protobuf::Option::MergePartialFromCodedStream(Aligned, a2)
            || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
          {
            return 0LL;
          }
          goto LABEL_10;
        }
      }
      else
      {
        total_size = this->options_.total_size_;
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->options_, total_size + 1);
      rep = this->options_.rep_;
      allocated_size = rep->allocated_size;
      goto LABEL_36;
    }
    if ( v9 != 1 )
      goto handle_unusual_21;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v7 = ptr & 1;
    if ( TagFallback != 10 )
      goto LABEL_7;
    hint = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (ptr & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    v11 = this->name_.ptr_;
    if ( v11 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstance(
        &this->name_.ptr_,
        hint,
        (__int64)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
      v11 = this->name_.ptr_;
    }
    if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, v11)
      || !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                             (google::protobuf::internal::WireFormatLite *)this->name_.ptr_->_M_dataplus._M_p,
                             (const char *)LODWORD(this->name_.ptr_->_M_string_length),
                             0,
                             (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.EnumValue.name",
                             v12) )
    {
      return 0LL;
    }
LABEL_10:
    buffer = a2->buffer_;
    if ( a2->buffer_ >= a2->buffer_end_ )
    {
LABEL_11:
      TagFallback = 0;
      break;
    }
  }
  TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
  if ( TagFallback - 1 <= 0x7E )
    goto LABEL_13;
handle_unusual_21:
  if ( TagFallback )
  {
LABEL_6:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v7 = ptr & 1;
LABEL_7:
    if ( v7 )
      v8 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v8) )
      return 0LL;
    goto LABEL_10;
  }
  return 1LL;
};

// Line 3145: range 000000000C946EF0-000000000C946FD4
void __fastcall google::protobuf::EnumValue::SerializeWithCachedSizes(
        const google::protobuf::EnumValue *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const char *v2; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  google::protobuf::int32 number; // esi
  int current_size; // r12d
  int i; // ebx
  __int64 v9; // rdx
  google::protobuf::UnknownFieldSet *v10; // rdi
  const google::protobuf::UnknownFieldSet *v11; // rdi

  ptr = this->name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.EnumValue.name",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  }
  number = this->number_;
  if ( number )
    google::protobuf::internal::WireFormatLite::WriteInt32(2, number, output);
  current_size = this->options_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v9 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        3,
        (const google::protobuf::MessageLite *)this->options_.rep_->elements[v9],
        output);
    }
  }
  v10 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v10 & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)v10 & 1) != 0 )
      v11 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL);
    else
      v11 = google::protobuf::UnknownFieldSet::default_instance(v10);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v11, output);
  }
};

// Line 3180: range 000000000C94D420-000000000C94D550
google::protobuf::uint8 *__fastcall google::protobuf::EnumValue::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::EnumValue *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const char *v3; // r8
  const google::protobuf::EnumValue *v4; // r13
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  unsigned __int64 number; // rax
  google::protobuf::uint8 *i; // rdx
  char v11; // cl
  int current_size; // ebp
  int j; // r14d
  google::protobuf::uint8 *v14; // rdx
  unsigned int k; // eax
  char v16; // cl
  unsigned __int64 v17; // rax
  const google::protobuf::UnknownFieldSet *v18; // rdi

  v4 = this;
  ptr = this->name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.EnumValue.name",
      v3);
    this = (const google::protobuf::EnumValue *const)this->name_.ptr_;
    *target = 10;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray((const std::string *)this, target + 1);
  }
  number = v4->number_;
  if ( (_DWORD)number )
  {
    *target = 16;
    for ( i = target + 1; number > 0x7F; *(i - 1) = v11 | 0x80 )
    {
      v11 = number;
      number >>= 7;
      ++i;
    }
    *i = number;
    target = i + 1;
  }
  current_size = v4->options_.current_size_;
  if ( current_size )
  {
    for ( j = 0; j != current_size; ++j )
    {
      this = (const google::protobuf::EnumValue *const)v4->options_.rep_->elements[j];
      *target = 26;
      v14 = target + 1;
      for ( k = (unsigned int)this->options_.rep_; k > 0x7F; *(v14 - 1) = v16 | 0x80 )
      {
        v16 = k;
        k >>= 7;
        ++v14;
      }
      *v14 = k;
      target = google::protobuf::Option::InternalSerializeWithCachedSizesToArray(
                 (const google::protobuf::Option *const)this,
                 deterministic,
                 v14 + 1);
    }
  }
  v17 = (unsigned __int64)v4->_internal_metadata_.ptr_;
  if ( (v17 & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return target;
  if ( (v17 & 1) != 0 )
    v18 = (const google::protobuf::UnknownFieldSet *)(v17 & 0xFFFFFFFFFFFFFFFELL);
  else
    v18 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v18, target);
};

// Line 3218: range 000000000C94DB90-000000000C94DC6D
size_t __fastcall google::protobuf::EnumValue::ByteSizeLong(const google::protobuf::EnumValue *const this)
{
  size_t v2; // rax
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v4; // rdi
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax
  std::string::size_type M_string_length; // rax
  __int64 v12; // rcx
  google::protobuf::int32 number; // eax
  __int64 v14; // rax

  v2 = 0LL;
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    v2 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  current_size = (unsigned int)this->options_.current_size_;
  v6 = v2 + current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::Option::ByteSizeLong((const google::protobuf::Option *const)this->options_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  M_string_length = this->name_.ptr_->_M_string_length;
  if ( M_string_length )
  {
    v12 = M_string_length + v6 + 1;
    _BitScanReverse((unsigned int *)&M_string_length, M_string_length | 1);
    v6 = v12 + ((unsigned int)(9 * M_string_length + 73) >> 6);
  }
  number = this->number_;
  if ( number )
  {
    if ( number < 0 )
    {
      v14 = 10LL;
    }
    else
    {
      _BitScanReverse((unsigned int *)&number, number | 1);
      v14 = (unsigned int)(9 * number + 73) >> 6;
    }
    v6 += v14 + 1;
  }
  this->_cached_size_ = v6;
  return v6;
};

// Line 3259: range 000000000C94A120-000000000C94A16D
void __fastcall google::protobuf::EnumValue::MergeFrom(
        google::protobuf::EnumValue *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::EnumValue *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::EnumValue *)__dynamic_cast(
                                              from,
                                              (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                              (const struct __class_type_info *)&`typeinfo for'google::protobuf::EnumValue,
                                              0LL);
  if ( v2 )
    google::protobuf::EnumValue::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 3274: range 000000000C94A000-000000000C94A11C
void __fastcall google::protobuf::EnumValue::MergeFrom(
        google::protobuf::EnumValue *const this,
        const google::protobuf::EnumValue *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  std::string *v9; // rsi
  google::protobuf::int32 number; // eax
  void **elements; // r13
  void **v12; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v14; // r12d
  google::protobuf::Arena *hint; // r8
  std::string *v16; // rdi

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->options_.current_size_;
  if ( current_size
    && (elements = from->options_.rep_->elements,
        v12 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->options_, current_size),
        google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
          &this->options_,
          v12,
          elements,
          current_size,
          this->options_.rep_->allocated_size - this->options_.current_size_),
        rep = this->options_.rep_,
        v14 = this->options_.current_size_ + current_size,
        this->options_.current_size_ = v14,
        v14 > rep->allocated_size) )
  {
    v9 = from->name_.ptr_;
    rep->allocated_size = v14;
    if ( !v9->_M_string_length )
      goto LABEL_7;
  }
  else
  {
    v9 = from->name_.ptr_;
    if ( !v9->_M_string_length )
      goto LABEL_7;
  }
  hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    hint = (google::protobuf::Arena *)hint->impl_.hint_;
  v16 = this->name_.ptr_;
  if ( v16 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->name_.ptr_, hint, (__int64)v9);
  else
    std::string::_M_assign(v16, v9);
LABEL_7:
  number = from->number_;
  if ( number )
    this->number_ = number;
};

// Line 3292: range 000000000C94A180-000000000C94A1B0
void __fastcall google::protobuf::EnumValue::CopyFrom(
        google::protobuf::EnumValue *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::EnumValue::Clear(this);
    google::protobuf::EnumValue::MergeFrom(this, from);
  }
};

// Line 3299: range 000000000C94A2C0-000000000C94A2F0
void __fastcall google::protobuf::EnumValue::CopyFrom(
        google::protobuf::EnumValue *const this,
        const google::protobuf::EnumValue *from)
{
  if ( from != this )
  {
    google::protobuf::EnumValue::Clear(this);
    google::protobuf::EnumValue::MergeFrom(this, from);
  }
};

// Line 3309: range 000000000C94A1C0-000000000C94A2B4
void __fastcall google::protobuf::EnumValue::Swap(
        google::protobuf::EnumValue *const this,
        google::protobuf::EnumValue *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::EnumValue *v5; // r13
  unsigned __int64 v6; // rdx

  if ( other != this )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    v4 = (unsigned __int64)other->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
    if ( ((__int64)other->_internal_metadata_.ptr_ & 1) != 0 )
      v4 = *(_QWORD *)(v4 + 8);
    if ( (google::protobuf::Arena *)v4 == hint )
    {
      google::protobuf::EnumValue::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::EnumValue::New(this, hint);
      google::protobuf::EnumValue::MergeFrom(v5, other);
      google::protobuf::EnumValue::Clear(other);
      google::protobuf::EnumValue::MergeFrom(other, this);
      google::protobuf::EnumValue::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::EnumValue *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 3323: range 000000000C948AD0-000000000C948AE0
void __fastcall google::protobuf::EnumValue::UnsafeArenaSwap(
        google::protobuf::EnumValue *const this,
        google::protobuf::EnumValue *other)
{
  if ( other != this )
    google::protobuf::EnumValue::InternalSwap(this, other);
};

// Line 3327: range 000000000C948A00-000000000C948ACB
void __fastcall google::protobuf::EnumValue::InternalSwap(
        google::protobuf::EnumValue *const this,
        google::protobuf::EnumValue *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  std::string *ptr; // rdx
  std::string *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rcx
  int cached_size; // eax
  _QWORD *v13; // [rsp+0h] [rbp-18h]

  rep = this->options_.rep_;
  this->options_.rep_ = other->options_.rep_;
  current_size = other->options_.current_size_;
  other->options_.rep_ = rep;
  LODWORD(rep) = this->options_.current_size_;
  this->options_.current_size_ = current_size;
  total_size = other->options_.total_size_;
  other->options_.current_size_ = (int)rep;
  LODWORD(rep) = this->options_.total_size_;
  this->options_.total_size_ = total_size;
  ptr = other->name_.ptr_;
  other->options_.total_size_ = (int)rep;
  v6 = this->name_.ptr_;
  this->name_.ptr_ = ptr;
  LODWORD(ptr) = other->number_;
  other->name_.ptr_ = v6;
  LODWORD(v6) = this->number_;
  this->number_ = (int)ptr;
  v7 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->number_ = (int)v6;
  v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v8 & 1) != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v7 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v8 & 1) != 0 )
  {
    v10 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v13 = v9;
    v10 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v9 = v13;
  }
  v11 = *v10;
  *v10 = *v9;
  *v9 = v11;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 3467: range 000000000C948180-000000000C94821E
void __fastcall google::protobuf::Option::_slow_mutable_value(google::protobuf::Option *this)
{
  unsigned __int64 ptr; // rax
  google::protobuf::Arena *hint; // rdi
  google::protobuf::Any *AlignedAndAddCleanup; // rbp
  google::protobuf::Any *v5; // rbp

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  hint = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
  if ( (ptr & 1) != 0 )
    hint = (google::protobuf::Arena *)hint->impl_.hint_;
  if ( hint )
  {
    if ( hint->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        hint,
        (const std::type_info *)&`typeinfo for'google::protobuf::Any,
        0x38uLL);
    AlignedAndAddCleanup = (google::protobuf::Any *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                      &hint->impl_,
                                                      0x38uLL,
                                                      google::protobuf::internal::arena_destruct_object<google::protobuf::Any>);
    google::protobuf::Any::Any(AlignedAndAddCleanup);
    this->value_ = AlignedAndAddCleanup;
  }
  else
  {
    v5 = (google::protobuf::Any *)operator new(0x38uLL);
    google::protobuf::Any::Any(v5);
    this->value_ = v5;
  }
};

// Line 3471: range 000000000C948230-000000000C94826C
google::protobuf::Any *__fastcall google::protobuf::Option::_slow_release_value(google::protobuf::Option *this)
{
  google::protobuf::Any *value; // r12

  value = this->value_;
  if ( value )
  {
    value = (google::protobuf::Any *)operator new(0x38uLL);
    google::protobuf::Any::Any(value, this->value_);
    this->value_ = 0LL;
  }
  return value;
};

// Line 3475: range 000000000C73232C-000000000C73233C
void __fastcall __noreturn google::protobuf::Option::_slow_release_value()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x38uLL);
  _Unwind_Resume(v0);
};

// Line 3483: range 000000000C948280-000000000C94828C
google::protobuf::Any *__fastcall google::protobuf::Option::unsafe_arena_release_value(
        google::protobuf::Option *const this)
{
  google::protobuf::Any *result; // rax

  result = this->value_;
  this->value_ = 0LL;
  return result;
};

// Line 3488: range 000000000C948290-000000000C9482E4
void __fastcall google::protobuf::Option::unsafe_arena_set_allocated_value(
        google::protobuf::Option *const this,
        google::protobuf::Any *value)
{
  unsigned __int64 v3; // rdx
  google::protobuf::Any *v4; // rdi

  v3 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    v3 = *(_QWORD *)(v3 + 8);
  if ( v3 || (v4 = this->value_) == 0LL )
  {
    this->value_ = value;
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::Any *))v4->_vptr_MessageLite + 1))(v4);
    this->value_ = value;
  }
};

// Line 3505: range 000000000C948650-000000000C9486D0
void __fastcall google::protobuf::Option::Option(google::protobuf::Option *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A1827F8;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this != (google::protobuf::Option *)&google::protobuf::_Option_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->value_ = 0LL;
  this->_cached_size_ = 0;
};

// Line 3513: range 000000000C9486E0-000000000C948750
void __fastcall google::protobuf::Option::Option(google::protobuf::Option *this, google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A1827F8;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->value_ = 0LL;
  this->_cached_size_ = 0;
};

// Line 3521: range 000000000C949400-000000000C9494E1
void __fastcall google::protobuf::Option::Option(
        google::protobuf::Option *this,
        google::protobuf::OptionDefaultTypeInternal *a2)
{
  unsigned __int64 v3; // rax
  const google::protobuf::UnknownFieldSet *v4; // r12
  google::protobuf::UnknownFieldSet *v5; // rax
  std::string *v6; // rdx
  google::protobuf::Arena *hint; // rsi
  google::protobuf::Any *v8; // r12

  this->_internal_metadata_.ptr_ = 0LL;
  v3 = *((_QWORD *)&a2->_instance.union_.align_to_ptr + 1);
  this->_vptr_MessageLite = (int (**)(...))off_1A1827F8;
  this->_cached_size_ = 0;
  if ( (v3 & 1) != 0 )
  {
    v4 = (const google::protobuf::UnknownFieldSet *)(v3 & 0xFFFFFFFFFFFFFFFELL);
    v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v5, v4);
  }
  v6 = (std::string *)*((_QWORD *)&a2->_instance.union_.align_to_ptr + 2);
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v6->_M_string_length )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->name_.ptr_, hint, (__int64)v6);
  }
  if ( a2 == &google::protobuf::_Option_default_instance_ || !*((_QWORD *)&a2->_instance.union_.align_to_ptr + 3) )
  {
    this->value_ = 0LL;
  }
  else
  {
    v8 = (google::protobuf::Any *)operator new(0x38uLL);
    google::protobuf::Any::Any(v8, *((const google::protobuf::Any **)&a2->_instance.union_.align_to_ptr + 3));
    this->value_ = v8;
  }
};

// Line 3532: range 000000000C7323C2-000000000C7323DA
void __fastcall __noreturn google::protobuf::Option::Option()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v2; // r13

  operator delete(v1, 0x38uLL);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v2);
  _Unwind_Resume(v0);
};

// Line 3545: range 000000000C9483A0-000000000C948414
void __fastcall google::protobuf::Option::~Option(google::protobuf::Option *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rdx

  this->_vptr_MessageLite = (int (**)(...))off_1A1827F8;
  google::protobuf::Option::SharedDtor(this);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v2 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v3 = ptr & 0xFFFFFFFFFFFFFFFELL;
    if ( (ptr & 1) != 0 )
      v3 = v2[1];
    if ( !v3 && v2 )
    {
      if ( *v2 )
        google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
      operator delete(v2, 0x10uLL);
    }
  }
};

// Line 3545: range 000000000C948420-000000000C948495
void __fastcall google::protobuf::Option::~Option(google::protobuf::Option *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  this->_vptr_MessageLite = (int (**)(...))off_1A1827F8;
  google::protobuf::Option::SharedDtor(this);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v2 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v3 = ptr & 0xFFFFFFFFFFFFFFFELL;
    if ( (ptr & 1) != 0 )
      v3 = v2[1];
    if ( !v3 && v2 )
    {
      if ( *v2 )
        google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
      operator delete(v2, 0x10uLL);
    }
  }
  operator delete(this, 0x28uLL);
};

// Line 3550: range 000000000C948310-000000000C948394
void __fastcall google::protobuf::Option::SharedDtor(google::protobuf::Option *const this)
{
  unsigned __int64 v1; // rdx
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::Any *value; // rdi

  v1 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
  if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
    v1 = *(_QWORD *)(v1 + 8);
  if ( !v1 )
  {
    ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
    if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
    {
      if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
        operator delete(ptr->union_.align_to_ptr);
      operator delete(ptr, 0x20uLL);
    }
    if ( this != (google::protobuf::Option *const)&google::protobuf::_Option_default_instance_ )
    {
      value = this->value_;
      if ( value )
        (*((void (__fastcall **)(google::protobuf::Any *))value->_vptr_MessageLite + 1))(value);
    }
  }
};

// Line 3569: range 000000000C946B50-000000000C946B53
void __fastcall google::protobuf::Option::SetCachedSize(const google::protobuf::Option *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 3582: range 000000000C948760-000000000C9487D7
google::protobuf::Option *__fastcall google::protobuf::Option::New(
        google::protobuf::Option *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::Option *Aligned; // r12
  google::protobuf::Option *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::Option,
        0x28uLL);
    Aligned = (google::protobuf::Option *)google::protobuf::internal::ArenaImpl::AllocateAligned(&a2->impl_, 0x28uLL);
    google::protobuf::Option::Option(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::Option *)operator new(0x28uLL);
    google::protobuf::Option::Option(v4);
    return v4;
  }
};

// Line 3586: range 000000000C948D60-000000000C948DE4
void __fastcall google::protobuf::Option::Clear(google::protobuf::Option *const this)
{
  std::string *ptr; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  google::protobuf::UnknownFieldSet *v5; // rdi
  google::protobuf::Any *value; // r8

  ptr = this->name_.ptr_;
  if ( ptr != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  v3 = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
  if ( (v3 & 1) != 0 )
    v4 = *(_QWORD *)(v4 + 8);
  if ( !v4 )
  {
    value = this->value_;
    if ( value )
    {
      (*((void (__fastcall **)(google::protobuf::Any *))value->_vptr_MessageLite + 1))(this->value_);
      v3 = (unsigned __int64)this->_internal_metadata_.ptr_;
    }
  }
  this->value_ = 0LL;
  if ( (v3 & 1) != 0 )
  {
    v5 = (google::protobuf::UnknownFieldSet *)(v3 & 0xFFFFFFFFFFFFFFFELL);
    if ( v5->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v5);
  }
};

// Line 3601: range 000000000C94B7A0-000000000C94B9CE
bool __fastcall google::protobuf::Option::MergePartialFromCodedStream(
        google::protobuf::Option *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  unsigned __int64 v6; // rax
  google::protobuf::UnknownFieldSet *v7; // rdx
  google::protobuf::Any *value; // r13
  const google::protobuf::uint8 *v10; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v12; // rax
  int first; // r14d
  unsigned __int64 v14; // rdx
  google::protobuf::Arena *v15; // rsi
  std::string *v16; // r8
  const char *v17; // r8

LABEL_1:
  while ( 2 )
  {
    buffer = input->buffer_;
    if ( input->buffer_end_ <= input->buffer_ )
      goto LABEL_23;
LABEL_2:
    TagFallback = *buffer;
    if ( (char)TagFallback > 0 )
    {
      input->buffer_ = buffer + 1;
      goto LABEL_11;
    }
    while ( 1 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_11:
      if ( TagFallback >> 3 == 1 )
      {
        ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
        v6 = ptr & 1;
        if ( TagFallback != 10 )
          goto LABEL_6;
        v14 = ptr & 0xFFFFFFFFFFFFFFFELL;
        v15 = (google::protobuf::Arena *)v14;
        if ( v6 )
          v15 = *(google::protobuf::Arena **)(v14 + 8);
        v16 = this->name_.ptr_;
        if ( v16 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstance(
            &this->name_.ptr_,
            v15,
            (__int64)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          v16 = this->name_.ptr_;
        }
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(input, v16)
          || !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                 (google::protobuf::internal::WireFormatLite *)this->name_.ptr_->_M_dataplus._M_p,
                                 (const char *)LODWORD(this->name_.ptr_->_M_string_length),
                                 0,
                                 (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Option.name",
                                 v17) )
        {
          return 0;
        }
        goto LABEL_1;
      }
      if ( TagFallback >> 3 != 2 )
        break;
      if ( TagFallback != 18 )
        goto LABEL_5;
      value = this->value_;
      if ( !value )
      {
        google::protobuf::Option::_slow_mutable_value(this);
        value = this->value_;
      }
      v10 = input->buffer_;
      if ( input->buffer_ < input->buffer_end_
        && (VarintSizeAsIntFallback = *v10, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
      {
        input->buffer_ = v10 + 1;
      }
      else
      {
        VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(input);
        if ( VarintSizeAsIntFallback < 0 )
          return 0;
      }
      v12 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(input, VarintSizeAsIntFallback);
      first = v12.first;
      if ( v12.second < 0
        || !google::protobuf::Any::MergePartialFromCodedStream(value, input)
        || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(input, first) )
      {
        return 0;
      }
      buffer = input->buffer_;
      if ( input->buffer_end_ > input->buffer_ )
        goto LABEL_2;
LABEL_23:
      TagFallback = 0;
    }
    if ( TagFallback )
    {
LABEL_5:
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      v6 = ptr & 1;
LABEL_6:
      if ( v6 )
        v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      else
        v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
      if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7) )
        return 0;
      continue;
    }
    return 1;
  }
};

// Line 3659: range 000000000C946B60-000000000C946C14
void __fastcall google::protobuf::Option::SerializeWithCachedSizes(
        const google::protobuf::Option *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const char *v2; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  google::protobuf::Any *value; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  const google::protobuf::UnknownFieldSet *v8; // rdi

  ptr = this->name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Option.name",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  }
  if ( this != (const google::protobuf::Option *const)&google::protobuf::_Option_default_instance_ )
  {
    value = this->value_;
    if ( value )
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(2, value, output);
  }
  v7 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v7 & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)v7 & 1) != 0 )
      v8 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = google::protobuf::UnknownFieldSet::default_instance(v7);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v8, output);
  }
};

// Line 3688: range 000000000C94CE30-000000000C94CF11
google::protobuf::uint8 *__fastcall google::protobuf::Option::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::Option *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const char *v3; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  google::protobuf::Any *value; // rdi
  unsigned int cached_size; // eax
  google::protobuf::uint8 *i; // rdx
  char v12; // cl
  google::protobuf::UnknownFieldSet *v13; // rdi
  const google::protobuf::UnknownFieldSet *v14; // rdi
  std::string *v16; // rdi

  ptr = this->name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Option.name",
      v3);
    v16 = this->name_.ptr_;
    *target = 10;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v16, target + 1);
  }
  if ( this != (const google::protobuf::Option *const)&google::protobuf::_Option_default_instance_ )
  {
    value = this->value_;
    if ( value )
    {
      *target = 18;
      cached_size = value->_cached_size_;
      for ( i = target + 1; cached_size > 0x7F; *(i - 1) = v12 | 0x80 )
      {
        v12 = cached_size;
        cached_size >>= 7;
        ++i;
      }
      *i = cached_size;
      target = google::protobuf::Any::InternalSerializeWithCachedSizesToArray(value, deterministic, i + 1);
    }
  }
  v13 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v13 & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return target;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    v14 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL);
  else
    v14 = google::protobuf::UnknownFieldSet::default_instance(v13);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v14, target);
};

// Line 3720: range 000000000C94D760-000000000C94D804
size_t __fastcall google::protobuf::Option::ByteSizeLong(const google::protobuf::Option *const this)
{
  size_t v1; // r12
  google::protobuf::UnknownFieldSet *ptr; // rdi
  std::string::size_type M_string_length; // rax
  unsigned int v5; // edx
  google::protobuf::Any *value; // rdi
  size_t v7; // rax
  unsigned int v8; // edx
  const google::protobuf::UnknownFieldSet *v10; // rdi

  v1 = 0LL;
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v10 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v10 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v10);
  }
  M_string_length = this->name_.ptr_->_M_string_length;
  if ( M_string_length )
  {
    _BitScanReverse(&v5, this->name_.ptr_->_M_string_length | 1);
    v1 += M_string_length + 1 + ((9 * v5 + 73) >> 6);
  }
  if ( this != (const google::protobuf::Option *const)&google::protobuf::_Option_default_instance_ )
  {
    value = this->value_;
    if ( value )
    {
      v7 = google::protobuf::Any::ByteSizeLong(value);
      _BitScanReverse(&v8, v7 | 1);
      v1 += v7 + 1 + ((9 * v8 + 73) >> 6);
    }
  }
  this->_cached_size_ = v1;
  return v1;
};

// Line 3750: range 000000000C949220-000000000C94926D
void __fastcall google::protobuf::Option::MergeFrom(
        google::protobuf::Option *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::Option *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::Option *)__dynamic_cast(
                                           from,
                                           (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                           (const struct __class_type_info *)&`typeinfo for'google::protobuf::Option,
                                           0LL);
  if ( v2 )
    google::protobuf::Option::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 3765: range 000000000C949120-000000000C949214
void __fastcall google::protobuf::Option::MergeFrom(
        google::protobuf::Option *const this,
        const google::protobuf::Option *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  std::string *v8; // rsi
  google::protobuf::Any *value; // rsi
  google::protobuf::Any *v10; // rdi
  google::protobuf::Arena *hint; // r8
  std::string *v12; // rdi

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  v8 = from->name_.ptr_;
  if ( v8->_M_string_length )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    v12 = this->name_.ptr_;
    if ( v12 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->name_.ptr_, hint, (__int64)from->name_.ptr_);
    else
      std::string::_M_assign(v12, v8);
  }
  if ( from != (const google::protobuf::Option *)&google::protobuf::_Option_default_instance_ )
  {
    value = from->value_;
    if ( value )
    {
      v10 = this->value_;
      if ( !v10 )
      {
        google::protobuf::Option::_slow_mutable_value(this);
        value = from->value_;
        v10 = this->value_;
        if ( !value )
          value = (google::protobuf::Any *)&google::protobuf::_Any_default_instance_;
      }
      google::protobuf::Any::MergeFrom(v10, value);
    }
  }
};

// Line 3782: range 000000000C949280-000000000C9492B0
void __fastcall google::protobuf::Option::CopyFrom(
        google::protobuf::Option *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::Option::Clear(this);
    google::protobuf::Option::MergeFrom(this, from);
  }
};

// Line 3789: range 000000000C9493C0-000000000C9493F0
void __fastcall google::protobuf::Option::CopyFrom(
        google::protobuf::Option *const this,
        const google::protobuf::Option *from)
{
  if ( from != this )
  {
    google::protobuf::Option::Clear(this);
    google::protobuf::Option::MergeFrom(this, from);
  }
};

// Line 3799: range 000000000C9492C0-000000000C9493B4
void __fastcall google::protobuf::Option::Swap(google::protobuf::Option *const this, google::protobuf::Option *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::Option *v5; // r13
  unsigned __int64 v6; // rdx

  if ( other != this )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    v4 = (unsigned __int64)other->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
    if ( ((__int64)other->_internal_metadata_.ptr_ & 1) != 0 )
      v4 = *(_QWORD *)(v4 + 8);
    if ( (google::protobuf::Arena *)v4 == hint )
    {
      google::protobuf::Option::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::Option::New(this, hint);
      google::protobuf::Option::MergeFrom(v5, other);
      google::protobuf::Option::Clear(other);
      google::protobuf::Option::MergeFrom(other, this);
      google::protobuf::Option::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::Option *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 3813: range 000000000C9489E0-000000000C9489F0
void __fastcall google::protobuf::Option::UnsafeArenaSwap(
        google::protobuf::Option *const this,
        google::protobuf::Option *other)
{
  if ( other != this )
    google::protobuf::Option::InternalSwap(this, other);
};

// Line 3817: range 000000000C948930-000000000C9489DB
void __fastcall google::protobuf::Option::InternalSwap(
        google::protobuf::Option *const this,
        google::protobuf::Option *other)
{
  std::string *ptr; // rax
  google::protobuf::Any *value; // rdx
  google::protobuf::Any *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  int cached_size; // eax
  _QWORD *v11; // [rsp+0h] [rbp-18h]

  ptr = this->name_.ptr_;
  this->name_.ptr_ = other->name_.ptr_;
  value = other->value_;
  other->name_.ptr_ = ptr;
  v4 = this->value_;
  this->value_ = value;
  v5 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->value_ = v4;
  v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v6 & 1) != 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v5 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v6 & 1) != 0 )
  {
    v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v11 = v7;
    v8 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v7 = v11;
  }
  v9 = *v8;
  *v8 = *v7;
  *v7 = v9;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 3965: range 000000000C747060-000000000C7470C6
void GLOBAL__sub_I__ZN6google8protobuf23_Type_default_instance_E()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  if ( google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::AddDescriptors(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftype_2eproto::AddDescriptors(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
};
