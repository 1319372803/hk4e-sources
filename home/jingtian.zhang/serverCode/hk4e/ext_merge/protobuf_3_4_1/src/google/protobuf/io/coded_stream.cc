// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/io/coded_stream.cc

// Line 76: range 000000000C89DE60-000000000C89DE70
void __fastcall google::protobuf::io::CodedInputStream::~CodedInputStream(
        google::protobuf::io::CodedInputStream *const this)
{
  if ( this->input_ )
    google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(this);
};

// Line 85: range 000000000C89DDE0-000000000C89DE0E
void __fastcall google::protobuf::io::CodedOutputStream::EnableAliasing(
        google::protobuf::io::CodedOutputStream *const this,
        bool enabled)
{
  bool v2; // al
  __int64 (*v3)(void); // rdx

  v2 = enabled;
  if ( enabled
    && (v3 = (__int64 (*)(void))*((_QWORD *)this->output_->_vptr_ZeroCopyOutputStream + 6),
        v2 = 0,
        (char *)v3 != (char *)google::protobuf::io::ZeroCopyOutputStream::AllowsAliasing) )
  {
    this->aliasing_enabled_ = v3();
  }
  else
  {
    this->aliasing_enabled_ = v2;
  }
};

// Line 103: range 000000000C89DFD0-000000000C89E01E
bool __fastcall google::protobuf::io::CodedInputStream::CheckEntireMessageConsumedAndPopLimit(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::io::CodedInputStream::Limit limit)
{
  __int64 buffer_size_after_limit; // rax
  int total_bytes_read; // edx
  const google::protobuf::uint8 *v4; // rax
  bool legitimate_message_end; // r8
  int v6; // edx
  bool result; // al

  buffer_size_after_limit = this->buffer_size_after_limit_;
  total_bytes_read = this->total_bytes_read_;
  this->current_limit_ = limit;
  v4 = &this->buffer_end_[buffer_size_after_limit];
  if ( this->total_bytes_limit_ <= limit )
    limit = this->total_bytes_limit_;
  legitimate_message_end = this->legitimate_message_end_;
  this->buffer_end_ = v4;
  if ( limit >= total_bytes_read )
  {
    this->buffer_size_after_limit_ = 0;
    result = legitimate_message_end;
    this->legitimate_message_end_ = 0;
  }
  else
  {
    v6 = total_bytes_read - limit;
    this->legitimate_message_end_ = 0;
    this->buffer_size_after_limit_ = v6;
    this->buffer_end_ = &v4[-v6];
    return legitimate_message_end;
  }
  return result;
};

// Line 103: range 000000000C89DF70-000000000C89DFC2
bool __fastcall google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::io::CodedInputStream::Limit limit)
{
  __int64 buffer_size_after_limit; // rax
  int total_bytes_read; // edx
  const google::protobuf::uint8 *v4; // rax
  bool legitimate_message_end; // r8
  int v6; // edx
  bool result; // al

  buffer_size_after_limit = this->buffer_size_after_limit_;
  total_bytes_read = this->total_bytes_read_;
  this->current_limit_ = limit;
  v4 = &this->buffer_end_[buffer_size_after_limit];
  if ( this->total_bytes_limit_ <= limit )
    limit = this->total_bytes_limit_;
  legitimate_message_end = this->legitimate_message_end_;
  this->buffer_end_ = v4;
  if ( limit >= total_bytes_read )
  {
    ++this->recursion_budget_;
    result = legitimate_message_end;
    this->buffer_size_after_limit_ = 0;
    this->legitimate_message_end_ = 0;
  }
  else
  {
    v6 = total_bytes_read - limit;
    ++this->recursion_budget_;
    this->buffer_size_after_limit_ = v6;
    this->legitimate_message_end_ = 0;
    this->buffer_end_ = &v4[-v6];
    return legitimate_message_end;
  }
  return result;
};

// Line 103: range 000000000C89DF00-000000000C89DF43
void __fastcall google::protobuf::io::CodedInputStream::PopLimit(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::io::CodedInputStream::Limit limit)
{
  __int64 buffer_size_after_limit; // rax
  int total_bytes_read; // edx
  const google::protobuf::uint8 *v4; // rax
  int v5; // edx

  buffer_size_after_limit = this->buffer_size_after_limit_;
  total_bytes_read = this->total_bytes_read_;
  this->current_limit_ = limit;
  v4 = &this->buffer_end_[buffer_size_after_limit];
  if ( this->total_bytes_limit_ <= limit )
    limit = this->total_bytes_limit_;
  this->buffer_end_ = v4;
  if ( limit >= total_bytes_read )
  {
    this->buffer_size_after_limit_ = 0;
    this->legitimate_message_end_ = 0;
  }
  else
  {
    v5 = total_bytes_read - limit;
    this->legitimate_message_end_ = 0;
    this->buffer_size_after_limit_ = v5;
    this->buffer_end_ = &v4[-v5];
  }
};

// Line 147: range 000000000C89DF50-000000000C89DF65
std::pair<int,int> __fastcall google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(
        google::protobuf::io::CodedInputStream *const this,
        int byte_limit)
{
  --this->recursion_budget_;
  return (std::pair<int,int>)(((unsigned __int64)(unsigned int)this->recursion_budget_ << 32) | (unsigned int)google::protobuf::io::CodedInputStream::PushLimit(this, byte_limit));
};

// Line 150: range 000000000C89E810-000000000C89E85A
google::protobuf::io::CodedInputStream::Limit __fastcall google::protobuf::io::CodedInputStream::ReadLengthAndPushLimit(
        google::protobuf::io::CodedInputStream *const this)
{
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint32 v2; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  int v4; // esi

  buffer = this->buffer_;
  if ( this->buffer_ >= this->buffer_end_ )
  {
    v2 = 0;
  }
  else
  {
    v2 = *buffer;
    if ( *(char *)buffer >= 0 )
    {
      this->buffer_ = buffer + 1;
      return google::protobuf::io::CodedInputStream::PushLimit(this, v2);
    }
  }
  Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, v2);
  v4 = 0;
  if ( Varint32Fallback >= 0 )
    v4 = Varint32Fallback;
  return google::protobuf::io::CodedInputStream::PushLimit(this, v4);
};

