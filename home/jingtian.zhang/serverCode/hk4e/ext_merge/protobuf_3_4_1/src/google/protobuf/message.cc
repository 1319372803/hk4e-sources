// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/message.cc

// Line 65: range 000000000C8BA560-000000000C8BA64C
__int64 __fastcall google::protobuf::Message::MergeFrom(
        google::protobuf::Message *this,
        google::protobuf::internal::ReflectionOps *a2)
{
  __int64 v2; // rbx
  google::protobuf::Message *v3; // rdx
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // r13
  __int64 v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+1Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+20h] [rbp-68h] BYREF

  v2 = (*((__int64 (__fastcall **)(google::protobuf::Message *))this->_vptr_MessageLite + 24))(this);
  if ( v2 != (*(__int64 (__fastcall **)(google::protobuf::internal::ReflectionOps *))(*(_QWORD *)a2->gap0 + 192LL))(a2) )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "google/protobuf/message.cc", 67);
    v4 = google::protobuf::internal::LogMessage::operator<<(
           &v12,
           "CHECK failed: (from.GetDescriptor()) == (descriptor): ");
    v5 = google::protobuf::internal::LogMessage::operator<<(
           v4,
           ": Tried to merge from a message with a different type.  to: ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, *(const std::string **)(v2 + 8));
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, ", from: ");
    v8 = (*(__int64 (__fastcall **)(google::protobuf::internal::ReflectionOps *))(*(_QWORD *)a2->gap0 + 192LL))(a2);
    v9 = google::protobuf::internal::LogMessage::operator<<(v7, *(const std::string **)(v8 + 8));
    google::protobuf::internal::LogFinisher::operator=(&v11, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  return google::protobuf::internal::ReflectionOps::Merge(a2, this, v3);
};

// Line 67: range 000000000C72B216-000000000C72B22D
void __fastcall __noreturn google::protobuf::Message::MergeFrom(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        struct _Unwind_Exception *a7,
        int a8,
        int a9,
        google::protobuf::internal::LogMessage_0 a10)
{
  struct _Unwind_Exception *v10; // rax
  struct _Unwind_Exception *v11; // [rsp+8h] [rbp+8h]

  v11 = v10;
  google::protobuf::internal::LogMessage::~LogMessage(&a10);
  _Unwind_Resume(v11);
};

// Line 75: range 000000000C8BA3F0-000000000C8BA3F3
void __fastcall google::protobuf::Message::CheckTypeAndMergeFrom(
        google::protobuf::Message *const this,
        const google::protobuf::MessageLite *other)
{
  (*((void (__fastcall **)(google::protobuf::Message *const, const google::protobuf::MessageLite *))this->_vptr_MessageLite
   + 19))(
    this,
    other);
};

// Line 78: range 000000000C8BA660-000000000C8BA74C
void __fastcall google::protobuf::Message::CopyFrom(
        google::protobuf::Message *this,
        const google::protobuf::Message *from)
{
  __int64 v2; // rbx
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // r13
  __int64 v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+1Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+20h] [rbp-68h] BYREF

  v2 = (*((__int64 (__fastcall **)(google::protobuf::Message *))this->_vptr_MessageLite + 24))(this);
  if ( v2 != (*((__int64 (__fastcall **)(const google::protobuf::Message *))from->_vptr_MessageLite + 24))(from) )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/message.cc", 80);
    v3 = google::protobuf::internal::LogMessage::operator<<(
           &v10,
           "CHECK failed: (from.GetDescriptor()) == (descriptor): ");
    v4 = google::protobuf::internal::LogMessage::operator<<(
           v3,
           ": Tried to copy from a message with a different type. to: ");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, *(const std::string **)(v2 + 8));
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, ", from: ");
    v7 = (*((__int64 (__fastcall **)(const google::protobuf::Message *))from->_vptr_MessageLite + 24))(from);
    v8 = google::protobuf::internal::LogMessage::operator<<(v6, *(const std::string **)(v7 + 8));
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  google::protobuf::internal::ReflectionOps::Copy(from, this);
};

// Line 80: range 000000000C72B232-000000000C72B249
void __fastcall __noreturn google::protobuf::Message::CopyFrom(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        struct _Unwind_Exception *a7,
        int a8,
        int a9,
        google::protobuf::internal::LogMessage_0 a10)
{
  struct _Unwind_Exception *v10; // rax
  struct _Unwind_Exception *v11; // [rsp+8h] [rbp+8h]

  v11 = v10;
  google::protobuf::internal::LogMessage::~LogMessage(&a10);
  _Unwind_Resume(v11);
};

// Line 87: range 000000000C8BBCC0-000000000C8BBCF5
std::string *__fastcall google::protobuf::Message::GetTypeName[abi:cxx11](
        std::string *retstr,
        const google::protobuf::Message *const this)
{
  __int64 v2; // rax
  std::forward_iterator_tag v3; // cl

  v2 = *(_QWORD *)((*((__int64 (__fastcall **)(const google::protobuf::Message *const))this->_vptr_MessageLite + 24))(this)
                 + 8);
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(retstr, *(char **)v2, (char *)(*(_QWORD *)v2 + *(_QWORD *)(v2 + 8)), v3);
  return retstr;
};

// Line 92: range 000000000C8BA760-000000000C8BA770
// attributes: thunk
void __fastcall google::protobuf::Message::Clear(google::protobuf::Message *const this)
{
  google::protobuf::Message *v1; // rsi

  google::protobuf::internal::ReflectionOps::Clear((google::protobuf::internal::ReflectionOps *)this, v1);
};

// Line 99: range 000000000C8BB570-000000000C8BB5B0
google::protobuf::Message::FindInitializationErrors(std::vector<std::string> *)const;

// Line 103: range 000000000C8BB5C0-000000000C8BB6E2
std::string *__fastcall google::protobuf::Message::InitializationErrorString[abi:cxx11](
        std::string *result,
        __int64 a2)
{
  void **v2; // rbp
  void **v3; // r13
  void **v4; // rbx
  void **v5; // rbx
  void *v7; // [rsp+0h] [rbp-88h] BYREF
  void **v8; // [rsp+8h] [rbp-80h]
  __int64 v9; // [rsp+10h] [rbp-78h]
  google::protobuf::strings::AlphaNum a; // [rsp+20h] [rbp-68h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  google::protobuf::Message::FindInitializationErrors(a2, &v7);
  v2 = (void **)v7;
  v3 = v8;
  result->_M_string_length = 0LL;
  result->_M_dataplus._M_p = result->_anon_0._M_local_buf;
  result->_anon_0._M_local_buf[0] = 0;
  v4 = v2;
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      a.piece_data_ = (const char *)*v4;
      a.piece_size_ = (size_t)v4[1];
      google::protobuf::StrAppend(result, &a);
      v4 += 4;
      if ( v3 == v4 )
        break;
      if ( v2 != v4 )
      {
        if ( 0x3FFFFFFFFFFFFFFFLL - result->_M_string_length <= 1 )
          std::__throw_length_error("basic_string::append");
        std::string::_M_append(result, ", ", 2LL);
      }
    }
    v2 = v8;
    v5 = (void **)v7;
    if ( v8 != v7 )
    {
      do
      {
        if ( *v5 != v5 + 2 )
          operator delete(*v5);
        v5 += 4;
      }
      while ( v2 != v5 );
      v2 = (void **)v7;
    }
  }
  if ( v2 )
    operator delete(v2);
  return result;
};

// Line 109: range 000000000C8BB6F0-000000000C8BB7E8
void __fastcall google::protobuf::Message::CheckInitialized(google::protobuf::Message *this)
{
  google::protobuf::internal::LogMessage_0 *v1; // rax
  google::protobuf::internal::LogMessage_0 *v2; // r12
  __int64 v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // r12
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-79h] BYREF
  std::string value; // [rsp+10h] [rbp-78h] BYREF
  google::protobuf::internal::LogMessage_0 v9; // [rsp+30h] [rbp-58h] BYREF

  if ( !(*((unsigned __int8 (__fastcall **)(google::protobuf::Message *))this->_vptr_MessageLite + 8))(this) )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v9, LOGLEVEL_FATAL_0, "google/protobuf/message.cc", 110);
    v1 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: IsInitialized(): ");
    v2 = google::protobuf::internal::LogMessage::operator<<(v1, "Message of type \"");
    v3 = (*((__int64 (__fastcall **)(google::protobuf::Message *))this->_vptr_MessageLite + 24))(this);
    v4 = google::protobuf::internal::LogMessage::operator<<(v2, *(const std::string **)(v3 + 8));
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "\" is missing required fields: ");
    (*((void (__fastcall **)(std::string *, google::protobuf::Message *))this->_vptr_MessageLite + 9))(&value, this);
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, &value);
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
      operator delete(value._M_dataplus._M_p);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
  }
};

// Line 116: range 000000000C8BA780-000000000C8BA799
// attributes: thunk
void __fastcall google::protobuf::Message::DiscardUnknownFields(google::protobuf::Message *const this)
{
  google::protobuf::Message *v1; // rsi

  google::protobuf::internal::ReflectionOps::DiscardUnknownFields((google::protobuf::internal::ReflectionOps *)this, v1);
};

