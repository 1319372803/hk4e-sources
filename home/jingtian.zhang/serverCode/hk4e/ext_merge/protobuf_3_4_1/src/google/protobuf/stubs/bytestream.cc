// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/bytestream.cc

// Line 41: range 000000000C8E26E0-000000000C8E2789
void __fastcall google::protobuf::strings::ByteSource::CopyTo(
        google::protobuf::strings::ByteSource *this,
        google::protobuf::strings::ByteSink *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+1h] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+2h] [rbp-68h] BYREF

  if ( a3 )
  {
    v4 = a3;
    while ( 1 )
    {
      v7 = (*((__int64 (__fastcall **)(google::protobuf::strings::ByteSource *))this->_vptr_ByteSource + 3))(this);
      if ( !v6 )
        break;
      v5 = v6;
      if ( v6 > v4 )
        v5 = v4;
      (*((void (__fastcall **)(google::protobuf::strings::ByteSink *, __int64, unsigned __int64))a2->_vptr_ByteSink + 2))(
        a2,
        v7,
        v5);
      (*((void (__fastcall **)(google::protobuf::strings::ByteSource *, unsigned __int64))this->_vptr_ByteSource + 4))(
        this,
        v5);
      v4 -= v5;
      if ( !v4 )
        return;
    }
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      LOGLEVEL_ERROR_0,
      "google/protobuf/stubs/bytestream.cc",
      44);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v10, "ByteSource::CopyTo() overran input.");
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
};

