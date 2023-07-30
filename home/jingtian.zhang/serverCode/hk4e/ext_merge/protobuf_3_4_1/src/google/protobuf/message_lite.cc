// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/message_lite.cc

// Line 67: range 000000000C89C8B0-000000000C89CA90
void __fastcall google::protobuf::`anonymous namespace'::ByteSizeConsistencyError(
        google::protobuf::_anonymous_namespace_ *this,
        google::protobuf::_anonymous_namespace_ *a2,
        google::protobuf::_anonymous_namespace_ *a3,
        __int64 a4,
        const google::protobuf::MessageLite *a5)
{
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // r15
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // r13
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogFinisher v15; // [rsp+Fh] [rbp-99h] BYREF
  std::string v16; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 v17; // [rsp+30h] [rbp-78h] BYREF

  if ( this == a2 )
  {
    if ( this == a3 )
      goto LABEL_3;
    goto LABEL_7;
  }
  google::protobuf::internal::LogMessage::LogMessage(&v17, LOGLEVEL_FATAL_0, "google/protobuf/message_lite.cc", 68);
  v8 = google::protobuf::internal::LogMessage::operator<<(
         &v17,
         "CHECK failed: (byte_size_before_serialization) == (byte_size_after_serialization): ");
  (*(void (__fastcall **)(std::string *, __int64))(*(_QWORD *)a4 + 16LL))(&v16, a4);
  v9 = google::protobuf::internal::LogMessage::operator<<(v8, &v16);
  v10 = google::protobuf::internal::LogMessage::operator<<(v9, " was modified concurrently during serialization.");
  google::protobuf::internal::LogFinisher::operator=(&v15, v10);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16._M_dataplus._M_p != &v16._anon_0 )
    operator delete(v16._M_dataplus._M_p);
  google::protobuf::internal::LogMessage::~LogMessage(&v17);
  if ( this != a3 )
  {
LABEL_7:
    google::protobuf::internal::LogMessage::LogMessage(&v17, LOGLEVEL_FATAL_0, "google/protobuf/message_lite.cc", 71);
    v11 = google::protobuf::internal::LogMessage::operator<<(
            &v17,
            "CHECK failed: (bytes_produced_by_serialization) == (byte_size_before_serialization): ");
    v12 = google::protobuf::internal::LogMessage::operator<<(
            v11,
            "Byte size calculation and serialization were inconsistent.  This may indicate a bug in protocol buffers or i"
            "t may be caused by concurrent modification of ");
    (*(void (__fastcall **)(std::string *, __int64))(*(_QWORD *)a4 + 16LL))(&v16, a4);
    v13 = google::protobuf::internal::LogMessage::operator<<(v12, &v16);
    v14 = google::protobuf::internal::LogMessage::operator<<(v13, ".");
    google::protobuf::internal::LogFinisher::operator=(&v15, v14);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16._M_dataplus._M_p != &v16._anon_0 )
      operator delete(v16._M_dataplus._M_p);
    google::protobuf::internal::LogMessage::~LogMessage(&v17);
  }
LABEL_3:
  google::protobuf::internal::LogMessage::LogMessage(&v17, LOGLEVEL_FATAL_0, "google/protobuf/message_lite.cc", 75);
  v7 = google::protobuf::internal::LogMessage::operator<<(&v17, "This shouldn't be called if all the sizes are equal.");
  google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v16, v7);
  google::protobuf::internal::LogMessage::~LogMessage(&v17);
};

// Line 78: range 000000000C89D430-000000000C89D5A3
__int64 __fastcall google::protobuf::`anonymous namespace'::InitializationErrorMessage(
        __int64 a1,
        const google::protobuf::MessageLite *a2)
{
  std::forward_iterator_tag v2; // cl
  std::string *(__fastcall *v3)(std::string *__return_ptr __struct_ptr, const google::protobuf::MessageLite *const); // rax
  std::string v5[2]; // [rsp+0h] [rbp-48h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  std::string::_M_append(a1, "Can't ", 6LL);
  if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8)) <= 4 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(a1, "parse", 5LL);
  if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8)) <= 0x11 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(a1, " message of type \"", 18LL);
  (*((void (__fastcall **)(std::string *, const google::protobuf::MessageLite *))a2->_vptr_MessageLite + 2))(v5, a2);
  std::string::_M_append(a1, v5[0]._M_dataplus._M_p, v5[0]._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5[0]._M_dataplus._M_p != &v5[0]._anon_0 )
    operator delete(v5[0]._M_dataplus._M_p);
  if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8)) <= 0x28 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(a1, "\" because it is missing required fields: ", 41LL);
  v3 = (std::string *(__fastcall *)(std::string *__return_ptr __struct_ptr, const google::protobuf::MessageLite *const))*((_QWORD *)a2->_vptr_MessageLite + 9);
  if ( v3 == google::protobuf::MessageLite::InitializationErrorString[abi:cxx11] )
  {
    v5[0]._M_dataplus._M_p = v5[0]._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(v5, "(cannot determine missing fields for lite message)", "", v2);
  }
  else
  {
    v3(v5, a2);
  }
  std::string::_M_append(a1, v5[0]._M_dataplus._M_p, v5[0]._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5[0]._M_dataplus._M_p != &v5[0]._anon_0 )
    operator delete(v5[0]._M_dataplus._M_p);
  return a1;
};