// Line 123: range 000000000C8BC370-000000000C8BC3CB
__int64 __fastcall google::protobuf::Message::ParseFromFileDescriptor(google::protobuf::Message *this, int a2)
{
  unsigned int v2; // r12d
  google::protobuf::io::FileInputStream v4; // [rsp+0h] [rbp-68h] BYREF

  google::protobuf::io::FileInputStream::FileInputStream(&v4, a2, -1);
  v2 = google::protobuf::MessageLite::ParseFromZeroCopyStream(this, &v4);
  if ( (_BYTE)v2 )
    LOBYTE(v2) = v4.copying_input_.errno_ == 0;
  v4._vptr_ZeroCopyInputStream = (int (**)(...))off_1A175E78;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(&v4.impl_);
  google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(&v4.copying_input_);
  return v2;
};

// Line 128: range 000000000C8BC3D0-000000000C8BC42B
__int64 __fastcall google::protobuf::Message::ParsePartialFromFileDescriptor(google::protobuf::Message *this, int a2)
{
  unsigned int v2; // r12d
  google::protobuf::io::FileInputStream v4; // [rsp+0h] [rbp-68h] BYREF

  google::protobuf::io::FileInputStream::FileInputStream(&v4, a2, -1);
  v2 = google::protobuf::MessageLite::ParsePartialFromZeroCopyStream(this, &v4);
  if ( (_BYTE)v2 )
    LOBYTE(v2) = v4.copying_input_.errno_ == 0;
  v4._vptr_ZeroCopyInputStream = (int (**)(...))off_1A175E78;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(&v4.impl_);
  google::protobuf::io::FileInputStream::CopyingFileInputStream::~CopyingFileInputStream(&v4.copying_input_);
  return v2;
};

// Line 133: range 000000000C8BC430-000000000C8BC499
__int64 __fastcall google::protobuf::Message::ParseFromIstream(google::protobuf::Message *this, std::istream *a2)
{
  unsigned int v2; // r12d
  google::protobuf::io::IstreamInputStream v4; // [rsp+0h] [rbp-68h] BYREF

  google::protobuf::io::IstreamInputStream::IstreamInputStream(&v4, a2, -1);
  v2 = google::protobuf::MessageLite::ParseFromZeroCopyStream(this, &v4);
  if ( (_BYTE)v2 )
    v2 = (*(_DWORD *)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 32) >> 1) & 1;
  v4._vptr_ZeroCopyInputStream = (int (**)(...))off_1A175F58;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(&v4.impl_);
  google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::~CopyingIstreamInputStream(&v4.copying_input_);
  return v2;
};

// Line 138: range 000000000C8BC4A0-000000000C8BC509
__int64 __fastcall google::protobuf::Message::ParsePartialFromIstream(
        google::protobuf::Message *this,
        std::istream *a2)
{
  unsigned int v2; // r12d
  google::protobuf::io::IstreamInputStream v4; // [rsp+0h] [rbp-68h] BYREF

  google::protobuf::io::IstreamInputStream::IstreamInputStream(&v4, a2, -1);
  v2 = google::protobuf::MessageLite::ParsePartialFromZeroCopyStream(this, &v4);
  if ( (_BYTE)v2 )
    v2 = (*(_DWORD *)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 32) >> 1) & 1;
  v4._vptr_ZeroCopyInputStream = (int (**)(...))off_1A175F58;
  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(&v4.impl_);
  google::protobuf::io::IstreamInputStream::CopyingIstreamInputStream::~CopyingIstreamInputStream(&v4.copying_input_);
  return v2;
};

// Line 145: range 000000000C8BA810-000000000C8BA884
void __fastcall google::protobuf::Message::SerializeWithCachedSizes(
        const google::protobuf::Message *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  int (**vptr_MessageLite)(...); // rax
  const void *(__fastcall *v3)(const google::protobuf::MessageLite *const); // rdx
  unsigned int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rcx
  __int64 v6; // rax
  google::protobuf::io::CodedOutputStream *v7; // r8

  vptr_MessageLite = this->_vptr_MessageLite;
  v3 = (const void *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)this->_vptr_MessageLite + 17);
  if ( v3 == google::protobuf::MessageLite::InternalGetTable )
    goto LABEL_2;
  v6 = ((__int64 (*)(void))v3)();
  if ( !v6 )
  {
    vptr_MessageLite = this->_vptr_MessageLite;
LABEL_2:
    v4 = vptr_MessageLite[15](this);
    google::protobuf::internal::WireFormat::SerializeWithCachedSizes(
      (google::protobuf::internal::WireFormat *)this,
      (const google::protobuf::Message *)v4,
      (int)output,
      v5);
    return;
  }
  google::protobuf::internal::SerializeInternal(
    (google::protobuf::internal *)this,
    (const unsigned __int8 *)(*(_QWORD *)(v6 + 8) + 24LL),
    (const google::protobuf::internal::FieldMetadata *)(unsigned int)(*(_DWORD *)v6 - 1),
    output,
    v7);
};

// Line 155: range 000000000C8BA7A0-000000000C8BA7CC
size_t __fastcall google::protobuf::Message::ByteSizeLong(const google::protobuf::Message *const this)
{
  const google::protobuf::Message *v1; // rsi
  size_t v2; // r12

  v2 = google::protobuf::internal::WireFormat::ByteSize((google::protobuf::internal::WireFormat *)this, v1);
  (*((void (__fastcall **)(const google::protobuf::Message *const, _QWORD))this->_vptr_MessageLite + 22))(
    this,
    (unsigned int)v2);
  return v2;
};

// Line 161: range 000000000C8BA4D0-000000000C8BA54D
void __fastcall google::protobuf::Message::SetCachedSize(google::protobuf::Message *this)
{
  google::protobuf::internal::LogMessage_0 *v1; // r12
  __int64 v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogFinisher v5; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v6; // [rsp+10h] [rbp-58h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(&v6, LOGLEVEL_FATAL_0, "google/protobuf/message.cc", 162);
  v1 = google::protobuf::internal::LogMessage::operator<<(&v6, "Message class \"");
  v2 = (*((__int64 (__fastcall **)(google::protobuf::Message *))this->_vptr_MessageLite + 24))(this);
  v3 = google::protobuf::internal::LogMessage::operator<<(v1, *(const std::string **)(v2 + 8));
  v4 = google::protobuf::internal::LogMessage::operator<<(
         v3,
         "\" implements neither SetCachedSize() nor ByteSize().  Must implement one or the other.");
  google::protobuf::internal::LogFinisher::operator=(&v5, v4);
  google::protobuf::internal::LogMessage::~LogMessage(&v6);
};

// Line 162: range 000000000C72B204-000000000C72B211
void __fastcall __noreturn google::protobuf::Message::SetCachedSize(
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

// Line 167: range 000000000C8BAB50-000000000C8BAB90
size_t __fastcall google::protobuf::Message::SpaceUsedLong(const google::protobuf::Message *const this)
{
  __int64 (*v1)(void); // rdx
  __int64 v2; // rdx
  __int64 v4; // rax

  v1 = (__int64 (*)(void))*((_QWORD *)this->_vptr_MessageLite + 23);
  if ( (char *)v1 == (char *)google::protobuf::Message::GetReflection )
  {
    (*((void (**)(void))this->_vptr_MessageLite + 24))();
    return (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *const))(*(_QWORD *)v2 + 32LL))(v2, this);
  }
  else
  {
    v4 = v1();
    return (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *const))(*(_QWORD *)v4 + 32LL))(v4, this);
  }
};

// Line 171: range 000000000C8BC510-000000000C8BC549
__int64 __fastcall google::protobuf::Message::SerializeToFileDescriptor(google::protobuf::Message *this, int a2)
{
  unsigned int v2; // r12d
  google::protobuf::io::FileOutputStream v4; // [rsp+0h] [rbp-58h] BYREF

  google::protobuf::io::FileOutputStream::FileOutputStream(&v4, a2, -1);
  v2 = google::protobuf::MessageLite::SerializeToZeroCopyStream(this, &v4);
  google::protobuf::io::FileOutputStream::~FileOutputStream(&v4);
  return v2;
};

