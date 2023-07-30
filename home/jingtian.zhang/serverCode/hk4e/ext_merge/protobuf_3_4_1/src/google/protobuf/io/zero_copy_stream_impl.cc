// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/io/zero_copy_stream_impl.cc

// Line 74: range 000000000C8DE9A0-000000000C8DE9D2
int __fastcall google::protobuf::io::`anonymous namespace'::close_no_eintr(int fd)
{
  int v1; // r12d

  do
    v1 = close(fd);
  while ( v1 < 0 && *__errno_location() == 4 );
  return v1;
};

// Line 87: range 000000000C8DEF40-000000000C8DEF86
void __fastcall google::protobuf::io::FileInputStream::FileInputStream(
        google::protobuf::io::FileInputStream *this,
        int a2,
        int a3)
{
  google::protobuf::io::FileInputStream::CopyingFileInputStream *p_copying_input; // rbp
  google::protobuf::io::CopyingInputStreamAdaptor *p_impl; // rdi

  p_copying_input = &this->copying_input_;
  p_impl = &this->impl_;
  p_impl[-1].buffer_size_ = a2;
  p_impl[-1].position_ = (google::protobuf::int64)off_1A175E78;
  p_impl[-1].buffer_.array_ = (unsigned __int8 *)off_1A175EB8;
  LOWORD(p_impl[-1].buffer_used_) = 0;
  p_impl[-1].backup_bytes_ = 0;
  *((_BYTE *)&p_impl[-1].backup_bytes_ + 4) = 0;
  google::protobuf::io::CopyingInputStreamAdaptor::CopyingInputStreamAdaptor(p_impl, p_copying_input, a3);
};

// Line 89: range 000000000C72C552-000000000C72C55D
void __fastcall __noreturn google::protobuf::io::FileInputStream::FileInputStream()
{
  google::protobuf::io::FileInputStream::CopyingFileInputStream *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(v0);
  _Unwind_Resume(v1);
};

// Line 93: range 000000000C8DEEA0-000000000C8DEEA4
bool __fastcall google::protobuf::io::FileInputStream::Close(google::protobuf::io::FileInputStream *const this)
{
  return google::protobuf::io::FileInputStream::CopyingFileInputStream::Close(&this->copying_input_);
};

// Line 97: range 000000000C8DF280-000000000C8DF284
bool __fastcall google::protobuf::io::FileInputStream::Next(
        google::protobuf::io::FileInputStream *const this,
        const void **data,
        int *size)
{
  return google::protobuf::io::CopyingInputStreamAdaptor::Next(&this->impl_, data, size);
};

// Line 101: range 000000000C8DF2A0-000000000C8DF2A4
void __fastcall google::protobuf::io::FileInputStream::BackUp(
        google::protobuf::io::FileInputStream *const this,
        int count)
{
  google::protobuf::io::CopyingInputStreamAdaptor::BackUp(&this->impl_, count);
};

// Line 105: range 000000000C8DF2C0-000000000C8DF2C4
bool __fastcall google::protobuf::io::FileInputStream::Skip(
        google::protobuf::io::FileInputStream *const this,
        int count)
{
  return google::protobuf::io::CopyingInputStreamAdaptor::Skip(&this->impl_, count);
};

// Line 109: range 000000000C8DF2E0-000000000C8DF2E4
google::protobuf::int64 __fastcall google::protobuf::io::FileInputStream::ByteCount(
        const google::protobuf::io::FileInputStream *const this)
{
  return google::protobuf::io::CopyingInputStreamAdaptor::ByteCount(&this->impl_);
};

// Line 118: range 000000000C8DEDE0-000000000C8DEDFB
void __fastcall google::protobuf::io::FileInputStream::CopyingFileInputStream::CopyingFileInputStream(
        google::protobuf::io::FileInputStream::CopyingFileInputStream *const this,
        int file_descriptor)
{
  this->_vptr_CopyingInputStream = (int (**)(...))off_1A175EB8;
  this->file_ = file_descriptor;
  *(_WORD *)&this->close_on_delete_ = 0;
  this->errno_ = 0;
  this->previous_seek_failed_ = 0;
};

// Line 121: range 000000000C8DEF90-000000000C8DEFA2
void __fastcall google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(
        google::protobuf::io::FileInputStream::CopyingFileInputStream *const this)
{
  google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(this);
  operator delete(this, 0x18uLL);
};

// Line 122: range 000000000C8DEEB0-000000000C8DEF3B
void __fastcall google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(
        google::protobuf::io::FileInputStream::CopyingFileInputStream *const this)
{
  bool v1; // zf
  google::protobuf::internal::LogMessage_0 *v2; // rbp
  char *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogFinisher v5; // [rsp+1h] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v6; // [rsp+2h] [rbp-58h] BYREF

  v1 = !this->close_on_delete_;
  this->_vptr_CopyingInputStream = (int (**)(...))off_1A175EB8;
  if ( !v1 && !(unsigned __int8)google::protobuf::io::FileInputStream::CopyingFileInputStream::Close(this) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      LOGLEVEL_ERROR_0,
      "google/protobuf/io/zero_copy_stream_impl.cc",
      124);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v6, "close() failed: ");
    v3 = strerror(this->errno_);
    v4 = google::protobuf::internal::LogMessage::operator<<(v2, v3);
    google::protobuf::internal::LogFinisher::operator=(&v5, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  }
};

// Line 129: range 000000000C8DEE00-000000000C8DEE94
__int64 __fastcall google::protobuf::io::FileInputStream::CopyingFileInputStream::Close(
        google::protobuf::io::FileInputStream::CopyingFileInputStream *this)
{
  int v1; // r8d
  __int64 result; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogFinisher v4; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v5; // [rsp+10h] [rbp-58h] BYREF

  if ( this->is_closed_ )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v5,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl.cc",
      130);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v5, "CHECK failed: !is_closed_: ");
    google::protobuf::internal::LogFinisher::operator=(&v4, v3);
    google::protobuf::internal::LogMessage::~LogMessage(&v5);
  }
  this->is_closed_ = 1;
  v1 = google::protobuf::io::`anonymous namespace'::close_no_eintr(this->file_);
  result = 1LL;
  if ( v1 )
  {
    this->errno_ = *__errno_location();
    return 0LL;
  }
  return result;
};

