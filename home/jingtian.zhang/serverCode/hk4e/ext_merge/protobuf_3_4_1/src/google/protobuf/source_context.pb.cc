// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/source_context.pb.cc

// Line 69: range 000000000C970700-000000000C9707F3
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_AssignDescriptors(
        google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::_anonymous_namespace_ *this)
{
  __int64 v1; // rax
  __m128i si128; // xmm0
  __int64 v3; // [rsp+8h] [rbp-38h] BYREF
  google::protobuf::internal::FunctionClosure0 closure[2]; // [rsp+10h] [rbp-30h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::AddDescriptors(void)::once != 2 )
  {
    closure[0].self_deleting_ = 0;
    closure[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    closure[0].function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::AddDescriptors(void)::once,
      &closure[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(closure);
  }
  v3 = 36LL;
  closure[0]._vptr_Closure = (int (**)(...))&closure[0].self_deleting_;
  v1 = std::string::_M_create(closure, &v3, 0LL);
  closure[0]._vptr_Closure = (int (**)(...))v1;
  *(_QWORD *)&closure[0].self_deleting_ = v3;
  *(__m128i *)v1 = _mm_load_si128((const __m128i *)&xmmword_1A179090);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1A186EB0);
  *(_DWORD *)(v1 + 32) = 1869901682;
  *(__m128i *)(v1 + 16) = si128;
  closure[0].function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)v3;
  *((_BYTE *)closure[0]._vptr_Closure + v3) = 0;
  google::protobuf::internal::AssignDescriptors(
    (google::protobuf::DescriptorPool *)closure,
    (google::protobuf::internal::MigrationSchema *)&google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::schemas,
    (__int64)google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::file_default_instances,
    (google::protobuf::uint32 *)google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::TableStruct::offsets,
    0LL,
    (google::protobuf::internal::Mutex *)google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::file_level_metadata,
    0LL,
    0LL);
  if ( (bool *)closure[0]._vptr_Closure != &closure[0].self_deleting_ )
    operator delete(closure[0]._vptr_Closure);
};

// Line 83: range 000000000C970610-000000000C970670
void google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_RegisterTypes()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
  google::protobuf::internal::RegisterAllTypes(
    google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::file_level_metadata,
    1);
};

// Line 89: range 000000000C970A30-000000000C970A60
void __cdecl google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "google/protobuf/source_context.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::SourceContext::SourceContext((google::protobuf::SourceContext *)&google::protobuf::_SourceContext_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_SourceContext_default_instance_,
    (const void *)0x2DD660);
};

// Line 102: range 000000000C970680-000000000C9706F0
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::AddDescriptorsImpl(
        google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::_anonymous_namespace_ *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::InitDefaults(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::TableStruct::InitDefaultsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::InitDefaults(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
  google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    (google::protobuf::DescriptorPool *)&google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::AddDescriptorsImpl(void)::descriptor,
    (const void *)0xFB);
  google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/source_context.proto",
    (const char *)google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::protobuf_RegisterTypes);
};

// Line 140: range 000000000C9709B0-000000000C970A28
void __fastcall google::protobuf::SourceContext::SourceContext(google::protobuf::SourceContext *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A186C10;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this != (google::protobuf::SourceContext *)&google::protobuf::_SourceContext_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->file_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->_cached_size_ = 0;
};

// Line 148: range 000000000C970B70-000000000C970BF3
void __fastcall google::protobuf::SourceContext::SourceContext(
        google::protobuf::SourceContext *this,
        const google::protobuf::SourceContext *a2)
{
  unsigned __int64 ptr; // rax
  const google::protobuf::UnknownFieldSet *v3; // r13
  google::protobuf::UnknownFieldSet *v4; // rax
  std::string *v5; // rsi

  this->_internal_metadata_.ptr_ = 0LL;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A186C10;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v4 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v4, v3);
  }
  v5 = a2->file_name_.ptr_;
  this->file_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v5->_M_string_length )
  {
    if ( v5 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->file_name_,
        (unsigned __int8 **)v5);
  }
};