// Line 172: range 000000000C72B5B2-000000000C72B5BD
void __fastcall __noreturn google::protobuf::Message::SerializeToFileDescriptor()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::io::FileOutputStream::~FileOutputStream((google::protobuf::io::FileOutputStream *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 176: range 000000000C8BC550-000000000C8BC589
__int64 __fastcall google::protobuf::Message::SerializePartialToFileDescriptor(google::protobuf::Message *this, int a2)
{
  unsigned int v2; // r12d
  google::protobuf::io::FileOutputStream v4; // [rsp+0h] [rbp-58h] BYREF

  google::protobuf::io::FileOutputStream::FileOutputStream(&v4, a2, -1);
  v2 = google::protobuf::MessageLite::SerializePartialToZeroCopyStream(this, &v4);
  google::protobuf::io::FileOutputStream::~FileOutputStream(&v4);
  return v2;
};

// Line 177: range 000000000C72B5C2-000000000C72B5CD
void __fastcall __noreturn google::protobuf::Message::SerializePartialToFileDescriptor()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::io::FileOutputStream::~FileOutputStream((google::protobuf::io::FileOutputStream *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 181: range 000000000C8BC590-000000000C8BC5FE
bool __fastcall google::protobuf::Message::SerializeToOstream(google::protobuf::Message *this, std::ostream *a2)
{
  google::protobuf::io::OstreamOutputStream v3; // [rsp+10h] [rbp-68h] BYREF

  google::protobuf::io::OstreamOutputStream::OstreamOutputStream(&v3, a2, -1);
  if ( (unsigned __int8)google::protobuf::MessageLite::SerializeToZeroCopyStream(this, &v3) )
  {
    google::protobuf::io::OstreamOutputStream::~OstreamOutputStream(&v3);
    return *(_DWORD *)((char *)a2 + *(_QWORD *)(*(_QWORD *)a2 - 24LL) + 32) == 0;
  }
  else
  {
    google::protobuf::io::OstreamOutputStream::~OstreamOutputStream(&v3);
    return 0;
  }
};

// Line 183: range 000000000C72B5D2-000000000C72B5DF
void __fastcall __noreturn google::protobuf::Message::SerializeToOstream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::io::OstreamOutputStream a8)
{
  struct _Unwind_Exception *v8; // r12

  google::protobuf::io::OstreamOutputStream::~OstreamOutputStream(&a8);
  _Unwind_Resume(v8);
};

// Line 189: range 000000000C8BC610-000000000C8BC649
__int64 __fastcall google::protobuf::Message::SerializePartialToOstream(
        google::protobuf::Message *this,
        std::ostream *a2)
{
  unsigned int v2; // r12d
  google::protobuf::io::OstreamOutputStream v4; // [rsp+0h] [rbp-58h] BYREF

  google::protobuf::io::OstreamOutputStream::OstreamOutputStream(&v4, a2, -1);
  v2 = google::protobuf::MessageLite::SerializePartialToZeroCopyStream(this, &v4);
  google::protobuf::io::OstreamOutputStream::~OstreamOutputStream(&v4);
  return v2;
};

// Line 190: range 000000000C72B5E4-000000000C72B5EF
void __fastcall __noreturn google::protobuf::Message::SerializePartialToOstream()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::io::OstreamOutputStream::~OstreamOutputStream((google::protobuf::io::OstreamOutputStream *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 198: range 000000000C8BB7F0-000000000C8BB805
void __fastcall google::protobuf::Reflection::~Reflection(google::protobuf::Reflection *const this)
{
  ;
};

// Line 202: range 000000000C8BA400-000000000C8BA45F
void __fastcall google::protobuf::Reflection::AddAllocatedMessage(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        google::protobuf::Message *a4)
{
  ;
};

// Line 220: range 000000000C8BB810-000000000C8BB828
const google::protobuf::RepeatedField<int> *__fastcall google::protobuf::Reflection::GetRepeatedField<int>(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (const google::protobuf::RepeatedField<int> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                        + 81))(
                                                         this,
                                                         message,
                                                         field,
                                                         1LL,
                                                         0xFFFFFFFFLL,
                                                         0LL);
};

// Line 220: range 000000000C8BB830-000000000C8BB848
google::protobuf::RepeatedField<int> *__fastcall google::protobuf::Reflection::MutableRepeatedField<int>(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (google::protobuf::RepeatedField<int> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                  + 81))(
                                                   this,
                                                   message,
                                                   field,
                                                   1LL,
                                                   0xFFFFFFFFLL,
                                                   0LL);
};

// Line 221: range 000000000C8BB850-000000000C8BB868
const google::protobuf::RepeatedField<long int> *__fastcall google::protobuf::Reflection::GetRepeatedField<long>(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (const google::protobuf::RepeatedField<long int> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                             + 81))(
                                                              this,
                                                              message,
                                                              field,
                                                              2LL,
                                                              0xFFFFFFFFLL,
                                                              0LL);
};

// Line 221: range 000000000C8BB870-000000000C8BB888
google::protobuf::RepeatedField<long int> *__fastcall google::protobuf::Reflection::MutableRepeatedField<long>(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (google::protobuf::RepeatedField<long int> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                       + 81))(
                                                        this,
                                                        message,
                                                        field,
                                                        2LL,
                                                        0xFFFFFFFFLL,
                                                        0LL);
};

// Line 222: range 000000000C8BB890-000000000C8BB8A8
const google::protobuf::RepeatedField<unsigned int> *__fastcall google::protobuf::Reflection::GetRepeatedField<unsigned int>(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (const google::protobuf::RepeatedField<unsigned int> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                                 + 81))(
                                                                  this,
                                                                  message,
                                                                  field,
                                                                  3LL,
                                                                  0xFFFFFFFFLL,
                                                                  0LL);
};

// Line 222: range 000000000C8BB8B0-000000000C8BB8C8
google::protobuf::RepeatedField<unsigned int> *__fastcall google::protobuf::Reflection::MutableRepeatedField<unsigned int>(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (google::protobuf::RepeatedField<unsigned int> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                           + 81))(
                                                            this,
                                                            message,
                                                            field,
                                                            3LL,
                                                            0xFFFFFFFFLL,
                                                            0LL);
};

// Line 223: range 000000000C8BB8D0-000000000C8BB8E8
const google::protobuf::RepeatedField<long unsigned int> *__fastcall google::protobuf::Reflection::GetRepeatedField<unsigned long>(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (const google::protobuf::RepeatedField<long unsigned int> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                                      + 81))(
                                                                       this,
                                                                       message,
                                                                       field,
                                                                       4LL,
                                                                       0xFFFFFFFFLL,
                                                                       0LL);
};

// Line 223: range 000000000C8BB8F0-000000000C8BB908
google::protobuf::RepeatedField<long unsigned int> *__fastcall google::protobuf::Reflection::MutableRepeatedField<unsigned long>(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (google::protobuf::RepeatedField<long unsigned int> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                                + 81))(
                                                                 this,
                                                                 message,
                                                                 field,
                                                                 4LL,
                                                                 0xFFFFFFFFLL,
                                                                 0LL);
};

// Line 224: range 000000000C8BB910-000000000C8BB928
const google::protobuf::RepeatedField<float> *__fastcall google::protobuf::Reflection::GetRepeatedField<float>(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (const google::protobuf::RepeatedField<float> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                          + 81))(
                                                           this,
                                                           message,
                                                           field,
                                                           6LL,
                                                           0xFFFFFFFFLL,
                                                           0LL);
};

// Line 224: range 000000000C8BB930-000000000C8BB948
google::protobuf::RepeatedField<float> *__fastcall google::protobuf::Reflection::MutableRepeatedField<float>(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (google::protobuf::RepeatedField<float> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                    + 81))(
                                                     this,
                                                     message,
                                                     field,
                                                     6LL,
                                                     0xFFFFFFFFLL,
                                                     0LL);
};

// Line 225: range 000000000C8BB950-000000000C8BB968
const google::protobuf::RepeatedField<double> *__fastcall google::protobuf::Reflection::GetRepeatedField<double>(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (const google::protobuf::RepeatedField<double> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                           + 81))(
                                                            this,
                                                            message,
                                                            field,
                                                            5LL,
                                                            0xFFFFFFFFLL,
                                                            0LL);
};

// Line 225: range 000000000C8BB970-000000000C8BB988
google::protobuf::RepeatedField<double> *__fastcall google::protobuf::Reflection::MutableRepeatedField<double>(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (google::protobuf::RepeatedField<double> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                     + 81))(
                                                      this,
                                                      message,
                                                      field,
                                                      5LL,
                                                      0xFFFFFFFFLL,
                                                      0LL);
};

// Line 226: range 000000000C8BB990-000000000C8BB9A8
const google::protobuf::RepeatedField<bool> *__fastcall google::protobuf::Reflection::GetRepeatedField<bool>(
        const google::protobuf::Reflection *const this,
        const google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (const google::protobuf::RepeatedField<bool> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                         + 81))(
                                                          this,
                                                          message,
                                                          field,
                                                          7LL,
                                                          0xFFFFFFFFLL,
                                                          0LL);
};

// Line 226: range 000000000C8BB9B0-000000000C8BB9C8
google::protobuf::RepeatedField<bool> *__fastcall google::protobuf::Reflection::MutableRepeatedField<bool>(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field)
{
  return (google::protobuf::RepeatedField<bool> *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))this->_vptr_Reflection
                                                   + 81))(
                                                    this,
                                                    message,
                                                    field,
                                                    7LL,
                                                    0xFFFFFFFFLL,
                                                    0LL);
};

// Line 234: range 000000000C8BB9D0-000000000C8BB9E5
void *__fastcall google::protobuf::Reflection::MutableRawRepeatedString(
        const google::protobuf::Reflection *const this,
        google::protobuf::Message *message,
        const google::protobuf::FieldDescriptor *field,
        bool is_string)
{
  return (void *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64, _QWORD, _QWORD))this->_vptr_Reflection
                  + 81))(
                   this,
                   message,
                   field,
                   9LL,
                   0LL,
                   0LL);
};

