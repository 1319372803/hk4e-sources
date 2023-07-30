// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/utility.cc

// Line 53: range 000000000C96E3A0-000000000C96E3CB
bool __fastcall google::protobuf::util::converter::GetBoolOptionOrDefault(
        const google::protobuf::RepeatedPtrField<google::protobuf::Option> *options,
        const std::string *option_name,
        bool default_value)
{
  const google::protobuf::Option *OptionOrNull; // rax
  google::protobuf::util::converter *value; // rdi

  OptionOrNull = google::protobuf::util::converter::FindOptionOrNull(options, option_name);
  if ( !OptionOrNull )
    return default_value;
  value = (google::protobuf::util::converter *)OptionOrNull->value_;
  if ( !value )
    value = (google::protobuf::util::converter *)&google::protobuf::_Any_default_instance_;
  return google::protobuf::util::converter::GetBoolFromAny(value, (const google::protobuf::Any *)option_name);
};

// Line 63: range 000000000C96E670-000000000C96E6A5
google::protobuf::int64 __fastcall google::protobuf::util::converter::GetInt64OptionOrDefault(
        const google::protobuf::RepeatedPtrField<google::protobuf::Option> *options,
        const std::string *option_name,
        google::protobuf::int64 default_value)
{
  const google::protobuf::Option *OptionOrNull; // rax
  google::protobuf::util::converter *value; // rdi

  OptionOrNull = google::protobuf::util::converter::FindOptionOrNull(options, option_name);
  if ( !OptionOrNull )
    return default_value;
  value = (google::protobuf::util::converter *)OptionOrNull->value_;
  if ( !value )
    value = (google::protobuf::util::converter *)&google::protobuf::_Any_default_instance_;
  return google::protobuf::util::converter::GetInt64FromAny(value, (const google::protobuf::Any *)option_name);
};

// Line 73: range 000000000C96E700-000000000C96E73A
void __fastcall google::protobuf::util::converter::GetDoubleOptionOrDefault(
        const google::protobuf::RepeatedPtrField<google::protobuf::Option> *options,
        const std::string *option_name,
        double a3,
        double default_value)
{
  const google::protobuf::Option *OptionOrNull; // rax
  google::protobuf::util::converter *value; // rdi

  OptionOrNull = google::protobuf::util::converter::FindOptionOrNull(options, option_name);
  if ( OptionOrNull )
  {
    value = (google::protobuf::util::converter *)OptionOrNull->value_;
    if ( !value )
      value = (google::protobuf::util::converter *)&google::protobuf::_Any_default_instance_;
    google::protobuf::util::converter::GetDoubleFromAny(value, (const google::protobuf::Any *)option_name);
  }
};

// Line 83: range 000000000C96E7A0-000000000C96E805
std::string *__fastcall google::protobuf::util::converter::GetStringOptionOrDefault(
        std::string *retstr,
        const google::protobuf::RepeatedPtrField<google::protobuf::Option> *options,
        const std::string *option_name,
        const std::string *default_value)
{
  std::forward_iterator_tag v5; // cl
  std::string::size_type M_string_length; // rdx

  if ( google::protobuf::util::converter::FindOptionOrNull(options, option_name) )
  {
    google::protobuf::util::converter::GetStringFromAny[abi:cxx11](retstr);
  }
  else
  {
    M_string_length = default_value->_M_string_length;
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      retstr,
      default_value->_M_dataplus._M_p,
      &default_value->_M_dataplus._M_p[M_string_length],
      v5);
  }
  return retstr;
};

// Line 98: range 000000000C96E360-000000000C96E39A
_BOOL8 __fastcall google::protobuf::util::converter::GetBoolFromAny(
        google::protobuf::util::converter *this,
        const google::protobuf::Any *a2)
{
  _BOOL4 value; // r12d
  google::protobuf::BoolValue v4[2]; // [rsp+0h] [rbp-38h] BYREF

  google::protobuf::BoolValue::BoolValue(v4);
  google::protobuf::MessageLite::ParseFromString(&v4[0], *((_QWORD *)this + 3));
  value = v4[0].value_;
  google::protobuf::BoolValue::~BoolValue(v4);
  return value;
};

