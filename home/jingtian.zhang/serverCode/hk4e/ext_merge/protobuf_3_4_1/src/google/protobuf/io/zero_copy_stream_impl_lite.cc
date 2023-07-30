// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/io/zero_copy_stream_impl_lite.cc

// Line 62: range 000000000C8A0040-000000000C8A005E
void __fastcall google::protobuf::io::ArrayInputStream::ArrayInputStream(
        google::protobuf::io::ArrayInputStream *const this,
        const void *data,
        int size,
        int block_size)
{
  this->_vptr_ZeroCopyInputStream = (int (**)(...))off_1A16F4E0;
  if ( block_size <= 0 )
    block_size = size;
  this->data_ = (const google::protobuf::uint8 *const)data;
  this->size_ = size;
  this->block_size_ = block_size;
  *(_QWORD *)&this->position_ = 0LL;
};

// Line 68: range 000000000C89F310-000000000C89F349
bool __fastcall google::protobuf::io::ArrayInputStream::Next(
        google::protobuf::io::ArrayInputStream *const this,
        const void **data,
        int *size)
{
  __int64 position; // rcx
  int v4; // eax
  int block_size; // eax
  const google::protobuf::uint8 *v6; // rcx

  position = this->position_;
  v4 = this->size_;
  if ( (int)position >= v4 )
  {
    this->last_returned_size_ = 0;
    return 0;
  }
  else
  {
    block_size = v4 - position;
    if ( block_size > this->block_size_ )
      block_size = this->block_size_;
    v6 = &this->data_[position];
    this->last_returned_size_ = block_size;
    *data = v6;
    *size = block_size;
    this->position_ += this->last_returned_size_;
    return 1;
  }
};

// Line 81: range 000000000C89F430-000000000C89F58E
void __fastcall google::protobuf::io::ArrayInputStream::BackUp(google::protobuf::io::ArrayInputStream *this, int a2)
{
  int last_returned_size; // eax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v8; // [rsp+10h] [rbp-58h] BYREF

  last_returned_size = this->last_returned_size_;
  if ( last_returned_size <= 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      82);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (last_returned_size_) > (0): ");
    v6 = google::protobuf::internal::LogMessage::operator<<(
           v5,
           "BackUp() can only be called after a successful Next().");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
    last_returned_size = this->last_returned_size_;
  }
  if ( a2 > last_returned_size )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      84);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (count) <= (last_returned_size_): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v3);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
    if ( a2 >= 0 )
      goto LABEL_5;
LABEL_7:
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      85);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
    goto LABEL_5;
  }
  if ( a2 < 0 )
    goto LABEL_7;
LABEL_5:
  this->position_ -= a2;
  this->last_returned_size_ = 0;
};

// Line 84: range 000000000C72A6D6-000000000C72A6E1
void __fastcall __noreturn google::protobuf::io::ArrayInputStream::BackUp()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 90: range 000000000C89F5A0-000000000C89F634
__int64 __fastcall google::protobuf::io::ArrayInputStream::Skip(google::protobuf::io::ArrayInputStream *this, int a2)
{
  int size; // eax
  int position; // edx
  unsigned int v4; // r8d
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v8; // [rsp+10h] [rbp-58h] BYREF

  if ( a2 < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      91);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  size = this->size_;
  position = this->position_;
  this->last_returned_size_ = 0;
  v4 = 0;
  if ( size - position >= a2 )
  {
    size = position + a2;
    v4 = 1;
  }
  this->position_ = size;
  return v4;
};