// Line 240: range 000000000C8BB320-000000000C8BB565
google::protobuf::Reflection *__fastcall google::protobuf::Reflection::MapBegin(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        google::protobuf::Message *a3,
        google::protobuf::FieldDescriptor *a4)
{
  google::protobuf::internal::LogMessage_0 *v7; // rsi
  const std::string *vptr_MessageLite; // rax
  const google::protobuf::Message::Reflection *(__fastcall *v9)(const google::protobuf::Message *const); // rdx
  __int64 v10; // rdx
  __int64 v11; // rdi
  google::protobuf::internal::MapFieldBase *(__fastcall *v12)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // rcx
  int (**v13)(...); // rax
  const google::protobuf::Descriptor *v14; // rax
  google::protobuf::FieldDescriptor *FieldByName; // rax
  int v16; // eax
  int vptr_Reflection; // edx
  google::protobuf::FieldDescriptor::CppType v18; // ebx
  const google::protobuf::Descriptor *v19; // rax
  google::protobuf::FieldDescriptor *v20; // rax
  int v21; // eax
  google::protobuf::internal::LogMessage_0 *v22; // rdi
  void **v24; // r14
  __int64 v25; // rax
  google::protobuf::internal::LogFinisher v26; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v27; // [rsp+10h] [rbp-68h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(&v27, LOGLEVEL_FATAL_0, "google/protobuf/message.cc", 241);
  v7 = google::protobuf::internal::LogMessage::operator<<(&v27, "Unimplemented Map Reflection API.");
  google::protobuf::internal::LogFinisher::operator=(&v26, v7);
  google::protobuf::internal::LogMessage::~LogMessage(&v27);
  vptr_MessageLite = (const std::string *)a3->_vptr_MessageLite;
  this[4]._vptr_Reflection = 0LL;
  LODWORD(this[3]._vptr_Reflection) = 0;
  LODWORD(this[5]._vptr_Reflection) = 0;
  v9 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*(&vptr_MessageLite[5]._anon_0._M_allocated_capacity + 1);
  if ( v9 == google::protobuf::Message::GetReflection )
  {
    ((void (__fastcall *)(google::protobuf::Message *))vptr_MessageLite[6]._M_dataplus._M_p)(a3);
    v11 = v10;
  }
  else
  {
    v11 = (__int64)v9(a3);
  }
  v12 = *(google::protobuf::internal::MapFieldBase *(__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v11 + 728LL);
  v13 = 0LL;
  if ( v12 != google::protobuf::Reflection::MapData )
    v13 = (int (**)(...))v12((const google::protobuf::Reflection *const)v11, a3, a4);
  this[1]._vptr_Reflection = v13;
  v14 = google::protobuf::FieldDescriptor::message_type(a4);
  *(_QWORD *)&v27.level_ = &v27.line_;
  v27.line_ = 7955819;
  v27.filename_ = (const char *)3;
  FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                                       v14,
                                                       (const std::string *)&v27);
  v16 = google::protobuf::FieldDescriptor::type(FieldByName);
  vptr_Reflection = (int)this[3]._vptr_Reflection;
  v18 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v16];
  if ( vptr_Reflection != v18 )
  {
    if ( vptr_Reflection != 9 || (v24 = (void **)this[2]._vptr_Reflection) == 0LL )
    {
      LODWORD(this[3]._vptr_Reflection) = v18;
      if ( v18 != CPPTYPE_STRING_0 )
        goto LABEL_8;
      goto LABEL_17;
    }
    if ( *v24 != v24 + 2 )
      operator delete(*v24);
    operator delete(v24, 0x20uLL);
    LODWORD(this[3]._vptr_Reflection) = v18;
    if ( v18 == CPPTYPE_STRING_0 )
    {
LABEL_17:
      v25 = operator new(0x20uLL);
      *(_QWORD *)(v25 + 8) = 0LL;
      *(_QWORD *)v25 = v25 + 16;
      *(_BYTE *)(v25 + 16) = 0;
      this[2]._vptr_Reflection = (int (**)(...))v25;
    }
  }
LABEL_8:
  if ( *(google::protobuf::internal::LogMessage_0 **)&v27.level_ != (google::protobuf::internal::LogMessage_0 *)&v27.line_ )
    operator delete(*(void **)&v27.level_);
  v19 = google::protobuf::FieldDescriptor::message_type(a4);
  *(_QWORD *)&v27.level_ = &v27.line_;
  strcpy((char *)&v27.line_, "value");
  v27.filename_ = (const char *)5;
  v20 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                               v19,
                                               (const std::string *)&v27);
  v21 = google::protobuf::FieldDescriptor::type(v20);
  v22 = *(google::protobuf::internal::LogMessage_0 **)&v27.level_;
  SLODWORD(this[5]._vptr_Reflection) = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v21];
  if ( v22 != (google::protobuf::internal::LogMessage_0 *)&v27.line_ )
    operator delete(v22);
  (*((void (__fastcall **)(int (**)(...), google::protobuf::Reflection *))*this[1]._vptr_Reflection + 12))(
    this[1]._vptr_Reflection,
    this);
  return this;
};

// Line 248: range 000000000C8BB0D0-000000000C8BB315
google::protobuf::Reflection *__fastcall google::protobuf::Reflection::MapEnd(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        google::protobuf::Message *a3,
        google::protobuf::FieldDescriptor *a4)
{
  google::protobuf::internal::LogMessage_0 *v7; // rsi
  const std::string *vptr_MessageLite; // rax
  const google::protobuf::Message::Reflection *(__fastcall *v9)(const google::protobuf::Message *const); // rdx
  __int64 v10; // rdx
  __int64 v11; // rdi
  google::protobuf::internal::MapFieldBase *(__fastcall *v12)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // rcx
  int (**v13)(...); // rax
  const google::protobuf::Descriptor *v14; // rax
  google::protobuf::FieldDescriptor *FieldByName; // rax
  int v16; // eax
  int vptr_Reflection; // edx
  google::protobuf::FieldDescriptor::CppType v18; // ebx
  const google::protobuf::Descriptor *v19; // rax
  google::protobuf::FieldDescriptor *v20; // rax
  int v21; // eax
  google::protobuf::internal::LogMessage_0 *v22; // rdi
  void **v24; // r14
  __int64 v25; // rax
  google::protobuf::internal::LogFinisher v26; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v27; // [rsp+10h] [rbp-68h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(&v27, LOGLEVEL_FATAL_0, "google/protobuf/message.cc", 249);
  v7 = google::protobuf::internal::LogMessage::operator<<(&v27, "Unimplemented Map Reflection API.");
  google::protobuf::internal::LogFinisher::operator=(&v26, v7);
  google::protobuf::internal::LogMessage::~LogMessage(&v27);
  vptr_MessageLite = (const std::string *)a3->_vptr_MessageLite;
  this[4]._vptr_Reflection = 0LL;
  LODWORD(this[3]._vptr_Reflection) = 0;
  LODWORD(this[5]._vptr_Reflection) = 0;
  v9 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*(&vptr_MessageLite[5]._anon_0._M_allocated_capacity + 1);
  if ( v9 == google::protobuf::Message::GetReflection )
  {
    ((void (__fastcall *)(google::protobuf::Message *))vptr_MessageLite[6]._M_dataplus._M_p)(a3);
    v11 = v10;
  }
  else
  {
    v11 = (__int64)v9(a3);
  }
  v12 = *(google::protobuf::internal::MapFieldBase *(__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v11 + 728LL);
  v13 = 0LL;
  if ( v12 != google::protobuf::Reflection::MapData )
    v13 = (int (**)(...))v12((const google::protobuf::Reflection *const)v11, a3, a4);
  this[1]._vptr_Reflection = v13;
  v14 = google::protobuf::FieldDescriptor::message_type(a4);
  *(_QWORD *)&v27.level_ = &v27.line_;
  v27.line_ = 7955819;
  v27.filename_ = (const char *)3;
  FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                                       v14,
                                                       (const std::string *)&v27);
  v16 = google::protobuf::FieldDescriptor::type(FieldByName);
  vptr_Reflection = (int)this[3]._vptr_Reflection;
  v18 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v16];
  if ( vptr_Reflection != v18 )
  {
    if ( vptr_Reflection != 9 || (v24 = (void **)this[2]._vptr_Reflection) == 0LL )
    {
      LODWORD(this[3]._vptr_Reflection) = v18;
      if ( v18 != CPPTYPE_STRING_0 )
        goto LABEL_8;
      goto LABEL_17;
    }
    if ( *v24 != v24 + 2 )
      operator delete(*v24);
    operator delete(v24, 0x20uLL);
    LODWORD(this[3]._vptr_Reflection) = v18;
    if ( v18 == CPPTYPE_STRING_0 )
    {
LABEL_17:
      v25 = operator new(0x20uLL);
      *(_QWORD *)(v25 + 8) = 0LL;
      *(_QWORD *)v25 = v25 + 16;
      *(_BYTE *)(v25 + 16) = 0;
      this[2]._vptr_Reflection = (int (**)(...))v25;
    }
  }
LABEL_8:
  if ( *(google::protobuf::internal::LogMessage_0 **)&v27.level_ != (google::protobuf::internal::LogMessage_0 *)&v27.line_ )
    operator delete(*(void **)&v27.level_);
  v19 = google::protobuf::FieldDescriptor::message_type(a4);
  *(_QWORD *)&v27.level_ = &v27.line_;
  strcpy((char *)&v27.line_, "value");
  v27.filename_ = (const char *)5;
  v20 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                               v19,
                                               (const std::string *)&v27);
  v21 = google::protobuf::FieldDescriptor::type(v20);
  v22 = *(google::protobuf::internal::LogMessage_0 **)&v27.level_;
  SLODWORD(this[5]._vptr_Reflection) = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v21];
  if ( v22 != (google::protobuf::internal::LogMessage_0 *)&v27.line_ )
    operator delete(v22);
  (*((void (__fastcall **)(int (**)(...), google::protobuf::Reflection *))*this[1]._vptr_Reflection + 12))(
    this[1]._vptr_Reflection,
    this);
  return this;
};

