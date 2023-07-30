// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/io/coded_stream.h

// Line 925: range 000000000C8D5BB0-000000000C8D5BF2
bool __fastcall google::protobuf::io::CodedInputStream::ReadVarint32(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::uint32 *value)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 v4; // esi
  google::protobuf::int64 Varint32Fallback; // rax

  buffer = this->buffer_;
  if ( this->buffer_ >= this->buffer_end_ )
  {
    v4 = 0;
    goto LABEL_3;
  }
  v4 = *buffer;
  if ( *(char *)buffer < 0 )
  {
LABEL_3:
    Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, v4);
    *value = Varint32Fallback;
    return Varint32Fallback >= 0;
  }
  *value = v4;
  this->buffer_ = buffer + 1;
  return 1;
};

// Line 940: range 000000000C8D5C00-000000000C8D5C30
bool __fastcall google::protobuf::io::CodedInputStream::ReadVarint64(
        google::protobuf::io::CodedInputStream *const this,
        google::protobuf::uint64 *value)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint64 v3; // rdx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax

  buffer = this->buffer_;
  if ( this->buffer_ < this->buffer_end_ && (v3 = *buffer, (v3 & 0x80u) == 0LL) )
  {
    *value = v3;
    this->buffer_ = buffer + 1;
    return 1;
  }
  else
  {
    Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this);
    *value = Varint64Fallback.first;
    return Varint64Fallback.second;
  }
};

// Line 1149: range 000000000C89DE80-000000000C89DEFA
google::protobuf::io::CodedInputStream::Limit __fastcall google::protobuf::io::CodedInputStream::PushLimit(
        google::protobuf::io::CodedInputStream *const this,
        int byte_limit)
{
  int total_bytes_read; // edx
  __int64 buffer_size_after_limit; // rcx
  google::protobuf::io::CodedInputStream::Limit current_limit; // r9d
  int v5; // r10d
  google::protobuf::io::CodedInputStream::Limit total_bytes_limit; // esi
  const google::protobuf::uint8 *v7; // rax
  bool v8; // cc
  int v9; // edx

  total_bytes_read = this->total_bytes_read_;
  buffer_size_after_limit = this->buffer_size_after_limit_;
  current_limit = this->current_limit_;
  v5 = total_bytes_read - (buffer_size_after_limit + LODWORD(this->buffer_end_) - LODWORD(this->buffer_));
  if ( byte_limit < 0 || 0x7FFFFFFF - v5 < byte_limit || current_limit - v5 <= byte_limit )
    return current_limit;
  total_bytes_limit = v5 + byte_limit;
  v7 = &this->buffer_end_[buffer_size_after_limit];
  v8 = this->total_bytes_limit_ <= total_bytes_limit;
  this->current_limit_ = total_bytes_limit;
  if ( v8 )
    total_bytes_limit = this->total_bytes_limit_;
  this->buffer_end_ = v7;
  if ( total_bytes_limit < total_bytes_read )
  {
    v9 = total_bytes_read - total_bytes_limit;
    this->buffer_size_after_limit_ = v9;
    this->buffer_end_ = &v7[-v9];
    return current_limit;
  }
  this->buffer_size_after_limit_ = 0;
  return current_limit;
};

// Line 1149: range 000000000C89E050-000000000C89E0A7
void __fastcall google::protobuf::io::CodedInputStream::SetTotalBytesLimit(
        google::protobuf::io::CodedInputStream *const this,
        int total_bytes_limit,
        int warning_threshold)
{
  __int64 buffer_size_after_limit; // rcx
  int total_bytes_read; // edx
  bool v6; // cc
  google::protobuf::io::CodedInputStream::Limit current_limit; // esi
  const google::protobuf::uint8 *v8; // rax
  int v9; // edx

  buffer_size_after_limit = this->buffer_size_after_limit_;
  total_bytes_read = this->total_bytes_read_;
  v6 = total_bytes_read - ((int)buffer_size_after_limit + LODWORD(this->buffer_end_) - LODWORD(this->buffer_)) < total_bytes_limit;
  current_limit = total_bytes_read - (buffer_size_after_limit + LODWORD(this->buffer_end_) - LODWORD(this->buffer_));
  if ( v6 )
    current_limit = total_bytes_limit;
  v8 = &this->buffer_end_[buffer_size_after_limit];
  v6 = this->current_limit_ <= current_limit;
  this->buffer_end_ = v8;
  this->total_bytes_limit_ = current_limit;
  if ( v6 )
    current_limit = this->current_limit_;
  if ( current_limit >= total_bytes_read )
  {
    this->buffer_size_after_limit_ = 0;
  }
  else
  {
    v9 = total_bytes_read - current_limit;
    this->buffer_size_after_limit_ = v9;
    this->buffer_end_ = &v8[-v9];
  }
};

// Line 1227: range 000000000C89C5E0-000000000C89C628
void __fastcall google::protobuf::io::CodedOutputStream::WriteVarint32(
        google::protobuf::io::CodedOutputStream *const this,
        google::protobuf::uint32 value)
{
  google::protobuf::uint8 *buffer; // rcx
  google::protobuf::uint8 *i; // rax
  char v4; // dl
  int v5; // eax

  if ( this->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(this, value);
  }
  else
  {
    buffer = this->buffer_;
    for ( i = buffer; value > 0x7F; *(i - 1) = v4 | 0x80 )
    {
      v4 = value;
      value >>= 7;
      ++i;
    }
    *i = value;
    v5 = (_DWORD)i + 1 - (_DWORD)buffer;
    this->buffer_size_ -= v5;
    this->buffer_ += v5;
  }
};

// Line 1354: range 000000000C89DE10-000000000C89DE58
void __fastcall google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(
        google::protobuf::io::CodedInputStream *const this)
{
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax

  if ( this->overflow_bytes_ + this->buffer_size_after_limit_ + LODWORD(this->buffer_end_) - LODWORD(this->buffer_) > 0 )
  {
    (*((void (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *))this->input_->_vptr_ZeroCopyInputStream + 3))(this->input_);
    buffer = this->buffer_;
    buffer_end = this->buffer_end_;
    this->overflow_bytes_ = 0;
    this->buffer_end_ = buffer;
    LODWORD(buffer_end) = this->buffer_size_after_limit_ + (_DWORD)buffer_end - (_DWORD)buffer;
    this->buffer_size_after_limit_ = 0;
    this->total_bytes_read_ -= (int)buffer_end;
  }
};
