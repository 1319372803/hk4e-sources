// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/io/coded_stream.h

// Line 867: range 00000000160CE13C-00000000160CE206
bool __cdecl google::protobuf::io::CodedOutputStream::IsSerializationDeterministic(
        const google::protobuf::io::CodedOutputStream *const this)
{
  google::protobuf::internal::AtomicWord serialization_deterministic_override; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->serialization_deterministic_is_overridden_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 26) & 7) >= *(_BYTE *)(((unsigned __int64)&this->serialization_deterministic_is_overridden_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->serialization_deterministic_is_overridden_);
  }
  if ( this->serialization_deterministic_is_overridden_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->serialization_deterministic_override_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)(((unsigned __int64)&this->serialization_deterministic_override_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->serialization_deterministic_override_);
    }
    serialization_deterministic_override = this->serialization_deterministic_override_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&google::protobuf::io::CodedOutputStream::default_serialization_deterministic_);
    serialization_deterministic_override = google::protobuf::io::CodedOutputStream::default_serialization_deterministic_;
  }
  return serialization_deterministic_override != 0;
};

// Line 951: range 00000000160CE208-00000000160CE379
bool __cdecl google::protobuf::io::CodedInputStream::ReadVarintSizeAsInt(
        google::protobuf::io::CodedInputStream *const this,
        int *value)
{
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *v3; // rdx
  int VarintSizeAsIntFallback; // ecx
  unsigned int v; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  buffer = this->buffer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_end_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->buffer_end_);
  if ( buffer >= this->buffer_end_ )
    goto LABEL_12;
  v3 = this->buffer_;
  if ( *(_BYTE *)(((unsigned __int64)this->buffer_ >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->buffer_ & 7) >= *(_BYTE *)(((unsigned __int64)this->buffer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->buffer_);
  }
  v = *v3;
  if ( v > 0x7F )
  {
LABEL_12:
    VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(this);
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(value);
    }
    *value = VarintSizeAsIntFallback;
    return *value >= 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(value);
    }
    *value = v;
    google::protobuf::io::CodedInputStream::Advance(this, 1);
    return 1;
  }
};

// Line 967: range 00000000160CE37A-00000000160CE477
const google::protobuf::uint8 *__cdecl google::protobuf::io::CodedInputStream::ReadLittleEndian32FromArray(
        const google::protobuf::uint8 *buffer,
        google::protobuf::uint32 *value)
{
  google::protobuf::uint32 v2; // esi

  if ( ((unsigned __int8)buffer & 7) >= *(_BYTE *)(((unsigned __int64)buffer >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)buffer >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(buffer + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)buffer + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(buffer + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(buffer, 4LL);
  }
  v2 = *(_DWORD *)buffer;
  if ( ((unsigned __int8)value & 7) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)value + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)value + 3) & 7) >= *(_BYTE *)((((unsigned __int64)value + 3) >> 3) + 0x7FFF8000) )
  {
    v2 = 4;
    __asan_report_store_n(value, 4LL);
  }
  *value = v2;
  return buffer + 4;
};

// Line 982: range 00000000160CE478-00000000160CE577
const google::protobuf::uint8 *__cdecl google::protobuf::io::CodedInputStream::ReadLittleEndian64FromArray(
        const google::protobuf::uint8 *buffer,
        google::protobuf::uint64 *value)
{
  google::protobuf::uint64 v2; // rsi

  if ( ((unsigned __int8)buffer & 7) >= *(_BYTE *)(((unsigned __int64)buffer >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)buffer >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(buffer + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)buffer + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(buffer + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(buffer, 8LL);
  }
  v2 = *(_QWORD *)buffer;
  if ( ((unsigned __int8)value & 7) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)value + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)value + 7) & 7) >= *(_BYTE *)((((unsigned __int64)value + 7) >> 3) + 0x7FFF8000) )
  {
    v2 = 8LL;
    __asan_report_store_n(value, 8LL);
  }
  *value = v2;
  return buffer + 8;
};

// Line 1001: range 00000000160CE578-00000000160CE622
bool __cdecl google::protobuf::io::CodedInputStream::ReadLittleEndian32(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::uint32 *value)
{
  const google::protobuf::uint8 *LittleEndian32FromArray; // rax

  if ( google::protobuf::io::CodedInputStream::BufferSize(this) <= 3 )
    return google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(this, value);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  LittleEndian32FromArray = google::protobuf::io::CodedInputStream::ReadLittleEndian32FromArray(this->buffer_, value);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->buffer_ = LittleEndian32FromArray;
  return 1;
};