// Line 121: range 000000000C72A696-000000000C72A6AD
void __fastcall __noreturn google::protobuf::MessageLite::MergeFromCodedStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        google::protobuf::internal::LogMessage_0 a12)
{
  struct _Unwind_Exception *v12; // rbp

  std::string::~string(&a8);
  google::protobuf::internal::LogMessage::~LogMessage(&a12);
  _Unwind_Resume(v12);
};

// Line 121: range 000000000C72A612-000000000C72A631
void __fastcall __noreturn google::protobuf::MessageLite::ParseFromArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        google::protobuf::internal::LogMessage_0 a12)
{
  struct _Unwind_Exception *v12; // rbp
  google::protobuf::io::CodedInputStream *v13; // r13

  std::string::~string(&a8);
  google::protobuf::internal::LogMessage::~LogMessage(&a12);
  google::protobuf::io::CodedInputStream::~CodedInputStream(v13);
  _Unwind_Resume(v12);
};

// Line 121: range 000000000C72A65A-000000000C72A671
void __fastcall __noreturn google::protobuf::MessageLite::ParseFromCodedStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        google::protobuf::internal::LogMessage_0 a12)
{
  struct _Unwind_Exception *v12; // rbp

  std::string::~string(&a8);
  google::protobuf::internal::LogMessage::~LogMessage(&a12);
  _Unwind_Resume(v12);
};

// Line 121: range 000000000C72A636-000000000C72A655
void __fastcall __noreturn google::protobuf::MessageLite::ParseFromString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        google::protobuf::internal::LogMessage_0 a12)
{
  struct _Unwind_Exception *v12; // rbp
  google::protobuf::io::CodedInputStream *v13; // r13

  std::string::~string(&a8);
  google::protobuf::internal::LogMessage::~LogMessage(&a12);
  google::protobuf::io::CodedInputStream::~CodedInputStream(v13);
  _Unwind_Resume(v12);
};

// Line 148: range 000000000C72A558-000000000C72A563
void __fastcall __noreturn google::protobuf::MessageLite::ParsePartialFromArray()
{
  google::protobuf::io::CodedInputStream *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::io::CodedInputStream::~CodedInputStream(v0);
  _Unwind_Resume(v1);
};

// Line 148: range 000000000C72A548-000000000C72A553
void __fastcall __noreturn google::protobuf::MessageLite::ParsePartialFromString()
{
  google::protobuf::io::CodedInputStream *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::io::CodedInputStream::~CodedInputStream(v0);
  _Unwind_Resume(v1);
};

// Line 156: range 000000000C89D400-000000000C89D42D
google::protobuf::MessageLite *__fastcall google::protobuf::MessageLite::New(
        const google::protobuf::MessageLite *const this,
        google::protobuf::Arena *arena)
{
  google::protobuf::MessageLite *v2; // rax
  google::protobuf::MessageLite *v3; // r12

  v2 = (google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(const google::protobuf::MessageLite *const))this->_vptr_MessageLite
                                         + 3))(this);
  v3 = v2;
  if ( arena )
    google::protobuf::Arena::Own<google::protobuf::MessageLite>(arena, v2);
  return v3;
};

// Line 164: range 000000000C89DAF0-000000000C89DB9E
__int64 __fastcall google::protobuf::MessageLite::MergeFromCodedStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::CodedInputStream *a2)
{
  unsigned int v2; // r12d
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogFinisher v5; // [rsp+Fh] [rbp-79h] BYREF
  std::string value; // [rsp+10h] [rbp-78h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+30h] [rbp-58h] BYREF

  v2 = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *, google::protobuf::io::CodedInputStream *))this->_vptr_MessageLite
        + 11))(
         this,
         a2);
  if ( !(_BYTE)v2 )
    return v2;
  v2 = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *))this->_vptr_MessageLite + 8))(this);
  if ( (_BYTE)v2 )
    return v2;
  google::protobuf::internal::LogMessage::LogMessage(&v7, LOGLEVEL_ERROR_0, "google/protobuf/message_lite.cc", 121);
  google::protobuf::`anonymous namespace'::InitializationErrorMessage((__int64)&value, this);
  v4 = google::protobuf::internal::LogMessage::operator<<(&v7, &value);
  google::protobuf::internal::LogFinisher::operator=(&v5, v4);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
    operator delete(value._M_dataplus._M_p);
  google::protobuf::internal::LogMessage::~LogMessage(&v7);
  return v2;
};

// Line 168: range 000000000C89D8A0-000000000C89D95E
__int64 __fastcall google::protobuf::MessageLite::ParseFromCodedStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::CodedInputStream *a2)
{
  unsigned int v2; // r12d
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogFinisher v5; // [rsp+Fh] [rbp-79h] BYREF
  std::string value; // [rsp+10h] [rbp-78h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+30h] [rbp-58h] BYREF

  (*((void (__fastcall **)(google::protobuf::MessageLite *))this->_vptr_MessageLite + 7))(this);
  v2 = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *, google::protobuf::io::CodedInputStream *))this->_vptr_MessageLite
        + 11))(
         this,
         a2);
  if ( !(_BYTE)v2 )
    return v2;
  v2 = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *))this->_vptr_MessageLite + 8))(this);
  if ( (_BYTE)v2 )
    return v2;
  google::protobuf::internal::LogMessage::LogMessage(&v7, LOGLEVEL_ERROR_0, "google/protobuf/message_lite.cc", 121);
  google::protobuf::`anonymous namespace'::InitializationErrorMessage((__int64)&value, this);
  v4 = google::protobuf::internal::LogMessage::operator<<(&v7, &value);
  google::protobuf::internal::LogFinisher::operator=(&v5, v4);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
    operator delete(value._M_dataplus._M_p);
  google::protobuf::internal::LogMessage::~LogMessage(&v7);
  return v2;
};