// Line 91: range 000000000C72A706-000000000C72A713
void __fastcall __noreturn google::protobuf::io::ArrayInputStream::Skip(
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

// Line 103: range 000000000C89F350-000000000C89F354
google::protobuf::int64 __fastcall google::protobuf::io::ArrayInputStream::ByteCount(
        const google::protobuf::io::ArrayInputStream *const this)
{
  return this->position_;
};

// Line 112: range 000000000C8A0060-000000000C8A007E
void __fastcall google::protobuf::io::ArrayOutputStream::ArrayOutputStream(
        google::protobuf::io::ArrayOutputStream *const this,
        void *data,
        int size,
        int block_size)
{
  this->_vptr_ZeroCopyOutputStream = (int (**)(...))off_1A16F520;
  if ( block_size <= 0 )
    block_size = size;
  this->data_ = (google::protobuf::uint8 *const)data;
  this->size_ = size;
  this->block_size_ = block_size;
  *(_QWORD *)&this->position_ = 0LL;
};

// Line 118: range 000000000C89F360-000000000C89F399
bool __fastcall google::protobuf::io::ArrayOutputStream::Next(
        google::protobuf::io::ArrayOutputStream *const this,
        void **data,
        int *size)
{
  __int64 position; // rcx
  int v4; // eax
  int block_size; // eax
  google::protobuf::uint8 *v6; // rcx

  position = this->position_;
  v4 = this->size_;
  if ( (int)position >= v4 )
  {
    this->last_returned_size_ = 0;
    return 0;
  }
  else
  {
    block_size = v4 - position;
    if ( block_size > this->block_size_ )
      block_size = this->block_size_;
    v6 = &this->data_[position];
    this->last_returned_size_ = block_size;
    *data = v6;
    *size = block_size;
    this->position_ += this->last_returned_size_;
    return 1;
  }
};

// Line 131: range 000000000C89F640-000000000C89F79E
void __fastcall google::protobuf::io::ArrayOutputStream::BackUp(google::protobuf::io::ArrayOutputStream *this, int a2)
{
  int last_returned_size; // eax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v8; // [rsp+10h] [rbp-58h] BYREF

  last_returned_size = this->last_returned_size_;
  if ( last_returned_size <= 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      132);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (last_returned_size_) > (0): ");
    v6 = google::protobuf::internal::LogMessage::operator<<(
           v5,
           "BackUp() can only be called after a successful Next().");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
    last_returned_size = this->last_returned_size_;
  }
  if ( a2 > last_returned_size )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      134);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (count) <= (last_returned_size_): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v3);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
    if ( a2 >= 0 )
      goto LABEL_5;
LABEL_7:
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      135);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
    goto LABEL_5;
  }
  if ( a2 < 0 )
    goto LABEL_7;
LABEL_5:
  this->position_ -= a2;
  this->last_returned_size_ = 0;
};

// Line 134: range 000000000C72A718-000000000C72A723
void __fastcall __noreturn google::protobuf::io::ArrayOutputStream::BackUp()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 141: range 000000000C89F3A0-000000000C89F3A4
google::protobuf::int64 __fastcall google::protobuf::io::ArrayOutputStream::ByteCount(
        const google::protobuf::io::ArrayOutputStream *const this)
{
  return this->position_;
};

// Line 147: range 000000000C8A0080-000000000C8A008B
void __fastcall google::protobuf::io::StringOutputStream::StringOutputStream(
        google::protobuf::io::StringOutputStream *const this,
        std::string *target)
{
  this->_vptr_ZeroCopyOutputStream = (int (**)(...))off_1A16F568;
  this->target_ = target;
};