// Line 257: range 000000000C8BB9F0-000000000C8BBA05
void __fastcall google::protobuf::MessageFactory::~MessageFactory(google::protobuf::MessageFactory *const this)
{
  ;
};

// Line 288: range 000000000C8BBB40-000000000C8BBB69
void __cdecl google::protobuf::`anonymous namespace'::ShutdownGeneratedMessageFactory()
{
  google::protobuf::`anonymous namespace'::GeneratedMessageFactory *v0; // rbp

  v0 = google::protobuf::`anonymous namespace'::generated_message_factory_;
  if ( google::protobuf::`anonymous namespace'::generated_message_factory_ )
  {
    google::protobuf::`anonymous namespace'::GeneratedMessageFactory::~GeneratedMessageFactory(google::protobuf::`anonymous namespace'::generated_message_factory_);
    operator delete(v0, 0x80uLL);
  }
};

// Line 292: range 000000000C8BBB70-000000000C8BBCB8
__int64 __fastcall google::protobuf::`anonymous namespace'::InitGeneratedMessageFactory(
        google::protobuf::_anonymous_namespace_ *this)
{
  google::protobuf::`anonymous namespace'::GeneratedMessageFactory *v1; // rax
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(const std::string&)>,true> > >::__bucket_type *p_M_single_bucket; // r13
  google::protobuf::`anonymous namespace'::GeneratedMessageFactory *v3; // rbp
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(const std::string&)>,true> > > *bkt; // rax
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(const std::string&)>,true> > > *v5; // rbx
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(const std::string&)>,true> > >::__bucket_type *buckets; // r13
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(const std::string&)>,true> > > *v7; // rax
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(const std::string&)>,true> > > *v8; // rbx

  v1 = (google::protobuf::`anonymous namespace'::GeneratedMessageFactory *)operator new(0x80uLL);
  p_M_single_bucket = &v1->file_map_._M_h._M_single_bucket;
  v1->_vptr_MessageFactory = (int (**)(...))off_1A1721F0;
  v3 = v1;
  v1->file_map_._M_h._M_buckets = &v1->file_map_._M_h._M_single_bucket;
  v1->file_map_._M_h._M_bucket_count = 1LL;
  v1->file_map_._M_h._M_before_begin._M_nxt = 0LL;
  v1->file_map_._M_h._M_element_count = 0LL;
  v1->file_map_._M_h._M_rehash_policy._M_max_load_factor = 1.0;
  v1->file_map_._M_h._M_rehash_policy._M_next_resize = 0LL;
  v1->file_map_._M_h._M_single_bucket = 0LL;
  bkt = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(const std::string&)>,true> > > *)std::__detail::_Prime_rehash_policy::_M_next_bkt(&v1->file_map_._M_h._M_rehash_policy, 0LL);
  v5 = bkt;
  if ( (unsigned __int64)bkt > v3->file_map_._M_h._M_bucket_count )
  {
    if ( bkt == (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(const std::string&)>,true> > > *)1 )
      v3->file_map_._M_h._M_single_bucket = 0LL;
    else
      p_M_single_bucket = std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(std::string const&)>,true>>>::_M_allocate_buckets(
                            bkt,
                            0LL);
    v3->file_map_._M_h._M_buckets = p_M_single_bucket;
    v3->file_map_._M_h._M_bucket_count = (std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type)v5;
  }
  google::protobuf::internal::Mutex::Mutex(&v3->mutex_);
  buckets = &v3->type_map_._M_h._M_single_bucket;
  v3->type_map_._M_h._M_bucket_count = 1LL;
  v3->type_map_._M_h._M_buckets = &v3->type_map_._M_h._M_single_bucket;
  v3->type_map_._M_h._M_before_begin._M_nxt = 0LL;
  v3->type_map_._M_h._M_element_count = 0LL;
  v3->type_map_._M_h._M_rehash_policy._M_max_load_factor = 1.0;
  v3->type_map_._M_h._M_rehash_policy._M_next_resize = 0LL;
  v3->type_map_._M_h._M_single_bucket = 0LL;
  v7 = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(const std::string&)>,true> > > *)std::__detail::_Prime_rehash_policy::_M_next_bkt(&v3->type_map_._M_h._M_rehash_policy, 0LL);
  v8 = v7;
  if ( (unsigned __int64)v7 > v3->type_map_._M_h._M_bucket_count )
  {
    if ( v7 == (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(const std::string&)>,true> > > *)1 )
      v3->type_map_._M_h._M_single_bucket = 0LL;
    else
      buckets = std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<char const* const,void (*)(std::string const&)>,true>>>::_M_allocate_buckets(
                  v7,
                  0LL);
    v3->type_map_._M_h._M_buckets = buckets;
    v3->type_map_._M_h._M_bucket_count = (std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type)v8;
  }
  google::protobuf::`anonymous namespace'::generated_message_factory_ = v3;
  return google::protobuf::internal::OnShutdown(
           (google::protobuf::internal *)google::protobuf::`anonymous namespace'::ShutdownGeneratedMessageFactory,
           0LL);
};

// Line 298: range 000000000C8BBAF0-000000000C8BBB13
void __fastcall google::protobuf::`anonymous namespace'::GeneratedMessageFactory::~GeneratedMessageFactory(
        google::protobuf::`anonymous namespace'::GeneratedMessageFactory *const this)
{
  google::protobuf::hash_map<const google::protobuf::Descriptor*,const google::protobuf::Message*,google::protobuf::hash<const google::protobuf::Descriptor*>,std::equal_to<const google::protobuf::Descriptor*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> > > *p_type_map; // rdi

  p_type_map = &this->type_map_;
  p_type_map[-2]._M_h._M_rehash_policy._M_next_resize = (std::size_t)off_1A1721F0;
  std::_Hashtable<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(&p_type_map->_M_h);
  google::protobuf::internal::Mutex::~Mutex(&this->mutex_);
  std::_Hashtable<char const*,std::pair<char const* const,void (*)(std::string const&)>,std::allocator<std::pair<char const* const,void (*)(std::string const&)>>,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(&this->file_map_._M_h);
};

// Line 298: range 000000000C8BBB20-000000000C8BBB32
void __fastcall google::protobuf::`anonymous namespace'::GeneratedMessageFactory::~GeneratedMessageFactory(
        google::protobuf::`anonymous namespace'::GeneratedMessageFactory *const this)
{
  google::protobuf::`anonymous namespace'::GeneratedMessageFactory::~GeneratedMessageFactory(this);
  operator delete(this, 0x80uLL);
};

// Line 309: range 000000000C72B496-000000000C72B4A3
void __fastcall __noreturn google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        google::protobuf::internal::LogMessage_0 a10)
{
  struct _Unwind_Exception *v10; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a10);
  _Unwind_Resume(v10);
};

// Line 329: range 000000000C8BBD00-000000000C8BBF4D
__int64 __fastcall google::protobuf::`anonymous namespace'::GeneratedMessageFactory::GetPrototype(
        google::protobuf::_anonymous_namespace_::GeneratedMessageFactory *this,
        const google::protobuf::Descriptor *a2)
{
  google::protobuf::internal::Mutex *v2; // rbp
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> > *v4; // r12
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::iterator v5; // rax
  google::protobuf::internal::Mutex *v6; // rdi
  __int64 v7; // r13
  const google::protobuf::DescriptorPool *pool; // r13
  std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code v9; // rcx
  std::string::pointer M_p; // rdx
  __int64 i; // rax
  std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *v12; // rax
  std::__detail::_Hash_node_base *M_nxt; // rax
  std::__detail::_Hash_node_base *v14; // rbx
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::iterator v15; // rax
  __int64 v16; // r13
  google::protobuf::internal::LogMessage_0 *v18; // rax
  google::protobuf::internal::LogMessage_0 *v19; // rax
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::iterator v20; // rax
  google::protobuf::internal::LogMessage_0 *v21; // rax
  google::protobuf::internal::LogMessage_0 *v22; // rax
  google::protobuf::internal::LogMessage_0 *v23; // rax
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type __k[2]; // [rsp+8h] [rbp-80h] BYREF
  google::protobuf::internal::LogFinisher v25; // [rsp+1Fh] [rbp-69h] BYREF
  std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type v26[13]; // [rsp+20h] [rbp-68h] BYREF

  v2 = (google::protobuf::internal::Mutex *)((char *)this + 64);
  v4 = (std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> > *)((char *)this + 72);
  __k[0] = a2;
  google::protobuf::internal::Mutex::Lock((google::protobuf::internal::Mutex *)this + 8);
  v5._M_cur = std::_Hashtable<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                (std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> > *const)((char *)this + 72),
                __k)._M_cur;
  v6 = (google::protobuf::internal::Mutex *)((char *)this + 64);
  if ( v5._M_cur )
  {
    v7 = *((_QWORD *)&v5._M_cur->_M_storage._M_storage.1 + 1);
    if ( v7 )
    {
      google::protobuf::internal::Mutex::Unlock(v6);
      return v7;
    }
  }
  google::protobuf::internal::Mutex::Unlock(v6);
  pool = __k[0]->file_->pool_;
  if ( pool != (const google::protobuf::DescriptorPool *)google::protobuf::DescriptorPool::generated_pool((google::protobuf::DescriptorPool *)v6) )
    return 0LL;
  v9 = 0LL;
  M_p = __k[0]->file_->name_->_M_dataplus._M_p;
  v26[0] = M_p;
  for ( i = *M_p; (_BYTE)i; i = *M_p )
  {
    ++M_p;
    v9 = i + 5 * v9;
  }
  v12 = std::_Hashtable<char const*,std::pair<char const* const,void (*)(std::string const&)>,std::allocator<std::pair<char const* const,void (*)(std::string const&)>>,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node(
          (const std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> > *const)((char *)this + 8),
          v9 % *((_QWORD *)this + 2),
          v26,
          v9);
  if ( !v12 || (M_nxt = v12->_M_nxt) == 0LL || (v14 = M_nxt[2]._M_nxt) == 0LL )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)v26,
      LOGLEVEL_ERROR_0,
      "google/protobuf/message.cc",
      344);
    v18 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)v26,
            "File appears to be in generated pool but wasn't registered: ");
    v19 = google::protobuf::internal::LogMessage::operator<<(v18, __k[0]->file_->name_);
    google::protobuf::internal::LogFinisher::operator=(&v25, v19);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)v26);
    return 0LL;
  }
  google::protobuf::internal::Mutex::Lock(v2);
  v15._M_cur = std::_Hashtable<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                 v4,
                 __k)._M_cur;
  if ( !v15._M_cur || (v16 = *((_QWORD *)&v15._M_cur->_M_storage._M_storage.1 + 1)) == 0 )
  {
    ((void (__fastcall *)(const std::string *))v14)(__k[0]->file_->name_);
    v20._M_cur = std::_Hashtable<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                   v4,
                   __k)._M_cur;
    if ( !v20._M_cur || (v16 = *((_QWORD *)&v20._M_cur->_M_storage._M_storage.1 + 1)) == 0 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)v26,
        LOGLEVEL_ERROR_0,
        "google/protobuf/message.cc",
        361);
      v21 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)v26,
              "Type appears to be in generated pool but wasn't ");
      v22 = google::protobuf::internal::LogMessage::operator<<(v21, "registered: ");
      v23 = google::protobuf::internal::LogMessage::operator<<(v22, __k[0]->full_name_);
      google::protobuf::internal::LogFinisher::operator=(&v25, v23);
      v16 = 0LL;
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)v26);
    }
  }
  google::protobuf::internal::Mutex::Unlock(v2);
  return v16;
};