// Line 165: range 000000000C970A70-000000000C970ABB
void __fastcall google::protobuf::SourceContext::~SourceContext(google::protobuf::SourceContext *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->file_name_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A186C10;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 165: range 000000000C970AC0-000000000C970B1B
void __fastcall google::protobuf::SourceContext::~SourceContext(google::protobuf::SourceContext *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // r12

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->file_name_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A186C10;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  operator delete(this, 0x20uLL);
};

// Line 170: range 000000000C9708B0-000000000C9708E9
void __fastcall google::protobuf::SourceContext::SharedDtor(google::protobuf::SourceContext *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->file_name_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
};

// Line 176: range 000000000C970320-000000000C970323
void __fastcall google::protobuf::SourceContext::SetCachedSize(
        const google::protobuf::SourceContext *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 189: range 000000000C970B20-000000000C970B5D
google::protobuf::SourceContext *__fastcall google::protobuf::SourceContext::New(
        google::protobuf::SourceContext *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::SourceContext *v2; // r12

  v2 = (google::protobuf::SourceContext *)operator new(0x20uLL);
  google::protobuf::SourceContext::SourceContext(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::SourceContext>(a2, v2);
  return v2;
};

// Line 190: range 000000000C734B48-000000000C734B58
void __fastcall __noreturn google::protobuf::SourceContext::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 197: range 000000000C970C00-000000000C970C41
void __fastcall google::protobuf::SourceContext::Clear(google::protobuf::SourceContext *const this)
{
  std::string *ptr; // rax
  unsigned __int64 v2; // rax

  ptr = this->file_name_.ptr_;
  if ( ptr != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  v2 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v2 & 1) != 0 )
  {
    if ( *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(v2 & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 208: range 000000000C970D10-000000000C970E32
bool __fastcall google::protobuf::SourceContext::MergePartialFromCodedStream(
        google::protobuf::SourceContext *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v5; // rdx
  google::protobuf::UnknownFieldSet *v6; // rdx
  std::string *ptr; // rsi
  const char *v9; // r8

  while ( 2 )
  {
    buffer = input->buffer_;
    if ( input->buffer_end_ <= input->buffer_ )
      goto LABEL_17;
LABEL_2:
    TagFallback = *buffer;
    if ( (char)TagFallback > 0 )
    {
      input->buffer_ = buffer + 1;
      goto LABEL_10;
    }
    while ( 1 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_10:
      if ( TagFallback >> 3 != 1 )
        break;
      if ( TagFallback != 10 )
        goto LABEL_5;
      ptr = this->file_name_.ptr_;
      if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->file_name_,
          (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        ptr = this->file_name_.ptr_;
      }
      if ( !google::protobuf::internal::WireFormatLite::ReadBytes(input, ptr)
        || !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                               (google::protobuf::internal::WireFormatLite *)this->file_name_.ptr_->_M_dataplus._M_p,
                               (const char *)LODWORD(this->file_name_.ptr_->_M_string_length),
                               0,
                               (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.SourceContext.file_name",
                               v9) )
      {
        return 0;
      }
      buffer = input->buffer_;
      if ( input->buffer_end_ > input->buffer_ )
        goto LABEL_2;
LABEL_17:
      TagFallback = 0;
    }
    if ( TagFallback )
    {
LABEL_5:
      v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
      if ( (v5 & 1) != 0 )
        v6 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
      else
        v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
      if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v6) )
        return 0;
      continue;
    }
    return 1;
  }
};

// Line 254: range 000000000C970340-000000000C9703CC
void __fastcall google::protobuf::SourceContext::SerializeWithCachedSizes(
        const google::protobuf::SourceContext *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const char *v2; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  google::protobuf::UnknownFieldSet *v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // rdi

  ptr = this->file_name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.SourceContext.file_name",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->file_name_.ptr_, output);
  }
  v6 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v6 & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)v6 & 1) != 0 )
      v7 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = (const google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::default_instance(v6);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v7, output);
  }
};

// Line 277: range 000000000C9703D0-000000000C970464
google::protobuf::uint8 *__fastcall google::protobuf::SourceContext::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::SourceContext *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const char *v3; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  google::protobuf::UnknownFieldSet *v8; // rdi
  const google::protobuf::UnknownFieldSet *v9; // rdi
  std::string *v11; // rdi

  ptr = this->file_name_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.SourceContext.file_name",
      v3);
    v11 = this->file_name_.ptr_;
    *target = 10;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v11, target + 1);
  }
  v8 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v8 & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return target;
  if ( ((unsigned __int8)v8 & 1) != 0 )
    v9 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFELL);
  else
    v9 = (const google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::default_instance(v8);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v9, target);
};

