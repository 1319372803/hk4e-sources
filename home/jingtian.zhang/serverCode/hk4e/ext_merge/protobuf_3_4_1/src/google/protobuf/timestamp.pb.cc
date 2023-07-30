// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/timestamp.pb.cc

// Line 70: range 0000000019FC1E50-0000000019FC1F53
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_AssignDescriptors(
        google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::_anonymous_namespace_ *this)
{
  int (**v1)(...); // rax
  __m128i si128; // xmm0
  __int64 v3; // [rsp+8h] [rbp-38h] BYREF
  google::protobuf::internal::FunctionClosure0 closure[2]; // [rsp+10h] [rbp-30h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors(void)::once != 2 )
  {
    closure[0].self_deleting_ = 0;
    closure[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    closure[0].function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors(void)::once,
      &closure[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(closure);
  }
  v3 = 31LL;
  closure[0]._vptr_Closure = (int (**)(...))&closure[0].self_deleting_;
  v1 = (int (**)(...))std::string::_M_create(closure, &v3, 0LL);
  closure[0]._vptr_Closure = v1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1A179090);
  *(_QWORD *)&closure[0].self_deleting_ = v3;
  qmemcpy(v1 + 2, "timestamp.proto", 15);
  *(__m128i *)v1 = si128;
  closure[0].function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)v3;
  *((_BYTE *)closure[0]._vptr_Closure + v3) = 0;
  google::protobuf::internal::AssignDescriptors(
    (google::protobuf::DescriptorPool *)closure,
    &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::schemas,
    (__int64)google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::file_default_instances,
    (google::protobuf::uint32 *)google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::TableStruct::offsets,
    0LL,
    (google::protobuf::internal::Mutex *)google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::file_level_metadata,
    0LL,
    0LL);
  if ( (bool *)closure[0]._vptr_Closure != &closure[0].self_deleting_ )
    operator delete(closure[0]._vptr_Closure);
};

// Line 84: range 0000000019FC1D60-0000000019FC1DC0
void google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_RegisterTypes()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
  google::protobuf::internal::RegisterAllTypes(
    google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::file_level_metadata,
    1);
};

// Line 90: range 0000000019FC2190-0000000019FC21C0
void __cdecl google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "google/protobuf/timestamp.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::Timestamp::Timestamp((google::protobuf::Timestamp *)&google::protobuf::_Timestamp_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (int (**)(...))&google::protobuf::_Timestamp_default_instance_,
    (const void *)0x2DD660);
};

// Line 103: range 0000000019FC1DD0-0000000019FC1E40
void __fastcall google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::AddDescriptorsImpl(
        google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::_anonymous_namespace_ *this)
{
  google::protobuf::internal::FunctionClosure0 v1; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(void)::once != 2 )
  {
    v1._vptr_Closure = (int (**)(...))off_1A16E058;
    v1.function_ = google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::TableStruct::InitDefaultsImpl;
    v1.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(void)::once,
      &v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v1);
  }
  google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    (google::protobuf::DescriptorPool *)&google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::AddDescriptorsImpl(void)::descriptor,
    (const void *)0xE7);
  google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/timestamp.proto",
    (const char *)google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::protobuf_RegisterTypes);
};