// Line 344: range 000000000C72B46A-000000000C72B477
void __fastcall __noreturn google::protobuf::`anonymous namespace'::GeneratedMessageFactory::GetPrototype(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        google::protobuf::internal::LogMessage_0 a10)
{
  struct _Unwind_Exception *v10; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a10);
  _Unwind_Resume(v10);
};

// Line 375: range 000000000C8BBF60-000000000C8BC17B
void __fastcall google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char *value, const char *a2)
{
  google::protobuf::`anonymous namespace'::GeneratedMessageFactory *v2; // rbx
  __int64 v3; // rax
  google::protobuf::hash_map<char const*,void (*)(const std::string&),google::protobuf::hash<char const*>,google::protobuf::streq,std::allocator<std::pair<char const* const,void (*)(const std::string&)> > > *p_file_map; // r15
  char *v5; // rdx
  std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code v6; // r12
  std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type v7; // r13
  std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  std::__detail::_Hash_node_base *v11; // rax
  std::__detail::_Hash_node_base *v12; // r14
  std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type v13; // rdx
  std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__bucket_type *M_buckets; // rsi
  std::__detail::_Hash_node_base ***v15; // rcx
  google::protobuf::internal::LogFinisher v16[8]; // [rsp+18h] [rbp-80h] BYREF
  google::protobuf::internal::LogMessage_0 __k[2]; // [rsp+20h] [rbp-78h] BYREF

  if ( google::protobuf::`anonymous namespace'::generated_message_factory_once_init_ != 2 )
  {
    *(_QWORD *)&__k[0].level_ = off_1A16E058;
    __k[0].filename_ = (const char *)google::protobuf::`anonymous namespace'::InitGeneratedMessageFactory;
    LOBYTE(__k[0].line_) = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::`anonymous namespace'::generated_message_factory_once_init_,
      (google::protobuf::Closure *)__k);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)__k);
  }
  v2 = google::protobuf::`anonymous namespace'::generated_message_factory_;
  *(_QWORD *)&__k[0].level_ = value;
  __k[0].filename_ = a2;
  v3 = *value;
  p_file_map = &google::protobuf::`anonymous namespace'::generated_message_factory_->file_map_;
  if ( (_BYTE)v3 )
  {
    v5 = value;
    v6 = 0LL;
    do
    {
      ++v5;
      v6 = v3 + 5 * v6;
      v3 = *v5;
    }
    while ( (_BYTE)v3 );
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 % google::protobuf::`anonymous namespace'::generated_message_factory_->file_map_._M_h._M_bucket_count;
  v8 = std::_Hashtable<char const*,std::pair<char const* const,void (*)(std::string const&)>,std::allocator<std::pair<char const* const,void (*)(std::string const&)>>,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node(
         &google::protobuf::`anonymous namespace'::generated_message_factory_->file_map_._M_h,
         v7,
         (const std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type *)__k,
         v6);
  if ( v8 && v8->_M_nxt )
  {
    google::protobuf::internal::LogMessage::LogMessage(__k, LOGLEVEL_FATAL_0, "google/protobuf/message.cc", 309);
    v9 = google::protobuf::internal::LogMessage::operator<<(__k, "File is already registered: ");
    v10 = google::protobuf::internal::LogMessage::operator<<(v9, value);
    google::protobuf::internal::LogFinisher::operator=(v16, v10);
    google::protobuf::internal::LogMessage::~LogMessage(__k);
  }
  else
  {
    v11 = (std::__detail::_Hash_node_base *)operator new(0x20uLL);
    v11->_M_nxt = 0LL;
    v12 = v11;
    v11[1]._M_nxt = (std::__detail::_Hash_node_base *)value;
    v11[2]._M_nxt = (std::__detail::_Hash_node_base *)a2;
    *(_QWORD *)v16[0].gap0 = v2->file_map_._M_h._M_rehash_policy._M_next_resize;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            &v2->file_map_._M_h._M_rehash_policy,
                            v2->file_map_._M_h._M_bucket_count,
                            v2->file_map_._M_h._M_element_count,
                            1uLL) )
    {
      std::_Hashtable<char const*,std::pair<char const* const,void (*)(std::string const&)>,std::allocator<std::pair<char const* const,void (*)(std::string const&)>>,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_rehash(
        &p_file_map->_M_h,
        v13,
        (const std::_Hashtable<char const*,std::pair<char const* const,void (*)(const std::string&)>,std::allocator<std::pair<char const* const,void (*)(const std::string&)> >,std::__detail::_Select1st,google::protobuf::streq,google::protobuf::hash<char const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__rehash_state *)v16);
      v7 = v6 % v2->file_map_._M_h._M_bucket_count;
    }
    M_buckets = v2->file_map_._M_h._M_buckets;
    v12[3]._M_nxt = (std::__detail::_Hash_node_base *)v6;
    v15 = (std::__detail::_Hash_node_base ***)&M_buckets[v7];
    if ( *v15 )
    {
      v12->_M_nxt = **v15;
      **v15 = v12;
    }
    else
    {
      v12->_M_nxt = (std::__detail::_Hash_node_base *)v2->file_map_._M_h._M_before_begin;
      v2->file_map_._M_h._M_before_begin._M_nxt = v12;
      if ( v12->_M_nxt )
        M_buckets[(unsigned __int64)v12->_M_nxt[3]._M_nxt % v2->file_map_._M_h._M_bucket_count] = v12;
      *v15 = &v2->file_map_._M_h._M_before_begin._M_nxt;
    }
    ++v2->file_map_._M_h._M_element_count;
  }
};

// Line 381: range 000000000C8BC180-000000000C8BC35D
void __fastcall google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code __code,
        google::protobuf::Descriptor *a2,
        const google::protobuf::Message *a3)
{
  google::protobuf::`anonymous namespace'::GeneratedMessageFactory *v3; // rbx
  google::protobuf::hash_map<const google::protobuf::Descriptor*,const google::protobuf::Message*,google::protobuf::hash<const google::protobuf::Descriptor*>,std::equal_to<const google::protobuf::Descriptor*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> > > *p_type_map; // r15
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type v5; // rdx
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code v6; // r13
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  std::__detail::_Hash_node_base *v10; // rax
  std::__detail::_Hash_node_base *v11; // r14
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type v12; // rdx
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__bucket_type *M_buckets; // rsi
  std::__detail::_Hash_node_base ***v14; // rcx
  google::protobuf::internal::LogFinisher v15[8]; // [rsp+8h] [rbp-80h] BYREF
  google::protobuf::internal::LogMessage_0 __k[2]; // [rsp+10h] [rbp-78h] BYREF

  if ( google::protobuf::`anonymous namespace'::generated_message_factory_once_init_ != 2 )
  {
    *(_QWORD *)&__k[0].level_ = off_1A16E058;
    __k[0].filename_ = (const char *)google::protobuf::`anonymous namespace'::InitGeneratedMessageFactory;
    LOBYTE(__k[0].line_) = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::`anonymous namespace'::generated_message_factory_once_init_,
      (google::protobuf::Closure *)__k);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)__k);
  }
  v3 = google::protobuf::`anonymous namespace'::generated_message_factory_;
  p_type_map = &google::protobuf::`anonymous namespace'::generated_message_factory_->type_map_;
  google::protobuf::internal::Mutex::AssertHeld(&google::protobuf::`anonymous namespace'::generated_message_factory_->mutex_);
  v5 = __code % v3->type_map_._M_h._M_bucket_count;
  *(_QWORD *)&__k[0].level_ = __code;
  __k[0].filename_ = (const char *)a2;
  v6 = v5;
  v7 = std::_Hashtable<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node(
         &p_type_map->_M_h,
         v5,
         (const std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type *)__k,
         __code);
  if ( v7 && v7->_M_nxt )
  {
    google::protobuf::internal::LogMessage::LogMessage(__k, LOGLEVEL_ERROR_0, "google/protobuf/message.cc", 324);
    v8 = google::protobuf::internal::LogMessage::operator<<(__k, "Type is already registered: ");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, *(const std::string **)(__code + 8));
    google::protobuf::internal::LogFinisher::operator=(v15, v9);
    google::protobuf::internal::LogMessage::~LogMessage(__k);
  }
  else
  {
    v10 = (std::__detail::_Hash_node_base *)operator new(0x20uLL);
    v10->_M_nxt = 0LL;
    v11 = v10;
    v10[1]._M_nxt = (std::__detail::_Hash_node_base *)__code;
    v10[2]._M_nxt = (std::__detail::_Hash_node_base *)a2;
    *(_QWORD *)v15[0].gap0 = v3->type_map_._M_h._M_rehash_policy._M_next_resize;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            &v3->type_map_._M_h._M_rehash_policy,
                            v3->type_map_._M_h._M_bucket_count,
                            v3->type_map_._M_h._M_element_count,
                            1uLL) )
    {
      std::_Hashtable<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::Message const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_rehash(
        &p_type_map->_M_h,
        v12,
        (const std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::Message*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__rehash_state *)v15);
      v6 = __code % v3->type_map_._M_h._M_bucket_count;
    }
    M_buckets = v3->type_map_._M_h._M_buckets;
    v11[3]._M_nxt = (std::__detail::_Hash_node_base *)__code;
    v14 = (std::__detail::_Hash_node_base ***)&M_buckets[v6];
    if ( *v14 )
    {
      v11->_M_nxt = **v14;
      **v14 = v11;
    }
    else
    {
      v11->_M_nxt = (std::__detail::_Hash_node_base *)v3->type_map_._M_h._M_before_begin;
      v3->type_map_._M_h._M_before_begin._M_nxt = v11;
      if ( v11->_M_nxt )
        M_buckets[(unsigned __int64)v11->_M_nxt[3]._M_nxt % v3->type_map_._M_h._M_bucket_count] = v11;
      *v14 = &v3->type_map_._M_h._M_before_begin._M_nxt;
    }
    ++v3->type_map_._M_h._M_element_count;
  }
};