// Line 99: range 000000000C734943-000000000C73494E
void __fastcall __noreturn google::protobuf::util::converter::GetBoolFromAny()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::BoolValue::~BoolValue((google::protobuf::BoolValue *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 104: range 000000000C96E630-000000000C96E669
google::protobuf::int64 __fastcall google::protobuf::util::converter::GetInt64FromAny(
        google::protobuf::util::converter *this,
        const google::protobuf::Any *a2)
{
  google::protobuf::int64 value; // r12
  google::protobuf::Int64Value v4; // [rsp+0h] [rbp-38h] BYREF

  google::protobuf::Int64Value::Int64Value(&v4);
  google::protobuf::MessageLite::ParseFromString(&v4, *((_QWORD *)this + 3));
  value = v4.value_;
  google::protobuf::Int64Value::~Int64Value(&v4);
  return value;
};

// Line 105: range 000000000C7349C5-000000000C7349D0
void __fastcall __noreturn google::protobuf::util::converter::GetInt64FromAny()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::Int64Value::~Int64Value((google::protobuf::Int64Value *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 110: range 000000000C96E6B0-000000000C96E6F7
double __fastcall google::protobuf::util::converter::GetDoubleFromAny(
        google::protobuf::util::converter *this,
        const google::protobuf::Any *a2)
{
  double value; // [rsp+8h] [rbp-40h]
  google::protobuf::DoubleValue v4; // [rsp+10h] [rbp-38h] BYREF

  google::protobuf::DoubleValue::DoubleValue(&v4);
  google::protobuf::MessageLite::ParseFromString(&v4, *((_QWORD *)this + 3));
  value = v4.value_;
  google::protobuf::DoubleValue::~DoubleValue(&v4);
  return value;
};

// Line 111: range 000000000C7349D5-000000000C7349E2
void __fastcall __noreturn google::protobuf::util::converter::GetDoubleFromAny(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::DoubleValue a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::DoubleValue::~DoubleValue(&a8);
  _Unwind_Resume(v8);
};

// Line 116: range 000000000C96E740-000000000C96E797
std::string *__fastcall google::protobuf::util::converter::GetStringFromAny[abi:cxx11](std::string *this, __int64 a2)
{
  std::string *ptr; // rax
  std::forward_iterator_tag v3; // cl
  google::protobuf::StringValue v5; // [rsp+0h] [rbp-38h] BYREF

  google::protobuf::StringValue::StringValue(&v5);
  google::protobuf::MessageLite::ParseFromString(&v5, *(_QWORD *)(a2 + 24));
  ptr = v5.value_.ptr_;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, ptr->_M_dataplus._M_p, &ptr->_M_dataplus._M_p[ptr->_M_string_length], v3);
  google::protobuf::StringValue::~StringValue(&v5);
  return this;
};

// Line 117: range 000000000C7349E7-000000000C7349F2
void __fastcall __noreturn google::protobuf::util::converter::GetStringFromAny[abi:cxx11]()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::StringValue::~StringValue((google::protobuf::StringValue *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 122: range 000000000C96D0E0-000000000C96D14B
google::protobuf::StringPiece __fastcall google::protobuf::util::converter::GetTypeWithoutUrl(
        google::protobuf::StringPiece type_url)
{
  google::protobuf::stringpiece_ssize_type v1; // rax
  google::protobuf::stringpiece_ssize_type v2; // rax
  google::protobuf::StringPiece type_urla; // [rsp+0h] [rbp-18h] BYREF

  type_urla = type_url;
  if ( type_url.length_ > 19 && *((_BYTE *)type_url.ptr_ + 19) == 47 )
    return google::protobuf::StringPiece::substr(&type_urla, 0x14uLL, google::protobuf::StringPiece::npos);
  v1 = google::protobuf::StringPiece::rfind(&type_urla, 47, google::protobuf::StringPiece::npos);
  if ( v1 != google::protobuf::StringPiece::npos )
  {
    v2 = v1 + 1;
    type_urla.ptr_ += v2;
    type_urla.length_ -= v2;
  }
  return type_urla;
};

// Line 134: range 000000000C96D150-000000000C96D1A7
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall google::protobuf::util::converter::GetFullTypeWithUrl[abi:cxx11](
        std::string *retstr,
        google::protobuf::StringPiece simple_type)
{
  google::protobuf::strings::AlphaNum v3; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum v4; // [rsp+30h] [rbp-68h] BYREF
  __int64 v5[7]; // [rsp+60h] [rbp-38h] BYREF

  v5[0] = (__int64)simple_type.ptr_;
  v5[1] = simple_type.length_;
  v4.piece_data_ = dirsep;
  v4.piece_size_ = 1LL;
  v3.piece_data_ = "type.googleapis.com";
  v3.piece_size_ = 19LL;
  google::protobuf::StrCat[abi:cxx11]((__int64)retstr, &v3, &v4, (__int64)v5);
  return retstr;
};

// Line 140: range 000000000C96D1B0-000000000C96D22E
const google::protobuf::Option *__fastcall google::protobuf::util::converter::FindOptionOrNull(
        const google::protobuf::RepeatedPtrField<google::protobuf::Option> *options,
        const std::string *option_name)
{
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  std::string::size_type M_string_length; // rbp
  void **elements; // rbx
  __int64 v6; // r13
  const google::protobuf::Option *v7; // r12
  __int64 v8; // rax

  current_size = options->current_size_;
  if ( current_size <= 0 )
    return 0LL;
  rep = options->rep_;
  M_string_length = option_name->_M_string_length;
  elements = rep->elements;
  v6 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
  while ( 1 )
  {
    v7 = (const google::protobuf::Option *)*elements;
    v8 = *((_QWORD *)*elements + 2);
    if ( *(_QWORD *)(v8 + 8) == M_string_length
      && (!M_string_length || !memcmp(*(const void **)v8, option_name->_M_dataplus._M_p, M_string_length)) )
    {
      break;
    }
    if ( ++elements == (void **)v6 )
      return 0LL;
  }
  return v7;
};

// Line 151: range 000000000C96D230-000000000C96D2B7
// local variable allocation has failed, the output may be wrong!
const google::protobuf::Field *__fastcall google::protobuf::util::converter::FindFieldInTypeOrNull(
        const google::protobuf::Type *type,
        google::protobuf::StringPiece field_name)
{
  int current_size; // eax
  signed __int64 length; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  void **elements; // rbx
  __int64 v6; // r14
  const google::protobuf::Field *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  const void *v10; // rsi

  if ( !type )
    return 0LL;
  current_size = type->fields_.current_size_;
  if ( current_size <= 0 )
    return 0LL;
  length = field_name.length_;
  rep = type->fields_.rep_;
  elements = rep->elements;
  v6 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
  while ( 1 )
  {
    v7 = (const google::protobuf::Field *)*elements;
    v8 = *((_QWORD *)*elements + 5);
    if ( *(_QWORD *)(v8 + 8) == length
      && (*(_QWORD *)v8 == v9 || length <= 0 || !memcmp(*(const void **)v8, v10, length)) )
    {
      break;
    }
    if ( (void **)v6 == ++elements )
      return 0LL;
  }
  return v7;
};

// Line 164: range 000000000C96D2C0-000000000C96D347
// local variable allocation has failed, the output may be wrong!
const google::protobuf::Field *__fastcall google::protobuf::util::converter::FindJsonFieldInTypeOrNull(
        const google::protobuf::Type *type,
        google::protobuf::StringPiece json_name)
{
  int current_size; // eax
  signed __int64 length; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  void **elements; // rbx
  __int64 v6; // r14
  const google::protobuf::Field *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  const void *v10; // rsi

  if ( !type )
    return 0LL;
  current_size = type->fields_.current_size_;
  if ( current_size <= 0 )
    return 0LL;
  length = json_name.length_;
  rep = type->fields_.rep_;
  elements = rep->elements;
  v6 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
  while ( 1 )
  {
    v7 = (const google::protobuf::Field *)*elements;
    v8 = *((_QWORD *)*elements + 7);
    if ( *(_QWORD *)(v8 + 8) == length
      && (*(_QWORD *)v8 == v9 || length <= 0 || !memcmp(*(const void **)v8, v10, length)) )
    {
      break;
    }
    if ( (void **)v6 == ++elements )
      return 0LL;
  }
  return v7;
};

// Line 178: range 000000000C96D350-000000000C96D396
const google::protobuf::Field *__fastcall google::protobuf::util::converter::FindFieldInTypeByNumberOrNull(
        const google::protobuf::Type *type,
        google::protobuf::int32 number)
{
  int current_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rcx
  const google::protobuf::Field **elements; // rax
  __int64 v5; // rdx

  if ( !type )
    return 0LL;
  current_size = type->fields_.current_size_;
  if ( current_size <= 0 )
    return 0LL;
  rep = type->fields_.rep_;
  elements = (const google::protobuf::Field **)rep->elements;
  v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
  while ( number != (*elements)->number_ )
  {
    if ( ++elements == (const google::protobuf::Field **)v5 )
      return 0LL;
  }
  return *elements;
};

// Line 190: range 000000000C96D3A0-000000000C96D427
// local variable allocation has failed, the output may be wrong!
const google::protobuf::EnumValue *__fastcall google::protobuf::util::converter::FindEnumValueByNameOrNull(
        const google::protobuf::Enum *enum_type,
        google::protobuf::StringPiece enum_name)
{
  int current_size; // eax
  signed __int64 length; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  void **elements; // rbx
  __int64 v6; // r14
  const google::protobuf::EnumValue *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  const void *v10; // rsi

  if ( !enum_type )
    return 0LL;
  current_size = enum_type->enumvalue_.current_size_;
  if ( current_size <= 0 )
    return 0LL;
  length = enum_name.length_;
  rep = enum_type->enumvalue_.rep_;
  elements = rep->elements;
  v6 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
  while ( 1 )
  {
    v7 = (const google::protobuf::EnumValue *)*elements;
    v8 = *((_QWORD *)*elements + 5);
    if ( *(_QWORD *)(v8 + 8) == length
      && (*(_QWORD *)v8 == v9 || length <= 0 || !memcmp(*(const void **)v8, v10, length)) )
    {
      break;
    }
    if ( (void **)v6 == ++elements )
      return 0LL;
  }
  return v7;
};

// Line 204: range 000000000C96D430-000000000C96D476
const google::protobuf::EnumValue *__fastcall google::protobuf::util::converter::FindEnumValueByNumberOrNull(
        const google::protobuf::Enum *enum_type,
        google::protobuf::int32 value)
{
  int current_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rcx
  const google::protobuf::EnumValue **elements; // rax
  __int64 v5; // rdx

  if ( !enum_type )
    return 0LL;
  current_size = enum_type->enumvalue_.current_size_;
  if ( current_size <= 0 )
    return 0LL;
  rep = enum_type->enumvalue_.rep_;
  elements = (const google::protobuf::EnumValue **)rep->elements;
  v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
  while ( value != (*elements)->number_ )
  {
    if ( ++elements == (const google::protobuf::EnumValue **)v5 )
      return 0LL;
  }
  return *elements;
};

// Line 216: range 000000000C96E0D0-000000000C96E352
__int64 __fastcall google::protobuf::util::converter::FindEnumValueByNameWithoutUnderscoreOrNull(
        google::protobuf::util::converter *this,
        google::protobuf::Enum *a2,
        google::protobuf::StringPiece a3)
{
  const char *ptr; // r14
  int v6; // ebx
  __int64 v7; // r13
  std::string::size_type M_string_length; // rsi
  std::string::pointer M_p; // rax
  std::string::size_type v10; // rax
  google::protobuf::Enum *v11; // rdi
  char v12; // al
  google::protobuf::Enum *v13; // r8
  std::string v15; // [rsp+10h] [rbp-58h] BYREF

  if ( !this || *((int *)this + 6) <= 0 )
    return 0LL;
  ptr = a3.ptr_;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v6 + 8);
    v15._M_dataplus._M_p = v15._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v15,
      **(char ***)(v7 + 40),
      (char *)(**(_QWORD **)(v7 + 40) + *(_QWORD *)(*(_QWORD *)(v7 + 40) + 8LL)),
      (std::forward_iterator_tag)a3.length_);
    M_string_length = v15._M_string_length;
    a3.ptr_ = &v15._M_dataplus._M_p[v15._M_string_length];
    a3.length_ = v15._M_string_length;
    if ( (__int64)v15._M_string_length >> 2 > 0 )
    {
      a3.length_ = (google::protobuf::stringpiece_ssize_type)&v15._M_dataplus._M_p[4
                                                                                 * ((__int64)v15._M_string_length >> 2)];
      M_p = v15._M_dataplus._M_p;
      while ( *M_p != 95 )
      {
        if ( M_p[1] == 95 )
        {
          ++M_p;
          goto LABEL_11;
        }
        if ( M_p[2] == 95 )
        {
          M_p += 2;
          goto LABEL_11;
        }
        if ( M_p[3] == 95 )
        {
          M_p += 3;
          goto LABEL_11;
        }
        M_p += 4;
        if ( (std::string::pointer)a3.length_ == M_p )
        {
          a3.length_ = a3.ptr_ - (const char *)M_p;
          goto LABEL_40;
        }
      }
      goto LABEL_11;
    }
    M_p = v15._M_dataplus._M_p;
LABEL_40:
    if ( a3.length_ == 2 )
      goto LABEL_47;
    if ( a3.length_ == 3 )
    {
      if ( *M_p == 95 )
        goto LABEL_11;
      ++M_p;
LABEL_47:
      if ( *M_p != 95 && *++M_p != 95 )
      {
LABEL_44:
        *a3.ptr_ = 0;
        goto LABEL_18;
      }
      goto LABEL_11;
    }
    if ( a3.length_ != 1 )
      goto LABEL_35;
    if ( *M_p != 95 )
      goto LABEL_44;
LABEL_11:
    if ( M_p == a3.ptr_ )
      goto LABEL_35;
    a3.length_ = (google::protobuf::stringpiece_ssize_type)(M_p + 1);
    if ( a3.ptr_ == M_p + 1 )
    {
      M_string_length = M_p - v15._M_dataplus._M_p;
LABEL_34:
      a3.ptr_ = M_p;
LABEL_35:
      v15._M_string_length = M_string_length;
      *a3.ptr_ = 0;
      goto LABEL_18;
    }
    do
    {
      if ( *(_BYTE *)a3.length_ != 95 )
        *M_p++ = *(_BYTE *)a3.length_;
      ++a3.length_;
    }
    while ( a3.ptr_ != (const char *)a3.length_ );
    M_string_length = M_p - v15._M_dataplus._M_p;
    LOBYTE(a3.length_) = LOBYTE(v15._M_string_length) + LOBYTE(v15._M_dataplus._M_p);
    if ( a3.ptr_ == &v15._M_dataplus._M_p[v15._M_string_length] )
      goto LABEL_34;
    std::string::_M_erase(&v15, M_string_length, a3.ptr_ - (const char *)M_p);
LABEL_18:
    v10 = v15._M_string_length;
    v11 = (google::protobuf::Enum *)v15._M_dataplus._M_p;
    if ( v15._M_string_length )
    {
      a3.ptr_ = v15._M_dataplus._M_p;
      do
      {
        v12 = *a3.ptr_;
        if ( (unsigned __int8)(*a3.ptr_ - 97) < 0x1Au )
          v12 = *a3.ptr_ - 32;
        *a3.ptr_++ = v12;
        v11 = (google::protobuf::Enum *)v15._M_dataplus._M_p;
        v10 = v15._M_string_length;
        LOBYTE(a3.length_) = LOBYTE(v15._M_dataplus._M_p) + LOBYTE(v15._M_string_length);
      }
      while ( a3.ptr_ != &v15._M_dataplus._M_p[v15._M_string_length] );
    }
    if ( (const char *)v10 == ptr )
    {
      v13 = a2;
      if ( v11 == a2 )
        goto LABEL_51;
      if ( (__int64)ptr <= 0 || !memcmp(v11, a2, (size_t)ptr) )
        break;
    }
    if ( v11 != (google::protobuf::Enum *)&v15._anon_0 )
      operator delete(v11);
    if ( *((_DWORD *)this + 6) <= ++v6 )
      return 0LL;
  }
  if ( v11 == (google::protobuf::Enum *)&v15._anon_0 )
    return v7;
  v13 = v11;
LABEL_51:
  operator delete(v13);
  return v7;
};

// Line 241: range 000000000C96D480-000000000C96D79D
_QWORD *__fastcall google::protobuf::util::converter::ToCamelCase[abi:cxx11](_QWORD *a1, char *a2, unsigned __int64 a3)
{
  char *v4; // rbp
  char v6; // bl
  bool v7; // cl
  __int64 v8; // r13
  unsigned __int8 v9; // dl
  char v10; // r14
  _QWORD *v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rax
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rax
  unsigned __int64 v18; // r15
  _BYTE *v19; // rax
  char v20; // di
  unsigned __int64 v21; // rdx
  _BYTE *v22; // rax
  char *v23; // [rsp+8h] [rbp-60h]
  _QWORD *v24; // [rsp+10h] [rbp-58h]
  bool v25; // [rsp+1Dh] [rbp-4Bh]
  char v26; // [rsp+1Eh] [rbp-4Ah]
  char v27; // [rsp+1Fh] [rbp-49h]

  v4 = a2;
  *a1 = a1 + 2;
  a1[1] = 0LL;
  *((_BYTE *)a1 + 16) = 0;
  v24 = a1 + 2;
  std::string::reserve(a1, a3);
  if ( a3 )
  {
    v26 = 1;
    v25 = 1;
    v23 = &a2[a3];
    v27 = 0;
    while ( 1 )
    {
      v6 = *v4;
      v7 = v25;
      v8 = a1[1];
      v9 = *v4 - 65;
      v10 = *v4;
      v25 = v9 <= 0x19u;
      if ( *v4 == 95 )
      {
        v20 = v26;
        v27 = 1;
        if ( v8 )
          v20 = 0;
        v26 = v20;
        goto LABEL_15;
      }
      v11 = (_QWORD *)*a1;
      if ( !v26 )
      {
        v18 = v8 + 1;
        if ( !v27 )
        {
          if ( v9 < 0x1Au )
            v10 += 32;
          if ( v24 == v11 )
            v21 = 15LL;
          else
            v21 = a1[2];
          if ( v21 < v18 )
          {
            std::string::_M_mutate(a1, v8, 0LL, 0LL, 1LL);
            v11 = (_QWORD *)*a1;
          }
          *((_BYTE *)v11 + v8) = v10;
          v22 = (_BYTE *)*a1;
          a1[1] = v18;
          v22[v8 + 1] = 0;
          v26 = 0;
          goto LABEL_15;
        }
        if ( (unsigned __int8)(v6 - 97) > 0x19u )
        {
          if ( v24 == v11 )
            goto LABEL_40;
LABEL_27:
          if ( a1[2] < v18 )
          {
LABEL_41:
            std::string::_M_mutate(a1, v8, 0LL, 0LL, 1LL);
            v11 = (_QWORD *)*a1;
          }
        }
        else
        {
          v6 -= 32;
          if ( v24 != v11 )
            goto LABEL_27;
LABEL_40:
          if ( v18 > 0xF )
            goto LABEL_41;
        }
        *((_BYTE *)v11 + v8) = v6;
        v19 = (_BYTE *)*a1;
        a1[1] = v18;
        v19[v8 + 1] = 0;
        v27 = 0;
        goto LABEL_15;
      }
      if ( v8 )
        break;
      v12 = 1LL;
      if ( v9 <= 0x19u )
        goto LABEL_18;
      if ( v24 != v11 )
        goto LABEL_20;
LABEL_23:
      *((_BYTE *)v11 + v8) = v10;
      v17 = (_BYTE *)*a1;
      a1[1] = v12;
      v17[v12] = 0;
LABEL_15:
      if ( v23 == ++v4 )
        return a1;
    }
    v12 = v8 + 1;
    if ( v9 <= 0x19u )
    {
      if ( !v7 || a3 > v4 - a2 + 1 && (unsigned __int8)(v4[1] - 97) <= 0x19u )
      {
        if ( v24 == v11 )
          v13 = 15LL;
        else
          v13 = a1[2];
        if ( v13 < v12 )
        {
          std::string::_M_mutate(a1, v8, 0LL, 0LL, 1LL);
          v11 = (_QWORD *)*a1;
        }
        *((_BYTE *)v11 + v8) = v6;
        v14 = (_BYTE *)*a1;
        a1[1] = v12;
        v14[v8 + 1] = 0;
        v26 = 0;
        goto LABEL_15;
      }
LABEL_18:
      v10 = v6 + 32;
    }
    if ( v24 == v11 )
      v16 = 15LL;
    else
LABEL_20:
      v16 = a1[2];
    if ( v16 < v12 )
    {
      std::string::_M_mutate(a1, v8, 0LL, 0LL, 1LL);
      v11 = (_QWORD *)*a1;
    }
    goto LABEL_23;
  }
  return a1;
};

// Line 284: range 000000000C96D7B0-000000000C96D9CD
_QWORD *__fastcall google::protobuf::util::converter::ToSnakeCase[abi:cxx11](_QWORD *a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rbp
  char v5; // si
  bool v6; // cl
  char v7; // r14
  __int64 v8; // r13
  _QWORD *v9; // rax
  unsigned __int64 v10; // rbx
  char v11; // r15
  _BYTE *v12; // rax
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rax
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rax
  _QWORD *v18; // [rsp+0h] [rbp-58h]
  char *v19; // [rsp+8h] [rbp-50h]

  v3 = a2;
  *a1 = a1 + 2;
  a1[1] = 0LL;
  *((_BYTE *)a1 + 16) = 0;
  v18 = a1 + 2;
  std::string::reserve(a1, 2 * a3);
  if ( a3 )
  {
    v5 = 0;
    v6 = 0;
    v19 = &v3[a3];
    do
    {
      v7 = *v3;
      v8 = a1[1];
      v9 = (_QWORD *)*a1;
      v10 = v8 + 1;
      if ( (unsigned __int8)(*v3 - 65) > 0x19u )
      {
        if ( v18 == v9 )
          v16 = 15LL;
        else
          v16 = a1[2];
        if ( v16 < v10 )
        {
          std::string::_M_mutate(a1, a1[1], 0LL, 0LL, 1LL);
          v9 = (_QWORD *)*a1;
        }
        *((_BYTE *)v9 + v8) = v7;
        v17 = (_BYTE *)*a1;
        v5 = 1;
        a1[1] = v10;
        v17[v10] = 0;
        v6 = *v3 != 95;
        goto LABEL_11;
      }
      if ( !v6 || !v5 && (v3 - a2 + 1 >= a3 || (unsigned __int8)(v3[1] - 97) > 0x19u) )
        goto LABEL_8;
      v14 = v18 == v9 ? 15LL : a1[2];
      if ( v14 < v10 )
      {
        std::string::_M_mutate(a1, a1[1], 0LL, 0LL, 1LL);
        v9 = (_QWORD *)*a1;
      }
      *((_BYTE *)v9 + v8) = 95;
      v15 = (_BYTE *)*a1;
      a1[1] = v10;
      v15[v10] = 0;
      v11 = *v3;
      v8 = a1[1];
      v7 = *v3;
      v10 = v8 + 1;
      v9 = (_QWORD *)*a1;
      if ( (unsigned __int8)(*v3 - 65) > 0x19u )
      {
        if ( v18 != v9 )
        {
LABEL_9:
          if ( a1[2] < v10 )
            goto LABEL_20;
          goto LABEL_10;
        }
      }
      else
      {
LABEL_8:
        v11 = v7 + 32;
        if ( v18 != v9 )
          goto LABEL_9;
      }
      if ( v10 > 0xF )
      {
LABEL_20:
        std::string::_M_mutate(a1, v8, 0LL, 0LL, 1LL);
        v9 = (_QWORD *)*a1;
      }
LABEL_10:
      *((_BYTE *)v9 + v8) = v11;
      v12 = (_BYTE *)*a1;
      v5 = 0;
      v6 = 1;
      a1[1] = v10;
      v12[v10] = 0;
LABEL_11:
      ++v3;
    }
    while ( v19 != v3 );
  }
  return a1;
};

// Line 330: range 000000000C96DA40-000000000C96DA71
void __cdecl google::protobuf::util::converter::DeleteWellKnownTypes()
{
  std::set<std::string> *v0; // rbp

  v0 = google::protobuf::util::converter::well_known_types_[abi:cxx11];
  if ( google::protobuf::util::converter::well_known_types_[abi:cxx11] )
  {
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
      &google::protobuf::util::converter::well_known_types_[abi:cxx11]->_M_t,
      (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)google::protobuf::util::converter::well_known_types_[abi:cxx11]->_M_t._M_impl._M_header._M_parent);
    operator delete(v0, 0x30uLL);
  }
};

// Line 332: range 000000000C96DB60-000000000C96DEAB
void __fastcall google::protobuf::util::converter::InitWellKnownTypes(google::protobuf::util::converter *this)
{
  char **v1; // rbp
  __int64 v2; // rax
  std::forward_iterator_tag v3; // cl
  std::set<std::string> *v4; // rbx
  const char *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rsi
  std::_Rb_tree_header *M_parent; // r12
  std::string::size_type M_string_length; // r14
  std::string::pointer v10; // rbx
  std::_Rb_tree_header *M_left; // rax
  std::string::size_type v12; // r13
  const void *M_node_count; // r15
  size_t v14; // rbp
  signed __int64 v15; // rax
  size_t v16; // rdx
  const void *v17; // r10
  std::string::size_type v18; // r15
  std::string *v19; // r9
  std::string::pointer M_p; // r13
  int v21; // eax
  __int64 v22; // r15
  _BOOL4 v23; // r15d
  std::string::size_type v24; // rax
  __int64 v25; // rax
  std::string::size_type v26; // r9
  size_t v27; // rdx
  int v28; // eax
  unsigned int v29; // r15d
  std::_Rb_tree_header *v30; // [rsp+0h] [rbp-78h]
  std::set<std::string> *v31; // [rsp+8h] [rbp-70h]
  std::string *v32; // [rsp+8h] [rbp-70h]
  std::string::size_type v33; // [rsp+8h] [rbp-70h]
  char **v34; // [rsp+10h] [rbp-68h]
  std::string::pointer v35; // [rsp+18h] [rbp-60h]
  std::string v36; // [rsp+20h] [rbp-58h] BYREF

  v1 = (char **)google::protobuf::util::converter::well_known_types_name_array_;
  v2 = operator new(0x30uLL);
  *(_DWORD *)(v2 + 8) = 0;
  v4 = (std::set<std::string> *)v2;
  v2 += 8LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  google::protobuf::util::converter::well_known_types_[abi:cxx11] = v4;
  v30 = (std::_Rb_tree_header *)v2;
  v4->_M_t._M_impl._M_header._M_left = (std::_Rb_tree_node_base::_Base_ptr)v2;
  v4->_M_t._M_impl._M_header._M_right = (std::_Rb_tree_node_base::_Base_ptr)v2;
  v4->_M_t._M_impl._M_node_count = 0LL;
  while ( 2 )
  {
    v5 = *v1;
    v6 = -1LL;
    v36._M_dataplus._M_p = v36._anon_0._M_local_buf;
    if ( v5 )
      v6 = (__int64)&v5[strlen(v5)];
    v7 = (__int64)v5;
    std::string::_M_construct<char const*>(&v36, v5, (const char *)v6, v3);
    M_parent = (std::_Rb_tree_header *)v4->_M_t._M_impl._M_header._M_parent;
    if ( !M_parent )
    {
      if ( v30 != (std::_Rb_tree_header *)v4->_M_t._M_impl._M_header._M_left )
      {
        M_string_length = v36._M_string_length;
        M_p = v36._M_dataplus._M_p;
        M_parent = v30;
        goto LABEL_33;
      }
      M_parent = v30;
      goto LABEL_49;
    }
    M_string_length = v36._M_string_length;
    v31 = v4;
    v34 = v1;
    v35 = v36._M_dataplus._M_p;
    v10 = v36._M_dataplus._M_p;
    while ( 1 )
    {
      v12 = *(_QWORD *)&M_parent[1]._M_header._M_color;
      M_node_count = (const void *)M_parent->_M_node_count;
      v14 = v12;
      if ( M_string_length <= v12 )
        v14 = M_string_length;
      if ( v14 )
      {
        LODWORD(v15) = memcmp(v10, (const void *)M_parent->_M_node_count, v14);
        if ( (_DWORD)v15 )
          goto LABEL_14;
      }
      v3.gap0[0] = 0;
      v15 = M_string_length - v12;
      if ( (__int64)(M_string_length - v12) >= 0x80000000LL )
        break;
      v3.gap0[0] = -1;
      if ( v15 > (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_14:
        if ( (int)v15 >= 0 )
          break;
      }
      M_left = (std::_Rb_tree_header *)M_parent->_M_header._M_left;
      v7 = 1LL;
      if ( !M_left )
        goto LABEL_16;
LABEL_7:
      M_parent = M_left;
    }
    M_left = (std::_Rb_tree_header *)M_parent->_M_header._M_right;
    v7 = 0LL;
    if ( M_left )
      goto LABEL_7;
LABEL_16:
    v16 = v14;
    v17 = M_node_count;
    v1 = v34;
    v18 = v12;
    v19 = (std::string *)v35;
    M_p = v10;
    v4 = v31;
    if ( !(_BYTE)v7 )
      goto LABEL_17;
    if ( (std::_Rb_tree_header *)v31->_M_t._M_impl._M_header._M_left == M_parent )
      goto LABEL_24;
LABEL_33:
    v25 = std::_Rb_tree_decrement(&M_parent->_M_header);
    v16 = M_string_length;
    v19 = (std::string *)M_p;
    v18 = *(_QWORD *)(v25 + 40);
    v17 = *(const void **)(v25 + 32);
    if ( v18 <= M_string_length )
      v16 = *(_QWORD *)(v25 + 40);
LABEL_17:
    if ( v16 && (v7 = (__int64)M_p, v32 = v19, v21 = memcmp(v17, M_p, v16), v19 = v32, v21) )
    {
LABEL_22:
      if ( v21 < 0 )
        goto LABEL_23;
    }
    else
    {
      v22 = v18 - M_string_length;
      if ( v22 < 0x80000000LL )
      {
        if ( v22 > (__int64)0xFFFFFFFF7FFFFFFFLL )
        {
          v21 = v22;
          goto LABEL_22;
        }
LABEL_23:
        if ( M_parent )
        {
LABEL_24:
          LOBYTE(v23) = 1;
          if ( v30 == M_parent )
            goto LABEL_25;
          v26 = *(_QWORD *)&M_parent[1]._M_header._M_color;
          v27 = v26;
          if ( M_string_length <= v26 )
            v27 = M_string_length;
          if ( v27
            && (v33 = *(_QWORD *)&M_parent[1]._M_header._M_color,
                v28 = memcmp(M_p, (const void *)M_parent->_M_node_count, v27),
                v26 = v33,
                (v29 = v28) != 0) )
          {
LABEL_44:
            v23 = v29 >> 31;
          }
          else
          {
            LOBYTE(v23) = 0;
            if ( (__int64)(M_string_length - v26) < 0x80000000LL )
            {
              if ( (__int64)(M_string_length - v26) > (__int64)0xFFFFFFFF7FFFFFFFLL )
              {
                v29 = M_string_length - v26;
                goto LABEL_44;
              }
LABEL_49:
              LOBYTE(v23) = 1;
            }
          }
LABEL_25:
          v7 = operator new(0x40uLL);
          *(_QWORD *)(v7 + 32) = v7 + 48;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p == &v36._anon_0 )
          {
            *(__m128i *)(v7 + 48) = _mm_load_si128((const __m128i *)&v36._anon_0);
          }
          else
          {
            *(_QWORD *)(v7 + 32) = v36._M_dataplus._M_p;
            *(_QWORD *)(v7 + 48) = v36._anon_0._M_allocated_capacity;
          }
          v24 = v36._M_string_length;
          v36._M_string_length = 0LL;
          *(_QWORD *)(v7 + 40) = v24;
          v36._M_dataplus._M_p = v36._anon_0._M_local_buf;
          v36._anon_0._M_local_buf[0] = 0;
          std::_Rb_tree_insert_and_rebalance(v23, (std::_Rb_tree_node_base *)v7, &M_parent->_M_header, &v30->_M_header);
          ++v4->_M_t._M_impl._M_node_count;
          v19 = (std::string *)v36._M_dataplus._M_p;
        }
        else
        {
          v19 = (std::string *)M_p;
        }
      }
    }
    if ( v19 != (std::string *)&v36._anon_0 )
      operator delete(v19);
    if ( ++v1 != &off_1EE7B920 )
    {
      v4 = google::protobuf::util::converter::well_known_types_[abi:cxx11];
      v30 = &google::protobuf::util::converter::well_known_types_[abi:cxx11]->_M_t._M_impl.std::_Rb_tree_header;
      continue;
    }
    break;
  }
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)google::protobuf::util::converter::DeleteWellKnownTypes,
    (void (*)(void))v7);
};