// Line 170: range 000000000C89E020-000000000C89E040
int __fastcall google::protobuf::io::CodedInputStream::BytesUntilLimit(
        const google::protobuf::io::CodedInputStream *const this)
{
  google::protobuf::io::CodedInputStream::Limit current_limit; // edx

  current_limit = this->current_limit_;
  if ( current_limit == 0x7FFFFFFF )
    return -1;
  else
    return current_limit
         + this->buffer_size_after_limit_
         + LODWORD(this->buffer_end_)
         - LODWORD(this->buffer_)
         - this->total_bytes_read_;
};

// Line 188: range 000000000C89E0B0-000000000C89E0D0
int __fastcall google::protobuf::io::CodedInputStream::BytesUntilTotalBytesLimit(
        const google::protobuf::io::CodedInputStream *const this)
{
  int total_bytes_limit; // edx

  total_bytes_limit = this->total_bytes_limit_;
  if ( total_bytes_limit == 0x7FFFFFFF )
    return -1;
  else
    return total_bytes_limit
         + this->buffer_size_after_limit_
         + LODWORD(this->buffer_end_)
         - LODWORD(this->buffer_)
         - this->total_bytes_read_;
};

// Line 192: range 000000000C89E0E0-000000000C89E14A
void __fastcall google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(
        google::protobuf::io::CodedInputStream *this)
{
  google::protobuf::internal::LogMessage_0 *v1; // rax
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogFinisher v4; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v5; // [rsp+10h] [rbp-58h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(&v5, LOGLEVEL_ERROR_0, "google/protobuf/io/coded_stream.cc", 193);
  v1 = google::protobuf::internal::LogMessage::operator<<(
         &v5,
         "A protocol message was rejected because it was too big (more than ");
  v2 = google::protobuf::internal::LogMessage::operator<<(v1, this->total_bytes_limit_);
  v3 = google::protobuf::internal::LogMessage::operator<<(
         v2,
         " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in g"
         "oogle/protobuf/io/coded_stream.h.");
  google::protobuf::internal::LogFinisher::operator=(&v4, v3);
  google::protobuf::internal::LogMessage::~LogMessage(&v5);
};

// Line 193: range 000000000C72A6B2-000000000C72A6BF
void __fastcall __noreturn google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 201: range 000000000C89E150-000000000C89E1BF
bool __fastcall google::protobuf::io::CodedInputStream::SkipFallback(
        google::protobuf::io::CodedInputStream *const this,
        int count,
        int original_buffer_size)
{
  int current_limit; // eax
  int v4; // esi
  bool v5; // cc
  int total_bytes_read; // edx
  int v7; // r8d

  if ( this->buffer_size_after_limit_ > 0 )
  {
    this->buffer_ += original_buffer_size;
    return 0;
  }
  current_limit = this->current_limit_;
  v4 = count - original_buffer_size;
  v5 = this->total_bytes_limit_ <= current_limit;
  this->buffer_ = 0LL;
  if ( v5 )
    current_limit = this->total_bytes_limit_;
  total_bytes_read = this->total_bytes_read_;
  this->buffer_end_ = 0LL;
  v7 = current_limit - total_bytes_read;
  if ( v4 <= current_limit - total_bytes_read )
  {
    this->total_bytes_read_ = v4 + total_bytes_read;
    return (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *))this->input_->_vptr_ZeroCopyInputStream
            + 4))(this->input_);
  }
  if ( v7 <= 0 )
    return 0;
  this->total_bytes_read_ = current_limit;
  (*((void (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *, _QWORD))this->input_->_vptr_ZeroCopyInputStream
   + 4))(
    this->input_,
    (unsigned int)v7);
  return 0;
};

// Line 227: range 000000000C89E470-000000000C89E4AC
bool __fastcall google::protobuf::io::CodedInputStream::GetDirectBufferPointer(
        google::protobuf::io::CodedInputStream *const this,
        const void **data,
        int *size)
{
  const google::protobuf::uint8 *buffer; // rax
  int v5; // edx
  bool result; // al

  buffer = this->buffer_;
  if ( LODWORD(this->buffer_end_) != (unsigned int)this->buffer_ )
    goto LABEL_2;
  result = google::protobuf::io::CodedInputStream::Refresh(this);
  if ( result )
  {
    buffer = this->buffer_;
LABEL_2:
    *data = buffer;
    v5 = (int)&this->buffer_end_[-(_DWORD)buffer];
    result = 1;
    *size = v5;
  }
  return result;
};

// Line 235: range 000000000C89E350-000000000C89E3BB
bool __fastcall google::protobuf::io::CodedInputStream::ReadRaw(
        google::protobuf::io::CodedInputStream *const this,
        void *buffer,
        int size)
{
  void *v6; // rdi
  bool result; // al
  const google::protobuf::uint8 *v8; // rsi
  signed __int64 v9; // rbx

  while ( 1 )
  {
    v8 = this->buffer_;
    v9 = this->buffer_end_ - this->buffer_;
    if ( size <= (int)v9 )
      break;
    v6 = buffer;
    size -= v9;
    buffer = (char *)buffer + (int)v9;
    memcpy(v6, v8, (int)v9);
    this->buffer_ += (int)v9;
    result = google::protobuf::io::CodedInputStream::Refresh(this);
    if ( !result )
      return result;
  }
  memcpy(buffer, v8, size);
  this->buffer_ += size;
  return 1;
};

// Line 240: range 000000000C89ED70-000000000C89EDD2
bool __fastcall google::protobuf::io::CodedInputStream::ReadString(
        google::protobuf::io::CodedInputStream *const this,
        std::string *buffer,
        int size)
{
  size_t v4; // rbx

  if ( size < 0 )
    return 0;
  if ( size > LODWORD(this->buffer_end_) - LODWORD(this->buffer_) )
    return google::protobuf::io::CodedInputStream::ReadStringFallback(this, buffer, size);
  v4 = size;
  std::string::resize(buffer, size, 0LL);
  memcpy(buffer->_M_dataplus._M_p, this->buffer_, v4);
  this->buffer_ += v4;
  return 1;
};