// Line 150: range 000000000C89FCE0-000000000C89FE45
__int64 __fastcall google::protobuf::io::StringOutputStream::Next(
        google::protobuf::io::StringOutputStream *this,
        void **a2,
        int *a3)
{
  std::string *target; // rdi
  std::string::size_type M_string_length; // r14
  unsigned __int64 M_allocated_capacity; // rsi
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogFinisher v13; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v14; // [rsp+10h] [rbp-68h] BYREF

  target = this->target_;
  if ( !target )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v14,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      151);
    v10 = google::protobuf::internal::LogMessage::operator<<(&v14, "CHECK failed: target_ != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v13, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
    target = this->target_;
  }
  M_string_length = target->_M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)target->_M_dataplus._M_p == &target->_anon_0 )
    M_allocated_capacity = 15LL;
  else
    M_allocated_capacity = target->_anon_0._M_allocated_capacity;
  if ( (int)M_string_length < M_allocated_capacity )
    goto LABEL_10;
  if ( (int)M_string_length <= 0x3FFFFFFF )
  {
    LODWORD(M_allocated_capacity) = 2 * M_string_length;
    if ( 2 * (int)M_string_length < 16 )
      LODWORD(M_allocated_capacity) = 16;
    M_allocated_capacity = (int)M_allocated_capacity;
LABEL_10:
    std::string::resize(target, M_allocated_capacity, 0LL);
    *a2 = &this->target_->_M_dataplus._M_p[(int)M_string_length];
    *a3 = this->target_->_M_string_length - M_string_length;
    return 1LL;
  }
  google::protobuf::internal::LogMessage::LogMessage(
    &v14,
    LOGLEVEL_ERROR_0,
    "google/protobuf/io/zero_copy_stream_impl_lite.cc",
    164);
  v11 = google::protobuf::internal::LogMessage::operator<<(&v14, "Cannot allocate buffer larger than kint32max for ");
  v12 = google::protobuf::internal::LogMessage::operator<<(v11, "StringOutputStream.");
  google::protobuf::internal::LogFinisher::operator=(&v13, v12);
  google::protobuf::internal::LogMessage::~LogMessage(&v14);
  return 0LL;
};

// Line 151: range 000000000C72A7EA-000000000C72A7F5
void __fastcall __noreturn google::protobuf::io::StringOutputStream::Next()
{
  google::protobuf::internal::LogMessage_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v0);
  _Unwind_Resume(v1);
};

// Line 181: range 000000000C89FB70-000000000C89FCD5
__int64 __fastcall google::protobuf::io::StringOutputStream::BackUp(
        google::protobuf::io::StringOutputStream *this,
        int a2)
{
  std::string::size_type v3; // rbx
  std::string *target; // rdi
  std::string::size_type M_string_length; // rsi
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogFinisher v10; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v11; // [rsp+10h] [rbp-58h] BYREF

  v3 = a2;
  if ( a2 < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v11,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      182);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=(&v10, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v11);
    target = this->target_;
    if ( target )
      goto LABEL_3;
  }
  else
  {
    target = this->target_;
    if ( target )
      goto LABEL_3;
  }
  google::protobuf::internal::LogMessage::LogMessage(
    &v11,
    LOGLEVEL_FATAL_0,
    "google/protobuf/io/zero_copy_stream_impl_lite.cc",
    183);
  v9 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: target_ != NULL: ");
  google::protobuf::internal::LogFinisher::operator=(&v10, v9);
  google::protobuf::internal::LogMessage::~LogMessage(&v11);
  target = this->target_;
LABEL_3:
  M_string_length = target->_M_string_length;
  if ( v3 > M_string_length )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v11,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      184);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: (count) <= (target_->size()): ");
    google::protobuf::internal::LogFinisher::operator=(&v10, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v11);
    target = this->target_;
    M_string_length = target->_M_string_length;
  }
  return std::string::resize(target, M_string_length - v3, 0LL);
};

// Line 184: range 000000000C72A7BA-000000000C72A7C5
void __fastcall __noreturn google::protobuf::io::StringOutputStream::BackUp()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 189: range 000000000C89F7B0-000000000C89F82A
std::string::size_type __fastcall google::protobuf::io::StringOutputStream::ByteCount(
        google::protobuf::io::StringOutputStream *this)
{
  std::string *target; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogFinisher v4; // [rsp+1h] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v5; // [rsp+2h] [rbp-58h] BYREF

  target = this->target_;
  if ( target )
    return target->_M_string_length;
  google::protobuf::internal::LogMessage::LogMessage(
    &v5,
    LOGLEVEL_FATAL_0,
    "google/protobuf/io/zero_copy_stream_impl_lite.cc",
    189);
  v3 = google::protobuf::internal::LogMessage::operator<<(&v5, "CHECK failed: target_ != NULL: ");
  google::protobuf::internal::LogFinisher::operator=(&v4, v3);
  google::protobuf::internal::LogMessage::~LogMessage(&v5);
  return this->target_->_M_string_length;
};