// Line 340: range 000000000C96DEB0-000000000C96DFC0
bool __fastcall google::protobuf::util::converter::IsWellKnownType(const std::string *type_name)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::_Rb_tree_header *v2; // r15
  std::string::size_type M_string_length; // r13
  std::string::pointer M_p; // rbp
  std::_Rb_tree_header *v5; // r14
  std::_Rb_tree_node_base::_Base_ptr v6; // r12
  size_t v7; // rdx
  signed __int64 v8; // rax
  bool result; // al
  std::string::size_type v10; // rbx
  size_t v11; // rdx
  int v12; // eax
  __int64 v13; // r13

  google::protobuf::util::converter::InitWellKnownTypes((google::protobuf::util::converter *)type_name);
  M_parent = google::protobuf::util::converter::well_known_types_[abi:cxx11]->_M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    return 0;
  v2 = &google::protobuf::util::converter::well_known_types_[abi:cxx11]->_M_t._M_impl.std::_Rb_tree_header;
  M_string_length = type_name->_M_string_length;
  M_p = type_name->_M_dataplus._M_p;
  v5 = &google::protobuf::util::converter::well_known_types_[abi:cxx11]->_M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( 1 )
    {
      v6 = M_parent[1]._M_parent;
      v7 = M_string_length;
      if ( (unsigned __int64)v6 <= M_string_length )
        v7 = (size_t)M_parent[1]._M_parent;
      if ( v7 )
      {
        LODWORD(v8) = memcmp(*(const void **)&M_parent[1]._M_color, M_p, v7);
        if ( (_DWORD)v8 )
          goto LABEL_10;
      }
      v8 = (signed __int64)v6 - M_string_length;
      if ( (__int64)((__int64)v6 - M_string_length) >= 0x80000000LL )
        break;
      if ( v8 > (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_10:
        if ( (int)v8 >= 0 )
          break;
      }
      M_parent = M_parent->_M_right;
      if ( !M_parent )
        goto LABEL_12;
    }
    v5 = (std::_Rb_tree_header *)M_parent;
    M_parent = M_parent->_M_left;
  }
  while ( M_parent );
