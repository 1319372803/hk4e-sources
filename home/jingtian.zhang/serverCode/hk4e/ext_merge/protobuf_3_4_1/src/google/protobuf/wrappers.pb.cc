// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/wrappers.pb.cc

// Line 181: range 000000000C94F650-000000000C94F74B
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors(
        google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::_anonymous_namespace_ *this)
{
  int (**v1)(...); // rax
  __m128i si128; // xmm0
  __int64 v3; // [rsp+8h] [rbp-38h] BYREF
  google::protobuf::internal::FunctionClosure0 closure[2]; // [rsp+10h] [rbp-30h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors(void)::once != 2 )
  {
    closure[0].self_deleting_ = 0;
    closure[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    closure[0].function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors(void)::once,
      &closure[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(closure);
  }
  v3 = 30LL;
  closure[0]._vptr_Closure = (int (**)(...))&closure[0].self_deleting_;
  v1 = (int (**)(...))std::string::_M_create(closure, &v3, 0LL);
  closure[0]._vptr_Closure = v1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1A179090);
  *(_QWORD *)&closure[0].self_deleting_ = v3;
  qmemcpy(v1 + 2, "wrappers.proto", 14);
  *(__m128i *)v1 = si128;
  closure[0].function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)v3;
  *((_BYTE *)closure[0]._vptr_Closure + v3) = 0;
  google::protobuf::internal::AssignDescriptors(
    (google::protobuf::DescriptorPool *)closure,
    (google::protobuf::internal::MigrationSchema *)&google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::schemas,
    (__int64)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::file_default_instances,
    (google::protobuf::uint32 *)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::offsets,
    0LL,
    (google::protobuf::internal::Mutex *)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata,
    0LL,
    0LL);
  if ( (bool *)closure[0]._vptr_Closure != &closure[0].self_deleting_ )
    operator delete(closure[0]._vptr_Closure);
};

// Line 195: range 000000000C94F560-000000000C94F5C0
void google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_RegisterTypes()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
  google::protobuf::internal::RegisterAllTypes(
    google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::file_level_metadata,
    9);
};

// Line 201: range 000000000C951630-000000000C951700
void __cdecl google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "google/protobuf/wrappers.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::DoubleValue::DoubleValue((google::protobuf::DoubleValue *)&google::protobuf::_DoubleValue_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_DoubleValue_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::FloatValue::FloatValue((google::protobuf::FloatValue *)&google::protobuf::_FloatValue_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_FloatValue_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::Int64Value::Int64Value((google::protobuf::Int64Value *)&google::protobuf::_Int64Value_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_Int64Value_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::UInt64Value::UInt64Value((google::protobuf::UInt64Value *)&google::protobuf::_UInt64Value_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_UInt64Value_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::Int32Value::Int32Value((google::protobuf::Int32Value *)&google::protobuf::_Int32Value_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_Int32Value_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::UInt32Value::UInt32Value((google::protobuf::UInt32Value *)&google::protobuf::_UInt32Value_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_UInt32Value_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::BoolValue::BoolValue((google::protobuf::BoolValue *)&google::protobuf::_BoolValue_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_BoolValue_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::StringValue::StringValue((google::protobuf::StringValue *)&google::protobuf::_StringValue_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_StringValue_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::BytesValue::BytesValue((google::protobuf::BytesValue *)&google::protobuf::_BytesValue_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_BytesValue_default_instance_,
    (const void *)0x2DD660);
};

// Line 230: range 000000000C94F5D0-000000000C94F640
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::AddDescriptorsImpl(
        google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::_anonymous_namespace_ *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
  google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    (google::protobuf::DescriptorPool *)&google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::AddDescriptorsImpl(void)::descriptor,
    (const void *)0x1BF);
  google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/wrappers.proto",
    (const char *)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::protobuf_RegisterTypes);
};

// Line 273: range 000000000C950990-000000000C950A08
void __fastcall google::protobuf::DoubleValue::DoubleValue(google::protobuf::DoubleValue *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A182B88;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this != (google::protobuf::DoubleValue *)&google::protobuf::_DoubleValue_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->value_ = 0.0;
  this->_cached_size_ = 0;
};

// Line 281: range 000000000C950A10-000000000C950A80
void __fastcall google::protobuf::DoubleValue::DoubleValue(
        google::protobuf::DoubleValue *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A182B88;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->value_ = 0.0;
  this->_cached_size_ = 0;
};

// Line 289: range 000000000C953200-000000000C953287
void __fastcall google::protobuf::DoubleValue::DoubleValue(
        google::protobuf::DoubleValue *this,
        const google::protobuf::DoubleValue *a2)
{
  unsigned __int64 ptr; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  google::protobuf::UnknownFieldSet *v5; // rax
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // r12
  google::protobuf::UnknownFieldSet *v8; // rdi

  this->_internal_metadata_.ptr_ = 0LL;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182B88;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    p_internal_metadata = &this->_internal_metadata_;
    if ( (ptr & 1) != 0 )
    {
      v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      v5 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      v7 = v5;
      if ( (v6 & 1) != 0 )
      {
        v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
LABEL_5:
        google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
        goto LABEL_6;
      }
    }
    v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_5;
  }
LABEL_6:
  this->value_ = a2->value_;
};

// Line 299: range 000000000C94FDA0-000000000C94FDAF
void __fastcall google::protobuf::DoubleValue::SharedCtor(google::protobuf::DoubleValue *const this)
{
  this->value_ = 0.0;
  this->_cached_size_ = 0;
};

// Line 303: range 000000000C94FA60-000000000C94FACD
void __fastcall google::protobuf::DoubleValue::~DoubleValue(google::protobuf::DoubleValue *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182B88;
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
  operator delete(this, 0x20uLL);
};

// Line 315: range 000000000C94FDB0-000000000C94FDC0
void __fastcall google::protobuf::DoubleValue::SharedDtor(google::protobuf::DoubleValue *const this)
{
  ;
};

// Line 325: range 000000000C94E4D0-000000000C94E4D3
void __fastcall google::protobuf::DoubleValue::SetCachedSize(const google::protobuf::DoubleValue *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 338: range 000000000C950A90-000000000C950B07
google::protobuf::DoubleValue *__fastcall google::protobuf::DoubleValue::New(
        google::protobuf::DoubleValue *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::DoubleValue *Aligned; // r12
  google::protobuf::DoubleValue *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::DoubleValue,
        0x20uLL);
    Aligned = (google::protobuf::DoubleValue *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                 &a2->impl_,
                                                 0x20uLL);
    google::protobuf::DoubleValue::DoubleValue(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::DoubleValue *)operator new(0x20uLL);
    google::protobuf::DoubleValue::DoubleValue(v4);
    return v4;
  }
};

// Line 342: range 000000000C9537D0-000000000C953801
void __fastcall google::protobuf::DoubleValue::Clear(google::protobuf::DoubleValue *const this)
{
  unsigned __int64 ptr; // rax

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->value_ = 0.0;
  if ( (ptr & 1) != 0 )
  {
    if ( *(_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 353: range 000000000C9518B0-000000000C9519B7
bool __fastcall google::protobuf::DoubleValue::MergePartialFromCodedStream(
        google::protobuf::DoubleValue *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  bool result; // al
  const google::protobuf::uint8 *v9; // rdx
  const google::protobuf::uint8 *v10; // rax
  double v11; // rcx
  google::protobuf::uint64 value[4]; // [rsp+18h] [rbp-20h] BYREF

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 2 )
  {
    if ( buffer < buffer_end )
    {
LABEL_9:
      TagFallback = *buffer;
      if ( (char)TagFallback > 0 )
      {
        input->buffer_ = buffer + 1;
        goto LABEL_11;
      }
      goto LABEL_2;
    }
    while ( 1 )
    {
      TagFallback = 0;
LABEL_2:
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_11:
      if ( TagFallback >> 3 != 1 )
        break;
      if ( TagFallback != 9 )
        goto LABEL_4;
      v9 = input->buffer_end_;
      v10 = input->buffer_;
      if ( LODWORD(input->buffer_end_) - LODWORD(input->buffer_) <= 7 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, value);
        if ( !result )
          return result;
        v11 = *(double *)value;
        buffer = input->buffer_;
        v9 = input->buffer_end_;
      }
      else
      {
        v11 = *(double *)v10;
        buffer = v10 + 8;
        input->buffer_ = buffer;
      }
      this->value_ = v11;
      if ( buffer < v9 )
        goto LABEL_9;
    }
    if ( !TagFallback )
      return 1;
LABEL_4:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    result = google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7);
    if ( result )
    {
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      continue;
    }
    return result;
  }
};

// Line 397: range 000000000C94E570-000000000C94E5E4
void __fastcall google::protobuf::DoubleValue::SerializeWithCachedSizes(
        const google::protobuf::DoubleValue *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  double v2; // xmm1_8
  double value; // xmm0_8
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v5; // rdi

  value = this->value_;
  if ( value != 0.0 )
    google::protobuf::internal::WireFormatLite::WriteDouble(1, value, v2, output);
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v5 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v5 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v5, output);
  }
};

// Line 415: range 000000000C94E5F0-000000000C94E65C
google::protobuf::uint8 *__fastcall google::protobuf::DoubleValue::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::DoubleValue *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  double value; // xmm0_8
  google::protobuf::uint8 *v4; // r12
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rdi

  value = this->value_;
  v4 = target;
  if ( value != 0.0 )
  {
    *target = 9;
    v4 = target + 9;
    *(double *)(target + 1) = value;
  }
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return v4;
  if ( ((unsigned __int8)ptr & 1) != 0 )
    v6 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
  else
    v6 = google::protobuf::UnknownFieldSet::default_instance(ptr);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v6, v4);
};

// Line 434: range 000000000C94E930-000000000C94E984
size_t __fastcall google::protobuf::DoubleValue::ByteSizeLong(const google::protobuf::DoubleValue *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  size_t result; // rax
  const google::protobuf::UnknownFieldSet *v4; // rdi

  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  if ( this->value_ != 0.0 )
    result += 9LL;
  this->_cached_size_ = result;
  return result;
};

// Line 455: range 000000000C952C00-000000000C952C4D
void __fastcall google::protobuf::DoubleValue::MergeFrom(
        google::protobuf::DoubleValue *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::DoubleValue *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::DoubleValue *)__dynamic_cast(
                                                from,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::DoubleValue,
                                                0LL);
  if ( v2 )
    google::protobuf::DoubleValue::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 470: range 000000000C952B90-000000000C952BFA
void __fastcall google::protobuf::DoubleValue::MergeFrom(
        google::protobuf::DoubleValue *const this,
        const google::protobuf::DoubleValue *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  double value; // xmm0_8

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
  value = from->value_;
  if ( value != 0.0 )
    this->value_ = value;
};