// Line 130: range 000000000C72C540-000000000C72C54D
void __fastcall __noreturn google::protobuf::io::FileInputStream::CopyingFileInputStream::Close(
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

// Line 144: range 000000000C8DE9E0-000000000C8DEA9C
__int64 __fastcall google::protobuf::io::FileInputStream::CopyingFileInputStream::Read(
        google::protobuf::io::FileInputStream::CopyingFileInputStream *this,
        void *a2,
        int a3)
{
  size_t v3; // rbx
  int v4; // eax
  int v5; // r13d
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v8; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v9; // [rsp+10h] [rbp-68h] BYREF

  v3 = a3;
  if ( this->is_closed_ )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl.cc",
      145);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: !is_closed_: ");
    google::protobuf::internal::LogFinisher::operator=(&v8, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
  }
  do
  {
    v5 = read(this->file_, a2, v3);
    if ( v5 >= 0 )
      return (unsigned int)v5;
    v4 = *__errno_location();
  }
  while ( v4 == 4 );
  this->errno_ = v4;
  return (unsigned int)v5;
};

// Line 145: range 000000000C72C50A-000000000C72C517
void __fastcall __noreturn google::protobuf::io::FileInputStream::CopyingFileInputStream::Read(
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

// Line 160: range 000000000C8DEAB0-000000000C8DEB67
int __fastcall google::protobuf::io::FileInputStream::CopyingFileInputStream::Skip(
        google::protobuf::io::FileInputStream::CopyingFileInputStream *this,
        int count)
{
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogFinisher v4; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v5; // [rsp+10h] [rbp-58h] BYREF

  if ( this->is_closed_ )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v5,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl.cc",
      161);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v5, "CHECK failed: !is_closed_: ");
    google::protobuf::internal::LogFinisher::operator=(&v4, v3);
    google::protobuf::internal::LogMessage::~LogMessage(&v5);
  }
  if ( !this->previous_seek_failed_ && lseek(this->file_, count, 1) != -1 )
    return count;
  this->previous_seek_failed_ = 1;
  return google::protobuf::io::CopyingInputStream::Skip(this, count);
};