// Line 172: range 000000000C89CC30-000000000C89CC58
bool __fastcall google::protobuf::MessageLite::ParsePartialFromCodedStream(
        google::protobuf::MessageLite *const this,
        google::protobuf::io::CodedInputStream *input)
{
  (*((void (__fastcall **)(google::protobuf::MessageLite *const))this->_vptr_MessageLite + 7))(this);
  return (*((__int64 (__fastcall **)(google::protobuf::MessageLite *const, google::protobuf::io::CodedInputStream *))this->_vptr_MessageLite
          + 11))(
           this,
           input);
};

// Line 176: range 000000000C89D970-000000000C89DA13
__int64 __fastcall google::protobuf::MessageLite::ParseFromZeroCopyStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::ZeroCopyInputStream *a2)
{
  unsigned int legitimate_message_end; // r12d
  google::protobuf::io::CodedInputStream v4; // [rsp+0h] [rbp-58h] BYREF

  *(_WORD *)&v4.legitimate_message_end_ = 0;
  v4.input_ = a2;
  v4.buffer_ = 0LL;
  v4.buffer_end_ = 0LL;
  *(_QWORD *)&v4.total_bytes_read_ = 0LL;
  v4.last_tag_ = 0;
  *(_QWORD *)&v4.current_limit_ = 0x7FFFFFFFLL;
  v4.total_bytes_limit_ = 0x7FFFFFFF;
  v4.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v4.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v4.disable_strict_correctness_enforcement_ = 1;
  v4.extension_pool_ = 0LL;
  v4.extension_factory_ = 0LL;
  google::protobuf::io::CodedInputStream::Refresh(&v4);
  legitimate_message_end = google::protobuf::MessageLite::ParseFromCodedStream(this, &v4);
  if ( (_BYTE)legitimate_message_end )
    legitimate_message_end = v4.legitimate_message_end_;
  google::protobuf::io::CodedInputStream::~CodedInputStream(&v4);
  return legitimate_message_end;
};

// Line 177: range 000000000C72A676-000000000C72A681
void __fastcall __noreturn google::protobuf::MessageLite::ParseFromZeroCopyStream()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::io::CodedInputStream::~CodedInputStream((google::protobuf::io::CodedInputStream *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 182: range 000000000C89CC60-000000000C89CD0F
__int64 __fastcall google::protobuf::MessageLite::ParsePartialFromZeroCopyStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::ZeroCopyInputStream *a2)
{
  unsigned int legitimate_message_end; // r12d
  google::protobuf::io::CodedInputStream v5; // [rsp+0h] [rbp-58h] BYREF

  *(_WORD *)&v5.legitimate_message_end_ = 0;
  v5.buffer_ = 0LL;
  v5.buffer_end_ = 0LL;
  v5.input_ = a2;
  *(_QWORD *)&v5.total_bytes_read_ = 0LL;
  v5.last_tag_ = 0;
  *(_QWORD *)&v5.current_limit_ = 0x7FFFFFFFLL;
  v5.total_bytes_limit_ = 0x7FFFFFFF;
  v5.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v5.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v5.disable_strict_correctness_enforcement_ = 1;
  v5.extension_pool_ = 0LL;
  v5.extension_factory_ = 0LL;
  google::protobuf::io::CodedInputStream::Refresh(&v5);
  (*((void (__fastcall **)(google::protobuf::MessageLite *))this->_vptr_MessageLite + 7))(this);
  legitimate_message_end = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *, google::protobuf::io::CodedInputStream *))this->_vptr_MessageLite
                            + 11))(
                             this,
                             &v5);
  if ( (_BYTE)legitimate_message_end )
    legitimate_message_end = v5.legitimate_message_end_;
  google::protobuf::io::CodedInputStream::~CodedInputStream(&v5);
  return legitimate_message_end;
};