// Line 44: range 000000000C72CAD2-000000000C72CADF
void __fastcall __noreturn google::protobuf::strings::ByteSource::CopyTo(
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

// Line 54: range 000000000C8E2600-000000000C8E2614
void __fastcall google::protobuf::strings::ByteSink::Flush(google::protobuf::strings::ByteSink *const this)
{
  ;
};

// Line 56: range 000000000C8E2790-000000000C8E27BB
void __fastcall google::protobuf::strings::UncheckedArrayByteSink::Append(
        google::protobuf::strings::UncheckedArrayByteSink *const this,
        const char *data,
        size_t n)
{
  char *dest; // rdi

  dest = this->dest_;
  if ( dest != data )
  {
    memcpy(dest, data, n);
    data = this->dest_;
  }
  this->dest_ = (char *)&data[n];
};

// Line 67: range 000000000C8E2890-000000000C8E28AB
void __fastcall google::protobuf::strings::CheckedArrayByteSink::CheckedArrayByteSink(
        google::protobuf::strings::CheckedArrayByteSink *const this,
        char *outbuf,
        size_t capacity)
{
  this->_vptr_ByteSink = (int (**)(...))off_1A176A58;
  this->outbuf_ = outbuf;
  this->capacity_ = capacity;
  this->size_ = 0LL;
  this->overflowed_ = 0;
};

// Line 70: range 000000000C8E27C0-000000000C8E280D
void __fastcall google::protobuf::strings::CheckedArrayByteSink::Append(
        google::protobuf::strings::CheckedArrayByteSink *const this,
        const char *bytes,
        size_t n)
{
  size_t size; // rdx
  size_t v6; // rax
  char *v7; // rdi

  size = this->size_;
  v6 = this->capacity_ - size;
  if ( v6 < n )
  {
    this->overflowed_ = 1;
    n = v6;
  }
  if ( n )
  {
    v7 = &this->outbuf_[size];
    if ( v7 != bytes )
    {
      memcpy(v7, bytes, n);
      size = this->size_;
    }
  }
  this->size_ = size + n;
};

// Line 85: range 000000000C8E28B0-000000000C8E28D4
void __fastcall google::protobuf::strings::GrowingArrayByteSink::GrowingArrayByteSink(
        google::protobuf::strings::GrowingArrayByteSink *const this,
        size_t estimated_size)
{
  char *v2; // rax

  this->_vptr_ByteSink = (int (**)(...))off_1A176A88;
  this->capacity_ = estimated_size;
  v2 = (char *)operator new[](estimated_size);
  this->size_ = 0LL;
  this->buf_ = v2;
};

// Line 91: range 000000000C8E2810-000000000C8E2828
void __fastcall google::protobuf::strings::GrowingArrayByteSink::~GrowingArrayByteSink(
        google::protobuf::strings::GrowingArrayByteSink *const this)
{
  char *buf; // rdi

  this->_vptr_ByteSink = (int (**)(...))off_1A176A88;
  buf = this->buf_;
  if ( buf )
    operator delete[](buf);
};

// Line 91: range 000000000C8E2830-000000000C8E2852
void __fastcall google::protobuf::strings::GrowingArrayByteSink::~GrowingArrayByteSink(
        google::protobuf::strings::GrowingArrayByteSink *const this)
{
  char *buf; // rdi

  this->_vptr_ByteSink = (int (**)(...))off_1A176A88;
  buf = this->buf_;
  if ( buf )
    operator delete[](buf);
  operator delete(this, 0x20uLL);
};

// Line 95: range 000000000C8E2940-000000000C8E29AE
void __fastcall google::protobuf::strings::GrowingArrayByteSink::Append(
        google::protobuf::strings::GrowingArrayByteSink *const this,
        const char *bytes,
        size_t n)
{
  size_t size; // rdx
  char *v6; // rdi

  size = this->size_;
  if ( this->capacity_ - size < n )
  {
    google::protobuf::strings::GrowingArrayByteSink::Expand(this, size + n - this->capacity_);
    size = this->size_;
  }
  else if ( !n )
  {
LABEL_3:
    this->size_ = size + n;
    return;
  }
  v6 = &this->buf_[size];
  if ( v6 == bytes )
    goto LABEL_3;
  memcpy(v6, bytes, n);
  this->size_ += n;
};

// Line 112: range 000000000C8E2A20-000000000C8E2A5B
char *__fastcall google::protobuf::strings::GrowingArrayByteSink::GetBuffer(
        google::protobuf::strings::GrowingArrayByteSink *const this,
        size_t *nbytes)
{
  char *result; // rax

  google::protobuf::strings::GrowingArrayByteSink::ShrinkToFit(this);
  result = this->buf_;
  *nbytes = this->size_;
  this->buf_ = 0LL;
  this->capacity_ = 0LL;
  this->size_ = 0LL;
  return result;
};

// Line 121: range 000000000C8E28E0-000000000C8E293D
void __fastcall google::protobuf::strings::GrowingArrayByteSink::Expand(
        google::protobuf::strings::GrowingArrayByteSink *const this,
        size_t amount)
{
  size_t capacity; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  char *v7; // rax
  char *buf; // r13
  char *v9; // r12

  capacity = this->capacity_;
  v4 = 3 * capacity;
  v5 = amount + capacity;
  v6 = v4 >> 1;
  if ( v6 < v5 )
    v6 = v5;
  v7 = (char *)operator new[](v6);
  buf = this->buf_;
  v9 = v7;
  memcpy(v7, buf, this->size_);
  operator delete[](buf);
  this->buf_ = v9;
  this->capacity_ = v6;
};

// Line 133: range 000000000C8E29B0-000000000C8E2A1B
void __fastcall google::protobuf::strings::GrowingArrayByteSink::ShrinkToFit(
        google::protobuf::strings::GrowingArrayByteSink *const this)
{
  size_t capacity; // rax
  size_t size; // rdi
  char *v4; // rax
  char *buf; // r12
  char *v6; // rbp
  size_t v7; // rax

  capacity = this->capacity_;
  if ( capacity > 0x100 )
  {
    size = this->size_;
    if ( size < (3 * capacity) >> 2 )
    {
      v4 = (char *)operator new[](size);
      buf = this->buf_;
      v6 = v4;
      memcpy(v4, buf, this->size_);
      operator delete[](buf);
      v7 = this->size_;
      this->buf_ = v6;
      this->capacity_ = v7;
    }
  }
};

// Line 151: range 000000000C8E2620-000000000C8E2628
google::protobuf::StringPiece __fastcall google::protobuf::strings::ArrayByteSource::Peek(
        google::protobuf::strings::ArrayByteSource *const this)
{
  return this->input_;
};

// Line 161: range 000000000C8E2A60-000000000C8E2A6F
void __fastcall google::protobuf::strings::LimitByteSource::LimitByteSource(
        google::protobuf::strings::LimitByteSource *const this,
        google::protobuf::strings::ByteSource *source,
        size_t limit)
{
  this->_vptr_ByteSource = (int (**)(...))off_1A176B28;
  this->source_ = source;
  this->limit_ = limit;
};

// Line 164: range 000000000C8E2640-000000000C8E2658
size_t __fastcall google::protobuf::strings::LimitByteSource::Available(
        const google::protobuf::strings::LimitByteSource *const this)
{
  size_t result; // rax

  result = (*((__int64 (__fastcall **)(google::protobuf::strings::ByteSource *))this->source_->_vptr_ByteSource + 2))(this->source_);
  if ( this->limit_ <= result )
    return this->limit_;
  return result;
};

// Line 173: range 000000000C8E2660-000000000C8E267A
google::protobuf::StringPiece __fastcall google::protobuf::strings::LimitByteSource::Peek(
        google::protobuf::strings::LimitByteSource *const this)
{
  google::protobuf::StringPiece result; // rax

  result.ptr_ = (const char *)(*((__int64 (__fastcall **)(google::protobuf::strings::ByteSource *))this->source_->_vptr_ByteSource
                               + 3))(this->source_);
  if ( result.length_ > this->limit_ )
    result.length_ = this->limit_;
  return result;
};

// Line 182: range 000000000C8E2680-000000000C8E26A0
void __fastcall google::protobuf::strings::LimitByteSource::Skip(
        google::protobuf::strings::LimitByteSource *const this,
        size_t n)
{
  (*((void (__fastcall **)(google::protobuf::strings::ByteSource *))this->source_->_vptr_ByteSource + 4))(this->source_);
  this->limit_ -= n;
};

// Line 188: range 000000000C8E26B0-000000000C8E26D0
void __fastcall google::protobuf::strings::LimitByteSource::CopyTo(
        google::protobuf::strings::LimitByteSource *const this,
        google::protobuf::strings::ByteSink *sink,
        size_t n)
{
  (*((void (__fastcall **)(google::protobuf::strings::ByteSource *, google::protobuf::strings::ByteSink *))this->source_->_vptr_ByteSource
   + 5))(
    this->source_,
    sink);
  this->limit_ -= n;
};

// Line 196: range 000000000C746D30-000000000C746D51
void __cdecl GLOBAL__sub_I__ZN6google8protobuf7strings10ByteSource6CopyToEPNS1_8ByteSinkEm()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