LABEL_12:
  result = 0;
  if ( v2 != v5 )
  {
    v10 = *(_QWORD *)&v5[1]._M_header._M_color;
    v11 = v10;
    if ( M_string_length <= v10 )
      v11 = M_string_length;
    if ( v11 && (v12 = memcmp(M_p, (const void *)v5->_M_node_count, v11)) != 0 )
    {
      return v12 >= 0;
    }
    else
    {
      v13 = M_string_length - v10;
      result = 1;
      if ( v13 <= 0x7FFFFFFF )
      {
        if ( v13 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v12 = v13;
          return v12 >= 0;
        }
        return 0;
      }
    }
  }
  return result;
};

// Line 345: range 000000000C96D9E0-000000000C96DA35
bool __fastcall google::protobuf::util::converter::IsValidBoolString(const std::string *bool_string)
{
  return !(unsigned int)std::string::compare(bool_string, "true")
      || !(unsigned int)std::string::compare(bool_string, "false")
      || !(unsigned int)std::string::compare(bool_string, 441314428LL)
      || (unsigned int)std::string::compare(bool_string, 438705098LL) == 0;
};

// Line 351: range 000000000C96E3D0-000000000C96E509
__int64 __fastcall google::protobuf::util::converter::IsMap(
        google::protobuf::util::converter *this,
        const google::protobuf::Field *a2,
        const google::protobuf::Type *a3,
        std::forward_iterator_tag a4)
{
  unsigned int v4; // r12d
  google::protobuf::internal::ArenaStringPtr *p_default_value; // rbp
  unsigned int v7; // eax
  std::forward_iterator_tag v8; // cl
  unsigned int v9; // eax
  std::forward_iterator_tag v10; // cl
  unsigned int v11; // eax
  std::string v12; // [rsp+0h] [rbp-88h] BYREF
  std::string option_name; // [rsp+20h] [rbp-68h] BYREF
  std::string v14; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0;
  if ( *((_DWORD *)this + 19) != 3 )
    return v4;
  v12._M_dataplus._M_p = v12._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v12, "map_entry", "", a4);
  p_default_value = &a2->default_value_;
  LOBYTE(v7) = google::protobuf::util::converter::GetBoolOptionOrDefault(
                 (const google::protobuf::RepeatedPtrField<google::protobuf::Option> *)&a2->default_value_,
                 &v12,
                 0);
  v4 = v7;
  if ( !(_BYTE)v7 )
  {
    option_name._M_dataplus._M_p = option_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&option_name, "google.protobuf.MessageOptions.map_entry", "", v8);
    LOBYTE(v9) = google::protobuf::util::converter::GetBoolOptionOrDefault(
                   (const google::protobuf::RepeatedPtrField<google::protobuf::Option> *)p_default_value,
                   &option_name,
                   0);
    v4 = v9;
    if ( !(_BYTE)v9 )
    {
      v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v14, "google.protobuf.MessageOptions.map_entry", "", v10);
      LOBYTE(v11) = google::protobuf::util::converter::GetBoolOptionOrDefault(
                      (const google::protobuf::RepeatedPtrField<google::protobuf::Option> *)p_default_value,
                      &v14,
                      0);
      v4 = v11;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
        operator delete(v14._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)option_name._M_dataplus._M_p != &option_name._anon_0 )
      operator delete(option_name._M_dataplus._M_p);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p == &v12._anon_0 )
    return v4;
  operator delete(v12._M_dataplus._M_p);
  return v4;
};