// Line 183: range 000000000C72A528-000000000C72A533
void __fastcall __noreturn google::protobuf::MessageLite::ParsePartialFromZeroCopyStream()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::io::CodedInputStream::~CodedInputStream((google::protobuf::io::CodedInputStream *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 189: range 000000000C89DA20-000000000C89DAEB
__int64 __fastcall google::protobuf::MessageLite::ParseFromBoundedZeroCopyStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::ZeroCopyInputStream *a2,
        int a3)
{
  unsigned int legitimate_message_end; // r12d
  google::protobuf::io::CodedInputStream v6; // [rsp+0h] [rbp-68h] BYREF

  *(_WORD *)&v6.legitimate_message_end_ = 0;
  v6.input_ = a2;
  v6.buffer_ = 0LL;
  v6.buffer_end_ = 0LL;
  *(_QWORD *)&v6.total_bytes_read_ = 0LL;
  v6.last_tag_ = 0;
  *(_QWORD *)&v6.current_limit_ = 0x7FFFFFFFLL;
  v6.total_bytes_limit_ = 0x7FFFFFFF;
  v6.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v6.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v6.disable_strict_correctness_enforcement_ = 1;
  v6.extension_pool_ = 0LL;
  v6.extension_factory_ = 0LL;
  google::protobuf::io::CodedInputStream::Refresh(&v6);
  google::protobuf::io::CodedInputStream::PushLimit(&v6, a3);
  legitimate_message_end = google::protobuf::MessageLite::ParseFromCodedStream(this, &v6);
  if ( (_BYTE)legitimate_message_end )
  {
    legitimate_message_end = v6.legitimate_message_end_;
    if ( v6.legitimate_message_end_ )
      LOBYTE(legitimate_message_end) = google::protobuf::io::CodedInputStream::BytesUntilLimit(&v6) == 0;
  }
  google::protobuf::io::CodedInputStream::~CodedInputStream(&v6);
  return legitimate_message_end;
};

// Line 190: range 000000000C72A686-000000000C72A691
void __fastcall __noreturn google::protobuf::MessageLite::ParseFromBoundedZeroCopyStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::io::CodedInputStream::~CodedInputStream((google::protobuf::io::CodedInputStream *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 198: range 000000000C89CD20-000000000C89CDF3
__int64 __fastcall google::protobuf::MessageLite::ParsePartialFromBoundedZeroCopyStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::ZeroCopyInputStream *a2,
        int a3)
{
  unsigned int legitimate_message_end; // r12d
  google::protobuf::io::CodedInputStream v7; // [rsp+0h] [rbp-68h] BYREF

  *(_WORD *)&v7.legitimate_message_end_ = 0;
  v7.input_ = a2;
  v7.buffer_ = 0LL;
  v7.buffer_end_ = 0LL;
  *(_QWORD *)&v7.total_bytes_read_ = 0LL;
  v7.last_tag_ = 0;
  *(_QWORD *)&v7.current_limit_ = 0x7FFFFFFFLL;
  v7.total_bytes_limit_ = 0x7FFFFFFF;
  v7.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v7.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v7.disable_strict_correctness_enforcement_ = 1;
  v7.extension_pool_ = 0LL;
  v7.extension_factory_ = 0LL;
  google::protobuf::io::CodedInputStream::Refresh(&v7);
  google::protobuf::io::CodedInputStream::PushLimit(&v7, a3);
  (*((void (__fastcall **)(google::protobuf::MessageLite *))this->_vptr_MessageLite + 7))(this);
  legitimate_message_end = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *, google::protobuf::io::CodedInputStream *))this->_vptr_MessageLite
                            + 11))(
                             this,
                             &v7);
  if ( (_BYTE)legitimate_message_end )
  {
    legitimate_message_end = v7.legitimate_message_end_;
    if ( v7.legitimate_message_end_ )
      LOBYTE(legitimate_message_end) = google::protobuf::io::CodedInputStream::BytesUntilLimit(&v7) == 0;
  }
  google::protobuf::io::CodedInputStream::~CodedInputStream(&v7);
  return legitimate_message_end;
};