// Line 1014: range 00000000160CE624-00000000160CE6CE
bool __cdecl google::protobuf::io::CodedInputStream::ReadLittleEndian64(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::uint64 *value)
{
  const google::protobuf::uint8 *LittleEndian64FromArray; // rax

  if ( google::protobuf::io::CodedInputStream::BufferSize(this) <= 7 )
    return google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(this, value);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  LittleEndian64FromArray = google::protobuf::io::CodedInputStream::ReadLittleEndian64FromArray(this->buffer_, value);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->buffer_ = LittleEndian64FromArray;
  return 1;
};

// Line 1133: range 00000000160CE6D0-00000000160CE888
bool __cdecl google::protobuf::io::CodedInputStream::ExpectAtEnd(google::protobuf::io::CodedInputStream *const this)
{
  const google::protobuf::uint8 *buffer; // rcx
  int total_bytes_read; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  buffer = this->buffer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_end_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->buffer_end_);
  if ( buffer != this->buffer_end_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_size_after_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buffer_size_after_limit_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->buffer_size_after_limit_);
  }
  if ( !this->buffer_size_after_limit_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_bytes_read_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_bytes_read_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_bytes_read_);
    }
    total_bytes_read = this->total_bytes_read_;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_limit_);
    }
    if ( total_bytes_read != this->current_limit_ )
      return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_tag_);
  }
  this->last_tag_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->legitimate_message_end_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->legitimate_message_end_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->legitimate_message_end_);
  }
  this->legitimate_message_end_ = 1;
  return 1;
};

// Line 1163: range 00000000160CE88A-00000000160CE936
google::protobuf::uint8 *__cdecl google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        google::protobuf::uint32 value,
        google::protobuf::uint8 *target)
{
  while ( value > 0x7F )
  {
    if ( *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)target & 7) >= *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(target);
    }
    *target = value | 0x80;
    value >>= 7;
    ++target;
  }
  if ( *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)target & 7) >= *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(target);
  }
  *target = value;
  return target + 1;
};

// Line 1174: range 00000000160CE938-00000000160CE9E9
google::protobuf::uint8 *__cdecl google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(
        google::protobuf::uint64 value,
        google::protobuf::uint8 *target)
{
  while ( value > 0x7F )
  {
    if ( *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)target & 7) >= *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(target);
    }
    *target = value | 0x80;
    value >>= 7;
    ++target;
  }
  if ( *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)target & 7) >= *(_BYTE *)(((unsigned __int64)target >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(target);
  }
  *target = value;
  return target + 1;
};

// Line 1184: range 00000000160CE9EA-00000000160CEA10
void __cdecl google::protobuf::io::CodedOutputStream::WriteVarint32SignExtended(
        google::protobuf::io::CodedOutputStream *const this,
        google::protobuf::int32 value)
{
  google::protobuf::io::CodedOutputStream::WriteVarint64(this, value);
};

// Line 1189: range 00000000160CEA12-00000000160CEA36
google::protobuf::uint8 *__cdecl google::protobuf::io::CodedOutputStream::WriteVarint32SignExtendedToArray(
        google::protobuf::int32 value,
        google::protobuf::uint8 *target)
{
  return google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(value, target);
};