// Line 244: range 000000000C89EC30-000000000C89ED69
bool __fastcall google::protobuf::io::CodedInputStream::ReadStringFallback(
        google::protobuf::io::CodedInputStream *const this,
        std::string *buffer,
        int size)
{
  std::string::pointer M_p; // rax
  int total_bytes_limit; // eax
  google::protobuf::io::CodedInputStream::Limit current_limit; // edx
  const char *v8; // rsi
  const google::protobuf::uint8 *buffer_end; // rbx
  bool result; // al
  int v11; // ebx
  int v12; // eax

  if ( buffer->_M_string_length )
  {
    M_p = buffer->_M_dataplus._M_p;
    buffer->_M_string_length = 0LL;
    *M_p = 0;
  }
  total_bytes_limit = this->total_bytes_limit_;
  current_limit = this->current_limit_;
  v8 = (const char *)this->buffer_;
  buffer_end = this->buffer_end_;
  if ( total_bytes_limit >= current_limit )
  {
    if ( current_limit == 0x7FFFFFFF )
      goto LABEL_8;
    total_bytes_limit = this->current_limit_;
  }
  v12 = this->buffer_size_after_limit_ + (_DWORD)buffer_end - (_DWORD)v8 + total_bytes_limit - this->total_bytes_read_;
  if ( size <= v12 && v12 > 0 && size > 0 )
  {
    std::string::reserve(buffer, size);
    v8 = (const char *)this->buffer_;
    buffer_end = this->buffer_end_;
  }
LABEL_8:
  while ( 1 )
  {
    v11 = (_DWORD)buffer_end - (_DWORD)v8;
    if ( size <= v11 )
      break;
    if ( v11 )
    {
      if ( 0x3FFFFFFFFFFFFFFFLL - buffer->_M_string_length < v11 )
        goto LABEL_19;
      std::string::_M_append(buffer, v8, v11);
      v8 = (const char *)this->buffer_;
    }
    size -= v11;
    this->buffer_ = (const google::protobuf::uint8 *)&v8[v11];
    result = google::protobuf::io::CodedInputStream::Refresh(this);
    if ( !result )
      return result;
    v8 = (const char *)this->buffer_;
    buffer_end = this->buffer_end_;
  }
  if ( size > 0x3FFFFFFFFFFFFFFFLL - buffer->_M_string_length )
LABEL_19:
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(buffer, v8, size);
  this->buffer_ += size;
  return 1;
};

// Line 278: range 000000000C89E3C0-000000000C89E408
bool __fastcall google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::uint32 *value)
{
  char *buffer; // rdx
  bool result; // al
  google::protobuf::uint8 bytes[4]; // [rsp+Ch] [rbp-Ch] BYREF

  buffer = (char *)this->buffer_;
  if ( (unsigned __int64)(int)(this->buffer_end_ - this->buffer_) > 3 )
  {
    this->buffer_ = (const google::protobuf::uint8 *)(buffer + 4);
LABEL_3:
    *value = *(_DWORD *)buffer;
    return 1;
  }
  result = google::protobuf::io::CodedInputStream::ReadRaw(this, bytes, 4);
  if ( result )
  {
    buffer = (char *)bytes;
    goto LABEL_3;
  }
  return result;
};

// Line 295: range 000000000C89E410-000000000C89E460
bool __fastcall google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::uint64 *value)
{
  char *buffer; // rdx
  bool result; // al
  google::protobuf::uint8 bytes[8]; // [rsp+8h] [rbp-10h] BYREF

  buffer = (char *)this->buffer_;
  if ( (unsigned __int64)(int)(this->buffer_end_ - this->buffer_) > 7 )
  {
    this->buffer_ = (const google::protobuf::uint8 *)(buffer + 8);
LABEL_3:
    *value = *(_QWORD *)buffer;
    return 1;
  }
  result = google::protobuf::io::CodedInputStream::ReadRaw(this, bytes, 8);
  if ( result )
  {
    buffer = (char *)bytes;
    goto LABEL_3;
  }
  return result;
};

// Line 400: range 000000000C89E720-000000000C89E733
bool __fastcall google::protobuf::io::CodedInputStream::ReadVarint32Slow(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::uint32 *value)
{
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  google::protobuf::uint32 first; // r8d
  bool result; // al

  Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this);
  first = Varint64Fallback.first;
  result = Varint64Fallback.second;
  *value = first;
  return result;
};

// Line 409: range 000000000C89E740-000000000C89E80B
google::protobuf::int64 __fastcall google::protobuf::io::CodedInputStream::ReadVarint32Fallback(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::uint32 first_byte_or_zero)
{
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  int v3; // ecx
  int v4; // esi
  const google::protobuf::uint8 *v5; // rcx
  int v6; // esi
  __int64 v7; // rdx

  Varint64Fallback.first = (unsigned __int64)this->buffer_end_;
  *(_QWORD *)&Varint64Fallback.second = this->buffer_;
  if ( LODWORD(this->buffer_end_) - LODWORD(this->buffer_) <= 9
    && (*(_QWORD *)&Varint64Fallback.second >= Varint64Fallback.first || *(char *)(Varint64Fallback.first - 1) < 0) )
  {
    Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this);
    if ( Varint64Fallback.second )
      Varint64Fallback.first = LODWORD(Varint64Fallback.first);
    else
      Varint64Fallback.first = -1LL;
  }
  else
  {
    v3 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
    Varint64Fallback.first = first_byte_or_zero + (v3 << 7) - 128;
    if ( (v3 & 0x80u) == 0 )
    {
      v5 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 2LL);
    }
    else
    {
      v4 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 2LL);
      Varint64Fallback.first = (unsigned int)(LODWORD(Varint64Fallback.first) + (v4 << 14) - 0x4000);
      v5 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 3LL);
      if ( (v4 & 0x80u) != 0 )
      {
        v6 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 3LL);
        Varint64Fallback.first = (unsigned int)(LODWORD(Varint64Fallback.first) + (v6 << 21) - 0x200000);
        v5 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 4LL);
        if ( (v6 & 0x80u) != 0 )
        {
          v5 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 5LL);
          Varint64Fallback.first = LODWORD(Varint64Fallback.first)
                                 + (*(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 4LL) << 28)
                                 - 0x10000000;
          if ( *(char *)(*(_QWORD *)&Varint64Fallback.second + 4LL) < 0 )
          {
            v7 = *(_QWORD *)&Varint64Fallback.second + 10LL;
            while ( *(char *)v5++ < 0 )
            {
              if ( v5 == (const google::protobuf::uint8 *)v7 )
              {
                Varint64Fallback.first = -1LL;
                return Varint64Fallback.first;
              }
            }
          }
        }
      }
    }
    this->buffer_ = v5;
  }
  return Varint64Fallback.first;
};