// Line 161: range 000000000C72C51C-000000000C72C529
void __fastcall __noreturn google::protobuf::io::FileInputStream::CopyingFileInputStream::Skip(
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

// Line 181: range 000000000C8DF140-000000000C8DF182
void __fastcall google::protobuf::io::FileOutputStream::FileOutputStream(
        google::protobuf::io::FileOutputStream *this,
        int a2,
        int a3)
{
  google::protobuf::io::FileOutputStream::CopyingFileOutputStream *p_copying_output; // rbp
  google::protobuf::io::CopyingOutputStreamAdaptor *p_impl; // rdi

  p_copying_output = &this->copying_output_;
  p_impl = &this->impl_;
  LODWORD(p_impl[-1].buffer_.array_) = a2;
  *(_QWORD *)&p_impl[-1].owns_copying_stream_ = off_1A175EE8;
  p_impl[-1].position_ = (google::protobuf::int64)off_1A175F30;
  WORD2(p_impl[-1].buffer_.array_) = 0;
  p_impl[-1].buffer_size_ = 0;
  google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor(p_impl, p_copying_output, a3);
};

// Line 183: range 000000000C72C574-000000000C72C57F
void __fastcall __noreturn google::protobuf::io::FileOutputStream::FileOutputStream()
{
  google::protobuf::io::FileOutputStream::CopyingFileOutputStream *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::io::FileOutputStream::CopyingFileOutputStream::~CopyingFileOutputStream(v0);
  _Unwind_Resume(v1);
};

// Line 186: range 000000000C8DF300-000000000C8DF32E
void __fastcall google::protobuf::io::FileOutputStream::~FileOutputStream(
        google::protobuf::io::FileOutputStream *const this)
{
  this->_vptr_ZeroCopyOutputStream = (int (**)(...))off_1A175EE8;
  google::protobuf::io::CopyingOutputStreamAdaptor::Flush(&this->impl_);
  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(&this->impl_);
  google::protobuf::io::FileOutputStream::CopyingFileOutputStream::~CopyingFileOutputStream(&this->copying_output_);
};

// Line 186: range 000000000C8DF340-000000000C8DF352
void __fastcall google::protobuf::io::FileOutputStream::~FileOutputStream(
        google::protobuf::io::FileOutputStream *const this)
{
  google::protobuf::io::FileOutputStream::~FileOutputStream(this);
  operator delete(this, 0x50uLL);
};

// Line 190: range 000000000C8DF080-000000000C8DF0A5
bool __fastcall google::protobuf::io::FileOutputStream::Close(google::protobuf::io::FileOutputStream *const this)
{
  bool v1; // al

  v1 = google::protobuf::io::CopyingOutputStreamAdaptor::Flush(&this->impl_);
  return v1 & google::protobuf::io::FileOutputStream::CopyingFileOutputStream::Close(&this->copying_output_);
};

// Line 196: range 000000000C8DEFB0-000000000C8DEFB4
bool __fastcall google::protobuf::io::FileOutputStream::Flush(google::protobuf::io::FileOutputStream *const this)
{
  return google::protobuf::io::CopyingOutputStreamAdaptor::Flush(&this->impl_);
};

// Line 200: range 000000000C8DF3C0-000000000C8DF3C4
bool __fastcall google::protobuf::io::FileOutputStream::Next(
        google::protobuf::io::FileOutputStream *const this,
        void **data,
        int *size)
{
  return google::protobuf::io::CopyingOutputStreamAdaptor::Next(&this->impl_, data, size);
};

// Line 204: range 000000000C8DF3E0-000000000C8DF3E4
void __fastcall google::protobuf::io::FileOutputStream::BackUp(
        google::protobuf::io::FileOutputStream *const this,
        int count)
{
  google::protobuf::io::CopyingOutputStreamAdaptor::BackUp(&this->impl_, count);
};

// Line 208: range 000000000C8DF400-000000000C8DF404
google::protobuf::int64 __fastcall google::protobuf::io::FileOutputStream::ByteCount(
        const google::protobuf::io::FileOutputStream *const this)
{
  return google::protobuf::io::CopyingOutputStreamAdaptor::ByteCount(&this->impl_);
};

// Line 216: range 000000000C8DEFC0-000000000C8DEFD7
void __fastcall google::protobuf::io::FileOutputStream::CopyingFileOutputStream::CopyingFileOutputStream(
        google::protobuf::io::FileOutputStream::CopyingFileOutputStream *const this,
        int file_descriptor)
{
  this->_vptr_CopyingOutputStream = (int (**)(...))off_1A175F30;
  this->file_ = file_descriptor;
  *(_WORD *)&this->close_on_delete_ = 0;
  this->errno_ = 0;
};

// Line 219: range 000000000C8DF190-000000000C8DF1A2
void __fastcall google::protobuf::io::FileOutputStream::CopyingFileOutputStream::~CopyingFileOutputStream(
        google::protobuf::io::FileOutputStream::CopyingFileOutputStream *const this)
{
  google::protobuf::io::FileOutputStream::CopyingFileOutputStream::~CopyingFileOutputStream(this);
  operator delete(this, 0x18uLL);
};

// Line 220: range 000000000C8DF0B0-000000000C8DF13B
void __fastcall google::protobuf::io::FileOutputStream::CopyingFileOutputStream::~CopyingFileOutputStream(
        google::protobuf::io::FileOutputStream::CopyingFileOutputStream *const this)
{
  bool v1; // zf
  google::protobuf::internal::LogMessage_0 *v2; // rbp
  char *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogFinisher v5; // [rsp+1h] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v6; // [rsp+2h] [rbp-58h] BYREF

  v1 = !this->close_on_delete_;
  this->_vptr_CopyingOutputStream = (int (**)(...))off_1A175F30;
  if ( !v1 && !(unsigned __int8)google::protobuf::io::FileOutputStream::CopyingFileOutputStream::Close(this) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      LOGLEVEL_ERROR_0,
      "google/protobuf/io/zero_copy_stream_impl.cc",
      222);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v6, "close() failed: ");
    v3 = strerror(this->errno_);
    v4 = google::protobuf::internal::LogMessage::operator<<(v2, v3);
    google::protobuf::internal::LogFinisher::operator=(&v5, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  }
};