// Line 199: range 000000000C72A538-000000000C72A543
void __fastcall __noreturn google::protobuf::MessageLite::ParsePartialFromBoundedZeroCopyStream()
{
  struct _Unwind_Exception *v0; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::io::CodedInputStream::~CodedInputStream((google::protobuf::io::CodedInputStream *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 206: range 000000000C89D720-000000000C89D88D
__int64 __fastcall google::protobuf::MessageLite::ParseFromString(const google::protobuf::MessageLite *a1, __int64 a2)
{
  __int64 v2; // rdx
  const google::protobuf::uint8 *v3; // rax
  int (**vptr_MessageLite)(...); // rax
  unsigned int legitimate_message_end; // r12d
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v8; // [rsp+Fh] [rbp-C9h] BYREF
  std::string value; // [rsp+10h] [rbp-C8h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+30h] [rbp-A8h] BYREF
  google::protobuf::io::CodedInputStream v11; // [rsp+70h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(const google::protobuf::uint8 **)a2;
  v11.disable_strict_correctness_enforcement_ = 1;
  v11.buffer_ = v3;
  v11.input_ = 0LL;
  v11.buffer_end_ = &v3[(int)v2];
  *(_WORD *)&v11.legitimate_message_end_ = 0;
  *(_QWORD *)&v11.buffer_size_after_limit_ = 0x7FFFFFFF00000000LL;
  v11.total_bytes_read_ = v2;
  v11.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v11.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  vptr_MessageLite = a1->_vptr_MessageLite;
  *(_QWORD *)&v11.overflow_bytes_ = 0LL;
  v11.current_limit_ = v2;
  v11.extension_pool_ = 0LL;
  v11.extension_factory_ = 0LL;
  vptr_MessageLite[7](a1);
  legitimate_message_end = (*((__int64 (__fastcall **)(const google::protobuf::MessageLite *, google::protobuf::io::CodedInputStream *))a1->_vptr_MessageLite
                            + 11))(
                             a1,
                             &v11);
  if ( (_BYTE)legitimate_message_end )
  {
    legitimate_message_end = (*((__int64 (__fastcall **)(const google::protobuf::MessageLite *))a1->_vptr_MessageLite + 8))(a1);
    if ( (_BYTE)legitimate_message_end )
    {
      legitimate_message_end = v11.legitimate_message_end_;
    }
    else
    {
      google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_ERROR_0, "google/protobuf/message_lite.cc", 121);
      google::protobuf::`anonymous namespace'::InitializationErrorMessage((__int64)&value, a1);
      v7 = google::protobuf::internal::LogMessage::operator<<(&v10, &value);
      google::protobuf::internal::LogFinisher::operator=(&v8, v7);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
        operator delete(value._M_dataplus._M_p);
      google::protobuf::internal::LogMessage::~LogMessage(&v10);
    }
  }
  google::protobuf::io::CodedInputStream::~CodedInputStream(&v11);
  return legitimate_message_end;
};

// Line 210: range 000000000C89CE00-000000000C89CEB2
__int64 __fastcall google::protobuf::MessageLite::ParsePartialFromString(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  const google::protobuf::uint8 *v3; // rax
  __int64 v4; // rax
  unsigned int legitimate_message_end; // r12d
  google::protobuf::io::CodedInputStream vars0; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(const google::protobuf::uint8 **)a2;
  vars0.input_ = 0LL;
  vars0.buffer_ = v3;
  vars0.total_bytes_read_ = v2;
  vars0.buffer_end_ = &v3[(int)v2];
  *(_WORD *)&vars0.legitimate_message_end_ = 0;
  *(_QWORD *)&vars0.buffer_size_after_limit_ = 0x7FFFFFFF00000000LL;
  *(_QWORD *)&vars0.overflow_bytes_ = 0LL;
  vars0.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  vars0.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v4 = *a1;
  vars0.current_limit_ = v2;
  vars0.disable_strict_correctness_enforcement_ = 1;
  vars0.extension_pool_ = 0LL;
  vars0.extension_factory_ = 0LL;
  (*(void (__fastcall **)(__int64 *))(v4 + 56))(a1);
  legitimate_message_end = (*(__int64 (__fastcall **)(__int64 *, google::protobuf::io::CodedInputStream *))(*a1 + 88))(
                             a1,
                             &vars0);
  if ( (_BYTE)legitimate_message_end )
    legitimate_message_end = vars0.legitimate_message_end_;
  google::protobuf::io::CodedInputStream::~CodedInputStream(&vars0);
  return legitimate_message_end;
};

// Line 214: range 000000000C89D5B0-000000000C89D715
__int64 __fastcall google::protobuf::MessageLite::ParseFromArray(
        google::protobuf::MessageLite *this,
        const google::protobuf::uint8 *a2,
        int a3)
{
  int (**vptr_MessageLite)(...); // rax
  unsigned int legitimate_message_end; // r12d
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-C9h] BYREF
  std::string value; // [rsp+10h] [rbp-C8h] BYREF
  google::protobuf::internal::LogMessage_0 v9; // [rsp+30h] [rbp-A8h] BYREF
  google::protobuf::io::CodedInputStream v10; // [rsp+70h] [rbp-68h] BYREF

  v10.buffer_ = a2;
  *(_WORD *)&v10.legitimate_message_end_ = 0;
  *(_QWORD *)&v10.buffer_size_after_limit_ = 0x7FFFFFFF00000000LL;
  v10.buffer_end_ = &a2[a3];
  v10.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v10.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  vptr_MessageLite = this->_vptr_MessageLite;
  v10.input_ = 0LL;
  v10.total_bytes_read_ = a3;
  *(_QWORD *)&v10.overflow_bytes_ = 0LL;
  v10.current_limit_ = a3;
  v10.disable_strict_correctness_enforcement_ = 1;
  v10.extension_pool_ = 0LL;
  v10.extension_factory_ = 0LL;
  vptr_MessageLite[7](this);
  legitimate_message_end = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *, google::protobuf::io::CodedInputStream *))this->_vptr_MessageLite
                            + 11))(
                             this,
                             &v10);
  if ( (_BYTE)legitimate_message_end )
  {
    legitimate_message_end = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *))this->_vptr_MessageLite + 8))(this);
    if ( (_BYTE)legitimate_message_end )
    {
      legitimate_message_end = v10.legitimate_message_end_;
    }
    else
    {
      google::protobuf::internal::LogMessage::LogMessage(&v9, LOGLEVEL_ERROR_0, "google/protobuf/message_lite.cc", 121);
      google::protobuf::`anonymous namespace'::InitializationErrorMessage((__int64)&value, this);
      v6 = google::protobuf::internal::LogMessage::operator<<(&v9, &value);
      google::protobuf::internal::LogFinisher::operator=(&v7, v6);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
        operator delete(value._M_dataplus._M_p);
      google::protobuf::internal::LogMessage::~LogMessage(&v9);
    }
  }
  google::protobuf::io::CodedInputStream::~CodedInputStream(&v10);
  return legitimate_message_end;
};

// Line 218: range 000000000C89CEC0-000000000C89CF6B
__int64 __fastcall google::protobuf::MessageLite::ParsePartialFromArray(
        google::protobuf::MessageLite *this,
        const google::protobuf::uint8 *a2,
        int a3)
{
  int (**vptr_MessageLite)(...); // rax
  unsigned int legitimate_message_end; // r12d
  google::protobuf::io::CodedInputStream vars0; // [rsp+0h] [rbp+0h] BYREF

  vars0.buffer_ = a2;
  *(_WORD *)&vars0.legitimate_message_end_ = 0;
  *(_QWORD *)&vars0.buffer_size_after_limit_ = 0x7FFFFFFF00000000LL;
  vars0.buffer_end_ = &a2[a3];
  vars0.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  vars0.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  vptr_MessageLite = this->_vptr_MessageLite;
  vars0.input_ = 0LL;
  vars0.total_bytes_read_ = a3;
  *(_QWORD *)&vars0.overflow_bytes_ = 0LL;
  vars0.current_limit_ = a3;
  vars0.disable_strict_correctness_enforcement_ = 1;
  vars0.extension_pool_ = 0LL;
  vars0.extension_factory_ = 0LL;
  vptr_MessageLite[7](this);
  legitimate_message_end = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *, google::protobuf::io::CodedInputStream *))this->_vptr_MessageLite
                            + 11))(
                             this,
                             &vars0);
  if ( (_BYTE)legitimate_message_end )
    legitimate_message_end = vars0.legitimate_message_end_;
  google::protobuf::io::CodedInputStream::~CodedInputStream(&vars0);
  return legitimate_message_end;
};

