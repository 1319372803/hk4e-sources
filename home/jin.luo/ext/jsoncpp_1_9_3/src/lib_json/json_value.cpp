// File: /home/jin.luo/ext/jsoncpp_1_9_3/src/lib_json/json_value.cpp

// Line 71: range 000000000C73A1F2-000000000C73A201
void __fastcall __noreturn Json::Value::nullSingleton()
{
  struct _Unwind_Exception *v0; // rbp

  __cxa_guard_abort(&`guard variable for'Json::Value::nullSingleton(void)::nullStatic);
  _Unwind_Resume(v0);
};

// Line 71: range 00000000152D34E0-00000000152D3558
void *__fastcall Json::Value::nullSingleton(Json::Value *this)
{
  if ( (_BYTE)`guard variable for'Json::Value::nullSingleton(void)::nullStatic )
    return &Json::Value::nullSingleton(void)::nullStatic;
  if ( __cxa_guard_acquire(&`guard variable for'Json::Value::nullSingleton(void)::nullStatic) )
  {
    Json::Value::Value(&Json::Value::nullSingleton(void)::nullStatic, 0LL);
    __cxa_guard_release(&`guard variable for'Json::Value::nullSingleton(void)::nullStatic);
    __cxa_atexit(
      (void (__fastcall *)(void *))Json::Value::~Value,
      &Json::Value::nullSingleton(void)::nullStatic,
      &_dso_handle);
  }
  return &Json::Value::nullSingleton(void)::nullStatic;
};

// Line 203: range 00000000152D1AB0-00000000152D1B09
void __fastcall Json::Exception::Exception(Json::Exception *const this, __int64 a2)
{
  char *v2; // rdx
  std::string::size_type v3; // rdx

  v2 = *(char **)a2;
  *(_QWORD *)this->baseclass_0 = &`vtable for'Json::Exception + 2;
  this->msg_._M_dataplus._M_p = this->msg_._anon_0._M_local_buf;
  if ( v2 == (char *)(a2 + 16) )
  {
    this->msg_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(a2 + 16));
  }
  else
  {
    this->msg_._M_dataplus._M_p = v2;
    this->msg_._anon_0._M_allocated_capacity = *(_QWORD *)(a2 + 16);
  }
  v3 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = a2 + 16;
  *(_QWORD *)(a2 + 8) = 0LL;
  this->msg_._M_string_length = v3;
  *(_BYTE *)(a2 + 16) = 0;
};

// Line 205: range 00000000152D17F0-00000000152D17F4
const char *__fastcall Json::Exception::what(const Json::Exception *const this)
{
  return this->msg_._M_dataplus._M_p;
};

// Line 206: range 00000000152D1B10-00000000152D1C19
__int64 *__fastcall Json::RuntimeError::RuntimeError(Json::Exception *this, __int64 a2)
{
  _BYTE *v3; // r13
  unsigned __int64 v4; // r12
  _BYTE *v5; // rax
  __int64 *v6; // rax
  __int64 *result; // rax
  __int64 *v8; // rdi
  char *v9; // [rsp+8h] [rbp-50h] BYREF
  void *v10[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_BYTE **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_BYTE **)a2;
  v10[0] = v11;
  if ( &v5[v4] && !v3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v9 = (char *)v4;
  if ( v4 > 0xF )
  {
    v10[0] = (void *)std::string::_M_create(v10, &v9, 0LL);
    v8 = (__int64 *)v10[0];
    v11[0] = (__int64)v9;
  }
  else
  {
    if ( v4 == 1 )
    {
      LOBYTE(v11[0]) = *v3;
      v6 = v11;
      goto LABEL_6;
    }
    if ( !v4 )
    {
      v6 = v11;
      goto LABEL_6;
    }
    v8 = v11;
  }
  memcpy(v8, v3, v4);
  v4 = (unsigned __int64)v9;
  v6 = (__int64 *)v10[0];
LABEL_6:
  v10[1] = (void *)v4;
  *((_BYTE *)v6 + v4) = 0;
  Json::Exception::Exception(this, (__int64)v10);
  if ( v10[0] != v11 )
    operator delete(v10[0]);
  result = &`vtable for'Json::RuntimeError + 2;
  *(_QWORD *)this->baseclass_0 = &`vtable for'Json::RuntimeError + 2;
  return result;
};

// Line 207: range 00000000152D1C20-00000000152D1D29
__int64 *__fastcall Json::LogicError::LogicError(Json::Exception *this, __int64 a2)
{
  _BYTE *v3; // r13
  unsigned __int64 v4; // r12
  _BYTE *v5; // rax
  __int64 *v6; // rax
  __int64 *result; // rax
  __int64 *v8; // rdi
  char *v9; // [rsp+8h] [rbp-50h] BYREF
  void *v10[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_BYTE **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_BYTE **)a2;
  v10[0] = v11;
  if ( &v5[v4] && !v3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v9 = (char *)v4;
  if ( v4 > 0xF )
  {
    v10[0] = (void *)std::string::_M_create(v10, &v9, 0LL);
    v8 = (__int64 *)v10[0];
    v11[0] = (__int64)v9;
  }
  else
  {
    if ( v4 == 1 )
    {
      LOBYTE(v11[0]) = *v3;
      v6 = v11;
      goto LABEL_6;
    }
    if ( !v4 )
    {
      v6 = v11;
      goto LABEL_6;
    }
    v8 = v11;
  }
  memcpy(v8, v3, v4);
  v4 = (unsigned __int64)v9;
  v6 = (__int64 *)v10[0];
LABEL_6:
  v10[1] = (void *)v4;
  *((_BYTE *)v6 + v4) = 0;
  Json::Exception::Exception(this, (__int64)v10);
  if ( v10[0] != v11 )
    operator delete(v10[0]);
  result = &`vtable for'Json::LogicError + 2;
  *(_QWORD *)this->baseclass_0 = &`vtable for'Json::LogicError + 2;
  return result;
};

// Line 208: range 000000000C739FE3-000000000C73A026
void __fastcall __noreturn Json::throwRuntimeError(const Json::String *msg)
{
  Json::Exception *exception; // rbp

  exception = (Json::Exception *)__cxa_allocate_exception(0x28uLL);
  Json::RuntimeError::RuntimeError(exception, (__int64)msg);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'Json::RuntimeError,
    (void (__fastcall *)(void *))Json::RuntimeError::~RuntimeError);
};

// Line 211: range 000000000C73A047-000000000C73A08A
void __fastcall __noreturn Json::throwLogicError(const Json::String *msg)
{
  Json::Exception *exception; // rbp

  exception = (Json::Exception *)__cxa_allocate_exception(0x28uLL);
  Json::LogicError::LogicError(exception, (__int64)msg);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'Json::LogicError,
    (void (__fastcall *)(void *))Json::LogicError::~LogicError);
};

// Line 236: range 00000000152D1D80-00000000152D1D8A
void __fastcall Json::Value::CZString::CZString(Json::Value_0::CZString *const this, Json::Value_0::ArrayIndex index)
{
  this->cstr_ = 0LL;
  this->_anon_0.index_ = index;
};

// Line 242: range 00000000152D1D90-00000000152D1D9E
void __fastcall Json::Value::CZString::CZString(
        Json::Value_0::CZString *const this,
        const char *str,
        unsigned int length,
        Json::Value_0::CZString::DuplicationPolicy allocate)
{
  this->cstr_ = str;
  this->_anon_0.index_ = allocate & 3 | (4 * length);
};

// Line 246: range 00000000152D1DA0-00000000152D1E63
__int64 __fastcall Json::Value::CZString::CZString(Json::Value::CZString *this, const Json::Value::CZString *a2)
{
  char index; // al
  const char *cstr; // r12
  Json::Value::ArrayIndex v4; // ebp
  char v5; // r13
  void *v6; // rax
  const std::allocator<char> *v7; // rdx
  const char *v8; // rax
  char v9; // dl
  __int64 result; // rax
  std::string v11[2]; // [rsp+0h] [rbp-48h] BYREF

  index = a2->_anon_0.index_;
  cstr = a2->cstr_;
  v4 = a2->_anon_0.index_ >> 2;
  v5 = index & 3;
  if ( (index & 3) != 0 )
  {
    if ( cstr )
    {
      v6 = malloc(v4 + 1LL);
      if ( !v6 )
      {
        std::string::basic_string(
          v11,
          "in Json::Value::duplicateStringValue(): Failed to allocate string value buffer",
          v7);
        Json::throwRuntimeError(v11);
      }
      v8 = (const char *)memcpy(v6, cstr, v4);
      v8[v4] = 0;
      this->cstr_ = v8;
      goto LABEL_5;
    }
    this->cstr_ = 0LL;
LABEL_10:
    v9 = index & 3;
    goto LABEL_6;
  }
  this->cstr_ = cstr;
  if ( !cstr )
    goto LABEL_10;
LABEL_5:
  v9 = v5 != 0;
LABEL_6:
  LOBYTE(this->_anon_0.index_) = v9 | this->_anon_0.index_ & 0xFC;
  result = 4 * v4;
  this->_anon_0.index_ = result | this->_anon_0.index_ & 3;
  return result;
};

// Line 263: range 00000000152D1E70-00000000152D1E83
void __fastcall Json::Value::CZString::CZString(Json::Value_0::CZString *const this, Json::Value_0::CZString *other)
{
  const char *cstr; // rax

  cstr = other->cstr_;
  other->cstr_ = 0LL;
  this->cstr_ = cstr;
  this->_anon_0.index_ = other->_anon_0.index_;
};

// Line 268: range 00000000152D1E90-00000000152D1EAB
void __fastcall Json::Value::CZString::~CZString(Json::Value_0::CZString *const this)
{
  if ( this->cstr_ )
  {
    if ( (this->_anon_0.index_ & 3) == 1 )
      free((void *)this->cstr_);
  }
};

// Line 283: range 00000000152D1ED0-00000000152D1EDF
Json::Value_0::CZString *__fastcall Json::Value::CZString::operator=(
        Json::Value_0::CZString *const this,
        const Json::Value_0::CZString *other)
{
  Json::Value_0::CZString *result; // rax

  result = this;
  *this = *other;
  return result;
};

// Line 289: range 00000000152D1EE0-00000000152D1EF6
Json::Value_0::CZString *__fastcall Json::Value::CZString::operator=(
        Json::Value_0::CZString *const this,
        Json::Value_0::CZString *other)
{
  Json::Value_0::CZString *result; // rax

  result = this;
  *this = *other;
  other->cstr_ = 0LL;
  return result;
};

// Line 296: range 00000000152D1F00-00000000152D1F7F
bool __fastcall Json::Value::CZString::operator<(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  const void *v3; // rsi
  unsigned int v4; // ebp
  unsigned int v5; // ebx
  size_t v6; // rdx
  int v7; // r8d
  bool result; // al
  std::string v9; // [rsp-38h] [rbp-38h] BYREF

  if ( !*(_QWORD *)a1 )
    return *(_DWORD *)(a1 + 8) < *(_DWORD *)(a2 + 8);
  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(const void **)a2;
  v4 = *(_DWORD *)(a1 + 8) >> 2;
  v5 = v2 >> 2;
  v6 = v5;
  if ( v4 <= v5 )
    v6 = *(_DWORD *)(a1 + 8) >> 2;
  if ( !v3 )
  {
    std::string::basic_string(&v9, "assert json failed", (const std::allocator<char> *)v6);
    Json::throwLogicError(&v9);
  }
  v7 = memcmp(*(const void **)a1, v3, v6);
  result = 1;
  if ( v7 >= 0 )
  {
    result = 0;
    if ( !v7 )
      return v4 < v5;
  }
  return result;
};

// Line 313: range 00000000152D1F90-00000000152D1FFF
bool __fastcall Json::Value::CZString::operator==(__int64 a1, __int64 a2)
{
  size_t v2; // rdx
  const void *v3; // rsi
  std::string v5; // [rsp-28h] [rbp-28h] BYREF

  if ( !*(_QWORD *)a1 )
    return *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8);
  v2 = *(_DWORD *)(a1 + 8) >> 2;
  if ( (_DWORD)v2 != *(_DWORD *)(a2 + 8) >> 2 )
    return 0;
  v3 = *(const void **)a2;
  if ( !v3 )
  {
    std::string::basic_string(&v5, "assert json failed", (const std::allocator<char> *)v2);
    Json::throwLogicError(&v5);
  }
  return memcmp(*(const void **)a1, v3, v2) == 0;
};

// Line 326: range 00000000152D2010-00000000152D2013
Json::Value_0::ArrayIndex __fastcall Json::Value::CZString::index(const Json::Value_0::CZString *const this)
{
  return this->_anon_0.index_;
};

// Line 329: range 00000000152D2020-00000000152D2023
const char *__fastcall Json::Value::CZString::data(const Json::Value_0::CZString *const this)
{
  return this->cstr_;
};

// Line 330: range 00000000152D20C0-00000000152D20C6
unsigned int __fastcall Json::Value::CZString::length(const Json::Value_0::CZString *const this)
{
  return this->_anon_0.index_ >> 2;
};

// Line 332: range 00000000152D2200-00000000152D2207
bool __fastcall Json::Value::CZString::isStaticString(const Json::Value_0::CZString *const this)
{
  return (this->_anon_0.index_ & 3) == 0;
};

// Line 347: range 00000000152D3420-00000000152D34DA
_DWORD *__fastcall Json::Value::Value(Json::Value *a1, Json::ValueType a2)
{
  _DWORD *result; // rax

  a1->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  result = (_DWORD *)Json::Value::initBasic(a1, a2, 0);
  switch ( a2 )
  {
    case nullValue:
      return result;
    case intValue:
    case uintValue:
      a1->value_.int_ = 0LL;
      break;
    case realValue:
      a1->value_.int_ = 0LL;
      break;
    case stringValue:
      result = &Json::Value::Value(Json::ValueType)::emptyString;
      a1->value_.int_ = (Json::Value::LargestInt)&Json::Value::Value(Json::ValueType)::emptyString;
      break;
    case booleanValue:
      a1->value_.bool_ = 0;
      break;
    case arrayValue:
    case objectValue:
      result = (_DWORD *)operator new(0x30uLL);
      result[2] = 0;
      *((_QWORD *)result + 2) = 0LL;
      *((_QWORD *)result + 3) = result + 2;
      *((_QWORD *)result + 4) = result + 2;
      *((_QWORD *)result + 5) = 0LL;
      a1->value_.int_ = (Json::Value::LargestInt)result;
      break;
    default:
      __assert_fail("false", "src/lib_json/json_value.cpp", 0x174u, "Json::Value::Value(Json::ValueType)");
  }
  return result;
};

// Line 376: range 00000000152D3560-00000000152D358D
__int64 __fastcall Json::Value::Value(Json::Value *this, int a2)
{
  __int64 result; // rax

  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  result = Json::Value::initBasic(this, intValue, 0);
  this->value_.int_ = a2;
  return result;
};

// Line 381: range 00000000152D35A0-00000000152D35CE
__int64 __fastcall Json::Value::Value(Json::Value *this, unsigned int a2)
{
  __int64 result; // rax

  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  Json::Value::initBasic(this, uintValue, 0);
  result = a2;
  this->value_.int_ = a2;
  return result;
};

// Line 386: range 00000000152D35E0-00000000152D360D
__int64 __fastcall Json::Value::Value(Json::Value *this, Json::Value::ValueHolder a2)
{
  __int64 result; // rax

  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  result = Json::Value::initBasic(this, intValue, 0);
  this->value_ = a2;
  return result;
};

// Line 390: range 00000000152D3620-00000000152D364D
__int64 __fastcall Json::Value::Value(Json::Value *this, Json::Value::ValueHolder a2)
{
  __int64 result; // rax

  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  result = Json::Value::initBasic(this, uintValue, 0);
  this->value_ = a2;
  return result;
};

// Line 396: range 00000000152D3660-00000000152D3697
__int64 __fastcall Json::Value::Value(Json::Value *this, double a2)
{
  __int64 result; // rax

  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  result = Json::Value::initBasic(this, realValue, 0);
  this->value_.real_ = a2;
  return result;
};

// Line 401: range 00000000152D5AD0-00000000152D5C06
void *__fastcall Json::Value::Value(Json::Value *this, const char *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r13d
  size_t v4; // r14
  _DWORD *v5; // rax
  const std::allocator<char> *v6; // rdx
  Json::Value::ValueHolder v7; // rbx
  void *result; // rax
  Json::String v9; // [rsp+0h] [rbp-1C8h] BYREF
  std::string msg; // [rsp+20h] [rbp-1A8h] BYREF

  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  Json::Value::initBasic(this, stringValue, 1);
  if ( !a2 )
  {
    std::ostringstream::basic_ostringstream(&msg);
    std::operator<<<std::char_traits<char>>(&msg, "Null Value Passed to Value Constructor");
    std::stringbuf::str(&v9, &msg._M_string_length);
    Json::throwLogicError(&v9);
  }
  v2 = strlen(a2);
  v3 = v2;
  if ( v2 > 0x7FFFFFFA )
  {
    std::ostringstream::basic_ostringstream(&msg);
    std::operator<<<std::char_traits<char>>(
      &msg,
      "in Json::Value::duplicateAndPrefixStringValue(): length too big for prefixing");
    std::stringbuf::str(&v9, &msg._M_string_length);
    Json::throwLogicError(&v9);
  }
  v4 = v2;
  v5 = malloc(v2 + 5LL);
  v7.int_ = (Json::Value::LargestInt)v5;
  if ( !v5 )
  {
    std::string::basic_string(
      &msg,
      "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer",
      v6);
    Json::throwRuntimeError(&msg);
  }
  *v5 = v3;
  result = memcpy(v5 + 1, a2, v4);
  *(_BYTE *)(v7.int_ + v4 + 4) = 0;
  this->value_ = v7;
  return result;
};

// Line 409: range 00000000152D3E80-00000000152D3EBD
Json::Value::ValueHolder __fastcall Json::Value::Value(Json::Value *this, Json *a2, const char *a3)
{
  unsigned int v4; // edx
  Json::Value::ValueHolder result; // rax

  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  Json::Value::initBasic(this, stringValue, 1);
  result.int_ = Json::duplicateAndPrefixStringValue(a2, a3 - (const char *)a2, v4);
  this->value_ = result;
  return result;
};

// Line 415: range 00000000152D3F90-00000000152D3FCC
__int64 __fastcall Json::Value::Value(Json::Value *a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 result; // rax

  a1->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  Json::Value::initBasic(a1, stringValue, 1);
  result = Json::duplicateAndPrefixStringValue(*(Json **)a2, *(unsigned int *)(a2 + 8), v2);
  a1->value_.int_ = result;
  return result;
};

// Line 421: range 00000000152D36A0-00000000152D36D1
const char *__fastcall Json::Value::Value(Json::Value *this, const Json::StaticString *a2)
{
  const char *result; // rax

  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  Json::Value::initBasic(this, stringValue, 0);
  result = a2->c_str_;
  this->value_.int_ = (Json::Value::LargestInt)a2->c_str_;
  return result;
};

// Line 426: range 00000000152D36E0-00000000152D370C
__int64 __fastcall Json::Value::Value(Json::Value *this, bool a2)
{
  __int64 result; // rax

  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  result = Json::Value::initBasic(this, booleanValue, 0);
  this->value_.bool_ = a2;
  return result;
};

// Line 431: range 00000000152D6D70-00000000152D6D9E
void __fastcall Json::Value::Value(Json::Value *this, const Json::Value *other)
{
  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  Json::Value::dupPayload(this, other);
  Json::Value::dupMeta((Json::Value_0 *const)this, (const Json::Value_0 *)other);
};

// Line 436: range 00000000152D3720-00000000152D3752
__int64 __fastcall Json::Value::Value(Json::Value *this, Json::Value *a2)
{
  this->comments_.ptr_._M_t._M_t._M_head_impl = 0LL;
  Json::Value::initBasic(this, nullValue, 0);
  return Json::Value::swap(this, a2);
};

// Line 441: range 00000000152D5CF0-00000000152D5D56
void __fastcall Json::Value::~Value(Json::Value_0 *const this)
{
  std::array<std::string,3> *M_head_impl; // rbp
  void **v2; // rbx

  Json::Value::releasePayload(this);
  M_head_impl = this->comments_.ptr_._M_t._M_t._M_head_impl;
  this->value_.int_ = 0LL;
  if ( M_head_impl )
  {
    v2 = (void **)&M_head_impl[1];
    do
    {
      while ( 1 )
      {
        v2 -= 4;
        if ( *v2 == v2 + 2 )
          break;
        operator delete(*v2);
        if ( M_head_impl == (std::array<std::string,3> *)v2 )
          goto LABEL_5;
      }
    }
    while ( M_head_impl != (std::array<std::string,3> *)v2 );
LABEL_5:
    operator delete(M_head_impl, 0x60uLL);
  }
};

// Line 446: range 00000000152D6DB0-00000000152D6DE6
Json::Value *__fastcall Json::Value::operator=(Json::Value *a1, const Json::Value *a2)
{
  _BYTE savedregs[72]; // [rsp+0h] [rbp+0h] BYREF

  Json::Value::Value((Json::Value *)savedregs, a2);
  Json::Value::swap((Json::Value *)savedregs, a1);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  return a1;
};

// Line 447: range 000000000C73A9FA-000000000C73AA05
void __fastcall __noreturn Json::Value::operator=()
{
  Json::Value_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::~Value(v0);
  _Unwind_Resume(v1);
};

// Line 451: range 00000000152D3370-00000000152D3385
Json::Value_0 *__fastcall Json::Value::operator=(Json::Value_0 *const this, Json::Value_0 *other)
{
  Json::Value::swap((Json::Value *)other, (Json::Value *)this);
  return this;
};

// Line 461: range 00000000152D7C70-00000000152D7C8F
void __fastcall Json::Value::copyPayload(Json::Value_0 *const this, const Json::Value_0 *other)
{
  Json::Value::releasePayload(this);
  Json::Value::dupPayload((Json::Value *)this, (const Json::Value *)other);
};

// Line 466: range 00000000152D32B0-00000000152D336A
__int64 __fastcall Json::Value::swap(Json::Value *this, Json::Value_0 *a2)
{
  std::array<std::string,3> *M_head_impl; // r13
  std::array<std::string,3> *v3; // r12
  ptrdiff_t start; // rax
  ptrdiff_t limit; // rdx
  __int64 result; // rax
  Json::Value::Comments that; // [rsp+8h] [rbp-30h] BYREF

  Json::Value::swapPayload((Json::Value_0 *const)this, a2);
  Json::Value::Comments::Comments(&that, &this->comments_);
  Json::Value::Comments::operator=(&this->comments_, &a2->comments_);
  Json::Value::Comments::operator=(&a2->comments_, &that);
  M_head_impl = that.ptr_._M_t._M_t._M_head_impl;
  if ( that.ptr_._M_t._M_t._M_head_impl )
  {
    v3 = that.ptr_._M_t._M_t._M_head_impl + 1;
    do
    {
      while ( 1 )
      {
        v3 = (std::array<std::string,3> *)((char *)v3 - 32);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v3->_M_elems[0]._M_dataplus._M_p == &v3->_M_elems[0]._anon_0 )
          break;
        operator delete(v3->_M_elems[0]._M_dataplus._M_p);
        if ( M_head_impl == v3 )
          goto LABEL_5;
      }
    }
    while ( M_head_impl != v3 );
LABEL_5:
    operator delete(M_head_impl, 0x60uLL);
  }
  start = this->start_;
  this->start_ = a2->start_;
  limit = a2->limit_;
  a2->start_ = start;
  result = this->limit_;
  this->limit_ = limit;
  a2->limit_ = result;
  return result;
};

// Line 473: range 00000000152D7CA0-00000000152D7CBF
void __fastcall Json::Value::copy(Json::Value_0 *const this, const Json::Value_0 *other)
{
  Json::Value::copyPayload(this, other);
  Json::Value::dupMeta(this, other);
};

// Line 479: range 00000000152D2230-00000000152D2234
Json::ValueType __fastcall Json::Value::type(const Json::Value_0 *const this)
{
  return (Json::ValueType)this->bits_;
};

// Line 482: range 00000000152D2540-00000000152D2574
int __fastcall Json::Value::compare(const Json::Value_0 *const this, const Json::Value_0 *other)
{
  bool v2; // r8
  int result; // eax

  v2 = Json::Value::operator<(this, other);
  result = -1;
  if ( !v2 )
    return Json::Value::operator>(this, other);
  return result;
};

// Line 490: range 00000000152D2240-00000000152D24E5
bool __fastcall Json::Value::operator<(const Json::Value_0 *const this, const Json::Value_0 *other)
{
  Json::ValueType v2; // ebx
  int v3; // ebx
  bool result; // al
  Json::Value::ValueHolder v5; // rdx
  Json::Value::ValueHolder v6; // rax
  unsigned __int64 v7; // rcx
  unsigned int *v8; // r14
  const char *v9; // r13
  unsigned int v10; // ebx
  size_t v11; // rbp
  size_t v12; // rdx
  int v13; // r8d
  __int64 v14; // rbp
  Json::Value::LargestInt v15; // rbx
  __int64 v16; // r12
  Json::Value::LargestInt v17; // r15

  v2 = Json::Value::type(this);
  v3 = v2 - Json::Value::type(other);
  if ( v3 )
    return v3 < 0;
  switch ( Json::Value::type(this) )
  {
    case nullValue:
      return 0;
    case intValue:
      return this->value_.int_ < other->value_.int_;
    case uintValue:
      return this->value_.int_ < (unsigned __int64)other->value_.int_;
    case realValue:
      return other->value_.real_ > this->value_.real_;
    case stringValue:
      v8 = (unsigned int *)this->value_.int_;
      v9 = (const char *)other->value_.int_;
      if ( !this->value_.int_ || !v9 )
        return v9 != 0LL;
      if ( (*((_BYTE *)&this->bits_ + 1) & 1) != 0 )
        v10 = *v8++;
      else
        v10 = strlen(this->value_.string_);
      if ( (*((_BYTE *)&other->bits_ + 1) & 1) != 0 )
      {
        v11 = *(unsigned int *)v9;
        v9 += 4;
      }
      else
      {
        v11 = (unsigned int)strlen(v9);
      }
      v12 = v10;
      if ( (unsigned int)v11 <= v10 )
        v12 = v11;
      v13 = memcmp(v8, v9, v12);
      result = 1;
      if ( v13 >= 0 )
      {
        result = 0;
        if ( !v13 )
          return (unsigned int)v11 > v10;
      }
      return result;
    case booleanValue:
      return this->value_.bool_ < (unsigned int)other->value_.bool_;
    case arrayValue:
    case objectValue:
      v5.int_ = (Json::Value::LargestInt)other->value_;
      v6.int_ = (Json::Value::LargestInt)this->value_;
      v7 = *(_QWORD *)(other->value_.int_ + 40);
      if ( *(_QWORD *)(this->value_.int_ + 40) == v7 )
      {
        v14 = *(_QWORD *)(v6.int_ + 24);
        v15 = v6.int_ + 8;
        v16 = *(_QWORD *)(v5.int_ + 24);
        v17 = v5.int_ + 8;
        if ( v6.int_ + 8 == v14 )
        {
LABEL_33:
          result = v17 != v16;
        }
        else
        {
          while ( 1 )
          {
            if ( v17 == v16 )
              return 0;
            if ( Json::Value::CZString::operator<(v14 + 32, v16 + 32)
              || !Json::Value::CZString::operator<(v16 + 32, v14 + 32)
              && Json::Value::operator<((const Json::Value_0 *const)(v14 + 48), (const Json::Value_0 *)(v16 + 48)) )
            {
              break;
            }
            if ( Json::Value::CZString::operator<(v16 + 32, v14 + 32)
              || !Json::Value::CZString::operator<(v14 + 32, v16 + 32)
              && Json::Value::operator<((const Json::Value_0 *const)(v16 + 48), (const Json::Value_0 *)(v14 + 48)) )
            {
              return 0;
            }
            v14 = std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v14);
            v16 = std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v16);
            if ( v15 == v14 )
              goto LABEL_33;
          }
          result = 1;
        }
      }
      else
      {
        result = *(_QWORD *)(this->value_.int_ + 40) < v7;
      }
      break;
    default:
      __assert_fail(
        "false",
        "src/lib_json/json_value.cpp",
        0x217u,
        "bool Json::Value::operator<(const Json::Value&) const");
  }
  return result;
};

// Line 540: range 00000000152D24F0-00000000152D2509
bool __fastcall Json::Value::operator<=(const Json::Value_0 *const this, const Json::Value_0 *other)
{
  return !Json::Value::operator<(other, this);
};

// Line 542: range 00000000152D2510-00000000152D2520
bool __fastcall Json::Value::operator>=(const Json::Value_0 *const this, const Json::Value_0 *other)
{
  return !Json::Value::operator<(this, other);
};

// Line 544: range 00000000152D2530-00000000152D2539
bool __fastcall Json::Value::operator>(const Json::Value_0 *const this, const Json::Value_0 *other)
{
  return Json::Value::operator<(other, this);
};

// Line 546: range 00000000152D2580-00000000152D2755
bool __fastcall Json::Value::operator==(const Json::Value_0 *const this, const Json::Value_0 *other)
{
  Json::ValueType v2; // r12d
  Json::Value::ValueHolder v4; // rax
  __int64 v5; // rbp
  Json::Value::LargestInt v6; // rbx
  __int64 v7; // r12
  const char *v8; // r12
  const char *v9; // r13
  unsigned int v10; // ebx
  int v11; // eax

  v2 = Json::Value::type(this);
  if ( v2 == Json::Value::type(other) )
  {
    switch ( Json::Value::type(this) )
    {
      case nullValue:
        return 1;
      case intValue:
      case uintValue:
        return this->value_.int_ == other->value_.int_;
      case realValue:
        return this->value_.real_ == other->value_.real_;
      case stringValue:
        v8 = (const char *)this->value_.int_;
        v9 = (const char *)other->value_.int_;
        if ( !this->value_.int_ || !v9 )
          return v9 == v8;
        if ( (*((_BYTE *)&this->bits_ + 1) & 1) != 0 )
        {
          v10 = *(_DWORD *)v8;
          v8 += 4;
        }
        else
        {
          v10 = strlen(this->value_.string_);
        }
        if ( (*((_BYTE *)&other->bits_ + 1) & 1) != 0 )
        {
          v11 = *(_DWORD *)v9;
          v9 += 4;
        }
        else
        {
          v11 = strlen(v9);
        }
        if ( v10 == v11 )
          return memcmp(v8, v9, v10) == 0;
        return 0;
      case booleanValue:
        return this->value_.bool_ == other->value_.bool_;
      case arrayValue:
      case objectValue:
        v4.int_ = (Json::Value::LargestInt)this->value_;
        if ( *(_QWORD *)(this->value_.int_ + 40) != *(_QWORD *)(other->value_.int_ + 40) )
          return 0;
        v5 = *(_QWORD *)(v4.int_ + 24);
        v6 = v4.int_ + 8;
        v7 = *(_QWORD *)(other->value_.int_ + 24);
        if ( v4.int_ + 8 == v5 )
          return 1;
        break;
      default:
        __assert_fail(
          "false",
          "src/lib_json/json_value.cpp",
          0x247u,
          "bool Json::Value::operator==(const Json::Value&) const");
    }
    while ( Json::Value::CZString::operator==(v5 + 32, v7 + 32)
         && Json::Value::operator==((const Json::Value_0 *const)(v5 + 48), (const Json::Value_0 *)(v7 + 48)) )
    {
      v5 = std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v5);
      v7 = std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v7);
      if ( v6 == v5 )
        return 1;
    }
  }
  return 0;
};

// Line 588: range 00000000152D2760-00000000152D2770
bool __fastcall Json::Value::operator!=(const Json::Value_0 *const this, const Json::Value_0 *other)
{
  return !Json::Value::operator==(this, other);
};

// Line 590: range 00000000152D3FE0-00000000152D4057
Json::Value::ValueHolder __fastcall Json::Value::asCString(Json::Value *this)
{
  Json::Value::ValueHolder result; // rax
  Json::String v2; // [rsp+0h] [rbp-1B8h] BYREF
  char v3[8]; // [rsp+20h] [rbp-198h] BYREF
  char v4[400]; // [rsp+28h] [rbp-190h] BYREF

  if ( Json::Value::type((const Json::Value_0 *const)this) != stringValue )
  {
    std::ostringstream::basic_ostringstream(v3);
    std::operator<<<std::char_traits<char>>(v3, "in Json::Value::asCString(): requires stringValue");
    std::stringbuf::str(&v2, v4);
    Json::throwLogicError(&v2);
  }
  result.int_ = (Json::Value::LargestInt)this->value_;
  if ( this->value_.int_ )
  {
    if ( (*((_BYTE *)&this->bits_ + 1) & 1) != 0 )
      result.int_ += 4LL;
  }
  return result;
};

// Line 616: range 00000000152D2780-00000000152D27E7
bool __fastcall Json::Value::getString(const Json::Value_0 *const this, const char **begin, const char **end)
{
  Json::ValueType v4; // r8d
  bool result; // al
  const char *v6; // rbp
  int v7; // eax
  const char *v8; // rbp

  v4 = Json::Value::type(this);
  result = 0;
  if ( v4 == stringValue )
  {
    v6 = (const char *)this->value_.int_;
    if ( this->value_.int_ )
    {
      if ( (*((_BYTE *)&this->bits_ + 1) & 1) != 0 )
      {
        v7 = *(_DWORD *)v6;
        v6 += 4;
      }
      else
      {
        v7 = strlen(this->value_.string_);
      }
      *begin = v6;
      v8 = &v6[v7];
      result = 1;
      *end = v8;
    }
  }
  return result;
};

// Line 628: range 00000000152D4060-00000000152D4277
Json::String *__fastcall Json::Value::asString[abi:cxx11](Json::String *retstr, Json::Value_0 *this)
{
  char *v2; // r14
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rbp
  std::string::size_type v4; // r13
  bool v5; // zf
  const char *v6; // rbx
  std::string::size_type v7; // rax
  unsigned int i; // edx
  __int64 v9; // rcx
  Json::String *result; // rax
  char *v11; // rax
  Json::String v12; // [rsp+0h] [rbp-1C8h] BYREF
  std::string::size_type v13; // [rsp+20h] [rbp-1A8h] BYREF
  char v14[416]; // [rsp+28h] [rbp-1A0h] BYREF

  switch ( Json::Value::type(this) )
  {
    case nullValue:
      retstr->_anon_0._M_local_buf[0] = 0;
      retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
      retstr->_M_string_length = 0LL;
      return retstr;
    case intValue:
      Json::valueToString[abi:cxx11](retstr, this->value_.int_);
      return retstr;
    case uintValue:
      Json::valueToString[abi:cxx11](retstr, this->value_.int_);
      return retstr;
    case realValue:
      Json::valueToString[abi:cxx11](retstr, 17LL, 0LL, this->value_.real_);
      return retstr;
    case stringValue:
      v2 = (char *)this->value_.int_;
      p_anon_0 = &retstr->_anon_0;
      if ( this->value_.int_ )
      {
        if ( (*((_BYTE *)&this->bits_ + 1) & 1) != 0 )
        {
          v4 = *(unsigned int *)v2;
          v2 += 4;
        }
        else
        {
          v4 = (unsigned int)strlen(this->value_.string_);
        }
        retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
        v13 = v4;
        if ( v4 > 0xF )
        {
          v11 = (char *)std::string::_M_create(retstr, &v13, 0LL);
          retstr->_M_dataplus._M_p = v11;
          p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11;
          retstr->_anon_0._M_allocated_capacity = v13;
        }
        else
        {
          if ( v4 == 1 )
          {
            retstr->_anon_0._M_local_buf[0] = *v2;
LABEL_8:
            retstr->_M_string_length = v4;
            p_anon_0->_M_local_buf[v4] = 0;
            return retstr;
          }
          if ( !v4 )
            goto LABEL_8;
        }
        memcpy(p_anon_0, v2, v4);
        v4 = v13;
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
        goto LABEL_8;
      }
      retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
      retstr->_M_string_length = 0LL;
      retstr->_anon_0._M_local_buf[0] = 0;
      return retstr;
    case booleanValue:
      v5 = !this->value_.bool_;
      v6 = "true";
      retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
      if ( v5 )
        v6 = "false";
      v7 = strlen(v6);
      for ( i = 0; i < (unsigned int)v7; retstr->_anon_0._M_local_buf[v9] = v6[v9] )
        v9 = i++;
      retstr->_M_string_length = v7;
      retstr->_anon_0._M_local_buf[v7] = 0;
      return retstr;
    default:
      std::ostringstream::basic_ostringstream(&v13);
      std::operator<<<std::char_traits<char>>(&v13, "Type is not convertible to string");
      std::stringbuf::str(&v12, v14);
      Json::throwLogicError(&v12);
      return result;
  }
};

// Line 654: range 00000000152D4280-00000000152D45BD
__int64 __fastcall Json::Value::asInt(Json::Value *this)
{
  __int64 result; // rax
  double real; // xmm0_8
  __int64 v3; // r13
  __int64 v4; // rdi
  _QWORD *v5; // rdi
  Json::String v6; // [rsp+0h] [rbp-1D8h] BYREF
  __int128 v7[2]; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v8; // [rsp+40h] [rbp-198h]
  __int128 v9; // [rsp+50h] [rbp-188h]
  std::locale v10; // [rsp+60h] [rbp-178h] BYREF
  int v11; // [rsp+68h] [rbp-170h]
  __int64 v12[2]; // [rsp+70h] [rbp-168h] BYREF
  char v13; // [rsp+80h] [rbp-158h] BYREF
  __int64 v14[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v15; // [rsp+170h] [rbp-68h]
  __int128 v16; // [rsp+178h] [rbp-60h]
  __int128 v17; // [rsp+188h] [rbp-50h]

  switch ( Json::Value::type((const Json::Value_0 *const)this) )
  {
    case nullValue:
      return 0LL;
    case intValue:
      if ( !Json::Value::isInt((const Json::Value_0 *const)this) )
      {
        std::ostringstream::basic_ostringstream(v7);
        std::operator<<<std::char_traits<char>>(v7, "LargestInt out of Int range");
        std::stringbuf::str(&v6, (char *)v7 + 8);
        Json::throwLogicError(&v6);
      }
      goto LABEL_5;
    case uintValue:
      if ( !Json::Value::isInt((const Json::Value_0 *const)this) )
      {
        std::ostringstream::basic_ostringstream(v7);
        std::operator<<<std::char_traits<char>>(v7, "LargestUInt out of Int range");
        std::stringbuf::str(&v6, (char *)v7 + 8);
        Json::throwLogicError(&v6);
      }
LABEL_5:
      result = LODWORD(this->value_.uint_);
      break;
    case realValue:
      real = this->value_.real_;
      if ( this->value_.real_ < -2147483648.0 || real > 2147483647.0 )
      {
        std::ios_base::ios_base((std::ios_base *)v14);
        v16 = 0LL;
        v17 = 0LL;
        v14[0] = (__int64)&`vtable for'std::ios + 16;
        v15 = 0;
        v14[27] = 0LL;
        v3 = *((_QWORD *)&edata + 2);
        v4 = *(_QWORD *)(*((_QWORD *)&edata + 1) - 24LL);
        *(_QWORD *)&v7[0] = *((_QWORD *)&edata + 1);
        v5 = (_QWORD *)((char *)v7 + v4);
        *v5 = v3;
        std::ios::init(v5, 0LL);
        v14[0] = (__int64)&`vtable for'std::ostringstream + 64;
        v7[0] = (__int128)_mm_unpacklo_epi64(
                            (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                            (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
        v7[1] = 0LL;
        v8 = 0LL;
        v9 = 0LL;
        std::locale::locale(&v10);
        v11 = 16;
        v13 = 0;
        *((_QWORD *)&v7[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
        v12[0] = (__int64)&v13;
        v12[1] = 0LL;
        std::ios::init(v14, (char *)v7 + 8);
        std::__ostream_insert<char,std::char_traits<char>>(v7, "double out of Int range", 23LL);
        v6._anon_0._M_local_buf[0] = 0;
        v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
        v6._M_string_length = 0LL;
        if ( (_QWORD)v9 )
        {
          if ( (unsigned __int64)v9 <= (unsigned __int64)v8 )
            std::string::_M_replace(&v6, 0LL, 0LL, *((const char **)&v8 + 1), (_QWORD)v8 - *((_QWORD *)&v8 + 1));
          else
            std::string::_M_replace(&v6, 0LL, 0LL, *((const char **)&v8 + 1), (_QWORD)v9 - *((_QWORD *)&v8 + 1));
        }
        else
        {
          std::string::_M_assign(&v6, v12);
        }
        Json::throwLogicError(&v6);
      }
      result = (unsigned int)(int)real;
      break;
    case booleanValue:
      result = this->value_.bool_;
      break;
    default:
      std::ostringstream::basic_ostringstream(v7);
      std::operator<<<std::char_traits<char>>(v7, "Value is not convertible to Int.");
      std::stringbuf::str(&v6, (char *)v7 + 8);
      Json::throwLogicError(&v6);
      return result;
  }
  return result;
};

// Line 676: range 00000000152D45D0-00000000152D48FD
int __fastcall Json::Value::asUInt(Json::Value *this)
{
  int result; // eax
  double real; // xmm0_8
  __int64 v3; // r13
  __int64 v4; // rdi
  _QWORD *v5; // rdi
  Json::String v6; // [rsp+0h] [rbp-1D8h] BYREF
  __int128 v7[2]; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v8; // [rsp+40h] [rbp-198h]
  __int128 v9; // [rsp+50h] [rbp-188h]
  std::locale v10; // [rsp+60h] [rbp-178h] BYREF
  int v11; // [rsp+68h] [rbp-170h]
  __int64 v12[2]; // [rsp+70h] [rbp-168h] BYREF
  char v13; // [rsp+80h] [rbp-158h] BYREF
  __int64 v14[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v15; // [rsp+170h] [rbp-68h]
  __int128 v16; // [rsp+178h] [rbp-60h]
  __int128 v17; // [rsp+188h] [rbp-50h]

  result = Json::Value::type((const Json::Value_0 *const)this);
  switch ( result )
  {
    case 0:
      return result;
    case 1:
      if ( !Json::Value::isUInt((const Json::Value_0 *const)this) )
      {
        std::ostringstream::basic_ostringstream(v7);
        std::operator<<<std::char_traits<char>>(v7, "LargestInt out of UInt range");
        std::stringbuf::str(&v6, (char *)v7 + 8);
        Json::throwLogicError(&v6);
      }
      goto LABEL_8;
    case 2:
      if ( !Json::Value::isUInt((const Json::Value_0 *const)this) )
      {
        std::ostringstream::basic_ostringstream(v7);
        std::operator<<<std::char_traits<char>>(v7, "LargestUInt out of UInt range");
        std::stringbuf::str(&v6, (char *)v7 + 8);
        Json::throwLogicError(&v6);
      }
LABEL_8:
      result = LODWORD(this->value_.real_);
      break;
    case 3:
      real = this->value_.real_;
      if ( this->value_.real_ < 0.0 || real > 4294967295.0 )
      {
        std::ios_base::ios_base((std::ios_base *)v14);
        v16 = 0LL;
        v17 = 0LL;
        v14[0] = (__int64)&`vtable for'std::ios + 16;
        v15 = 0;
        v14[27] = 0LL;
        v3 = *((_QWORD *)&edata + 2);
        v4 = *(_QWORD *)(*((_QWORD *)&edata + 1) - 24LL);
        *(_QWORD *)&v7[0] = *((_QWORD *)&edata + 1);
        v5 = (_QWORD *)((char *)v7 + v4);
        *v5 = v3;
        std::ios::init(v5, 0LL);
        v14[0] = (__int64)&`vtable for'std::ostringstream + 64;
        v7[0] = (__int128)_mm_unpacklo_epi64(
                            (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                            (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
        v7[1] = 0LL;
        v8 = 0LL;
        v9 = 0LL;
        std::locale::locale(&v10);
        v11 = 16;
        v13 = 0;
        *((_QWORD *)&v7[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
        v12[0] = (__int64)&v13;
        v12[1] = 0LL;
        std::ios::init(v14, (char *)v7 + 8);
        std::__ostream_insert<char,std::char_traits<char>>(v7, "double out of UInt range", 24LL);
        v6._anon_0._M_local_buf[0] = 0;
        v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
        v6._M_string_length = 0LL;
        if ( (_QWORD)v9 )
        {
          if ( (unsigned __int64)v9 <= (unsigned __int64)v8 )
            std::string::_M_replace(&v6, 0LL, 0LL, *((const char **)&v8 + 1), (_QWORD)v8 - *((_QWORD *)&v8 + 1));
          else
            std::string::_M_replace(&v6, 0LL, 0LL, *((const char **)&v8 + 1), (_QWORD)v9 - *((_QWORD *)&v8 + 1));
        }
        else
        {
          std::string::_M_assign(&v6, v12);
        }
        Json::throwLogicError(&v6);
      }
      result = (int)real;
      break;
    case 5:
      result = this->value_.bool_;
      break;
    default:
      std::ostringstream::basic_ostringstream(v7);
      std::operator<<<std::char_traits<char>>(v7, "Value is not convertible to UInt.");
      std::stringbuf::str(&v6, (char *)v7 + 8);
      Json::throwLogicError(&v6);
      return result;
  }
  return result;
};

// Line 700: range 00000000152D4910-00000000152D4C05
__int64 __fastcall Json::Value::asInt64(Json::Value *this)
{
  __int64 result; // rax
  double real; // xmm0_8
  __int64 v3; // r13
  __int64 v4; // rdi
  _QWORD *v5; // rdi
  Json::String v6; // [rsp+0h] [rbp-1D8h] BYREF
  __int128 v7[2]; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v8; // [rsp+40h] [rbp-198h]
  __int128 v9; // [rsp+50h] [rbp-188h]
  std::locale v10; // [rsp+60h] [rbp-178h] BYREF
  int v11; // [rsp+68h] [rbp-170h]
  __int64 v12[2]; // [rsp+70h] [rbp-168h] BYREF
  char v13; // [rsp+80h] [rbp-158h] BYREF
  __int64 v14[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v15; // [rsp+170h] [rbp-68h]
  __int128 v16; // [rsp+178h] [rbp-60h]
  __int128 v17; // [rsp+188h] [rbp-50h]

  switch ( Json::Value::type((const Json::Value_0 *const)this) )
  {
    case nullValue:
      return 0LL;
    case intValue:
      goto LABEL_3;
    case uintValue:
      if ( !Json::Value::isInt64((const Json::Value_0 *const)this) )
      {
        std::ostringstream::basic_ostringstream(v7);
        std::operator<<<std::char_traits<char>>(v7, "LargestUInt out of Int64 range");
        std::stringbuf::str(&v6, (char *)v7 + 8);
        Json::throwLogicError(&v6);
      }
LABEL_3:
      result = this->value_.int_;
      break;
    case realValue:
      real = this->value_.real_;
      if ( this->value_.real_ < -9.223372036854776e18 || real > 9.223372036854776e18 )
      {
        std::ios_base::ios_base((std::ios_base *)v14);
        v16 = 0LL;
        v17 = 0LL;
        v14[0] = (__int64)&`vtable for'std::ios + 16;
        v15 = 0;
        v14[27] = 0LL;
        v3 = *((_QWORD *)&edata + 2);
        v4 = *(_QWORD *)(*((_QWORD *)&edata + 1) - 24LL);
        *(_QWORD *)&v7[0] = *((_QWORD *)&edata + 1);
        v5 = (_QWORD *)((char *)v7 + v4);
        *v5 = v3;
        std::ios::init(v5, 0LL);
        v14[0] = (__int64)&`vtable for'std::ostringstream + 64;
        v7[0] = (__int128)_mm_unpacklo_epi64(
                            (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                            (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
        v7[1] = 0LL;
        v8 = 0LL;
        v9 = 0LL;
        std::locale::locale(&v10);
        v11 = 16;
        v13 = 0;
        *((_QWORD *)&v7[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
        v12[0] = (__int64)&v13;
        v12[1] = 0LL;
        std::ios::init(v14, (char *)v7 + 8);
        std::__ostream_insert<char,std::char_traits<char>>(v7, "double out of Int64 range", 25LL);
        v6._anon_0._M_local_buf[0] = 0;
        v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
        v6._M_string_length = 0LL;
        if ( (_QWORD)v9 )
        {
          if ( (unsigned __int64)v9 <= (unsigned __int64)v8 )
            std::string::_M_replace(&v6, 0LL, 0LL, *((const char **)&v8 + 1), (_QWORD)v8 - *((_QWORD *)&v8 + 1));
          else
            std::string::_M_replace(&v6, 0LL, 0LL, *((const char **)&v8 + 1), (_QWORD)v9 - *((_QWORD *)&v8 + 1));
        }
        else
        {
          std::string::_M_assign(&v6, v12);
        }
        Json::throwLogicError(&v6);
      }
      result = (unsigned int)(int)real;
      break;
    case booleanValue:
      result = this->value_.bool_;
      break;
    default:
      std::ostringstream::basic_ostringstream(v7);
      std::operator<<<std::char_traits<char>>(v7, "Value is not convertible to Int64.");
      std::stringbuf::str(&v6, (char *)v7 + 8);
      Json::throwLogicError(&v6);
      return result;
  }
  return result;
};

// Line 747: range 00000000152D4C10-00000000152D4F36
// attributes: thunk
Json::Value::LargestInt __fastcall Json::Value::asLargestInt(const Json::Value_0 *const this)
{
  return Json::Value::asInt64((Json::Value *)this);
};

// Line 755: range 00000000152D4F40-00000000152D503F
// attributes: thunk
Json::Value::LargestUInt __fastcall Json::Value::asLargestUInt(const Json::Value_0 *const this)
{
  return Json::Value::asUInt64((Json::Value *)this);
};

// Line 781: range 00000000152D52D0-00000000152D53C3
float __fastcall Json::Value::asFloat(Json::Value *this)
{
  float result; // xmm0_4
  Json::String v2; // [rsp+0h] [rbp-1B8h] BYREF
  char v3[8]; // [rsp+20h] [rbp-198h] BYREF
  char v4[400]; // [rsp+28h] [rbp-190h] BYREF

  switch ( Json::Value::type((const Json::Value_0 *const)this) )
  {
    case nullValue:
      return 0.0;
    case intValue:
      return (float)(int)this->value_.int_;
    case uintValue:
      return (double)(int)((unsigned __int64)this->value_.int_ >> 1)
           + (double)(int)((unsigned __int64)this->value_.int_ >> 1)
           + (double)(LODWORD(this->value_.real_) & 1);
    case realValue:
      return this->value_.real_;
    case booleanValue:
      result = 1.0;
      if ( !this->value_.bool_ )
        return 0.0;
      return result;
    default:
      std::ostringstream::basic_ostringstream(v3);
      std::operator<<<std::char_traits<char>>(v3, "Value is not convertible to float.");
      std::stringbuf::str(&v2, v4);
      Json::throwLogicError(&v2);
      return result;
  }
};

// Line 804: range 00000000152D53D0-00000000152D54BE
bool __fastcall Json::Value::asBool(Json::Value *this)
{
  bool result; // al
  double v2; // xmm0_8
  Json::String v3; // [rsp+0h] [rbp-1B8h] BYREF
  char v4[8]; // [rsp+20h] [rbp-198h] BYREF
  char v5[400]; // [rsp+28h] [rbp-190h] BYREF

  switch ( Json::Value::type((const Json::Value_0 *const)this) )
  {
    case nullValue:
      result = 0;
      break;
    case intValue:
    case uintValue:
      result = this->value_.int_ != 0;
      break;
    case realValue:
      v2 = fabs(this->value_.real_);
      result = 1;
      if ( v2 <= 1.797693134862316e308 && v2 < 2.225073858507201e-308 && this->value_.real_ == 0.0 )
        result = 0;
      break;
    case booleanValue:
      result = this->value_.bool_;
      break;
    default:
      std::ostringstream::basic_ostringstream(v4);
      std::operator<<<std::char_traits<char>>(v4, "Value is not convertible to bool.");
      std::stringbuf::str(&v3, v5);
      Json::throwLogicError(&v3);
      return result;
  }
  return result;
};

// Line 825: range 00000000152D5050-00000000152D52BC
bool __fastcall Json::Value::isConvertibleTo(Json::Value *this, Json::ValueType a2, double a3)
{
  bool result; // al
  char v4; // bl
  bool v5; // [rsp+Fh] [rbp-39h]
  Json::String v6; // [rsp+10h] [rbp-38h] BYREF

  switch ( a2 )
  {
    case nullValue:
      if ( Json::Value::isNumeric((const Json::Value_0 *const)this) )
      {
        Json::Value::asDouble(this);
        if ( a3 == 0.0 )
          return 1;
      }
      if ( Json::Value::type((const Json::Value_0 *const)this) == booleanValue && !this->value_.bool_ )
        return 1;
      v4 = 0;
      if ( Json::Value::type((const Json::Value_0 *const)this) != stringValue )
        goto LABEL_16;
      Json::Value::asString[abi:cxx11](&v6, (Json::Value_0 *)this);
      if ( !v6._M_string_length )
      {
        result = 1;
LABEL_20:
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
        {
          v5 = result;
          operator delete(v6._M_dataplus._M_p);
          return v5;
        }
        return result;
      }
      v4 = 1;
LABEL_16:
      result = Json::Value::type((const Json::Value_0 *const)this) == arrayValue && !*(_QWORD *)(this->value_.int_ + 40)
            || Json::Value::type((const Json::Value_0 *const)this) == objectValue
            && !*(_QWORD *)(this->value_.int_ + 40)
            || Json::Value::type((const Json::Value_0 *const)this) == nullValue;
      if ( v4 )
        goto LABEL_20;
      return result;
    case intValue:
      if ( !Json::Value::isInt((const Json::Value_0 *const)this)
        && (Json::Value::type((const Json::Value_0 *const)this) != realValue
         || this->value_.real_ < -2147483648.0
         || this->value_.real_ > 2147483647.0) )
      {
        goto LABEL_26;
      }
      return 1;
    case uintValue:
      if ( !Json::Value::isUInt((const Json::Value_0 *const)this)
        && (Json::Value::type((const Json::Value_0 *const)this) != realValue
         || this->value_.real_ < 0.0
         || this->value_.real_ > 4294967295.0) )
      {
        goto LABEL_26;
      }
      return 1;
    case realValue:
    case booleanValue:
      if ( Json::Value::isNumeric((const Json::Value_0 *const)this) )
        return 1;
LABEL_26:
      if ( Json::Value::type((const Json::Value_0 *const)this) != booleanValue )
        return Json::Value::type((const Json::Value_0 *const)this) == nullValue;
      return 1;
    case stringValue:
      if ( !Json::Value::isNumeric((const Json::Value_0 *const)this)
        && Json::Value::type((const Json::Value_0 *const)this) != booleanValue
        && Json::Value::type((const Json::Value_0 *const)this) != stringValue )
      {
        return Json::Value::type((const Json::Value_0 *const)this) == nullValue;
      }
      return 1;
    case arrayValue:
      if ( Json::Value::type((const Json::Value_0 *const)this) != arrayValue )
        return Json::Value::type((const Json::Value_0 *const)this) == nullValue;
      return 1;
    case objectValue:
      return Json::Value::type((const Json::Value_0 *const)this) == objectValue
          || Json::Value::type((const Json::Value_0 *const)this) == nullValue;
    default:
      __assert_fail(
        "false",
        "src/lib_json/json_value.cpp",
        0x356u,
        "bool Json::Value::isConvertibleTo(Json::ValueType) const");
  }
};

// Line 830: range 000000000C73A67E-000000000C73A699
void __fastcall __noreturn Json::Value::isConvertibleTo(
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
  char v10; // bl
  struct _Unwind_Exception *v11; // rbp

  if ( v10 )
  {
    if ( a8 != &a10 )
      operator delete(a8);
  }
  _Unwind_Resume(v11);
};

// Line 859: range 00000000152D27F0-00000000152D2855
Json::Value_0::ArrayIndex __fastcall Json::Value::size(const Json::Value_0 *const this)
{
  Json::ValueType v2; // eax
  Json::Value_0::ArrayIndex result; // eax
  Json::Value::ValueHolder v4; // rdi
  const Json::Value_0::CZString *v5; // rax

  v2 = Json::Value::type(this);
  if ( v2 == arrayValue )
  {
    v4.int_ = (Json::Value::LargestInt)this->value_;
    result = 0;
    if ( *(_QWORD *)(this->value_.int_ + 40) )
    {
      v5 = (const Json::Value_0::CZString *)std::_Rb_tree_decrement((const std::_Rb_tree_node_base *)(v4.int_ + 8));
      return Json::Value::CZString::index(v5 + 2) + 1;
    }
  }
  else if ( (unsigned int)v2 > arrayValue )
  {
    if ( v2 != objectValue )
      __assert_fail("false", "src/lib_json/json_value.cpp", 0x36Eu, "Json::ArrayIndex Json::Value::size() const");
    return *(_DWORD *)(this->value_.int_ + 40);
  }
  else
  {
    return 0;
  }
  return result;
};

// Line 882: range 00000000152D2C90-00000000152D2CCC
bool __fastcall Json::Value::empty(const Json::Value_0 *const this)
{
  bool result; // al

  if ( Json::Value::isNull(this) )
    return Json::Value::size(this) == 0;
  if ( Json::Value::isArray(this) )
    return Json::Value::size(this) == 0;
  result = Json::Value::isObject(this);
  if ( result )
    return Json::Value::size(this) == 0;
  return result;
};

// Line 888: range 00000000152D2890-00000000152D28A0
bool __fastcall Json::Value::operator bool(const Json::Value_0 *const this)
{
  return !Json::Value::isNull(this);
};

// Line 890: range 00000000152D5F10-00000000152D6024
std::_Rb_tree_header *__fastcall Json::Value::clear(Json::Value *this)
{
  std::_Rb_tree_header *result; // rax
  std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *v2; // r12
  __int64 v3; // rbx
  void *v4; // rbp
  Json::Value_0::CZString *v5; // r13
  Json::Value_0 *v6; // rdi
  Json::String v7; // [rsp+0h] [rbp-1C8h] BYREF
  char v8[8]; // [rsp+20h] [rbp-1A8h] BYREF
  char v9[416]; // [rsp+28h] [rbp-1A0h] BYREF

  if ( Json::Value::type((const Json::Value_0 *const)this)
    && Json::Value::type((const Json::Value_0 *const)this) != arrayValue
    && Json::Value::type((const Json::Value_0 *const)this) != objectValue )
  {
    std::ostringstream::basic_ostringstream(v8);
    std::operator<<<std::char_traits<char>>(v8, "in Json::Value::clear(): requires complex value");
    std::stringbuf::str(&v7, v9);
    Json::throwLogicError(&v7);
  }
  *(_OWORD *)&this->start_ = 0LL;
  result = (std::_Rb_tree_header *)(unsigned int)(Json::Value::type((const Json::Value_0 *const)this) - 6);
  if ( (unsigned int)result <= 1 )
  {
    v2 = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)this->value_.int_;
    v3 = *(_QWORD *)(this->value_.int_ + 16);
    while ( v3 )
    {
      v4 = (void *)v3;
      v5 = (Json::Value_0::CZString *)(v3 + 32);
      std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_erase(
        v2,
        *(std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > >::_Link_type *)(v3 + 24));
      v6 = (Json::Value_0 *)(v3 + 48);
      v3 = *(_QWORD *)(v3 + 16);
      Json::Value::~Value(v6);
      Json::Value::CZString::~CZString(v5);
      operator delete(v4);
    }
    v2->_M_impl._M_header._M_parent = 0LL;
    result = &v2->_M_impl.std::_Rb_tree_header;
    v2->_M_impl._M_header._M_left = &v2->_M_impl._M_header;
    v2->_M_impl._M_header._M_right = &v2->_M_impl._M_header;
    v2->_M_impl._M_node_count = 0LL;
  }
  return result;
};

// Line 906: range 00000000152D71A0-00000000152D72FD
Json::Value_0::ArrayIndex __fastcall Json::Value::resize(Json::Value *this, Json::Value_0::ArrayIndex index)
{
  Json::Value_0::ArrayIndex v2; // eax
  Json::Value_0::ArrayIndex v3; // r13d
  Json::Value_0::ArrayIndex v4; // ebx
  std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *v5; // r15
  Json::Value_0::ArrayIndex result; // eax
  const std::allocator<char> *v7; // rdx
  Json::String v8; // [rsp+0h] [rbp-1D8h] BYREF
  Json::Value_0 other; // [rsp+20h] [rbp-1B8h] BYREF

  if ( Json::Value::type((const Json::Value_0 *const)this)
    && Json::Value::type((const Json::Value_0 *const)this) != arrayValue )
  {
    std::ostringstream::basic_ostringstream(&other);
    std::operator<<<std::char_traits<char>>(&other, "in Json::Value::resize(): requires arrayValue");
    std::stringbuf::str(&v8, &other.bits_);
    Json::throwLogicError(&v8);
  }
  if ( Json::Value::type((const Json::Value_0 *const)this) == nullValue )
  {
    Json::Value::Value((Json::Value *)&other, arrayValue);
    Json::Value::operator=((Json::Value_0 *const)this, &other);
    Json::Value::~Value(&other);
  }
  v2 = Json::Value::size((const Json::Value_0 *const)this);
  v3 = v2;
  if ( !index )
    return (unsigned int)Json::Value::clear(this);
  if ( v2 < index )
    return Json::Value::operator[]((Json::Value_0 *)this, index - 1, (int)v8._M_dataplus._M_p, v8._M_string_length);
  if ( v2 != index )
  {
    v4 = index;
    do
    {
      v5 = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)this->value_.int_;
      Json::Value::CZString::CZString((Json::Value_0::CZString *const)&other, v4);
      std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::erase(
        v5,
        (const Json::Value_0::CZString *)&other);
      ++v4;
      Json::Value::CZString::~CZString((Json::Value_0::CZString *const)&other);
    }
    while ( v3 > v4 );
  }
  result = Json::Value::size((const Json::Value_0 *const)this);
  if ( index != result )
  {
    std::string::basic_string((std::string *const)&other, "assert json failed", v7);
    Json::throwLogicError((const Json::String *)&other);
  }
  return result;
};

// Line 910: range 000000000C73AA78-000000000C73AA83
void __fastcall __noreturn Json::Value::resize()
{
  Json::Value_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::~Value(v0);
  _Unwind_Resume(v1);
};

// Line 924: range 00000000152D6FE0-00000000152D7195
std::_Rb_tree_node_base::_Base_ptr *__fastcall Json::Value::operator[](
        Json::Value_0 *this,
        Json::Value_0::ArrayIndex index)
{
  Json::Value *v3; // rdi
  Json::Value::LargestInt v4; // rbx
  Json::Value::LargestInt v5; // r12
  const Json::Value *v6; // rbx
  std::pair<const Json::Value::CZString,Json::Value> *v7; // rcx
  std::_Rb_tree_node_base::_Base_ptr *p_M_left; // r12
  Json::String v10; // [rsp+0h] [rbp-1D8h] BYREF
  std::pair<const Json::Value::CZString,Json::Value> v11; // [rsp+20h] [rbp-1B8h] BYREF

  if ( Json::Value::type(this) && Json::Value::type(this) != arrayValue )
  {
    std::ostringstream::basic_ostringstream(&v11);
    std::operator<<<std::char_traits<char>>(&v11, "in Json::Value::operator[](ArrayIndex): requires arrayValue");
    std::stringbuf::str(&v10, &v11.first._anon_0);
    Json::throwLogicError(&v10);
  }
  if ( Json::Value::type(this) == nullValue )
  {
    Json::Value::Value((Json::Value *)&v11, arrayValue);
    Json::Value::operator=(this, (Json::Value_0 *)&v11);
    Json::Value::~Value((Json::Value_0 *const)&v11);
  }
  v3 = (Json::Value *)&v10;
  Json::Value::CZString::CZString((Json::Value_0::CZString *const)&v10, index);
  v4 = *(_QWORD *)(this->value_.int_ + 16);
  v5 = this->value_.int_ + 8;
  if ( !v4 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      v3 = (Json::Value *)(v4 + 32);
      if ( Json::Value::CZString::operator<(v4 + 32, (__int64)&v10) )
        break;
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_10;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_10:
  if ( v5 != this->value_.int_ + 8
    && (v3 = (Json::Value *)(v5 + 32), Json::Value::CZString::operator==(v5 + 32, (__int64)&v10)) )
  {
    p_M_left = (std::_Rb_tree_node_base::_Base_ptr *)(v5 + 48);
  }
  else
  {
LABEL_12:
    v6 = (const Json::Value *)Json::Value::nullSingleton(v3);
    Json::Value::CZString::CZString((Json::Value::CZString *)&v11, (const Json::Value::CZString *)&v10);
    Json::Value::Value((Json::Value *)&v11.second, v6);
    p_M_left = &std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_emplace_hint_unique<std::pair<Json::Value::CZString const,Json::Value>&>(
                  (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *const)this->value_.int_,
                  (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > >::const_iterator)v5,
                  &v11,
                  v7)._M_node[1]._M_left;
    Json::Value::~Value(&v11.second);
    Json::Value::CZString::~CZString((Json::Value_0::CZString *const)&v11.first);
  }
  Json::Value::CZString::~CZString((Json::Value_0::CZString *const)&v10);
  return p_M_left;
};

// Line 940: range 00000000152D7310-00000000152D736D
std::_Rb_tree_node_base::_Base_ptr *__fastcall Json::Value::operator[](Json::Value_0 *a1, signed int a2)
{
  Json::String v3; // [rsp+0h] [rbp-1B8h] BYREF
  char v4[8]; // [rsp+20h] [rbp-198h] BYREF
  char v5[400]; // [rsp+28h] [rbp-190h] BYREF

  if ( a2 < 0 )
  {
    std::ostringstream::basic_ostringstream(v4);
    std::operator<<<std::char_traits<char>>(v4, "in Json::Value::operator[](int index): index cannot be negative");
    std::stringbuf::str(&v3, v5);
    Json::throwLogicError(&v3);
  }
  return Json::Value::operator[](a1, a2);
};

// Line 947: range 00000000152D54D0-00000000152D5621
void *__fastcall Json::Value::operator[](Json::Value *this, Json::Value_0::ArrayIndex index)
{
  Json::Value *v3; // rdi
  Json::Value::LargestInt v4; // rbx
  Json::Value::LargestInt v5; // r13
  Json::Value::LargestInt v6; // r12
  bool v7; // r8
  Json::Value::LargestInt v8; // rax
  void *v9; // r13
  Json::String v11; // [rsp+0h] [rbp-1C8h] BYREF
  Json::Value_0::CZString v12; // [rsp+20h] [rbp-1A8h] BYREF

  if ( Json::Value::type((const Json::Value_0 *const)this)
    && Json::Value::type((const Json::Value_0 *const)this) != arrayValue )
  {
    std::ostringstream::basic_ostringstream(&v12);
    std::operator<<<std::char_traits<char>>(&v12, "in Json::Value::operator[](ArrayIndex)const: requires arrayValue");
    std::stringbuf::str(&v11, &v12._anon_0);
    Json::throwLogicError(&v11);
  }
  if ( Json::Value::type((const Json::Value_0 *const)this) == nullValue )
    return Json::Value::nullSingleton(this);
  v3 = (Json::Value *)&v12;
  Json::Value::CZString::CZString(&v12, index);
  v4 = *(_QWORD *)(this->value_.int_ + 16);
  v5 = this->value_.int_ + 8;
  if ( !v4 )
    goto LABEL_17;
  v6 = this->value_.int_ + 8;
  do
  {
    while ( 1 )
    {
      v3 = (Json::Value *)(v4 + 32);
      if ( Json::Value::CZString::operator<(v4 + 32, (__int64)&v12) )
        break;
      v6 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_9;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_9:
  if ( v5 == v6 )
  {
    v8 = this->value_.int_ + 8;
  }
  else
  {
    v3 = (Json::Value *)&v12;
    v7 = Json::Value::CZString::operator<((__int64)&v12, v6 + 32);
    v8 = this->value_.int_ + 8;
    if ( v7 )
      v6 = v5;
  }
  v9 = (void *)(v6 + 48);
  if ( v6 == v8 )
LABEL_17:
    v9 = Json::Value::nullSingleton(v3);
  Json::Value::CZString::~CZString(&v12);
  return v9;
};

// Line 953: range 000000000C73A6E6-000000000C73A6F1
void __fastcall __noreturn Json::Value::operator[]()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0::CZString *v1; // r14

  Json::Value::CZString::~CZString(v1);
  _Unwind_Resume(v0);
};

// Line 960: range 00000000152D5630-00000000152D568D
void *__fastcall Json::Value::operator[](Json::Value *a1, signed int a2)
{
  Json::String v3; // [rsp+0h] [rbp-1B8h] BYREF
  char v4[8]; // [rsp+20h] [rbp-198h] BYREF
  char v5[400]; // [rsp+28h] [rbp-190h] BYREF

  if ( a2 < 0 )
  {
    std::ostringstream::basic_ostringstream(v4);
    std::operator<<<std::char_traits<char>>(v4, "in Json::Value::operator[](int index) const: index cannot be negative");
    std::stringbuf::str(&v3, v5);
    Json::throwLogicError(&v3);
  }
  return Json::Value::operator[](a1, a2);
};

// Line 967: range 00000000152D3390-00000000152D341A
void __fastcall Json::Value::initBasic(Json::Value *this, Json::ValueType a2, char a3)
{
  char v3; // al
  Json::Value::Comments *p_comments; // rdi
  char v6; // dl
  std::array<std::string,3> *M_head_impl; // r12
  std::array<std::string,3> *v8; // rbp
  Json::Value::Comments that; // [rsp+8h] [rbp-20h] BYREF

  v3 = a3 & 1;
  p_comments = &this->comments_;
  v6 = BYTE1(p_comments[-1].ptr_._M_t._M_t._M_head_impl);
  LOBYTE(p_comments[-1].ptr_._M_t._M_t._M_head_impl) = a2;
  BYTE1(p_comments[-1].ptr_._M_t._M_t._M_head_impl) = v3 | v6 & 0xFE;
  that.ptr_._M_t._M_t._M_head_impl = 0LL;
  Json::Value::Comments::operator=(p_comments, &that);
  M_head_impl = that.ptr_._M_t._M_t._M_head_impl;
  if ( that.ptr_._M_t._M_t._M_head_impl )
  {
    v8 = that.ptr_._M_t._M_t._M_head_impl + 1;
    do
    {
      while ( 1 )
      {
        v8 = (std::array<std::string,3> *)((char *)v8 - 32);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8->_M_elems[0]._M_dataplus._M_p == &v8->_M_elems[0]._anon_0 )
          break;
        operator delete(v8->_M_elems[0]._M_dataplus._M_p);
        if ( M_head_impl == v8 )
          goto LABEL_5;
      }
    }
    while ( M_head_impl != v8 );
LABEL_5:
    operator delete(M_head_impl, 0x60uLL);
  }
  *(_OWORD *)&this->start_ = 0LL;
};

// Line 975: range 00000000152D6C10-00000000152D6D5E
int __fastcall Json::Value::dupPayload(Json::Value *this, const Json::Value_0 *a2)
{
  char v2; // al
  std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *v3; // rax
  unsigned int v4; // edx
  std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *v5; // r12
  Json::Value::ValueHolder v6; // rbp
  const std::_Rb_tree_node<std::pair<const Json::Value::CZString,Json::Value> > *v7; // rsi
  std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *M_parent; // rdx
  std::_Rb_tree_node_base *v9; // rcx
  std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *M_left; // rdx
  std::_Rb_tree_node_base *v11; // rcx
  std::size_t v12; // rdx
  std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > >::_Alloc_node __node_gen; // [rsp+8h] [rbp-20h] BYREF

  v2 = Json::Value::type(a2);
  *((_BYTE *)&this->bits_ + 1) &= ~1u;
  *(_BYTE *)&this->bits_ = v2;
  LODWORD(v3) = Json::Value::type((const Json::Value_0 *const)this);
  if ( (_DWORD)v3 == 5 )
    goto LABEL_14;
  if ( (unsigned int)v3 <= 5 )
  {
    if ( (_DWORD)v3 == 4 )
    {
      v5 = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)a2->value_.int_;
      if ( a2->value_.int_ )
      {
        LODWORD(v3) = a2->bits_;
        if ( (BYTE1(v3) & 1) != 0 )
        {
          v3 = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)Json::duplicateAndPrefixStringValue((Json *)(&v5->_M_impl.std::allocator<std::_Rb_tree_node<std::pair<const Json::Value::CZString,Json::Value> > > + 4), *(unsigned int *)v5->_M_impl.gap0, v4);
          *((_BYTE *)&this->bits_ + 1) |= 1u;
          this->value_.int_ = (Json::Value::LargestInt)v3;
          return (int)v3;
        }
      }
      goto LABEL_6;
    }
LABEL_14:
    v3 = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)a2->value_.int_;
    this->value_.int_ = a2->value_.int_;
    return (int)v3;
  }
  if ( (unsigned int)((_DWORD)v3 - 6) > 1 )
    __assert_fail("false", "src/lib_json/json_value.cpp", 0x3EBu, "void Json::Value::dupPayload(const Json::Value&)");
  v3 = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)operator new(0x30uLL);
  v6.int_ = (Json::Value::LargestInt)a2->value_;
  v3->_M_impl._M_header._M_parent = 0LL;
  v5 = v3;
  v3->_M_impl._M_header._M_left = &v3->_M_impl._M_header;
  v3->_M_impl._M_header._M_right = &v3->_M_impl._M_header;
  v7 = *(const std::_Rb_tree_node<std::pair<const Json::Value::CZString,Json::Value> > **)(v6.int_ + 16);
  v3->_M_impl._M_header._M_color = _S_red;
  v3->_M_impl._M_node_count = 0LL;
  if ( v7 )
  {
    __node_gen._M_t = v3;
    v3 = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_copy<std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_Alloc_node>(v3, v7, &v3->_M_impl._M_header, &__node_gen);
    M_parent = v3;
    do
    {
      v9 = (std::_Rb_tree_node_base *)M_parent;
      M_parent = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)M_parent->_M_impl._M_header._M_parent;
    }
    while ( M_parent );
    v5->_M_impl._M_header._M_left = v9;
    M_left = v3;
    do
    {
      v11 = (std::_Rb_tree_node_base *)M_left;
      M_left = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)M_left->_M_impl._M_header._M_left;
    }
    while ( M_left );
    v12 = *(_QWORD *)(v6.int_ + 40);
    v5->_M_impl._M_header._M_right = v11;
    v5->_M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)v3;
    v5->_M_impl._M_node_count = v12;
  }
LABEL_6:
  this->value_.int_ = (Json::Value::LargestInt)v5;
  return (int)v3;
};

// Line 1000: range 000000000C73A9CE-000000000C73A9DE
void __fastcall __noreturn Json::Value::dupPayload()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x30uLL);
  _Unwind_Resume(v0);
};

// Line 1007: range 00000000152D5C10-00000000152D5CDC
void __fastcall Json::Value::releasePayload(Json::Value_0 *const this)
{
  Json::ValueType v1; // eax
  std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *v2; // r12
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::_Rb_tree_node_base::_Base_ptr v4; // rbp
  Json::Value_0::CZString *v5; // r13
  Json::Value_0 *p_M_left; // rdi

  v1 = Json::Value::type(this);
  if ( v1 != booleanValue )
  {
    if ( (unsigned int)v1 > booleanValue )
    {
      if ( (unsigned int)(v1 - 6) > 1 )
        __assert_fail("false", "src/lib_json/json_value.cpp", 0x400u, "void Json::Value::releasePayload()");
      v2 = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)this->value_.int_;
      if ( this->value_.int_ )
      {
        M_parent = v2->_M_impl._M_header._M_parent;
        while ( M_parent )
        {
          v4 = M_parent;
          v5 = (Json::Value_0::CZString *)&M_parent[1];
          std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_erase(
            v2,
            (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > >::_Link_type)M_parent->_M_right);
          p_M_left = (Json::Value_0 *)&M_parent[1]._M_left;
          M_parent = M_parent->_M_left;
          Json::Value::~Value(p_M_left);
          Json::Value::CZString::~CZString(v5);
          operator delete(v4);
        }
        operator delete(v2, 0x30uLL);
      }
    }
    else if ( v1 == stringValue && (*((_BYTE *)&this->bits_ + 1) & 1) != 0 )
    {
      free(this->value_.string_);
    }
  }
};

// Line 1028: range 00000000152D3220-00000000152D3248
void __fastcall Json::Value::dupMeta(Json::Value_0 *const this, const Json::Value_0 *other)
{
  Json::Value::Comments::operator=(&this->comments_, &other->comments_);
  *(__m128i *)&this->start_ = _mm_loadu_si128((const __m128i *)&other->start_);
};

// Line 1037: range 00000000152D7790-00000000152D7945
std::_Rb_tree_node_base::_Base_ptr *__fastcall Json::Value::resolveReference(Json::Value *this, const char *str)
{
  unsigned int v3; // eax
  Json::Value *v4; // rdi
  Json::Value::LargestInt v5; // rbx
  Json::Value::LargestInt v6; // r12
  const Json::Value *v7; // rbx
  std::pair<const Json::Value::CZString,Json::Value> *v8; // rcx
  std::_Rb_tree_node_base::_Base_ptr *p_M_left; // r12
  Json::String v11; // [rsp+0h] [rbp-1D8h] BYREF
  std::pair<const Json::Value::CZString,Json::Value> v12; // [rsp+20h] [rbp-1B8h] BYREF

  if ( Json::Value::type((const Json::Value_0 *const)this)
    && Json::Value::type((const Json::Value_0 *const)this) != objectValue )
  {
    std::ostringstream::basic_ostringstream(&v12);
    std::operator<<<std::char_traits<char>>(&v12, "in Json::Value::resolveReference(): requires objectValue");
    std::stringbuf::str(&v11, &v12.first._anon_0);
    Json::throwLogicError(&v11);
  }
  if ( Json::Value::type((const Json::Value_0 *const)this) == nullValue )
  {
    Json::Value::Value((Json::Value *)&v12, objectValue);
    Json::Value::operator=((Json::Value_0 *const)this, (Json::Value_0 *)&v12);
    Json::Value::~Value((Json::Value_0 *const)&v12);
  }
  v3 = strlen(str);
  v4 = (Json::Value *)&v11;
  Json::Value::CZString::CZString((Json::Value_0::CZString *const)&v11, str, v3, noDuplication_0);
  v5 = *(_QWORD *)(this->value_.int_ + 16);
  v6 = this->value_.int_ + 8;
  if ( !v5 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      v4 = (Json::Value *)(v5 + 32);
      if ( Json::Value::CZString::operator<(v5 + 32, (__int64)&v11) )
        break;
      v6 = v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v5 )
        goto LABEL_10;
    }
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v5 );
LABEL_10:
  if ( v6 != this->value_.int_ + 8
    && (v4 = (Json::Value *)(v6 + 32), Json::Value::CZString::operator==(v6 + 32, (__int64)&v11)) )
  {
    p_M_left = (std::_Rb_tree_node_base::_Base_ptr *)(v6 + 48);
  }
  else
  {
LABEL_12:
    v7 = (const Json::Value *)Json::Value::nullSingleton(v4);
    Json::Value::CZString::CZString((Json::Value::CZString *)&v12, (const Json::Value::CZString *)&v11);
    Json::Value::Value((Json::Value *)&v12.second, v7);
    p_M_left = &std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_emplace_hint_unique<std::pair<Json::Value::CZString const,Json::Value>&>(
                  (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *const)this->value_.int_,
                  (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > >::const_iterator)v6,
                  &v12,
                  v8)._M_node[1]._M_left;
    Json::Value::~Value(&v12.second);
    Json::Value::CZString::~CZString((Json::Value_0::CZString *const)&v12.first);
  }
  Json::Value::CZString::~CZString((Json::Value_0::CZString *const)&v11);
  return p_M_left;
};

// Line 1056: range 00000000152D7960-00000000152D7B15
std::_Rb_tree_node_base::_Base_ptr *__fastcall Json::Value::resolveReference(
        Json::Value *this,
        const char *str,
        const char *a3)
{
  int v4; // ebx
  Json::Value *v5; // rdi
  Json::Value::LargestInt v6; // rbx
  Json::Value::LargestInt v7; // r12
  const Json::Value *v8; // rbx
  std::pair<const Json::Value::CZString,Json::Value> *v9; // rcx
  std::_Rb_tree_node_base::_Base_ptr *p_M_left; // r12
  Json::String v12; // [rsp+0h] [rbp-1D8h] BYREF
  std::pair<const Json::Value::CZString,Json::Value> v13; // [rsp+20h] [rbp-1B8h] BYREF

  v4 = (int)a3;
  if ( Json::Value::type((const Json::Value_0 *const)this)
    && Json::Value::type((const Json::Value_0 *const)this) != objectValue )
  {
    std::ostringstream::basic_ostringstream(&v13);
    std::operator<<<std::char_traits<char>>(&v13, "in Json::Value::resolveReference(key, end): requires objectValue");
    std::stringbuf::str(&v12, &v13.first._anon_0);
    Json::throwLogicError(&v12);
  }
  if ( Json::Value::type((const Json::Value_0 *const)this) == nullValue )
  {
    Json::Value::Value((Json::Value *)&v13, objectValue);
    Json::Value::operator=((Json::Value_0 *const)this, (Json::Value_0 *)&v13);
    Json::Value::~Value((Json::Value_0 *const)&v13);
  }
  v5 = (Json::Value *)&v12;
  Json::Value::CZString::CZString((Json::Value_0::CZString *const)&v12, str, v4 - (_DWORD)str, duplicateOnCopy_0);
  v6 = *(_QWORD *)(this->value_.int_ + 16);
  v7 = this->value_.int_ + 8;
  if ( !v6 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      v5 = (Json::Value *)(v6 + 32);
      if ( Json::Value::CZString::operator<(v6 + 32, (__int64)&v12) )
        break;
      v7 = v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v6 )
        goto LABEL_10;
    }
    v6 = *(_QWORD *)(v6 + 24);
  }
  while ( v6 );
LABEL_10:
  if ( v7 != this->value_.int_ + 8
    && (v5 = (Json::Value *)(v7 + 32), Json::Value::CZString::operator==(v7 + 32, (__int64)&v12)) )
  {
    p_M_left = (std::_Rb_tree_node_base::_Base_ptr *)(v7 + 48);
  }
  else
  {
LABEL_12:
    v8 = (const Json::Value *)Json::Value::nullSingleton(v5);
    Json::Value::CZString::CZString((Json::Value::CZString *)&v13, (const Json::Value::CZString *)&v12);
    Json::Value::Value((Json::Value *)&v13.second, v8);
    p_M_left = &std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_emplace_hint_unique<std::pair<Json::Value::CZString const,Json::Value>&>(
                  (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *const)this->value_.int_,
                  (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > >::const_iterator)v7,
                  &v13,
                  v9)._M_node[1]._M_left;
    Json::Value::~Value(&v13.second);
    Json::Value::CZString::~CZString((Json::Value_0::CZString *const)&v13.first);
  }
  Json::Value::CZString::~CZString((Json::Value_0::CZString *const)&v12);
  return p_M_left;
};

// Line 1074: range 00000000152D6DF0-00000000152D6E25
Json::Value_0 *__fastcall Json::Value::get(
        Json::Value_0 *retstr,
        const Json::Value_0 *const this,
        Json::Value_0::ArrayIndex index,
        const Json::Value_0 *defaultValue)
{
  const Json::Value *v5; // rbp

  v5 = (const Json::Value *)Json::Value::operator[]((Json::Value *)this, index);
  if ( v5 == Json::Value::nullSingleton((Json::Value *)this) )
    v5 = (const Json::Value *)defaultValue;
  Json::Value::Value((Json::Value *)retstr, v5);
  return retstr;
};

// Line 1079: range 00000000152D2860-00000000152D286E
bool __fastcall Json::Value::isValidIndex(const Json::Value_0 *const this, Json::Value_0::ArrayIndex index)
{
  return Json::Value::size(this) > index;
};

// Line 1081: range 00000000152D56A0-00000000152D57DC
Json::Value::LargestInt __fastcall Json::Value::find(Json::Value *this, const char *str, const char *a3)
{
  int v3; // r12d
  Json::Value::LargestInt v4; // r12
  Json::Value::LargestInt v5; // r14
  Json::Value::LargestInt v6; // rbp
  bool v7; // r8
  Json::Value::LargestInt v8; // rax
  Json::String v10; // [rsp+0h] [rbp-1C8h] BYREF
  Json::Value_0::CZString v11; // [rsp+20h] [rbp-1A8h] BYREF

  v3 = (int)a3;
  if ( Json::Value::type((const Json::Value_0 *const)this)
    && Json::Value::type((const Json::Value_0 *const)this) != objectValue )
  {
    std::ostringstream::basic_ostringstream(&v11);
    std::operator<<<std::char_traits<char>>(&v11, "in Json::Value::find(begin, end): requires objectValue or nullValue");
    std::stringbuf::str(&v10, &v11._anon_0);
    Json::throwLogicError(&v10);
  }
  if ( Json::Value::type((const Json::Value_0 *const)this) == nullValue )
    return 0LL;
  Json::Value::CZString::CZString(&v11, str, v3 - (_DWORD)str, noDuplication_0);
  v4 = *(_QWORD *)(this->value_.int_ + 16);
  v5 = this->value_.int_ + 8;
  if ( v4 )
  {
    v6 = this->value_.int_ + 8;
    do
    {
      while ( !Json::Value::CZString::operator<(v4 + 32, (__int64)&v11) )
      {
        v6 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v4 )
          goto LABEL_9;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v4 );
LABEL_9:
    if ( v5 == v6 )
    {
      v8 = this->value_.int_ + 8;
    }
    else
    {
      v7 = Json::Value::CZString::operator<((__int64)&v11, v6 + 32);
      v8 = this->value_.int_ + 8;
      if ( v7 )
        v6 = v5;
    }
    if ( v6 != v8 )
      v4 = v6 + 48;
  }
  Json::Value::CZString::~CZString(&v11);
  return v4;
};

// Line 1088: range 000000000C73A73E-000000000C73A749
void __fastcall __noreturn Json::Value::find()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0::CZString *v1; // r13

  Json::Value::CZString::~CZString(v1);
  _Unwind_Resume(v0);
};

// Line 1094: range 00000000152D7B20-00000000152D7BA5
std::_Rb_tree_node_base::_Base_ptr *__fastcall Json::Value::demand(Json::Value *this, const char *str, const char *a3)
{
  Json::String v5; // [rsp+0h] [rbp-1B8h] BYREF
  char v6[8]; // [rsp+20h] [rbp-198h] BYREF
  char v7[400]; // [rsp+28h] [rbp-190h] BYREF

  if ( Json::Value::type((const Json::Value_0 *const)this)
    && Json::Value::type((const Json::Value_0 *const)this) != objectValue )
  {
    std::ostringstream::basic_ostringstream(v6);
    std::operator<<<std::char_traits<char>>(v6, "in Json::Value::demand(begin, end): requires objectValue or nullValue");
    std::stringbuf::str(&v5, v7);
    Json::throwLogicError(&v5);
  }
  return Json::Value::resolveReference(this, str, a3);
};

// Line 1100: range 00000000152D57F0-00000000152D582F
const Json::Value_0 *__fastcall Json::Value::operator[](const Json::Value_0 *const this, const char *key)
{
  size_t v2; // rax
  const Json::Value_0 *result; // rax

  v2 = strlen(key);
  result = (const Json::Value_0 *)Json::Value::find((Json::Value *)this, key, &key[v2]);
  if ( !result )
    return (const Json::Value_0 *)Json::Value::nullSingleton((Json::Value *)this);
  return result;
};

// Line 1106: range 00000000152D5840-00000000152D5864
const Json::Value_0 *__fastcall Json::Value::operator[](const Json::Value_0 *const this, const Json::String *key)
{
  const Json::Value_0 *result; // rax

  result = (const Json::Value_0 *)Json::Value::find(
                                    (Json::Value *)this,
                                    key->_M_dataplus._M_p,
                                    &key->_M_dataplus._M_p[key->_M_string_length]);
  if ( !result )
    return (const Json::Value_0 *)Json::Value::nullSingleton((Json::Value *)this);
  return result;
};

// Line 1113: range 00000000152D7BB0-00000000152D7BD7
Json::Value_0 *__fastcall Json::Value::operator[](Json::Value_0 *const this, const char *key)
{
  size_t v2; // rax

  v2 = strlen(key);
  return (Json::Value_0 *)Json::Value::resolveReference((Json::Value *)this, key, &key[v2]);
};

// Line 1122: range 00000000152D7950-00000000152D7953
Json::Value_0 *__fastcall Json::Value::operator[](Json::Value_0 *const this, const Json::StaticString *key)
{
  return (Json::Value_0 *)Json::Value::resolveReference((Json::Value *)this, key->c_str_);
};

// Line 1125: range 000000000C73AA0A-000000000C73AA15
void __fastcall __noreturn Json::Value::append()
{
  Json::Value_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::~Value(v0);
  _Unwind_Resume(v1);
};

// Line 1125: range 00000000152D6E30-00000000152D6E69
__int64 __fastcall Json::Value::append(Json::Value *this, const Json::Value *a2)
{
  __int64 v2; // r12
  _BYTE savedregs[72]; // [rsp+0h] [rbp+0h] BYREF

  Json::Value::Value((Json::Value *)savedregs, a2);
  v2 = Json::Value::append((Json::Value_0 *)this, (Json::Value_0 *)savedregs, *(int *)savedregs, savedregs[8]);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  return v2;
};

// Line 1127: range 00000000152D6030-00000000152D6103
std::_Rb_tree_node_base::_Base_ptr *__fastcall Json::Value::append(Json::Value_0 *this, Json::Value_0 *a2)
{
  std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *v2; // r14
  unsigned int *v3; // rcx
  Json::Value_0 *v4; // r8
  Json::String v6; // [rsp+0h] [rbp-1C8h] BYREF
  Json::Value_0 other; // [rsp+20h] [rbp-1A8h] BYREF

  if ( Json::Value::type(this) && Json::Value::type(this) != arrayValue )
  {
    std::ostringstream::basic_ostringstream(&other);
    std::operator<<<std::char_traits<char>>(&other, "in Json::Value::append: requires arrayValue");
    std::stringbuf::str(&v6, &other.bits_);
    Json::throwLogicError(&v6);
  }
  if ( Json::Value::type(this) == nullValue )
  {
    Json::Value::Value((Json::Value *)&other, arrayValue);
    Json::Value::operator=(this, &other);
    Json::Value::~Value(&other);
  }
  v2 = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)this->value_.int_;
  LODWORD(other.value_.real_) = Json::Value::size(this);
  return &std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_emplace_unique<unsigned int,Json::Value>(
            v2,
            (unsigned int *)&other,
            a2,
            v3,
            v4).first._M_node[1]._M_left;
};

// Line 1131: range 000000000C73A862-000000000C73A86D
void __fastcall __noreturn Json::Value::append()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0 *v1; // r12

  Json::Value::~Value(v1);
  _Unwind_Resume(v0);
};

// Line 1136: range 00000000152D7470-00000000152D74B6
__int64 __fastcall Json::Value::insert(Json::Value *this, Json::Value_0::ArrayIndex index, const Json::Value *other)
{
  unsigned int v3; // r12d
  _BYTE savedregs[72]; // [rsp+0h] [rbp+0h] BYREF

  Json::Value::Value((Json::Value *)savedregs, other);
  v3 = Json::Value::insert((Json::Value_0 *)this, index, (Json::Value_0 *)savedregs);
  Json::Value::~Value((Json::Value_0 *const)savedregs);
  return v3;
};

// Line 1137: range 000000000C73AB20-000000000C73AB2B
void __fastcall __noreturn Json::Value::insert()
{
  Json::Value_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::~Value(v0);
  _Unwind_Resume(v1);
};

// Line 1140: range 00000000152D7380-00000000152D7460
__int64 __fastcall Json::Value::insert(Json::Value_0 *this, Json::Value_0::ArrayIndex index, Json::Value_0 *other)
{
  Json::Value_0::ArrayIndex v4; // ebx
  __int64 result; // rax
  Json::Value_0::ArrayIndex v6; // r15d
  std::_Rb_tree_node_base::_Base_ptr *v7; // r13
  std::_Rb_tree_node_base::_Base_ptr *v8; // rax
  std::_Rb_tree_node_base::_Base_ptr *v9; // rax
  Json::String v10; // [rsp+0h] [rbp-1D8h] BYREF
  char v11[8]; // [rsp+20h] [rbp-1B8h] BYREF
  char v12[432]; // [rsp+28h] [rbp-1B0h] BYREF

  if ( Json::Value::type(this) && Json::Value::type(this) != arrayValue )
  {
    std::ostringstream::basic_ostringstream(v11);
    std::operator<<<std::char_traits<char>>(v11, "in Json::Value::insert: requires arrayValue");
    std::stringbuf::str(&v10, v12);
    Json::throwLogicError(&v10);
  }
  v4 = Json::Value::size(this);
  result = 0LL;
  if ( v4 >= index )
  {
    if ( v4 != index )
    {
      do
      {
        v6 = v4--;
        v7 = Json::Value::operator[](this, v4);
        v8 = Json::Value::operator[](this, v6);
        Json::Value::operator=((Json::Value_0 *const)v8, (Json::Value_0 *)v7);
      }
      while ( v4 > index );
    }
    v9 = Json::Value::operator[](this, index);
    Json::Value::operator=((Json::Value_0 *const)v9, other);
    return 1LL;
  }
  return result;
};

// Line 1155: range 00000000152D6E70-00000000152D6EA7
Json::Value_0 *__fastcall Json::Value::get(
        Json::Value_0 *retstr,
        const Json::Value_0 *const this,
        const char *begin,
        const char *end,
        const Json::Value_0 *defaultValue)
{
  const Json::Value *v6; // rsi

  v6 = (const Json::Value *)Json::Value::find((Json::Value *)this, begin, end);
  if ( !v6 )
    v6 = (const Json::Value *)defaultValue;
  Json::Value::Value((Json::Value *)retstr, v6);
  return retstr;
};

// Line 1159: range 00000000152D6EB0-00000000152D6EF0
Json::Value_0 *__fastcall Json::Value::get(
        Json::Value_0 *retstr,
        const Json::Value_0 *const this,
        const char *key,
        const Json::Value_0 *defaultValue)
{
  size_t v6; // rax

  v6 = strlen(key);
  Json::Value::get(retstr, this, key, &key[v6], defaultValue);
  return retstr;
};

// Line 1162: range 00000000152D6F00-00000000152D6F1F
Json::Value_0 *__fastcall Json::Value::get(
        Json::Value_0 *retstr,
        const Json::Value_0 *const this,
        const Json::String *key,
        const Json::Value_0 *defaultValue)
{
  Json::Value::get(retstr, this, key->_M_dataplus._M_p, &key->_M_dataplus._M_p[key->_M_string_length], defaultValue);
  return retstr;
};

// Line 1166: range 00000000152D5D60-00000000152D5EB7
__int64 __fastcall Json::Value::removeMember(Json::Value *this, const char *a2, const char *a3, Json::Value_0 *a4)
{
  int v5; // ebx
  Json::ValueType v6; // r8d
  __int64 result; // rax
  char v8; // al
  Json::Value::LargestInt v9; // rbx
  Json::Value::LargestInt v10; // r15
  Json::Value::LargestInt v11; // r12
  bool v12; // al
  Json::Value::ValueHolder v13; // rbx
  std::_Rb_tree_node_base *v14; // rsi
  __int64 v15; // rax
  Json::Value_0::CZString *v16; // r12
  void *v17; // rbp
  unsigned __int8 v18; // [rsp+Fh] [rbp-49h]
  Json::Value_0::CZString v19; // [rsp+10h] [rbp-48h] BYREF

  v5 = (int)a3;
  v6 = Json::Value::type((const Json::Value_0 *const)this);
  result = 0LL;
  if ( v6 == objectValue )
  {
    Json::Value::CZString::CZString(&v19, a2, v5 - (_DWORD)a2, noDuplication_0);
    v8 = 0;
    v9 = *(_QWORD *)(this->value_.int_ + 16);
    v10 = this->value_.int_ + 8;
    if ( v9 )
    {
      v11 = this->value_.int_ + 8;
      do
      {
        while ( !Json::Value::CZString::operator<(v9 + 32, (__int64)&v19) )
        {
          v11 = v9;
          v9 = *(_QWORD *)(v9 + 16);
          if ( !v9 )
            goto LABEL_7;
        }
        v9 = *(_QWORD *)(v9 + 24);
      }
      while ( v9 );
LABEL_7:
      if ( v10 == v11 )
      {
        v13.int_ = (Json::Value::LargestInt)this->value_;
        v14 = (std::_Rb_tree_node_base *)(this->value_.int_ + 8);
      }
      else
      {
        v12 = Json::Value::CZString::operator<((__int64)&v19, v11 + 32);
        v13.int_ = (Json::Value::LargestInt)this->value_;
        if ( v12 )
          v11 = v10;
        v14 = (std::_Rb_tree_node_base *)(v13.int_ + 8);
      }
      if ( v14 == (std::_Rb_tree_node_base *)v11 )
      {
        v8 = 0;
      }
      else
      {
        if ( a4 )
        {
          Json::Value::operator=(a4, (Json::Value_0 *)(v11 + 48));
          v13.int_ = (Json::Value::LargestInt)this->value_;
          v14 = (std::_Rb_tree_node_base *)(this->value_.int_ + 8);
        }
        v15 = std::_Rb_tree_rebalance_for_erase((std::_Rb_tree_node_base *)v11, v14);
        v16 = (Json::Value_0::CZString *)(v15 + 32);
        v17 = (void *)v15;
        Json::Value::~Value((Json::Value_0 *const)(v15 + 48));
        Json::Value::CZString::~CZString(v16);
        operator delete(v17);
        --*(_QWORD *)(v13.int_ + 40);
        v8 = 1;
      }
    }
    v18 = v8;
    Json::Value::CZString::~CZString(&v19);
    return v18;
  }
  return result;
};

// Line 1171: range 000000000C73A82E-000000000C73A839
void __fastcall __noreturn Json::Value::removeMember()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0::CZString *v1; // r14

  Json::Value::CZString::~CZString(v1);
  _Unwind_Resume(v0);
};

// Line 1180: range 00000000152D5EC0-00000000152D5EE9
bool __fastcall Json::Value::removeMember(Json::Value_0 *const this, const char *key, Json::Value_0 *removed)
{
  size_t v4; // rax

  v4 = strlen(key);
  return Json::Value::removeMember((Json::Value *)this, key, &key[v4], removed);
};

// Line 1186: range 00000000152D6230-00000000152D62F3
void __fastcall Json::Value::removeMember(Json::Value *this, const char *str)
{
  unsigned int v2; // eax
  Json::String v3; // [rsp+0h] [rbp-1B8h] BYREF
  Json::Value_0::CZString __x; // [rsp+20h] [rbp-198h] BYREF

  if ( Json::Value::type((const Json::Value_0 *const)this)
    && Json::Value::type((const Json::Value_0 *const)this) != objectValue )
  {
    std::ostringstream::basic_ostringstream(&__x);
    std::operator<<<std::char_traits<char>>(&__x, "in Json::Value::removeMember(): requires objectValue");
    std::stringbuf::str(&v3, &__x._anon_0);
    Json::throwLogicError(&v3);
  }
  if ( Json::Value::type((const Json::Value_0 *const)this) )
  {
    v2 = strlen(str);
    Json::Value::CZString::CZString(&__x, str, v2, noDuplication_0);
    std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::erase(
      (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *const)this->value_.int_,
      &__x);
    Json::Value::CZString::~CZString(&__x);
  }
};

// Line 1192: range 000000000C73A896-000000000C73A8A1
void __fastcall __noreturn Json::Value::removeMember()
{
  struct _Unwind_Exception *v0; // rbp
  Json::Value_0::CZString *v1; // r12

  Json::Value::CZString::~CZString(v1);
  _Unwind_Resume(v0);
};

// Line 1195: range 00000000152D6300-00000000152D6303
void __fastcall Json::Value::removeMember(Json::Value_0 *const this, const Json::String *key)
{
  Json::Value::removeMember((Json::Value *)this, key->_M_dataplus._M_p);
};

// Line 1197: range 00000000152D74C0-00000000152D7780
__int64 __fastcall Json::Value::removeIndex(Json::Value *this, Json::Value_0::ArrayIndex index, Json::Value *a3)
{
  unsigned int v3; // r13d
  Json::Value_0::ArrayIndex v4; // r12d
  Json::Value::LargestInt v7; // rbx
  Json::Value::LargestInt v8; // r15
  Json::Value::LargestInt v9; // r13
  bool v10; // r8
  Json::Value::LargestInt v11; // rax
  std::_Rb_tree_node_base::_Base_ptr *v12; // rax
  const std::piecewise_construct_t *v13; // r9
  std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *v14; // r15
  std::_Rb_tree_node_base *v15; // rbx
  std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr M_node; // rbp
  Json::Value::ValueHolder v17; // r15
  std::_Rb_tree_node_base *v18; // rbx
  Json::Value::LargestInt v19; // r12
  std::_Rb_tree_node_base *v20; // rbp
  bool v21; // al
  std::_Rb_tree_node_base *v22; // rsi
  __int64 v23; // rax
  Json::Value_0::CZString *v24; // r12
  void *v25; // rbp
  std::tuple<const Json::Value::CZString&> *v26; // [rsp+0h] [rbp-98h]
  std::tuple<> *v27; // [rsp+8h] [rbp-90h]
  Json::Value::LargestInt v28; // [rsp+10h] [rbp-88h]
  Json::Value_0::ArrayIndex indexa; // [rsp+24h] [rbp-74h]
  std::tuple<> v30; // [rsp+37h] [rbp-61h] BYREF
  std::tuple<const Json::Value::CZString&> v31; // [rsp+38h] [rbp-60h] BYREF
  Json::Value_0::CZString v32; // [rsp+40h] [rbp-58h] BYREF
  Json::Value_0::CZString v33; // [rsp+50h] [rbp-48h] BYREF

  v3 = 0;
  v4 = index;
  if ( Json::Value::type((const Json::Value_0 *const)this) == arrayValue )
  {
    Json::Value::CZString::CZString(&v32, index);
    v7 = *(_QWORD *)(this->value_.int_ + 16);
    v8 = this->value_.int_ + 8;
    if ( v7 )
    {
      v9 = this->value_.int_ + 8;
      do
      {
        while ( !Json::Value::CZString::operator<(v7 + 32, (__int64)&v32) )
        {
          v9 = v7;
          v7 = *(_QWORD *)(v7 + 16);
          if ( !v7 )
            goto LABEL_8;
        }
        v7 = *(_QWORD *)(v7 + 24);
      }
      while ( v7 );
LABEL_8:
      if ( v8 == v9 )
      {
        v11 = this->value_.int_ + 8;
      }
      else
      {
        v10 = Json::Value::CZString::operator<((__int64)&v32, v9 + 32);
        v11 = this->value_.int_ + 8;
        if ( v10 )
          v9 = v8;
      }
      if ( v11 == v9 )
      {
        v3 = 0;
      }
      else
      {
        if ( a3 )
          Json::Value::operator=(a3, (const Json::Value *)(v9 + 48));
        indexa = Json::Value::size((const Json::Value_0 *const)this) - 1;
        if ( index < indexa )
        {
          do
          {
            Json::Value::CZString::CZString(&v33, v4++);
            v12 = Json::Value::operator[]((Json::Value_0 *)this, v4);
            v14 = (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > > *)this->value_.int_;
            v27 = (std::tuple<> *)v12;
            v15 = *(std::_Rb_tree_node_base **)(this->value_.int_ + 16);
            v28 = this->value_.int_ + 8;
            M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)v28;
            if ( !v15 )
              goto LABEL_22;
            do
            {
              while ( !Json::Value::CZString::operator<((__int64)&v15[1], (__int64)&v33) )
              {
                M_node = v15;
                v15 = v15->_M_left;
                if ( !v15 )
                  goto LABEL_20;
              }
              v15 = v15->_M_right;
            }
            while ( v15 );
LABEL_20:
            if ( (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)v28 == M_node
              || Json::Value::CZString::operator<((__int64)&v33, (__int64)&M_node[1]) )
            {
LABEL_22:
              v31._M_head_impl = &v33;
              M_node = std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<Json::Value::CZString const&>,std::tuple<>>(
                         v14,
                         (std::_Rb_tree<Json::Value::CZString,std::pair<const Json::Value::CZString,Json::Value>,std::_Select1st<std::pair<const Json::Value::CZString,Json::Value> >,std::less<Json::Value::CZString>,std::allocator<std::pair<const Json::Value::CZString,Json::Value> > >::const_iterator)M_node,
                         &std::piecewise_construct,
                         &v31,
                         &v30,
                         v13,
                         v26,
                         v27)._M_node;
            }
            Json::Value::operator=((Json::Value *)&M_node[1]._M_left, (const Json::Value *)v27);
            Json::Value::CZString::~CZString(&v33);
          }
          while ( v4 < indexa );
        }
        Json::Value::CZString::CZString(&v33, indexa);
        v17.int_ = (Json::Value::LargestInt)this->value_;
        v18 = *(std::_Rb_tree_node_base **)(this->value_.int_ + 16);
        v19 = this->value_.int_ + 8;
        if ( v18 )
        {
          v20 = (std::_Rb_tree_node_base *)(this->value_.int_ + 8);
          do
          {
            while ( !Json::Value::CZString::operator<((__int64)&v18[1], (__int64)&v33) )
            {
              v20 = v18;
              v18 = v18->_M_left;
              if ( !v18 )
                goto LABEL_29;
            }
            v18 = v18->_M_right;
          }
          while ( v18 );
LABEL_29:
          if ( v20 == (std::_Rb_tree_node_base *)v19 )
          {
            v17.int_ = (Json::Value::LargestInt)this->value_;
            v22 = (std::_Rb_tree_node_base *)(this->value_.int_ + 8);
          }
          else
          {
            v21 = Json::Value::CZString::operator<((__int64)&v33, (__int64)&v20[1]);
            v17.int_ = (Json::Value::LargestInt)this->value_;
            if ( v21 )
              v20 = (std::_Rb_tree_node_base *)v19;
            v22 = (std::_Rb_tree_node_base *)(v17.int_ + 8);
          }
        }
        else
        {
          v22 = (std::_Rb_tree_node_base *)(this->value_.int_ + 8);
          v20 = v22;
        }
        v23 = std::_Rb_tree_rebalance_for_erase(v20, v22);
        v24 = (Json::Value_0::CZString *)(v23 + 32);
        v25 = (void *)v23;
        Json::Value::~Value((Json::Value_0 *const)(v23 + 48));
        Json::Value::CZString::~CZString(v24);
        operator delete(v25);
        --*(_QWORD *)(v17.int_ + 40);
        v3 = 1;
        Json::Value::CZString::~CZString(&v33);
      }
    }
    Json::Value::CZString::~CZString(&v32);
  }
  return v3;
};

// Line 1211: range 000000000C73AB30-000000000C73AB45
void __fastcall __noreturn Json::Value::removeIndex(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        Json::Value_0::CZString *a9)
{
  struct _Unwind_Exception *v9; // rbp
  Json::Value_0::CZString *v10; // r13

  Json::Value::CZString::~CZString(v10);
  Json::Value::CZString::~CZString(a9);
  _Unwind_Resume(v9);
};

// Line 1221: range 00000000152D5910-00000000152D5923
bool __fastcall Json::Value::isMember(const Json::Value_0 *const this, const char *begin, const char *end)
{
  return Json::Value::find((Json::Value *)this, begin, end) != 0;
};

// Line 1225: range 00000000152D5930-00000000152D5957
bool __fastcall Json::Value::isMember(const Json::Value_0 *const this, const char *key)
{
  size_t v2; // rax

  v2 = strlen(key);
  return Json::Value::isMember(this, key, &key[v2]);
};

// Line 1232: range 00000000152D6310-00000000152D666B
__int64 __fastcall Json::Value::getMemberNames[abi:cxx11](__int64 a1, const Json::Value_0 *a2)
{
  Json::Value::ValueHolder v4; // r14
  unsigned __int64 v5; // rbp
  std::string::size_type M_allocated_capacity; // rax
  std::string::pointer v7; // r12
  __int64 v8; // rbp
  Json::Value::LargestInt v9; // r14
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  __m128i *v11; // rsi
  std::string::size_type v12; // r12
  std::string *v13; // rcx
  const char *v14; // r15
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v15; // rdi
  std::string::size_type v16; // rdx
  unsigned __int64 v17; // rbp
  __m128i *v18; // rax
  std::string::pointer M_p; // r8
  std::string::size_type M_string_length; // rdi
  const __m128i *v21; // rdx
  __m128i *v22; // rcx
  __int64 v23; // rax
  std::string::size_type v24; // [rsp+8h] [rbp-1E0h] BYREF
  Json::String v25; // [rsp+10h] [rbp-1D8h] BYREF
  std::string v26; // [rsp+30h] [rbp-1B8h] BYREF

  if ( Json::Value::type(a2) && Json::Value::type(a2) != objectValue )
  {
    std::ostringstream::basic_ostringstream(&v26);
    std::operator<<<std::char_traits<char>>(&v26, "in Json::Value::getMemberNames(), value must be objectValue");
    std::stringbuf::str(&v25, &v26._M_string_length);
    Json::throwLogicError(&v25);
  }
  if ( Json::Value::type(a2) == nullValue )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)a1 = 0LL;
    return a1;
  }
  v4.int_ = (Json::Value::LargestInt)a2->value_;
  memset(&v25, 0, 24);
  v5 = *(_QWORD *)(v4.int_ + 40);
  if ( v5 > 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error((const char *)&stru_1A1700D9.json_name_ + 7);
  M_allocated_capacity = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    v17 = 32 * v5;
    v18 = (__m128i *)operator new(v17);
    M_p = v25._M_dataplus._M_p;
    M_string_length = v25._M_string_length;
    v7 = (std::string::pointer)v18;
    v21 = (const __m128i *)v25._M_dataplus._M_p;
    if ( (std::string::pointer)v25._M_string_length != v25._M_dataplus._M_p )
    {
      v22 = v18;
      do
      {
        v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
        if ( (const __m128i *)v21->m128i_i64[0] == &v21[1] )
        {
          v22[1] = _mm_loadu_si128(v21 + 1);
        }
        else
        {
          v22->m128i_i64[0] = v21->m128i_i64[0];
          v22[1].m128i_i64[0] = v21[1].m128i_i64[0];
        }
        v23 = v21->m128i_i64[1];
        v21 += 2;
        v22 += 2;
        v22[-2].m128i_i64[1] = v23;
      }
      while ( (const __m128i *)M_string_length != v21 );
    }
    if ( M_p )
      operator delete(M_p);
    M_allocated_capacity = (std::string::size_type)&v7[v17];
    v4.int_ = (Json::Value::LargestInt)a2->value_;
    v25._anon_0._M_allocated_capacity = (std::string::size_type)&v7[v17];
    *(__m128i *)&v25._M_dataplus._M_p = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v7);
  }
  v8 = *(_QWORD *)(v4.int_ + 24);
  v9 = v4.int_ + 8;
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v12 = Json::Value::CZString::length((const Json::Value_0::CZString *const)(v8 + 32));
      v14 = Json::Value::CZString::data((const Json::Value_0::CZString *const)(v8 + 32));
      v26._M_dataplus._M_p = v26._anon_0._M_local_buf;
      if ( &v14[v12] && !v14 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v24 = v12;
      if ( v12 > 0xF )
        break;
      if ( v12 == 1 )
      {
        v26._anon_0._M_local_buf[0] = *v14;
        p_anon_0 = &v26._anon_0;
        goto LABEL_12;
      }
      if ( v12 )
      {
        v15 = &v26._anon_0;
        goto LABEL_21;
      }
      p_anon_0 = &v26._anon_0;
LABEL_12:
      v26._M_string_length = v12;
      p_anon_0->_M_local_buf[v12] = 0;
      v11 = (__m128i *)v25._M_string_length;
      if ( v25._M_string_length != v25._anon_0._M_allocated_capacity )
      {
        *(_QWORD *)v25._M_string_length = v25._M_string_length + 16;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p == &v26._anon_0 )
        {
          v11[1] = _mm_load_si128((const __m128i *)&v26._anon_0);
        }
        else
        {
          v11->m128i_i64[0] = (__int64)v26._M_dataplus._M_p;
          v11[1].m128i_i64[0] = v26._anon_0._M_allocated_capacity;
        }
        v11->m128i_i64[1] = v26._M_string_length;
        v25._M_string_length += 32LL;
        goto LABEL_16;
      }
      std::vector<std::string>::_M_realloc_insert<std::string>(
        (std::vector<std::string> *const)&v25,
        (std::vector<std::string>::iterator)v25._M_string_length,
        &v26,
        v13);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p == &v26._anon_0 )
      {
LABEL_16:
        v8 = std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v8);
        if ( v9 == v8 )
          goto LABEL_27;
      }
      else
      {
        operator delete(v26._M_dataplus._M_p);
        v8 = std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v8);
        if ( v9 == v8 )
        {
LABEL_27:
          v7 = v25._M_dataplus._M_p;
          v16 = v25._M_string_length;
          M_allocated_capacity = v25._anon_0._M_allocated_capacity;
          goto LABEL_28;
        }
      }
    }
    v26._M_dataplus._M_p = (std::string::pointer)std::string::_M_create(&v26, &v24, 0LL);
    v15 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p;
    v26._anon_0._M_allocated_capacity = v24;
LABEL_21:
    memcpy(v15, v14, v12);
    v12 = v24;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p;
    goto LABEL_12;
  }
  v16 = (std::string::size_type)v7;
LABEL_28:
  *(_QWORD *)(a1 + 16) = M_allocated_capacity;
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)v16);
  return a1;
};

// Line 1253: range 00000000152D2870-00000000152D2882
bool __fastcall Json::Value::isNull(const Json::Value_0 *const this)
{
  return Json::Value::type(this) == nullValue;
};

// Line 1255: range 00000000152D28B0-00000000152D28C3
bool __fastcall Json::Value::isBool(const Json::Value_0 *const this)
{
  return Json::Value::type(this) == booleanValue;
};

// Line 1257: range 00000000152D28D0-00000000152D297F
bool __fastcall Json::Value::isInt(const Json::Value_0 *const this)
{
  Json::ValueType v1; // eax
  bool v2; // r8
  double real; // xmm0_8
  double iptr[2]; // [rsp+8h] [rbp-10h] BYREF

  v1 = Json::Value::type(this);
  if ( v1 == uintValue )
    return this->value_.int_ <= 0x7FFFFFFFuLL;
  if ( v1 == realValue )
  {
    real = this->value_.real_;
    if ( this->value_.real_ >= -2147483648.0 && real <= 2147483647.0 )
      return modf(real, iptr) == 0.0;
    return 0;
  }
  else
  {
    v2 = 0;
    if ( v1 != intValue )
      return v2;
    return (unsigned __int64)(this->value_.int_ + 0x80000000LL) <= 0xFFFFFFFF;
  }
};

// Line 1276: range 00000000152D2990-00000000152D2A1F
bool __fastcall Json::Value::isUInt(const Json::Value_0 *const this)
{
  Json::ValueType v1; // eax
  bool v2; // r8
  double real; // xmm0_8
  double iptr[2]; // [rsp+8h] [rbp-10h] BYREF

  v1 = Json::Value::type(this);
  if ( v1 == uintValue )
    return this->value_.int_ <= 0xFFFFFFFFuLL;
  if ( v1 != realValue )
  {
    v2 = 0;
    if ( v1 != intValue )
      return v2;
    return this->value_.int_ <= 0xFFFFFFFFuLL;
  }
  real = this->value_.real_;
  if ( this->value_.real_ >= 0.0 && real <= 4294967295.0 )
    return modf(real, iptr) == 0.0;
  return 0;
};

// Line 1299: range 00000000152D2A30-00000000152D2AB5
bool __fastcall Json::Value::isInt64(const Json::Value_0 *const this)
{
  Json::ValueType v1; // eax
  double real; // xmm0_8
  double iptr[2]; // [rsp+8h] [rbp-10h] BYREF

  v1 = Json::Value::type(this);
  if ( v1 == uintValue )
    return this->value_.int_ >= 0;
  if ( v1 != realValue )
    return v1 == intValue;
  real = this->value_.real_;
  return this->value_.real_ >= -9.223372036854776e18 && real < 9.223372036854776e18 && modf(real, iptr) == 0.0;
};

// Line 1319: range 00000000152D2AC0-00000000152D2B57
bool __fastcall Json::Value::isUInt64(const Json::Value_0 *const this)
{
  Json::ValueType v1; // eax
  bool v2; // r8
  double real; // xmm0_8
  double iptr[2]; // [rsp+8h] [rbp-10h] BYREF

  v1 = Json::Value::type(this);
  v2 = 1;
  if ( v1 == uintValue )
    return v2;
  if ( v1 == realValue )
  {
    real = this->value_.real_;
    if ( this->value_.real_ >= 0.0 && real < 1.844674407370955e19 )
      return modf(real, iptr) == 0.0;
    return 0;
  }
  else
  {
    v2 = 0;
    if ( v1 != intValue )
      return v2;
    return this->value_.int_ >= 0;
  }
};

// Line 1339: range 00000000152D2B60-00000000152D2BD0
bool __fastcall Json::Value::isIntegral(const Json::Value_0 *const this)
{
  Json::ValueType v1; // eax
  bool v2; // r12
  double real; // xmm0_8
  double iptr[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = Json::Value::type(this);
  if ( (unsigned int)v1 <= uintValue )
    return v1 != nullValue;
  v2 = 0;
  if ( v1 == realValue )
  {
    real = this->value_.real_;
    if ( this->value_.real_ >= -9.223372036854776e18 && real < 1.844674407370955e19 && modf(real, iptr) == 0.0 )
      return 1;
  }
  return v2;
};

// Line 1361: range 00000000152D2BE0-00000000152D2C14
bool __fastcall Json::Value::isDouble(const Json::Value_0 *const this)
{
  return Json::Value::type(this) == intValue
      || Json::Value::type(this) == uintValue
      || Json::Value::type(this) == realValue;
};

// Line 1365: range 00000000152D2C20-00000000152D2C43
// attributes: thunk
bool __fastcall Json::Value::isNumeric(const Json::Value_0 *const this)
{
  return Json::Value::isDouble(this);
};

// Line 1369: range 00000000152D2C50-00000000152D2C63
bool __fastcall Json::Value::isArray(const Json::Value_0 *const this)
{
  return Json::Value::type(this) == arrayValue;
};

// Line 1371: range 00000000152D2C70-00000000152D2C83
bool __fastcall Json::Value::isObject(const Json::Value_0 *const this)
{
  return Json::Value::type(this) == objectValue;
};

// Line 1373: range 00000000152D2CD0-00000000152D2F65
void __fastcall Json::Value::Comments::Comments(Json::Value::Comments *this, const Json::Value::Comments *a2)
{
  std::array<std::string,3> *M_head_impl; // rbx
  __int64 *v4; // rax
  void *v5; // rdi
  size_t M_string_length; // r13
  __int64 *v7; // rbp
  std::string::pointer M_p; // r14
  void *v9; // rdi
  size_t v10; // r13
  std::string::pointer v11; // r14
  void *v12; // rdi
  size_t v13; // r13
  std::string::pointer v14; // r14
  std::array<std::string,3> *v15; // r13
  void **v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20[6]; // [rsp+8h] [rbp-30h] BYREF

  M_head_impl = a2->ptr_._M_t._M_t._M_head_impl;
  this->ptr_._M_t._M_t._M_head_impl = 0LL;
  if ( !M_head_impl )
    return;
  v4 = (__int64 *)operator new(0x60uLL);
  v5 = v4 + 2;
  M_string_length = M_head_impl->_M_elems[0]._M_string_length;
  v7 = v4;
  *v4 = (__int64)(v4 + 2);
  M_p = M_head_impl->_M_elems[0]._M_dataplus._M_p;
  if ( &M_head_impl->_M_elems[0]._M_dataplus._M_p[M_string_length] && !M_p )
LABEL_35:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v20[0] = M_string_length;
  if ( M_string_length > 0xF )
  {
    v17 = std::string::_M_create(v4, v20, 0LL);
    *v7 = v17;
    v5 = (void *)v17;
    v7[2] = v20[0];
    goto LABEL_25;
  }
  if ( M_string_length != 1 )
  {
    if ( !M_string_length )
      goto LABEL_7;
LABEL_25:
    memcpy(v5, M_p, M_string_length);
    M_string_length = v20[0];
    v5 = (void *)*v7;
    goto LABEL_7;
  }
  *((_BYTE *)v4 + 16) = *M_p;
LABEL_7:
  v7[1] = M_string_length;
  *((_BYTE *)v5 + M_string_length) = 0;
  v9 = v7 + 6;
  v10 = M_head_impl->_M_elems[1]._M_string_length;
  v7[4] = (__int64)(v7 + 6);
  v11 = M_head_impl->_M_elems[1]._M_dataplus._M_p;
  if ( &v11[v10] && !v11 )
    goto LABEL_35;
  v20[0] = v10;
  if ( v10 > 0xF )
  {
    v18 = std::string::_M_create(v7 + 4, v20, 0LL);
    v7[4] = v18;
    v9 = (void *)v18;
    v7[6] = v20[0];
    goto LABEL_32;
  }
  if ( v10 == 1 )
  {
    *((_BYTE *)v7 + 48) = *v11;
    goto LABEL_12;
  }
  if ( v10 )
  {
LABEL_32:
    memcpy(v9, v11, v10);
    v10 = v20[0];
    v9 = (void *)v7[4];
  }
LABEL_12:
  v7[5] = v10;
  *((_BYTE *)v9 + v10) = 0;
  v12 = v7 + 10;
  v13 = M_head_impl->_M_elems[2]._M_string_length;
  v7[8] = (__int64)(v7 + 10);
  v14 = M_head_impl->_M_elems[2]._M_dataplus._M_p;
  if ( &v14[v13] && !v14 )
    goto LABEL_35;
  v20[0] = v13;
  if ( v13 > 0xF )
  {
    v19 = std::string::_M_create(v7 + 8, v20, 0LL);
    v7[8] = v19;
    v12 = (void *)v19;
    v7[10] = v20[0];
LABEL_34:
    memcpy(v12, v14, v13);
    v13 = v20[0];
    v12 = (void *)v7[8];
    goto LABEL_17;
  }
  if ( v13 == 1 )
  {
    *((_BYTE *)v7 + 80) = *v14;
    goto LABEL_17;
  }
  if ( v13 )
    goto LABEL_34;
LABEL_17:
  v7[9] = v13;
  *((_BYTE *)v12 + v13) = 0;
  v15 = this->ptr_._M_t._M_t._M_head_impl;
  this->ptr_._M_t._M_t._M_head_impl = (std::array<std::string,3> *)v7;
  v16 = (void **)&v15[1];
  if ( v15 )
  {
    do
    {
      while ( 1 )
      {
        v16 -= 4;
        if ( *v16 == v16 + 2 )
          break;
        operator delete(*v16);
        if ( v15 == (std::array<std::string,3> *)v16 )
          goto LABEL_20;
      }
    }
    while ( v15 != (std::array<std::string,3> *)v16 );
LABEL_20:
    operator delete(v15, 0x60uLL);
  }
};

// Line 1378: range 00000000152D2F80-00000000152D3212
void **__fastcall Json::Value::Comments::operator=(void **a1, __int64 **a2)
{
  __int64 *v3; // rbx
  _QWORD *v4; // rax
  size_t v5; // r13
  _BYTE *v6; // rdi
  __int64 *v7; // rbp
  _BYTE *v8; // r14
  _BYTE *v9; // rdi
  size_t v10; // r13
  _BYTE *v11; // r14
  _BYTE *v12; // rdi
  size_t v13; // r13
  _BYTE *v14; // r14
  void **v15; // rbp
  void **v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v4 = (_QWORD *)operator new(0x60uLL);
    v5 = v3[1];
    v6 = v4 + 2;
    v7 = v4;
    *v4 = v4 + 2;
    v8 = (_BYTE *)*v3;
    if ( v5 + *v3 && !v8 )
      goto LABEL_37;
    v21[0] = v5;
    if ( v5 > 0xF )
    {
      v18 = std::string::_M_create(v4, v21, 0LL);
      *v7 = v18;
      v6 = (_BYTE *)v18;
      v7[2] = v21[0];
    }
    else
    {
      if ( v5 == 1 )
      {
        *((_BYTE *)v4 + 16) = *v8;
LABEL_7:
        v7[1] = v5;
        v6[v5] = 0;
        v9 = v7 + 6;
        v10 = v3[5];
        v7[4] = (__int64)(v7 + 6);
        v11 = (_BYTE *)v3[4];
        if ( &v11[v10] && !v11 )
          goto LABEL_37;
        v21[0] = v10;
        if ( v10 > 0xF )
        {
          v19 = std::string::_M_create(v7 + 4, v21, 0LL);
          v7[4] = v19;
          v9 = (_BYTE *)v19;
          v7[6] = v21[0];
        }
        else
        {
          if ( v10 == 1 )
          {
            *((_BYTE *)v7 + 48) = *v11;
            goto LABEL_12;
          }
          if ( !v10 )
          {
LABEL_12:
            v7[5] = v10;
            v9[v10] = 0;
            v12 = v7 + 10;
            v13 = v3[9];
            v7[8] = (__int64)(v7 + 10);
            v14 = (_BYTE *)v3[8];
            if ( !&v14[v13] || v14 )
            {
              v21[0] = v13;
              if ( v13 > 0xF )
              {
                v20 = std::string::_M_create(v7 + 8, v21, 0LL);
                v7[8] = v20;
                v12 = (_BYTE *)v20;
                v7[10] = v21[0];
              }
              else
              {
                if ( v13 == 1 )
                {
                  *((_BYTE *)v7 + 80) = *v14;
LABEL_17:
                  v7[9] = v13;
                  v3 = v7;
                  v12[v13] = 0;
                  goto LABEL_18;
                }
                if ( !v13 )
                  goto LABEL_17;
              }
              memcpy(v12, v14, v13);
              v13 = v21[0];
              v12 = (_BYTE *)v7[8];
              goto LABEL_17;
            }
LABEL_37:
            std::__throw_logic_error("basic_string::_M_construct null not valid");
          }
        }
        memcpy(v9, v11, v10);
        v10 = v21[0];
        v9 = (_BYTE *)v7[4];
        goto LABEL_12;
      }
      if ( !v5 )
        goto LABEL_7;
    }
    memcpy(v6, v8, v5);
    v5 = v21[0];
    v6 = (_BYTE *)*v7;
    goto LABEL_7;
  }
LABEL_18:
  v15 = (void **)*a1;
  *a1 = v3;
  if ( v15 )
  {
    v16 = v15 + 12;
    do
    {
      while ( 1 )
      {
        v16 -= 4;
        if ( *v16 == v16 + 2 )
          break;
        operator delete(*v16);
        if ( v15 == v16 )
          goto LABEL_22;
      }
    }
    while ( v15 != v16 );
LABEL_22:
    operator delete(v15, 0x60uLL);
  }
  return a1;
};

// Line 1383: range 00000000152D3250-00000000152D32A5
Json::Value::Comments *__fastcall Json::Value::Comments::operator=(
        Json::Value::Comments *const this,
        Json::Value::Comments *that)
{
  std::array<std::string,3> *M_head_impl; // rax
  std::array<std::string,3> *v3; // rbp
  void **v4; // rbx

  M_head_impl = that->ptr_._M_t._M_t._M_head_impl;
  that->ptr_._M_t._M_t._M_head_impl = 0LL;
  v3 = this->ptr_._M_t._M_t._M_head_impl;
  this->ptr_._M_t._M_t._M_head_impl = M_head_impl;
  if ( v3 )
  {
    v4 = (void **)&v3[1];
    do
    {
      while ( 1 )
      {
        v4 -= 4;
        if ( *v4 == v4 + 2 )
          break;
        operator delete(*v4);
        if ( v3 == (std::array<std::string,3> *)v4 )
          goto LABEL_5;
      }
    }
    while ( v3 != (std::array<std::string,3> *)v4 );
LABEL_5:
    operator delete(v3, 0x60uLL);
  }
  return this;
};

// Line 1392: range 00000000152D3780-00000000152D3860
Json::String *__fastcall Json::Value::Comments::get[abi:cxx11](
        Json::String *retstr,
        const Json::Value::Comments *const this,
        Json::CommentPlacement slot)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::array<std::string,3> *M_head_impl; // rcx
  std::string *v6; // rdx
  char *M_p; // rbp
  std::string::size_type M_string_length; // r13
  Json::String *result; // rax
  char *v10; // rax
  std::string::size_type v11[4]; // [rsp+8h] [rbp-20h] BYREF

  p_anon_0 = &retstr->_anon_0;
  M_head_impl = this->ptr_._M_t._M_t._M_head_impl;
  if ( this->ptr_._M_t._M_t._M_head_impl )
  {
    retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
    v6 = &M_head_impl->_M_elems[slot];
    M_p = v6->_M_dataplus._M_p;
    M_string_length = v6->_M_string_length;
    if ( &v6->_M_dataplus._M_p[M_string_length] )
    {
      if ( !M_p )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
    }
    v11[0] = v6->_M_string_length;
    if ( M_string_length > 0xF )
    {
      v10 = (char *)std::string::_M_create(retstr, v11, 0LL);
      retstr->_M_dataplus._M_p = v10;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10;
      retstr->_anon_0._M_allocated_capacity = v11[0];
    }
    else
    {
      if ( M_string_length == 1 )
      {
        retstr->_anon_0._M_local_buf[0] = *M_p;
LABEL_7:
        retstr->_M_string_length = M_string_length;
        result = retstr;
        p_anon_0->_M_local_buf[M_string_length] = 0;
        return result;
      }
      if ( !M_string_length )
        goto LABEL_7;
    }
    memcpy(p_anon_0, M_p, M_string_length);
    M_string_length = v11[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
    goto LABEL_7;
  }
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  result = retstr;
  retstr->_M_string_length = 0LL;
  retstr->_anon_0._M_local_buf[0] = 0;
  return result;
};

// Line 1398: range 00000000152D3870-00000000152D39EE
void __fastcall Json::Value::Comments::set(Json::Value::Comments *const this, unsigned int slot, __int64 a3)
{
  std::array<std::string,3> *v4; // rax
  __int64 v5; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v6; // rsi
  size_t v7; // rdx
  char *v8; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v9; // rdi
  __int64 v10; // rax
  std::array<std::string,3> *v11; // rax
  std::array<std::string,3> *M_head_impl; // r14
  void **v13; // r13

  if ( !this->ptr_._M_t._M_t._M_head_impl )
  {
    v11 = (std::array<std::string,3> *)operator new(0x60uLL);
    M_head_impl = this->ptr_._M_t._M_t._M_head_impl;
    this->ptr_._M_t._M_t._M_head_impl = v11;
    memset(v11, 0, sizeof(std::array<std::string,3>));
    v11->_M_elems[0]._M_dataplus._M_p = v11->_M_elems[0]._anon_0._M_local_buf;
    v11->_M_elems[1]._M_dataplus._M_p = v11->_M_elems[1]._anon_0._M_local_buf;
    v11->_M_elems[2]._M_dataplus._M_p = v11->_M_elems[2]._anon_0._M_local_buf;
    if ( M_head_impl )
    {
      v13 = (void **)&M_head_impl[1];
      do
      {
        while ( 1 )
        {
          v13 -= 4;
          if ( *v13 == v13 + 2 )
            break;
          operator delete(*v13);
          if ( M_head_impl == (std::array<std::string,3> *)v13 )
            goto LABEL_14;
        }
      }
      while ( M_head_impl != (std::array<std::string,3> *)v13 );
LABEL_14:
      operator delete(M_head_impl, 0x60uLL);
    }
  }
  if ( (int)slot <= 2 )
  {
    v4 = this->ptr_._M_t._M_t._M_head_impl;
    v5 = slot;
    v6 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)a3;
    v7 = *(_QWORD *)(a3 + 8);
    v8 = (char *)this->ptr_._M_t._M_t._M_head_impl + v5 * 32;
    v9 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)v8;
    if ( *(_QWORD *)a3 == a3 + 16 )
    {
      if ( v7 )
      {
        if ( v7 == 1 )
          v9->_M_local_buf[0] = *(_BYTE *)(a3 + 16);
        else
          memcpy(v9, v6, v7);
        v7 = *(_QWORD *)(a3 + 8);
        v9 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)v8;
      }
      *((_QWORD *)v8 + 1) = v7;
      v9->_M_local_buf[v7] = 0;
      v9 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)a3;
      goto LABEL_7;
    }
    if ( v9 == &v4->_M_elems[v5]._anon_0 )
    {
      *(_QWORD *)v8 = v6;
      *((_QWORD *)v8 + 1) = v7;
      *((_QWORD *)v8 + 2) = *(_QWORD *)(a3 + 16);
    }
    else
    {
      *(_QWORD *)v8 = v6;
      v10 = *((_QWORD *)v8 + 2);
      *((_QWORD *)v8 + 1) = v7;
      *((_QWORD *)v8 + 2) = *(_QWORD *)(a3 + 16);
      if ( v9 )
      {
        *(_QWORD *)a3 = v9;
        *(_QWORD *)(a3 + 16) = v10;
LABEL_7:
        *(_QWORD *)(a3 + 8) = 0LL;
        v9->_M_local_buf[0] = 0;
        return;
      }
    }
    *(_QWORD *)a3 = a3 + 16;
    v9 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(a3 + 16);
    goto LABEL_7;
  }
};

// Line 1408: range 00000000152D5980-00000000152D5ACB
void __fastcall Json::Value::setComment(Json::Value::Comments *a1, __int64 a2, const std::allocator<char> *a3)
{
  std::string::size_type v3; // rax
  unsigned int v4; // r12d
  char *v5; // rdx
  char v6; // cl
  Json::Value::Comments *v7; // rdi
  Json::String v8; // [rsp+0h] [rbp-1B8h] BYREF
  std::string msg; // [rsp+20h] [rbp-198h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
  {
LABEL_2:
    std::string::basic_string(&msg, "assert json failed", a3);
    Json::throwLogicError(&msg);
  }
  v4 = (unsigned int)a3;
  v5 = *(char **)a2;
  if ( *(_BYTE *)(*(_QWORD *)a2 + v3 - 1) != 10 )
  {
    v6 = *v5;
    if ( !*v5 )
      goto LABEL_6;
    goto LABEL_5;
  }
  std::string::_M_erase(a2, v3 - 1, 1LL);
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    goto LABEL_2;
  v5 = *(char **)a2;
  v6 = **(_BYTE **)a2;
  if ( v6 )
  {
LABEL_5:
    if ( v6 != 47 )
    {
      std::ostringstream::basic_ostringstream(&msg);
      std::operator<<<std::char_traits<char>>(&msg, "in Json::Value::setComment(): Comments must start with /");
      std::stringbuf::str(&v8, &msg._M_string_length);
      Json::throwLogicError(&v8);
    }
  }
LABEL_6:
  v7 = a1 + 2;
  msg._M_dataplus._M_p = msg._anon_0._M_local_buf;
  if ( (char *)(a2 + 16) == v5 )
  {
    msg._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(a2 + 16));
  }
  else
  {
    msg._M_dataplus._M_p = v5;
    msg._anon_0._M_allocated_capacity = *(_QWORD *)(a2 + 16);
  }
  *(_QWORD *)a2 = a2 + 16;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 0;
  msg._M_string_length = v3;
  Json::Value::Comments::set(v7, v4, (__int64)&msg);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg._M_dataplus._M_p != &msg._anon_0 )
    operator delete(msg._M_dataplus._M_p);
};

// Line 1421: range 00000000152D39F0-00000000152D39F4
bool __fastcall Json::Value::hasComment(const Json::Value_0 *const this, Json::CommentPlacement placement)
{
  return Json::Value::Comments::has(&this->comments_, placement);
};

// Line 1424: range 00000000152D3A00-00000000152D3A13
Json::String *__fastcall Json::Value::getComment[abi:cxx11](
        Json::String *retstr,
        const Json::Value_0 *const this,
        Json::CommentPlacement placement)
{
  Json::Value::Comments::get[abi:cxx11](retstr, &this->comments_, placement);
  return retstr;
};

// Line 1428: range 00000000152D3A20-00000000152D3A24
void __fastcall Json::Value::setOffsetStart(Json::Value_0 *const this, ptrdiff_t start)
{
  this->start_ = start;
};

// Line 1430: range 00000000152D3A30-00000000152D3A34
void __fastcall Json::Value::setOffsetLimit(Json::Value_0 *const this, ptrdiff_t limit)
{
  this->limit_ = limit;
};

// Line 1432: range 00000000152D3A40-00000000152D3A44
ptrdiff_t __fastcall Json::Value::getOffsetStart(const Json::Value_0 *const this)
{
  return this->start_;
};

// Line 1434: range 00000000152D3A50-00000000152D3A54
ptrdiff_t __fastcall Json::Value::getOffsetLimit(const Json::Value_0 *const this)
{
  return this->limit_;
};

// Line 1436: range 00000000152D7CD0-00000000152D7DEA
_QWORD *__fastcall Json::Value::toStyledString[abi:cxx11](_QWORD *a1, const Json::Value_0 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  void *v10[2]; // [rsp+0h] [rbp-78h] BYREF
  char v11; // [rsp+10h] [rbp-68h] BYREF
  Json::StreamWriterBuilder v12; // [rsp+20h] [rbp-58h] BYREF

  Json::StreamWriterBuilder::StreamWriterBuilder(&v12);
  v2 = a1 + 2;
  if ( Json::Value::hasComment(a2, commentBefore) )
  {
    *((_BYTE *)a1 + 16) = 10;
    v3 = 1LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = a1 + 2;
  a1[1] = v3;
  *((_BYTE *)v2 + v3) = 0;
  Json::writeString[abi:cxx11](v10, &v12, a2);
  std::string::_M_append(a1, (const char *)v10[0], v10[1]);
  if ( v10[0] != &v11 )
    operator delete(v10[0]);
  v4 = a1[1];
  v5 = *a1;
  v6 = v4 + 1;
  if ( (_QWORD *)*a1 == v2 )
    v7 = 15LL;
  else
    v7 = a1[2];
  if ( v6 > v7 )
  {
    std::string::_M_mutate(a1, a1[1], 0LL, 0LL, 1LL);
    v5 = *a1;
  }
  *(_BYTE *)(v5 + v4) = 10;
  v8 = *a1;
  a1[1] = v6;
  *(_BYTE *)(v8 + v4 + 1) = 0;
  Json::StreamWriterBuilder::~StreamWriterBuilder(&v12);
  return a1;
};

// Line 1446: range 00000000152D3A60-00000000152D3AD4
Json::Value_0::const_iterator __fastcall Json::Value::begin(const Json::Value_0 *const this)
{
  std::map<Json::Value::CZString,Json::Value>::iterator current; // [rsp+18h] [rbp-30h] BYREF
  Json::ValueConstIterator v2; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)(Json::Value::type(this) - 6) <= 1 && this->value_.int_ )
  {
    current._M_node = *(std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr *)(this->value_.int_ + 24);
    Json::ValueConstIterator::ValueConstIterator(&v2, &current);
    return (Json::Value_0::const_iterator)_mm_load_si128((const __m128i *)&v2);
  }
  else
  {
    Json::ValueConstIterator::ValueConstIterator(&v2);
    return (Json::Value_0::const_iterator)_mm_load_si128((const __m128i *)&v2);
  }
};

// Line 1459: range 00000000152D3AE0-00000000152D3B54
Json::Value_0::const_iterator __fastcall Json::Value::end(const Json::Value_0 *const this)
{
  std::map<Json::Value::CZString,Json::Value>::iterator current; // [rsp+18h] [rbp-30h] BYREF
  Json::ValueConstIterator v2; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)(Json::Value::type(this) - 6) <= 1 && this->value_.int_ )
  {
    current._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)(this->value_.int_ + 8);
    Json::ValueConstIterator::ValueConstIterator(&v2, &current);
    return (Json::Value_0::const_iterator)_mm_load_si128((const __m128i *)&v2);
  }
  else
  {
    Json::ValueConstIterator::ValueConstIterator(&v2);
    return (Json::Value_0::const_iterator)_mm_load_si128((const __m128i *)&v2);
  }
};

// Line 1472: range 00000000152D3B60-00000000152D3BC2
Json::Value_0::iterator __fastcall Json::Value::begin(Json::ValueIterator *a1, Json::Value_0 *const this)
{
  std::map<Json::Value::CZString,Json::Value>::iterator current; // [rsp+8h] [rbp-20h] BYREF
  Json::Value_0::iterator result; // 0:rax.9

  if ( (unsigned int)(Json::Value::type(this) - 6) <= 1 && this->value_.int_ )
  {
    current._M_node = *(std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr *)(this->value_.int_ + 24);
    Json::ValueIterator::ValueIterator(a1, &current);
    result.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)a1;
  }
  else
  {
    Json::ValueIterator::ValueIterator(a1);
    result.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)a1;
  }
  return result;
};

// Line 1485: range 00000000152D3BD0-00000000152D3C32
Json::Value_0::iterator __fastcall Json::Value::end(Json::ValueIterator *a1, Json::Value_0 *const this)
{
  std::map<Json::Value::CZString,Json::Value>::iterator current; // [rsp+8h] [rbp-20h] BYREF
  Json::Value_0::iterator result; // 0:rax.9

  if ( (unsigned int)(Json::Value::type(this) - 6) <= 1 && this->value_.int_ )
  {
    current._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)(this->value_.int_ + 8);
    Json::ValueIterator::ValueIterator(a1, &current);
    result.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)a1;
  }
  else
  {
    Json::ValueIterator::ValueIterator(a1);
    result.current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)a1;
  }
  return result;
};

// Line 1506: range 00000000152D3C80-00000000152D3D47
void __fastcall Json::PathArgument::PathArgument(Json::PathArgument *const this, const char *key)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r13
  std::string::size_type v3; // rax
  size_t v4; // r12
  char *v5; // rax
  std::string::size_type v6[6]; // [rsp+8h] [rbp-30h] BYREF

  p_anon_0 = &this->key_._anon_0;
  this->key_._M_dataplus._M_p = this->key_._anon_0._M_local_buf;
  if ( !key )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v3 = strlen(key);
  v6[0] = v3;
  v4 = v3;
  if ( v3 > 0xF )
  {
    v5 = (char *)std::string::_M_create(this, v6, 0LL);
    this->key_._M_dataplus._M_p = v5;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5;
    this->key_._anon_0._M_allocated_capacity = v6[0];
    goto LABEL_9;
  }
  if ( v3 != 1 )
  {
    if ( !v3 )
      goto LABEL_5;
LABEL_9:
    memcpy(p_anon_0, key, v4);
    v3 = v6[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->key_._M_dataplus._M_p;
    goto LABEL_5;
  }
  this->key_._anon_0._M_local_buf[0] = *key;
LABEL_5:
  this->key_._M_string_length = v3;
  p_anon_0->_M_local_buf[v3] = 0;
  *(_QWORD *)&this->index_ = 0x200000000LL;
};

// Line 1513: range 00000000152D6A50-00000000152D6C05
void __fastcall Json::Path::Path(
        std::vector<Json::PathArgument> *this,
        Json::String *a2,
        int a3,
        __int64 a4,
        Json::PathArgument *a5,
        Json::PathArgument *a6,
        Json::PathArgument *a7)
{
  const Json::PathArgument **v10; // rcx
  const Json::PathArgument **v11; // rbx
  std::_Vector_base<const Json::PathArgument*>::pointer M_end_of_storage; // r8
  __m128 v13; // xmm0
  std::_Vector_base<const Json::PathArgument*>::pointer v14; // rsi
  std::_Vector_base<const Json::PathArgument*>::pointer M_finish; // rsi
  int v16; // [rsp-8h] [rbp-88h]
  __int64 v18; // [rsp+8h] [rbp-78h] BYREF
  __int64 v19; // [rsp+10h] [rbp-70h]
  int v20; // [rsp+18h] [rbp-68h]
  Json::PathArgument *v21; // [rsp+20h] [rbp-60h] BYREF
  std::vector<const Json::PathArgument*> src; // [rsp+28h] [rbp-58h] BYREF
  int v23; // [rsp+40h] [rbp-40h]
  int v24; // [rsp+48h] [rbp-38h]
  void *v25; // [rsp+50h] [rbp-30h]
  int v26; // [rsp+58h] [rbp-28h]
  char v27; // [rsp+60h] [rbp-20h]

  this->_M_impl._M_end_of_storage = 0LL;
  *(_OWORD *)&this->_M_impl._M_start = 0LL;
  v18 = a4;
  *(_OWORD *)&src._M_impl._M_start = 0LL;
  v11 = (const Json::PathArgument **)operator new(0x28uLL);
  M_end_of_storage = v11 + 5;
  src._M_impl._M_start = v11;
  src._M_impl._M_end_of_storage = v11 + 5;
  v13 = _mm_loadh_ps((const double *)&v18);
  src._M_impl._M_finish = v11 + 2;
  v21 = a5;
  *(__m128 *)v11 = v13;
  if ( v11 + 5 != v11 + 2 )
  {
    v14 = v11 + 3;
    v11[2] = a5;
    src._M_impl._M_finish = v11 + 3;
    v21 = a6;
    if ( v11 + 3 != M_end_of_storage )
      goto LABEL_3;
LABEL_9:
    std::vector<Json::PathArgument const*>::_M_realloc_insert<Json::PathArgument const*>(
      &src,
      (std::vector<const Json::PathArgument*>::iterator)v14,
      (const Json::PathArgument **)&v21,
      v10);
    M_finish = src._M_impl._M_finish;
    v21 = a7;
    if ( src._M_impl._M_finish != src._M_impl._M_end_of_storage )
      goto LABEL_4;
    goto LABEL_10;
  }
  std::vector<Json::PathArgument const*>::_M_realloc_insert<Json::PathArgument const*>(
    &src,
    (std::vector<const Json::PathArgument*>::iterator)(v11 + 5),
    (const Json::PathArgument **)&v21,
    v10);
  v14 = src._M_impl._M_finish;
  M_end_of_storage = src._M_impl._M_end_of_storage;
  v21 = a6;
  if ( src._M_impl._M_finish == src._M_impl._M_end_of_storage )
    goto LABEL_9;
LABEL_3:
  *v14 = a6;
  M_finish = v14 + 1;
  src._M_impl._M_finish = M_finish;
  v21 = a7;
  if ( M_finish != M_end_of_storage )
  {
LABEL_4:
    *M_finish = a7;
    src._M_impl._M_finish = M_finish + 1;
    goto LABEL_5;
  }
LABEL_10:
  std::vector<Json::PathArgument const*>::_M_realloc_insert<Json::PathArgument const*>(
    &src,
    (std::vector<const Json::PathArgument*>::iterator)M_finish,
    (const Json::PathArgument **)&v21,
    v10);
LABEL_5:
  Json::Path::makePath(
    this,
    a2,
    v16,
    a3,
    v18,
    v19,
    v20,
    (int)v21,
    (int)src._M_impl._M_start,
    src._M_impl._M_finish,
    (int)src._M_impl._M_end_of_storage,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( src._M_impl._M_start )
    operator delete(src._M_impl._M_start);
};

// Line 1526: range 00000000152D6670-00000000152D6A41
void __fastcall Json::Path::makePath(
        std::vector<Json::PathArgument> *this,
        Json::String *a2,
        const Json::PathArgument *const **a3)
{
  std::string::pointer M_p; // r15
  char *v4; // rbp
  char v7; // al
  char *v8; // rbx
  Json::ArrayIndex i; // esi
  int v10; // eax
  Json::PathArgument *v11; // rcx
  std::_Vector_base<Json::PathArgument>::pointer v12; // rsi
  std::string::pointer v13; // rbx
  __int64 *v14; // rax
  std::string::pointer v15; // r8
  Json::PathArgument *v16; // rcx
  std::_Vector_base<Json::PathArgument>::pointer M_finish; // rsi
  void *v18; // rax
  __int64 *v19; // rdi
  Json::String v20; // [rsp+0h] [rbp-C8h]
  std::vector<const Json::PathArgument*>::const_iterator itInArg; // [rsp+38h] [rbp-90h] BYREF
  void *v22[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-78h] BYREF
  Json::PathArgument v24; // [rsp+60h] [rbp-68h] BYREF

  M_p = a2->_M_dataplus._M_p;
  v20._anon_0._M_allocated_capacity = (std::string::size_type)a3;
  v4 = &a2->_M_dataplus._M_p[a2->_M_string_length];
  itInArg._M_current = *a3;
  while ( v4 != M_p )
  {
    while ( 1 )
    {
      v7 = *M_p;
      if ( *M_p == 91 )
        break;
      if ( v7 == 37 )
      {
        ++M_p;
        Json::Path::addPathInArg(
          (Json::Path *const)this,
          a2,
          (const Json::Path::InArgs *)v20._anon_0._M_allocated_capacity,
          &itInArg,
          kindKey);
      }
      else
      {
        if ( v7 != 46 && v7 != 93 )
        {
          v13 = M_p;
          do
          {
            if ( strchr("[.", *v13) )
              break;
            ++v13;
          }
          while ( v4 != v13 );
          v14 = v23;
          v15 = (std::string::pointer)(v13 - M_p);
          *(&v20._anon_0._M_allocated_capacity + 1) = (std::string::size_type)v23;
          v22[0] = v23;
          v24.key_._M_dataplus._M_p = (std::string::pointer)(v13 - M_p);
          if ( (unsigned __int64)(v13 - M_p) > 0xF )
          {
            v20._M_string_length = (std::string::size_type)&v24;
            v18 = (void *)std::string::_M_create(v22, &v24, 0LL);
            v15 = (std::string::pointer)(v13 - M_p);
            v22[0] = v18;
            v19 = (__int64 *)v18;
            v23[0] = (__int64)v24.key_._M_dataplus._M_p;
          }
          else
          {
            if ( v15 == (std::string::pointer)1 )
            {
              v20._M_string_length = (std::string::size_type)&v24;
              LOBYTE(v23[0]) = *M_p;
              v14 = v23;
LABEL_28:
              v22[1] = v15;
              v15[(_QWORD)v14] = 0;
              Json::PathArgument::PathArgument(&v24, v20);
              M_finish = this->_M_impl._M_finish;
              if ( M_finish == this->_M_impl._M_end_of_storage )
              {
                std::vector<Json::PathArgument>::_M_realloc_insert<Json::PathArgument>(
                  this,
                  (std::vector<Json::PathArgument>::iterator)M_finish,
                  (Json::PathArgument *)v20._M_string_length,
                  v16);
                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24.key_._M_dataplus._M_p != &v24.key_._anon_0 )
                  operator delete(v24.key_._M_dataplus._M_p);
              }
              else
              {
                M_finish->key_._M_dataplus._M_p = M_finish->key_._anon_0._M_local_buf;
                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24.key_._M_dataplus._M_p == &v24.key_._anon_0 )
                {
                  M_finish->key_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_load_si128((const __m128i *)&v24.key_._anon_0);
                }
                else
                {
                  M_finish->key_._M_dataplus._M_p = v24.key_._M_dataplus._M_p;
                  M_finish->key_._anon_0._M_allocated_capacity = v24.key_._anon_0._M_allocated_capacity;
                }
                M_finish->key_._M_string_length = v24.key_._M_string_length;
                M_finish->index_ = v24.index_;
                M_finish->kind_ = v24.kind_;
                ++this->_M_impl._M_finish;
              }
              if ( v22[0] != *((void **)&v20._anon_0._M_allocated_capacity + 1) )
                operator delete(v22[0]);
              M_p = v13;
              goto LABEL_7;
            }
            if ( !v15 )
            {
              v20._M_string_length = (std::string::size_type)&v24;
              goto LABEL_28;
            }
            v19 = v23;
            v20._M_string_length = (std::string::size_type)&v24;
          }
          memcpy(v19, M_p, (size_t)v15);
          v15 = v24.key_._M_dataplus._M_p;
          v14 = (__int64 *)v22[0];
          goto LABEL_28;
        }
        ++M_p;
      }
LABEL_7:
      if ( v4 == M_p )
        return;
    }
    v8 = M_p + 1;
    if ( M_p[1] == 37 )
    {
      Json::Path::addPathInArg(
        (Json::Path *const)this,
        a2,
        (const Json::Path::InArgs *)v20._anon_0._M_allocated_capacity,
        &itInArg,
        kindIndex);
      if ( v8 == v4 )
        goto LABEL_36;
    }
    else
    {
      for ( i = 0; v4 != v8; i = v10 + 10 * i - 48 )
      {
        v10 = *v8;
        if ( (unsigned __int8)(*v8 - 48) > 9u )
          break;
        ++v8;
      }
      Json::PathArgument::PathArgument(&v24, i);
      v12 = this->_M_impl._M_finish;
      if ( v12 == this->_M_impl._M_end_of_storage )
      {
        std::vector<Json::PathArgument>::_M_realloc_insert<Json::PathArgument>(
          this,
          (std::vector<Json::PathArgument>::iterator)v12,
          &v24,
          v11);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24.key_._M_dataplus._M_p != &v24.key_._anon_0 )
          operator delete(v24.key_._M_dataplus._M_p);
      }
      else
      {
        v12->key_._M_dataplus._M_p = v12->key_._anon_0._M_local_buf;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24.key_._M_dataplus._M_p == &v24.key_._anon_0 )
        {
          v12->key_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_load_si128((const __m128i *)&v24.key_._anon_0);
        }
        else
        {
          v12->key_._M_dataplus._M_p = v24.key_._M_dataplus._M_p;
          v12->key_._anon_0._M_allocated_capacity = v24.key_._anon_0._M_allocated_capacity;
        }
        v12->key_._M_string_length = v24.key_._M_string_length;
        v12->index_ = v24.index_;
        v12->kind_ = v24.kind_;
        ++this->_M_impl._M_finish;
      }
      if ( v8 == v4 )
      {
LABEL_36:
        M_p = v4;
        goto LABEL_20;
      }
    }
    M_p = v8 + 1;
    if ( v8[1] == 93 )
      goto LABEL_7;
LABEL_20:
    Json::Path::invalidPath(a2, (_DWORD)M_p - LODWORD(a2->_M_dataplus._M_p));
  }
};

// Line 1571: range 00000000152D3DB0-00000000152D3E79
void __fastcall Json::Path::invalidPath(const Json::String *a1, int a2)
{
  ;
};

// Line 1573: range 00000000152D5870-00000000152D5908
const Json::Value_0 *__fastcall Json::Path::resolve(const Json::Path *const this, const Json::Value_0 *root)
{
  std::_Vector_base<Json::PathArgument>::pointer M_start; // rbx
  Json::PathArgument *M_finish; // r12
  Json::PathArgument::Kind kind; // eax
  Json::Value *v6; // rdi
  Json::Value_0::ArrayIndex index; // esi

  M_start = this->args_._M_impl._M_start;
  M_finish = this->args_._M_impl._M_finish;
  if ( this->args_._M_impl._M_start == M_finish )
    return root;
  while ( 1 )
  {
    while ( 1 )
    {
      kind = M_start->kind_;
      if ( kind != kindIndex )
        break;
      v6 = (Json::Value *)root;
      if ( !Json::Value::isArray(root) )
        return (const Json::Value_0 *)Json::Value::nullSingleton(v6);
      v6 = (Json::Value *)root;
      if ( !Json::Value::isValidIndex(root, M_start->index_) )
        return (const Json::Value_0 *)Json::Value::nullSingleton(v6);
      index = M_start->index_;
      ++M_start;
      root = (const Json::Value_0 *)Json::Value::operator[]((Json::Value *)root, index);
      if ( M_finish == M_start )
        return root;
    }
    if ( kind == kindKey )
    {
      v6 = (Json::Value *)root;
      if ( !Json::Value::isObject(root) )
        break;
      v6 = (Json::Value *)root;
      root = Json::Value::operator[](root, &M_start->key_);
      if ( root == Json::Value::nullSingleton(v6) )
        break;
    }
    if ( M_finish == ++M_start )
      return root;
  }
  return (const Json::Value_0 *)Json::Value::nullSingleton(v6);
};

// Line 1598: range 00000000152D6F20-00000000152D6FDA
Json::Value_0 *__fastcall Json::Path::resolve(
        Json::Value_0 *retstr,
        const Json::Path *const this,
        const Json::Value_0 *root,
        const Json::Value_0 *defaultValue)
{
  std::_Vector_base<Json::PathArgument>::pointer M_start; // rbx
  Json::PathArgument *M_finish; // r12
  Json::PathArgument::Kind kind; // eax
  Json::Value_0::ArrayIndex index; // esi
  Json::Value *v12; // rdi

  M_start = this->args_._M_impl._M_start;
  M_finish = this->args_._M_impl._M_finish;
  if ( this->args_._M_impl._M_start == M_finish )
  {
LABEL_9:
    Json::Value::Value((Json::Value *)retstr, (const Json::Value *)root);
    return retstr;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        kind = M_start->kind_;
        if ( kind != kindIndex )
          break;
        if ( !Json::Value::isArray(root) || !Json::Value::isValidIndex(root, M_start->index_) )
          goto LABEL_12;
        index = M_start->index_;
        ++M_start;
        root = (const Json::Value_0 *)Json::Value::operator[]((Json::Value *)root, index);
        if ( M_finish == M_start )
          goto LABEL_9;
      }
      if ( kind == kindKey )
      {
        if ( !Json::Value::isObject(root) )
          break;
        v12 = (Json::Value *)root;
        root = Json::Value::operator[](root, &M_start->key_);
        if ( root == Json::Value::nullSingleton(v12) )
          break;
      }
      if ( M_finish == ++M_start )
        goto LABEL_9;
    }
LABEL_12:
    Json::Value::Value((Json::Value *)retstr, (const Json::Value *)defaultValue);
    return retstr;
  }
};

// Line 1616: range 00000000152D7C00-00000000152D7C6E
Json::Value_0 *__fastcall Json::Path::make(const Json::Path *const this, Json::Value_0 *root)
{
  std::_Vector_base<Json::PathArgument>::pointer M_start; // rbx
  Json::PathArgument *M_finish; // r12
  Json::PathArgument::Kind kind; // eax

  M_start = this->args_._M_impl._M_start;
  M_finish = this->args_._M_impl._M_finish;
  if ( this->args_._M_impl._M_start != M_finish )
  {
    do
    {
      while ( 1 )
      {
        kind = M_start->kind_;
        if ( kind != kindIndex )
          break;
        ++M_start;
        Json::Value::isArray(root);
        root = (Json::Value_0 *)Json::Value::operator[](root, M_start[-1].index_);
        if ( M_finish == M_start )
          return root;
      }
      if ( kind == kindKey )
      {
        Json::Value::isObject(root);
        root = Json::Value::operator[](root, &M_start->key_);
      }
      ++M_start;
    }
    while ( M_finish != M_start );
  }
  return root;
};

// Line 1634: range 000000000C748360-000000000C7483AC
void __cdecl GLOBAL__sub_I_json_value_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  Json::Value::null = (const Json::Value_0 *)Json::Value::nullSingleton((Json::Value *)&std::ios_base::Init::~Init);
  Json::Value::nullRef = (const Json::Value_0 *)Json::Value::nullSingleton((Json::Value *)&std::ios_base::Init::~Init);
};