// Line 362: range 000000000C96E510-000000000C96E61E
__int64 __fastcall google::protobuf::util::converter::IsMessageSetWireFormat(
        google::protobuf::util::converter *this,
        const google::protobuf::Type *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const google::protobuf::RepeatedPtrField<google::protobuf::Option> *v4; // rbp
  unsigned int v5; // eax
  std::forward_iterator_tag v6; // cl
  unsigned int v7; // r12d
  unsigned int v9; // eax
  std::forward_iterator_tag v10; // cl
  unsigned int v11; // eax
  std::string v12; // [rsp+0h] [rbp-88h] BYREF
  std::string option_name; // [rsp+20h] [rbp-68h] BYREF
  std::string v14; // [rsp+40h] [rbp-48h] BYREF

  v12._M_dataplus._M_p = v12._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v12, "message_set_wire_format", "", a4);
  v4 = (const google::protobuf::RepeatedPtrField<google::protobuf::Option> *)((char *)this + 64);
  LOBYTE(v5) = google::protobuf::util::converter::GetBoolOptionOrDefault(
                 (const google::protobuf::RepeatedPtrField<google::protobuf::Option> *)((char *)this + 64),
                 &v12,
                 0);
  v7 = v5;
  if ( !(_BYTE)v5 )
  {
    option_name._M_dataplus._M_p = option_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &option_name,
      "google.protobuf.MessageOptions.message_set_wire_format",
      "",
      v6);
    LOBYTE(v9) = google::protobuf::util::converter::GetBoolOptionOrDefault(v4, &option_name, 0);
    v7 = v9;
    if ( !(_BYTE)v9 )
    {
      v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v14, "google.protobuf.MessageOptions.message_set_wire_format", "", v10);
      LOBYTE(v11) = google::protobuf::util::converter::GetBoolOptionOrDefault(v4, &v14, 0);
      v7 = v11;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
        operator delete(v14._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)option_name._M_dataplus._M_p != &option_name._anon_0 )
      operator delete(option_name._M_dataplus._M_p);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p != &v12._anon_0 )
    operator delete(v12._M_dataplus._M_p);
  return v7;
};