// Line 387: range 000000000C72B1E0-000000000C72B1ED
void __fastcall __noreturn google::protobuf::Reflection::GetMessageFactory(
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

// Line 394: range 000000000C8BA470-000000000C8BA4BF
__int64 __fastcall google::protobuf::Reflection::RepeatedFieldData(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        google::protobuf::FieldDescriptor::CppType a4,
        const google::protobuf::Descriptor *a5)
{
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-49h] BYREF
  google::protobuf::internal::LogMessage_0 v8; // [rsp+10h] [rbp-48h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(&v8, LOGLEVEL_FATAL_0, "google/protobuf/message.cc", 395);
  v5 = google::protobuf::internal::LogMessage::operator<<(&v8, "Not implemented.");
  google::protobuf::internal::LogFinisher::operator=(&v7, v5);
  google::protobuf::internal::LogMessage::~LogMessage(&v8);
  return 0LL;
};

// Line 395: range 000000000C72B1F2-000000000C72B1FF
void __fastcall __noreturn google::protobuf::Reflection::RepeatedFieldData(
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

// Line 401: range 000000000C8BBA70-000000000C8BBA85
void __fastcall google::protobuf::internal::RepeatedFieldAccessor::~RepeatedFieldAccessor(
        google::protobuf::internal::RepeatedFieldAccessor *const this)
{
  ;
};

// Line 405: range 000000000C8BABA0-000000000C8BB0C1
google::protobuf::internal::RepeatedPtrFieldStringAccessor *__fastcall google::protobuf::Reflection::RepeatedFieldAccessor(
        google::protobuf::Reflection *this,
        google::protobuf::FieldDescriptor *a2)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::RepeatedPtrFieldStringAccessor *result; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogFinisher v5; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v6; // [rsp+10h] [rbp-58h] BYREF

  if ( a2->label_ != LABEL_REPEATED )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v6, LOGLEVEL_FATAL_0, "google/protobuf/message.cc", 406);
    v2 = google::protobuf::internal::LogMessage::operator<<(&v6, "CHECK failed: field->is_repeated(): ");
    google::protobuf::internal::LogFinisher::operator=(&v5, v2);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  }
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type(a2) )
  {
    case 1u:
      if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>>::once_ != 2 )
      {
        *(_QWORD *)&v6.level_ = off_1A16E058;
        LOBYTE(v6.line_) = 0;
        v6.filename_ = (const char *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>>::Init;
        google::protobuf::GoogleOnceInitImpl(
          &google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>>::once_,
          (google::protobuf::Closure *)&v6);
        google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v6);
      }
      result = (google::protobuf::internal::RepeatedPtrFieldStringAccessor *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>>::instance_;
      break;
    case 2u:
      if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>>::once_ != 2 )
      {
        *(_QWORD *)&v6.level_ = off_1A16E058;
        LOBYTE(v6.line_) = 0;
        v6.filename_ = (const char *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>>::Init;
        google::protobuf::GoogleOnceInitImpl(
          &google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>>::once_,
          (google::protobuf::Closure *)&v6);
        google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v6);
      }
      result = (google::protobuf::internal::RepeatedPtrFieldStringAccessor *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>>::instance_;
      break;
    case 3u:
    case 0x10u:
    case 0x12u:
      if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>>::once_ != 2 )
      {
        *(_QWORD *)&v6.level_ = off_1A16E058;
        LOBYTE(v6.line_) = 0;
        v6.filename_ = (const char *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>>::Init;
        google::protobuf::GoogleOnceInitImpl(
          &google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>>::once_,
          (google::protobuf::Closure *)&v6);
        google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v6);
      }
      result = (google::protobuf::internal::RepeatedPtrFieldStringAccessor *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>>::instance_;
      break;
    case 4u:
    case 6u:
      if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>>::once_ != 2 )
      {
        *(_QWORD *)&v6.level_ = off_1A16E058;
        LOBYTE(v6.line_) = 0;
        v6.filename_ = (const char *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>>::Init;
        google::protobuf::GoogleOnceInitImpl(
          &google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>>::once_,
          (google::protobuf::Closure *)&v6);
        google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v6);
      }
      result = (google::protobuf::internal::RepeatedPtrFieldStringAccessor *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>>::instance_;
      break;
    case 5u:
    case 0xFu:
    case 0x11u:
      if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>>::once_ != 2 )
        goto LABEL_20;
      goto LABEL_9;
    case 7u:
    case 0xDu:
      if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>>::once_ != 2 )
      {
        *(_QWORD *)&v6.level_ = off_1A16E058;
        LOBYTE(v6.line_) = 0;
        v6.filename_ = (const char *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>>::Init;
        google::protobuf::GoogleOnceInitImpl(
          &google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>>::once_,
          (google::protobuf::Closure *)&v6);
        google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v6);
      }
      result = (google::protobuf::internal::RepeatedPtrFieldStringAccessor *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>>::instance_;
      break;
    case 8u:
      if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>>::once_ != 2 )
      {
        *(_QWORD *)&v6.level_ = off_1A16E058;
        LOBYTE(v6.line_) = 0;
        v6.filename_ = (const char *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>>::Init;
        google::protobuf::GoogleOnceInitImpl(
          &google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>>::once_,
          (google::protobuf::Closure *)&v6);
        google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v6);
      }
      result = (google::protobuf::internal::RepeatedPtrFieldStringAccessor *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>>::instance_;
      break;
    case 9u:
    case 0xCu:
      if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldStringAccessor>::once_ != 2 )
      {
        *(_QWORD *)&v6.level_ = off_1A16E058;
        LOBYTE(v6.line_) = 0;
        v6.filename_ = (const char *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldStringAccessor>::Init;
        google::protobuf::GoogleOnceInitImpl(
          &google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldStringAccessor>::once_,
          (google::protobuf::Closure *)&v6);
        google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v6);
      }
      result = google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldStringAccessor>::instance_;
      break;
    case 0xAu:
    case 0xBu:
      if ( google::protobuf::FieldDescriptor::is_map(a2) )
      {
        if ( google::protobuf::internal::Singleton<google::protobuf::internal::MapFieldAccessor>::once_ != 2 )
        {
          *(_QWORD *)&v6.level_ = off_1A16E058;
          LOBYTE(v6.line_) = 0;
          v6.filename_ = (const char *)google::protobuf::internal::Singleton<google::protobuf::internal::MapFieldAccessor>::Init;
          google::protobuf::GoogleOnceInitImpl(
            &google::protobuf::internal::Singleton<google::protobuf::internal::MapFieldAccessor>::once_,
            (google::protobuf::Closure *)&v6);
          google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v6);
        }
        result = (google::protobuf::internal::RepeatedPtrFieldStringAccessor *)google::protobuf::internal::Singleton<google::protobuf::internal::MapFieldAccessor>::instance_;
      }
      else
      {
        if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldMessageAccessor>::once_ != 2 )
        {
          *(_QWORD *)&v6.level_ = off_1A16E058;
          LOBYTE(v6.line_) = 0;
          v6.filename_ = (const char *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldMessageAccessor>::Init;
          google::protobuf::GoogleOnceInitImpl(
            &google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldMessageAccessor>::once_,
            (google::protobuf::Closure *)&v6);
          google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v6);
        }
        result = (google::protobuf::internal::RepeatedPtrFieldStringAccessor *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldMessageAccessor>::instance_;
      }
      break;
    case 0xEu:
      if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>>::once_ != 2 )
      {
LABEL_20:
        *(_QWORD *)&v6.level_ = off_1A16E058;
        LOBYTE(v6.line_) = 0;
        v6.filename_ = (const char *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>>::Init;
        google::protobuf::GoogleOnceInitImpl(
          &google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>>::once_,
          (google::protobuf::Closure *)&v6);
        google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&v6);
      }