// Line 302: range 000000000C970470-000000000C9704CC
size_t __fastcall google::protobuf::SourceContext::ByteSizeLong(const google::protobuf::SourceContext *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  size_t result; // rax
  const google::protobuf::UnknownFieldSet *v4; // rdi
  std::string::size_type M_string_length; // rdx
  size_t v6; // rsi

  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = (const google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  M_string_length = this->file_name_.ptr_->_M_string_length;
  if ( M_string_length )
  {
    v6 = M_string_length + result + 1;
    _BitScanReverse((unsigned int *)&M_string_length, M_string_length | 1);
    result = v6 + ((unsigned int)(9 * M_string_length + 73) >> 6);
  }
  this->_cached_size_ = result;
  return result;
};

// Line 325: range 000000000C970ED0-000000000C970F1D
void __fastcall google::protobuf::SourceContext::MergeFrom(
        google::protobuf::SourceContext *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::SourceContext *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::SourceContext *)__dynamic_cast(
                                                  from,
                                                  (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                  (const struct __class_type_info *)&`typeinfo for'google::protobuf::SourceContext,
                                                  0LL);
  if ( v2 )
    google::protobuf::SourceContext::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 340: range 000000000C970E40-000000000C970EC5
void __fastcall google::protobuf::SourceContext::MergeFrom(
        google::protobuf::SourceContext *const this,
        const google::protobuf::SourceContext *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  std::string *v8; // rsi
  std::string *v9; // rdi

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
  v8 = from->file_name_.ptr_;
  if ( v8->_M_string_length )
  {
    v9 = this->file_name_.ptr_;
    if ( v8 != v9 )
    {
      if ( v9 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->file_name_,
          (unsigned __int8 **)v8);
      else
        std::string::_M_assign(v9, v8);
    }
  }
};

// Line 355: range 000000000C970F30-000000000C970F60
void __fastcall google::protobuf::SourceContext::CopyFrom(
        google::protobuf::SourceContext *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::SourceContext::Clear(this);
    google::protobuf::SourceContext::MergeFrom(this, from);
  }
};

// Line 362: range 000000000C970F70-000000000C970FA0
void __fastcall google::protobuf::SourceContext::CopyFrom(
        google::protobuf::SourceContext *const this,
        const google::protobuf::SourceContext *from)
{
  if ( from != this )
  {
    google::protobuf::SourceContext::Clear(this);
    google::protobuf::SourceContext::MergeFrom(this, from);
  }
};

// Line 369: range 000000000C970330-000000000C970335
bool __fastcall google::protobuf::SourceContext::IsInitialized(const google::protobuf::SourceContext *const this)
{
  return 1;
};

// Line 372: range 000000000C970CF0-000000000C970D00
void __fastcall google::protobuf::SourceContext::Swap(
        google::protobuf::SourceContext *const this,
        google::protobuf::SourceContext *other)
{
  if ( other != this )
    google::protobuf::SourceContext::InternalSwap(this, other);
};

// Line 375: range 000000000C970C50-000000000C970CEB
void __fastcall google::protobuf::SourceContext::InternalSwap(
        google::protobuf::SourceContext *const this,
        google::protobuf::SourceContext *other)
{
  std::string *ptr; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int cached_size; // eax
  _QWORD *v9; // [rsp+0h] [rbp-18h]

  ptr = this->file_name_.ptr_;
  this->file_name_.ptr_ = other->file_name_.ptr_;
  v3 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->file_name_.ptr_ = ptr;
  v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v4 & 1) != 0 )
  {
    if ( (v3 & 1) == 0 )
    {
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v3 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v5 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v4 & 1) != 0 )
  {
    v6 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v9 = v5;
    v6 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v5 = v9;
  }
  v7 = *v6;
  *v6 = *v5;
  *v5 = v7;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 448: range 000000000C7473B0-000000000C747416
void GLOBAL__sub_I__ZN6google8protobuf32_SourceContext_default_instance_E()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  if ( google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::AddDescriptors(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fsource_5fcontext_2eproto::AddDescriptors(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
};