// Line 386: range 000000000C96DA80-000000000C96DB59
__int64 __fastcall google::protobuf::util::converter::SafeStrToFloat(
        google::protobuf::StringPiece a1,
        float *a2,
        std::forward_iterator_tag a3)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  unsigned int v5; // eax
  unsigned int v6; // r12d
  float v7; // xmm0_4
  double value; // [rsp+8h] [rbp-40h] BYREF
  std::string v10; // [rsp+10h] [rbp-38h] BYREF

  v10._M_dataplus._M_p = v10._anon_0._M_local_buf;
  if ( a1.ptr_ )
  {
    std::string::_M_construct<char const*>(&v10, a1.ptr_, &a1.ptr_[a1.length_], a3);
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p;
  }
  else
  {
    v10._M_string_length = 0LL;
    M_p = &v10._anon_0;
    v10._anon_0._M_local_buf[0] = 0;
  }
  LOBYTE(v5) = google::protobuf::safe_strtod(M_p->_M_local_buf, &value);
  v6 = v5;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p != &v10._anon_0 )
    operator delete(v10._M_dataplus._M_p);
  if ( !(_BYTE)v6 )
    return v6;
  if ( fabs(value) <= 1.797693134862316e308 && value <= 3.402823466385289e38 && value >= -3.402823466385289e38 )
  {
    v7 = value;
    *a2 = v7;
    return v6;
  }
  return 0LL;
};

// Line 409: range 000000000C7472C0-000000000C7472E1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util9converter22GetBoolOptionOrDefaultERKNS0_16RepeatedPtrFieldINS0_6OptionEEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