// Line 484: range 000000000C953EA0-000000000C953F00
void __fastcall google::protobuf::DoubleValue::CopyFrom(
        google::protobuf::DoubleValue *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( this != from )
  {
    this->value_ = 0.0;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::DoubleValue::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::DoubleValue::MergeFrom(this, from);
    }
  }
};

// Line 491: range 000000000C953F10-000000000C953F70
void __fastcall google::protobuf::DoubleValue::CopyFrom(
        google::protobuf::DoubleValue *const this,
        const google::protobuf::DoubleValue *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( from != this )
  {
    this->value_ = 0.0;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::DoubleValue::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::DoubleValue::MergeFrom(this, from);
    }
  }
};

// Line 498: range 000000000C94E4E0-000000000C94E4E5
bool __fastcall google::protobuf::BoolValue::IsInitialized(const google::protobuf::DoubleValue *const this)
{
  return 1;
};

// Line 501: range 000000000C953F80-000000000C954064
void __fastcall google::protobuf::DoubleValue::Swap(
        google::protobuf::DoubleValue *const this,
        google::protobuf::DoubleValue *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::DoubleValue *v5; // r13
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
      google::protobuf::DoubleValue::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::DoubleValue::New(this, hint);
      google::protobuf::DoubleValue::MergeFrom(v5, other);
      google::protobuf::DoubleValue::CopyFrom(other, this);
      google::protobuf::DoubleValue::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::DoubleValue *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 515: range 000000000C952570-000000000C952580
void __fastcall google::protobuf::DoubleValue::UnsafeArenaSwap(
        google::protobuf::DoubleValue *const this,
        google::protobuf::DoubleValue *other)
{
  if ( other != this )
    google::protobuf::DoubleValue::InternalSwap(this, other);
};

// Line 519: range 000000000C9524D0-000000000C95256B
void __fastcall google::protobuf::DoubleValue::InternalSwap(
        google::protobuf::DoubleValue *const this,
        google::protobuf::DoubleValue *other)
{
  double value; // xmm0_8
  unsigned __int64 ptr; // rax
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int cached_size; // eax
  _QWORD *v9; // [rsp+0h] [rbp-18h]

  value = this->value_;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = (unsigned __int64)other->_internal_metadata_.ptr_;
  this->value_ = other->value_;
  other->value_ = value;
  if ( (ptr & 1) != 0 )
  {
    if ( (v4 & 1) == 0 )
    {
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v4 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (ptr & 1) != 0 )
  {
    v6 = (__int64 *)(ptr & 0xFFFFFFFFFFFFFFFELL);
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

// Line 556: range 000000000C950B10-000000000C950B8D
void __fastcall google::protobuf::FloatValue::FloatValue(google::protobuf::FloatValue *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A182C60;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this == (google::protobuf::FloatValue *)&google::protobuf::_FloatValue_default_instance_
    || google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once == 2 )
  {
    *(_QWORD *)&this->value_ = 0LL;
  }
  else
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
    *(_QWORD *)&this->value_ = 0LL;
  }
};

// Line 564: range 000000000C950BA0-000000000C950C0D
void __fastcall google::protobuf::FloatValue::FloatValue(
        google::protobuf::FloatValue *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A182C60;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  *(_QWORD *)&this->value_ = 0LL;
};

// Line 572: range 000000000C953290-000000000C953317
void __fastcall google::protobuf::FloatValue::FloatValue(
        google::protobuf::FloatValue *this,
        const google::protobuf::FloatValue *a2)
{
  unsigned __int64 ptr; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  google::protobuf::UnknownFieldSet *v5; // rax
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // r12
  google::protobuf::UnknownFieldSet *v8; // rdi

  this->_internal_metadata_.ptr_ = 0LL;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182C60;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    p_internal_metadata = &this->_internal_metadata_;
    if ( (ptr & 1) != 0 )
    {
      v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      v5 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      v7 = v5;
      if ( (v6 & 1) != 0 )
      {
        v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
LABEL_5:
        google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
        goto LABEL_6;
      }
    }
    v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_5;
  }
LABEL_6:
  this->value_ = a2->value_;
};

// Line 582: range 000000000C94FE90-000000000C94FE98
void __fastcall google::protobuf::FloatValue::SharedCtor(google::protobuf::FloatValue *const this)
{
  *(_QWORD *)&this->value_ = 0LL;
};

// Line 586: range 000000000C94FC90-000000000C94FCFD
void __fastcall google::protobuf::FloatValue::~FloatValue(google::protobuf::FloatValue *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182C60;
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
  operator delete(this, 0x18uLL);
};

// Line 608: range 000000000C94E4F0-000000000C94E4F3
void __fastcall google::protobuf::FloatValue::SetCachedSize(const google::protobuf::FloatValue *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 621: range 000000000C950C20-000000000C950C97
google::protobuf::FloatValue *__fastcall google::protobuf::FloatValue::New(
        google::protobuf::FloatValue *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::FloatValue *Aligned; // r12
  google::protobuf::FloatValue *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::FloatValue,
        0x18uLL);
    Aligned = (google::protobuf::FloatValue *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                &a2->impl_,
                                                0x18uLL);
    google::protobuf::FloatValue::FloatValue(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::FloatValue *)operator new(0x18uLL);
    google::protobuf::FloatValue::FloatValue(v4);
    return v4;
  }
};

// Line 625: range 000000000C9536D0-000000000C953701
void __fastcall google::protobuf::FloatValue::Clear(google::protobuf::FloatValue *const this)
{
  unsigned __int64 ptr; // rax

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->value_ = 0.0;
  if ( (ptr & 1) != 0 )
  {
    if ( *(_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 636: range 000000000C9519C0-000000000C951AC6
bool __fastcall google::protobuf::FloatValue::MergePartialFromCodedStream(
        google::protobuf::FloatValue *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  bool result; // al
  const google::protobuf::uint8 *v9; // rdx
  const google::protobuf::uint8 *v10; // rax
  float v11; // ecx
  google::protobuf::uint32 value[7]; // [rsp+1Ch] [rbp-1Ch] BYREF

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 2 )
  {
    if ( buffer < buffer_end )
    {
LABEL_9:
      TagFallback = *buffer;
      if ( (char)TagFallback > 0 )
      {
        input->buffer_ = buffer + 1;
        goto LABEL_11;
      }
      goto LABEL_2;
    }
    while ( 1 )
    {
      TagFallback = 0;
LABEL_2:
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_11:
      if ( TagFallback >> 3 != 1 )
        break;
      if ( TagFallback != 13 )
        goto LABEL_4;
      v9 = input->buffer_end_;
      v10 = input->buffer_;
      if ( LODWORD(input->buffer_end_) - LODWORD(input->buffer_) <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, value);
        if ( !result )
          return result;
        v11 = *(float *)value;
        buffer = input->buffer_;
        v9 = input->buffer_end_;
      }
      else
      {
        v11 = *(float *)v10;
        buffer = v10 + 4;
        input->buffer_ = buffer;
      }
      this->value_ = v11;
      if ( buffer < v9 )
        goto LABEL_9;
    }
    if ( !TagFallback )
      return 1;
LABEL_4:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    result = google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7);
    if ( result )
    {
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      continue;
    }
    return result;
  }
};

// Line 680: range 000000000C94EA40-000000000C94EAB4
void __fastcall google::protobuf::FloatValue::SerializeWithCachedSizes(
        const google::protobuf::FloatValue *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  float v2; // xmm1_4
  __m128i value_low; // xmm0
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v5; // rdi

  value_low = (__m128i)LODWORD(this->value_);
  if ( *(float *)value_low.m128i_i32 != 0.0 )
    google::protobuf::internal::WireFormatLite::WriteFloat(1, value_low, v2, output);
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v5 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v5 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v5, output);
  }
};

// Line 698: range 000000000C94E660-000000000C94E6CC
google::protobuf::uint8 *__fastcall google::protobuf::FloatValue::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::FloatValue *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  __m128i value_low; // xmm0
  google::protobuf::uint8 *v4; // r12
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rdi

  value_low = (__m128i)LODWORD(this->value_);
  v4 = target;
  if ( *(float *)value_low.m128i_i32 != 0.0 )
  {
    *target = 13;
    v4 = target + 5;
    *(_DWORD *)(target + 1) = _mm_cvtsi128_si32(value_low);
  }
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return v4;
  if ( ((unsigned __int8)ptr & 1) != 0 )
    v6 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
  else
    v6 = google::protobuf::UnknownFieldSet::default_instance(ptr);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v6, v4);
};

// Line 717: range 000000000C94E990-000000000C94E9E4
size_t __fastcall google::protobuf::FloatValue::ByteSizeLong(const google::protobuf::FloatValue *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  size_t result; // rax
  const google::protobuf::UnknownFieldSet *v4; // rdi

  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  if ( this->value_ != 0.0 )
    result += 5LL;
  this->_cached_size_ = result;
  return result;
};