// Line 227: range 000000000C89C890-000000000C89C8AD
google::protobuf::uint8 *__fastcall google::protobuf::MessageLite::SerializeWithCachedSizesToArray(
        const google::protobuf::MessageLite *const this,
        google::protobuf::uint8 *target)
{
  return (google::protobuf::uint8 *)(*((__int64 (__fastcall **)(const google::protobuf::MessageLite *const, bool, google::protobuf::uint8 *))this->_vptr_MessageLite
                                     + 16))(
                                      this,
                                      google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ != 0,
                                      target);
};

// Line 232: range 000000000C89D0D0-000000000C89D114
// attributes: thunk
bool __fastcall google::protobuf::MessageLite::SerializeToCodedStream(
        const google::protobuf::MessageLite *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  return google::protobuf::MessageLite::SerializePartialToCodedStream((google::protobuf::MessageLite *)this, output);
};

// Line 236: range 000000000C89CF70-000000000C89D0BC
__int64 __fastcall google::protobuf::MessageLite::SerializePartialToCodedStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::CodedOutputStream *a2)
{
  unsigned __int64 v2; // rax
  google::protobuf::_anonymous_namespace_ *v3; // rbp
  int buffer_size; // r13d
  int (**vptr_MessageLite)(...); // rdx
  google::protobuf::uint8 *buffer; // r14
  bool serialization_deterministic_override; // si
  google::protobuf::_anonymous_namespace_ *v8; // r13
  google::protobuf::_anonymous_namespace_ *v9; // rax
  const google::protobuf::MessageLite *v10; // r8
  __int64 result; // rax
  int total_bytes; // r14d
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogFinisher v15; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v16; // [rsp+10h] [rbp-68h] BYREF

  v2 = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *))this->_vptr_MessageLite + 12))(this);
  v3 = (google::protobuf::_anonymous_namespace_ *)v2;
  if ( v2 > 0x7FFFFFFF )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v16, LOGLEVEL_ERROR_0, "google/protobuf/message_lite.cc", 239);
    v13 = google::protobuf::internal::LogMessage::operator<<(&v16, "Exceeded maximum protobuf size of 2GB: ");
    v14 = google::protobuf::internal::LogMessage::operator<<(v13, (unsigned __int64)v3);
    google::protobuf::internal::LogFinisher::operator=(&v15, v14);
    google::protobuf::internal::LogMessage::~LogMessage(&v16);
    return 0LL;
  }
  buffer_size = a2->buffer_size_;
  vptr_MessageLite = this->_vptr_MessageLite;
  if ( (int)v2 <= buffer_size )
  {
    buffer = a2->buffer_;
    buffer_size -= v2;
    a2->buffer_size_ = buffer_size;
    a2->buffer_ = &buffer[(int)v2];
    if ( buffer )
    {
      if ( a2->serialization_deterministic_is_overridden_ )
        serialization_deterministic_override = a2->serialization_deterministic_override_;
      else
        serialization_deterministic_override = google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ != 0;
      v8 = (google::protobuf::_anonymous_namespace_ *)(((__int64 (__fastcall *)(google::protobuf::MessageLite *, bool, google::protobuf::uint8 *))vptr_MessageLite[16])(
                                                         this,
                                                         serialization_deterministic_override,
                                                         buffer)
                                                     - (_QWORD)buffer);
      if ( v8 == v3 )
        return 1LL;
LABEL_7:
      v9 = (google::protobuf::_anonymous_namespace_ *)(*((__int64 (__fastcall **)(google::protobuf::MessageLite *))this->_vptr_MessageLite
                                                       + 12))(this);
      google::protobuf::`anonymous namespace'::ByteSizeConsistencyError(v3, v9, v8, (__int64)this, v10);
      return 1LL;
    }
  }
  total_bytes = a2->total_bytes_;
  vptr_MessageLite[13](this, a2);
  result = 0LL;
  if ( !a2->had_error_ )
  {
    v8 = (google::protobuf::_anonymous_namespace_ *)(a2->total_bytes_ - a2->buffer_size_ - (total_bytes - buffer_size));
    if ( v8 == v3 )
      return 1LL;
    goto LABEL_7;
  }
  return result;
};

// Line 239: range 000000000C72A568-000000000C72A575
void __fastcall __noreturn google::protobuf::MessageLite::SerializePartialToCodedStream(
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

// Line 270: range 000000000C72A57A-000000000C72A585
void __fastcall __noreturn google::protobuf::MessageLite::SerializeToZeroCopyStream()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::io::CodedOutputStream::~CodedOutputStream((google::protobuf::io::CodedOutputStream *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 275: range 000000000C89D120-000000000C89D154
__int64 __fastcall google::protobuf::MessageLite::SerializePartialToZeroCopyStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::ZeroCopyOutputStream *a2)
{
  unsigned int v2; // r12d
  google::protobuf::io::CodedOutputStream v4; // [rsp+0h] [rbp-28h] BYREF

  google::protobuf::io::CodedOutputStream::CodedOutputStream(&v4, a2);
  v2 = google::protobuf::MessageLite::SerializePartialToCodedStream(this, &v4);
  google::protobuf::io::CodedOutputStream::~CodedOutputStream(&v4);
  return v2;
};

// Line 276: range 000000000C72A58A-000000000C72A595
void __fastcall __noreturn google::protobuf::MessageLite::SerializePartialToZeroCopyStream()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::io::CodedOutputStream::~CodedOutputStream((google::protobuf::io::CodedOutputStream *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 282: range 000000000C89D250-000000000C89D26E
// attributes: thunk
bool __fastcall google::protobuf::MessageLite::AppendToString(
        const google::protobuf::MessageLite *const this,
        std::string *output)
{
  return google::protobuf::MessageLite::AppendPartialToString((unsigned __int64)this);
};

// Line 285: range 000000000C89D160-000000000C89D248
__int64 __fastcall google::protobuf::MessageLite::AppendPartialToString(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rax
  google::protobuf::_anonymous_namespace_ *v4; // rbp
  __int64 v5; // r13
  google::protobuf::_anonymous_namespace_ *v6; // r13
  google::protobuf::_anonymous_namespace_ *v7; // rax
  const google::protobuf::MessageLite *v8; // r8
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogFinisher v12; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v13; // [rsp+10h] [rbp-68h] BYREF

  v2 = a2[1];
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
  v4 = (google::protobuf::_anonymous_namespace_ *)v3;
  if ( v3 > 0x7FFFFFFF )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v13, LOGLEVEL_ERROR_0, "google/protobuf/message_lite.cc", 289);
    v10 = google::protobuf::internal::LogMessage::operator<<(&v13, "Exceeded maximum protobuf size of 2GB: ");
    v11 = google::protobuf::internal::LogMessage::operator<<(v10, (unsigned __int64)v4);
    google::protobuf::internal::LogFinisher::operator=(&v12, v11);
    google::protobuf::internal::LogMessage::~LogMessage(&v13);
    return 0LL;
  }
  else
  {
    std::string::resize(a2, v3 + v2, 0LL);
    v5 = *a2 + v2;
    v6 = (google::protobuf::_anonymous_namespace_ *)((*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 112LL))(
                                                       a1,
                                                       v5)
                                                   - v5);
    if ( v6 != v4 )
    {
      v7 = (google::protobuf::_anonymous_namespace_ *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
      google::protobuf::`anonymous namespace'::ByteSizeConsistencyError(v4, v7, v6, a1, v8);
    }
    return 1LL;
  }
};

