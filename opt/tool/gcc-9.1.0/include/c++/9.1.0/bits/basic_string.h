// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/basic_string.h

// Line 74: range 000000000C661124-000000000C66114D
bool __cdecl std::operator==<char>(const char *__lhs, const std::string *__rhs)
{
  return (unsigned int)std::string::compare(__rhs, __lhs) == 0;
};

// Line 74: range 000000000C6619BE-000000000C661A21
std::string *__cdecl std::operator+<char>(std::string *retstr, const std::string *__lhs, const std::string *__rhs)
{
  std::string::basic_string(retstr, __lhs);
  std::string::append(retstr, __rhs);
  return retstr;
};

// Line 74: range 000000000CED99F2-000000000CED9A3A
std::string *__cdecl std::operator+<char>(std::string *retstr, const std::string *__lhs, std::string *__rhs)
{
  std::string *v3; // rax
  std::remove_reference<std::string&>::type *v4; // rdx

  v3 = (std::string *)std::string::insert(__rhs, 0LL, __lhs);
  v4 = std::move<std::string &>(v3);
  std::string::basic_string(retstr, v4);
  return retstr;
};

// Line 75: range 000000000C663E1E-000000000C663E4B
void __cdecl std::string::_M_construct<char *>(std::string *const this, char *__beg, char *__end)
{
  std::string::_M_construct_aux<char *>(this, __beg, __end, (std::__false_type)__beg);
};

// Line 76: range 000000000CDF8C78-000000000CDF8D22
std::string *__cdecl std::to_string(std::string *retstr, float __val)
{
  double v2; // xmm0_8

  v2 = __val;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  __gnu_cxx::__to_xstring<std::string,char>(
    retstr,
    (int (*)(char *, std::size_t, const char *, ___va_list_tag *))&vsnprintf,
    0x3AuLL,
    "%f",
    v2);
  return retstr;
};

// Line 150: range 000000000C656EE1-000000000C656F29
std::string *__cdecl std::operator+<char>(std::string *retstr, const char *__lhs, std::string *__rhs)
{
  std::string *v3; // rax
  std::remove_reference<std::string&>::type *v4; // rdx

  v3 = (std::string *)std::string::insert(__rhs, 0LL, __lhs);
  v4 = std::move<std::string &>(v3);
  std::string::basic_string(retstr, v4);
  return retstr;
};

// Line 150: range 000000000F7B5D9E-000000000F7B5DB8
void __cdecl std::basic_string<bool>::_Alloc_hider::~_Alloc_hider(std::basic_string<bool>::_Alloc_hider *const this)
{
  std::allocator<bool>::~allocator((std::allocator<bool> *const)this);
};

// Line 150: range 000000000C656EC6-000000000C656EE0
void __cdecl std::string::_Alloc_hider::~_Alloc_hider(std::string::_Alloc_hider *const this)
{
  std::allocator<char>::~allocator(this);
};

// Line 159: range 000000000F807ABC-000000000F807B1C
void __cdecl std::basic_string<bool>::_Alloc_hider::_Alloc_hider(
        std::basic_string<bool>::_Alloc_hider *const this,
        std::basic_string<bool>::pointer __dat,
        std::allocator<bool> *__a)
{
  std::remove_reference<std::allocator<bool>&>::type *v3; // rdx

  v3 = std::move<std::allocator<bool> &>(__a);
  std::allocator<bool>::allocator((std::allocator<bool> *const)this, v3);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_p = __dat;
};

// Line 165: range 000000000C634AD0-000000000C634B16
__int64 __cdecl std::stoll(const std::string *__str, std::size_t *__idx, int __base)
{
  const char *v3; // rax
  int v4; // r9d

  v3 = (const char *)std::string::c_str(__str);
  return __gnu_cxx::__stoa<long long,long long,char,int>(
           (__int64 (*)(const char *, char **, int))&strtoll,
           "stoll",
           v3,
           __idx,
           __base,
           v4);
};

// Line 178: range 000000000F97B912-000000000F97B950
void __cdecl std::basic_string<bool>::_M_data(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::pointer __p)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_dataplus._M_p = __p;
};

// Line 182: range 000000000F86D0CA-000000000F86D10D
void __cdecl std::basic_string<bool>::_M_length(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __length)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_string_length = __length;
};

// Line 186: range 000000000F807D0E-000000000F807D43
std::basic_string<bool>::pointer __cdecl std::basic_string<bool>::_M_data(const std::basic_string<bool> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->_M_dataplus._M_p;
};

// Line 190: range 000000000F807A82-000000000F807A9F
std::basic_string<bool>::pointer __cdecl std::basic_string<bool>::_M_local_data(std::basic_string<bool> *const this)
{
  return std::pointer_traits<bool *>::pointer_to(this->_anon_0._M_local_buf);
};

// Line 193: range 000000000C713E30-000000000C713E50
std::string *__fastcall google::protobuf::MessageLite::InitializationErrorString[abi:cxx11](
        std::string *retstr,
        const google::protobuf::MessageLite *const this)
{
  std::forward_iterator_tag v2; // cl

  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct<char const*>(retstr, "(cannot determine missing fields for lite message)", "", v2);
  return retstr;
};

// Line 193: range 000000000C7E2000-000000000C7E2016
std::string *__fastcall google::protobuf::util::converter::ObjectLocationTracker::ToString[abi:cxx11](
        std::string *retstr,
        const google::protobuf::util::converter::ObjectLocationTracker *const this)
{
  std::string *result; // rax

  retstr->_M_string_length = 0LL;
  result = retstr;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  return result;
};

// Line 193: range 0000000014DEF6A0-0000000014DEF6F1
void __fastcall Json::PathArgument::PathArgument(Json::PathArgument *const this, __int64 a2)
{
  char *v2; // rdx
  std::string::size_type v3; // rdx

  v2 = *(char **)a2;
  this->key_._M_dataplus._M_p = this->key_._anon_0._M_local_buf;
  if ( v2 == (char *)(a2 + 16) )
  {
    this->key_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(a2 + 16));
  }
  else
  {
    this->key_._M_dataplus._M_p = v2;
    this->key_._anon_0._M_allocated_capacity = *(_QWORD *)(a2 + 16);
  }
  v3 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = a2 + 16;
  *(_QWORD *)(a2 + 8) = 0LL;
  this->key_._M_string_length = v3;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)&this->index_ = 0x200000000LL;
};

// Line 193: range 0000000014E029A0-0000000014E02A11
void __fastcall Json::StyledStreamWriter::StyledStreamWriter(Json::StyledStreamWriter *const this, __int64 a2)
{
  char *v2; // rdx
  std::string::size_type v3; // rdx

  v2 = *(char **)a2;
  this->indentString_._anon_0._M_local_buf[0] = 0;
  this->indentString_._M_dataplus._M_p = this->indentString_._anon_0._M_local_buf;
  this->indentation_._M_dataplus._M_p = this->indentation_._anon_0._M_local_buf;
  this->indentString_._M_string_length = 0LL;
  this->rightMargin_ = 74;
  *(_OWORD *)&this->childValues_._M_impl._M_start = 0LL;
  *(_OWORD *)&this->childValues_._M_impl._M_end_of_storage = 0LL;
  if ( v2 == (char *)(a2 + 16) )
  {
    this->indentation_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(a2 + 16));
  }
  else
  {
    this->indentation_._M_dataplus._M_p = v2;
    this->indentation_._anon_0._M_allocated_capacity = *(_QWORD *)(a2 + 16);
  }
  v3 = *(_QWORD *)(a2 + 8);
  *((_BYTE *)this + 104) &= 0xFCu;
  *(_QWORD *)a2 = a2 + 16;
  this->indentation_._M_string_length = v3;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 0;
};

// Line 193: range 0000000014DEF590-0000000014DEF5AB
void __fastcall Json::PathArgument::PathArgument(Json::PathArgument *const this)
{
  this->key_._M_string_length = 0LL;
  this->key_._M_dataplus._M_p = this->key_._anon_0._M_local_buf;
  this->key_._anon_0._M_local_buf[0] = 0;
  *(_QWORD *)&this->index_ = 0LL;
};

// Line 193: range 0000000014DEF5B0-0000000014DEF5CD
void __fastcall Json::PathArgument::PathArgument(Json::PathArgument *const this, Json::ArrayIndex index)
{
  this->key_._M_string_length = 0LL;
  this->key_._M_dataplus._M_p = this->key_._anon_0._M_local_buf;
  this->key_._anon_0._M_local_buf[0] = 0;
  this->index_ = index;
  this->kind_ = kindIndex;
};

// Line 193: range 000000000C70A320-000000000C70A33D
void __fastcall google::protobuf::internal::LogMessage::LogMessage(
        google::protobuf::internal::LogMessage_0 *const this,
        google::protobuf::LogLevel_0 level,
        const char *filename,
        int line)
{
  this->level_ = level;
  this->filename_ = filename;
  this->line_ = line;
  this->message_._M_dataplus._M_p = this->message_._anon_0._M_local_buf;
  this->message_._M_string_length = 0LL;
  this->message_._anon_0._M_local_buf[0] = 0;
};

// Line 193: range 000000000C70C430-000000000C70C44A
void __fastcall google::protobuf::util::Status::Status(google::protobuf::util::Status *const this)
{
  this->error_code_ = OK;
  this->error_message_._M_dataplus._M_p = this->error_message_._anon_0._M_local_buf;
  this->error_message_._M_string_length = 0LL;
  this->error_message_._anon_0._M_local_buf[0] = 0;
};

// Line 193: range 000000000C7D9E00-000000000C7D9E78
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::AnyWriter(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *const this,
        google::protobuf::util::converter::ProtoStreamObjectWriter *parent)
{
  this->parent_ = parent;
  this->type_url_._M_dataplus._M_p = this->type_url_._anon_0._M_local_buf;
  this->ow_.ptr_ = 0LL;
  this->type_url_._M_string_length = 0LL;
  this->type_url_._anon_0._M_local_buf[0] = 0;
  this->invalid_ = 0;
  this->data_._M_dataplus._M_p = this->data_._anon_0._M_local_buf;
  this->data_._M_string_length = 0LL;
  this->data_._anon_0._M_local_buf[0] = 0;
  this->output_._vptr_ByteSink = (int (**)(...))off_19E75718;
  this->output_.dest_ = &this->data_;
  this->depth_ = 0;
  this->is_well_known_type_ = 0;
  this->well_known_type_render_ = 0LL;
  this->uninterpreted_events_._M_impl._M_start = 0LL;
  this->uninterpreted_events_._M_impl._M_finish = 0LL;
  this->uninterpreted_events_._M_impl._M_end_of_storage = 0LL;
};

// Line 200: range 000000000F8DDCA2-000000000F8DDCBF
std::basic_string<bool>::const_pointer __cdecl std::basic_string<bool>::_M_local_data(
        const std::basic_string<bool> *const this)
{
  return std::pointer_traits<bool const*>::pointer_to(this->_anon_0._M_local_buf);
};

// Line 210: range 000000000F97B952-000000000F97B995
void __cdecl std::basic_string<bool>::_M_capacity(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __capacity)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_anon_0 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_anon_0._M_allocated_capacity = __capacity;
};