// Line 1194: range 00000000160CEA38-00000000160CEBA8
google::protobuf::uint8 *__fastcall google::protobuf::io::CodedOutputStream::WriteLittleEndian32ToArray(
        google::protobuf::uint32 value,
        unsigned __int64 target)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  __int64 v5; // rax
  int v6; // edi
  char v8[80]; // [rsp+10h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 value:1193";
  *(_QWORD *)(v2 + 16) = google::protobuf::io::CodedOutputStream::WriteLittleEndian32ToArray;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 32) & 7) + 3) >= *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2 + 32);
  }
  v6 = *((_DWORD *)v4 - 8);
  if ( (char)(target & 7) >= *(_BYTE *)((target >> 3) + 0x7FFF8000) && *(_BYTE *)((target >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((target + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((target + 3) & 7) >= *(_BYTE *)(((target + 3) >> 3) + 0x7FFF8000) )
  {
    v6 = target;
    v5 = __asan_report_store_n(target, 4LL);
  }
  *(_DWORD *)target = v6;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (google::protobuf::uint8 *)(target + 4);
};

// Line 1207: range 00000000160CEBAA-00000000160CED04
google::protobuf::uint8 *__fastcall google::protobuf::io::CodedOutputStream::WriteLittleEndian64ToArray(
        google::protobuf::uint64 value,
        unsigned __int64 target)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  char v8[80]; // [rsp+10h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 10 value:1206";
  *(_QWORD *)(v2 + 16) = google::protobuf::io::CodedOutputStream::WriteLittleEndian64ToArray;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = value;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v2 + 32);
  v6 = *((_QWORD *)v4 - 4);
  if ( (char)(target & 7) >= *(_BYTE *)((target >> 3) + 0x7FFF8000) && *(_BYTE *)((target >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((target + 7) >> 3) + 0x7FFF8000) != 0
    && (char)((target + 7) & 7) >= *(_BYTE *)(((target + 7) >> 3) + 0x7FFF8000) )
  {
    v6 = target;
    v5 = __asan_report_store_n(target, 8LL);
  }
  *(_QWORD *)target = v6;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (google::protobuf::uint8 *)(target + 8);
};

// Line 1239: range 00000000160CED06-00000000160CEDD0
void __cdecl google::protobuf::io::CodedOutputStream::WriteVarint64(
        google::protobuf::io::CodedOutputStream *const this,
        google::protobuf::uint64 value)
{
  int v2; // edx
  google::protobuf::uint8 *target; // [rsp+20h] [rbp-10h]

  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buffer_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->buffer_size_);
  }
  if ( this->buffer_size_ <= 9 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(this, value);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->buffer_);
    target = this->buffer_;
    v2 = (unsigned int)google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(value, target) - (_DWORD)target;
    google::protobuf::io::CodedOutputStream::Advance(this, v2);
  }
};

// Line 1252: range 00000000160CEDD2-00000000160CEDF4
void __cdecl google::protobuf::io::CodedOutputStream::WriteTag(
        google::protobuf::io::CodedOutputStream *const this,
        google::protobuf::uint32 value)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(this, value);
};

// Line 1261: range 00000000160CEDF6-00000000160CEE24
size_t __cdecl google::protobuf::io::CodedOutputStream::VarintSize32(google::protobuf::uint32 value)
{
  return (9 * google::protobuf::Bits::Log2FloorNonZero(value | 1) + 73) >> 6;
};

// Line 1271: range 00000000160CEE26-00000000160CEE58
size_t __cdecl google::protobuf::io::CodedOutputStream::VarintSize64(google::protobuf::uint64 value)
{
  return (9 * google::protobuf::Bits::Log2FloorNonZero64(value | 1) + 73) >> 6;
};

// Line 1281: range 00000000160CEE5A-00000000160CEE7E
size_t __cdecl google::protobuf::io::CodedOutputStream::VarintSize32SignExtended(google::protobuf::int32 value)
{
  if ( value >= 0 )
    return google::protobuf::io::CodedOutputStream::VarintSize32(value);
  else
    return 10LL;
};

// Line 1311: range 00000000160CEE80-00000000160CEEC8
void __cdecl google::protobuf::io::CodedInputStream::Advance(
        google::protobuf::io::CodedInputStream *const this,
        int amount)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  this->buffer_ += amount;
};

// Line 1315: range 00000000160CEECA-00000000160CEF5E
void __cdecl google::protobuf::io::CodedOutputStream::Advance(
        google::protobuf::io::CodedOutputStream *const this,
        int amount)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->buffer_);
  this->buffer_ += amount;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buffer_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->buffer_size_);
  }
  this->buffer_size_ -= amount;
};

// Line 1353: range 00000000160CEF60-00000000160CEFC8
int __cdecl google::protobuf::io::CodedInputStream::BufferSize(
        const google::protobuf::io::CodedInputStream *const this)
{
  const google::protobuf::uint8 *buffer_end; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->buffer_end_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->buffer_end_);
  buffer_end = this->buffer_end_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return (_DWORD)buffer_end - LODWORD(this->buffer_);
};

// Line 1403: range 00000000160CEFCA-00000000160CF02B
bool __cdecl google::protobuf::io::CodedInputStream::Skip(
        google::protobuf::io::CodedInputStream *const this,
        int count)
{
  int original_buffer_size; // [rsp+1Ch] [rbp-4h]

  if ( count < 0 )
    return 0;
  original_buffer_size = google::protobuf::io::CodedInputStream::BufferSize(this);
  if ( count > original_buffer_size )
    return google::protobuf::io::CodedInputStream::SkipFallback(this, count, original_buffer_size);
  google::protobuf::io::CodedInputStream::Advance(this, count);
  return 1;
};
