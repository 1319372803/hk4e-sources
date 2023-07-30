// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/any.pb.cc

// Line 70: range 000000000C8F2010-000000000C8F2103
__int64 __fastcall google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_AssignDescriptors(google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::_anonymous_namespace_ *__hidden this);

// Line 84: range 000000000C8F1F20-000000000C8F1F80
void google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_RegisterTypes()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
  google::protobuf::internal::RegisterAllTypes(
    google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::file_level_metadata,
    1);
};

// Line 90: range 000000000C8F23E0-000000000C8F2410
void __cdecl google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "google/protobuf/any.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::Any::Any((google::protobuf::Any *)&google::protobuf::_Any_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_Any_default_instance_,
    (const void *)0x2DD660);
};

// Line 103: range 000000000C8F1F90-000000000C8F2000
__int64 __fastcall google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::AddDescriptorsImpl(google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::_anonymous_namespace_ *__hidden this);

// Line 137: range 000000000C8F21B0-000000000C8F21B4
void __fastcall google::protobuf::Any::PackFrom(
        google::protobuf::Any *const this,
        const google::protobuf::Message *message)
{
  __int64 v2; // rdx
  std::forward_iterator_tag v3; // cl

  google::protobuf::internal::AnyMetadata::PackFrom(&this->_any_metadata_, message, v2, v3);
};

// Line 142: range 000000000C8F21C0-000000000C8F21C4
void __fastcall google::protobuf::Any::PackFrom(
        google::protobuf::Any *const this,
        const google::protobuf::Message *message,
        const std::string *type_url_prefix)
{
  google::protobuf::internal::AnyMetadata::PackFrom(
    (google::protobuf::internal::ExplicitlyConstructed<std::string > ***)&this->_any_metadata_,
    message,
    (__int64)type_url_prefix);
};

// Line 146: range 000000000C8F21D0-000000000C8F21D4
bool __fastcall google::protobuf::Any::UnpackTo(
        const google::protobuf::Any *const this,
        google::protobuf::Message *message)
{
  return google::protobuf::internal::AnyMetadata::UnpackTo(&this->_any_metadata_, message);
};

// Line 154: range 000000000C8F2340-000000000C8F23D8
void __fastcall google::protobuf::Any::Any(google::protobuf::Any *this)
{
  google::protobuf::internal::ArenaStringPtr *p_value; // rdx
  google::protobuf::internal::ArenaStringPtr *p_type_url; // rsi
  google::protobuf::internal::AnyMetadata *p_any_metadata; // rdi
  google::protobuf::internal::FunctionClosure0 v5[2]; // [rsp+0h] [rbp-38h] BYREF

  p_value = &this->value_;
  p_type_url = &this->type_url_;
  p_any_metadata = &this->_any_metadata_;
  p_any_metadata[-3].value_ = (google::protobuf::internal::AnyMetadata::ValueType *)off_1A178E00;
  p_any_metadata[-2].type_url_ = 0LL;
  google::protobuf::internal::AnyMetadata::AnyMetadata(p_any_metadata, p_type_url, p_value);
  if ( this != (google::protobuf::Any *)&google::protobuf::_Any_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::InitDefaults(void)::once != 2 )
  {
    v5[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v5[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::TableStruct::InitDefaultsImpl;
    v5[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::InitDefaults(void)::once,
      &v5[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v5);
  }
  this->type_url_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->_cached_size_ = 0;
};

// Line 162: range 000000000C8F24C0-000000000C8F25B5
void __fastcall google::protobuf::Any::Any(google::protobuf::Any *this, const google::protobuf::Any *a2)
{
  google::protobuf::internal::ArenaStringPtr *p_type_url; // r15
  google::protobuf::internal::ArenaStringPtr *p_value; // r14
  google::protobuf::internal::ArenaStringPtr *v4; // rdx
  google::protobuf::internal::ArenaStringPtr *v6; // rsi
  google::protobuf::internal::AnyMetadata *p_any_metadata; // rdi
  unsigned __int64 ptr; // r12
  unsigned __int64 v10; // rdi
  const google::protobuf::UnknownFieldSet *v11; // r12
  google::protobuf::UnknownFieldSet *v12; // rdi
  std::string *v13; // rsi
  std::string *v14; // rsi

  p_type_url = &this->type_url_;
  p_value = &this->value_;
  v4 = &this->value_;
  v6 = &this->type_url_;
  p_any_metadata = &this->_any_metadata_;
  p_any_metadata[-3].value_ = (google::protobuf::internal::AnyMetadata::ValueType *)off_1A178E00;
  p_any_metadata[-2].type_url_ = 0LL;
  LODWORD(p_any_metadata[-1].value_) = 0;
  google::protobuf::internal::AnyMetadata::AnyMetadata(p_any_metadata, v6, v4);
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v11 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v10 & 1) != 0 )
      v12 = (google::protobuf::UnknownFieldSet *)(v10 & 0xFFFFFFFFFFFFFFFELL);
    else
      v12 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v12, v11);
  }
  v13 = a2->type_url_.ptr_;
  this->type_url_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v13->_M_string_length && v13 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(p_type_url);
  v14 = a2->value_.ptr_;
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v14->_M_string_length )
  {
    if ( v14 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(p_value);
  }
};