// Line 738: range 000000000C952B30-000000000C952B7D
void __fastcall google::protobuf::FloatValue::MergeFrom(
        google::protobuf::FloatValue *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::FloatValue *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::FloatValue *)__dynamic_cast(
                                               from,
                                               (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                               (const struct __class_type_info *)&`typeinfo for'google::protobuf::FloatValue,
                                               0LL);
  if ( v2 )
    google::protobuf::FloatValue::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 753: range 000000000C952AC0-000000000C952B2A
void __fastcall google::protobuf::FloatValue::MergeFrom(
        google::protobuf::FloatValue *const this,
        const google::protobuf::FloatValue *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  float value; // xmm0_4

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
  value = from->value_;
  if ( value != 0.0 )
    this->value_ = value;
};

// Line 767: range 000000000C954240-000000000C9542A0
void __fastcall google::protobuf::FloatValue::CopyFrom(
        google::protobuf::FloatValue *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( this != from )
  {
    this->value_ = 0.0;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::FloatValue::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::FloatValue::MergeFrom(this, from);
    }
  }
};

// Line 774: range 000000000C9544F0-000000000C954550
void __fastcall google::protobuf::FloatValue::CopyFrom(
        google::protobuf::FloatValue *const this,
        const google::protobuf::FloatValue *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( from != this )
  {
    this->value_ = 0.0;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::FloatValue::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::FloatValue::MergeFrom(this, from);
    }
  }
};

// Line 784: range 000000000C954560-000000000C954644
void __fastcall google::protobuf::FloatValue::Swap(
        google::protobuf::FloatValue *const this,
        google::protobuf::FloatValue *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::FloatValue *v5; // r13
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
      google::protobuf::FloatValue::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::FloatValue::New(this, hint);
      google::protobuf::FloatValue::MergeFrom(v5, other);
      google::protobuf::FloatValue::CopyFrom(other, this);
      google::protobuf::FloatValue::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::FloatValue *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 798: range 000000000C9520E0-000000000C9520F0
void __fastcall google::protobuf::FloatValue::UnsafeArenaSwap(
        google::protobuf::FloatValue *const this,
        google::protobuf::FloatValue *other)
{
  if ( other != this )
    google::protobuf::FloatValue::InternalSwap(this, other);
};

// Line 802: range 000000000C952040-000000000C9520DB
void __fastcall google::protobuf::FloatValue::InternalSwap(
        google::protobuf::FloatValue *const this,
        google::protobuf::FloatValue *other)
{
  float value; // xmm0_4
  unsigned __int64 ptr; // rax
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int cached_size; // eax
  _QWORD *v9; // [rsp+0h] [rbp-18h]

  value = this->value_;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = (unsigned __int64)other->_internal_metadata_.ptr_;
  this->value_ = other->value_;
  other->value_ = value;
  if ( (ptr & 1) != 0 )
  {
    if ( (v4 & 1) == 0 )
    {
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v4 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (ptr & 1) != 0 )
  {
    v6 = (__int64 *)(ptr & 0xFFFFFFFFFFFFFFFELL);
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

// Line 839: range 000000000C950CA0-000000000C950D18
void __fastcall google::protobuf::Int64Value::Int64Value(google::protobuf::Int64Value *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A182D38;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this != (google::protobuf::Int64Value *)&google::protobuf::_Int64Value_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->value_ = 0LL;
  this->_cached_size_ = 0;
};

// Line 847: range 000000000C950D20-000000000C950D90
void __fastcall google::protobuf::Int64Value::Int64Value(
        google::protobuf::Int64Value *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A182D38;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->value_ = 0LL;
  this->_cached_size_ = 0;
};

// Line 855: range 000000000C9533B0-000000000C953437
__int64 __fastcall google::protobuf::Int64Value::Int64Value(
        google::protobuf::Int64Value *this,
        const google::protobuf::Int64Value *a2)
{
  unsigned __int64 ptr; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  google::protobuf::UnknownFieldSet *v5; // rax
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // r12
  google::protobuf::UnknownFieldSet *v8; // rdi
  __int64 result; // rax

  this->_internal_metadata_.ptr_ = 0LL;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182D38;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    p_internal_metadata = &this->_internal_metadata_;
    if ( (ptr & 1) != 0 )
    {
      v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      v5 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      v7 = v5;
      if ( (v6 & 1) != 0 )
      {
        v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
LABEL_5:
        google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
        goto LABEL_6;
      }
    }
    v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_5;
  }
LABEL_6:
  result = a2->value_;
  this->value_ = result;
  return result;
};

// Line 865: range 000000000C94FF80-000000000C94FF8F
void __fastcall google::protobuf::Int64Value::SharedCtor(google::protobuf::Int64Value *const this)
{
  this->value_ = 0LL;
  this->_cached_size_ = 0;
};

// Line 869: range 000000000C94FAD0-000000000C94FB3D
void __fastcall google::protobuf::Int64Value::~Int64Value(google::protobuf::Int64Value *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182D38;
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
  operator delete(this, 0x20uLL);
};

// Line 891: range 000000000C94E500-000000000C94E503
void __fastcall google::protobuf::Int64Value::SetCachedSize(const google::protobuf::Int64Value *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 904: range 000000000C950DA0-000000000C950E17
google::protobuf::Int64Value *__fastcall google::protobuf::Int64Value::New(
        google::protobuf::Int64Value *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::Int64Value *Aligned; // r12
  google::protobuf::Int64Value *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::Int64Value,
        0x20uLL);
    Aligned = (google::protobuf::Int64Value *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                &a2->impl_,
                                                0x20uLL);
    google::protobuf::Int64Value::Int64Value(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::Int64Value *)operator new(0x20uLL);
    google::protobuf::Int64Value::Int64Value(v4);
    return v4;
  }
};

// Line 908: range 000000000C953750-000000000C953781
void __fastcall google::protobuf::Int64Value::Clear(google::protobuf::Int64Value *const this)
{
  unsigned __int64 ptr; // rax

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->value_ = 0LL;
  if ( (ptr & 1) != 0 )
  {
    if ( *(_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 919: range 000000000C951AD0-000000000C951BDF
bool __fastcall google::protobuf::Int64Value::MergePartialFromCodedStream(
        google::protobuf::Int64Value *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rcx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer >= buffer_end )
    {
      TagFallback = 0;
    }
    else
    {
      TagFallback = *buffer;
      if ( (char)TagFallback > 0 )
      {
        input->buffer_ = buffer + 1;
        goto LABEL_11;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
    if ( TagFallback - 1 > 0x7E )
      break;
LABEL_11:
    if ( TagFallback >> 3 != 1 )
      break;
    if ( TagFallback == 8 )
    {
      *(_QWORD *)&Varint64Fallback.second = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( input->buffer_ < buffer_end
        && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
            SLOBYTE(Varint64Fallback.first) >= 0) )
      {
        buffer = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
        input->buffer_ = buffer;
      }
      else
      {
        Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input);
        if ( !Varint64Fallback.second )
          return 0;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
      }
      this->value_ = Varint64Fallback.first;
    }
    else
    {
LABEL_4:
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      if ( (ptr & 1) != 0 )
        v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      else
        v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
      if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7) )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
  }
  if ( TagFallback )
    goto LABEL_4;
  return 1;
};

// Line 963: range 000000000C94EAC0-000000000C94EB24
void __fastcall google::protobuf::Int64Value::SerializeWithCachedSizes(
        const google::protobuf::Int64Value *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int64 value; // rsi
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v5; // rdi

  value = this->value_;
  if ( value )
    google::protobuf::internal::WireFormatLite::WriteInt64(1, value, output);
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v5 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v5 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v5, output);
  }
};

// Line 981: range 000000000C94E6D0-000000000C94E74A
google::protobuf::uint8 *__fastcall google::protobuf::Int64Value::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::Int64Value *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  unsigned __int64 value; // rax
  google::protobuf::uint8 *v4; // r12
  google::protobuf::uint8 *i; // rdx
  char v6; // cl
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v8; // rdi

  value = this->value_;
  v4 = target;
  if ( value )
  {
    *target = 8;
    for ( i = target + 1; value > 0x7F; *(i - 1) = v6 | 0x80 )
    {
      v6 = value;
      value >>= 7;
      ++i;
    }
    *i = value;
    v4 = i + 1;
  }
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return v4;
  if ( ((unsigned __int8)ptr & 1) != 0 )
    v8 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
  else
    v8 = google::protobuf::UnknownFieldSet::default_instance(ptr);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v8, v4);
};

// Line 1000: range 000000000C94EB30-000000000C94EB84
size_t __fastcall google::protobuf::Int64Value::ByteSizeLong(const google::protobuf::Int64Value *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  size_t result; // rax
  const google::protobuf::UnknownFieldSet *v4; // rdi
  google::protobuf::int64 value; // rdx

  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  value = this->value_;
  if ( value )
  {
    _BitScanReverse64((unsigned __int64 *)&value, value | 1);
    result += ((unsigned int)(9 * value + 73) >> 6) + 1LL;
  }
  this->_cached_size_ = result;
  return result;
};

// Line 1023: range 000000000C952CC0-000000000C952D0D
void __fastcall google::protobuf::Int64Value::MergeFrom(
        google::protobuf::Int64Value *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::Int64Value *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::Int64Value *)__dynamic_cast(
                                               from,
                                               (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                               (const struct __class_type_info *)&`typeinfo for'google::protobuf::Int64Value,
                                               0LL);
  if ( v2 )
    google::protobuf::Int64Value::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 1038: range 000000000C952C60-000000000C952CB7
void __fastcall google::protobuf::Int64Value::MergeFrom(
        google::protobuf::Int64Value *const this,
        const google::protobuf::Int64Value *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::int64 value; // rax

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
  value = from->value_;
  if ( value )
    this->value_ = value;
};

// Line 1052: range 000000000C9546C0-000000000C954720
void __fastcall google::protobuf::Int64Value::CopyFrom(
        google::protobuf::Int64Value *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( this != from )
  {
    this->value_ = 0LL;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::Int64Value::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::Int64Value::MergeFrom(this, from);
    }
  }
};

// Line 1059: range 000000000C952D20-000000000C952D80
void __fastcall google::protobuf::Int64Value::CopyFrom(
        google::protobuf::Int64Value *const this,
        const google::protobuf::Int64Value *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( from != this )
  {
    this->value_ = 0LL;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::Int64Value::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::Int64Value::MergeFrom(this, from);
    }
  }
};

// Line 1069: range 000000000C952D90-000000000C952E74
void __fastcall google::protobuf::Int64Value::Swap(
        google::protobuf::Int64Value *const this,
        google::protobuf::Int64Value *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::Int64Value *v5; // r13
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
      google::protobuf::Int64Value::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::Int64Value::New(this, hint);
      google::protobuf::Int64Value::MergeFrom(v5, other);
      google::protobuf::Int64Value::CopyFrom(other, this);
      google::protobuf::Int64Value::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::Int64Value *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 1083: range 000000000C952400-000000000C952410
void __fastcall google::protobuf::Int64Value::UnsafeArenaSwap(
        google::protobuf::Int64Value *const this,
        google::protobuf::Int64Value *other)
{
  if ( other != this )
    google::protobuf::Int64Value::InternalSwap(this, other);
};

// Line 1087: range 000000000C952360-000000000C9523FB
void __fastcall google::protobuf::Int64Value::InternalSwap(
        google::protobuf::Int64Value *const this,
        google::protobuf::Int64Value *other)
{
  google::protobuf::int64 value; // rax
  unsigned __int64 ptr; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int cached_size; // eax
  _QWORD *v9; // [rsp+0h] [rbp-18h]

  value = this->value_;
  this->value_ = other->value_;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->value_ = value;
  v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v4 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v5 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
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

// Line 1124: range 000000000C950E20-000000000C950E98
void __fastcall google::protobuf::UInt64Value::UInt64Value(google::protobuf::UInt64Value *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A182E10;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this != (google::protobuf::UInt64Value *)&google::protobuf::_UInt64Value_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->value_ = 0LL;
  this->_cached_size_ = 0;
};

// Line 1132: range 000000000C950EA0-000000000C950F10
void __fastcall google::protobuf::UInt64Value::UInt64Value(
        google::protobuf::UInt64Value *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A182E10;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->value_ = 0LL;
  this->_cached_size_ = 0;
};

// Line 1140: range 000000000C9534D0-000000000C953557
__int64 __fastcall google::protobuf::UInt64Value::UInt64Value(
        google::protobuf::UInt64Value *this,
        const google::protobuf::UInt64Value *a2)
{
  unsigned __int64 ptr; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  google::protobuf::UnknownFieldSet *v5; // rax
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // r12
  google::protobuf::UnknownFieldSet *v8; // rdi
  __int64 result; // rax

  this->_internal_metadata_.ptr_ = 0LL;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182E10;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    p_internal_metadata = &this->_internal_metadata_;
    if ( (ptr & 1) != 0 )
    {
      v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      v5 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      v7 = v5;
      if ( (v6 & 1) != 0 )
      {
        v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
LABEL_5:
        google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
        goto LABEL_6;
      }
    }
    v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_5;
  }
LABEL_6:
  result = a2->value_;
  this->value_ = result;
  return result;
};

// Line 1150: range 000000000C950070-000000000C95007F
void __fastcall google::protobuf::UInt64Value::SharedCtor(google::protobuf::UInt64Value *const this)
{
  this->value_ = 0LL;
  this->_cached_size_ = 0;
};

// Line 1154: range 000000000C94FC20-000000000C94FC8D
void __fastcall google::protobuf::UInt64Value::~UInt64Value(google::protobuf::UInt64Value *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182E10;
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
  operator delete(this, 0x20uLL);
};

// Line 1176: range 000000000C94E510-000000000C94E513
void __fastcall google::protobuf::UInt64Value::SetCachedSize(const google::protobuf::UInt64Value *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 1189: range 000000000C950F20-000000000C950F97
google::protobuf::UInt64Value *__fastcall google::protobuf::UInt64Value::New(
        google::protobuf::UInt64Value *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::UInt64Value *Aligned; // r12
  google::protobuf::UInt64Value *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::UInt64Value,
        0x20uLL);
    Aligned = (google::protobuf::UInt64Value *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                 &a2->impl_,
                                                 0x20uLL);
    google::protobuf::UInt64Value::UInt64Value(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::UInt64Value *)operator new(0x20uLL);
    google::protobuf::UInt64Value::UInt64Value(v4);
    return v4;
  }
};