// Line 430: range 000000000C89E860-000000000C89E885
int __fastcall google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntSlow(
        google::protobuf::io::CodedInputStream *const this)
{
  std::pair<long unsigned int,bool> Varint64Fallback; // rax

  Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this);
  if ( !Varint64Fallback.second || Varint64Fallback.first > 0x7FFFFFFF )
    LODWORD(Varint64Fallback.first) = -1;
  return Varint64Fallback.first;
};

// Line 439: range 000000000C89E890-000000000C89EA80
int __fastcall google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(
        google::protobuf::io::CodedInputStream *const this)
{
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  int v2; // esi
  int v3; // r8d
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // r9d
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // rcx
  int v15; // r8d
  const google::protobuf::uint8 *v16; // rdx
  unsigned __int64 v17; // rcx

  Varint64Fallback.first = (unsigned __int64)this->buffer_end_;
  *(_QWORD *)&Varint64Fallback.second = this->buffer_;
  if ( LODWORD(this->buffer_end_) - LODWORD(this->buffer_) <= 9
    && (*(_QWORD *)&Varint64Fallback.second >= Varint64Fallback.first || *(char *)(Varint64Fallback.first - 1) < 0) )
  {
    Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this);
    if ( !Varint64Fallback.second || Varint64Fallback.first > 0x7FFFFFFF )
      LODWORD(Varint64Fallback.first) = -1;
  }
  else
  {
    LODWORD(Varint64Fallback.first) = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second;
    if ( SLOBYTE(Varint64Fallback.first) >= 0 )
    {
      v16 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
    }
    else
    {
      v2 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
      LODWORD(Varint64Fallback.first) = LODWORD(Varint64Fallback.first) + (v2 << 7) - 128;
      if ( (v2 & 0x80u) == 0 )
      {
        this->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 2LL);
        return Varint64Fallback.first;
      }
      v3 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 2LL);
      v4 = LODWORD(Varint64Fallback.first) + (v3 << 14) - 0x4000;
      if ( (v3 & 0x80u) == 0 )
      {
        v16 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 3LL);
        v17 = 0LL;
      }
      else
      {
        v5 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 3LL);
        v4 = v4 + (v5 << 21) - 0x200000;
        if ( (v5 & 0x80u) == 0 )
        {
          v16 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 4LL);
          v17 = 0LL;
        }
        else
        {
          v6 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 4LL);
          v4 -= 0x10000000;
          if ( (v6 & 0x80u) == 0 )
          {
            v16 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 5LL);
            v17 = (unsigned __int64)(unsigned __int8)v6 << 28;
          }
          else
          {
            v7 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 5LL);
            v8 = (unsigned int)(v6 + (v7 << 7) - 128);
            if ( (v7 & 0x80u) == 0 )
            {
              v16 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 6LL);
              v17 = v8 << 28;
            }
            else
            {
              v9 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 6LL);
              v10 = (unsigned int)(v8 + (v9 << 14) - 0x4000);
              if ( (v9 & 0x80u) == 0 )
              {
                v16 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 7LL);
                v17 = v10 << 28;
              }
              else
              {
                v11 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 7LL);
                v12 = (unsigned int)(v10 + (v11 << 21) - 0x200000);
                if ( (v11 & 0x80u) == 0 )
                {
                  v16 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 8LL);
                  v17 = v12 << 28;
                }
                else
                {
                  v13 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 8LL);
                  v14 = (unsigned int)(v12 - 0x10000000);
                  if ( (v13 & 0x80u) == 0 )
                  {
                    Varint64Fallback.first = (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second
                                                                                  + 8LL) << 56;
                    *(_QWORD *)&Varint64Fallback.second += 9LL;
                    v17 = Varint64Fallback.first | (v14 << 28);
                  }
                  else
                  {
                    v15 = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 9LL);
                    LODWORD(Varint64Fallback.first) = -1;
                    if ( (v15 & 0x80u) != 0 )
                      return Varint64Fallback.first;
                    v16 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 10LL);
                    v17 = ((unsigned __int64)(unsigned int)(v13 + (v15 << 7) - 128) << 56) | (v14 << 28);
                  }
                }
              }
            }
          }
        }
      }
      Varint64Fallback.first = v17 | v4;
      if ( Varint64Fallback.first > 0x7FFFFFFF )
      {
        LODWORD(Varint64Fallback.first) = -1;
        return Varint64Fallback.first;
      }
    }
    this->buffer_ = v16;
  }
  return Varint64Fallback.first;
};

// Line 456: range 000000000C89EA90-000000000C89EB1F
google::protobuf::uint32 __fastcall google::protobuf::io::CodedInputStream::ReadTagSlow(
        google::protobuf::io::CodedInputStream *const this)
{
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  int total_bytes_limit; // edx

  *(_QWORD *)&Varint64Fallback.second = this->buffer_;
  Varint64Fallback.first = (unsigned __int64)this->buffer_end_;
  if ( this->buffer_ == (const google::protobuf::uint8 *)Varint64Fallback.first )
  {
    if ( !(unsigned __int8)google::protobuf::io::CodedInputStream::Refresh(this) )
    {
      total_bytes_limit = this->total_bytes_limit_;
      this->legitimate_message_end_ = this->total_bytes_read_ - this->buffer_size_after_limit_ < total_bytes_limit
                                   || this->current_limit_ == total_bytes_limit;
LABEL_5:
      LODWORD(Varint64Fallback.first) = 0;
      return Varint64Fallback.first;
    }
    *(_QWORD *)&Varint64Fallback.second = this->buffer_;
    Varint64Fallback.first = (unsigned __int64)this->buffer_end_;
  }
  if ( *(_QWORD *)&Varint64Fallback.second < Varint64Fallback.first )
  {
    LODWORD(Varint64Fallback.first) = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second;
    if ( SLOBYTE(Varint64Fallback.first) >= 0 )
    {
      this->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
      return Varint64Fallback.first;
    }
  }
  Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this);
  if ( !Varint64Fallback.second )
    goto LABEL_5;
  return Varint64Fallback.first;
};