// Line 189: range 000000000C72A748-000000000C72A755
void __fastcall __noreturn google::protobuf::io::StringOutputStream::ByteCount(
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

// Line 194: range 000000000C8A0090-000000000C8A0094
void __fastcall google::protobuf::io::StringOutputStream::SetString(
        google::protobuf::io::StringOutputStream *const this,
        std::string *target)
{
  this->target_ = target;
};

// Line 199: range 000000000C8A00A0-000000000C8A0121
void __fastcall google::protobuf::io::LazyStringOutputStream::LazyStringOutputStream(__int64 a1, __int64 a2)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogFinisher v3; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v4; // [rsp+10h] [rbp-58h] BYREF

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = off_1A16F5B0;
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = a2;
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(&v4, LOGLEVEL_FATAL_0, "./google/protobuf/stubs/logging.h", 166);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v4, "'callback' must not be NULL");
    google::protobuf::internal::LogFinisher::operator=(&v3, v2);
    google::protobuf::internal::LogMessage::~LogMessage(&v4);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_BYTE *)(a1 + 24) = 0;
};

// Line 206: range 000000000C89FE50-000000000C89FE84
bool __fastcall google::protobuf::io::LazyStringOutputStream::Next(
        google::protobuf::io::LazyStringOutputStream *const this,
        void **data,
        int *size)
{
  std::string *v4; // rax

  if ( !this->string_is_set_ )
  {
    v4 = (std::string *)(*((__int64 (__fastcall **)(google::protobuf::ResultCallback<std::string*> *))this->callback_.ptr_->_vptr_ResultCallback
                         + 2))(this->callback_.ptr_);
    this->string_is_set_ = 1;
    this->target_ = v4;
  }
  return google::protobuf::io::StringOutputStream::Next(this, data, size);
};

// Line 215: range 000000000C89F830-000000000C89F840
google::protobuf::int64 __fastcall google::protobuf::io::LazyStringOutputStream::ByteCount(
        const google::protobuf::io::LazyStringOutputStream *const this)
{
  if ( this->string_is_set_ )
    return google::protobuf::io::StringOutputStream::ByteCount(&this->google::protobuf::io::StringOutputStream);
  else
    return 0LL;
};

// Line 220: range 000000000C89F3B0-000000000C89F40B
int __fastcall google::protobuf::io::CopyingInputStream::Skip(
        google::protobuf::io::CopyingInputStream *const this,
        int count)
{
  int i; // r12d
  __int64 v3; // rdx
  int v4; // eax
  char junk[4096]; // [rsp+0h] [rbp-1028h] BYREF

  if ( count <= 0 )
    return 0;
  for ( i = 0; i < count; i += v4 )
  {
    v3 = (unsigned int)(count - i);
    if ( (int)v3 > 4096 )
      v3 = 4096LL;
    v4 = (*((__int64 (__fastcall **)(google::protobuf::io::CopyingInputStream *const, char *, __int64))this->_vptr_CopyingInputStream
          + 2))(
           this,
           junk,
           v3);
    if ( v4 <= 0 )
      break;
  }
  return i;
};