// Line 289: range 000000000C72A59A-000000000C72A5A7
void __fastcall __noreturn google::protobuf::MessageLite::AppendPartialToString(
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

// Line 315: range 000000000C89D300-000000000C89D359
// attributes: thunk
bool __fastcall google::protobuf::MessageLite::SerializeToArray(
        const google::protobuf::MessageLite *const this,
        void *data,
        int size)
{
  return google::protobuf::MessageLite::SerializePartialToArray(this, data, size);
};

// Line 318: range 000000000C89D290-000000000C89D2F9
bool __fastcall google::protobuf::MessageLite::SerializePartialToArray(
        const google::protobuf::MessageLite *const this,
        void *data,
        int size)
{
  bool v3; // r14
  int v5; // eax
  int v6; // ebx
  google::protobuf::_anonymous_namespace_ *v7; // rbp
  google::protobuf::_anonymous_namespace_ *v8; // r13
  google::protobuf::_anonymous_namespace_ *v9; // rax
  const google::protobuf::MessageLite *v10; // r8

  v3 = 0;
  v5 = (*((__int64 (__fastcall **)(const google::protobuf::MessageLite *const))this->_vptr_MessageLite + 12))(this);
  if ( v5 <= size )
  {
    v6 = v5;
    v3 = 1;
    v7 = (google::protobuf::_anonymous_namespace_ *)v5;
    v8 = (google::protobuf::_anonymous_namespace_ *)((*((__int64 (__fastcall **)(const google::protobuf::MessageLite *const, void *))this->_vptr_MessageLite
                                                      + 14))(
                                                       this,
                                                       data)
                                                   - (_QWORD)data);
    if ( v8 != v7 )
    {
      v9 = (google::protobuf::_anonymous_namespace_ *)(*((__int64 (__fastcall **)(const google::protobuf::MessageLite *const))this->_vptr_MessageLite
                                                       + 12))(this);
      google::protobuf::`anonymous namespace'::ByteSizeConsistencyError(
        (google::protobuf::_anonymous_namespace_ *)v6,
        v9,
        v8,
        (__int64)this,
        v10);
    }
  }
  return v3;
};

// Line 340: range 000000000C89D360-000000000C89D3A9
__int64 __fastcall google::protobuf::MessageLite::SerializePartialAsString[abi:cxx11](__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  if ( !(unsigned __int8)google::protobuf::MessageLite::AppendPartialToString(a2, (_QWORD *)a1) )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    **(_BYTE **)a1 = 0;
  }
  return a1;
};

// Line 350: range 000000000C89CBE0-000000000C89CC21
void __fastcall google::protobuf::MessageLite::SerializeWithCachedSizes(
        google::protobuf::MessageLite *this,
        google::protobuf::io::CodedOutputStream *a2)
{
  const void *(__fastcall *v2)(const google::protobuf::MessageLite *const); // rax
  __int64 v3; // rax
  google::protobuf::io::CodedOutputStream *v4; // r8

  v2 = (const void *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)this->_vptr_MessageLite + 17);
  if ( v2 == google::protobuf::MessageLite::InternalGetTable )
    google::protobuf::MessageLite::SerializeWithCachedSizes(this, a2);
  v3 = ((__int64 (*)(void))v2)();
  google::protobuf::internal::SerializeInternal(
    (google::protobuf::internal *)this,
    (const unsigned __int8 *)(*(_QWORD *)(v3 + 8) + 24LL),
    (const google::protobuf::internal::FieldMetadata *)(unsigned int)(*(_DWORD *)v3 - 1),
    a2,
    v4);
};

// Line 350: range 000000000C72A51E-000000000C72A525
void __noreturn google::protobuf::MessageLite::SerializeWithCachedSizes()
{
  BUG();
};

// Line 359: range 000000000C89CAA0-000000000C89CBCC
google::protobuf::uint8 *__fastcall google::protobuf::MessageLite::InternalSerializeWithCachedSizesToArray(
        google::protobuf::MessageLite *this,
        bool a2,
        unsigned __int8 *a3)
{
  int (**vptr_MessageLite)(...); // rax
  __int64 (*v5)(void); // rdx
  int v6; // eax
  __int64 v7; // r12
  int (**v8)(...); // rax
  unsigned __int8 *v9; // r12
  __int64 v11; // rax
  unsigned __int8 *v12; // r9
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogFinisher v14; // [rsp+Fh] [rbp-A9h] BYREF
  google::protobuf::io::ArrayOutputStream v15; // [rsp+10h] [rbp-A8h] BYREF
  google::protobuf::io::CodedOutputStream v16; // [rsp+30h] [rbp-88h] BYREF
  google::protobuf::internal::LogMessage_0 v17; // [rsp+50h] [rbp-68h] BYREF

  vptr_MessageLite = this->_vptr_MessageLite;
  v5 = (__int64 (*)(void))*((_QWORD *)this->_vptr_MessageLite + 17);
  if ( (char *)v5 != (char *)google::protobuf::MessageLite::InternalGetTable )
  {
    v11 = v5();
    if ( v11 )
      return google::protobuf::internal::SerializeInternalToArray(
               (google::protobuf::internal *)this,
               (const unsigned __int8 *)(*(_QWORD *)(v11 + 8) + 24LL),
               (const google::protobuf::internal::FieldMetadata *)(unsigned int)(*(_DWORD *)v11 - 1),
               a2,
               a3,
               v12);
    vptr_MessageLite = this->_vptr_MessageLite;
  }
  v6 = vptr_MessageLite[15](this);
  v7 = v6;
  google::protobuf::io::ArrayOutputStream::ArrayOutputStream(&v15, a3, v6, -1);
  google::protobuf::io::CodedOutputStream::CodedOutputStream(&v16, &v15);
  v8 = this->_vptr_MessageLite;
  v16.serialization_deterministic_is_overridden_ = 1;
  v16.serialization_deterministic_override_ = a2;
  v8[13](this, &v16);
  if ( v16.had_error_ )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v17, LOGLEVEL_FATAL_0, "google/protobuf/message_lite.cc", 370);
    v13 = google::protobuf::internal::LogMessage::operator<<(&v17, "CHECK failed: !coded_out.HadError(): ");
    google::protobuf::internal::LogFinisher::operator=(&v14, v13);
    google::protobuf::internal::LogMessage::~LogMessage(&v17);
  }
  v9 = &a3[v7];
  google::protobuf::io::CodedOutputStream::~CodedOutputStream(&v16);
  return v9;
};

// Line 370: range 000000000C72A502-000000000C72A519
void __fastcall __noreturn google::protobuf::MessageLite::InternalSerializeWithCachedSizesToArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        google::protobuf::io::CodedOutputStream a12,
        google::protobuf::internal::LogMessage_0 a13)
{
  struct _Unwind_Exception *v13; // rbx

  google::protobuf::internal::LogMessage::~LogMessage(&a13);
  google::protobuf::io::CodedOutputStream::~CodedOutputStream(&a12);
  _Unwind_Resume(v13);
};

// Line 381: range 000000000C89D3B0-000000000C89D3B3
google::protobuf::MessageLite *__fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::NewFromPrototype(
        const google::protobuf::MessageLite *prototype,
        google::protobuf::Arena *arena)
{
  return (google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(const google::protobuf::MessageLite *, google::protobuf::Arena *))prototype->_vptr_MessageLite
                                           + 4))(
                                            prototype,
                                            arena);
};

// Line 386: range 000000000C89D3C0-000000000C89D3D0
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Merge(
        const google::protobuf::MessageLite *from,
        google::protobuf::MessageLite *to)
{
  (*((void (__fastcall **)(google::protobuf::MessageLite *, const google::protobuf::MessageLite *))to->_vptr_MessageLite
   + 10))(
    to,
    from);
};

// Line 390: range 000000000C89D3E0-000000000C89D3E9
void __fastcall google::protobuf::internal::GenericTypeHandler<std::string>::Merge(
        const std::string *from,
        std::string *to)
{
  std::string::_M_assign(to, from);
};

// Line 396: range 000000000C89D3F0-000000000C89D3F7
void __fastcall google::protobuf::internal::SetProto3PreserveUnknownsDefault(bool preserve)
{
  google::protobuf::internal::proto3_preserve_unknown_ = preserve;
};

// Line 403: range 000000000C746970-000000000C746991
void __cdecl GLOBAL__sub_I__ZNK6google8protobuf11MessageLite25InitializationErrorStringB5cxx11Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