// Line 483: range 000000000C89EB30-000000000C89EC2A
google::protobuf::uint32 __fastcall google::protobuf::io::CodedInputStream::ReadTagFallback(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::uint32 first_byte_or_zero)
{
  const google::protobuf::uint8 *buffer; // rax
  signed __int64 v3; // rdx
  int v4; // ecx
  google::protobuf::uint32 v5; // r8d
  int v6; // ecx
  const google::protobuf::uint8 *v7; // rdx
  int v8; // ecx
  const google::protobuf::uint8 *v9; // rax
  int buffer_size_after_limit; // edx
  int total_bytes_read; // eax

  buffer = this->buffer_;
  v3 = this->buffer_end_ - this->buffer_;
  if ( (int)v3 <= 9 )
  {
    if ( (int)v3 <= 0 )
    {
      if ( !(_DWORD)v3 )
      {
        buffer_size_after_limit = this->buffer_size_after_limit_;
        total_bytes_read = this->total_bytes_read_;
        if ( (buffer_size_after_limit > 0 || this->current_limit_ == total_bytes_read)
          && total_bytes_read - buffer_size_after_limit < this->total_bytes_limit_ )
        {
          this->legitimate_message_end_ = 1;
          return 0;
        }
      }
    }
    else if ( *((char *)this->buffer_end_ - 1) >= 0 )
    {
      goto LABEL_4;
    }
    return google::protobuf::io::CodedInputStream::ReadTagSlow(this);
  }
LABEL_4:
  if ( !first_byte_or_zero )
  {
    this->buffer_ = buffer + 1;
    return 0;
  }
  v4 = buffer[1];
  v5 = first_byte_or_zero + (v4 << 7) - 128;
  if ( (v4 & 0x80u) == 0 )
  {
    v7 = buffer + 2;
  }
  else
  {
    v6 = buffer[2];
    v5 = v5 + (v6 << 14) - 0x4000;
    v7 = buffer + 3;
    if ( (v6 & 0x80u) != 0 )
    {
      v8 = buffer[3];
      v5 = v5 + (v8 << 21) - 0x200000;
      v7 = buffer + 4;
      if ( (v8 & 0x80u) != 0 )
      {
        v7 = buffer + 5;
        v5 = v5 + (buffer[4] << 28) - 0x10000000;
        if ( *((char *)buffer + 4) < 0 )
        {
          v9 = buffer + 10;
          while ( *(char *)v7++ < 0 )
          {
            if ( v9 == v7 )
              return 0;
          }
        }
      }
    }
  }
  this->buffer_ = v7;
  return v5;
};

// Line 519: range 000000000C89E4B0-000000000C89E52E
bool __fastcall google::protobuf::io::CodedInputStream::ReadVarint64Slow(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::uint64 *value)
{
  google::protobuf::uint64 v2; // r13
  int v3; // ebp
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  char v7; // di

  v2 = 0LL;
  v3 = 0;
  buffer = this->buffer_;
  buffer_end = this->buffer_end_;
  while ( 1 )
  {
    while ( buffer == buffer_end )
    {
      if ( !(unsigned __int8)google::protobuf::io::CodedInputStream::Refresh(this) )
        goto LABEL_7;
      buffer = this->buffer_;
      buffer_end = this->buffer_end_;
    }
    v7 = *buffer++;
    this->buffer_ = buffer;
    v2 |= (unsigned __int64)(v7 & 0x7F) << v3;
    if ( v7 >= 0 )
      break;
    v3 += 7;
    if ( v3 == 70 )
    {
LABEL_7:
      *value = 0LL;
      return 0;
    }
  }
  *value = v2;
  return 1;
};