// Line 243: range 000000000C8A0130-000000000C8A0166
void __fastcall google::protobuf::io::CopyingInputStreamAdaptor::CopyingInputStreamAdaptor(
        google::protobuf::io::CopyingInputStreamAdaptor *const this,
        google::protobuf::io::CopyingInputStream *copying_stream,
        int block_size)
{
  this->_vptr_ZeroCopyInputStream = (int (**)(...))off_1A16F628;
  *(_WORD *)&this->owns_copying_stream_ = 0;
  if ( block_size <= 0 )
    block_size = 0x2000;
  this->copying_stream_ = copying_stream;
  this->position_ = 0LL;
  this->buffer_.array_ = 0LL;
  this->buffer_size_ = block_size;
  *(_QWORD *)&this->buffer_used_ = 0LL;
};

// Line 246: range 000000000C89FED0-000000000C89FEE2
void __fastcall google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(
        google::protobuf::io::CopyingInputStreamAdaptor *const this)
{
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(this);
  operator delete(this, 0x38uLL);
};

// Line 246: range 000000000C89FE90-000000000C89FEC1
void __fastcall google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(
        google::protobuf::io::CopyingInputStreamAdaptor *const this)
{
  bool v1; // zf
  google::protobuf::io::CopyingInputStream *copying_stream; // rdi
  unsigned __int8 *array; // rdi

  v1 = !this->owns_copying_stream_;
  this->_vptr_ZeroCopyInputStream = (int (**)(...))off_1A16F628;
  if ( !v1 )
  {
    copying_stream = this->copying_stream_;
    if ( copying_stream )
      (*((void (__fastcall **)(google::protobuf::io::CopyingInputStream *))copying_stream->_vptr_CopyingInputStream + 1))(copying_stream);
  }
  array = this->buffer_.array_;
  if ( array )
    operator delete[](array);
};

// Line 252: range 000000000C8A0230-000000000C8A031E
bool __fastcall google::protobuf::io::CopyingInputStreamAdaptor::Next(
        google::protobuf::io::CopyingInputStreamAdaptor *const this,
        const void **data,
        int *size)
{
  bool failed; // r12
  unsigned __int8 *array; // rsi
  int backup_bytes; // eax
  int v8; // eax
  bool result; // al

  failed = this->failed_;
  if ( failed )
    return 0;
  array = this->buffer_.array_;
  if ( !array )
  {
    google::protobuf::io::CopyingInputStreamAdaptor::AllocateBufferIfNeeded(this);
    array = this->buffer_.array_;
  }
  backup_bytes = this->backup_bytes_;
  if ( backup_bytes > 0 )
  {
    *data = &array[this->buffer_used_ - (__int64)backup_bytes];
    *size = backup_bytes;
    result = 1;
    this->backup_bytes_ = 0;
  }
  else
  {
    v8 = (*((__int64 (__fastcall **)(google::protobuf::io::CopyingInputStream *, unsigned __int8 *, _QWORD))this->copying_stream_->_vptr_CopyingInputStream
          + 2))(
           this->copying_stream_,
           array,
           (unsigned int)this->buffer_size_);
    this->buffer_used_ = v8;
    if ( v8 <= 0 )
    {
      if ( v8 )
        this->failed_ = 1;
      google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(this);
    }
    else
    {
      this->position_ += v8;
      failed = 1;
      *size = v8;
      *data = this->buffer_.array_;
    }
    return failed;
  }
  return result;
};