// Line 1193: range 000000000C953790-000000000C9537C1
void __fastcall google::protobuf::UInt64Value::Clear(google::protobuf::UInt64Value *const this)
{
  unsigned __int64 ptr; // rax

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->value_ = 0LL;
  if ( (ptr & 1) != 0 )
  {
    if ( *(_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 1204: range 000000000C951BF0-000000000C951CF5
bool __fastcall google::protobuf::UInt64Value::MergePartialFromCodedStream(
        google::protobuf::UInt64Value *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  const google::protobuf::uint8 *v8; // rax
  google::protobuf::uint64 v9; // rcx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer >= buffer_end )
    {
      TagFallback = 0;
    }
    else
    {
      TagFallback = *buffer;
      if ( (char)TagFallback > 0 )
      {
        input->buffer_ = buffer + 1;
        goto LABEL_11;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
    if ( TagFallback - 1 > 0x7E )
      break;
LABEL_11:
    if ( TagFallback >> 3 != 1 )
      break;
    if ( TagFallback == 8 )
    {
      v8 = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( input->buffer_ >= buffer_end || (v9 = *v8, (v9 & 0x80u) != 0LL) )
      {
        Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input);
        this->value_ = Varint64Fallback.first;
        if ( !Varint64Fallback.second )
          return 0;
        goto LABEL_7;
      }
      buffer = v8 + 1;
      this->value_ = v9;
      input->buffer_ = buffer;
    }
    else
    {
LABEL_4:
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      if ( (ptr & 1) != 0 )
        v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      else
        v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
      if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7) )
        return 0;
LABEL_7:
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
  }
  if ( TagFallback )
    goto LABEL_4;
  return 1;
};

// Line 1248: range 000000000C94EBF0-000000000C94EC54
void __fastcall google::protobuf::UInt64Value::SerializeWithCachedSizes(
        const google::protobuf::UInt64Value *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint64 value; // rsi
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v5; // rdi

  value = this->value_;
  if ( value )
    google::protobuf::internal::WireFormatLite::WriteUInt64(1, value, output);
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v5 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v5 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v5, output);
  }
};

// Line 1266: range 000000000C94E750-000000000C94E7CA
google::protobuf::uint8 *__fastcall google::protobuf::UInt64Value::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::UInt64Value *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint64 value; // rax
  google::protobuf::uint8 *v4; // r12
  google::protobuf::uint8 *i; // rdx
  char v6; // cl
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v8; // rdi

  value = this->value_;
  v4 = target;
  if ( value )
  {
    *target = 8;
    for ( i = target + 1; value > 0x7F; *(i - 1) = v6 | 0x80 )
    {
      v6 = value;
      value >>= 7;
      ++i;
    }
    *i = value;
    v4 = i + 1;
  }
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return v4;
  if ( ((unsigned __int8)ptr & 1) != 0 )
    v8 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
  else
    v8 = google::protobuf::UnknownFieldSet::default_instance(ptr);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v8, v4);
};

// Line 1285: range 000000000C94EB90-000000000C94EBE4
size_t __fastcall google::protobuf::UInt64Value::ByteSizeLong(const google::protobuf::UInt64Value *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  size_t result; // rax
  const google::protobuf::UnknownFieldSet *v4; // rdi
  google::protobuf::uint64 value; // rdx

  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  value = this->value_;
  if ( value )
  {
    _BitScanReverse64(&value, value | 1);
    result += ((unsigned int)(9 * value + 73) >> 6) + 1LL;
  }
  this->_cached_size_ = result;
  return result;
};

// Line 1308: range 000000000C952FA0-000000000C952FED
void __fastcall google::protobuf::UInt64Value::MergeFrom(
        google::protobuf::UInt64Value *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::UInt64Value *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::UInt64Value *)__dynamic_cast(
                                                from,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::UInt64Value,
                                                0LL);
  if ( v2 )
    google::protobuf::UInt64Value::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 1323: range 000000000C952F40-000000000C952F97
void __fastcall google::protobuf::UInt64Value::MergeFrom(
        google::protobuf::UInt64Value *const this,
        const google::protobuf::UInt64Value *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::uint64 value; // rax

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
  value = from->value_;
  if ( value )
    this->value_ = value;
};

// Line 1337: range 000000000C9542B0-000000000C954310
void __fastcall google::protobuf::UInt64Value::CopyFrom(
        google::protobuf::UInt64Value *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( this != from )
  {
    this->value_ = 0LL;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::UInt64Value::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::UInt64Value::MergeFrom(this, from);
    }
  }
};

// Line 1344: range 000000000C953D40-000000000C953DA0
void __fastcall google::protobuf::UInt64Value::CopyFrom(
        google::protobuf::UInt64Value *const this,
        const google::protobuf::UInt64Value *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( from != this )
  {
    this->value_ = 0LL;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::UInt64Value::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::UInt64Value::MergeFrom(this, from);
    }
  }
};

// Line 1354: range 000000000C953DB0-000000000C953E94
void __fastcall google::protobuf::UInt64Value::Swap(
        google::protobuf::UInt64Value *const this,
        google::protobuf::UInt64Value *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::UInt64Value *v5; // r13
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
      google::protobuf::UInt64Value::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::UInt64Value::New(this, hint);
      google::protobuf::UInt64Value::MergeFrom(v5, other);
      google::protobuf::UInt64Value::CopyFrom(other, this);
      google::protobuf::UInt64Value::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::UInt64Value *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 1368: range 000000000C952630-000000000C952640
void __fastcall google::protobuf::UInt64Value::UnsafeArenaSwap(
        google::protobuf::UInt64Value *const this,
        google::protobuf::UInt64Value *other)
{
  if ( other != this )
    google::protobuf::UInt64Value::InternalSwap(this, other);
};

// Line 1372: range 000000000C952590-000000000C95262B
void __fastcall google::protobuf::UInt64Value::InternalSwap(
        google::protobuf::UInt64Value *const this,
        google::protobuf::UInt64Value *other)
{
  google::protobuf::uint64 value; // rax
  unsigned __int64 ptr; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int cached_size; // eax
  _QWORD *v9; // [rsp+0h] [rbp-18h]

  value = this->value_;
  this->value_ = other->value_;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->value_ = value;
  v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v4 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v5 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
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

// Line 1409: range 000000000C950FA0-000000000C95101D
void __fastcall google::protobuf::Int32Value::Int32Value(google::protobuf::Int32Value *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A182EE8;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this == (google::protobuf::Int32Value *)&google::protobuf::_Int32Value_default_instance_
    || google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once == 2 )
  {
    *(_QWORD *)&this->value_ = 0LL;
  }
  else
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
    *(_QWORD *)&this->value_ = 0LL;
  }
};

// Line 1417: range 000000000C951030-000000000C95109D
void __fastcall google::protobuf::Int32Value::Int32Value(
        google::protobuf::Int32Value *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A182EE8;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  *(_QWORD *)&this->value_ = 0LL;
};

// Line 1425: range 000000000C953320-000000000C95339F
__int64 __fastcall google::protobuf::Int32Value::Int32Value(
        google::protobuf::Int32Value *this,
        const google::protobuf::Int32Value *a2)
{
  unsigned __int64 ptr; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  google::protobuf::UnknownFieldSet *v5; // rax
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // r12
  google::protobuf::UnknownFieldSet *v8; // rdi
  __int64 result; // rax

  this->_internal_metadata_.ptr_ = 0LL;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182EE8;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    p_internal_metadata = &this->_internal_metadata_;
    if ( (ptr & 1) != 0 )
    {
      v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      v5 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      v7 = v5;
      if ( (v6 & 1) != 0 )
      {
        v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
LABEL_5:
        google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
        goto LABEL_6;
      }
    }
    v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_5;
  }
LABEL_6:
  result = (unsigned int)a2->value_;
  this->value_ = result;
  return result;
};

// Line 1435: range 000000000C950160-000000000C950168
void __fastcall google::protobuf::Int32Value::SharedCtor(google::protobuf::Int32Value *const this)
{
  *(_QWORD *)&this->value_ = 0LL;
};

// Line 1439: range 000000000C94F9F0-000000000C94FA5D
void __fastcall google::protobuf::Int32Value::~Int32Value(google::protobuf::Int32Value *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182EE8;
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
  operator delete(this, 0x18uLL);
};

// Line 1461: range 000000000C94E520-000000000C94E523
void __fastcall google::protobuf::Int32Value::SetCachedSize(const google::protobuf::Int32Value *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 1474: range 000000000C9510B0-000000000C951127
google::protobuf::Int32Value *__fastcall google::protobuf::Int32Value::New(
        google::protobuf::Int32Value *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::Int32Value *Aligned; // r12
  google::protobuf::Int32Value *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::Int32Value,
        0x18uLL);
    Aligned = (google::protobuf::Int32Value *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                &a2->impl_,
                                                0x18uLL);
    google::protobuf::Int32Value::Int32Value(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::Int32Value *)operator new(0x18uLL);
    google::protobuf::Int32Value::Int32Value(v4);
    return v4;
  }
};