// Line 549: range 000000000C89E530-000000000C89E713
std::pair<long unsigned int,bool> __fastcall google::protobuf::io::CodedInputStream::ReadVarint64Fallback(
        google::protobuf::io::CodedInputStream *const this)
{
  const google::protobuf::uint8 *buffer_end; // rdx
  const google::protobuf::uint8 *buffer; // rax
  unsigned int v3; // edx
  int v4; // esi
  unsigned int v5; // edx
  int v6; // esi
  int v7; // esi
  __int64 v8; // r8
  int v9; // esi
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rsi
  int v17; // ecx
  const google::protobuf::uint8 *v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  bool Varint64Slow; // r8
  unsigned __int64 v22; // r8
  google::protobuf::uint64 value[2]; // [rsp+0h] [rbp-10h] BYREF
  std::pair<long unsigned int,bool> result; // 0:rax.9

  buffer_end = this->buffer_end_;
  buffer = this->buffer_;
  if ( LODWORD(this->buffer_end_) - LODWORD(this->buffer_) <= 9
    && (buffer >= buffer_end || *((char *)buffer_end - 1) < 0) )
  {
    Varint64Slow = google::protobuf::io::CodedInputStream::ReadVarint64Slow(this, value);
    result.first = value[0];
    result.second = Varint64Slow;
  }
  else
  {
    v3 = *buffer;
    if ( (v3 & 0x80u) == 0 )
    {
      v18 = buffer + 1;
      v19 = 0LL;
      goto LABEL_16;
    }
    v4 = buffer[1];
    v5 = v3 + (v4 << 7) - 128;
    if ( (v4 & 0x80u) == 0 )
    {
      this->buffer_ = buffer + 2;
      result.first = v5;
      result.second = 1;
    }
    else
    {
      v6 = buffer[2];
      v3 = v5 + (v6 << 14) - 0x4000;
      if ( (v6 & 0x80u) == 0 )
      {
        v18 = buffer + 3;
        v19 = 0LL;
        goto LABEL_16;
      }
      v7 = buffer[3];
      v3 = v3 + (v7 << 21) - 0x200000;
      if ( (v7 & 0x80u) == 0 )
      {
        v18 = buffer + 4;
        v19 = 0LL;
        goto LABEL_16;
      }
      v8 = buffer[4];
      v3 -= 0x10000000;
      if ( (v8 & 0x80u) == 0LL )
      {
        v18 = buffer + 5;
        v19 = v8 << 28;
        goto LABEL_16;
      }
      v9 = buffer[5];
      v10 = (unsigned int)(v8 + (v9 << 7) - 128);
      if ( (v9 & 0x80u) == 0 )
      {
        v18 = buffer + 6;
        v19 = v10 << 28;
        goto LABEL_16;
      }
      v11 = buffer[6];
      v12 = (unsigned int)(v10 + (v11 << 14) - 0x4000);
      if ( (v11 & 0x80u) == 0 )
      {
        v18 = buffer + 7;
        v19 = v12 << 28;
        goto LABEL_16;
      }
      v13 = buffer[7];
      v14 = (unsigned int)(v12 + (v13 << 21) - 0x200000);
      if ( (v13 & 0x80u) == 0 )
      {
        v18 = buffer + 8;
        v19 = v14 << 28;
        goto LABEL_16;
      }
      v15 = buffer[8];
      v16 = (unsigned int)(v14 - 0x10000000);
      if ( (v15 & 0x80u) == 0 )
      {
        v22 = (unsigned __int64)buffer[8] << 56;
        v18 = buffer + 9;
        v19 = v22 | ((unsigned __int64)(unsigned int)v16 << 28);
        goto LABEL_16;
      }
      v17 = buffer[9];
      if ( (v17 & 0x80u) == 0 )
      {
        v18 = buffer + 10;
        v19 = (v16 << 28) | ((unsigned __int64)(unsigned int)(v15 + (v17 << 7) - 128) << 56);
LABEL_16:
        this->buffer_ = v18;
        v20 = v3;
        result.second = 1;
        result.first = v19 | v20;
        return result;
      }
      result.first = 0LL;
      result.second = 0;
    }
  }
  return result;
};

// Line 567: range 000000000C89E1C0-000000000C89E33F
__int64 __fastcall google::protobuf::io::CodedInputStream::Refresh(google::protobuf::io::CodedInputStream *this)
{
  int buffer_size_after_limit; // edx
  int total_bytes_read; // eax
  google::protobuf::io::ZeroCopyInputStream *input; // rbx
  int v4; // eax
  unsigned int v5; // r12d
  int total_bytes_limit; // ecx
  const google::protobuf::uint8 *v8; // rcx
  const google::protobuf::uint8 *buffer_end; // rcx
  int v10; // edx
  int v11; // esi
  int v12; // eax
  const google::protobuf::uint8 *v13; // rcx
  int current_limit; // edx
  int v15; // eax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogFinisher v17; // [rsp+3h] [rbp-65h] BYREF
  int v18; // [rsp+4h] [rbp-64h] BYREF
  const google::protobuf::uint8 *v19; // [rsp+8h] [rbp-60h] BYREF
  google::protobuf::internal::LogMessage_0 v20; // [rsp+10h] [rbp-58h] BYREF

  buffer_size_after_limit = this->buffer_size_after_limit_;
  total_bytes_read = this->total_bytes_read_;
  if ( buffer_size_after_limit <= 0 && this->overflow_bytes_ <= 0 && this->current_limit_ != total_bytes_read )
  {
    input = this->input_;
    do
    {
      v5 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *, const google::protobuf::uint8 **, int *))input->_vptr_ZeroCopyInputStream
            + 2))(
             input,
             &v19,
             &v18);
      if ( !(_BYTE)v5 )
      {
        this->buffer_ = 0LL;
        this->buffer_end_ = 0LL;
        return v5;
      }
      v4 = v18;
    }
    while ( !v18 );
    v8 = v19;
    this->buffer_ = v19;
    buffer_end = &v8[v4];
    this->buffer_end_ = buffer_end;
    if ( v4 < 0 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v20,
        LOGLEVEL_FATAL_0,
        "google/protobuf/io/coded_stream.cc",
        589);
      v16 = google::protobuf::internal::LogMessage::operator<<(&v20, "CHECK failed: (buffer_size) >= (0): ");
      google::protobuf::internal::LogFinisher::operator=(&v17, v16);
      google::protobuf::internal::LogMessage::~LogMessage(&v20);
      v4 = v18;
      buffer_end = this->buffer_end_;
    }
    v10 = this->total_bytes_read_;
    v11 = 0x7FFFFFFF - v4;
    if ( v10 > 0x7FFFFFFF - v4 )
    {
      this->total_bytes_read_ = 0x7FFFFFFF;
      this->overflow_bytes_ = v10 - v11;
      buffer_end -= v10 - v11;
      v12 = 0x7FFFFFFF;
    }
    else
    {
      v12 = v10 + v4;
      this->total_bytes_read_ = v12;
    }
    v13 = &buffer_end[this->buffer_size_after_limit_];
    current_limit = this->current_limit_;
    if ( this->total_bytes_limit_ <= current_limit )
      current_limit = this->total_bytes_limit_;
    this->buffer_end_ = v13;
    if ( v12 <= current_limit )
    {
      this->buffer_size_after_limit_ = 0;
    }
    else
    {
      v15 = v12 - current_limit;
      this->buffer_size_after_limit_ = v15;
      this->buffer_end_ = &v13[-v15];
    }
    return v5;
  }
  total_bytes_limit = this->total_bytes_limit_;
  v5 = 0;
  if ( total_bytes_limit > total_bytes_read - buffer_size_after_limit || total_bytes_limit == this->current_limit_ )
    return v5;
  google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(this);
  return 0LL;
};