// Line 286: range 000000000C89F9D0-000000000C89FB5D
void __fastcall google::protobuf::io::CopyingInputStreamAdaptor::BackUp(
        google::protobuf::io::CopyingInputStreamAdaptor *this,
        int a2)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v8; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v9; // [rsp+10h] [rbp-58h] BYREF

  if ( !this->backup_bytes_ && this->buffer_.array_ )
  {
    if ( this->buffer_used_ >= a2 )
      goto LABEL_4;
LABEL_7:
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      289);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: (count) <= (buffer_used_): ");
    v5 = google::protobuf::internal::LogMessage::operator<<(
           v4,
           " Can't back up over more bytes than were returned by the last call to Next().");
    google::protobuf::internal::LogFinisher::operator=(&v8, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
    if ( a2 >= 0 )
      goto LABEL_5;
    goto LABEL_8;
  }
  google::protobuf::internal::LogMessage::LogMessage(
    &v9,
    LOGLEVEL_FATAL_0,
    "google/protobuf/io/zero_copy_stream_impl_lite.cc",
    287);
  v2 = google::protobuf::internal::LogMessage::operator<<(
         &v9,
         "CHECK failed: backup_bytes_ == 0 && buffer_.get() != NULL: ");
  v3 = google::protobuf::internal::LogMessage::operator<<(v2, " BackUp() can only be called after Next().");
  google::protobuf::internal::LogFinisher::operator=(&v8, v3);
  google::protobuf::internal::LogMessage::~LogMessage(&v9);
  if ( this->buffer_used_ < a2 )
    goto LABEL_7;
LABEL_4:
  if ( a2 >= 0 )
  {
LABEL_5:
    this->backup_bytes_ = a2;
    return;
  }
LABEL_8:
  google::protobuf::internal::LogMessage::LogMessage(
    &v9,
    LOGLEVEL_FATAL_0,
    "google/protobuf/io/zero_copy_stream_impl_lite.cc",
    292);
  v6 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: (count) >= (0): ");
  v7 = google::protobuf::internal::LogMessage::operator<<(v6, " Parameter to BackUp() can't be negative.");
  google::protobuf::internal::LogFinisher::operator=(&v8, v7);
  google::protobuf::internal::LogMessage::~LogMessage(&v9);
  this->backup_bytes_ = a2;
};

// Line 289: range 000000000C72A78A-000000000C72A795
void __fastcall __noreturn google::protobuf::io::CopyingInputStreamAdaptor::BackUp()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 298: range 000000000C89FEF0-000000000C89FFAF
bool __fastcall google::protobuf::io::CopyingInputStreamAdaptor::Skip(
        google::protobuf::io::CopyingInputStreamAdaptor *this,
        int a2)
{
  bool result; // al
  int backup_bytes; // eax
  google::protobuf::io::CopyingInputStream *copying_stream; // rdi
  int v6; // ebx
  int v7; // eax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  if ( a2 < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      299);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  result = 0;
  if ( !this->failed_ )
  {
    backup_bytes = this->backup_bytes_;
    if ( a2 <= backup_bytes )
    {
      this->backup_bytes_ = backup_bytes - a2;
      return 1;
    }
    else
    {
      copying_stream = this->copying_stream_;
      v6 = a2 - backup_bytes;
      this->backup_bytes_ = 0;
      v7 = (*((__int64 (__fastcall **)(google::protobuf::io::CopyingInputStream *, _QWORD))copying_stream->_vptr_CopyingInputStream
            + 3))(
             copying_stream,
             (unsigned int)(a2 - backup_bytes));
      this->position_ += v7;
      return v6 == v7;
    }
  }
  return result;
};

// Line 299: range 000000000C72A80A-000000000C72A817
void __fastcall __noreturn google::protobuf::io::CopyingInputStreamAdaptor::Skip(
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

// Line 322: range 000000000C89F410-000000000C89F41B
google::protobuf::int64 __fastcall google::protobuf::io::CopyingInputStreamAdaptor::ByteCount(
        const google::protobuf::io::CopyingInputStreamAdaptor *const this)
{
  return this->position_ - this->backup_bytes_;
};

// Line 325: range 000000000C89FFC0-000000000C89FFF2
void __fastcall google::protobuf::io::CopyingInputStreamAdaptor::AllocateBufferIfNeeded(
        google::protobuf::io::CopyingInputStreamAdaptor *const this)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 *array; // rdi
  unsigned __int8 *v4; // rbp

  v2 = (unsigned __int8 *)operator new[](this->buffer_size_);
  array = this->buffer_.array_;
  if ( v2 != array )
  {
    v4 = v2;
    if ( array )
      operator delete[](array);
    this->buffer_.array_ = v4;
  }
};