// Line 227: range 000000000C8DEFE0-000000000C8DF074
__int64 __fastcall google::protobuf::io::FileOutputStream::CopyingFileOutputStream::Close(
        google::protobuf::io::FileOutputStream::CopyingFileOutputStream *this)
{
  int v1; // r8d
  __int64 result; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogFinisher v4; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v5; // [rsp+10h] [rbp-58h] BYREF

  if ( this->is_closed_ )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v5,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl.cc",
      228);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v5, "CHECK failed: !is_closed_: ");
    google::protobuf::internal::LogFinisher::operator=(&v4, v3);
    google::protobuf::internal::LogMessage::~LogMessage(&v5);
  }
  this->is_closed_ = 1;
  v1 = google::protobuf::io::`anonymous namespace'::close_no_eintr(this->file_);
  result = 1LL;
  if ( v1 )
  {
    this->errno_ = *__errno_location();
    return 0LL;
  }
  return result;
};

// Line 228: range 000000000C72C562-000000000C72C56F
void __fastcall __noreturn google::protobuf::io::FileOutputStream::CopyingFileOutputStream::Close(
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

// Line 243: range 000000000C8DEB70-000000000C8DEC65
__int64 __fastcall google::protobuf::io::FileOutputStream::CopyingFileOutputStream::Write(
        google::protobuf::io::FileOutputStream::CopyingFileOutputStream *this,
        char *a2,
        int a3)
{
  int v4; // r13d
  int v5; // eax
  int v6; // eax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-78h] BYREF

  if ( this->is_closed_ )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl.cc",
      244);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: !is_closed_: ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  v4 = 0;
  if ( a3 <= 0 )
    return 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = write(this->file_, &a2[v4], a3 - v4);
      if ( v6 >= 0 )
        break;
      v5 = *__errno_location();
      if ( v5 != 4 )
      {
        this->errno_ = v5;
        return 0LL;
      }
    }
    if ( !v6 )
      break;
    v4 += v6;
    if ( a3 <= v4 )
      return 1LL;
  }
  return 0LL;
};

// Line 244: range 000000000C72C52E-000000000C72C53B
void __fastcall __noreturn google::protobuf::io::FileOutputStream::CopyingFileOutputStream::Write(
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

// Line 283: range 000000000C8DF290-000000000C8DF294
bool __fastcall google::protobuf::io::IstreamInputStream::Next(
        google::protobuf::io::IstreamInputStream *const this,
        const void **data,
        int *size)
{
  return google::protobuf::io::CopyingInputStreamAdaptor::Next(&this->impl_, data, size);
};

// Line 287: range 000000000C8DF2B0-000000000C8DF2B4
void __fastcall google::protobuf::io::IstreamInputStream::BackUp(
        google::protobuf::io::IstreamInputStream *const this,
        int count)
{
  google::protobuf::io::CopyingInputStreamAdaptor::BackUp(&this->impl_, count);
};

// Line 291: range 000000000C8DF2D0-000000000C8DF2D4
bool __fastcall google::protobuf::io::IstreamInputStream::Skip(
        google::protobuf::io::IstreamInputStream *const this,
        int count)
{
  return google::protobuf::io::CopyingInputStreamAdaptor::Skip(&this->impl_, count);
};

// Line 295: range 000000000C8DF2F0-000000000C8DF2F4
google::protobuf::int64 __fastcall google::protobuf::io::IstreamInputStream::ByteCount(
        const google::protobuf::io::IstreamInputStream *const this)
{
  return google::protobuf::io::CopyingInputStreamAdaptor::ByteCount(&this->impl_);
};

// Line 300: range 000000000C8DF1E0-000000000C8DF1EB
void __fastcall google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::CopyingIstreamInputStream(
        google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream *const this,
        std::istream *input)
{
  this->_vptr_CopyingInputStream = (int (**)(...))off_1A175F98;
  this->input_ = input;
};

// Line 300: range 000000000C8DF1B0-000000000C8DF1CC
void __fastcall google::protobuf::io::IstreamInputStream::IstreamInputStream(
        google::protobuf::io::IstreamInputStream *const this,
        std::istream *input,
        int block_size)
{
  google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream *p_copying_input; // rsi
  google::protobuf::io::CopyingInputStreamAdaptor *p_impl; // rdi

  this->copying_input_.input_ = input;
  p_copying_input = &this->copying_input_;
  p_impl = &this->impl_;
  p_impl[-1].buffer_.array_ = (unsigned __int8 *)off_1A175F58;
  *(_QWORD *)&p_impl[-1].buffer_size_ = off_1A175F98;
  google::protobuf::io::CopyingInputStreamAdaptor::CopyingInputStreamAdaptor(p_impl, p_copying_input, block_size);
};

// Line 302: range 000000000C8DE910-000000000C8DE915
void __fastcall google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::~CopyingIstreamInputStream(
        google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream *const this)
{
  operator delete(this, 0x10uLL);
};

// Line 305: range 000000000C8DEC70-000000000C8DECAB
int __fastcall google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::Read(
        google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream *const this,
        void *buffer,
        int size)
{
  std::istream *input; // rdx
  int result; // eax
  int v5; // edx

  std::istream::read(this->input_, (char *)buffer, size);
  input = this->input_;
  result = *((_QWORD *)input + 1);
  if ( !result )
  {
    v5 = *(_DWORD *)((char *)input + *(_QWORD *)(*(_QWORD *)input - 24LL) + 32);
    result = v5 & 5;
    if ( (v5 & 5) != 0 )
      return -((v5 & 2) == 0);
  }
  return result;
};

// Line 319: range 000000000C8DF380-000000000C8DF3B4
void __fastcall google::protobuf::io::OstreamOutputStream::~OstreamOutputStream(
        google::protobuf::io::OstreamOutputStream *const this)
{
  this->_vptr_ZeroCopyOutputStream = (int (**)(...))off_1A175FC8;
  google::protobuf::io::CopyingOutputStreamAdaptor::Flush(&this->impl_);
  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(&this->impl_);
  operator delete(this, 0x48uLL);
};

// Line 319: range 000000000C8DF360-000000000C8DF378
void __fastcall google::protobuf::io::OstreamOutputStream::~OstreamOutputStream(
        google::protobuf::io::OstreamOutputStream *const this)
{
  this->_vptr_ZeroCopyOutputStream = (int (**)(...))off_1A175FC8;
  google::protobuf::io::CopyingOutputStreamAdaptor::Flush(&this->impl_);
  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(&this->impl_);
};

// Line 324: range 000000000C8DF3D0-000000000C8DF3D4
bool __fastcall google::protobuf::io::OstreamOutputStream::Next(
        google::protobuf::io::OstreamOutputStream *const this,
        void **data,
        int *size)
{
  return google::protobuf::io::CopyingOutputStreamAdaptor::Next(&this->impl_, data, size);
};

// Line 328: range 000000000C8DF3F0-000000000C8DF3F4
void __fastcall google::protobuf::io::OstreamOutputStream::BackUp(
        google::protobuf::io::OstreamOutputStream *const this,
        int count)
{
  google::protobuf::io::CopyingOutputStreamAdaptor::BackUp(&this->impl_, count);
};

// Line 332: range 000000000C8DF410-000000000C8DF414
google::protobuf::int64 __fastcall google::protobuf::io::OstreamOutputStream::ByteCount(
        const google::protobuf::io::OstreamOutputStream *const this)
{
  return google::protobuf::io::CopyingOutputStreamAdaptor::ByteCount(&this->impl_);
};

// Line 337: range 000000000C8DF220-000000000C8DF22B
void __fastcall google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::CopyingOstreamOutputStream(
        google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream *const this,
        std::ostream *output)
{
  this->_vptr_CopyingOutputStream = (int (**)(...))off_1A176010;
  this->output_ = output;
};

// Line 337: range 000000000C8DF1F0-000000000C8DF20C
void __fastcall google::protobuf::io::OstreamOutputStream::OstreamOutputStream(
        google::protobuf::io::OstreamOutputStream *const this,
        std::ostream *output,
        int block_size)
{
  google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream *p_copying_output; // rsi
  google::protobuf::io::CopyingOutputStreamAdaptor *p_impl; // rdi

  this->copying_output_.output_ = output;
  p_copying_output = &this->copying_output_;
  p_impl = &this->impl_;
  p_impl[-1].position_ = (google::protobuf::int64)off_1A175FC8;
  p_impl[-1].buffer_.array_ = (unsigned __int8 *)off_1A176010;
  google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor(p_impl, p_copying_output, block_size);
};

// Line 340: range 000000000C8DE920-000000000C8DE925
void __fastcall google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::~CopyingOstreamOutputStream(
        google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream *const this)
{
  operator delete(this, 0x10uLL);
};

// Line 343: range 000000000C8DECB0-000000000C8DECD5
bool __fastcall google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream::Write(
        google::protobuf::io::OstreamOutputStream::CopyingOstreamOutputStream *const this,
        const void *buffer,
        int size)
{
  std::ostream::write(this->output_, (const char *)buffer, size);
  return *(_DWORD *)((char *)this->output_ + *(_QWORD *)(*(_QWORD *)this->output_ - 24LL) + 32) == 0;
};

// Line 352: range 000000000C8DF230-000000000C8DF246
void __fastcall google::protobuf::io::ConcatenatingInputStream::ConcatenatingInputStream(
        google::protobuf::io::ConcatenatingInputStream *const this,
        google::protobuf::io::ZeroCopyInputStream *const *streams,
        int count)
{
  this->_vptr_ZeroCopyInputStream = (int (**)(...))off_1A176038;
  this->streams_ = streams;
  this->stream_count_ = count;
  this->bytes_retired_ = 0LL;
};

// Line 356: range 000000000C8DE740-000000000C8DE7B1
bool __fastcall google::protobuf::io::ConcatenatingInputStream::Next(
        google::protobuf::io::ConcatenatingInputStream *const this,
        const void **data,
        int *size)
{
  google::protobuf::io::ZeroCopyInputStream *const *streams; // rax
  __int64 v5; // rax
  int stream_count; // ecx
  bool result; // al

  if ( this->stream_count_ <= 0 )
    return 0;
  streams = this->streams_;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *const, const void **, int *))(**(_QWORD **)streams + 16LL))(
               *streams,
               data,
               size);
    if ( result )
      break;
    v5 = (*(__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *const))(**(_QWORD **)this->streams_ + 40LL))(*this->streams_);
    stream_count = this->stream_count_;
    this->bytes_retired_ += v5;
    streams = this->streams_ + 1;
    this->stream_count_ = stream_count - 1;
    this->streams_ = streams;
    if ( stream_count - 1 <= 0 )
      return 0;
  }
  return result;
};

// Line 369: range 000000000C8DE930-000000000C8DE998
void __fastcall google::protobuf::io::ConcatenatingInputStream::BackUp(
        google::protobuf::io::ConcatenatingInputStream *this)
{
  google::protobuf::internal::LogMessage_0 *v1; // rax
  google::protobuf::internal::LogFinisher v2; // [rsp+Fh] [rbp-49h] BYREF
  google::protobuf::internal::LogMessage_0 v3; // [rsp+10h] [rbp-48h] BYREF

  if ( this->stream_count_ <= 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v3,
      LOGLEVEL_ERROR_0,
      "google/protobuf/io/zero_copy_stream_impl.cc",
      373);
    v1 = google::protobuf::internal::LogMessage::operator<<(&v3, "Can't BackUp() after failed Next().");
    google::protobuf::internal::LogFinisher::operator=(&v2, v1);
    google::protobuf::internal::LogMessage::~LogMessage(&v3);
  }
  else
  {
    (*(void (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *const))(**(_QWORD **)this->streams_ + 24LL))(*this->streams_);
  }
};

// Line 373: range 000000000C72C4F8-000000000C72C505
void __fastcall __noreturn google::protobuf::io::ConcatenatingInputStream::BackUp(
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

// Line 378: range 000000000C8DE7C0-000000000C8DE849
bool __fastcall google::protobuf::io::ConcatenatingInputStream::Skip(
        google::protobuf::io::ConcatenatingInputStream *const this,
        int count)
{
  google::protobuf::io::ZeroCopyInputStream *const *streams; // rax
  __int64 v4; // rax
  int stream_count; // ecx
  __int64 v6; // rbp
  bool result; // al

  if ( this->stream_count_ <= 0 )
    return 0;
  streams = this->streams_;
  while ( 1 )
  {
    v6 = (*(__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *const))(**(_QWORD **)streams + 40LL))(*streams)
       + count;
    result = (*(__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *const, _QWORD))(**(_QWORD **)this->streams_
                                                                                                 + 32LL))(
               *this->streams_,
               (unsigned int)count);
    if ( result )
      break;
    v4 = (*(__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *const))(**(_QWORD **)this->streams_ + 40LL))(*this->streams_);
    stream_count = this->stream_count_;
    this->bytes_retired_ += v4;
    count = v6 - v4;
    streams = this->streams_ + 1;
    this->stream_count_ = stream_count - 1;
    this->streams_ = streams;
    if ( stream_count - 1 <= 0 )
      return 0;
  }
  return result;
};

// Line 399: range 000000000C8DECE0-000000000C8DED02
google::protobuf::int64 __fastcall google::protobuf::io::ConcatenatingInputStream::ByteCount(
        const google::protobuf::io::ConcatenatingInputStream *const this)
{
  google::protobuf::int64 bytes_retired; // r12

  bytes_retired = this->bytes_retired_;
  if ( this->stream_count_ )
    bytes_retired += (*(__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *const))(**(_QWORD **)this->streams_
                                                                                                 + 40LL))(*this->streams_);
  return bytes_retired;
};

// Line 413: range 000000000C8DF250-000000000C8DF271
void __fastcall google::protobuf::io::LimitingInputStream::LimitingInputStream(
        google::protobuf::io::LimitingInputStream *const this,
        google::protobuf::io::ZeroCopyInputStream *input,
        google::protobuf::int64 limit)
{
  int (**vptr_ZeroCopyInputStream)(...); // rax

  vptr_ZeroCopyInputStream = input->_vptr_ZeroCopyInputStream;
  this->_vptr_ZeroCopyInputStream = (int (**)(...))off_1A176078;
  this->input_ = input;
  this->limit_ = limit;
  this->prior_bytes_read_ = ((__int64 (__fastcall *)(google::protobuf::io::ZeroCopyInputStream *))vptr_ZeroCopyInputStream[5])(input);
};

// Line 416: range 000000000C8DE8E0-000000000C8DE909
void __fastcall google::protobuf::io::LimitingInputStream::~LimitingInputStream(
        google::protobuf::io::LimitingInputStream *const this)
{
  google::protobuf::int64 limit; // rsi

  limit = this->limit_;
  this->_vptr_ZeroCopyInputStream = (int (**)(...))off_1A176078;
  if ( limit < 0 )
    (*((void (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *, _QWORD))this->input_->_vptr_ZeroCopyInputStream
     + 3))(
      this->input_,
      (unsigned int)-(int)limit);
  operator delete(this, 0x20uLL);
};

// Line 418: range 000000000C8DE850-000000000C8DE871
void __fastcall google::protobuf::io::LimitingInputStream::~LimitingInputStream(
        google::protobuf::io::LimitingInputStream *const this)
{
  google::protobuf::int64 limit; // rsi

  limit = this->limit_;
  this->_vptr_ZeroCopyInputStream = (int (**)(...))off_1A176078;
  if ( limit < 0 )
    (*((void (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *, _QWORD))this->input_->_vptr_ZeroCopyInputStream
     + 3))(
      this->input_,
      (unsigned int)-(int)limit);
};

// Line 422: range 000000000C8DED10-000000000C8DED6A
bool __fastcall google::protobuf::io::LimitingInputStream::Next(
        google::protobuf::io::LimitingInputStream *const this,
        const void **data,
        int *size)
{
  bool result; // al
  google::protobuf::int64 v5; // rsi
  int v6; // ecx

  if ( this->limit_ <= 0 )
    return 0;
  result = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *, const void **))this->input_->_vptr_ZeroCopyInputStream
            + 2))(
             this->input_,
             data);
  if ( !result )
    return 0;
  v5 = this->limit_ - *size;
  v6 = *size;
  this->limit_ = v5;
  if ( v5 < 0 )
    *size = v6 + v5;
  return result;
};

// Line 433: range 000000000C8DED70-000000000C8DEDAE
void __fastcall google::protobuf::io::LimitingInputStream::BackUp(
        google::protobuf::io::LimitingInputStream *const this,
        int count)
{
  google::protobuf::int64 limit; // rax
  google::protobuf::io::ZeroCopyInputStream *input; // rdi
  void (*v5)(void); // rdx

  limit = this->limit_;
  input = this->input_;
  v5 = (void (*)(void))*((_QWORD *)input->_vptr_ZeroCopyInputStream + 3);
  if ( limit < 0 )
  {
    ((void (__fastcall *)(google::protobuf::io::ZeroCopyInputStream *, _QWORD))v5)(input, (unsigned int)(count - limit));
    this->limit_ = count;
  }
  else
  {
    v5();
    this->limit_ += count;
  }
};

// Line 443: range 000000000C8DE880-000000000C8DE8D8
bool __fastcall google::protobuf::io::LimitingInputStream::Skip(
        google::protobuf::io::LimitingInputStream *const this,
        int count)
{
  google::protobuf::int64 limit; // rax
  bool result; // al

  limit = this->limit_;
  if ( count > limit )
  {
    if ( limit >= 0 )
    {
      (*((void (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *, _QWORD))this->input_->_vptr_ZeroCopyInputStream
       + 4))(
        this->input_,
        (unsigned int)limit);
      this->limit_ = 0LL;
    }
    return 0;
  }
  result = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *))this->input_->_vptr_ZeroCopyInputStream
            + 4))(this->input_);
  if ( !result )
    return 0;
  this->limit_ -= count;
  return result;
};

// Line 456: range 000000000C8DEDB0-000000000C8DEDDB
google::protobuf::int64 __fastcall google::protobuf::io::LimitingInputStream::ByteCount(
        const google::protobuf::io::LimitingInputStream *const this)
{
  __int64 (*v1)(void); // rax

  v1 = (__int64 (*)(void))*((_QWORD *)this->input_->_vptr_ZeroCopyInputStream + 5);
  if ( this->limit_ < 0 )
    return this->limit_ + v1() - this->prior_bytes_read_;
  else
    return v1() - this->prior_bytes_read_;
};

// Line 469: range 000000000C746BE0-000000000C746C01
void __cdecl GLOBAL__sub_I__ZN6google8protobuf2io15FileInputStreamC2Eii()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};

// Line 485: range 000000000C8DE720-000000000C8DE730
void __fastcall google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::~CopyingIstreamInputStream(
        google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream *const this)
{
  ;
};