// Line 589: range 000000000C72A6C4-000000000C72A6D1
void __fastcall __noreturn google::protobuf::io::CodedInputStream::Refresh(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 629: range 000000000C89F240-000000000C89F26B
void __fastcall google::protobuf::io::CodedOutputStream::CodedOutputStream(
        google::protobuf::io::CodedOutputStream *const this,
        google::protobuf::io::ZeroCopyOutputStream *output)
{
  this->output_ = output;
  this->buffer_ = 0LL;
  *(_QWORD *)&this->buffer_size_ = 0LL;
  *(_WORD *)&this->had_error_ = 0;
  this->serialization_deterministic_is_overridden_ = 0;
  google::protobuf::io::CodedOutputStream::Refresh(this);
  this->had_error_ = 0;
};

// Line 646: range 000000000C89F270-000000000C89F2A6
void __fastcall google::protobuf::io::CodedOutputStream::CodedOutputStream(
        google::protobuf::io::CodedOutputStream *const this,
        google::protobuf::io::ZeroCopyOutputStream *output,
        bool do_eager_refresh)
{
  this->output_ = output;
  this->buffer_ = 0LL;
  *(_QWORD *)&this->buffer_size_ = 0LL;
  *(_WORD *)&this->had_error_ = 0;
  this->serialization_deterministic_is_overridden_ = 0;
  if ( do_eager_refresh )
  {
    google::protobuf::io::CodedOutputStream::Refresh(this);
    this->had_error_ = 0;
  }
};

// Line 662: range 000000000C89EE00-000000000C89EE30
void __fastcall google::protobuf::io::CodedOutputStream::Trim(google::protobuf::io::CodedOutputStream *const this)
{
  int buffer_size; // eax

  if ( this->buffer_size_ > 0 )
  {
    (*((void (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *))this->output_->_vptr_ZeroCopyOutputStream + 3))(this->output_);
    buffer_size = this->buffer_size_;
    this->buffer_ = 0LL;
    this->total_bytes_ -= buffer_size;
    this->buffer_size_ = 0;
  }
};

// Line 662: range 000000000C89EDE0-000000000C89EDF0
void __fastcall google::protobuf::io::CodedOutputStream::~CodedOutputStream(
        google::protobuf::io::CodedOutputStream *const this)
{
  if ( this->buffer_size_ > 0 )
    (*((void (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *))this->output_->_vptr_ZeroCopyOutputStream + 3))(this->output_);
};

// Line 671: range 000000000C89EE40-000000000C89EEDC
bool __fastcall google::protobuf::io::CodedOutputStream::Skip(
        google::protobuf::io::CodedOutputStream *const this,
        int count)
{
  bool result; // al
  int v3; // ebp
  int buffer_size; // r12d
  google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint8 *v6; // [rsp+0h] [rbp-30h] BYREF

  result = 0;
  if ( count >= 0 )
  {
    v3 = count;
    buffer_size = this->buffer_size_;
    if ( count <= buffer_size )
    {
      buffer = this->buffer_;
LABEL_5:
      this->buffer_size_ = buffer_size - v3;
      this->buffer_ = &buffer[v3];
      return 1;
    }
    else
    {
      while ( 1 )
      {
        result = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *, google::protobuf::uint8 **, int *))this->output_->_vptr_ZeroCopyOutputStream
                  + 2))(
                   this->output_,
                   &v6,
                   &this->buffer_size_);
        if ( !result )
          break;
        buffer = v6;
        v3 -= buffer_size;
        buffer_size = this->buffer_size_;
        this->total_bytes_ += buffer_size;
        this->buffer_ = buffer;
        if ( v3 <= buffer_size )
          goto LABEL_5;
      }
      this->buffer_ = 0LL;
      this->buffer_size_ = 0;
      this->had_error_ = 1;
    }
  }
  return result;
};

// Line 682: range 000000000C89EEE0-000000000C89EF5B
bool __fastcall google::protobuf::io::CodedOutputStream::GetDirectBufferPointer(
        google::protobuf::io::CodedOutputStream *const this,
        void **data,
        int *size)
{
  int buffer_size; // eax
  bool result; // al
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *v7; // [rsp+8h] [rbp-20h] BYREF

  buffer_size = this->buffer_size_;
  if ( buffer_size )
  {
    buffer = this->buffer_;
    goto LABEL_5;
  }
  result = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *, google::protobuf::uint8 **, int *))this->output_->_vptr_ZeroCopyOutputStream
            + 2))(
             this->output_,
             &v7,
             &this->buffer_size_);
  if ( result )
  {
    buffer = v7;
    buffer_size = this->buffer_size_;
    this->total_bytes_ += buffer_size;
    this->buffer_ = buffer;
LABEL_5:
    *data = buffer;
    *size = buffer_size;
    return 1;
  }
  this->buffer_ = 0LL;
  this->buffer_size_ = 0;
  this->had_error_ = 1;
  return result;
};

// Line 690: range 000000000C89EF60-000000000C89F007
void __fastcall google::protobuf::io::CodedOutputStream::WriteRaw(
        google::protobuf::io::CodedOutputStream *const this,
        const void *data,
        int size)
{
  size_t buffer_size; // rdx
  void *buffer; // rdi
  __int64 v8; // r14
  void *dest; // [rsp+8h] [rbp-30h] BYREF

  buffer_size = this->buffer_size_;
  buffer = this->buffer_;
  if ( size <= (int)buffer_size )
  {
LABEL_4:
    memcpy(buffer, data, size);
    this->buffer_ += size;
    this->buffer_size_ -= size;
  }
  else
  {
    while ( 1 )
    {
      memcpy(buffer, data, buffer_size);
      v8 = this->buffer_size_;
      if ( !(*((unsigned __int8 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *, void **, int *))this->output_->_vptr_ZeroCopyOutputStream
             + 2))(
              this->output_,
              &dest,
              &this->buffer_size_) )
        break;
      buffer = dest;
      buffer_size = this->buffer_size_;
      size -= v8;
      data = (char *)data + v8;
      this->total_bytes_ += buffer_size;
      this->buffer_ = (google::protobuf::uint8 *)buffer;
      if ( size <= (int)buffer_size )
        goto LABEL_4;
    }
    this->buffer_ = 0LL;
    this->buffer_size_ = 0;
    this->had_error_ = 1;
  }
};