// Line 214: range 000000000F807B1E-000000000F807C3F
void __cdecl std::basic_string<bool>::_M_set_length(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __n)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::basic_string<bool>::pointer v5; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::basic_string<bool>::_M_set_length;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::basic_string<bool>::_M_length(this, __n);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 32);
  *(_BYTE *)(v2 + 32) = 0;
  v5 = std::basic_string<bool>::_M_data(this);
  __gnu_cxx::char_traits<bool>::assign(&v5[__n], (const __gnu_cxx::char_traits<bool>::char_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 217: range 000000000CA2F430-000000000CA2F447
bool __fastcall mysqlpp::DBDriver::enable_ssl(
        mysqlpp::DBDriver *const this,
        const char *key,
        const char *cert,
        const char *ca,
        const char *capath,
        const char *cipher)
{
  std::string::pointer M_p; // rax

  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 0;
};

// Line 217: range 000000000CA2C1E0-000000000CA2C1FE
void __fastcall mysqlpp::Connection::copy(mysqlpp::Connection *const this, const mysqlpp::Connection *other)
{
  std::string::pointer M_p; // rax
  mysqlpp::DBDriver *driver; // rsi

  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  LOBYTE(M_p) = other->exceptions_;
  driver = other->driver_;
  this->exceptions_ = (char)M_p;
  mysqlpp::DBDriver::copy(this->driver_, driver);
};

// Line 217: range 000000000CA2C290-000000000CA2C2A3
void __fastcall mysqlpp::Connection::disconnect(mysqlpp::Connection *const this)
{
  std::string::pointer M_p; // rax

  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  mysqlpp::DBDriver::disconnect(this->driver_);
};

// Line 219: range 000000000D4636B4-000000000D46372E
void __cdecl std::string::basic_string<std::allocator<char>>(
        std::string *const this,
        std::string::size_type __n,
        char __c,
        const std::allocator<char> *__a)
{
  __int64 v4; // rcx

  v4 = std::string::_M_local_data(this);
  std::string::_Alloc_hider::_Alloc_hider(this, v4, __a);
  std::string::_M_construct(this, __n, (unsigned int)__c);
};

// Line 221: range 000000000F86D198-000000000F86D1CC
bool __cdecl std::basic_string<bool>::_M_is_local(const std::basic_string<bool> *const this)
{
  std::basic_string<bool>::pointer v1; // rbx

  v1 = std::basic_string<bool>::_M_data(this);
  return v1 == std::basic_string<bool>::_M_local_data(this);
};

// Line 222: range 000000000C601E8A-000000000C601E9E
void __fastcall __noreturn Json::BuiltStyledStreamWriter::writeArrayValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp

  if ( a10 != a8 )
    operator delete(a10);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C601B4A-000000000C601B6F
void __fastcall __noreturn Json::BuiltStyledStreamWriter::writeCommentAfterValueOnSameLine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *v11; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != v11 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C601B2E-000000000C601B45
void __fastcall __noreturn Json::BuiltStyledStreamWriter::writeCommentBeforeValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10)
{
  struct _Unwind_Exception *v10; // rbp

  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C601EA4-000000000C601EB6
void __fastcall __noreturn Json::BuiltStyledStreamWriter::writeValue(
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
        __int64 a12,
        __int64 a13,
        void *a14)
{
  struct _Unwind_Exception *v14; // rbp
  void *v15; // r15

  if ( a14 != v15 )
    operator delete(a14);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C601D20-000000000C601D5C
void __fastcall __noreturn Json::FastWriter::writeValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        std::vector<std::string> *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char *a16,
        __int64 a17,
        char a18)
{
  struct _Unwind_Exception *v18; // rbp

  if ( a16 != &a18 )
    operator delete(a16);
  _Unwind_Resume(v18);
};

// Line 222: range 000000000C6000C8-000000000C6000DA
void __fastcall __noreturn Json::LogicError::LogicError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  void *v8; // rbp
  struct _Unwind_Exception *v9; // r12

  if ( a8 != v8 )
    operator delete(a8);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C600E52-000000000C600E78
void __fastcall __noreturn Json::OurReader::addComment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        void *a12)
{
  void *v12; // rbx
  struct _Unwind_Exception *v13; // rbp

  if ( a12 != v12 )
    operator delete(a12);
  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C6015DE-000000000C6015F0
void __fastcall __noreturn Json::OurReader::addError(
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
        void *a11)
{
  struct _Unwind_Exception *v11; // rbp
  void *v12; // r13

  if ( a11 != v12 )
    operator delete(a11);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C601796-000000000C6017A8
void __fastcall __noreturn Json::OurReader::decodeString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *v11; // r15

  if ( a10 != v11 )
    operator delete(a10);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C601768-000000000C60177A
void __fastcall __noreturn Json::OurReader::decodeUnicodeCodePoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  void *v10; // rbx
  struct _Unwind_Exception *v11; // rbp

  if ( a10 != v10 )
    operator delete(a10);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C60173A-000000000C60174C
void __fastcall __noreturn Json::OurReader::decodeUnicodeEscapeSequence(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  void *v10; // rbx
  struct _Unwind_Exception *v11; // rbp

  if ( a10 != v10 )
    operator delete(a10);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C600E7E-000000000C600EC2
void __fastcall __noreturn Json::OurReader::getFormattedErrorMessages[abi:cxx11](
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
        void *a11,
        char *a12,
        __int64 a13,
        char a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        void *a20)
{
  struct _Unwind_Exception *v20; // rbp
  void *v21; // r12
  void *v22; // r13
  void **v23; // r15

  if ( a20 != v22 )
    operator delete(a20);
  if ( a16 != v21 )
    operator delete(a16);
  if ( a12 != &a14 )
    operator delete(a12);
  if ( a11 != *v23 )
    operator delete(*v23);
  _Unwind_Resume(v20);
};

// Line 222: range 000000000C6010F4-000000000C60113C
void __fastcall __noreturn Json::OurReader::getStructuredErrors(
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
        __int64 a12,
        __int64 a13,
        void *a14)
{
  struct _Unwind_Exception *v14; // rbp
  __int64 v15; // r13
  void *v16; // r15
  _QWORD *v17; // r12
  _QWORD *i; // rbx
  char *v19; // rdi

  if ( a14 != v16 )
    operator delete(a14);
  v17 = *(_QWORD **)(v15 + 8);
  for ( i = *(_QWORD **)v15; v17 != i; i += 6 )
  {
    v19 = (char *)i[2];
    if ( v19 != (char *)(i + 4) )
      operator delete(v19);
  }
  if ( *(_QWORD *)v15 )
    operator delete(*(void **)v15);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C6018B4-000000000C6018C6
void __fastcall __noreturn Json::OurReader::parse(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16)
{
  void *v16; // rbx
  struct _Unwind_Exception *v17; // rbp

  if ( a16 != v16 )
    operator delete(a16);
  _Unwind_Resume(v17);
};

// Line 222: range 000000000C601810-000000000C60182A
void __fastcall __noreturn Json::OurReader::readArray(
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
        void *a12)
{
  void *v12; // rbx
  struct _Unwind_Exception *v13; // rbp
  Json::Value_0 *v14; // r14

  if ( a12 != v12 )
    operator delete(a12);
  Json::Value::~Value(v14);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C601868-000000000C6018A0
void __fastcall __noreturn Json::OurReader::readObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        void *a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        void *a32)
{
  Json::Value_0 *v32; // rbx
  struct _Unwind_Exception *v33; // rbp
  void *v34; // r15

  if ( a32 != v34 )
    operator delete(a32);
  Json::Value::~Value(v32);
  if ( a18 != a7 )
    operator delete(a18);
  _Unwind_Resume(v33);
};

// Line 222: range 000000000C600A36-000000000C600A4D
void __fastcall __noreturn Json::Path::makePath(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        char *a18,
        __int64 a19,
        char a20)
{
  struct _Unwind_Exception *v20; // rbp

  if ( a18 != &a20 )
    operator delete(a18);
  _Unwind_Resume(v20);
};

// Line 222: range 000000000C600D7A-000000000C600DA0
void __fastcall __noreturn Json::Reader::addComment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        void *a12)
{
  void *v12; // rbx
  struct _Unwind_Exception *v13; // rbp

  if ( a12 != v12 )
    operator delete(a12);
  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C601296-000000000C6012A8
void __fastcall __noreturn Json::Reader::addError(
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
        void *a11)
{
  struct _Unwind_Exception *v11; // rbp
  void *v12; // r13

  if ( a11 != v12 )
    operator delete(a11);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C60145E-000000000C601470
void __fastcall __noreturn Json::Reader::decodeString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *v11; // r15

  if ( a10 != v11 )
    operator delete(a10);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C601430-000000000C601442
void __fastcall __noreturn Json::Reader::decodeUnicodeCodePoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  void *v10; // rbx
  struct _Unwind_Exception *v11; // rbp

  if ( a10 != v10 )
    operator delete(a10);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C601402-000000000C601414
void __fastcall __noreturn Json::Reader::decodeUnicodeEscapeSequence(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  void *v10; // rbx
  struct _Unwind_Exception *v11; // rbp

  if ( a10 != v10 )
    operator delete(a10);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C600DA6-000000000C600DEA
void __fastcall __noreturn Json::Reader::getFormattedErrorMessages[abi:cxx11](
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
        void *a11,
        char *a12,
        __int64 a13,
        char a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        void *a20)
{
  struct _Unwind_Exception *v20; // rbp
  void *v21; // r12
  void *v22; // r13
  void **v23; // r15

  if ( a20 != v22 )
    operator delete(a20);
  if ( a16 != v21 )
    operator delete(a16);
  if ( a12 != &a14 )
    operator delete(a12);
  if ( a11 != *v23 )
    operator delete(*v23);
  _Unwind_Resume(v20);
};

// Line 222: range 000000000C6010AA-000000000C6010F2
void __fastcall __noreturn Json::Reader::getStructuredErrors(
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
        __int64 a12,
        __int64 a13,
        void *a14)
{
  struct _Unwind_Exception *v14; // rbp
  __int64 v15; // r13
  void *v16; // r15
  _QWORD *v17; // r12
  _QWORD *i; // rbx
  char *v19; // rdi

  if ( a14 != v16 )
    operator delete(a14);
  v17 = *(_QWORD **)(v15 + 8);
  for ( i = *(_QWORD **)v15; v17 != i; i += 6 )
  {
    v19 = (char *)i[2];
    if ( v19 != (char *)(i + 4) )
      operator delete(v19);
  }
  if ( *(_QWORD *)v15 )
    operator delete(*(void **)v15);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C600D62-000000000C600D75
void __fastcall __noreturn Json::Reader::normalizeEOL[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  struct _Unwind_Exception *v7; // rbp
  void **v8; // r12

  if ( a7 != *v8 )
    operator delete(*v8);
  _Unwind_Resume(v7);
};

// Line 222: range 000000000C6015B0-000000000C6015C2
void __fastcall __noreturn Json::Reader::parse(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16)
{
  void *v16; // rbx
  struct _Unwind_Exception *v17; // rbp

  if ( a16 != v16 )
    operator delete(a16);
  _Unwind_Resume(v17);
};

// Line 222: range 000000000C6015C8-000000000C6015D9
void __fastcall __noreturn Json::Reader::parse()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C6014D8-000000000C6014EA
void __fastcall __noreturn Json::Reader::pushError(
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
        __int64 a12,
        void *a13)
{
  struct _Unwind_Exception *v13; // rbp
  void *v14; // r12

  if ( a13 != v14 )
    operator delete(a13);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C60127E-000000000C601290
void __fastcall __noreturn Json::Reader::pushError(
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
        __int64 a12,
        void *a13)
{
  struct _Unwind_Exception *v13; // rbp
  void *v14; // r14

  if ( a13 != v14 )
    operator delete(a13);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C6014F0-000000000C60150A
void __fastcall __noreturn Json::Reader::readArray(
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
        void *a12)
{
  void *v12; // rbx
  struct _Unwind_Exception *v13; // rbp
  Json::Value_0 *v14; // r14

  if ( a12 != v12 )
    operator delete(a12);
  Json::Value::~Value(v14);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C601548-000000000C60157B
void __fastcall __noreturn Json::Reader::readObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        Json::Value_0 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        void *a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        void *a32)
{
  void *v32; // rbx
  struct _Unwind_Exception *v33; // rbp
  void *v34; // r15

  if ( a32 != v34 )
    operator delete(a32);
  Json::Value::~Value(a7);
  if ( a18 != v32 )
    operator delete(a18);
  _Unwind_Resume(v33);
};

// Line 222: range 000000000C6000B0-000000000C6000C2
void __fastcall __noreturn Json::RuntimeError::RuntimeError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  void *v8; // rbp
  struct _Unwind_Exception *v9; // r12

  if ( a8 != v8 )
    operator delete(a8);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C601FE0-000000000C601FF4
void __fastcall __noreturn Json::StyledStreamWriter::writeArrayValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp

  if ( a10 != a7 )
    operator delete(a10);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C601AF8-000000000C601B0E
void __fastcall __noreturn Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C601ADC-000000000C601AF3
void __fastcall __noreturn Json::StyledStreamWriter::writeCommentBeforeValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10)
{
  struct _Unwind_Exception *v10; // rbp

  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C601FFA-000000000C602016
void __fastcall __noreturn Json::StyledStreamWriter::writeValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        std::vector<std::string> *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void *a14)
{
  struct _Unwind_Exception *v14; // rbp
  void *v15; // r14

  if ( a14 != v15 )
    operator delete(a14);
  std::vector<std::string>::~vector(a7);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C601A64-000000000C601A75
void __fastcall __noreturn Json::StyledWriter::indent()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C601D5E-000000000C601D70
void __fastcall __noreturn Json::StyledWriter::writeArrayValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *v11; // r14

  if ( a10 != v11 )
    operator delete(a10);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C601A96-000000000C601AAD
void __fastcall __noreturn Json::StyledWriter::writeCommentAfterValueOnSameLine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12)
{
  struct _Unwind_Exception *v12; // rbp

  if ( a10 != &a12 )
    operator delete(a10);
  _Unwind_Resume(v12);
};

// Line 222: range 000000000C601A7A-000000000C601A91
void __fastcall __noreturn Json::StyledWriter::writeCommentBeforeValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10)
{
  struct _Unwind_Exception *v10; // rbp

  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C601D76-000000000C601D93
void __fastcall __noreturn Json::StyledWriter::writeValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        std::vector<std::string> *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16)
{
  struct _Unwind_Exception *v16; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a16 != retaddr )
    operator delete(a16);
  std::vector<std::string>::~vector(a9);
  _Unwind_Resume(v16);
};

// Line 222: range 000000000C60018C-000000000C6001A2
void __fastcall __noreturn Json::Value::CZString::CZString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C6001A8-000000000C6001BE
void __fastcall __noreturn Json::Value::CZString::operator<(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C6001C4-000000000C6001DA
void __fastcall __noreturn Json::Value::CZString::operator==(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C6008C4-000000000C6008F5
void __fastcall __noreturn Json::Value::Value(
        __int64 a1,
        std::array<std::string,3> *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rbp
  struct _Unwind_Exception *v9; // r12
  __int64 v10; // r13
  const std::default_delete<std::array<std::string,3> > *v11; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v10);
  v11 = *(const std::default_delete<std::array<std::string,3> > **)(v8 + 16);
  if ( v11 )
    std::default_delete<std::array<std::string,3ul>>::operator()(v11, a2);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C6007BE-000000000C6007DC
void __fastcall __noreturn Json::Value::asBool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbx
  __int64 v9; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C60042E-000000000C60044C
void __fastcall __noreturn Json::Value::asCString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbx
  __int64 v9; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C600756-000000000C600774
void __fastcall __noreturn Json::Value::asDouble(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbx
  __int64 v9; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C60079A-000000000C6007B8
void __fastcall __noreturn Json::Value::asFloat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbx
  __int64 v9; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C600476-000000000C60048F
void __fastcall __noreturn Json::Value::asInt()
{
  void *v0; // rbx
  __int64 v1; // rbp
  struct _Unwind_Exception *v2; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v1);
  _Unwind_Resume(v2);
};

// Line 222: range 000000000C60060A-000000000C600623
void __fastcall __noreturn Json::Value::asInt64()
{
  void *v0; // rbx
  __int64 v1; // rbp
  struct _Unwind_Exception *v2; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v1);
  _Unwind_Resume(v2);
};

// Line 222: range 000000000C600452-000000000C600470
void __fastcall __noreturn Json::Value::asString[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  __int64 v9; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C600540-000000000C600559
void __fastcall __noreturn Json::Value::asUInt()
{
  void *v0; // rbx
  __int64 v1; // rbp
  struct _Unwind_Exception *v2; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v1);
  _Unwind_Resume(v2);
};

// Line 222: range 000000000C6006B0-000000000C6006C9
void __fastcall __noreturn Json::Value::asUInt64()
{
  void *v0; // rbx
  __int64 v1; // rbp
  struct _Unwind_Exception *v2; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v1);
  _Unwind_Resume(v2);
};

// Line 222: range 000000000C60093A-000000000C600958
void __fastcall __noreturn Json::Value::clear(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  __int64 v9; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C600D0C-000000000C600D2A
void __fastcall __noreturn Json::Value::demand(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  __int64 v9; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C6009C6-000000000C600A34
void __fastcall __noreturn Json::Value::getMemberNames[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        void **a9,
        __int64 a10,
        __int64 a11,
        void *a12)
{
  void *v12; // rbx
  struct _Unwind_Exception *v13; // rbp
  void **i; // rbx

  if ( a12 != v12 )
    operator delete(a12);
  for ( i = a8; a9 != i; i += 4 )
  {
    if ( *i != i + 2 )
      operator delete(*i);
  }
  if ( a8 )
    operator delete(a8);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C600BF8-000000000C600C16
void __fastcall __noreturn Json::Value::insert(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  __int64 v9; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C600BD4-000000000C600BF2
void __fastcall __noreturn Json::Value::operator[](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  __int64 v9; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C600816-000000000C600834
void __fastcall __noreturn Json::Value::operator[](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  __int64 v9; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C60086E-000000000C600885
void __fastcall __noreturn Json::Value::setComment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12)
{
  struct _Unwind_Exception *v12; // rbp

  if ( a10 != &a12 )
    operator delete(a10);
  _Unwind_Resume(v12);
};

// Line 222: range 000000000C600D30-000000000C600D5C
void __fastcall __noreturn Json::Value::toStyledString[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  void *v8; // rbx
  Json::StreamWriterBuilder *v9; // rbp
  void **v10; // r12
  struct _Unwind_Exception *v11; // r13
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  if ( *v10 != v8 )
    operator delete(*v10);
  Json::StreamWriterBuilder::~StreamWriterBuilder(v9);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C600128-000000000C60013E
void __fastcall __noreturn Json::ValueIterator::ValueIterator(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C6019F8-000000000C601A09
void __fastcall __noreturn Json::appendHex()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C6003B2-000000000C6003D0
void __fastcall __noreturn Json::duplicateAndPrefixStringValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  __int64 v9; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C601950-000000000C601969
void __fastcall __noreturn Json::operator>>()
{
  void *v0; // rbx
  Json::CharReaderBuilder *v1; // rbp
  struct _Unwind_Exception *v2; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  Json::CharReaderBuilder::~CharReaderBuilder(v1);
  _Unwind_Resume(v2);
};

// Line 222: range 000000000C601A0E-000000000C601A21
void __fastcall __noreturn Json::valueToQuotedStringN(
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
        __int64 a12,
        __int64 a13,
        void *a14)
{
  struct _Unwind_Exception *v14; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a14 != retaddr )
    operator delete(a14);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C601A4D-000000000C601A5F
void __fastcall __noreturn Json::valueToString[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  void *v8; // rbx
  struct _Unwind_Exception *v9; // rbp

  if ( a8 != v8 )
    operator delete(a8);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C601F40-000000000C601F68
void __fastcall __noreturn Json::writeString[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct _Unwind_Exception *v8; // rbx
  __int64 v9; // rbp
  void **v10; // r12
  void *v11; // r13

  if ( v11 != *v10 )
    operator delete(*v10);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  std::ostringstream::~ostringstream(a8);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F1BEC-000000000C5F1BFD
void __fastcall __noreturn google::protobuf::CEscape()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F579A-000000000C5F57AB
void __fastcall __noreturn google::protobuf::Descriptor::DebugStringWithOptions[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F2B2C-000000000C5F2B3D
void __fastcall __noreturn google::protobuf::DescriptorBuilder::AddError()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F2944-000000000C5F2969
void __fastcall __noreturn google::protobuf::DescriptorBuilder::AddImportError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12)
{
  void *v12; // rbx
  struct _Unwind_Exception *v13; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != &a12 )
    operator delete(a10);
  if ( retaddr != v12 )
    operator delete(retaddr);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C5F278C-000000000C5F27FF
void __fastcall __noreturn google::protobuf::DescriptorBuilder::AddNotDefinedError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        void *a8,
        void *a9,
        void *a10,
        __int64 a11,
        char *a12,
        __int64 a13,
        char a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        void *a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        void *a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        void *a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        void *a32)
{
  void *v32; // rbx
  struct _Unwind_Exception *v33; // rbp

  if ( a32 != v32 )
    operator delete(a32);
  if ( a28 != a9 )
    operator delete(a28);
  if ( a24 != a10 )
    operator delete(a24);
  if ( a20 != a8 )
    operator delete(a20);
  if ( a16 != a7 )
    operator delete(a16);
  if ( a12 != &a14 )
    operator delete(a12);
  _Unwind_Resume(v33);
};

// Line 222: range 000000000C5F2D56-000000000C5F2D67
void __fastcall __noreturn google::protobuf::DescriptorBuilder::AddRecursiveImportError()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r14
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F3C68-000000000C5F3C97
void __fastcall __noreturn google::protobuf::DescriptorBuilder::AddSymbol(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        char *a24,
        __int64 a25,
        char a26,
        __int64 a27,
        void *a28)
{
  void *v28; // rbx
  struct _Unwind_Exception *v29; // rbp

  if ( a28 != v28 )
    operator delete(a28);
  if ( a24 != &a26 )
    operator delete(a24);
  _Unwind_Resume(v29);
};

// Line 222: range 000000000C5F28AE-000000000C5F28D3
void __fastcall __noreturn google::protobuf::DescriptorBuilder::AddTwiceListedError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10)
{
  void *v10; // rbx
  struct _Unwind_Exception *v11; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != v10 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C5F3A42-000000000C5F3A53
void __fastcall __noreturn google::protobuf::DescriptorBuilder::AllocateOptions()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F3DFE-000000000C5F3E89
void __fastcall __noreturn google::protobuf::DescriptorBuilder::BuildEnumValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        void *a14,
        __int64 a15,
        char a16,
        __int64 a17,
        void *a18,
        __int64 a19,
        char a20,
        __int64 a21,
        void *a22,
        __int64 a23,
        char a24,
        __int64 a25,
        void *a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        void *a30)
{
  struct _Unwind_Exception *v30; // rbp
  void *v31; // r13
  void *v32; // r14
  void *v33; // r15
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a30 != v31 )
    operator delete(a30);
  if ( a26 != v33 )
    operator delete(a26);
  if ( a22 != &a24 )
    operator delete(a22);
  if ( a18 != &a20 )
    operator delete(a18);
  if ( a14 != &a16 )
    operator delete(a14);
  if ( a10 != &a12 )
    operator delete(a10);
  if ( retaddr != v32 )
    operator delete(retaddr);
  _Unwind_Resume(v30);
};

// Line 222: range 000000000C5F3EAA-000000000C5F3ED1
void __fastcall __noreturn google::protobuf::DescriptorBuilder::BuildMessage()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // rdi

  v2 = *(void **)(v1 - 624);
  if ( v2 != (void *)(v1 - 608) )
    operator delete(v2);
  std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(*(std::_Hashtable<std::string,std::string,std::allocator<std::string >,std::__detail::_Identity,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true> > *const *)(v1 - 648));
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F3562-000000000C5F35E0
void __fastcall __noreturn google::protobuf::DescriptorBuilder::CheckEnumValueUniqueness(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::EnumValueDescriptor*>,std::_Select1st<std::pair<const std::string,const google::protobuf::EnumValueDescriptor*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::EnumValueDescriptor*> > > *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        char *a14,
        __int64 a15,
        char a16,
        __int64 a17,
        void *a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        void *a26,
        __int64 a27,
        char a28,
        __int64 a29,
        void *a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        void *a34,
        __int64 a35,
        char a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::EnumValueDescriptor*>,std::_Select1st<std::pair<const std::string,const google::protobuf::EnumValueDescriptor*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::EnumValueDescriptor*> > >::_Link_type __x)
{
  struct _Unwind_Exception *v42; // rbx
  void *v43; // rbp
  void *v44; // r13

  if ( a34 != &a36 )
    operator delete(a34);
  if ( a30 != v43 )
    operator delete(a30);
  if ( a26 != &a28 )
    operator delete(a26);
  if ( a18 != v44 )
    operator delete(a18);
  std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::EnumValueDescriptor const*>,std::_Select1st<std::pair<std::string const,google::protobuf::EnumValueDescriptor const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::EnumValueDescriptor const*>>>::_M_erase(
    a10,
    __x);
  if ( a14 != &a16 )
    operator delete(a14);
  _Unwind_Resume(v42);
};

// Line 222: range 000000000C5F5322-000000000C5F5348
void __fastcall __noreturn google::protobuf::DescriptorBuilder::CrossLinkField()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // r15
  void *v3; // rdi
  void *v4; // rdi

  v3 = *(void **)(v1 - 96);
  if ( v3 != v2 )
    operator delete(v3);
  v4 = *(void **)(v1 - 144);
  if ( v4 != (void *)(v1 - 128) )
    operator delete(v4);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F55DA-000000000C5F562F
void __fastcall __noreturn google::protobuf::DescriptorBuilder::CrossLinkMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        char a18)
{
  struct _Unwind_Exception *v18; // rbp

  if ( a8 != &a10 )
    operator delete(a8);
  if ( a16 != &a18 )
    operator delete(a16);
  _Unwind_Resume(v18);
};

// Line 222: range 000000000C5F52CE-000000000C5F52F3
void __fastcall __noreturn google::protobuf::DescriptorBuilder::CrossLinkMethod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *v11; // r13
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != v11 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F2D6C-000000000C5F2DF6
void __fastcall __noreturn google::protobuf::DescriptorBuilder::DescriptorBuilder()
{
  __int64 v0; // rbx
  void *v1; // rbp
  void *v2; // r12
  struct _Unwind_Exception *v3; // r13
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // r12
  __int64 i; // rbp
  void *v8; // rdi
  void *v9; // rdi

  v4 = *(void **)(v0 + 208);
  if ( v2 != v4 )
    operator delete(v4);
  std::_Rb_tree<google::protobuf::FileDescriptor const*,google::protobuf::FileDescriptor const*,std::_Identity<google::protobuf::FileDescriptor const*>,std::less<google::protobuf::FileDescriptor const*>,std::allocator<google::protobuf::FileDescriptor const*>>::_M_erase(
    (std::_Rb_tree<const google::protobuf::FileDescriptor*,const google::protobuf::FileDescriptor*,std::_Identity<const google::protobuf::FileDescriptor*>,std::less<const google::protobuf::FileDescriptor*>,std::allocator<const google::protobuf::FileDescriptor*> > *const)(v0 + 152),
    *(std::_Rb_tree<const google::protobuf::FileDescriptor*,const google::protobuf::FileDescriptor*,std::_Identity<const google::protobuf::FileDescriptor*>,std::less<const google::protobuf::FileDescriptor*>,std::allocator<const google::protobuf::FileDescriptor*> >::_Link_type *)(v0 + 168));
  std::_Rb_tree<google::protobuf::FileDescriptor const*,google::protobuf::FileDescriptor const*,std::_Identity<google::protobuf::FileDescriptor const*>,std::less<google::protobuf::FileDescriptor const*>,std::allocator<google::protobuf::FileDescriptor const*>>::_M_erase(
    (std::_Rb_tree<const google::protobuf::FileDescriptor*,const google::protobuf::FileDescriptor*,std::_Identity<const google::protobuf::FileDescriptor*>,std::less<const google::protobuf::FileDescriptor*>,std::allocator<const google::protobuf::FileDescriptor*> > *const)(v0 + 104),
    *(std::_Rb_tree<const google::protobuf::FileDescriptor*,const google::protobuf::FileDescriptor*,std::_Identity<const google::protobuf::FileDescriptor*>,std::less<const google::protobuf::FileDescriptor*>,std::allocator<const google::protobuf::FileDescriptor*> >::_Link_type *)(v0 + 120));
  v5 = *(void **)(v0 + 56);
  if ( v1 != v5 )
    operator delete(v5);
  v6 = *(_QWORD *)(v0 + 32);
  for ( i = *(_QWORD *)(v0 + 24); v6 != i; i += 80LL )
  {
    v9 = *(void **)(i + 32);
    if ( v9 != (void *)(i + 48) )
      operator delete(v9);
    if ( *(_QWORD *)i != i + 16 )
      operator delete(*(void **)i);
  }
  v8 = *(void **)(v0 + 24);
  if ( v8 )
    operator delete(v8);
  _Unwind_Resume(v3);
};

// Line 222: range 000000000C5F348E-000000000C5F34C7
void __fastcall __noreturn google::protobuf::DescriptorBuilder::DetectMapConflicts(
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
        char *a12,
        __int64 a13,
        char a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::Descriptor*>,std::_Select1st<std::pair<const std::string,const google::protobuf::Descriptor*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::Descriptor*> > >::_Link_type __x)
{
  struct _Unwind_Exception *v24; // rbx
  std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::Descriptor*>,std::_Select1st<std::pair<const std::string,const google::protobuf::Descriptor*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::Descriptor*> > > *v25; // rbp
  void *v26; // r12

  if ( a16 != v26 )
    operator delete(a16);
  if ( a12 != &a14 )
    operator delete(a12);
  std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::Descriptor const*>,std::_Select1st<std::pair<std::string const,google::protobuf::Descriptor const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::Descriptor const*>>>::_M_erase(
    v25,
    __x);
  _Unwind_Resume(v24);
};

// Line 222: range 000000000C5F2E6A-000000000C5F2E89
void __fastcall __noreturn google::protobuf::DescriptorBuilder::LogUnusedDependency(
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
        __int64 a12,
        __int64 a13,
        void *a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        std::_Rb_tree_node<std::string > *__x)
{
  struct _Unwind_Exception *v20; // rbp
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *v21; // r12
  void *v22; // r13

  if ( a14 != v22 )
    operator delete(a14);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    v21,
    __x);
  _Unwind_Resume(v20);
};

// Line 222: range 000000000C5F528A-000000000C5F52B1
void __fastcall __noreturn google::protobuf::DescriptorBuilder::LookupSymbolNoPlaceholder(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16)
{
  struct _Unwind_Exception *v16; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a16 != retaddr )
    operator delete(a16);
  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v16);
};

// Line 222: range 000000000C5F28D8-000000000C5F28FE
void __fastcall __noreturn google::protobuf::DescriptorBuilder::OptionInterpreter::ExamineIfOptionIsSet(
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
        char *a12,
        __int64 a13,
        char a14,
        __int64 a15,
        void *a16)
{
  void *v16; // rbx
  struct _Unwind_Exception *v17; // rbp

  if ( a16 != v16 )
    operator delete(a16);
  if ( a12 != &a14 )
    operator delete(a12);
  _Unwind_Resume(v17);
};

// Line 222: range 000000000C5F4D46-000000000C5F4EDB
void __fastcall __noreturn google::protobuf::DescriptorBuilder::OptionInterpreter::InterpretSingleOption(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char *a12,
        __int64 a13,
        char a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        void *a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        google::protobuf::internal::scoped_ptr<google::protobuf::UnknownFieldSet> a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        google::protobuf::internal::scoped_ptr<google::protobuf::UnknownFieldSet> a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        void *a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        void *a36,
        __int64 a37,
        char a38,
        __int64 a39,
        void *a40)
{
  void *v40; // rbx
  struct _Unwind_Exception *v41; // rbp

  if ( a40 != v40 )
    operator delete(a40);
  if ( a36 != &a38 )
    operator delete(a36);
  if ( a12 != &a14 )
    operator delete(a12);
  if ( a8 )
    operator delete(a8);
  _Unwind_Resume(v41);
};

// Line 222: range 000000000C5F46E0-000000000C5F4705
void __fastcall __noreturn google::protobuf::DescriptorBuilder::OptionInterpreter::SetAggregateOption(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        char *a26,
        __int64 a27,
        char a28)
{
  struct _Unwind_Exception *v28; // rbx
  google::protobuf::internal::LogMessage_0 *v29; // r14

  if ( a26 != &a28 )
    operator delete(a26);
  google::protobuf::internal::LogMessage::~LogMessage(v29);
  _Unwind_Resume(v28);
};

// Line 222: range 000000000C5F4862-000000000C5F4891
void __fastcall __noreturn google::protobuf::DescriptorBuilder::OptionInterpreter::SetOptionValue(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        char *a28,
        __int64 a29,
        char a30,
        __int64 a31,
        void *a32)
{
  void *v32; // rbx
  struct _Unwind_Exception *v33; // rbp

  if ( a32 != v32 )
    operator delete(a32);
  if ( a28 != &a30 )
    operator delete(a28);
  _Unwind_Resume(v33);
};

// Line 222: range 000000000C5F3AF8-000000000C5F3B42
void __fastcall __noreturn google::protobuf::DescriptorBuilder::ValidateEnumOptions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        std::_Rb_tree<int,std::pair<int const,std::string >,std::_Select1st<std::pair<int const,std::string > >,std::less<int>,std::allocator<std::pair<int const,std::string > > > *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char *a16,
        __int64 a17,
        char a18,
        __int64 a19,
        void *a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        std::_Rb_tree<int,std::pair<int const,std::string >,std::_Select1st<std::pair<int const,std::string > >,std::less<int>,std::allocator<std::pair<int const,std::string > > >::_Link_type __x,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        void *a30)
{
  struct _Unwind_Exception *v30; // rbp
  void *v31; // r14
  void *v32; // r15

  if ( a30 != v32 )
    operator delete(a30);
  if ( a20 != v31 )
    operator delete(a20);
  if ( a16 != &a18 )
    operator delete(a16);
  std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_erase(
    a7,
    __x);
  _Unwind_Resume(v30);
};

// Line 222: range 000000000C5F3B66-000000000C5F3B7C
void __fastcall __noreturn google::protobuf::DescriptorBuilder::ValidateMessageOptions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F2C80-000000000C5F2CC3
void __fastcall __noreturn google::protobuf::DescriptorBuilder::ValidateProto3Field(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void *a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        void *a18)
{
  struct _Unwind_Exception *v18; // rbp
  void *v19; // r13
  void *v20; // r14
  void *v21; // r15
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a18 != v21 )
    operator delete(a18);
  if ( a14 != v20 )
    operator delete(a14);
  if ( a10 != v19 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v18);
};

// Line 222: range 000000000C5F3A6E-000000000C5F3AF3
void __fastcall __noreturn google::protobuf::DescriptorBuilder::ValidateProto3Message(
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
        std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::FieldDescriptor*>,std::_Select1st<std::pair<const std::string,const google::protobuf::FieldDescriptor*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::FieldDescriptor*> > > *a11,
        char *a12,
        __int64 a13,
        char a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        char a18,
        __int64 a19,
        void *a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        void *a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        void *a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        void *a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::FieldDescriptor*>,std::_Select1st<std::pair<const std::string,const google::protobuf::FieldDescriptor*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::FieldDescriptor*> > >::_Link_type __x)
{
  void *v38; // rbx
  void *v39; // rbp
  void *v40; // r12
  void *v41; // r13
  struct _Unwind_Exception *v42; // r14

  if ( a32 != v41 )
    operator delete(a32);
  if ( a28 != v40 )
    operator delete(a28);
  if ( a24 != v39 )
    operator delete(a24);
  if ( a20 != v38 )
    operator delete(a20);
  if ( a16 != &a18 )
    operator delete(a16);
  if ( a12 != &a14 )
    operator delete(a12);
  std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::FieldDescriptor const*>,std::_Select1st<std::pair<std::string const,google::protobuf::FieldDescriptor const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptor const*>>>::_M_erase(
    a11,
    __x);
  _Unwind_Resume(v42);
};

// Line 222: range 000000000C5F2B42-000000000C5F2B67
void __fastcall __noreturn google::protobuf::DescriptorBuilder::ValidateSymbolName(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *v11; // r15
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != v11 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F51DE-000000000C5F51EF
void __fastcall __noreturn google::protobuf::DescriptorPool::CrossLinkOnDemandHelper()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F38B6-000000000C5F38C7
void __fastcall __noreturn google::protobuf::DescriptorPool::IsSubSymbolOfBuiltType()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F37A6-000000000C5F37B8
void __fastcall __noreturn google::protobuf::DescriptorPool::NewPlaceholderWithMutexHeld(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *v11; // r15

  if ( a10 != v11 )
    operator delete(a10);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F43E2-000000000C5F43F3
void __fastcall __noreturn google::protobuf::EnumDescriptor::DebugStringWithOptions[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F3738-000000000C5F377E
void __fastcall __noreturn google::protobuf::EnumDescriptor::FindValueByNumberCreatingIfUnknown(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        void *a14,
        __int64 a15,
        char a16)
{
  struct _Unwind_Exception *v16; // rbx
  google::protobuf::internal::Mutex *v17; // r14
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a14 != &a16 )
    operator delete(a14);
  if ( a10 != &a12 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  google::protobuf::internal::Mutex::Unlock(v17);
  _Unwind_Resume(v16);
};

// Line 222: range 000000000C5F4268-000000000C5F42FD
void __fastcall __noreturn google::protobuf::EnumValueDescriptor::DebugString()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(void **)(v1 - 752);
  if ( v2 != (void *)(v1 - 736) )
    operator delete(v2);
  v3 = *(void **)(v1 - 784);
  if ( v3 != (void *)(v1 - 768) )
    operator delete(v3);
  google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter::~SourceLocationCommentPrinter((google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter *const)(v1 - 208));
  v4 = *(void **)(v1 - 816);
  if ( v4 != (void *)(v1 - 800) )
    operator delete(v4);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F5A42-000000000C5F5A53
void __fastcall __noreturn google::protobuf::EnumValueDescriptor::DebugStringWithOptions[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F3FA2-000000000C5F3FBE
void __fastcall __noreturn google::protobuf::ExistingFileMatchesProto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        google::protobuf::FileDescriptorProto a14)
{
  struct _Unwind_Exception *v14; // rbp
  void *v15; // r14

  if ( a10 != v15 )
    operator delete(a10);
  google::protobuf::FileDescriptorProto::~FileDescriptorProto(&a14);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C5F44D0-000000000C5F457F
void __fastcall __noreturn google::protobuf::FieldDescriptor::DebugString()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = *(void **)(v1 - 752);
  if ( v2 != (void *)(v1 - 736) )
    operator delete(v2);
  v3 = *(void **)(v1 - 784);
  if ( v3 != (void *)(v1 - 768) )
    operator delete(v3);
  google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter::~SourceLocationCommentPrinter((google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter *const)(v1 - 208));
  v4 = *(void **)(v1 - 816);
  if ( v4 != *(void **)(v1 - 928) )
    operator delete(v4);
  v5 = *(void **)(v1 - 848);
  if ( v5 != (void *)(v1 - 832) )
    operator delete(v5);
  v6 = *(void **)(v1 - 880);
  if ( v6 != (void *)(v1 - 864) )
    operator delete(v6);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F46CA-000000000C5F46DB
void __fastcall __noreturn google::protobuf::FieldDescriptor::DebugStringWithOptions[abi:cxx11]()
{
  struct _Unwind_Exception *v0; // rbx
  void **v1; // r12
  void *v2; // r13

  if ( v2 != *v1 )
    operator delete(*v1);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F51F4-000000000C5F5226
void __fastcall __noreturn google::protobuf::FieldDescriptor::InternalTypeOnceInit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void *a14)
{
  struct _Unwind_Exception *v14; // rbx
  void *v15; // rbp
  void *v16; // r12
  void *v17; // r14
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a14 != v17 )
    operator delete(a14);
  if ( a10 != v16 )
    operator delete(a10);
  if ( retaddr != v15 )
    operator delete(retaddr);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C5F57B0-000000000C5F588F
void __fastcall __noreturn google::protobuf::FileDescriptor::DebugStringWithOptions[abi:cxx11]()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void **v2; // r12
  void *v3; // rdi
  void *v4; // rdi

  v3 = *(void **)(v1 - 1008);
  if ( v3 != *(void **)(v1 - 1120) )
    operator delete(v3);
  google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter::~SourceLocationCommentPrinter((google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter *const)(v1 - 208));
  v4 = *(void **)(v1 - 1072);
  if ( v4 )
    operator delete(v4);
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
    *(std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > *const *)(v1 - 1088),
    *(std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::_Link_type *)(v1 - 880));
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
    *(std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > *const *)(v1 - 1096),
    *(std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::_Link_type *)(v1 - 928));
  google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter::~SourceLocationCommentPrinter((google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter *const)(v1 - 368));
  if ( *(void **)(v1 - 1112) != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F39C0-000000000C5F39D7
void __fastcall __noreturn google::protobuf::FileDescriptorTables::BuildLocationsByPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12)
{
  struct _Unwind_Exception *v12; // rbp

  if ( a10 != &a12 )
    operator delete(a10);
  _Unwind_Resume(v12);
};

// Line 222: range 000000000C5F38CC-000000000C5F38DE
void __fastcall __noreturn google::protobuf::FileDescriptorTables::GetSourceLocation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  void *v9; // r14

  if ( a8 != v9 )
    operator delete(a8);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F7D40-000000000C5F7D61
void __fastcall __noreturn google::protobuf::Message::CheckInitialized(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        google::protobuf::internal::LogMessage_0 a12)
{
  struct _Unwind_Exception *v12; // rbp

  if ( a8 != &a10 )
    operator delete(a8);
  google::protobuf::internal::LogMessage::~LogMessage(&a12);
  _Unwind_Resume(v12);
};

// Line 222: range 000000000C5F7CE0-000000000C5F7CF1
void __fastcall __noreturn google::protobuf::Message::FindInitializationErrors()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F7CF6-000000000C5F7D3D
void __fastcall __noreturn google::protobuf::Message::InitializationErrorString[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7)
{
  struct _Unwind_Exception *v7; // rbp
  void **v8; // r12
  void *v9; // r14
  void **i; // rbx
  void **retaddr; // [rsp+0h] [rbp+0h]

  if ( v9 != *v8 )
    operator delete(*v8);
  for ( i = retaddr; a7 != i; i += 4 )
  {
    if ( *i != i + 2 )
      operator delete(*i);
  }
  if ( retaddr )
    operator delete(retaddr);
  _Unwind_Resume(v7);
};

// Line 222: range 000000000C5F0F4C-000000000C5F0F62
void __fastcall __noreturn google::protobuf::Message::PrintDebugString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F05AC-000000000C5F05BD
void __fastcall __noreturn google::protobuf::MessageLite::SerializeAsString[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F05C2-000000000C5F05D3
void __fastcall __noreturn google::protobuf::MessageLite::SerializePartialAsString[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F3090-000000000C5F30A1
void __fastcall __noreturn google::protobuf::MethodDescriptor::CopyTo()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F4060-000000000C5F40FC
void __fastcall __noreturn google::protobuf::MethodDescriptor::DebugString()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *(void **)(v1 - 752);
  if ( v2 != (void *)(v1 - 736) )
    operator delete(v2);
  v3 = *(void **)(v1 - 784);
  if ( v3 != (void *)(v1 - 768) )
    operator delete(v3);
  google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter::~SourceLocationCommentPrinter((google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter *const)(v1 - 208));
  v4 = *(void **)(v1 - 816);
  if ( v4 != (void *)(v1 - 800) )
    operator delete(v4);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F415C-000000000C5F416D
void __fastcall __noreturn google::protobuf::MethodDescriptor::DebugStringWithOptions[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F56D6-000000000C5F575A
void __fastcall __noreturn google::protobuf::OneofDescriptor::DebugString()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  google::protobuf::SourceLocation *v2; // r15
  void *v3; // rdi
  void *v4; // rdi

  v3 = *(void **)(v1 - 88);
  if ( v3 != (void *)(v1 - 72) )
    operator delete(v3);
  google::protobuf::SourceLocation::~SourceLocation(v2);
  v4 = *(void **)(v1 - 784);
  if ( v4 != (void *)(v1 - 768) )
    operator delete(v4);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F5784-000000000C5F5795
void __fastcall __noreturn google::protobuf::OneofDescriptor::DebugStringWithOptions[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F7C9C-000000000C5F7CB8
void __fastcall __noreturn google::protobuf::Reflection::MapBegin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  google::protobuf::MapKey *v9; // r12
  void *v10; // r13

  if ( a8 != v10 )
    operator delete(a8);
  google::protobuf::MapKey::~MapKey(v9 + 1);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F7C58-000000000C5F7C74
void __fastcall __noreturn google::protobuf::Reflection::MapEnd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  google::protobuf::MapKey *v9; // r12
  void *v10; // r13

  if ( a8 != v10 )
    operator delete(a8);
  google::protobuf::MapKey::~MapKey(v9 + 1);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F4172-000000000C5F4199
void __fastcall __noreturn google::protobuf::ServiceDescriptor::DebugString()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // rdi

  v2 = *(void **)(v1 - 752);
  if ( v2 != (void *)(v1 - 736) )
    operator delete(v2);
  google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter::~SourceLocationCommentPrinter((google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter *const)(v1 - 208));
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F4222-000000000C5F4233
void __fastcall __noreturn google::protobuf::ServiceDescriptor::DebugStringWithOptions[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F1DBC-000000000C5F1DCD
void __fastcall __noreturn google::protobuf::SplitStringAllowEmpty()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F1DA6-000000000C5F1DB7
void __fastcall __noreturn google::protobuf::SplitStringUsing()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F1C26-000000000C5F1C37
void __fastcall __noreturn google::protobuf::StrCat[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F1C3C-000000000C5F1C4D
void __fastcall __noreturn google::protobuf::StrCat[abi:cxx11]()
{
  struct _Unwind_Exception *v0; // rbp
  void **v1; // r12
  void *v2; // r14

  if ( v2 != *v1 )
    operator delete(*v1);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F1C52-000000000C5F1C63
void __fastcall __noreturn google::protobuf::StrCat[abi:cxx11]()
{
  struct _Unwind_Exception *v0; // rbp
  void **v1; // r12
  void *v2; // r15

  if ( v2 != *v1 )
    operator delete(*v1);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F1C68-000000000C5F1C7B
void __fastcall __noreturn google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  struct _Unwind_Exception *v7; // rbp
  void **v8; // r12

  if ( a7 != *v8 )
    operator delete(*v8);
  _Unwind_Resume(v7);
};

// Line 222: range 000000000C5F1C80-000000000C5F1C93
void __fastcall __noreturn google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  struct _Unwind_Exception *v7; // rbp
  void **v8; // r12

  if ( a7 != *v8 )
    operator delete(*v8);
  _Unwind_Resume(v7);
};

// Line 222: range 000000000C5F1C98-000000000C5F1CAB
void __fastcall __noreturn google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  struct _Unwind_Exception *v7; // rbp
  void **v8; // r12

  if ( a7 != *v8 )
    operator delete(*v8);
  _Unwind_Resume(v7);
};

// Line 222: range 000000000C5F1CB0-000000000C5F1CC3
void __fastcall __noreturn google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  struct _Unwind_Exception *v7; // rbp
  void **v8; // r12

  if ( a7 != *v8 )
    operator delete(*v8);
  _Unwind_Resume(v7);
};

// Line 222: range 000000000C5F1CC8-000000000C5F1CDB
void __fastcall __noreturn google::protobuf::StrCat[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  struct _Unwind_Exception *v7; // rbp
  void **v8; // r12

  if ( a7 != *v8 )
    operator delete(*v8);
  _Unwind_Resume(v7);
};

// Line 222: range 000000000C5F1B84-000000000C5F1B95
void __fastcall __noreturn google::protobuf::StringPrintf[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F1BAA-000000000C5F1BBB
void __fastcall __noreturn google::protobuf::StringReplace()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F0A38-000000000C5F0A4E
void __fastcall __noreturn google::protobuf::TextFormat::FastFieldValuePrinter::PrintDouble(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0A1C-000000000C5F0A32
void __fastcall __noreturn google::protobuf::TextFormat::FastFieldValuePrinter::PrintFloat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F09C8-000000000C5F09DE
void __fastcall __noreturn google::protobuf::TextFormat::FastFieldValuePrinter::PrintInt32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F09AC-000000000C5F09C2
void __fastcall __noreturn google::protobuf::TextFormat::FastFieldValuePrinter::PrintInt64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0A54-000000000C5F0A6A
void __fastcall __noreturn google::protobuf::TextFormat::FastFieldValuePrinter::PrintString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F09E4-000000000C5F09FA
void __fastcall __noreturn google::protobuf::TextFormat::FastFieldValuePrinter::PrintUInt32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0A00-000000000C5F0A16
void __fastcall __noreturn google::protobuf::TextFormat::FastFieldValuePrinter::PrintUInt64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0BAA-000000000C5F0BC4
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintBool[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0C6A-000000000C5F0C84
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintDouble[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0CAA-000000000C5F0CC4
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintEnum(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0CCA-000000000C5F0CE4
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintFieldName[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0C4A-000000000C5F0C64
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintFloat[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0BCA-000000000C5F0BE4
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintInt32[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0C0A-000000000C5F0C24
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintInt64[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0D0A-000000000C5F0D24
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintMessageEnd[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0CEA-000000000C5F0D04
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintMessageStart[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0C8A-000000000C5F0CA4
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0BEA-000000000C5F0C04
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintUInt32[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0C2A-000000000C5F0C44
void __fastcall __noreturn google::protobuf::TextFormat::FieldValuePrinter::PrintUInt64[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v7; // rbx
  struct _Unwind_Exception *v8; // r12
  void (__fastcall **retaddr)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp+0h]

  retaddr = off_19E72898;
  if ( a7 != v7 )
    operator delete(a7);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0D2A-000000000C5F0D9C
void __fastcall __noreturn google::protobuf::TextFormat::Parser::MergeUsingImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        void *a14)
{
  void *v14; // rbx
  struct _Unwind_Exception *v15; // rbp
  void **i; // rbx
  void **retaddr; // [rsp+0h] [rbp+0h]

  if ( a14 != v14 )
    operator delete(a14);
  if ( a10 != &a12 )
    operator delete(a10);
  for ( i = retaddr; a7 != i; i += 4 )
  {
    if ( *i != i + 2 )
      operator delete(*i);
  }
  if ( retaddr )
    operator delete(retaddr);
  _Unwind_Resume(v15);
};

// Line 222: range 000000000C5F0AAC-000000000C5F0AC3
void __fastcall __noreturn google::protobuf::TextFormat::Printer::PrintFieldName(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10)
{
  struct _Unwind_Exception *v10; // rbp

  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F0FC4-000000000C5F0FFC
void __fastcall __noreturn google::protobuf::TextFormat::Printer::PrintFieldValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16)
{
  void *v16; // rbx
  void *v17; // rbp
  struct _Unwind_Exception *v18; // r12

  if ( a16 != v17 )
    operator delete(a16);
  if ( a12 != v16 )
    operator delete(a12);
  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v18);
};

// Line 222: range 000000000C5F0AEC-000000000C5F0B17
void __fastcall __noreturn google::protobuf::TextFormat::Printer::PrintUnknownFields(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        char a18)
{
  struct _Unwind_Exception *v18; // rbp

  if ( a16 != &a18 )
    operator delete(a16);
  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v18);
};

// Line 222: range 000000000C5F04AA-000000000C5F04C9
void __fastcall __noreturn google::protobuf::`anonymous namespace'::ByteSizeConsistencyError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10)
{
  google::protobuf::internal::LogMessage_0 *v10; // rbp
  struct _Unwind_Exception *v11; // r12

  if ( a8 != &a10 )
    operator delete(a8);
  google::protobuf::internal::LogMessage::~LogMessage(v10);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C5F0A70-000000000C5F0A86
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FastFieldValuePrinterUtf8Escaping::PrintString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0990-000000000C5F09A6
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintBool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F08B0-000000000C5F08C6
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintBytes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F08E8-000000000C5F08FE
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintDouble(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0894-000000000C5F08AA
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintEnum(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0878-000000000C5F088E
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintFieldName(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0904-000000000C5F091A
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintFloat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0974-000000000C5F098A
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintInt32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F093C-000000000C5F0952
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintInt64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0840-000000000C5F0856
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintMessageEnd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F085C-000000000C5F0872
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintMessageStart(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F08CC-000000000C5F08E2
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0958-000000000C5F096E
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintUInt32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0920-000000000C5F0936
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintUInt64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F4238-000000000C5F4252
void __fastcall __noreturn google::protobuf::`anonymous namespace'::FormatBracketedOptions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *v11; // r14
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a10 != v11 )
    operator delete(a10);
  std::vector<std::string>::~vector((std::vector<std::string> *const)&retaddr);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F2ACD-000000000C5F2B00
void __fastcall __noreturn google::protobuf::`anonymous namespace'::InitAllowedProto3Extendee(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16)
{
  void *v16; // rbx
  void *v17; // rbp
  struct _Unwind_Exception *v18; // r12
  void *v19; // r15

  if ( a16 != v16 )
    operator delete(a16);
  if ( a12 != v17 )
    operator delete(a12);
  if ( a8 != v19 )
    operator delete(a8);
  _Unwind_Resume(v18);
};

// Line 222: range 000000000C5F05D8-000000000C5F05FC
void __fastcall __noreturn google::protobuf::`anonymous namespace'::InitializationErrorMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  void *v8; // rbx
  struct _Unwind_Exception *v9; // rbp
  void **v10; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  if ( v8 != *v10 )
    operator delete(*v10);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5F3661-000000000C5F36C8
void __fastcall __noreturn google::protobuf::`anonymous namespace'::RetrieveOptionsAssumingRightPool(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        char *a20,
        __int64 a21,
        char a22,
        __int64 a23,
        void *a24,
        __int64 a25,
        char a26,
        __int64 a27,
        void *a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        void *a32)
{
  struct _Unwind_Exception *v32; // rbx
  void *v33; // rbp
  void *v34; // r13

  if ( a32 != v33 )
    operator delete(a32);
  if ( a28 != v34 )
    operator delete(a28);
  if ( a24 != &a26 )
    operator delete(a24);
  if ( a20 != &a22 )
    operator delete(a20);
  if ( a16 )
    operator delete(a16);
  _Unwind_Resume(v32);
};

// Line 222: range 000000000C5F37E4-000000000C5F37FC
void __fastcall __noreturn google::protobuf::`anonymous namespace'::SourceLocationCommentPrinter::AddPreComment()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // rdi

  v2 = *(void **)(v1 - 592);
  if ( v2 != *(void **)(v1 - 728) )
    operator delete(v2);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F24F8-000000000C5F250A
void __fastcall __noreturn google::protobuf::`anonymous namespace'::ToCamelCase()
{
  struct _Unwind_Exception *v0; // rbp
  void **v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != *v1 )
    operator delete(*v1);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F228C-000000000C5F22AC
void __fastcall __noreturn google::protobuf::internal::AnyMetadata::InternalIs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  void *v10; // rbp
  struct _Unwind_Exception *v11; // r12
  void *v12; // r13
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != v12 )
    operator delete(a10);
  if ( retaddr != v10 )
    operator delete(retaddr);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C5F232C-000000000C5F233D
void __fastcall __noreturn google::protobuf::internal::AnyMetadata::PackFrom()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F22C8-000000000C5F22DA
void __fastcall __noreturn google::protobuf::internal::AnyMetadata::PackFrom(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  void *v9; // r13

  if ( a8 != v9 )
    operator delete(a8);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FAB32-000000000C5FAB57
void __fastcall __noreturn google::protobuf::internal::FormatTime[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12)
{
  void *v12; // rbx
  struct _Unwind_Exception *v13; // rbp
  void **v14; // r12

  if ( v12 != *v14 )
    operator delete(*v14);
  if ( a10 != &a12 )
    operator delete(a10);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C5F7260-000000000C5F7271
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::InsertOrLookupMapValue()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r15
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F72D0-000000000C5F72EC
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::MapBegin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  void *v8; // rbx
  struct _Unwind_Exception *v9; // rbp
  google::protobuf::MapKey *v10; // r12

  if ( a8 != v8 )
    operator delete(a8);
  google::protobuf::MapKey::~MapKey(v10 + 1);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5F7312-000000000C5F732E
void __fastcall __noreturn google::protobuf::internal::GeneratedMessageReflection::MapEnd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  void *v8; // rbx
  struct _Unwind_Exception *v9; // rbp
  google::protobuf::MapKey *v10; // r12

  if ( a8 != v8 )
    operator delete(a8);
  google::protobuf::MapKey::~MapKey(v10 + 1);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5F0230-000000000C5F0241
void __fastcall __noreturn google::protobuf::internal::LogMessage::operator<<()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F0160-000000000C5F017B
void __fastcall __noreturn google::protobuf::internal::LogMessage::operator<<(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  struct _Unwind_Exception *v10; // rbx
  void *v11; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v11 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(&a10);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F0000-000000000C5F0016
void __fastcall __noreturn google::protobuf::internal::LogMessage::operator<<(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0148-000000000C5F015A
void __fastcall __noreturn google::protobuf::internal::Mutex::Lock(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void *a9)
{
  void *v9; // rbx
  struct _Unwind_Exception *v10; // rbp

  if ( a9 != v9 )
    operator delete(a9);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F005A-000000000C5F006C
void __fastcall __noreturn google::protobuf::internal::Mutex::Unlock(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void *a9)
{
  void *v9; // rbx
  struct _Unwind_Exception *v10; // rbp

  if ( a9 != v9 )
    operator delete(a9);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F80D6-000000000C5F80ED
void __fastcall __noreturn google::protobuf::internal::ReflectionOps::FindInitializationErrors(
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
        __int64 a12,
        __int64 a13,
        char *a14,
        __int64 a15,
        char a16)
{
  struct _Unwind_Exception *v16; // rbp

  if ( a14 != &a16 )
    operator delete(a14);
  _Unwind_Resume(v16);
};

// Line 222: range 000000000C5F7FC4-000000000C5F8053
void __fastcall __noreturn google::protobuf::internal::ReflectionOps::IsInitialized(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        google::protobuf::MapIterator a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        void *a29,
        __int64 a30,
        char a31)
{
  struct _Unwind_Exception *v31; // rbp

  if ( a29 != &a31 )
    operator delete(a29);
  google::protobuf::MapKey::~MapKey(&a14.key_);
  if ( a10 )
    operator delete(a10);
  _Unwind_Resume(v31);
};

// Line 222: range 000000000C5F80AD-000000000C5F80D1
void __fastcall __noreturn google::protobuf::internal::SubMessagePrefix(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  void **v9; // r12
  void *v10; // r13
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  if ( v10 != *v9 )
    operator delete(*v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F0246-000000000C5F027F
void __fastcall __noreturn google::protobuf::internal::VerifyVersion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17)
{
  void *v17; // rbx
  struct _Unwind_Exception *v18; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != &a12 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  if ( a17 != v17 )
    operator delete(a17);
  _Unwind_Resume(v18);
};

// Line 222: range 000000000C5F1256-000000000C5F1269
void __fastcall __noreturn google::protobuf::internal::WireFormat::ParseAndMergeField(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != retaddr )
    operator delete(a10);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F20FE-000000000C5F210F
void __fastcall __noreturn google::protobuf::internal::WireFormatLite::SkipField()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F2050-000000000C5F2071
void __fastcall __noreturn google::protobuf::internal::`anonymous namespace'::Register(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        google::protobuf::internal::LogMessage_0 a12)
{
  struct _Unwind_Exception *v12; // rbp

  if ( a8 != &a10 )
    operator delete(a8);
  google::protobuf::internal::LogMessage::~LogMessage(&a12);
  _Unwind_Resume(v12);
};

// Line 222: range 000000000C5F149C-000000000C5F14AE
void __fastcall __noreturn google::protobuf::io::Tokenizer::ConsumeBlockComment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  void *v9; // r14

  if ( a8 != v9 )
    operator delete(a8);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F14B4-000000000C5F14C5
void __fastcall __noreturn google::protobuf::io::Tokenizer::ConsumeNumber()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F1538-000000000C5F1549
void __fastcall __noreturn google::protobuf::io::Tokenizer::ConsumeString()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F15BC-000000000C5F15D2
void __fastcall __noreturn google::protobuf::io::Tokenizer::Next(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F15E2-000000000C5F161E
void __fastcall __noreturn google::protobuf::io::Tokenizer::NextWithComments(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        void *a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        char a19)
{
  void *v19; // rbx
  struct _Unwind_Exception *v20; // rbp
  void *v21; // r12

  if ( a8 != v21 )
    operator delete(a8);
  if ( a14 && a19 )
    std::string::swap(&a15);
  if ( a15 != v19 )
    operator delete(a15);
  _Unwind_Resume(v20);
};

// Line 222: range 000000000C5F1450-000000000C5F1471
void __fastcall __noreturn google::protobuf::io::Tokenizer::ParseFloat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        google::protobuf::internal::LogMessage_0 a14)
{
  struct _Unwind_Exception *v14; // rbp

  if ( a10 != &a12 )
    operator delete(a10);
  google::protobuf::internal::LogMessage::~LogMessage(&a14);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C5F1476-000000000C5F1497
void __fastcall __noreturn google::protobuf::io::Tokenizer::ParseStringAppend(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        google::protobuf::internal::LogMessage_0 a14)
{
  struct _Unwind_Exception *v14; // rbp

  if ( a10 != &a12 )
    operator delete(a10);
  google::protobuf::internal::LogMessage::~LogMessage(&a14);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C5F142C-000000000C5F144B
void __fastcall __noreturn google::protobuf::io::Tokenizer::Tokenizer()
{
  __int64 v0; // rbx
  void *v1; // rbp
  void *v2; // r12
  struct _Unwind_Exception *v3; // r13
  void *v4; // rdi
  void *v5; // rdi

  v4 = *(void **)(v0 + 64);
  if ( v2 != v4 )
    operator delete(v4);
  v5 = *(void **)(v0 + 8);
  if ( v1 != v5 )
    operator delete(v5);
  _Unwind_Resume(v3);
};

// Line 222: range 000000000C5F02D4-000000000C5F02F0
void __fastcall __noreturn google::protobuf::operator<<(
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
        __int64 a12,
        __int64 a13,
        void *a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        char a18)
{
  struct _Unwind_Exception *v18; // rbp
  void *v19; // r13

  if ( a14 != v19 )
    operator delete(a14);
  std::ostringstream::~ostringstream(&a18);
  _Unwind_Resume(v18);
};

// Line 222: range 000000000C5F1D4E-000000000C5F1D5F
void __fastcall __noreturn google::protobuf::safe_strto32()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F1D7A-000000000C5F1D8B
void __fastcall __noreturn google::protobuf::safe_strto64()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F1D64-000000000C5F1D75
void __fastcall __noreturn google::protobuf::safe_strtou32()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F1D90-000000000C5F1DA1
void __fastcall __noreturn google::protobuf::safe_strtou64()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F814F-000000000C5F817D
void __fastcall __noreturn google::protobuf::strings::SubstituteAndAppend(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        char *a14,
        __int64 a15,
        char a16)
{
  void *v16; // rbx
  struct _Unwind_Exception *v17; // rbp
  google::protobuf::internal::LogMessage_0 *v18; // r12

  if ( a14 != &a16 )
    operator delete(a14);
  if ( a10 != v16 )
    operator delete(a10);
  google::protobuf::internal::LogMessage::~LogMessage(v18);
  _Unwind_Resume(v17);
};

// Line 222: range 000000000C5F81B5-000000000C5F81C6
void __fastcall __noreturn google::protobuf::strings::Substitute[abi:cxx11]()
{
  void *v0; // rbx
  void **v1; // r12
  struct _Unwind_Exception *v2; // r14

  if ( v0 != *v1 )
    operator delete(*v1);
  _Unwind_Resume(v2);
};

// Line 222: range 000000000C5F1907-000000000C5F1940
void __fastcall __noreturn google::protobuf::util::BinaryToJsonStream(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        google::protobuf::io::CodedInputStream a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        google::protobuf::Type a31,
        __int64 a32,
        void *a33,
        __int64 a34,
        char a35)
{
  struct _Unwind_Exception *v35; // rbx

  if ( a33 != &a35 )
    operator delete(a33);
  google::protobuf::Type::~Type(&a31);
  google::protobuf::io::CodedInputStream::~CodedInputStream(&a18);
  _Unwind_Resume(v35);
};

// Line 222: range 000000000C5F188C-000000000C5F18C5
void __fastcall __noreturn google::protobuf::util::JsonStringToMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        char *a13,
        __int64 a14,
        char a15)
{
  void *v15; // rbx
  struct _Unwind_Exception *v16; // rbp
  __int64 v17; // r12
  void *v18; // rdi

  if ( a13 != &a15 )
    operator delete(a13);
  v18 = *(void **)(v17 + 8);
  if ( v18 != (void *)(v17 + 24) )
    operator delete(v18);
  if ( a8 != v15 )
    operator delete(a8);
  _Unwind_Resume(v16);
};

// Line 222: range 000000000C5F17DC-000000000C5F1806
void __fastcall __noreturn google::protobuf::util::JsonToBinaryStream(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        google::protobuf::Type a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        __int64 a48,
        __int64 a49,
        __int64 a50,
        __int64 a51,
        __int64 a52,
        __int64 a53,
        __int64 a54,
        __int64 a55,
        void *a56)
{
  struct _Unwind_Exception *v56; // rbp

  if ( a56 != &STACK[0x208] )
    operator delete(a56);
  google::protobuf::Type::~Type(&a24);
  _Unwind_Resume(v56);
};

// Line 222: range 000000000C5F0376-000000000C5F0387
void __fastcall __noreturn google::protobuf::util::Status::Status()
{
  __int64 v0; // rbx
  void *v1; // rbp
  struct _Unwind_Exception *v2; // r12
  void *v3; // rdi

  v3 = *(void **)(v0 + 8);
  if ( v1 != v3 )
    operator delete(v3);
  _Unwind_Resume(v2);
};

// Line 222: range 000000000C5F038C-000000000C5F03B4
void __fastcall __noreturn google::protobuf::util::Status::ToString[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbx
  void *v11; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != v11 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5FAF38-000000000C5FAF8C
void __fastcall __noreturn google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<int,double>(
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
        void *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // r12
  void *v21; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a17 != &a19 )
    operator delete(a17);
  v21 = *(void **)(v20 + 8);
  if ( v21 != (void *)(v20 + 24) )
    operator delete(v21);
  if ( a11 != &a13 )
    operator delete(a11);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5FAFAC-000000000C5FB000
void __fastcall __noreturn google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<int,float>(
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
        void *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // r12
  void *v21; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a17 != &a19 )
    operator delete(a17);
  v21 = *(void **)(v20 + 8);
  if ( v21 != (void *)(v20 + 24) )
    operator delete(v21);
  if ( a11 != &a13 )
    operator delete(a11);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5FAE50-000000000C5FAEA4
void __fastcall __noreturn google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<long,double>(
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
        void *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // r12
  void *v21; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a17 != &a19 )
    operator delete(a17);
  v21 = *(void **)(v20 + 8);
  if ( v21 != (void *)(v20 + 24) )
    operator delete(v21);
  if ( a11 != &a13 )
    operator delete(a11);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5FAEC4-000000000C5FAF18
void __fastcall __noreturn google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<long,float>(
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
        void *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // r12
  void *v21; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a17 != &a19 )
    operator delete(a17);
  v21 = *(void **)(v20 + 8);
  if ( v21 != (void *)(v20 + 24) )
    operator delete(v21);
  if ( a11 != &a13 )
    operator delete(a11);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5FACF4-000000000C5FAD48
void __fastcall __noreturn google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned int,double>(
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
        void *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // r12
  void *v21; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a17 != &a19 )
    operator delete(a17);
  v21 = *(void **)(v20 + 8);
  if ( v21 != (void *)(v20 + 24) )
    operator delete(v21);
  if ( a11 != &a13 )
    operator delete(a11);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5FAC80-000000000C5FACD4
void __fastcall __noreturn google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned int,float>(
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
        void *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // r12
  void *v21; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a17 != &a19 )
    operator delete(a17);
  v21 = *(void **)(v20 + 8);
  if ( v21 != (void *)(v20 + 24) )
    operator delete(v21);
  if ( a11 != &a13 )
    operator delete(a11);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5FADDC-000000000C5FAE30
void __fastcall __noreturn google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned long,double>(
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
        void *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // r12
  void *v21; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a17 != &a19 )
    operator delete(a17);
  v21 = *(void **)(v20 + 8);
  if ( v21 != (void *)(v20 + 24) )
    operator delete(v21);
  if ( a11 != &a13 )
    operator delete(a11);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5FAD68-000000000C5FADBC
void __fastcall __noreturn google::protobuf::util::converter::`anonymous namespace'::ValidateNumberConversion<unsigned long,float>(
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
        void *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // r12
  void *v21; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a17 != &a19 )
    operator delete(a17);
  v21 = *(void **)(v20 + 8);
  if ( v21 != (void *)(v20 + 24) )
    operator delete(v21);
  if ( a11 != &a13 )
    operator delete(a11);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5F1AA4-000000000C5F1AE1
void __fastcall __noreturn google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver::ResolveMessageType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        void *a19,
        __int64 a20,
        char a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        void *a42)
{
  struct _Unwind_Exception *v42; // rbx
  void *v43; // r15

  if ( a42 != v43 )
    operator delete(a42);
  if ( a19 != &a21 )
    operator delete(a19);
  if ( a10 != &a12 )
    operator delete(a10);
  _Unwind_Resume(v42);
};

// Line 222: range 000000000C5F17B7-000000000C5F17D7
void __fastcall __noreturn google::protobuf::util::`anonymous namespace'::GetTypeUrl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  void *v10; // rbx
  void *v11; // rbp
  struct _Unwind_Exception *v12; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != v11 )
    operator delete(a10);
  if ( retaddr != v10 )
    operator delete(retaddr);
  _Unwind_Resume(v12);
};

// Line 222: range 000000000C5F17A1-000000000C5F17B2
void __fastcall __noreturn google::protobuf::util::`anonymous namespace'::InitGeneratedTypeResolver()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F173A-000000000C5F179F
void __fastcall __noreturn google::protobuf::util::`anonymous namespace'::StatusErrorListener::InvalidName(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void *a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        void *a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        void *a23,
        __int64 a24,
        char a25)
{
  struct _Unwind_Exception *v25; // rbx
  void *v26; // rbp
  void *v27; // r12
  void *v28; // r13
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a23 != &a25 )
    operator delete(a23);
  if ( a18 != v28 )
    operator delete(a18);
  if ( a10 != v26 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  if ( a14 != v27 )
    operator delete(a14);
  _Unwind_Resume(v25);
};

// Line 222: range 000000000C5F1624-000000000C5F1689
void __fastcall __noreturn google::protobuf::util::`anonymous namespace'::StatusErrorListener::MissingField(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void *a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        void *a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        void *a23,
        __int64 a24,
        char a25)
{
  struct _Unwind_Exception *v25; // rbx
  void *v26; // rbp
  void *v27; // r12
  void *v28; // r13
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a23 != &a25 )
    operator delete(a23);
  if ( a18 != v28 )
    operator delete(a18);
  if ( a10 != v26 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  if ( a14 != v27 )
    operator delete(a14);
  _Unwind_Resume(v25);
};

// Line 222: range 000000000C5FB5DE-000000000C5FB603
void __fastcall __noreturn google::protobuf::util::converter::ConvertFieldMaskPath(
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
        char *a12,
        __int64 a13,
        char a14)
{
  struct _Unwind_Exception *v14; // rbp
  void **v15; // r12
  void *v16; // r13

  if ( a12 != &a14 )
    operator delete(a12);
  if ( v16 != *v15 )
    operator delete(*v15);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C5FB020-000000000C5FB032
void __fastcall __noreturn google::protobuf::util::converter::DataPiece::DecodeBase64(
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
        void *a12)
{
  void *v12; // rbp
  struct _Unwind_Exception *v13; // r12

  if ( a12 != v12 )
    operator delete(a12);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C5FB256-000000000C5FB2A7
void __fastcall __noreturn google::protobuf::util::converter::DataPiece::ToBool(
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
        void *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbp
  __int64 v20; // r12
  void *v21; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a17 != &a19 )
    operator delete(a17);
  v21 = *(void **)(v20 + 8);
  if ( v21 != (void *)(v20 + 24) )
    operator delete(v21);
  if ( a11 != &a13 )
    operator delete(a11);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5FB3A0-000000000C5FB412
void __fastcall __noreturn google::protobuf::util::converter::DataPiece::ToBytes[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14,
        void *a15,
        __int64 a16,
        char a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        void *a21,
        __int64 a22,
        char a23)
{
  void *v23; // rbx
  struct _Unwind_Exception *v24; // rbp
  _QWORD *v25; // r12
  void *v26; // r14
  void *v27; // rdi
  _QWORD *v28; // rdi
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a21 != &a23 )
    operator delete(a21);
  v27 = (void *)v25[5];
  if ( v26 != v27 )
    operator delete(v27);
  v28 = (_QWORD *)v25[1];
  if ( v28 != v25 + 3 )
    operator delete(v28);
  if ( a15 != &a17 )
    operator delete(a15);
  if ( a10 != &a12 )
    operator delete(a10);
  if ( retaddr != v23 )
    operator delete(retaddr);
  _Unwind_Resume(v24);
};

// Line 222: range 000000000C5FB07A-000000000C5FB0E9
void __fastcall __noreturn google::protobuf::util::converter::DataPiece::ToDouble(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        __int64 a14,
        char a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        void *a19,
        __int64 a20,
        char a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        void *a25,
        __int64 a26,
        char a27)
{
  struct _Unwind_Exception *v27; // rbx
  __int64 v28; // r12
  void *v29; // rdi

  if ( a19 != &a21 )
    operator delete(a19);
  v29 = *(void **)(v28 + 8);
  if ( v29 != (void *)(v28 + 24) )
    operator delete(v29);
  if ( a13 != &a15 )
    operator delete(a13);
  if ( a8 != &a10 )
    operator delete(a8);
  if ( a25 != &a27 )
    operator delete(a25);
  _Unwind_Resume(v27);
};

// Line 222: range 000000000C5FB4E0-000000000C5FB519
void __fastcall __noreturn google::protobuf::util::converter::DataPiece::ToEnum(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        char *a17,
        __int64 a18,
        char a19)
{
  struct _Unwind_Exception *v19; // rbx
  __int64 v20; // r12
  void *v21; // r14
  void *v22; // rdi

  v22 = *(void **)(v20 + 8);
  if ( v22 != (void *)(v20 + 24) )
    operator delete(v22);
  if ( a17 != &a19 )
    operator delete(a17);
  if ( a10 != v21 )
    operator delete(a10);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5FB15A-000000000C5FB1AF
void __fastcall __noreturn google::protobuf::util::converter::DataPiece::ToFloat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        __int64 a14,
        char a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        void *a19,
        __int64 a20,
        char a21)
{
  struct _Unwind_Exception *v21; // rbx
  __int64 v22; // r12
  void *v23; // rdi

  if ( a19 != &a21 )
    operator delete(a19);
  v23 = *(void **)(v22 + 8);
  if ( v23 != (void *)(v22 + 24) )
    operator delete(v23);
  if ( a13 != &a15 )
    operator delete(a13);
  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v21);
};

// Line 222: range 000000000C5FB2C8-000000000C5FB328
void __fastcall __noreturn google::protobuf::util::converter::DataPiece::ToString[abi:cxx11](
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
        void *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        void *a17,
        __int64 a18,
        char a19)
{
  void *v19; // rbx
  struct _Unwind_Exception *v20; // rbp
  _QWORD *v21; // r12
  void *v22; // rdi
  _QWORD *v23; // rdi
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a17 != &a19 )
    operator delete(a17);
  v22 = (void *)v21[5];
  if ( v19 != v22 )
    operator delete(v22);
  v23 = (_QWORD *)v21[1];
  if ( v23 != v21 + 3 )
    operator delete(v23);
  if ( a11 != &a13 )
    operator delete(a11);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v20);
};

// Line 222: range 000000000C5FB04E-000000000C5FB05F
void __fastcall __noreturn google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FB608-000000000C5FB636
void __fastcall __noreturn google::protobuf::util::converter::DecodeCompactFieldMaskPaths(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        std::deque<std::string>_0 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        char *a18,
        __int64 a19,
        char a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        std::deque<std::string>_0 a40)
{
  struct _Unwind_Exception *v40; // rbp

  if ( a18 != &a20 )
    operator delete(a18);
  std::deque<std::string>::~deque(&a40);
  _Unwind_Resume(v40);
};

// Line 222: range 000000000C5F8E7E-000000000C5F8E9A
void __fastcall __noreturn google::protobuf::util::converter::DefaultValueObjectWriter::StartList()
{
  void *v0; // rbx
  __int64 v1; // rbp
  std::vector<std::string> *v2; // r14
  struct _Unwind_Exception *v3; // r15
  void *v4; // rdi

  v4 = *(void **)(v1 - 128);
  if ( v4 != v0 )
    operator delete(v4);
  std::vector<std::string>::~vector(v2);
  _Unwind_Resume(v3);
};

// Line 222: range 000000000C5F8E46-000000000C5F8E62
void __fastcall __noreturn google::protobuf::util::converter::DefaultValueObjectWriter::StartObject()
{
  void *v0; // rbx
  __int64 v1; // rbp
  std::vector<std::string> *v2; // r13
  struct _Unwind_Exception *v3; // r14
  void *v4; // rdi

  v4 = *(void **)(v1 - 128);
  if ( v4 != v0 )
    operator delete(v4);
  std::vector<std::string>::~vector(v2);
  _Unwind_Resume(v3);
};

// Line 222: range 000000000C5FAA2E-000000000C5FAA40
void __fastcall __noreturn google::protobuf::util::converter::FindEnumValueByNameWithoutUnderscoreOrNull(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  void *v9; // r12

  if ( a8 != v9 )
    operator delete(a8);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FAA12-000000000C5FAA29
void __fastcall __noreturn google::protobuf::util::converter::InitWellKnownTypes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12)
{
  struct _Unwind_Exception *v12; // rbp

  if ( a10 != &a12 )
    operator delete(a10);
  _Unwind_Resume(v12);
};

// Line 222: range 000000000C5FAA55-000000000C5FAA89
void __fastcall __noreturn google::protobuf::util::converter::IsMap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        void *a14)
{
  struct _Unwind_Exception *v14; // rbp
  void *v15; // r13
  void *v16; // r14
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a14 != v16 )
    operator delete(a14);
  if ( a10 != &a12 )
    operator delete(a10);
  if ( retaddr != v15 )
    operator delete(retaddr);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C5FAA8E-000000000C5FAAC2
void __fastcall __noreturn google::protobuf::util::converter::IsMessageSetWireFormat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        void *a14)
{
  void *v14; // rbx
  struct _Unwind_Exception *v15; // rbp
  void *v16; // r14
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a14 != v16 )
    operator delete(a14);
  if ( a10 != &a12 )
    operator delete(a10);
  if ( retaddr != v14 )
    operator delete(retaddr);
  _Unwind_Resume(v15);
};

// Line 222: range 000000000C5F9168-000000000C5F9179
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::RenderBool()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F9116-000000000C5F9137
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::RenderBytes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        void *a12)
{
  void *v12; // rbx
  struct _Unwind_Exception *v13; // rbp
  void *v14; // r14

  if ( a12 != v14 )
    operator delete(a12);
  if ( a8 != v12 )
    operator delete(a8);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C5F906E-000000000C5F9085
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::RenderDouble(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10)
{
  struct _Unwind_Exception *v10; // rbp

  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F90A6-000000000C5F90BD
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::RenderFloat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10)
{
  struct _Unwind_Exception *v10; // rbp

  if ( a8 != &a10 )
    operator delete(a8);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5F9036-000000000C5F904C
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::RenderInt32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F90DE-000000000C5F90F4
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::RenderInt64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F913C-000000000C5F914D
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::RenderNull()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F9152-000000000C5F9163
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::RenderNullAsEmpty()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F9052-000000000C5F9068
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::RenderUint32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F90FA-000000000C5F9110
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::RenderUint64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F9020-000000000C5F9031
void __fastcall __noreturn google::protobuf::util::converter::JsonObjectWriter::WritePrefix()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F943A-000000000C5F9472
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::FinishParse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        __int64 a14,
        char a15)
{
  struct _Unwind_Exception *v15; // rbp
  void *v16; // r12

  if ( a13 != &a15 )
    operator delete(a13);
  if ( a7 != &a9 )
    operator delete(a7);
  if ( v16 )
    operator delete[](v16);
  _Unwind_Resume(v15);
};

// Line 222: range 000000000C5F9494-000000000C5F94AB
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::Parse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        __int64 a10,
        char a11)
{
  struct _Unwind_Exception *v11; // rbp

  if ( a9 != &a11 )
    operator delete(a9);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C5F92D6-000000000C5F9301
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::ParseArrayValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        __int64 a10,
        char a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        void *a15,
        __int64 a16,
        char a17)
{
  struct _Unwind_Exception *v17; // rbp

  if ( a15 != &a17 )
    operator delete(a15);
  if ( a9 != &a11 )
    operator delete(a9);
  _Unwind_Resume(v17);
};

// Line 222: range 000000000C5F9478-000000000C5F948F
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::ParseChunk(
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
        char *a11,
        __int64 a12,
        char a13)
{
  struct _Unwind_Exception *v13; // rbp

  if ( a11 != &a13 )
    operator delete(a11);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C5F927A-000000000C5F92A5
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::ParseEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        __int64 a14,
        char a15)
{
  struct _Unwind_Exception *v15; // rbp

  if ( a13 != &a15 )
    operator delete(a13);
  if ( a7 != &a9 )
    operator delete(a7);
  _Unwind_Resume(v15);
};

// Line 222: range 000000000C5F9216-000000000C5F922D
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::ParseNumber(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        __int64 a10,
        char a11)
{
  struct _Unwind_Exception *v11; // rbp

  if ( a9 != &a11 )
    operator delete(a9);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C5F91FE-000000000C5F9210
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::ParseNumberHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  void *v9; // r15

  if ( a8 != v9 )
    operator delete(a8);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F91E2-000000000C5F91F8
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::ParseString()
{
  struct _Unwind_Exception *v0; // rbp
  __int64 v1; // r12
  void *v2; // rdi

  v2 = *(void **)(v1 + 8);
  if ( v2 != (void *)(v1 + 24) )
    operator delete(v2);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F91C6-000000000C5F91DD
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::ParseStringHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8,
        char a9)
{
  struct _Unwind_Exception *v9; // rbp

  if ( a7 != &a9 )
    operator delete(a7);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5F917E-000000000C5F91A4
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::ReportFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char *a12,
        __int64 a13,
        char a14)
{
  struct _Unwind_Exception *v14; // rbp
  void *v15; // r13

  if ( a12 != &a14 )
    operator delete(a12);
  if ( a8 != v15 )
    operator delete(a8);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C5F91AA-000000000C5F91C0
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::ReportUnknown(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F9306-000000000C5F9346
void __fastcall __noreturn google::protobuf::util::converter::JsonStreamParser::RunParser(
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
        __int64 a12,
        void *a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        void *a31)
{
  struct _Unwind_Exception *v31; // rbp
  void *v32; // r13
  void *v33; // r15

  if ( a31 != v33 )
    operator delete(a31);
  if ( a13 != v32 )
    operator delete(a13);
  _Unwind_Resume(v31);
};

// Line 222: range 000000000C5F94B0-000000000C5F94C7
void __fastcall __noreturn google::protobuf::util::converter::ObjectWriter::RenderDataPieceTo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8,
        char a9)
{
  struct _Unwind_Exception *v9; // rbp

  if ( a7 != &a9 )
    operator delete(a7);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5F96F0-000000000C5F9706
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::IncrementRecursionDepth(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F9CC6-000000000C5F9CD7
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::InitRendererMap()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5F9688-000000000C5F9699
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::ReadFieldValueAsString[abi:cxx11]()
{
  struct _Unwind_Exception *v0; // rbp
  void **v1; // r12
  void *v2; // r13

  if ( v2 != *v1 )
    operator delete(*v1);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F9C3C-000000000C5F9CC1
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderAny()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // r15
  void *v3; // rdi
  bool v4; // zf
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi

  v3 = *(void **)(v1 - 280);
  if ( v3 != (void *)(v1 - 264) )
    operator delete(v3);
  v4 = *(_BYTE *)(v1 - 168) == 0;
  *(_QWORD *)(v1 - 192) = off_19E87C68;
  if ( !v4 )
    google::protobuf::util::converter::ProtoStreamObjectSource::~ProtoStreamObjectSource((google::protobuf::util::converter::ProtoStreamObjectSource *const)(v1 - 192));
  google::protobuf::io::CodedInputStream::~CodedInputStream((google::protobuf::io::CodedInputStream *const)(v1 - 128));
  v5 = *(void **)(v1 - 232);
  if ( v5 != (void *)(v1 - 216) )
    operator delete(v5);
  v6 = *(void **)(v1 - 352);
  if ( v6 != v2 )
    operator delete(v6);
  v7 = *(void **)(v1 - 384);
  if ( v7 != (void *)(v1 - 368) )
    operator delete(v7);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F9594-000000000C5F95A5
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderBytes()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F970C-000000000C5F9732
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderDuration(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        void *a18)
{
  void *v18; // rbx
  struct _Unwind_Exception *v19; // rbp

  if ( a18 != v18 )
    operator delete(a18);
  if ( a10 != &a12 )
    operator delete(a10);
  _Unwind_Resume(v19);
};

// Line 222: range 000000000C5F97D8-000000000C5F97EF
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderField(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        char *a19,
        __int64 a20,
        char a21)
{
  struct _Unwind_Exception *v21; // rbp

  if ( a19 != &a21 )
    operator delete(a19);
  _Unwind_Resume(v21);
};

// Line 222: range 000000000C5F961C-000000000C5F9656
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderFieldMask(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        void *a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        void *a18,
        __int64 a19,
        char a20)
{
  void *v20; // rbx
  struct _Unwind_Exception *v21; // rbp

  if ( a18 != &a20 )
    operator delete(a18);
  if ( a14 != v20 )
    operator delete(a14);
  if ( a10 != &a12 )
    operator delete(a10);
  _Unwind_Resume(v21);
};

// Line 222: range 000000000C5F9B18-000000000C5F9B5A
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        __int64 a10,
        char a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        void *a15,
        __int64 a16,
        char a17)
{
  struct _Unwind_Exception *v17; // rbp
  void *v18; // rdi

  if ( a15 != &a17 )
    operator delete(a15);
  v18 = *(void **)(a7 + 8);
  if ( v18 != (void *)(a7 + 24) )
    operator delete(v18);
  if ( a9 != &a11 )
    operator delete(a9);
  _Unwind_Resume(v17);
};

// Line 222: range 000000000C5F9844-000000000C5F985E
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderMap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct _Unwind_Exception *v8; // rbp
  void *v9; // rdi

  v9 = *(void **)(a8 + 8);
  if ( v9 != (void *)(a8 + 24) )
    operator delete(v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F965C-000000000C5F9682
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderNonMessageField(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        char *a14,
        __int64 a15,
        char a16)
{
  struct _Unwind_Exception *v16; // rbp
  void *v17; // r15

  if ( a14 != &a16 )
    operator delete(a14);
  if ( a10 != v17 )
    operator delete(a10);
  _Unwind_Resume(v16);
};

// Line 222: range 000000000C5F9AFC-000000000C5F9B13
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderPacked(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8,
        char a9)
{
  struct _Unwind_Exception *v9; // rbp

  if ( a7 != &a9 )
    operator delete(a7);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5F95AA-000000000C5F95BB
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderString()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5F9AC4-000000000C5F9ADB
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderStruct(
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
        char *a11,
        __int64 a12,
        char a13)
{
  struct _Unwind_Exception *v13; // rbp

  if ( a11 != &a13 )
    operator delete(a11);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C5F95E4-000000000C5F95FB
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderStructListValue(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char *a15,
        __int64 a16,
        char a17)
{
  struct _Unwind_Exception *v17; // rbp

  if ( a15 != &a17 )
    operator delete(a15);
  _Unwind_Resume(v17);
};

// Line 222: range 000000000C5F9BC6-000000000C5F9BDD
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderStructValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        __int64 a10,
        char a11)
{
  struct _Unwind_Exception *v11; // rbp

  if ( a9 != &a11 )
    operator delete(a9);
  _Unwind_Resume(v11);
};

// Line 222: range 000000000C5F969E-000000000C5F96B5
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::RenderTimestamp(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char *a16,
        __int64 a17,
        char a18)
{
  struct _Unwind_Exception *v18; // rbp

  if ( a16 != &a18 )
    operator delete(a16);
  _Unwind_Resume(v18);
};

// Line 222: range 000000000C5F9BE2-000000000C5F9C25
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectSource::WriteMessage()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // rdi
  void *v3; // rdi

  v2 = *(void **)(v1 - 88);
  if ( v2 != (void *)(v1 - 72) )
    operator delete(v2);
  if ( *(_QWORD *)(v1 - 184) )
    google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(v1 - 184));
  v3 = *(void **)(v1 - 176);
  if ( v3 != (void *)(v1 - 160) )
    operator delete(v3);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5FA1B2-000000000C5FA1D3
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::RenderDataPiece(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        void *a16)
{
  void *v16; // rbx
  struct _Unwind_Exception *v17; // rbp
  void *v18; // r12

  if ( a16 != v18 )
    operator delete(a16);
  if ( a7 != v16 )
    operator delete(a7);
  _Unwind_Resume(v17);
};

// Line 222: range 000000000C5F9E90-000000000C5F9EA6
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::WriteAny(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5F9F7C-000000000C5F9F8D
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::InitRendererMap()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FA17E-000000000C5FA190
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::Item::InsertMapKeyIfNotPresent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  void *v8; // rbp
  struct _Unwind_Exception *v9; // r12

  if ( a8 != v8 )
    operator delete(a8);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5FA440-000000000C5FA471
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::RenderDataPiece(
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
        __int64 a12,
        char *a13,
        __int64 a14,
        char a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        void *a36,
        __int64 a37,
        char a38)
{
  struct _Unwind_Exception *v38; // rbp

  if ( a36 != &a38 )
    operator delete(a36);
  if ( a13 != &a15 )
    operator delete(a13);
  _Unwind_Resume(v38);
};

// Line 222: range 000000000C5FA35A-000000000C5FA36F
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::RenderDuration(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        void *a26)
{
  void *v26; // rbx
  struct _Unwind_Exception *v27; // rbp

  if ( a26 != v26 )
    operator delete(a26);
  _Unwind_Resume(v27);
};

// Line 222: range 000000000C5FA23C-000000000C5FA278
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::RenderStructValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        void *a21,
        __int64 a22,
        char a23)
{
  void *v23; // rbx
  struct _Unwind_Exception *v24; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a10 != &a12 )
    operator delete(a10);
  if ( a21 != &a23 )
    operator delete(a21);
  if ( retaddr != v23 )
    operator delete(retaddr);
  _Unwind_Resume(v24);
};

// Line 222: range 000000000C5FA2D8-000000000C5FA2ED
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::RenderTimestamp(
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
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        void *a24)
{
  struct _Unwind_Exception *v24; // rbp
  void *v25; // r14

  if ( a24 != v25 )
    operator delete(a24);
  _Unwind_Resume(v24);
};

// Line 222: range 000000000C5FA40A-000000000C5FA420
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::StartList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FA196-000000000C5FA1AC
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::ValidMapKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FA528-000000000C5FA53E
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::InvalidName(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FA7D2-000000000C5FA80E
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::ProtoElement::ToString[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void *a14,
        __int64 a15,
        char a16)
{
  struct _Unwind_Exception *v16; // rbx
  void *v17; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( a14 != &a16 )
    operator delete(a14);
  if ( a10 != v17 )
    operator delete(a10);
  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v16);
};

// Line 222: range 000000000C5FA69E-000000000C5FA6C8
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
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
        void *a11,
        __int64 a12,
        char a13)
{
  struct _Unwind_Exception *v13; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  if ( a11 != &a13 )
    operator delete(a11);
  _Unwind_Resume(v13);
};

// Line 222: range 000000000C5FA60A-000000000C5FA63D
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::RenderPrimitiveField(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        __int64 a10,
        char a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        void *a15,
        __int64 a16,
        char a17)
{
  struct _Unwind_Exception *v17; // rbp
  google::protobuf::util::StatusOr<std::string > *v18; // r14

  if ( a15 != &a17 )
    operator delete(a15);
  google::protobuf::util::StatusOr<std::string>::~StatusOr(v18);
  if ( a9 != &a11 )
    operator delete(a9);
  _Unwind_Resume(v17);
};

// Line 222: range 000000000C5FA5EE-000000000C5FA604
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::StartList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FA702-000000000C5FA718
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::StartObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FA544-000000000C5FA55A
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::ValidOneof(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FA33E-000000000C5FA354
void __fastcall __noreturn google::protobuf::util::converter::RenderOneFieldPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // rbp
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FA9FB-000000000C5FAA0D
void __fastcall __noreturn google::protobuf::util::converter::SafeStrToFloat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  void *v8; // rbx
  struct _Unwind_Exception *v9; // rbp

  if ( a8 != v8 )
    operator delete(a8);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5FA9CC-000000000C5FA9DF
void __fastcall __noreturn google::protobuf::util::converter::ToCamelCase[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  void **v9; // r12

  if ( a8 != *v9 )
    operator delete(*v9);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FA9E4-000000000C5FA9F6
void __fastcall __noreturn google::protobuf::util::converter::ToSnakeCase[abi:cxx11]()
{
  struct _Unwind_Exception *v0; // rbp
  void **v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != *v1 )
    operator delete(*v1);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C5FA8DE-000000000C5FA931
void __fastcall __noreturn google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::GetEnumByTypeUrl(
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
        __int64 a12,
        char *a13,
        __int64 a14,
        char a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        void *a19,
        __int64 a20,
        char a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        void *a25,
        __int64 a26,
        char a27)
{
  struct _Unwind_Exception *v27; // rbx
  __int64 v28; // r14

  if ( a19 != &a21 )
    operator delete(a19);
  if ( a25 != &a27 )
    operator delete(a25);
  if ( a13 != &a15 )
    operator delete(a13);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  _Unwind_Resume(v27);
};

// Line 222: range 000000000C5FA814-000000000C5FA867
void __fastcall __noreturn google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::ResolveTypeUrl(
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
        __int64 a12,
        char *a13,
        __int64 a14,
        char a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        void *a19,
        __int64 a20,
        char a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        void *a25,
        __int64 a26,
        char a27)
{
  struct _Unwind_Exception *v27; // rbx
  __int64 v28; // r14

  if ( a19 != &a21 )
    operator delete(a19);
  if ( a25 != &a27 )
    operator delete(a25);
  if ( a13 != &a15 )
    operator delete(a13);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  _Unwind_Resume(v27);
};

// Line 222: range 000000000C5FAAFA-000000000C5FAB1B
void __fastcall __noreturn google::protobuf::util::internal::StatusOrHelper::Crash(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        google::protobuf::internal::LogMessage_0 a12)
{
  struct _Unwind_Exception *v12; // rbp

  if ( a8 != &a10 )
    operator delete(a8);
  google::protobuf::internal::LogMessage::~LogMessage(&a12);
  _Unwind_Resume(v12);
};

// Line 222: range 000000000C5F03B9-000000000C5F03CF
void __fastcall __noreturn google::protobuf::util::operator<<(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  struct _Unwind_Exception *v8; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C6021E2-000000000C6021F3
void __fastcall __noreturn luabind::detail::get_class_name[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12

  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FD69A-000000000C5FD6B8
void __fastcall __noreturn mysqlpp::Connection::create_db(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  mysqlpp::Query *v8; // rbp
  struct _Unwind_Exception *v9; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  mysqlpp::Query::~Query(v8);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5FD6BE-000000000C5FD6DC
void __fastcall __noreturn mysqlpp::Connection::drop_db(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  mysqlpp::Query *v8; // rbp
  struct _Unwind_Exception *v9; // r12
  char *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != &a8 )
    operator delete(retaddr);
  mysqlpp::Query::~Query(v8);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5FD8C0-000000000C5FD8E4
void __fastcall __noreturn mysqlpp::DBDriver::DBDriver()
{
  __int64 v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  std::_Deque_base<mysqlpp::Option*> *v2; // r12
  std::_Deque_base<mysqlpp::Option*> *v3; // r13
  void *v4; // r14
  void *v5; // rdi

  v5 = *(void **)(v0 + 1448);
  if ( v4 != v5 )
    operator delete(v5);
  std::_Deque_base<mysqlpp::Option *>::~_Deque_base(v3);
  std::_Deque_base<mysqlpp::Option *>::~_Deque_base(v2);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FFB64-000000000C5FFB76
void __fastcall __noreturn mysqlpp::FieldNames::init(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *v11; // r12

  if ( a10 != v11 )
    operator delete(a10);
  _Unwind_Resume(v10);
};

// Line 222: range 000000000C5FFB7C-000000000C5FFBA2
void __fastcall __noreturn mysqlpp::FieldNames::operator[](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void *a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void *a14)
{
  struct _Unwind_Exception *v14; // rbx
  void *v15; // rbp

  if ( a14 != v15 )
    operator delete(a14);
  if ( a10 != a9 )
    operator delete(a10);
  _Unwind_Resume(v14);
};

// Line 222: range 000000000C5FDF7A-000000000C5FDFD4
void __fastcall __noreturn mysqlpp::Query::Query()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  struct _Unwind_Exception *v2; // r12
  std::stringbuf *v3; // r13
  void *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v4 )
    operator delete(retaddr);
  std::stringbuf::~stringbuf(v3);
  std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > > *const)(v0 + 128),
    *(std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::_Link_type *)(v0 + 144));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v0 + 104));
  std::vector<mysqlpp::SQLParseElement>::~vector((std::vector<mysqlpp::SQLParseElement> *const)(v0 + 80));
  std::vector<mysqlpp::SQLTypeAdapter>::~vector((std::vector<mysqlpp::SQLTypeAdapter> *const)(v0 + 24));
  v5 = *(_QWORD *)(v1 + 8);
  v6 = *(_QWORD *)(v1 + 16);
  *(_QWORD *)v0 = v5;
  *(_QWORD *)(v0 + *(_QWORD *)(v5 - 24)) = v6;
  _Unwind_Resume(v2);
};

// Line 222: range 000000000C5FDFDA-000000000C5FE03F
void __fastcall __noreturn mysqlpp::Query::Query(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  __int64 v8; // rbx
  struct _Unwind_Exception *v9; // rbp
  std::ios_base *v10; // r12
  std::stringbuf *v11; // r13
  __int64 v12; // r14
  void *v13; // r15

  if ( a8 != v13 )
    operator delete(a8);
  std::stringbuf::~stringbuf(v11);
  std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > > *const)(v8 + 128),
    *(std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::_Link_type *)(v8 + 144));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v8 + 104));
  std::vector<mysqlpp::SQLParseElement>::~vector((std::vector<mysqlpp::SQLParseElement> *const)(v8 + 80));
  std::vector<mysqlpp::SQLTypeAdapter>::~vector((std::vector<mysqlpp::SQLTypeAdapter> *const)(v8 + 24));
  *(_QWORD *)v8 = v12;
  *(_QWORD *)(v8 + 280) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v10);
  _Unwind_Resume(v9);
};

// Line 222: range 000000000C5FDEBA-000000000C5FDECB
void __fastcall __noreturn mysqlpp::Query::operator=()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FDEE6-000000000C5FDF39
void __fastcall __noreturn mysqlpp::Query::parse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        void *a8,
        void *a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        void *a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        void *a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        void *a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        void *a34)
{
  struct _Unwind_Exception *v34; // rbp

  if ( a30 != a9 )
    operator delete(a30);
  if ( a34 != a8 )
    operator delete(a34);
  if ( a26 != a7 )
    operator delete(a26);
  if ( a22 != a10 )
    operator delete(a22);
  _Unwind_Resume(v34);
};

// Line 222: range 000000000C5FDB86-000000000C5FDB97
void __fastcall __noreturn mysqlpp::Query::proc()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FDB08-000000000C5FDB19
void __fastcall __noreturn mysqlpp::Query::reset()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FDBB8-000000000C5FDBC9
void __fastcall __noreturn mysqlpp::Query::str[abi:cxx11]()
{
  void *v0; // rbp
  void **v1; // r12
  struct _Unwind_Exception *v2; // r13

  if ( v0 != *v1 )
    operator delete(*v1);
  _Unwind_Resume(v2);
};

// Line 222: range 000000000C5FFEEC-000000000C5FFF09
void __fastcall __noreturn mysqlpp::SQLStream::SQLStream()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  struct _Unwind_Exception *v2; // r12
  void *v3; // r13
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v3 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v1, v0 + 8);
  _Unwind_Resume(v2);
};

// Line 222: range 000000000C5FFE2A-000000000C5FFE6A
void __fastcall __noreturn mysqlpp::SQLStream::SQLStream()
{
  __int64 v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *v2; // r12
  std::ios_base *v3; // r13
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v2 )
    operator delete(retaddr);
  std::ostringstream::~ostringstream(v0, &`VTT for'mysqlpp::SQLStream + 1);
  *(_QWORD *)(v0 + 120) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v3);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FFDFE-000000000C5FFE0F
void __fastcall __noreturn mysqlpp::SQLStream::operator=()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FF9EC-000000000C5FF9FE
void __fastcall __noreturn mysqlpp::TCPConnection::parse_address(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  void *v9; // r14

  if ( a8 != v9 )
    operator delete(a8);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FFC09-000000000C5FFC1A
void __fastcall __noreturn mysqlpp::operator<<()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FFBC6-000000000C5FFBD7
void __fastcall __noreturn mysqlpp::operator<<()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v0 )
    operator delete(retaddr);
  _Unwind_Resume(v1);
};

// Line 222: range 000000000C5FFBF2-000000000C5FFC04
void __fastcall __noreturn mysqlpp::operator<<(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  void *v9; // r13

  if ( a8 != v9 )
    operator delete(a8);
  _Unwind_Resume(v8);
};

// Line 222: range 000000000C5FD8EA-000000000C5FD8FB
void __fastcall __noreturn mysqlpp::operator<<()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( retaddr != v1 )
    operator delete(retaddr);
  _Unwind_Resume(v0);
};

// Line 222: range 000000000C70D310-000000000C70D328
void __cdecl google::protobuf::internal::DeleteEmptyString()
{
  if ( google::protobuf::internal::fixed_address_empty_string[abi:cxx11].union_.align_to_int64 != 527115856 )
    operator delete(google::protobuf::internal::fixed_address_empty_string[abi:cxx11].union_.align_to_ptr);
};

// Line 222: range 000000000C6015F6-000000000C6016D4
void __fastcall __noreturn Json::OurReader::decodeDouble(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        std::locale *a11,
        int a12,
        int a13,
        int a14,
        int a15,
        void *a16,
        int a17,
        int a18,
        int a19,
        void *a20,
        int a21,
        int a22,
        int a23,
        void *a24,
        int a25,
        int a26,
        int a27,
        void *a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        void *a45,
        int a46,
        int a47,
        int a48,
        __int64 a49)
{
  struct _Unwind_Exception *v49; // rbx
  void *v50; // r12
  void *v51; // r14
  void *v52; // r15

  if ( a28 != v50 )
    operator delete(a28);
  if ( a24 != v51 )
    operator delete(a24);
  if ( a20 != v52 )
    operator delete(a20);
  std::istringstream::~istringstream(a7);
  if ( a16 != a8 )
    operator delete(a16);
  _Unwind_Resume(v49);
};

// Line 222: range 000000000C6012AE-000000000C60138C
void __fastcall __noreturn Json::Reader::decodeDouble(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        std::locale *a11,
        int a12,
        int a13,
        int a14,
        int a15,
        void *a16,
        int a17,
        int a18,
        int a19,
        void *a20,
        int a21,
        int a22,
        int a23,
        void *a24,
        int a25,
        int a26,
        int a27,
        void *a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        void *a45,
        int a46,
        int a47,
        int a48,
        __int64 a49)
{
  struct _Unwind_Exception *v49; // rbx
  void *v50; // r12
  void *v51; // r14
  void *v52; // r15

  if ( a28 != v50 )
    operator delete(a28);
  if ( a24 != v51 )
    operator delete(a24);
  if ( a20 != v52 )
    operator delete(a20);
  std::istringstream::~istringstream(a7);
  if ( a16 != a8 )
    operator delete(a16);
  _Unwind_Resume(v49);
};

// Line 222: range 000000000C5F168C-000000000C5F1735
void __fastcall __noreturn google::protobuf::util::`anonymous namespace'::StatusErrorListener::InvalidValue(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        struct _Unwind_Exception *a7,
        char *a8,
        int a9,
        char a10,
        int a11,
        void *a12,
        int a13,
        int a14,
        int a15,
        void *a16,
        int a17,
        int a18,
        int a19,
        void *a20,
        int a21,
        int a22,
        int a23,
        void *a24,
        int a25,
        int a26,
        int a27,
        void *a28,
        int a29,
        int a30,
        int a31,
        void *a32,
        int a33,
        int a34,
        int a35,
        int a36,
        char *a37,
        int a38,
        char a39)
{
  void *v39; // rbx
  void *v40; // rbp
  void *v41; // r12
  void *v42; // r13
  void *v43; // r14
  void *v44; // r15
  struct _Unwind_Exception *v45; // rax
  struct _Unwind_Exception *v46; // r15

  if ( a37 != &a39 )
    operator delete(a37);
  v45 = a7;
  if ( a32 != v44 )
  {
    operator delete(a32);
    v45 = a7;
  }
  v46 = v45;
  if ( a24 != v40 )
    operator delete(a24);
  if ( a20 != v43 )
    operator delete(a20);
  if ( a12 != v39 )
    operator delete(a12);
  if ( a8 != &a10 )
    operator delete(a8);
  if ( a16 != v42 )
    operator delete(a16);
  if ( a28 != v41 )
    operator delete(a28);
  _Unwind_Resume(v46);
};

// Line 222: range 000000000C716920-000000000C716940
void __fastcall google::protobuf::`anonymous namespace'::StringBaseTextGenerator::~StringBaseTextGenerator(
        google::protobuf::`anonymous namespace'::StringBaseTextGenerator *const this)
{
  google::protobuf::`anonymous namespace'::StringBaseTextGenerator *M_p; // r8

  M_p = (google::protobuf::`anonymous namespace'::StringBaseTextGenerator *)this->output_._M_dataplus._M_p;
  this->_vptr_BaseTextGenerator = (int (**)(...))off_19E72898;
  if ( M_p != (google::protobuf::`anonymous namespace'::StringBaseTextGenerator *)&this->output_._anon_0 )
    operator delete(M_p);
};

// Line 222: range 000000000C70A340-000000000C70A358
void __fastcall google::protobuf::internal::LogMessage::~LogMessage(
        google::protobuf::internal::LogMessage_0 *const this)
{
  google::protobuf::internal::LogMessage_0 *M_p; // r8

  M_p = (google::protobuf::internal::LogMessage_0 *)this->message_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::internal::LogMessage_0 *)&this->message_._anon_0 )
    operator delete(M_p);
};

// Line 222: range 000000000C7388B0-000000000C7388C8
void __fastcall google::protobuf::internal::arena_destruct_object<std::string>(void *object)
{
  if ( *(void **)object != (char *)object + 16 )
    operator delete(*(void **)object);
};

// Line 222: range 000000000C736F50-000000000C736F70
void __fastcall google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver::~DescriptorPoolTypeResolver(
        google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver *const this)
{
  google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver *M_p; // r8

  M_p = (google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver *)this->url_prefix_._M_dataplus._M_p;
  this->_vptr_TypeResolver = (int (**)(...))off_19E75238;
  if ( M_p != (google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver *)&this->url_prefix_._anon_0 )
    operator delete(M_p);
};

// Line 222: range 000000000C735840-000000000C735860
void __fastcall google::protobuf::util::`anonymous namespace'::StatusErrorListener::~StatusErrorListener(
        google::protobuf::util::`anonymous namespace'::StatusErrorListener *const this)
{
  google::protobuf::util::`anonymous namespace'::StatusErrorListener *M_p; // r8

  M_p = (google::protobuf::util::`anonymous namespace'::StatusErrorListener *)this->status_.error_message_._M_dataplus._M_p;
  this->_vptr_ErrorListener = (int (**)(...))off_19E74F90;
  if ( M_p != (google::protobuf::util::`anonymous namespace'::StatusErrorListener *)&this->status_.error_message_._anon_0 )
    operator delete(M_p);
};

// Line 229: range 000000000F807C40-000000000F807C9D
void __cdecl std::basic_string<bool>::_M_dispose(std::basic_string<bool> *const this)
{
  if ( !std::basic_string<bool>::_M_is_local(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_anon_0 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_anon_0);
    std::basic_string<bool>::_M_destroy(this, this->_anon_0._M_allocated_capacity);
  }
};

// Line 236: range 000000000F86D1CE-000000000F86D21B
void __cdecl std::basic_string<bool>::_M_destroy(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __size)
{
  bool *v2; // r12
  std::allocator_traits<std::allocator<bool> >::allocator_type *allocator; // rax

  v2 = std::basic_string<bool>::_M_data(this);
  allocator = std::basic_string<bool>::_M_get_allocator(this);
  std::allocator_traits<std::allocator<bool>>::deallocate(allocator, v2, __size + 1);
};

// Line 243: range 000000000C66FCE6-000000000C66FD13
void __cdecl std::string::_M_construct_aux<char *>(
        std::string *const this,
        char *__beg,
        char *__end,
        std::__false_type a4)
{
  std::string::_M_construct<char *>(this, __beg, __end, (std::forward_iterator_tag)__beg);
};

// Line 243: range 000000000C66FCB8-000000000C66FCE5
void __cdecl std::string::_M_construct_aux<char const*>(
        std::string *const this,
        const char *__beg,
        const char *__end,
        std::__false_type a4)
{
  std::string::_M_construct<char const*>(this, __beg, __end, (std::forward_iterator_tag)__beg);
};

// Line 243: range 000000000D46CC34-000000000D46CD64
void __fastcall std::string::_M_construct_aux<__gnu_cxx::__normal_iterator<char *,std::string>>(
        std::string *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > __beg,
        __gnu_cxx::__normal_iterator<char*,std::string > __end,
        std::__false_type a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::forward_iterator_tag v7; // [rsp+0h] [rbp-C0h]
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 9 <unknown> 64 8 9 __beg:243 96 8 9 __end:243";
  *(_QWORD *)(v4 + 16) = std::string::_M_construct_aux<__gnu_cxx::__normal_iterator<char *,std::string>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 64) = __beg;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 96) = __end;
  std::string::_M_construct<__gnu_cxx::__normal_iterator<char *,std::string>>(
    this,
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 64),
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 96),
    v7);
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 243: range 000000000D1D7A6C-000000000D1D7B9C
void __fastcall std::string::_M_construct_aux<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        std::string *const this,
        __gnu_cxx::__normal_iterator<char const*,std::string > __beg,
        __gnu_cxx::__normal_iterator<char const*,std::string > __end,
        std::__false_type a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::forward_iterator_tag v7; // [rsp+0h] [rbp-C0h]
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 9 <unknown> 64 8 9 __beg:243 96 8 9 __end:243";
  *(_QWORD *)(v4 + 16) = std::string::_M_construct_aux<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 64) = __beg;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 96) = __end;
  std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>(
    this,
    *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 64),
    *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 96),
    v7);
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 263: range 000000000C663DE2-000000000C663E0F
void __cdecl std::string::_M_construct<char const*>(std::string *const this, const char *__beg, const char *__end)
{
  std::string::_M_construct_aux<char const*>(this, __beg, __end, (std::__false_type)__beg);
};

// Line 263: range 000000000D45EB14-000000000D45EC2C
void __fastcall std::string::_M_construct<__gnu_cxx::__normal_iterator<char *,std::string>>(
        std::string *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > __beg,
        __gnu_cxx::__normal_iterator<char*,std::string > __end)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 __beg:263 64 8 9 __end:263";
  *(_QWORD *)(v3 + 16) = std::string::_M_construct<__gnu_cxx::__normal_iterator<char *,std::string>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32) = __beg;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64) = __end;
  std::string::_M_construct_aux<__gnu_cxx::__normal_iterator<char *,std::string>>(
    this,
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32),
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64),
    (std::__false_type)*(_QWORD *)(v3 + 32));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 263: range 000000000D0AA9F2-000000000D0AAB0A
void __fastcall std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        std::string *const this,
        __gnu_cxx::__normal_iterator<char const*,std::string > __beg,
        __gnu_cxx::__normal_iterator<char const*,std::string > __end)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 __beg:263 64 8 9 __end:263";
  *(_QWORD *)(v3 + 16) = std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32) = __beg;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64) = __end;
  std::string::_M_construct_aux<__gnu_cxx::__normal_iterator<char const*,std::string>>(
    this,
    *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32),
    *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64),
    (std::__false_type)*(_QWORD *)(v3 + 32));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 286: range 000000000F8DDCEE-000000000F8DDCFB
std::basic_string<bool>::allocator_type *__cdecl std::basic_string<bool>::_M_get_allocator(
        std::basic_string<bool> *const this)
{
  return (std::basic_string<bool>::allocator_type *)this;
};

// Line 290: range 000000000F9A5704-000000000F9A5711
const std::basic_string<bool>::allocator_type *__cdecl std::basic_string<bool>::_M_get_allocator(
        const std::basic_string<bool> *const this)
{
  return (const std::basic_string<bool>::allocator_type *)this;
};

// Line 320: range 000000000F938B28-000000000F938B8C
void __cdecl std::basic_string<bool>::_M_check_length(
        const std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __n1,
        std::basic_string<bool>::size_type __n2,
        const char *__s)
{
  std::basic_string<bool>::size_type v4; // rbx

  v4 = std::basic_string<bool>::max_size(this);
  if ( __n2 > v4 + __n1 - std::basic_string<bool>::size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error(__s);
  }
};

// Line 322: range 0000000014E011D0-0000000014E012A3
void __fastcall Json::appendHex(__int64 a1, __int16 a2)
{
  __int64 v2; // r12
  int v3; // ebx
  void *v4[2]; // [rsp+0h] [rbp-38h] BYREF
  char v5[40]; // [rsp+10h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
    std::__throw_length_error("basic_string::append");
  v2 = std::string::_M_append(a1, "\\u", 2LL);
  v4[0] = v5;
  std::string::_M_construct(v4, 4LL, 32LL);
  *(_BYTE *)v4[0] = Json::hex2[2 * HIBYTE(a2)];
  *((_BYTE *)v4[0] + 1) = Json::hex2[2 * HIBYTE(a2) + 1];
  v3 = 2 * (unsigned __int8)a2;
  *((_BYTE *)v4[0] + 2) = Json::hex2[v3];
  *((_BYTE *)v4[0] + 3) = Json::hex2[v3 + 1];
  std::string::_M_append(v2, v4[0], v4[1]);
  if ( v4[0] != v5 )
    operator delete(v4[0]);
};

// Line 322: range 000000000C719230-000000000C7192C7
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintEnum(
        std::string *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  char *v6; // rsi
  __int64 v7; // rdx
  std::forward_iterator_tag v8; // cl
  char *__beg; // [rsp+8h] [rbp-40h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  char v12[48]; // [rsp+18h] [rbp-30h] BYREF

  v4 = a4[1];
  v5 = *a4;
  __beg = v12;
  v11 = 0LL;
  v12[0] = 0;
  if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&__beg, v5, v4);
  v6 = __beg;
  v7 = v11;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v6, &v6[v7], v8);
  if ( __beg != v12 )
    operator delete(__beg);
  return this;
};

// Line 322: range 000000000C73B310-000000000C73B335
void __fastcall google::protobuf::StrAppend(std::string *result, const google::protobuf::strings::AlphaNum *a)
{
  size_t piece_size; // rdx
  const char *piece_data; // rsi

  piece_size = a->piece_size_;
  piece_data = a->piece_data_;
  if ( piece_size > 0x3FFFFFFFFFFFFFFFLL - result->_M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(result, piece_data, piece_size);
};

// Line 322: range 000000000C7172A0-000000000C7172C5
void __fastcall google::protobuf::`anonymous namespace'::StringBaseTextGenerator::Print(
        google::protobuf::`anonymous namespace'::StringBaseTextGenerator *const this,
        const char *text,
        size_t size)
{
  if ( size > 0x3FFFFFFFFFFFFFFFLL - this->output_._M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&this->output_, text, size);
};

// Line 322: range 000000000C738B50-000000000C738B72
void __fastcall google::protobuf::strings::StringByteSink::Append(
        google::protobuf::strings::StringByteSink *const this,
        const char *data,
        size_t n)
{
  std::string *dest; // rdi

  dest = this->dest_;
  if ( n > 0x3FFFFFFFFFFFFFFFLL - dest->_M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(dest, data, n);
};

// Line 346: range 000000000F97B8C8-000000000F97B911
void __cdecl std::basic_string<bool>::_S_copy(bool *__d, const bool *__s, std::basic_string<bool>::size_type __n)
{
  if ( __n == 1 )
    __gnu_cxx::char_traits<bool>::assign(__d, __s);
  else
    __gnu_cxx::char_traits<bool>::copy(__d, __s, __n);
};

// Line 355: range 000000000F938BE0-000000000F938C29
void __cdecl std::basic_string<bool>::_S_move(bool *__d, const bool *__s, std::basic_string<bool>::size_type __n)
{
  if ( __n == 1 )
    __gnu_cxx::char_traits<bool>::assign(__d, __s);
  else
    __gnu_cxx::char_traits<bool>::move(__d, __s, __n);
};

// Line 364: range 000000000F938E7E-000000000F938F71
void __fastcall std::basic_string<bool>::_S_assign(bool *__d, std::basic_string<bool>::size_type __n, char __c)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 7 __c:364";
  *(_QWORD *)(v3 + 16) = std::basic_string<bool>::_S_assign;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  *(_BYTE *)(v3 + 32) = __c;
  if ( __n == 1 )
    __gnu_cxx::char_traits<bool>::assign(__d, (const __gnu_cxx::char_traits<bool>::char_type *)(v3 + 32));
  else
    __gnu_cxx::char_traits<bool>::assign(__d, __n, *(_BYTE *)(v3 + 32));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 431: range 000000000F7B5DBA-000000000F7B5ED1
void __cdecl std::basic_string<bool>::basic_string(std::basic_string<bool> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool *v4; // rax
  char v5[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::basic_string<bool>::basic_string;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  std::allocator<bool>::allocator((std::allocator<bool> *const)(v1 + 32));
  v4 = std::basic_string<bool>::_M_local_data(this);
  std::basic_string<bool>::_Alloc_hider::_Alloc_hider(&this->_M_dataplus, v4, (std::allocator<bool> *)(v1 + 32));
  std::allocator<bool>::~allocator((std::allocator<bool> *const)(v1 + 32));
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::basic_string<bool>::_M_set_length(this, 0LL);
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 525: range 000000000C656FEC-000000000C657081
void __cdecl std::string::basic_string<std::allocator<char>>(
        std::string *const this,
        const char *__s,
        const std::allocator<char> *__a)
{
  __int64 v3; // rcx
  const char *v4; // rax

  v3 = std::string::_M_local_data(this);
  std::string::_Alloc_hider::_Alloc_hider(this, v3, __a);
  if ( __s )
    v4 = &__s[std::char_traits<char>::length(__s)];
  else
    v4 = (const char *)-1LL;
  std::string::_M_construct<char const*>(this, __s, v4);
};

// Line 525: range 0000000014DF4BA0-0000000014DF4C34
void __fastcall std::string::basic_string(std::string *const this, const char *__s, const std::allocator<char> *__a)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rbp
  std::string::size_type v4; // rax
  size_t v5; // r12
  char *v6; // rax
  std::string::size_type v7[6]; // [rsp+8h] [rbp-30h] BYREF

  p_anon_0 = &this->_anon_0;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  v4 = strlen(__s);
  v7[0] = v4;
  v5 = v4;
  if ( v4 > 0xF )
  {
    v6 = (char *)std::string::_M_create(this, v7, 0LL);
    this->_M_dataplus._M_p = v6;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6;
    this->_anon_0._M_allocated_capacity = v7[0];
    goto LABEL_8;
  }
  if ( v4 != 1 )
  {
    if ( !v4 )
      goto LABEL_4;
LABEL_8:
    memcpy(p_anon_0, __s, v5);
    v4 = v7[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->_M_dataplus._M_p;
    goto LABEL_4;
  }
  this->_anon_0._M_local_buf[0] = *__s;
LABEL_4:
  this->_M_string_length = v4;
  p_anon_0->_M_local_buf[v4] = 0;
};

// Line 525: range 000000000C71E640-000000000C71E66D
void __fastcall std::string::basic_string(std::string *const this, const char *__s, const std::allocator<char> *__a)
{
  size_t v3; // rax
  std::forward_iterator_tag v4; // cl

  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  v3 = strlen(__s);
  std::string::_M_construct<char const*>(this, __s, &__s[v3], v4);
};

// Line 525: range 0000000014E01110-0000000014E011C7
void __fastcall std::string::basic_string(std::string *const this, const char *__s, const std::allocator<char> *__a)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r13
  std::string::size_type v4; // rax
  size_t v5; // r12
  char *v6; // rax
  std::string::size_type v7[6]; // [rsp+8h] [rbp-30h] BYREF

  p_anon_0 = &this->_anon_0;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  if ( !__s )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v4 = strlen(__s);
  v7[0] = v4;
  v5 = v4;
  if ( v4 > 0xF )
  {
    v6 = (char *)std::string::_M_create(this, v7, 0LL);
    this->_M_dataplus._M_p = v6;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6;
    this->_anon_0._M_allocated_capacity = v7[0];
    goto LABEL_9;
  }
  if ( v4 != 1 )
  {
    if ( !v4 )
      goto LABEL_5;
LABEL_9:
    memcpy(p_anon_0, __s, v5);
    v4 = v7[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->_M_dataplus._M_p;
    goto LABEL_5;
  }
  this->_anon_0._M_local_buf[0] = *__s;
LABEL_5:
  this->_M_string_length = v4;
  p_anon_0->_M_local_buf[v4] = 0;
};

// Line 525: range 0000000014DED1A0-0000000014DED257
void __fastcall std::string::basic_string(std::string *const this, const char *__s, const std::allocator<char> *__a)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r13
  std::string::size_type v4; // rax
  size_t v5; // r12
  char *v6; // rax
  std::string::size_type v7[6]; // [rsp+8h] [rbp-30h] BYREF

  p_anon_0 = &this->_anon_0;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  if ( !__s )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v4 = strlen(__s);
  v7[0] = v4;
  v5 = v4;
  if ( v4 > 0xF )
  {
    v6 = (char *)std::string::_M_create(this, v7, 0LL);
    this->_M_dataplus._M_p = v6;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6;
    this->_anon_0._M_allocated_capacity = v7[0];
    goto LABEL_9;
  }
  if ( v4 != 1 )
  {
    if ( !v4 )
      goto LABEL_5;
LABEL_9:
    memcpy(p_anon_0, __s, v5);
    v4 = v7[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->_M_dataplus._M_p;
    goto LABEL_5;
  }
  this->_anon_0._M_local_buf[0] = *__s;
LABEL_5:
  this->_M_string_length = v4;
  p_anon_0->_M_local_buf[v4] = 0;
};

// Line 527: range 000000000C657082-000000000C6570AB
bool __cdecl std::operator==<char>(const std::string *__lhs, const char *__rhs)
{
  return (unsigned int)std::string::compare(__lhs, __rhs) == 0;
};

// Line 625: range 000000000C663D68-000000000C663DE1
void __cdecl std::string::basic_string<char *,void>(
        std::string *const this,
        char *__beg,
        char *__end,
        const std::allocator<char> *__a)
{
  __int64 v4; // rcx

  v4 = std::string::_M_local_data(this);
  std::string::_Alloc_hider::_Alloc_hider(this, v4, __a);
  std::string::_M_construct<char *>(this, __beg, __end);
};

// Line 625: range 000000000D44F042-000000000D44F1BD
void __fastcall std::string::basic_string<__gnu_cxx::__normal_iterator<char *,std::string>,void>(
        std::string *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > __beg,
        __gnu_cxx::__normal_iterator<char*,std::string > __end,
        const std::allocator<char> *__a)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rax
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 9 __beg:625 64 8 9 __end:625";
  *(_QWORD *)(v4 + 16) = std::string::basic_string<__gnu_cxx::__normal_iterator<char *,std::string>,void>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 32) = __beg;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 64) = __end;
  v7 = std::string::_M_local_data(this);
  std::string::_Alloc_hider::_Alloc_hider(this, v7, __a);
  std::string::_M_construct<__gnu_cxx::__normal_iterator<char *,std::string>>(
    this,
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 32),
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 64));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 625: range 000000000CFC9088-000000000CFC9203
void __fastcall std::string::basic_string<__gnu_cxx::__normal_iterator<char const*,std::string>,void>(
        std::string *const this,
        __gnu_cxx::__normal_iterator<char const*,std::string > __beg,
        __gnu_cxx::__normal_iterator<char const*,std::string > __end,
        const std::allocator<char> *__a)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rax
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 9 __beg:625 64 8 9 __end:625";
  *(_QWORD *)(v4 + 16) = std::string::basic_string<__gnu_cxx::__normal_iterator<char const*,std::string>,void>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 32) = __beg;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 64) = __end;
  v7 = std::string::_M_local_data(this);
  std::string::_Alloc_hider::_Alloc_hider(this, v7, __a);
  std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>(
    this,
    *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 32),
    *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 64));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 650: range 000000000CE497DC-000000000CE49922
void __cdecl std::string::basic_string<std::string_view,void>(
        std::string *const this,
        const std::string_view *__t,
        const std::allocator<char> *__a)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::string::basic_string<std::string_view,void>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_WORD *)(((unsigned __int64)__t >> 3) + 0x7FFF8000) )
    __asan_report_load16(__t);
  v6 = std::string::_S_to_string_view(__t->_M_len, __t->_M_str);
  std::string::__sv_wrapper::__sv_wrapper(v3 + 32, v6);
  if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v3 + 32);
  std::string::basic_string(this, *(_QWORD *)(v3 + 32), *(_QWORD *)(v3 + 40), __a);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 657: range 000000000F7B5ED2-000000000F7B5EF8
void __cdecl std::basic_string<bool>::~basic_string(std::basic_string<bool> *const this)
{
  std::basic_string<bool>::_M_dispose(this);
  std::basic_string<bool>::_Alloc_hider::~_Alloc_hider(&this->_M_dataplus);
};

// Line 930: range 000000000F86D21C-000000000F86D256
std::basic_string<bool>::size_type __cdecl std::basic_string<bool>::size(const std::basic_string<bool> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_string_length);
  return this->_M_string_length;
};

// Line 936: range 000000000F97B73A-000000000F97B774
std::basic_string<bool>::size_type __cdecl std::basic_string<bool>::length(const std::basic_string<bool> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_string_length);
  return this->_M_string_length;
};

// Line 941: range 000000000F97B6D4-000000000F97B6FC
std::basic_string<bool>::size_type __cdecl std::basic_string<bool>::max_size(const std::basic_string<bool> *const this)
{
  const std::allocator_traits<std::allocator<bool> >::allocator_type *allocator; // rax

  allocator = std::basic_string<bool>::_M_get_allocator(this);
  return (std::allocator_traits<std::allocator<bool>>::max_size(allocator) - 1) >> 1;
};

// Line 968: range 000000000F7B5EFA-000000000F7B5F24
void __cdecl std::basic_string<bool>::resize(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __n)
{
  std::basic_string<bool>::resize(this, __n, 0);
};

// Line 993: range 000000000F938B8E-000000000F938BDF
std::basic_string<bool>::size_type __cdecl std::basic_string<bool>::capacity(const std::basic_string<bool> *const this)
{
  if ( std::basic_string<bool>::_M_is_local(this) )
    return 15LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_anon_0 >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_anon_0);
  return this->_anon_0._M_allocated_capacity;
};

// Line 1063: range 000000000F7B5F26-000000000F7B5F4A
std::basic_string<bool>::reference __cdecl std::basic_string<bool>::operator[](
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __pos)
{
  return &std::basic_string<bool>::_M_data(this)[__pos];
};

// Line 1222: range 0000000014E02DC0-0000000014E02DCC
void __fastcall Json::BuiltStyledStreamWriter::indent(Json::BuiltStyledStreamWriter *const this)
{
  std::string::_M_append(&this->indentString_, this->indentation_._M_dataplus._M_p, this->indentation_._M_string_length);
};

// Line 1222: range 0000000014E02AA0-0000000014E02AAC
void __fastcall Json::StyledStreamWriter::indent(Json::StyledStreamWriter *const this)
{
  std::string::_M_append(&this->indentString_, this->indentation_._M_dataplus._M_p, this->indentation_._M_string_length);
};

// Line 1280: range 000000000F86D258-000000000F86D2A2
std::basic_string<bool> *__cdecl std::basic_string<bool>::append(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __n,
        bool __c)
{
  std::basic_string<bool>::size_type v4; // rsi

  v4 = std::basic_string<bool>::size(this);
  return std::basic_string<bool>::_M_replace_aux(this, v4, 0LL, __n, __c);
};

// Line 2301: range 000000000C7E7340-000000000C7E75A3
bool __fastcall google::protobuf::internal::ParseTime(
        const std::string *value,
        google::protobuf::int64 *seconds,
        google::protobuf::int32 *nanos)
{
  const char *M_p; // rdi
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // r12
  char v12; // al
  const char *v13; // r12
  int v15; // esi
  int v16; // edx
  google::protobuf::int32 v17; // eax
  google::protobuf::int64 offset; // [rsp+0h] [rbp-40h] BYREF
  google::protobuf::internal::DateTime time; // [rsp+8h] [rbp-38h] BYREF

  M_p = value->_M_dataplus._M_p;
  if ( (unsigned __int8)(*M_p - 48) <= 9u )
  {
    v6 = google::protobuf::internal::`anonymous namespace'::ParseInt(M_p, 4, 1, 9999, &time.year);
    if ( v6 )
    {
      if ( *v6 == 45 && (unsigned __int8)(v6[1] - 48) <= 9u )
      {
        v7 = google::protobuf::internal::`anonymous namespace'::ParseInt(v6 + 1, 2, 1, 12, &time.month);
        if ( v7 )
        {
          if ( *v7 == 45 && (unsigned __int8)(v7[1] - 48) <= 9u )
          {
            v8 = google::protobuf::internal::`anonymous namespace'::ParseInt(v7 + 1, 2, 1, 31, &time.day);
            if ( v8 )
            {
              if ( *v8 == 84 && (unsigned __int8)(v8[1] - 48) <= 9u )
              {
                v9 = google::protobuf::internal::`anonymous namespace'::ParseInt(v8 + 1, 2, 0, 23, &time.hour);
                if ( v9 )
                {
                  if ( *v9 == 58 && (unsigned __int8)(v9[1] - 48) <= 9u )
                  {
                    v10 = google::protobuf::internal::`anonymous namespace'::ParseInt(v9 + 1, 2, 0, 59, &time.minute);
                    if ( v10 )
                    {
                      if ( *v10 == 58 && (unsigned __int8)(v10[1] - 48) <= 9u )
                      {
                        v11 = google::protobuf::internal::`anonymous namespace'::ParseInt(
                                v10 + 1,
                                2,
                                0,
                                59,
                                &time.second);
                        if ( v11 )
                        {
                          if ( google::protobuf::internal::DateTimeToSeconds(&time, seconds) )
                          {
                            if ( *v11 != 46 )
                            {
                              *nanos = 0;
LABEL_21:
                              v12 = *v11;
                              if ( *v11 == 90 )
                              {
                                v13 = v11 + 1;
                                return *v13 == 0;
                              }
                              if ( v12 == 43 )
                              {
                                v13 = google::protobuf::internal::`anonymous namespace'::ParseTimezoneOffset(
                                        v11 + 1,
                                        &offset);
                                if ( v13 )
                                {
                                  *seconds -= offset;
                                  return *v13 == 0;
                                }
                              }
                              else if ( v12 == 45 )
                              {
                                v13 = google::protobuf::internal::`anonymous namespace'::ParseTimezoneOffset(
                                        v11 + 1,
                                        &offset);
                                if ( v13 )
                                {
                                  *seconds += offset;
                                  return *v13 == 0;
                                }
                              }
                              return 0;
                            }
                            v15 = v11[1];
                            if ( (unsigned __int8)(v11[1] - 48) <= 9u )
                            {
                              ++v11;
                              v16 = 0;
                              v17 = 0;
                              do
                              {
                                if ( v16 <= 8 )
                                  v17 = v15 + 10 * v17 - 48;
                                v15 = *++v11;
                                ++v16;
                              }
                              while ( (unsigned __int8)(v15 - 48) <= 9u );
                              if ( v16 <= 8 )
                              {
                                do
                                {
                                  ++v16;
                                  v17 *= 10;
                                }
                                while ( v16 != 9 );
                              }
                              *nanos = v17;
                              goto LABEL_21;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return 0;
  }
  return 0;
};

// Line 2301: range 000000000C7330A0-000000000C733166
bool __fastcall google::protobuf::io::Tokenizer::ParseInteger(
        const std::string *text,
        google::protobuf::uint64 max_value,
        google::protobuf::uint64 *output)
{
  std::string::pointer M_p; // r8
  int v4; // r10d
  char v5; // al
  google::protobuf::uint64 v6; // rdi
  int v7; // ecx

  M_p = text->_M_dataplus._M_p;
  v4 = 10;
  v5 = *text->_M_dataplus._M_p;
  if ( v5 == 48 )
  {
    if ( (M_p[1] & 0xDF) != 88 )
    {
      v4 = 8;
      goto LABEL_3;
    }
    v5 = M_p[2];
    v4 = 16;
    M_p += 2;
  }
  if ( v5 )
  {
LABEL_3:
    v6 = 0LL;
    while ( 1 )
    {
      if ( (unsigned __int8)(v5 - 48) > 9u )
      {
        if ( (unsigned __int8)(v5 - 97) <= 0x19u )
        {
          v7 = v5 - 87;
        }
        else
        {
          if ( (unsigned __int8)(v5 - 65) > 0x19u )
            return 0;
          v7 = v5 - 55;
        }
        if ( v4 <= (unsigned int)v7 )
          return 0;
      }
      else
      {
        v7 = v5 - 48;
        if ( v4 <= (unsigned int)v7 )
          return 0;
      }
      if ( v7 > max_value || (max_value - v7) / v4 < v6 )
        return 0;
      v5 = *++M_p;
      v6 = v7 + v4 * v6;
      if ( !v5 )
        goto LABEL_18;
    }
  }
  v6 = 0LL;
LABEL_18:
  *output = v6;
  return 1;
};

// Line 2313: range 0000000014DF3530-0000000014DF353D
Json::Value_0 *__fastcall Json::Value::operator[](Json::Value_0 *const this, const Json::String *key)
{
  return (Json::Value_0 *)Json::Value::resolveReference(
                            (Json::Value *)this,
                            key->_M_dataplus._M_p,
                            &key->_M_dataplus._M_p[key->_M_string_length]);
};

// Line 2313: range 0000000014DF12B0-0000000014DF12BD
bool __fastcall Json::Value::isMember(const Json::Value_0 *const this, const Json::String *key)
{
  return Json::Value::isMember(this, key->_M_dataplus._M_p, &key->_M_dataplus._M_p[key->_M_string_length]);
};

// Line 2313: range 0000000014DF1840-0000000014DF1850
bool __fastcall Json::Value::removeMember(Json::Value_0 *const this, const Json::String *key, Json::Value_0 *removed)
{
  return Json::Value::removeMember(
           (Json::Value *)this,
           key->_M_dataplus._M_p,
           &key->_M_dataplus._M_p[key->_M_string_length],
           (Json::Value *)removed);
};

// Line 2313: range 000000000C70D380-000000000C70D3B1
size_t __fastcall google::protobuf::internal::StringSpaceUsedExcludingSelfLong(const std::string *str)
{
  const std::string *M_p; // rax
  size_t v2; // r8

  M_p = (const std::string *)str->_M_dataplus._M_p;
  if ( str->_M_dataplus._M_p < (std::string::pointer)&str[1] )
  {
    v2 = 0LL;
    if ( str <= M_p )
      return v2;
  }
  if ( M_p != (const std::string *)&str->_anon_0 )
    return str->_anon_0._M_allocated_capacity;
  return 15LL;
};

// Line 6057: range 000000000CE4751C-000000000CE4757F
std::string *__cdecl std::operator+<char>(std::string *retstr, const std::string *__lhs, const char *__rhs)
{
  std::string::basic_string(retstr, __lhs);
  std::string::append(retstr, __rhs);
  return retstr;
};

// Line 6085: range 000000000C71E150-000000000C71E1BB
std::string *__fastcall std::operator+<char>(std::string *retstr, std::string *__lhs, const std::string *__rhs)
{
  __int64 v3; // rax
  std::string::size_type v4; // rcx

  v3 = std::string::_M_append(__lhs, __rhs->_M_dataplus._M_p, __rhs->_M_string_length);
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( *(_QWORD *)v3 == v3 + 16 )
  {
    retstr->_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v3 + 16));
  }
  else
  {
    retstr->_M_dataplus._M_p = *(std::string::pointer *)v3;
    retstr->_anon_0._M_allocated_capacity = *(_QWORD *)(v3 + 16);
  }
  v4 = *(_QWORD *)(v3 + 8);
  *(_QWORD *)v3 = v3 + 16;
  *(_QWORD *)(v3 + 8) = 0LL;
  retstr->_M_string_length = v4;
  *(_BYTE *)(v3 + 16) = 0;
  return retstr;
};

// Line 6097: range 000000000CE47580-000000000CE47643
std::string *__cdecl std::operator+<char>(std::string *retstr, std::string *__lhs, std::string *__rhs)
{
  __int64 v3; // rbx
  std::string *v5; // rax
  std::remove_reference<std::string&>::type *v6; // rax
  unsigned __int64 __size; // [rsp+28h] [rbp-18h]

  v3 = std::string::size(__lhs);
  __size = v3 + std::string::size(__rhs);
  if ( __size > std::string::capacity(__lhs) && __size <= std::string::capacity(__rhs) )
    v5 = (std::string *)std::string::insert(__rhs, 0LL, __lhs);
  else
    v5 = (std::string *)std::string::append(__lhs, __rhs);
  v6 = std::move<std::string &>(v5);
  std::string::basic_string(retstr, v6);
  return retstr;
};

// Line 6121: range 000000000C71E0B0-000000000C71E142
std::string *__fastcall std::operator+<char>(std::string *retstr, std::string *__lhs, const char *__rhs)
{
  size_t v4; // rdx
  __int64 v5; // rax
  std::string::size_type v6; // rcx

  v4 = strlen(__rhs);
  if ( v4 > 0x3FFFFFFFFFFFFFFFLL - __lhs->_M_string_length )
    std::__throw_length_error("basic_string::append");
  v5 = std::string::_M_append(__lhs, __rhs, v4);
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( *(_QWORD *)v5 == v5 + 16 )
  {
    retstr->_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v5 + 16));
  }
  else
  {
    retstr->_M_dataplus._M_p = *(std::string::pointer *)v5;
    retstr->_anon_0._M_allocated_capacity = *(_QWORD *)(v5 + 16);
  }
  v6 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 0LL;
  retstr->_M_string_length = v6;
  *(_BYTE *)(v5 + 16) = 0;
  return retstr;
};

// Line 6149: range 000000000C6576FA-000000000C65777D
__gnu_cxx::__enable_if<true,bool>::__type __cdecl std::operator==<char>(
        const std::string *__lhs,
        const std::string *__rhs)
{
  __int64 v2; // rbx
  std::size_t v3; // r12
  const std::char_traits<char>::char_type *v4; // rbx
  const std::char_traits<char>::char_type *v5; // rax
  __gnu_cxx::__enable_if<true,bool>::__type result; // al

  v2 = std::string::size(__lhs);
  result = 0;
  if ( v2 == std::string::size(__rhs) )
  {
    v3 = std::string::size(__lhs);
    v4 = (const std::char_traits<char>::char_type *)std::string::data(__rhs);
    v5 = (const std::char_traits<char>::char_type *)std::string::data(__lhs);
    if ( !std::char_traits<char>::compare(v5, v4, v3) )
      return 1;
  }
  return result;
};

// Line 6188: range 000000000C6618A0-000000000C6618C7
bool __cdecl std::operator!=<char>(const std::string *__lhs, const std::string *__rhs)
{
  return !std::operator==<char>(__lhs, __rhs);
};

// Line 6201: range 000000000CF12FC2-000000000CF12FE9
bool __cdecl std::operator!=<char>(const char *__lhs, const std::string *__rhs)
{
  return !std::operator==<char>(__lhs, __rhs);
};

// Line 6213: range 000000000CE5919A-000000000CE591C1
bool __cdecl std::operator!=<char>(const std::string *__lhs, const char *__rhs)
{
  return !std::operator==<char>(__lhs, __rhs);
};

// Line 6226: range 000000000C6576D2-000000000C6576F9
bool __cdecl std::operator<<char>(const std::string *__lhs, const std::string *__rhs)
{
  return (unsigned int)std::string::compare(__lhs, __rhs) >> 31;
};

// Line 6302: range 000000000D484B18-000000000D484B41
bool __cdecl std::operator<=<char>(const std::string *__lhs, const std::string *__rhs)
{
  return (int)std::string::compare(__lhs, __rhs) <= 0;
};

// Line 6378: range 000000000D400118-000000000D40013D
void __cdecl std::swap<char,std::char_traits<char>,std::allocator<char>>(std::string *__lhs, std::string *__rhs)
{
  std::string::swap(__lhs);
};

// Line 6520: range 000000000C634B17-000000000C634BB9
std::string *__cdecl std::to_string(std::string *retstr, int __val)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  __gnu_cxx::__to_xstring<std::string,char>(
    retstr,
    (int (*)(char *, std::size_t, const char *, ___va_list_tag *))&vsnprintf,
    0x10uLL,
    "%d",
    (unsigned int)__val);
  return retstr;
};

// Line 6552: range 000000000C634BBA-000000000C634C5C
std::string *__cdecl std::to_string(std::string *retstr, unsigned int __val)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  __gnu_cxx::__to_xstring<std::string,char>(
    retstr,
    (int (*)(char *, std::size_t, const char *, ___va_list_tag *))&vsnprintf,
    0x10uLL,
    "%u",
    __val);
  return retstr;
};

// Line 6590: range 000000000F7755C1-000000000F77566F
std::string *__cdecl std::to_string(std::string *retstr, double __val)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  __gnu_cxx::__to_xstring<std::string,char>(
    retstr,
    (int (*)(char *, std::size_t, const char *, ___va_list_tag *))&vsnprintf,
    0x148uLL,
    "%f",
    __val);
  return retstr;
};

// Line 6734: range 000000000CDF8D24-000000000CDF8D66
std::size_t __cdecl std::hash<std::string>::operator()(
        const std::hash<std::string > *const this,
        const std::string *__s)
{
  std::size_t v2; // rbx
  const void *v3; // rax

  v2 = std::string::length(__s);
  v3 = (const void *)std::string::data(__s);
  return std::_Hash_impl::hash(v3, v2, 0xC70F6907uLL);
};

// Line 6735: range 000000000CDF8D67-000000000CDF8E74
std::string *__cdecl std::literals::string_literals::operator"" s[abi:cxx11](
        std::string *retstr,
        const char *__str,
        std::size_t __len)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::literals::string_literals::operator"" s[abi:cxx11];
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string(retstr, __str, __len, v3 + 32);
  std::allocator<char>::~allocator(v3 + 32);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