LABEL_9:
      result = (google::protobuf::internal::RepeatedPtrFieldStringAccessor *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>>::instance_;
      break;
    default:
      google::protobuf::internal::LogMessage::LogMessage(&v6, LOGLEVEL_FATAL_0, "google/protobuf/message.cc", 434);
      v4 = google::protobuf::internal::LogMessage::operator<<(&v6, "Should not reach here.");
      google::protobuf::internal::LogFinisher::operator=(&v5, v4);
      google::protobuf::internal::LogMessage::~LogMessage(&v6);
      result = 0LL;
      break;
  }
  return result;
};

// Line 440: range 000000000C8BA890-000000000C8BAB41
void __cdecl google::protobuf::internal::`anonymous namespace'::ShutdownRepeatedFieldAccessor()
{
  void (*v0)(void); // rax
  void (*v1)(void); // rax
  void (*v2)(void); // rax
  void (*v3)(void); // rax
  void (*v4)(void); // rax
  void (*v5)(void); // rax
  void (*v6)(void); // rax
  void (*v7)(void); // rax
  void (*v8)(void); // rax
  void (__fastcall *v9)(google::protobuf::internal::MapFieldAccessor *const); // rax

  if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>>::instance_ )
  {
    v0 = (void (*)(void))*((_QWORD *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>>::instance_->_vptr_RepeatedFieldAccessor
                         + 1);
    if ( (char *)v0 == (char *)google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::~RepeatedFieldPrimitiveAccessor )
      operator delete(
        google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>>::instance_,
        8uLL);
    else
      v0();
  }
  google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>>::instance_ = 0LL;
  if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>>::instance_ )
  {
    v1 = (void (*)(void))*((_QWORD *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>>::instance_->_vptr_RepeatedFieldAccessor
                         + 1);
    if ( (char *)v1 == (char *)google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::~RepeatedFieldPrimitiveAccessor )
      operator delete(
        google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>>::instance_,
        8uLL);
    else
      v1();
  }
  google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>>::instance_ = 0LL;
  if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>>::instance_ )
  {
    v2 = (void (*)(void))*((_QWORD *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>>::instance_->_vptr_RepeatedFieldAccessor
                         + 1);
    if ( (char *)v2 == (char *)google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>::~RepeatedFieldPrimitiveAccessor )
      operator delete(
        google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>>::instance_,
        8uLL);
    else
      v2();
  }
  google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>>::instance_ = 0LL;
  if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>>::instance_ )
  {
    v3 = (void (*)(void))*((_QWORD *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>>::instance_->_vptr_RepeatedFieldAccessor
                         + 1);
    if ( (char *)v3 == (char *)google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>::~RepeatedFieldPrimitiveAccessor )
      operator delete(
        google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>>::instance_,
        8uLL);
    else
      v3();
  }
  google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>>::instance_ = 0LL;
  if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>>::instance_ )
  {
    v4 = (void (*)(void))*((_QWORD *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>>::instance_->_vptr_RepeatedFieldAccessor
                         + 1);
    if ( (char *)v4 == (char *)google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::~RepeatedFieldPrimitiveAccessor )
      operator delete(
        google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>>::instance_,
        8uLL);
    else
      v4();
  }
  google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>>::instance_ = 0LL;
  if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>>::instance_ )
  {
    v5 = (void (*)(void))*((_QWORD *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>>::instance_->_vptr_RepeatedFieldAccessor
                         + 1);
    if ( (char *)v5 == (char *)google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::~RepeatedFieldPrimitiveAccessor )
      operator delete(
        google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>>::instance_,
        8uLL);
    else
      v5();
  }
  google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>>::instance_ = 0LL;
  if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>>::instance_ )
  {
    v6 = (void (*)(void))*((_QWORD *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>>::instance_->_vptr_RepeatedFieldAccessor
                         + 1);
    if ( (char *)v6 == (char *)google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::~RepeatedFieldPrimitiveAccessor )
      operator delete(
        google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>>::instance_,
        8uLL);
    else
      v6();
  }
  google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>>::instance_ = 0LL;
  if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldStringAccessor>::instance_ )
  {
    v7 = (void (*)(void))*((_QWORD *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldStringAccessor>::instance_->_vptr_RepeatedFieldAccessor
                         + 1);
    if ( (char *)v7 == (char *)google::protobuf::internal::RepeatedPtrFieldStringAccessor::~RepeatedPtrFieldStringAccessor )
      operator delete(
        google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldStringAccessor>::instance_,
        8uLL);
    else
      v7();
  }
  google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldStringAccessor>::instance_ = 0LL;
  if ( google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldMessageAccessor>::instance_ )
  {
    v8 = (void (*)(void))*((_QWORD *)google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldMessageAccessor>::instance_->_vptr_RepeatedFieldAccessor
                         + 1);
    if ( (char *)v8 == (char *)google::protobuf::internal::RepeatedPtrFieldMessageAccessor::~RepeatedPtrFieldMessageAccessor )
      operator delete(
        google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldMessageAccessor>::instance_,
        8uLL);
    else
      v8();
  }
  google::protobuf::internal::Singleton<google::protobuf::internal::RepeatedPtrFieldMessageAccessor>::instance_ = 0LL;
  if ( !google::protobuf::internal::Singleton<google::protobuf::internal::MapFieldAccessor>::instance_ )
    goto LABEL_31;
  v9 = (void (__fastcall *)(google::protobuf::internal::MapFieldAccessor *const))*((_QWORD *)google::protobuf::internal::Singleton<google::protobuf::internal::MapFieldAccessor>::instance_->_vptr_RepeatedFieldAccessor
                                                                                 + 1);
  if ( v9 == google::protobuf::internal::MapFieldAccessor::~MapFieldAccessor )
  {
    operator delete(
      google::protobuf::internal::Singleton<google::protobuf::internal::MapFieldAccessor>::instance_,
      8uLL);
LABEL_31:
    google::protobuf::internal::Singleton<google::protobuf::internal::MapFieldAccessor>::instance_ = 0LL;
    return;
  }
  ((void (*)(void))v9)();
  google::protobuf::internal::Singleton<google::protobuf::internal::MapFieldAccessor>::instance_ = 0LL;
};

// Line 470: range 000000000C8BBA90-000000000C8BBA93
google::protobuf::Message *__fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::NewFromPrototype(
        const google::protobuf::Message *prototype,
        google::protobuf::Arena *arena)
{
  return (google::protobuf::Message *)(*((__int64 (__fastcall **)(const google::protobuf::Message *, google::protobuf::Arena *))prototype->_vptr_MessageLite
                                       + 4))(
                                        prototype,
                                        arena);
};

// Line 479: range 000000000C8BBAA0-000000000C8BBAB8
google::protobuf::Arena *__fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::GetArena(
        google::protobuf::Message *value)
{
  __int64 (*v1)(void); // rax

  v1 = (__int64 (*)(void))*((_QWORD *)value->_vptr_MessageLite + 5);
  if ( (char *)v1 == (char *)google::protobuf::MessageLite::GetArena )
    return 0LL;
  else
    return (google::protobuf::Arena *)v1();
};

// Line 488: range 000000000C8BBAC0-000000000C8BBAE8
void *__fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::GetMaybeArenaPointer(
        google::protobuf::Message *value)
{
  __int64 (*v1)(void); // rdx
  __int64 (*v2)(void); // rax

  v1 = (__int64 (*)(void))*((_QWORD *)value->_vptr_MessageLite + 6);
  if ( (char *)v1 != (char *)google::protobuf::MessageLite::GetMaybeArenaPointer )
    return (void *)v1();
  v2 = (__int64 (*)(void))*((_QWORD *)value->_vptr_MessageLite + 5);
  if ( (char *)v2 == (char *)google::protobuf::MessageLite::GetArena )
    return 0LL;
  else
    return (void *)v2();
};

// Line 493: range 000000000C746A90-000000000C746ABB
void __cdecl GLOBAL__sub_I__ZN6google8protobuf7Message9MergeFromERKS1_()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)google::protobuf::internal::`anonymous namespace'::ShutdownRepeatedFieldAccessor,
    (void (*)(void))&std::__ioinit);
};