// Line 141: range 0000000019FC2100-0000000019FC2180
void __fastcall google::protobuf::Timestamp::Timestamp(google::protobuf::Timestamp *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1B9BD058;
  this->_internal_metadata_.ptr_ = 0LL;
  if ( this != (google::protobuf::Timestamp *)&google::protobuf::_Timestamp_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->seconds_ = 0LL;
  this->nanos_ = 0;
  this->_cached_size_ = 0;
};

// Line 149: range 0000000019FC21D0-0000000019FC2240
void __fastcall google::protobuf::Timestamp::Timestamp(google::protobuf::Timestamp *this, google::protobuf::Arena *a2)
{
  google::protobuf::ProtobufOnceType v2; // rax
  google::protobuf::internal::FunctionClosure0 v3[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_internal_metadata_.ptr_ = a2;
  v2 = google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(void)::once;
  this->_vptr_MessageLite = (int (**)(...))off_1B9BD058;
  if ( v2 != 2 )
  {
    v3[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v3[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::TableStruct::InitDefaultsImpl;
    v3[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults(void)::once,
      &v3[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  this->seconds_ = 0LL;
  this->nanos_ = 0;
  this->_cached_size_ = 0;
};

// Line 157: range 0000000019FC22D0-0000000019FC2357
__int64 __fastcall google::protobuf::Timestamp::Timestamp(
        google::protobuf::Timestamp *this,
        const google::protobuf::Timestamp *a2)
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
  this->_vptr_MessageLite = (int (**)(...))off_1B9BD058;
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
  this->seconds_ = a2->seconds_;
  result = (unsigned int)a2->nanos_;
  this->nanos_ = result;
  return result;
};

// Line 169: range 0000000019FC2000-0000000019FC2016
void __fastcall google::protobuf::Timestamp::SharedCtor(google::protobuf::Timestamp *const this)
{
  this->seconds_ = 0LL;
  this->nanos_ = 0;
  this->_cached_size_ = 0;
};

// Line 175: range 0000000019FC1CF0-0000000019FC1D5D
void __fastcall google::protobuf::Timestamp::~Timestamp(google::protobuf::Timestamp *const this)
{
  unsigned __int64 ptr; // rax
  _QWORD *v2; // r12
  unsigned __int64 v3; // rdx

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1B9BD058;
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

// Line 187: range 0000000019FC2020-0000000019FC2030
void __fastcall google::protobuf::Timestamp::SharedDtor(google::protobuf::Timestamp *const this)
{
  ;
};

// Line 197: range 0000000019FC1A30-0000000019FC1A33
void __fastcall google::protobuf::Timestamp::SetCachedSize(const google::protobuf::Timestamp *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 210: range 0000000019FC2250-0000000019FC22C7
google::protobuf::Timestamp *__fastcall google::protobuf::Timestamp::New(
        google::protobuf::Timestamp *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::Timestamp *Aligned; // r12
  google::protobuf::Timestamp *v4; // r12

  if ( a2 )
  {
    if ( a2->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        a2,
        (const std::type_info *)&`typeinfo for'google::protobuf::Timestamp,
        0x20uLL);
    Aligned = (google::protobuf::Timestamp *)google::protobuf::internal::ArenaImpl::AllocateAligned(&a2->impl_, 0x20uLL);
    google::protobuf::Timestamp::Timestamp(Aligned, a2);
    return Aligned;
  }
  else
  {
    v4 = (google::protobuf::Timestamp *)operator new(0x20uLL);
    google::protobuf::Timestamp::Timestamp(v4);
    return v4;
  }
};

// Line 214: range 0000000019FC2360-0000000019FC2391
void __fastcall google::protobuf::Timestamp::Clear(google::protobuf::Timestamp *const this)
{
  unsigned __int64 ptr; // rax

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->seconds_ = 0LL;
  this->nanos_ = 0;
  if ( (ptr & 1) != 0 )
  {
    if ( *(_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 227: range 0000000019FC23A0-0000000019FC2510
bool __fastcall google::protobuf::Timestamp::MergePartialFromCodedStream(
        google::protobuf::Timestamp *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rcx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  const google::protobuf::uint8 *v8; // rdx
  google::protobuf::uint32 v9; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  std::pair<long unsigned int,bool> Varint64Fallback; // rax

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
LABEL_2:
  if ( buffer >= buffer_end )
    goto LABEL_10;
  while ( 1 )
  {
    TagFallback = *buffer;
    if ( (char)TagFallback <= 0 )
      break;
    input->buffer_ = buffer + 1;
LABEL_12:
    if ( TagFallback >> 3 == 1 )
    {
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
        this->seconds_ = Varint64Fallback.first;
        goto LABEL_2;
      }
    }
    else
    {
      if ( TagFallback >> 3 != 2 )
        goto handle_unusual;
      if ( TagFallback == 16 )
      {
        v8 = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( input->buffer_ >= buffer_end )
        {
          v9 = 0;
LABEL_17:
          Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v9);
          v9 = Varint32Fallback;
          if ( Varint32Fallback < 0 )
            return 0;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
        }
        else
        {
          v9 = *v8;
          if ( *(char *)v8 < 0 )
            goto LABEL_17;
          buffer = v8 + 1;
          input->buffer_ = buffer;
        }
        this->nanos_ = v9;
        goto LABEL_2;
      }
    }
LABEL_6:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7) )
      return 0;
    buffer = input->buffer_;
    if ( input->buffer_ >= input->buffer_end_ )
    {
LABEL_10:
      TagFallback = 0;
      break;
    }
  }
  TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
  if ( TagFallback - 1 <= 0x7E )
    goto LABEL_12;
handle_unusual:
  if ( TagFallback )
    goto LABEL_6;
  return 1;
};

// Line 285: range 0000000019FC1A50-0000000019FC1AD4
void __fastcall google::protobuf::Timestamp::SerializeWithCachedSizes(
        const google::protobuf::Timestamp *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::int64 seconds; // rsi
  google::protobuf::int32 nanos; // esi
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rdi

  seconds = this->seconds_;
  if ( seconds )
    google::protobuf::internal::WireFormatLite::WriteInt64(1, seconds, output);
  nanos = this->nanos_;
  if ( nanos )
    google::protobuf::internal::WireFormatLite::WriteInt32(2, nanos, output);
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v6 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v6 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    google::protobuf::internal::WireFormat::SerializeUnknownFields(v6, output);
  }
};

// Line 308: range 0000000019FC1AE0-0000000019FC1B8A
google::protobuf::uint8 *__fastcall google::protobuf::Timestamp::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::Timestamp *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  unsigned __int64 seconds; // rax
  google::protobuf::uint8 *v4; // r12
  google::protobuf::uint8 *i; // rdx
  char v6; // cl
  unsigned __int64 nanos; // rax
  _BYTE *j; // rdx
  char v9; // cl
  google::protobuf::UnknownFieldSet *ptr; // rdi
  const google::protobuf::UnknownFieldSet *v11; // rdi

  seconds = this->seconds_;
  v4 = target;
  if ( seconds )
  {
    *target = 8;
    for ( i = target + 1; seconds > 0x7F; *(i - 1) = v6 | 0x80 )
    {
      v6 = seconds;
      seconds >>= 7;
      ++i;
    }
    *i = seconds;
    v4 = i + 1;
  }
  nanos = this->nanos_;
  if ( (_DWORD)nanos )
  {
    *v4 = 16;
    for ( j = v4 + 1; nanos > 0x7F; *(j - 1) = v9 | 0x80 )
    {
      v9 = nanos;
      nanos >>= 7;
      ++j;
    }
    *j = nanos;
    v4 = j + 1;
  }
  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  if ( ((unsigned __int8)ptr & 1) == 0 || !google::protobuf::internal::proto3_preserve_unknown_ )
    return v4;
  if ( ((unsigned __int8)ptr & 1) != 0 )
    v11 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
  else
    v11 = google::protobuf::UnknownFieldSet::default_instance(ptr);
  return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(v11, v4);
};

// Line 332: range 0000000019FC1B90-0000000019FC1C14
size_t __fastcall google::protobuf::Timestamp::ByteSizeLong(const google::protobuf::Timestamp *const this)
{
  google::protobuf::UnknownFieldSet *ptr; // rdi
  size_t result; // rax
  google::protobuf::int64 seconds; // rdx
  google::protobuf::int32 nanos; // edx
  __int64 v6; // rdx
  const google::protobuf::UnknownFieldSet *v7; // rdi

  ptr = (google::protobuf::UnknownFieldSet *)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( ((unsigned __int8)ptr & 1) != 0 && google::protobuf::internal::proto3_preserve_unknown_ )
  {
    if ( ((unsigned __int8)ptr & 1) != 0 )
      v7 = (const google::protobuf::UnknownFieldSet *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::UnknownFieldSet::default_instance(ptr);
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v7);
  }
  seconds = this->seconds_;
  if ( seconds )
  {
    _BitScanReverse64((unsigned __int64 *)&seconds, seconds | 1);
    result += ((unsigned int)(9 * seconds + 73) >> 6) + 1LL;
  }
  nanos = this->nanos_;
  if ( nanos )
  {
    if ( nanos < 0 )
    {
      v6 = 10LL;
    }
    else
    {
      _BitScanReverse((unsigned int *)&nanos, nanos | 1);
      v6 = (unsigned int)(9 * nanos + 73) >> 6;
    }
    result += v6 + 1;
  }
  this->_cached_size_ = result;
  return result;
};

// Line 362: range 0000000019FC2650-0000000019FC269D
void __fastcall google::protobuf::Timestamp::MergeFrom(
        google::protobuf::Timestamp *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::Timestamp *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::Timestamp *)__dynamic_cast(
                                              from,
                                              (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                              (const struct __class_type_info *)&`typeinfo for'google::protobuf::Timestamp,
                                              0LL);
  if ( v2 )
    google::protobuf::Timestamp::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge(
      (google::protobuf::internal::ReflectionOps *)from,
      (google::protobuf::internal::LogMessage_0 *)this,
      v3);
};

// Line 377: range 0000000019FC25E0-0000000019FC2641
void __fastcall google::protobuf::Timestamp::MergeFrom(
        google::protobuf::Timestamp *const this,
        const google::protobuf::Timestamp *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::int64 seconds; // rax
  google::protobuf::int32 nanos; // eax

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
  seconds = from->seconds_;
  if ( seconds )
    this->seconds_ = seconds;
  nanos = from->nanos_;
  if ( nanos )
    this->nanos_ = nanos;
};

// Line 394: range 0000000019FC26B0-0000000019FC26E0
void __fastcall google::protobuf::Timestamp::CopyFrom(
        google::protobuf::Timestamp *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::Timestamp::Clear(this);
    google::protobuf::Timestamp::MergeFrom(this, from);
  }
};

// Line 401: range 0000000019FC27F0-0000000019FC2820
void __fastcall google::protobuf::Timestamp::CopyFrom(
        google::protobuf::Timestamp *const this,
        const google::protobuf::Timestamp *from)
{
  if ( from != this )
  {
    google::protobuf::Timestamp::Clear(this);
    google::protobuf::Timestamp::MergeFrom(this, from);
  }
};

// Line 408: range 0000000019FC1A40-0000000019FC1A45
bool __fastcall google::protobuf::Timestamp::IsInitialized(const google::protobuf::Timestamp *const this)
{
  return 1;
};

// Line 411: range 0000000019FC26F0-0000000019FC27E4
void __fastcall google::protobuf::Timestamp::Swap(
        google::protobuf::Timestamp *const this,
        google::protobuf::Timestamp *other)
{
  google::protobuf::Arena *hint; // rsi
  unsigned __int64 v4; // rdx
  google::protobuf::Timestamp *v5; // r13
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
      google::protobuf::Timestamp::InternalSwap(this, other);
    }
    else
    {
      v5 = google::protobuf::Timestamp::New(this, hint);
      google::protobuf::Timestamp::MergeFrom(v5, other);
      google::protobuf::Timestamp::Clear(other);
      google::protobuf::Timestamp::MergeFrom(other, this);
      google::protobuf::Timestamp::InternalSwap(this, v5);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL;
      if ( ((__int64)this->_internal_metadata_.ptr_ & 1) != 0 )
        v6 = *(_QWORD *)(v6 + 8);
      if ( v5 )
      {
        if ( !v6 )
          (*((void (__fastcall **)(google::protobuf::Timestamp *))v5->_vptr_MessageLite + 1))(v5);
      }
    }
  }
};

// Line 425: range 0000000019FC25C0-0000000019FC25D0
void __fastcall google::protobuf::Timestamp::UnsafeArenaSwap(
        google::protobuf::Timestamp *const this,
        google::protobuf::Timestamp *other)
{
  if ( other != this )
    google::protobuf::Timestamp::InternalSwap(this, other);
};

// Line 429: range 0000000019FC2520-0000000019FC25BB
void __fastcall google::protobuf::Timestamp::InternalSwap(
        google::protobuf::Timestamp *const this,
        google::protobuf::Timestamp *other)
{
  google::protobuf::int64 seconds; // rax
  google::protobuf::int32 nanos; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rcx
  int cached_size; // eax
  _QWORD *v10; // [rsp+0h] [rbp-18h]

  seconds = this->seconds_;
  this->seconds_ = other->seconds_;
  nanos = other->nanos_;
  other->seconds_ = seconds;
  LODWORD(seconds) = this->nanos_;
  this->nanos_ = nanos;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->nanos_ = seconds;
  v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v5 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v6 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v5 & 1) != 0 )
  {
    v7 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v10 = v6;
    v7 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v6 = v10;
  }
  v8 = *v7;
  *v7 = *v6;
  *v6 = v8;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 478: range 000000000C748490-000000000C7484F6
void GLOBAL__sub_I__ZN6google8protobuf28_Timestamp_default_instance_E()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  if ( google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
};