// Line 185: range 000000000C8F2440-000000000C8F2462
void __fastcall google::protobuf::Any::~Any(google::protobuf::Any *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A178E00;
  google::protobuf::Any::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  operator delete(this, 0x38uLL);
};

// Line 185: range 000000000C8F2420-000000000C8F2435
void __fastcall google::protobuf::Any::~Any(google::protobuf::Any *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A178E00;
  google::protobuf::Any::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 190: range 000000000C8F2200-000000000C8F227E
void __fastcall google::protobuf::Any::SharedDtor(google::protobuf::Any *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v2; // rbp

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->type_url_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  v2 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->value_.ptr_;
  if ( v2 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v2 )
  {
    if ( (void **)v2->union_.align_to_int64 != &v2->union_.align_to_ptr + 2 )
      operator delete(v2->union_.align_to_ptr);
    operator delete(v2, 0x20uLL);
  }
};

// Line 197: range 000000000C8F1BD0-000000000C8F1BD3
void __fastcall google::protobuf::Any::SetCachedSize(const google::protobuf::Any *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 210: range 000000000C8F2470-000000000C8F24AD
google::protobuf::Any *__fastcall google::protobuf::Any::New(google::protobuf::Any *this, google::protobuf::Arena *a2)
{
  google::protobuf::Any *v2; // r12

  v2 = (google::protobuf::Any *)operator new(0x38uLL);
  google::protobuf::Any::Any(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::Any>(a2, v2);
  return v2;
};

// Line 211: range 000000000C72D1B6-000000000C72D1C6
void __fastcall __noreturn google::protobuf::Any::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x38uLL);
  _Unwind_Resume(v0);
};

// Line 218: range 000000000C8F25C0-000000000C8F2619
void __fastcall google::protobuf::Any::Clear(google::protobuf::Any *const this)
{
  std::string *ptr; // rax
  std::string *v2; // rax
  unsigned __int64 v3; // rax

  ptr = this->type_url_.ptr_;
  if ( ptr != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  v2 = this->value_.ptr_;
  if ( v2 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    v2->_M_string_length = 0LL;
    *v2->_M_dataplus._M_p = 0;
  }
  v3 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v3 & 1) != 0 )
  {
    if ( *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(v3 & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 230: range 000000000C8F26F0-000000000C8F286D
bool __fastcall google::protobuf::Any::MergePartialFromCodedStream(
        google::protobuf::Any *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v5; // rdx
  google::protobuf::UnknownFieldSet *v6; // rdx
  std::string *v8; // rsi
  std::string *ptr; // rsi
  const char *v10; // r8

LABEL_1:
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
      if ( TagFallback >> 3 == 1 )
      {
        if ( TagFallback != 10 )
          goto LABEL_5;
        ptr = this->type_url_.ptr_;
        if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&this->type_url_);
          ptr = this->type_url_.ptr_;
        }
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(input, ptr)
          || !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                                 (google::protobuf::internal::WireFormatLite *)this->type_url_.ptr_->_M_dataplus._M_p,
                                 (const char *)LODWORD(this->type_url_.ptr_->_M_string_length),
                                 0,
                                 (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Any.type_url",
                                 v10) )
        {
          return 0;
        }
        goto LABEL_1;
      }
      if ( TagFallback >> 3 != 2 )
        break;
      if ( TagFallback != 18 )
        goto LABEL_5;
      v8 = this->value_.ptr_;
      if ( v8 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&this->value_);
        v8 = this->value_.ptr_;
      }
      if ( !google::protobuf::internal::WireFormatLite::ReadBytes(input, v8) )
        return 0;
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

// Line 288: range 000000000C8F1BF0-000000000C8F1C8C
void __fastcall google::protobuf::Any::SerializeWithCachedSizes(
        const google::protobuf::Any *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const char *v2; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  std::string *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  const google::protobuf::UnknownFieldSet *v8; // rdi

  ptr = this->type_url_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Any.type_url",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->type_url_.ptr_, output);
  }
  v6 = this->value_.ptr_;
  if ( v6->_M_string_length )
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(2LL, v6, output);
  v7 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v7 & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)v7 & 1) != 0 )
      v8 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = (const google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::default_instance(v7);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v8, output);
  }
};