// Line 1478: range 000000000C953710-000000000C953741
void __fastcall google::protobuf::Int32Value::Clear(google::protobuf::Int32Value *const this)
{
  unsigned __int64 ptr; // rax

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->value_ = 0;
  if ( (ptr & 1) != 0 )
  {
    if ( *(_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 1489: range 000000000C951D00-000000000C951E0D
bool __fastcall google::protobuf::Int32Value::MergePartialFromCodedStream(
        google::protobuf::Int32Value *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  const google::protobuf::uint8 *v8; // rax
  google::protobuf::uint32 v9; // esi
  google::protobuf::int64 Varint32Fallback; // rax

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
    {
      TagFallback = 0;
    }
    else
    {
      TagFallback = *buffer;
      if ( (char)TagFallback > 0 )
      {
        input->buffer_ = buffer + 1;
        goto LABEL_11;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
    if ( TagFallback - 1 > 0x7E )
      break;
LABEL_11:
    if ( TagFallback >> 3 != 1 )
      break;
    if ( TagFallback == 8 )
    {
      v8 = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( input->buffer_ >= buffer_end )
      {
        v9 = 0;
      }
      else
      {
        v9 = *v8;
        if ( *(char *)v8 >= 0 )
        {
          buffer = v8 + 1;
          input->buffer_ = buffer;
          goto LABEL_21;
        }
      }
      Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v9);
      v9 = Varint32Fallback;
      if ( Varint32Fallback < 0 )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
LABEL_21:
      this->value_ = v9;
    }
    else
    {
LABEL_4:
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      if ( (ptr & 1) != 0 )
        v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      else
        v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
      if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7) )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
  }
  if ( TagFallback )
    goto LABEL_4;
  return 1;
};

// Line 1533: range 000000000C94EC60-000000000C94ECC4
void __fastcall google::protobuf::Int32Value::SerializeWithCachedSizes(
        const google::protobuf::Int32Value *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int32 value; // esi
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v5; // rdi

  value = this->value_;
  if ( value )
    google::protobuf::internal::WireFormatLite::WriteInt32(1, value, output);
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v5 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v5 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v5, output);
  }
};

// Line 1551: range 000000000C94E7D0-000000000C94E84A
google::protobuf::uint8 *__fastcall google::protobuf::Int32Value::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::Int32Value *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  unsigned __int64 value; // rax
  google::protobuf::uint8 *v4; // r12
  google::protobuf::uint8 *i; // rdx
  char v6; // cl
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v8; // rdi

  value = this->value_;
  v4 = target;
  if ( (_DWORD)value )
  {
    *target = 8;
    for ( i = target + 1; value > 0x7F; *(i - 1) = v6 | 0x80 )
    {
      v6 = value;
      value >>= 7;
      ++i;
    }
    *i = value;
    v4 = i + 1;
  }
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return v4;
  if ( ((unsigned __int8)ptr & 1) != 0 )
    v8 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
  else
    v8 = google::protobuf::UnknownFieldSet::default_instance(ptr);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v8, v4);
};

// Line 1570: range 000000000C94ECD0-000000000C94ED34
size_t __fastcall google::protobuf::Int32Value::ByteSizeLong(const google::protobuf::Int32Value *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  size_t result; // rax
  const google::protobuf::UnknownFieldSet *v4; // rdi
  google::protobuf::int32 value; // edx
  __int64 v6; // rdx

  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  value = this->value_;
  if ( value )
  {
    if ( value < 0 )
    {
      v6 = 10LL;
    }
    else
    {
      _BitScanReverse((unsigned int *)&value, value | 1);
      v6 = (unsigned int)(9 * value + 73) >> 6;
    }
    result += v6 + 1;
  }
  this->_cached_size_ = result;
  return result;
};