// Line 703: range 000000000C89F010-000000000C89F02A
google::protobuf::uint8 *__fastcall google::protobuf::io::CodedOutputStream::WriteRawToArray(
        const void *data,
        int size,
        google::protobuf::uint8 *target)
{
  return (google::protobuf::uint8 *)memcpy(target, data, size) + size;
};

// Line 709: range 000000000C89F030-000000000C89F0A2
void __fastcall google::protobuf::io::CodedOutputStream::WriteAliasedRaw(
        google::protobuf::io::CodedOutputStream *const this,
        const void *data,
        int size)
{
  int buffer_size; // esi
  google::protobuf::io::ZeroCopyOutputStream *output; // rdi
  int (**vptr_ZeroCopyOutputStream)(...); // rcx
  int v8; // eax
  int total_bytes; // eax
  int sizea; // [rsp+Ch] [rbp-1Ch]

  buffer_size = this->buffer_size_;
  if ( buffer_size > size )
  {
    google::protobuf::io::CodedOutputStream::WriteRaw(this, data, size);
  }
  else
  {
    output = this->output_;
    vptr_ZeroCopyOutputStream = output->_vptr_ZeroCopyOutputStream;
    if ( buffer_size <= 0 )
    {
      total_bytes = this->total_bytes_;
    }
    else
    {
      sizea = size;
      vptr_ZeroCopyOutputStream[3]();
      output = this->output_;
      v8 = this->total_bytes_;
      this->buffer_ = 0LL;
      total_bytes = v8 - this->buffer_size_;
      size = sizea;
      this->buffer_size_ = 0;
      vptr_ZeroCopyOutputStream = output->_vptr_ZeroCopyOutputStream;
    }
    this->total_bytes_ = size + total_bytes;
    this->had_error_ |= (unsigned __int8)vptr_ZeroCopyOutputStream[5](output, data) ^ 1;
  }
};

// Line 724: range 000000000C89F0B0-000000000C89F0EF
void __fastcall google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
        google::protobuf::io::CodedOutputStream *const this,
        google::protobuf::uint32 value)
{
  google::protobuf::uint8 bytes[4]; // [rsp+0h] [rbp-Ch] BYREF

  if ( (unsigned __int64)this->buffer_size_ > 3 )
  {
    *(_DWORD *)this->buffer_ = value;
    this->buffer_ += 4;
    this->buffer_size_ -= 4;
  }
  else
  {
    *(_DWORD *)bytes = value;
    google::protobuf::io::CodedOutputStream::WriteRaw(this, bytes, 4);
  }
};

// Line 739: range 000000000C89F0F0-000000000C89F130
void __fastcall google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
        google::protobuf::io::CodedOutputStream *const this,
        google::protobuf::uint64 value)
{
  google::protobuf::uint8 bytes[8]; // [rsp+0h] [rbp-10h] BYREF

  if ( (unsigned __int64)this->buffer_size_ > 7 )
  {
    *(_QWORD *)this->buffer_ = value;
    this->buffer_ += 8;
    this->buffer_size_ -= 8;
  }
  else
  {
    *(_QWORD *)bytes = value;
    google::protobuf::io::CodedOutputStream::WriteRaw(this, bytes, 8);
  }
};

// Line 751: range 000000000C89F140-000000000C89F182
void __fastcall google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(
        google::protobuf::io::CodedOutputStream *const this,
        google::protobuf::uint32 value)
{
  google::protobuf::uint8 *i; // rdx
  char v3; // al
  google::protobuf::uint8 bytes[5]; // [rsp+Bh] [rbp-Dh] BYREF

  for ( i = bytes; value > 0x7F; *(i - 1) = v3 | 0x80 )
  {
    v3 = value;
    value >>= 7;
    ++i;
  }
  *i = value;
  google::protobuf::io::CodedOutputStream::WriteRaw(this, bytes, i + 1 - bytes);
};

// Line 759: range 000000000C89F190-000000000C89F1D4
void __fastcall google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(
        google::protobuf::io::CodedOutputStream *const this,
        google::protobuf::uint64 value)
{
  google::protobuf::uint8 *i; // rdx
  char v3; // al
  google::protobuf::uint8 bytes[10]; // [rsp+6h] [rbp-12h] BYREF

  for ( i = bytes; value > 0x7F; *(i - 1) = v3 | 0x80 )
  {
    v3 = value;
    value >>= 7;
    ++i;
  }
  *i = value;
  google::protobuf::io::CodedOutputStream::WriteRaw(this, bytes, i + 1 - bytes);
};

// Line 767: range 000000000C89F1E0-000000000C89F230
bool __fastcall google::protobuf::io::CodedOutputStream::Refresh(google::protobuf::io::CodedOutputStream *const this)
{
  bool result; // al
  void *void_buffer; // [rsp+8h] [rbp-10h] BYREF

  result = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *, void **, int *))this->output_->_vptr_ZeroCopyOutputStream
            + 2))(
             this->output_,
             &void_buffer,
             &this->buffer_size_);
  if ( result )
  {
    this->buffer_ = (google::protobuf::uint8 *)void_buffer;
    this->total_bytes_ += this->buffer_size_;
  }
  else
  {
    this->buffer_ = 0LL;
    this->buffer_size_ = 0;
    this->had_error_ = 1;
  }
  return result;
};

// Line 782: range 000000000C89F2B0-000000000C89F2F1
google::protobuf::uint8 *__fastcall google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(
        const std::string *str,
        google::protobuf::uint8 *target)
{
  unsigned int i; // eax
  char v3; // dl
  size_t M_string_length_low; // rbx

  for ( i = str->_M_string_length; i > 0x7F; *(target - 1) = v3 | 0x80 )
  {
    v3 = i;
    i >>= 7;
    ++target;
  }
  *target = i;
  M_string_length_low = SLODWORD(str->_M_string_length);
  return (google::protobuf::uint8 *)memcpy(target + 1, str->_M_dataplus._M_p, M_string_length_low) + M_string_length_low;
};

// Line 790: range 000000000C7469D0-000000000C7469F1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf2io16CodedInputStreamD2Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