// Line 326: range 000000000C8A0170-000000000C8A0180
void __fastcall google::protobuf::io::CopyingInputStreamAdaptor::AllocateBufferIfNeeded(
        google::protobuf::io::CopyingInputStreamAdaptor *const this)
{
  if ( !this->buffer_.array_ )
    google::protobuf::io::CopyingInputStreamAdaptor::AllocateBufferIfNeeded(this);
};

// Line 331: range 000000000C8A0190-000000000C8A021C
void __fastcall google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(
        google::protobuf::io::CopyingInputStreamAdaptor *this)
{
  unsigned __int8 *array; // rdi
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogFinisher v4; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v5; // [rsp+10h] [rbp-58h] BYREF

  if ( this->backup_bytes_ )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v5,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      332);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v5, "CHECK failed: (backup_bytes_) == (0): ");
    google::protobuf::internal::LogFinisher::operator=(&v4, v3);
    google::protobuf::internal::LogMessage::~LogMessage(&v5);
  }
  array = this->buffer_.array_;
  this->buffer_used_ = 0;
  if ( array )
  {
    operator delete[](array);
    this->buffer_.array_ = 0LL;
  }
};

// Line 332: range 000000000C72A82E-000000000C72A83B
void __fastcall __noreturn google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(
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

// Line 346: range 000000000C8A0330-000000000C8A0365
void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor(
        google::protobuf::io::CopyingOutputStreamAdaptor *const this,
        google::protobuf::io::CopyingOutputStream *copying_stream,
        int block_size)
{
  this->_vptr_ZeroCopyOutputStream = (int (**)(...))off_1A16F668;
  *(_WORD *)&this->owns_copying_stream_ = 0;
  if ( block_size <= 0 )
    block_size = 0x2000;
  this->copying_stream_ = copying_stream;
  this->position_ = 0LL;
  this->buffer_.array_ = 0LL;
  this->buffer_size_ = block_size;
  this->buffer_used_ = 0;
};

// Line 349: range 000000000C8A0400-000000000C8A0439
void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(
        google::protobuf::io::CopyingOutputStreamAdaptor *const this)
{
  google::protobuf::io::CopyingOutputStream *copying_stream; // rdi
  unsigned __int8 *array; // rdi

  this->_vptr_ZeroCopyOutputStream = (int (**)(...))off_1A16F668;
  google::protobuf::io::CopyingOutputStreamAdaptor::WriteBuffer(this);
  if ( this->owns_copying_stream_ )
  {
    copying_stream = this->copying_stream_;
    if ( copying_stream )
      (*((void (__fastcall **)(google::protobuf::io::CopyingOutputStream *))copying_stream->_vptr_CopyingOutputStream + 1))(copying_stream);
  }
  array = this->buffer_.array_;
  if ( array )
    operator delete[](array);
};

// Line 349: range 000000000C8A0440-000000000C8A0452
void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(
        google::protobuf::io::CopyingOutputStreamAdaptor *const this)
{
  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(this);
  operator delete(this, 0x30uLL);
};

// Line 357: range 000000000C8A0460-000000000C8A04DC
// attributes: thunk
bool __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::Flush(
        google::protobuf::io::CopyingOutputStreamAdaptor *const this)
{
  return google::protobuf::io::CopyingOutputStreamAdaptor::WriteBuffer(this);
};

// Line 373: range 000000000C89F850-000000000C89F9C6
__int64 __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::BackUp(
        google::protobuf::io::CopyingOutputStreamAdaptor *this,
        int a2)
{
  int buffer_used; // eax
  __int64 result; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  if ( a2 < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      374);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  buffer_used = this->buffer_used_;
  if ( buffer_used == this->buffer_size_ )
  {
    if ( a2 <= buffer_used )
    {
LABEL_5:
      result = (unsigned int)(buffer_used - a2);
      this->buffer_used_ = result;
      return result;
    }
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      LOGLEVEL_FATAL_0,
      "google/protobuf/io/zero_copy_stream_impl_lite.cc",
      375);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (buffer_used_) == (buffer_size_): ");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, " BackUp() can only be called after Next().");
    google::protobuf::internal::LogFinisher::operator=(&v9, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    buffer_used = this->buffer_used_;
    if ( a2 <= buffer_used )
      goto LABEL_5;
  }
  google::protobuf::internal::LogMessage::LogMessage(
    &v10,
    LOGLEVEL_FATAL_0,
    "google/protobuf/io/zero_copy_stream_impl_lite.cc",
    377);
  v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (count) <= (buffer_used_): ");
  v7 = google::protobuf::internal::LogMessage::operator<<(
         v6,
         " Can't back up over more bytes than were returned by the last call to Next().");
  google::protobuf::internal::LogFinisher::operator=(&v9, v7);
  google::protobuf::internal::LogMessage::~LogMessage(&v10);
  result = (unsigned int)(this->buffer_used_ - a2);
  this->buffer_used_ = result;
  return result;
};

// Line 375: range 000000000C72A75A-000000000C72A765
void __fastcall __noreturn google::protobuf::io::CopyingOutputStreamAdaptor::BackUp()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 385: range 000000000C89F420-000000000C89F428
google::protobuf::int64 __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::ByteCount(
        const google::protobuf::io::CopyingOutputStreamAdaptor *const this)
{
  return this->position_ + this->buffer_used_;
};

// Line 389: range 000000000C8A0370-000000000C8A03F2
bool __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::WriteBuffer(
        google::protobuf::io::CopyingOutputStreamAdaptor *const this)
{
  bool result; // al
  unsigned __int8 *array; // rdi

  if ( this->failed_ )
    return 0;
  result = 1;
  if ( this->buffer_used_ )
  {
    result = (*((__int64 (__fastcall **)(google::protobuf::io::CopyingOutputStream *, unsigned __int8 *))this->copying_stream_->_vptr_CopyingOutputStream
              + 2))(
               this->copying_stream_,
               this->buffer_.array_);
    if ( result )
    {
      this->position_ += this->buffer_used_;
      this->buffer_used_ = 0;
    }
    else
    {
      array = this->buffer_.array_;
      result = 0;
      this->failed_ = 1;
      this->buffer_used_ = 0;
      if ( array )
      {
        operator delete[](array);
        this->buffer_.array_ = 0LL;
        return 0;
      }
    }
  }
  return result;
};

// Line 407: range 000000000C8A0000-000000000C8A0032
void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded(
        google::protobuf::io::CopyingOutputStreamAdaptor *const this)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 *array; // rdi
  unsigned __int8 *v4; // rbp

  v2 = (unsigned __int8 *)operator new[](this->buffer_size_);
  array = this->buffer_.array_;
  if ( v2 != array )
  {
    v4 = v2;
    if ( array )
      operator delete[](array);
    this->buffer_.array_ = v4;
  }
};

// Line 408: range 000000000C8A04E0-000000000C8A04F0
void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded(
        google::protobuf::io::CopyingOutputStreamAdaptor *const this)
{
  if ( !this->buffer_.array_ )
    google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded(this);
};

// Line 413: range 000000000C8A0500-000000000C8A0522
void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::FreeBuffer(
        google::protobuf::io::CopyingOutputStreamAdaptor *const this)
{
  unsigned __int8 *array; // rdi

  this->buffer_used_ = 0;
  array = this->buffer_.array_;
  if ( array )
  {
    operator delete[](array);
    this->buffer_.array_ = 0LL;
  }
};

// Line 422: range 000000000C746A00-000000000C746A21
void __cdecl GLOBAL__sub_I__ZN6google8protobuf2io16ArrayInputStreamC2EPKvii()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