// Line 1593: range 000000000C952A60-000000000C952AAD
void __fastcall google::protobuf::Int32Value::MergeFrom(
        google::protobuf::Int32Value *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::Int32Value *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::Int32Value *)__dynamic_cast(
                                               from,
                                               (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                               (const struct __class_type_info *)&`typeinfo for'google::protobuf::Int32Value,
                                               0LL);
  if ( v2 )
    google::protobuf::Int32Value::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 1608: range 000000000C952A00-000000000C952A54
void __fastcall google::protobuf::Int32Value::MergeFrom(
        google::protobuf::Int32Value *const this,
        const google::protobuf::Int32Value *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::int32 value; // eax

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
  value = from->value_;
  if ( value )
    this->value_ = value;
};

// Line 1622: range 000000000C954070-000000000C9540D0
void __fastcall google::protobuf::Int32Value::CopyFrom(
        google::protobuf::Int32Value *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( this != from )
  {
    this->value_ = 0;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::Int32Value::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::Int32Value::MergeFrom(this, from);
    }
  }
};

// Line 1629: range 000000000C9540E0-000000000C954140
void __fastcall google::protobuf::Int32Value::CopyFrom(
        google::protobuf::Int32Value *const this,
        const google::protobuf::Int32Value *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( from != this )
  {
    this->value_ = 0;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::Int32Value::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::Int32Value::MergeFrom(this, from);
    }
  }
};

// Line 1639: range 000000000C954150-000000000C954234
void __fastcall google::protobuf::Int32Value::Swap(
        google::protobuf::Int32Value *const this,
        google::protobuf::Int32Value *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::Int32Value *v5; // r13
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
      google::protobuf::Int32Value::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::Int32Value::New(this, hint);
      google::protobuf::Int32Value::MergeFrom(v5, other);
      google::protobuf::Int32Value::CopyFrom(other, this);
      google::protobuf::Int32Value::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::Int32Value *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 1653: range 000000000C9526E0-000000000C9526F0
void __fastcall google::protobuf::Int32Value::UnsafeArenaSwap(
        google::protobuf::Int32Value *const this,
        google::protobuf::Int32Value *other)
{
  if ( other != this )
    google::protobuf::Int32Value::InternalSwap(this, other);
};

// Line 1657: range 000000000C952650-000000000C9526DB
void __fastcall google::protobuf::Int32Value::InternalSwap(
        google::protobuf::Int32Value *const this,
        google::protobuf::Int32Value *other)
{
  google::protobuf::int32 value; // eax
  unsigned __int64 ptr; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int cached_size; // eax
  _QWORD *v9; // [rsp+0h] [rbp-18h]

  value = this->value_;
  this->value_ = other->value_;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->value_ = value;
  v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v4 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v5 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
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

// Line 1694: range 000000000C951130-000000000C9511AD
void __fastcall google::protobuf::UInt32Value::UInt32Value(google::protobuf::UInt32Value *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A182FC0;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this == (google::protobuf::UInt32Value *)&google::protobuf::_UInt32Value_default_instance_
    || google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once == 2 )
  {
    *(_QWORD *)&this->value_ = 0LL;
  }
  else
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
    *(_QWORD *)&this->value_ = 0LL;
  }
};

// Line 1702: range 000000000C9511C0-000000000C95122D
void __fastcall google::protobuf::UInt32Value::UInt32Value(
        google::protobuf::UInt32Value *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A182FC0;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  *(_QWORD *)&this->value_ = 0LL;
};

// Line 1710: range 000000000C953440-000000000C9534BF
__int64 __fastcall google::protobuf::UInt32Value::UInt32Value(
        google::protobuf::UInt32Value *this,
        const google::protobuf::UInt32Value *a2)
{
  unsigned __int64 ptr; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  google::protobuf::UnknownFieldSet *v5; // rax
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // r12
  google::protobuf::UnknownFieldSet *v8; // rdi
  __int64 result; // rax

  this->_internal_metadata_.ptr_ = 0LL;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182FC0;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    p_internal_metadata = &this->_internal_metadata_;
    if ( (ptr & 1) != 0 )
    {
      v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      v5 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      v7 = v5;
      if ( (v6 & 1) != 0 )
      {
        v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
LABEL_5:
        google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
        goto LABEL_6;
      }
    }
    v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_5;
  }
LABEL_6:
  result = a2->value_;
  this->value_ = result;
  return result;
};

// Line 1720: range 000000000C950250-000000000C950258
void __fastcall google::protobuf::UInt32Value::SharedCtor(google::protobuf::UInt32Value *const this)
{
  *(_QWORD *)&this->value_ = 0LL;
};

// Line 1724: range 000000000C94FBB0-000000000C94FC1D
void __fastcall google::protobuf::UInt32Value::~UInt32Value(google::protobuf::UInt32Value *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A182FC0;
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
  operator delete(this, 0x18uLL);
};

// Line 1746: range 000000000C94E530-000000000C94E533
void __fastcall google::protobuf::UInt32Value::SetCachedSize(const google::protobuf::UInt32Value *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 1759: range 000000000C951240-000000000C9512B7
google::protobuf::UInt32Value *__fastcall google::protobuf::UInt32Value::New(
        google::protobuf::UInt32Value *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::UInt32Value *Aligned; // r12
  google::protobuf::UInt32Value *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::UInt32Value,
        0x18uLL);
    Aligned = (google::protobuf::UInt32Value *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                 &a2->impl_,
                                                 0x18uLL);
    google::protobuf::UInt32Value::UInt32Value(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::UInt32Value *)operator new(0x18uLL);
    google::protobuf::UInt32Value::UInt32Value(v4);
    return v4;
  }
};

// Line 1763: range 000000000C953690-000000000C9536C1
void __fastcall google::protobuf::UInt32Value::Clear(google::protobuf::UInt32Value *const this)
{
  unsigned __int64 ptr; // rax

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->value_ = 0;
  if ( (ptr & 1) != 0 )
  {
    if ( *(_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 1774: range 000000000C951E10-000000000C951F12
bool __fastcall google::protobuf::UInt32Value::MergePartialFromCodedStream(
        google::protobuf::UInt32Value *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  const google::protobuf::uint8 *v8; // rax
  google::protobuf::uint32 v9; // esi
  google::protobuf::int64 Varint32Fallback; // rax

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer >= buffer_end )
    {
      TagFallback = 0;
    }
    else
    {
      TagFallback = *buffer;
      if ( (char)TagFallback > 0 )
      {
        input->buffer_ = buffer + 1;
        goto LABEL_11;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
    if ( TagFallback - 1 > 0x7E )
      break;
LABEL_11:
    if ( TagFallback >> 3 != 1 )
      break;
    if ( TagFallback == 8 )
    {
      v8 = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( input->buffer_ >= buffer_end )
      {
        v9 = 0;
LABEL_15:
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v9);
        this->value_ = Varint32Fallback;
        if ( Varint32Fallback < 0 )
          return 0;
        goto LABEL_7;
      }
      v9 = *v8;
      if ( *(char *)v8 < 0 )
        goto LABEL_15;
      buffer = v8 + 1;
      this->value_ = v9;
      input->buffer_ = buffer;
    }
    else
    {
LABEL_4:
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      if ( (ptr & 1) != 0 )
        v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      else
        v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
      if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7) )
        return 0;
LABEL_7:
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
  }
  if ( TagFallback )
    goto LABEL_4;
  return 1;
};

// Line 1818: range 000000000C94EE60-000000000C94EEC4
void __fastcall google::protobuf::UInt32Value::SerializeWithCachedSizes(
        const google::protobuf::UInt32Value *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 value; // esi
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v5; // rdi

  value = this->value_;
  if ( value )
    google::protobuf::internal::WireFormatLite::WriteUInt32(1, value, output);
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v5 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v5 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v5, output);
  }
};

// Line 1836: range 000000000C94E850-000000000C94E8C2
google::protobuf::uint8 *__fastcall google::protobuf::UInt32Value::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::UInt32Value *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 value; // eax
  google::protobuf::uint8 *v4; // r12
  google::protobuf::uint8 *i; // rdx
  char v6; // cl
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v8; // rdi

  value = this->value_;
  v4 = target;
  if ( value )
  {
    *target = 8;
    for ( i = target + 1; value > 0x7F; *(i - 1) = v6 | 0x80 )
    {
      v6 = value;
      value >>= 7;
      ++i;
    }
    *i = value;
    v4 = i + 1;
  }
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return v4;
  if ( ((unsigned __int8)ptr & 1) != 0 )
    v8 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
  else
    v8 = google::protobuf::UnknownFieldSet::default_instance(ptr);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v8, v4);
};

// Line 1855: range 000000000C94ED40-000000000C94ED94
size_t __fastcall google::protobuf::UInt32Value::ByteSizeLong(const google::protobuf::UInt32Value *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  size_t result; // rax
  const google::protobuf::UnknownFieldSet *v4; // rdi
  google::protobuf::uint32 value; // edx

  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  value = this->value_;
  if ( value )
  {
    _BitScanReverse(&value, value | 1);
    result += ((9 * value + 73) >> 6) + 1LL;
  }
  this->_cached_size_ = result;
  return result;
};

// Line 1878: range 000000000C9529A0-000000000C9529ED
void __fastcall google::protobuf::UInt32Value::MergeFrom(
        google::protobuf::UInt32Value *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::UInt32Value *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::UInt32Value *)__dynamic_cast(
                                                from,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::UInt32Value,
                                                0LL);
  if ( v2 )
    google::protobuf::UInt32Value::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 1893: range 000000000C952940-000000000C952994
void __fastcall google::protobuf::UInt32Value::MergeFrom(
        google::protobuf::UInt32Value *const this,
        const google::protobuf::UInt32Value *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::uint32 value; // eax

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
  value = from->value_;
  if ( value )
    this->value_ = value;
};

// Line 1907: range 000000000C954650-000000000C9546B0
void __fastcall google::protobuf::UInt32Value::CopyFrom(
        google::protobuf::UInt32Value *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( this != from )
  {
    this->value_ = 0;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::UInt32Value::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::UInt32Value::MergeFrom(this, from);
    }
  }
};

// Line 1914: range 000000000C953BE0-000000000C953C40
void __fastcall google::protobuf::UInt32Value::CopyFrom(
        google::protobuf::UInt32Value *const this,
        const google::protobuf::UInt32Value *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( from != this )
  {
    this->value_ = 0;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::UInt32Value::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::UInt32Value::MergeFrom(this, from);
    }
  }
};

// Line 1924: range 000000000C953C50-000000000C953D34
void __fastcall google::protobuf::UInt32Value::Swap(
        google::protobuf::UInt32Value *const this,
        google::protobuf::UInt32Value *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::UInt32Value *v5; // r13
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
      google::protobuf::UInt32Value::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::UInt32Value::New(this, hint);
      google::protobuf::UInt32Value::MergeFrom(v5, other);
      google::protobuf::UInt32Value::CopyFrom(other, this);
      google::protobuf::UInt32Value::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::UInt32Value *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 1938: range 000000000C9524B0-000000000C9524C0
void __fastcall google::protobuf::UInt32Value::UnsafeArenaSwap(
        google::protobuf::UInt32Value *const this,
        google::protobuf::UInt32Value *other)
{
  if ( other != this )
    google::protobuf::UInt32Value::InternalSwap(this, other);
};

// Line 1942: range 000000000C952420-000000000C9524AB
void __fastcall google::protobuf::UInt32Value::InternalSwap(
        google::protobuf::UInt32Value *const this,
        google::protobuf::UInt32Value *other)
{
  google::protobuf::uint32 value; // eax
  unsigned __int64 ptr; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int cached_size; // eax
  _QWORD *v9; // [rsp+0h] [rbp-18h]

  value = this->value_;
  this->value_ = other->value_;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->value_ = value;
  v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v4 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v5 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
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

// Line 1979: range 000000000C9512C0-000000000C951330
void __fastcall google::protobuf::BoolValue::BoolValue(google::protobuf::BoolValue *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A183098;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this != (google::protobuf::BoolValue *)&google::protobuf::_BoolValue_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->value_ = 0;
  this->_cached_size_ = 0;
};

// Line 1987: range 000000000C951340-000000000C9513A8
void __fastcall google::protobuf::BoolValue::BoolValue(google::protobuf::BoolValue *this, google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A183098;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->value_ = 0;
  this->_cached_size_ = 0;
};

// Line 1995: range 000000000C953560-000000000C9535E7
__int64 __fastcall google::protobuf::BoolValue::BoolValue(
        google::protobuf::BoolValue *this,
        const google::protobuf::BoolValue *a2)
{
  unsigned __int64 ptr; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  google::protobuf::UnknownFieldSet *v5; // rax
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // r12
  google::protobuf::UnknownFieldSet *v8; // rdi
  __int64 result; // rax

  this->_internal_metadata_.ptr_ = 0LL;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A183098;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    p_internal_metadata = &this->_internal_metadata_;
    if ( (ptr & 1) != 0 )
    {
      v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      v5 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      v7 = v5;
      if ( (v6 & 1) != 0 )
      {
        v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
LABEL_5:
        google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
        goto LABEL_6;
      }
    }
    v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_5;
  }
LABEL_6:
  result = a2->value_;
  this->value_ = result;
  return result;
};

// Line 2005: range 000000000C950340-000000000C95034B
void __fastcall google::protobuf::BoolValue::SharedCtor(google::protobuf::BoolValue *const this)
{
  this->value_ = 0;
  this->_cached_size_ = 0;
};

// Line 2009: range 000000000C94FB40-000000000C94FBAD
void __fastcall google::protobuf::BoolValue::~BoolValue(google::protobuf::BoolValue *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A183098;
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
  operator delete(this, 0x18uLL);
};

// Line 2031: range 000000000C94E540-000000000C94E543
void __fastcall google::protobuf::BoolValue::SetCachedSize(const google::protobuf::BoolValue *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 2044: range 000000000C9513B0-000000000C951427
google::protobuf::BoolValue *__fastcall google::protobuf::BoolValue::New(
        google::protobuf::BoolValue *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::BoolValue *Aligned; // r12
  google::protobuf::BoolValue *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::BoolValue,
        0x18uLL);
    Aligned = (google::protobuf::BoolValue *)google::protobuf::internal::ArenaImpl::AllocateAligned(&a2->impl_, 0x18uLL);
    google::protobuf::BoolValue::BoolValue(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::BoolValue *)operator new(0x18uLL);
    google::protobuf::BoolValue::BoolValue(v4);
    return v4;
  }
};

// Line 2048: range 000000000C953810-000000000C953839
void __fastcall google::protobuf::BoolValue::Clear(google::protobuf::BoolValue *const this)
{
  unsigned __int64 ptr; // rax

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->value_ = 0;
  if ( (ptr & 1) != 0 )
  {
    if ( *(_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 2059: range 000000000C951F20-000000000C95202F
bool __fastcall google::protobuf::BoolValue::MergePartialFromCodedStream(
        google::protobuf::BoolValue *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rcx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer >= buffer_end )
    {
      TagFallback = 0;
    }
    else
    {
      TagFallback = *buffer;
      if ( (char)TagFallback > 0 )
      {
        input->buffer_ = buffer + 1;
        goto LABEL_11;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
    if ( TagFallback - 1 > 0x7E )
      break;
LABEL_11:
    if ( TagFallback >> 3 != 1 )
      break;
    if ( TagFallback == 8 )
    {
      *(_QWORD *)&Varint64Fallback.second = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( input->buffer_ < buffer_end
        && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
            SLOBYTE(Varint64Fallback.first) >= 0) )
      {
        buffer = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
        input->buffer_ = buffer;
      }
      else
      {
        Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input);
        if ( !Varint64Fallback.second )
          return 0;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
      }
      this->value_ = Varint64Fallback.first != 0;
    }
    else
    {
LABEL_4:
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      if ( (ptr & 1) != 0 )
        v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      else
        v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
      if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7) )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
  }
  if ( TagFallback )
    goto LABEL_4;
  return 1;
};

// Line 2103: range 000000000C94EED0-000000000C94EF3C
void __fastcall google::protobuf::BoolValue::SerializeWithCachedSizes(
        const google::protobuf::BoolValue *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v3; // rdi

  if ( this->value_ )
    google::protobuf::internal::WireFormatLite::WriteBool(1, 1, output);
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v3 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v3 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v3, output);
  }
};

// Line 2121: range 000000000C94E8D0-000000000C94E924
google::protobuf::uint8 *__fastcall google::protobuf::BoolValue::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::BoolValue *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // r12
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v5; // rdi

  v3 = target;
  if ( this->value_ )
  {
    v3 = target + 2;
    *(_WORD *)target = 264;
  }
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return v3;
  if ( ((unsigned __int8)ptr & 1) != 0 )
    v5 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
  else
    v5 = google::protobuf::UnknownFieldSet::default_instance(ptr);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v5, v3);
};

// Line 2140: range 000000000C94E9F0-000000000C94EA34
size_t __fastcall google::protobuf::BoolValue::ByteSizeLong(const google::protobuf::BoolValue *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  size_t result; // rax
  const google::protobuf::UnknownFieldSet *v4; // rdi

  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v4 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  if ( this->value_ )
    result += 2LL;
  this->_cached_size_ = result;
  return result;
};

// Line 2161: range 000000000C952EE0-000000000C952F2D
void __fastcall google::protobuf::BoolValue::MergeFrom(
        google::protobuf::BoolValue *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::BoolValue *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::BoolValue *)__dynamic_cast(
                                              from,
                                              (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                              (const struct __class_type_info *)&`typeinfo for'google::protobuf::BoolValue,
                                              0LL);
  if ( v2 )
    google::protobuf::BoolValue::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 2176: range 000000000C952E80-000000000C952ED4
void __fastcall google::protobuf::BoolValue::MergeFrom(
        google::protobuf::BoolValue *const this,
        const google::protobuf::BoolValue *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi

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
  if ( from->value_ )
    this->value_ = 1;
};

// Line 2190: range 000000000C954320-000000000C954380
void __fastcall google::protobuf::BoolValue::CopyFrom(
        google::protobuf::BoolValue *const this,
        const google::protobuf::Message *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( this != from )
  {
    this->value_ = 0;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::BoolValue::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::BoolValue::MergeFrom(this, from);
    }
  }
};