// Line 317: range 000000000C8F1C90-000000000C8F1D44
google::protobuf::uint8 *__fastcall google::protobuf::Any::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::Any *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const char *v3; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  std::string *v8; // rdi
  google::protobuf::UnknownFieldSet *v9; // rdi
  const google::protobuf::UnknownFieldSet *v10; // rdi
  std::string *v12; // rdi

  ptr = this->type_url_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      (google::protobuf::internal::WireFormatLite::Operation)"google.protobuf.Any.type_url",
      v3);
    v12 = this->type_url_.ptr_;
    *target = 10;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v12, target + 1);
  }
  v8 = this->value_.ptr_;
  if ( v8->_M_string_length )
  {
    *target = 18;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v8, target + 1);
  }
  v9 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v9 & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return target;
  if ( ((unsigned __int8)v9 & 1) != 0 )
    v10 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFELL);
  else
    v10 = (const google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::default_instance(v9);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v10, target);
};

// Line 349: range 000000000C8F1D50-000000000C8F1DDC
size_t __fastcall google::protobuf::Any::ByteSizeLong(const google::protobuf::Any *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  size_t result; // rax
  std::string::size_type M_string_length; // rdx
  size_t v5; // rsi
  std::string::size_type v6; // rdx
  size_t v7; // rsi
  const google::protobuf::UnknownFieldSet *v8; // rdi

  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v8 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = (const google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v8);
  }
  M_string_length = this->type_url_.ptr_->_M_string_length;
  if ( M_string_length )
  {
    v5 = M_string_length + result + 1;
    _BitScanReverse((unsigned int *)&M_string_length, M_string_length | 1);
    result = v5 + ((unsigned int)(9 * M_string_length + 73) >> 6);
  }
  v6 = this->value_.ptr_->_M_string_length;
  if ( v6 )
  {
    v7 = v6 + result + 1;
    _BitScanReverse((unsigned int *)&v6, v6 | 1);
    result = v7 + ((unsigned int)(9 * v6 + 73) >> 6);
  }
  this->_cached_size_ = result;
  return result;
};

// Line 379: range 000000000C8F2940-000000000C8F298D
void __fastcall google::protobuf::Any::MergeFrom(
        google::protobuf::Any *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::Any *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::Any *)__dynamic_cast(
                                        from,
                                        (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                        (const struct __class_type_info *)&`typeinfo for'google::protobuf::Any,
                                        0LL);
  if ( v2 )
    google::protobuf::Any::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 394: range 000000000C8F2870-000000000C8F2935
void __fastcall google::protobuf::Any::MergeFrom(google::protobuf::Any *const this, const google::protobuf::Any *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  std::string *v8; // rsi
  std::string *v9; // rdi
  std::string *v10; // rsi
  std::string *v11; // rdi

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
  v8 = from->type_url_.ptr_;
  if ( v8->_M_string_length )
  {
    v9 = this->type_url_.ptr_;
    if ( v8 != v9 )
    {
      if ( v9 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&this->type_url_);
      else
        std::string::_M_assign(v9, v8);
    }
  }
  v10 = from->value_.ptr_;
  if ( v10->_M_string_length )
  {
    v11 = this->value_.ptr_;
    if ( v10 != v11 )
    {
      if ( v11 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&this->value_);
      else
        std::string::_M_assign(v11, v10);
    }
  }
};

// Line 413: range 000000000C8F29A0-000000000C8F29D0
void __fastcall google::protobuf::Any::CopyFrom(
        google::protobuf::Any *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::Any::Clear(this);
    google::protobuf::Any::MergeFrom(this, from);
  }
};

// Line 420: range 000000000C8F29E0-000000000C8F2A10
void __fastcall google::protobuf::Any::CopyFrom(google::protobuf::Any *const this, const google::protobuf::Any *from)
{
  if ( from != this )
  {
    google::protobuf::Any::Clear(this);
    google::protobuf::Any::MergeFrom(this, from);
  }
};

// Line 427: range 000000000C8F1BE0-000000000C8F1BE5
bool __fastcall google::protobuf::Any::IsInitialized(const google::protobuf::Any *const this)
{
  return 1;
};

// Line 430: range 000000000C8F26D0-000000000C8F26E0
void __fastcall google::protobuf::Any::Swap(google::protobuf::Any *const this, google::protobuf::Any *other)
{
  if ( other != this )
    google::protobuf::Any::InternalSwap(this, other);
};

// Line 433: range 000000000C8F2620-000000000C8F26CB
void __fastcall google::protobuf::Any::InternalSwap(google::protobuf::Any *const this, google::protobuf::Any *other)
{
  std::string *ptr; // rax
  std::string *v3; // rdx
  std::string *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  int cached_size; // eax
  _QWORD *v11; // [rsp+0h] [rbp-18h]

  ptr = this->type_url_.ptr_;
  this->type_url_.ptr_ = other->type_url_.ptr_;
  v3 = other->value_.ptr_;
  other->type_url_.ptr_ = ptr;
  v4 = this->value_.ptr_;
  this->value_.ptr_ = v3;
  v5 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->value_.ptr_ = v4;
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

// Line 560: range 000000000C746E50-000000000C746EB6
void GLOBAL__sub_I__ZN6google8protobuf22_Any_default_instance_E()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  if ( google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::AddDescriptors(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fany_2eproto::AddDescriptors(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
};