// Line 2197: range 000000000C954390-000000000C9543F0
void __fastcall google::protobuf::BoolValue::CopyFrom(
        google::protobuf::BoolValue *const this,
        const google::protobuf::BoolValue *from)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  if ( from != this )
  {
    this->value_ = 0;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 && (v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL), v4->fields_) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
      google::protobuf::BoolValue::MergeFrom(this, from);
    }
    else
    {
      google::protobuf::BoolValue::MergeFrom(this, from);
    }
  }
};

// Line 2207: range 000000000C954400-000000000C9544E4
void __fastcall google::protobuf::BoolValue::Swap(
        google::protobuf::BoolValue *const this,
        google::protobuf::BoolValue *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::BoolValue *v5; // r13
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
      google::protobuf::BoolValue::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::BoolValue::New(this, hint);
      google::protobuf::BoolValue::MergeFrom(v5, other);
      google::protobuf::BoolValue::CopyFrom(other, this);
      google::protobuf::BoolValue::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::BoolValue *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 2221: range 000000000C952920-000000000C952930
void __fastcall google::protobuf::BoolValue::UnsafeArenaSwap(
        google::protobuf::BoolValue *const this,
        google::protobuf::BoolValue *other)
{
  if ( other != this )
    google::protobuf::BoolValue::InternalSwap(this, other);
};

// Line 2225: range 000000000C952880-000000000C95291B
void __fastcall google::protobuf::BoolValue::InternalSwap(
        google::protobuf::BoolValue *const this,
        google::protobuf::BoolValue *other)
{
  bool value; // al
  unsigned __int64 ptr; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int cached_size; // eax
  _QWORD *v9; // [rsp+0h] [rbp-18h]

  value = this->value_;
  this->value_ = other->value_;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->value_ = value;
  v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v4 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v5 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
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

// Line 2262: range 000000000C951430-000000000C9514A8
void __fastcall google::protobuf::StringValue::StringValue(google::protobuf::StringValue *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A183170;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this != (google::protobuf::StringValue *)&google::protobuf::_StringValue_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->_cached_size_ = 0;
};

// Line 2270: range 000000000C9514B0-000000000C951520
void __fastcall google::protobuf::StringValue::StringValue(
        google::protobuf::StringValue *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A183170;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->_cached_size_ = 0;
};

// Line 2278: range 000000000C951810-000000000C9518A9
void __fastcall google::protobuf::StringValue::StringValue(
        google::protobuf::StringValue *this,
        const google::protobuf::StringValue *a2)
{
  unsigned __int64 ptr; // rax
  const google::protobuf::UnknownFieldSet *v3; // r12
  google::protobuf::UnknownFieldSet *v4; // rax
  std::string *v5; // rdx
  google::protobuf::Arena *hint; // rsi

  this->_internal_metadata_.ptr_ = 0LL;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A183170;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v4 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v4, v3);
  }
  v5 = a2->value_.ptr_;
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v5->_M_string_length )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->value_.ptr_, hint, (__int64)v5);
  }
};

// Line 2296: range 000000000C9504A0-000000000C950514
void __fastcall google::protobuf::StringValue::~StringValue(google::protobuf::StringValue *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rdx

  this->_vptr_MessageLite = (int (**)(...))off_1A183170;
  google::protobuf::StringValue::SharedDtor(this);
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

// Line 2296: range 000000000C950520-000000000C950595
void __fastcall google::protobuf::StringValue::~StringValue(google::protobuf::StringValue *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  this->_vptr_MessageLite = (int (**)(...))off_1A183170;
  google::protobuf::StringValue::SharedDtor(this);
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
  operator delete(this, 0x20uLL);
};

// Line 2319: range 000000000C94E550-000000000C94E553
void __fastcall google::protobuf::StringValue::SetCachedSize(const google::protobuf::StringValue *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 2332: range 000000000C951530-000000000C9515A7
google::protobuf::StringValue *__fastcall google::protobuf::StringValue::New(
        google::protobuf::StringValue *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::StringValue *Aligned; // r12
  google::protobuf::StringValue *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::StringValue,
        0x20uLL);
    Aligned = (google::protobuf::StringValue *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                 &a2->impl_,
                                                 0x20uLL);
    google::protobuf::StringValue::StringValue(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::StringValue *)operator new(0x20uLL);
    google::protobuf::StringValue::StringValue(v4);
    return v4;
  }
};

// Line 2336: range 000000000C953840-000000000C953881
void __fastcall google::protobuf::StringValue::Clear(google::protobuf::StringValue *const this)
{
  std::string *ptr; // rax
  unsigned __int64 v2; // rax

  ptr = this->value_.ptr_;
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

// Line 2347: range 000000000C952100-000000000C95223A
bool __fastcall google::protobuf::StringValue::MergePartialFromCodedStream(
        google::protobuf::StringValue *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  unsigned __int64 v5; // rax
  google::protobuf::UnknownFieldSet *v6; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::Arena *hint; // rsi
  std::string *v9; // r8
  const char *v10; // r8

  while ( 1 )
  {
    while ( 1 )
    {
      buffer = input->buffer_;
      if ( input->buffer_end_ <= input->buffer_ )
      {
        TagFallback = 0;
      }
      else
      {
        TagFallback = *buffer;
        if ( (char)TagFallback > 0 )
        {
          input->buffer_ = buffer + 1;
          goto LABEL_11;
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_11:
      if ( TagFallback >> 3 != 1 )
        break;
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      v5 = ptr & 1;
      if ( TagFallback != 10 )
        goto LABEL_5;
      hint = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      if ( (ptr & 1) != 0 )
        hint = (google::protobuf::Arena *)hint->impl_.hint_;
      v9 = this->value_.ptr_;
      if ( v9 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstance(
          &this->value_.ptr_,
          hint,
          (__int64)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        v9 = this->value_.ptr_;
      }
      if ( !google::protobuf::internal::WireFormatLite::ReadBytes(input, v9)
        || !(unsigned __int8)google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                               (google::protobuf::internal::WireFormatLite *)this->value_.ptr_->_M_dataplus._M_p,
                               (const char *)LODWORD(this->value_.ptr_->_M_string_length),
                               0,
                               "google.protobuf.StringValue.value",
                               v10) )
      {
        return 0;
      }
    }
    if ( !TagFallback )
      return 1;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v5 = ptr & 1;
LABEL_5:
    if ( v5 )
      v6 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v6) )
      return 0;
  }
};

// Line 2393: range 000000000C94EF40-000000000C94EFCC
void __fastcall google::protobuf::StringValue::SerializeWithCachedSizes(
        const google::protobuf::StringValue *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  const char *v2; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  google::protobuf::UnknownFieldSet *v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // rdi

  ptr = this->value_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      "google.protobuf.StringValue.value",
      v2);
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1, (__int64)this->value_.ptr_, output);
  }
  v6 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v6 & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)v6 & 1) != 0 )
      v7 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::UnknownFieldSet::default_instance(v6);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v7, output);
  }
};

// Line 2416: range 000000000C94EFD0-000000000C94F064
google::protobuf::uint8 *__fastcall google::protobuf::StringValue::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::StringValue *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  const char *v3; // r8
  std::string *ptr; // rax
  const char *M_string_length; // rsi
  google::protobuf::UnknownFieldSet *v8; // rdi
  const google::protobuf::UnknownFieldSet *v9; // rdi
  std::string *v11; // rdi

  ptr = this->value_.ptr_;
  M_string_length = (const char *)ptr->_M_string_length;
  if ( M_string_length )
  {
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      (google::protobuf::internal::WireFormatLite *)ptr->_M_dataplus._M_p,
      M_string_length,
      1,
      "google.protobuf.StringValue.value",
      v3);
    v11 = this->value_.ptr_;
    *target = 10;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v11, target + 1);
  }
  v8 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v8 & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return target;
  if ( ((unsigned __int8)v8 & 1) != 0 )
    v9 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFELL);
  else
    v9 = google::protobuf::UnknownFieldSet::default_instance(v8);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v9, target);
};

// Line 2441: range 000000000C94EDA0-000000000C94EDFC
size_t __fastcall google::protobuf::StringValue::ByteSizeLong(const google::protobuf::StringValue *const this)
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
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  M_string_length = this->value_.ptr_->_M_string_length;
  if ( M_string_length )
  {
    v6 = M_string_length + result + 1;
    _BitScanReverse((unsigned int *)&M_string_length, M_string_length | 1);
    result = v6 + ((unsigned int)(9 * M_string_length + 73) >> 6);
  }
  this->_cached_size_ = result;
  return result;
};

// Line 2464: range 000000000C9530A0-000000000C9530ED
void __fastcall google::protobuf::StringValue::MergeFrom(
        google::protobuf::StringValue *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::StringValue *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::StringValue *)__dynamic_cast(
                                                from,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::StringValue,
                                                0LL);
  if ( v2 )
    google::protobuf::StringValue::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 2479: range 000000000C953000-000000000C95309C
void __fastcall google::protobuf::StringValue::MergeFrom(
        google::protobuf::StringValue *const this,
        const google::protobuf::StringValue *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  std::string *v8; // rsi
  google::protobuf::Arena *hint; // r8
  std::string *v10; // rdi

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
  v8 = from->value_.ptr_;
  if ( v8->_M_string_length )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    v10 = this->value_.ptr_;
    if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->value_.ptr_, hint, (__int64)from->value_.ptr_);
    else
      std::string::_M_assign(v10, v8);
  }
};

// Line 2493: range 000000000C953890-000000000C9538C0
void __fastcall google::protobuf::StringValue::CopyFrom(
        google::protobuf::StringValue *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::StringValue::Clear(this);
    google::protobuf::StringValue::MergeFrom(this, from);
  }
};

// Line 2500: range 000000000C9539D0-000000000C953A00
void __fastcall google::protobuf::StringValue::CopyFrom(
        google::protobuf::StringValue *const this,
        const google::protobuf::StringValue *from)
{
  if ( from != this )
  {
    google::protobuf::StringValue::Clear(this);
    google::protobuf::StringValue::MergeFrom(this, from);
  }
};

// Line 2510: range 000000000C9538D0-000000000C9539C4
void __fastcall google::protobuf::StringValue::Swap(
        google::protobuf::StringValue *const this,
        google::protobuf::StringValue *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::StringValue *v5; // r13
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
      google::protobuf::StringValue::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::StringValue::New(this, hint);
      google::protobuf::StringValue::MergeFrom(v5, other);
      google::protobuf::StringValue::Clear(other);
      google::protobuf::StringValue::MergeFrom(other, this);
      google::protobuf::StringValue::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::StringValue *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 2524: range 000000000C952860-000000000C952870
void __fastcall google::protobuf::StringValue::UnsafeArenaSwap(
        google::protobuf::StringValue *const this,
        google::protobuf::StringValue *other)
{
  if ( other != this )
    google::protobuf::StringValue::InternalSwap(this, other);
};

// Line 2528: range 000000000C9527C0-000000000C95285B
void __fastcall google::protobuf::StringValue::InternalSwap(
        google::protobuf::StringValue *const this,
        google::protobuf::StringValue *other)
{
  std::string *ptr; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int cached_size; // eax
  _QWORD *v9; // [rsp+0h] [rbp-18h]

  ptr = this->value_.ptr_;
  this->value_.ptr_ = other->value_.ptr_;
  v3 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->value_.ptr_ = ptr;
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

// Line 2626: range 000000000C9515B0-000000000C951628
void __fastcall google::protobuf::BytesValue::BytesValue(google::protobuf::BytesValue *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A183248;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this != (google::protobuf::BytesValue *)&google::protobuf::_BytesValue_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->_cached_size_ = 0;
};

// Line 2634: range 000000000C951710-000000000C951780
void __fastcall google::protobuf::BytesValue::BytesValue(
        google::protobuf::BytesValue *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1A183248;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->_cached_size_ = 0;
};

// Line 2642: range 000000000C9535F0-000000000C953689
void __fastcall google::protobuf::BytesValue::BytesValue(
        google::protobuf::BytesValue *this,
        const google::protobuf::BytesValue *a2)
{
  unsigned __int64 ptr; // rax
  const google::protobuf::UnknownFieldSet *v3; // r12
  google::protobuf::UnknownFieldSet *v4; // rax
  std::string *v5; // rdx
  google::protobuf::Arena *hint; // rsi

  this->_internal_metadata_.ptr_ = 0LL;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A183248;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v4 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v4, v3);
  }
  v5 = a2->value_.ptr_;
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( v5->_M_string_length )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->value_.ptr_, hint, (__int64)v5);
  }
};

// Line 2660: range 000000000C950760-000000000C9507D5
void __fastcall google::protobuf::BytesValue::~BytesValue(google::protobuf::BytesValue *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  this->_vptr_MessageLite = (int (**)(...))off_1A183248;
  google::protobuf::BytesValue::SharedDtor(this);
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
  operator delete(this, 0x20uLL);
};

// Line 2660: range 000000000C9506E0-000000000C950754
void __fastcall google::protobuf::BytesValue::~BytesValue(google::protobuf::BytesValue *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rdx

  this->_vptr_MessageLite = (int (**)(...))off_1A183248;
  google::protobuf::BytesValue::SharedDtor(this);
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

// Line 2683: range 000000000C94E560-000000000C94E563
void __fastcall google::protobuf::BytesValue::SetCachedSize(const google::protobuf::BytesValue *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 2696: range 000000000C951790-000000000C951807
google::protobuf::BytesValue *__fastcall google::protobuf::BytesValue::New(
        google::protobuf::BytesValue *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::BytesValue *Aligned; // r12
  google::protobuf::BytesValue *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::BytesValue,
        0x20uLL);
    Aligned = (google::protobuf::BytesValue *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                &a2->impl_,
                                                0x20uLL);
    google::protobuf::BytesValue::BytesValue(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::BytesValue *)operator new(0x20uLL);
    google::protobuf::BytesValue::BytesValue(v4);
    return v4;
  }
};

// Line 2700: range 000000000C953A10-000000000C953A51
void __fastcall google::protobuf::BytesValue::Clear(google::protobuf::BytesValue *const this)
{
  std::string *ptr; // rax
  unsigned __int64 v2; // rax

  ptr = this->value_.ptr_;
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

// Line 2711: range 000000000C952240-000000000C952358
bool __fastcall google::protobuf::BytesValue::MergePartialFromCodedStream(
        google::protobuf::BytesValue *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  unsigned __int64 v5; // rax
  google::protobuf::UnknownFieldSet *v6; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::Arena *hint; // rsi
  std::string *v9; // r8

  while ( 1 )
  {
    while ( 1 )
    {
      buffer = input->buffer_;
      if ( input->buffer_ >= input->buffer_end_ )
      {
        TagFallback = 0;
      }
      else
      {
        TagFallback = *buffer;
        if ( (char)TagFallback > 0 )
        {
          input->buffer_ = buffer + 1;
          goto LABEL_11;
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_11:
      if ( TagFallback >> 3 != 1 )
        break;
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      v5 = ptr & 1;
      if ( TagFallback != 10 )
        goto LABEL_5;
      hint = (google::protobuf::Arena *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      if ( (ptr & 1) != 0 )
        hint = (google::protobuf::Arena *)hint->impl_.hint_;
      v9 = this->value_.ptr_;
      if ( v9 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstance(
          &this->value_.ptr_,
          hint,
          (__int64)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        v9 = this->value_.ptr_;
      }
      if ( !google::protobuf::internal::WireFormatLite::ReadBytes(input, v9) )
        return 0;
    }
    if ( !TagFallback )
      return 1;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v5 = ptr & 1;
LABEL_5:
    if ( v5 )
      v6 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v6) )
      return 0;
  }
};

// Line 2753: range 000000000C94F0F0-000000000C94F164
void __fastcall google::protobuf::BytesValue::SerializeWithCachedSizes(
        const google::protobuf::BytesValue *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  std::string *ptr; // rsi
  google::protobuf::UnknownFieldSet *v4; // rdi
  const google::protobuf::UnknownFieldSet *v5; // rdi

  ptr = this->value_.ptr_;
  if ( ptr->_M_string_length )
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(1, (__int64)ptr, output);
  v4 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v4 & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)v4 & 1) != 0 )
      v5 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v4 & 0xFFFFFFFFFFFFFFFELL);
    else
      v5 = google::protobuf::UnknownFieldSet::default_instance(v4);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v5, output);
  }
};

// Line 2772: range 000000000C94F070-000000000C94F0EC
google::protobuf::uint8 *__fastcall google::protobuf::BytesValue::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::BytesValue *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // r12
  std::string *ptr; // rdi
  google::protobuf::UnknownFieldSet *v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // rdi

  v3 = target;
  ptr = this->value_.ptr_;
  if ( ptr->_M_string_length )
  {
    *target = 10;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
  }
  v6 = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)v6 & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return v3;
  if ( ((unsigned __int8)v6 & 1) != 0 )
    v7 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFELL);
  else
    v7 = google::protobuf::UnknownFieldSet::default_instance(v6);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v7, v3);
};

// Line 2793: range 000000000C94EE00-000000000C94EE5C
size_t __fastcall google::protobuf::BytesValue::ByteSizeLong(const google::protobuf::BytesValue *const this)
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
      v4 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v4);
  }
  M_string_length = this->value_.ptr_->_M_string_length;
  if ( M_string_length )
  {
    v6 = M_string_length + result + 1;
    _BitScanReverse((unsigned int *)&M_string_length, M_string_length | 1);
    result = v6 + ((unsigned int)(9 * M_string_length + 73) >> 6);
  }
  this->_cached_size_ = result;
  return result;
};

// Line 2816: range 000000000C9531A0-000000000C9531ED
void __fastcall google::protobuf::BytesValue::MergeFrom(
        google::protobuf::BytesValue *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::BytesValue *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::BytesValue *)__dynamic_cast(
                                               from,
                                               (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                               (const struct __class_type_info *)&`typeinfo for'google::protobuf::BytesValue,
                                               0LL);
  if ( v2 )
    google::protobuf::BytesValue::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 2831: range 000000000C953100-000000000C95319C
void __fastcall google::protobuf::BytesValue::MergeFrom(
        google::protobuf::BytesValue *const this,
        const google::protobuf::BytesValue *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  std::string *v8; // rsi
  google::protobuf::Arena *hint; // r8
  std::string *v10; // rdi

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
  v8 = from->value_.ptr_;
  if ( v8->_M_string_length )
  {
    hint = (google::protobuf::Arena *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    v10 = this->value_.ptr_;
    if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstance(&this->value_.ptr_, hint, (__int64)from->value_.ptr_);
    else
      std::string::_M_assign(v10, v8);
  }
};

// Line 2845: range 000000000C953A60-000000000C953A90
void __fastcall google::protobuf::BytesValue::CopyFrom(
        google::protobuf::BytesValue *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::BytesValue::Clear(this);
    google::protobuf::BytesValue::MergeFrom(this, from);
  }
};

// Line 2852: range 000000000C953BA0-000000000C953BD0
void __fastcall google::protobuf::BytesValue::CopyFrom(
        google::protobuf::BytesValue *const this,
        const google::protobuf::BytesValue *from)
{
  if ( from != this )
  {
    google::protobuf::BytesValue::Clear(this);
    google::protobuf::BytesValue::MergeFrom(this, from);
  }
};

// Line 2862: range 000000000C953AA0-000000000C953B94
void __fastcall google::protobuf::BytesValue::Swap(
        google::protobuf::BytesValue *const this,
        google::protobuf::BytesValue *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::BytesValue *v5; // r13
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
      google::protobuf::BytesValue::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::BytesValue::New(this, hint);
      google::protobuf::BytesValue::MergeFrom(v5, other);
      google::protobuf::BytesValue::Clear(other);
      google::protobuf::BytesValue::MergeFrom(other, this);
      google::protobuf::BytesValue::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::BytesValue *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 2876: range 000000000C9527A0-000000000C9527B0
void __fastcall google::protobuf::BytesValue::UnsafeArenaSwap(
        google::protobuf::BytesValue *const this,
        google::protobuf::BytesValue *other)
{
  if ( other != this )
    google::protobuf::BytesValue::InternalSwap(this, other);
};

// Line 2880: range 000000000C952700-000000000C95279B
void __fastcall google::protobuf::BytesValue::InternalSwap(
        google::protobuf::BytesValue *const this,
        google::protobuf::BytesValue *other)
{
  std::string *ptr; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int cached_size; // eax
  _QWORD *v9; // [rsp+0h] [rbp-18h]

  ptr = this->value_.ptr_;
  this->value_.ptr_ = other->value_.ptr_;
  v3 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->value_.ptr_ = ptr;
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

// Line 2975: range 000000000C7470D0-000000000C747136
void GLOBAL__sub_I__ZN6google8protobuf30_DoubleValue_default_instance_E()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  if ( google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
};
