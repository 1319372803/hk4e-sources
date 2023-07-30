// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/status.cc

// Line 41: range 000000000C8965F0-000000000C89679F
std::string *__fastcall google::protobuf::util::error::CodeEnumToString[abi:cxx11](
        std::string *retstr,
        google::protobuf::util::error::Code code)
{
  std::forward_iterator_tag v2; // cl

  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  switch ( code )
  {
    case OK:
      std::string::_M_construct<char const*>(retstr, "OK", "", v2);
      break;
    case CANCELLED:
      std::string::_M_construct<char const*>(retstr, "CANCELLED", "", v2);
      break;
    case UNKNOWN:
      goto LABEL_3;
    case INVALID_ARGUMENT:
      std::string::_M_construct<char const*>(retstr, "INVALID_ARGUMENT", "", v2);
      break;
    case DEADLINE_EXCEEDED:
      std::string::_M_construct<char const*>(retstr, "DEADLINE_EXCEEDED", "", v2);
      break;
    case NOT_FOUND:
      std::string::_M_construct<char const*>(retstr, "NOT_FOUND", "", v2);
      break;
    case ALREADY_EXISTS:
      std::string::_M_construct<char const*>(retstr, "ALREADY_EXISTS", "", v2);
      break;
    case PERMISSION_DENIED:
      std::string::_M_construct<char const*>(retstr, "PERMISSION_DENIED", "", v2);
      break;
    case RESOURCE_EXHAUSTED:
      std::string::_M_construct<char const*>(retstr, "RESOURCE_EXHAUSTED", "", v2);
      break;
    case FAILED_PRECONDITION:
      std::string::_M_construct<char const*>(retstr, "FAILED_PRECONDITION", "", v2);
      break;
    case ABORTED:
      std::string::_M_construct<char const*>(retstr, "ABORTED", "", v2);
      break;
    case OUT_OF_RANGE:
      std::string::_M_construct<char const*>(retstr, "OUT_OF_RANGE", "", v2);
      break;
    case UNIMPLEMENTED:
      std::string::_M_construct<char const*>(retstr, "UNIMPLEMENTED", "", v2);
      break;
    case INTERNAL:
      std::string::_M_construct<char const*>(retstr, "INTERNAL", "", v2);
      break;
    case UNAVAILABLE:
      std::string::_M_construct<char const*>(retstr, "UNAVAILABLE", "", v2);
      break;
    case DATA_LOSS:
      std::string::_M_construct<char const*>(retstr, "DATA_LOSS", "", v2);
      break;
    case UNAUTHENTICATED:
      std::string::_M_construct<char const*>(retstr, "UNAUTHENTICATED", "", v2);
      break;
    default:
      retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
LABEL_3:
      std::string::_M_construct<char const*>(retstr, "UNKNOWN", "", v2);
      break;
  }
  return retstr;
};

// Line 92: range 000000000C8962E0-000000000C896405
void __fastcall google::protobuf::util::Status::Status(
        google::protobuf::util::Status *this,
        google::protobuf::util::error::Code a2,
        google::protobuf::StringPiece a3)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::size_type M_string_length; // rdx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v7; // rax
  std::string::size_type M_allocated_capacity; // rsi
  std::string::size_type v9; // rdi
  std::string v10; // [rsp+0h] [rbp-38h] BYREF

  p_anon_0 = &this->error_message_._anon_0;
  this->error_code_ = a2;
  this->error_message_._M_dataplus._M_p = this->error_message_._anon_0._M_local_buf;
  this->error_message_._M_string_length = 0LL;
  this->error_message_._anon_0._M_local_buf[0] = 0;
  if ( a2 )
  {
    v10._M_dataplus._M_p = v10._anon_0._M_local_buf;
    if ( a3.ptr_ )
    {
      std::string::_M_construct<char const*>(&v10, a3.ptr_, &a3.ptr_[a3.length_], (std::forward_iterator_tag)a3.length_);
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->error_message_._M_dataplus._M_p;
      M_string_length = v10._M_string_length;
      v7 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->error_message_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p != &v10._anon_0 )
      {
        M_allocated_capacity = v10._anon_0._M_allocated_capacity;
        if ( p_anon_0 == M_p )
        {
          this->error_message_._M_dataplus._M_p = v10._M_dataplus._M_p;
          this->error_message_._M_string_length = M_string_length;
          this->error_message_._anon_0._M_allocated_capacity = M_allocated_capacity;
        }
        else
        {
          v9 = this->error_message_._anon_0._M_allocated_capacity;
          this->error_message_._M_dataplus._M_p = v10._M_dataplus._M_p;
          this->error_message_._M_string_length = M_string_length;
          this->error_message_._anon_0._M_allocated_capacity = M_allocated_capacity;
          if ( v7 )
          {
            v10._M_dataplus._M_p = (std::string::pointer)v7;
            v10._anon_0._M_allocated_capacity = v9;
            goto LABEL_7;
          }
        }
        v10._M_dataplus._M_p = v10._anon_0._M_local_buf;
        v7 = &v10._anon_0;
LABEL_7:
        v10._M_string_length = 0LL;
        v7->_M_local_buf[0] = 0;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p != &v10._anon_0 )
          operator delete(v10._M_dataplus._M_p);
        return;
      }
      if ( v10._M_string_length )
      {
        if ( v10._M_string_length == 1 )
          M_p->_M_local_buf[0] = v10._anon_0._M_local_buf[0];
        else
          memcpy(M_p, &v10._anon_0, v10._M_string_length);
        M_string_length = v10._M_string_length;
        M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->error_message_._M_dataplus._M_p;
      }
    }
    else
    {
      v10._anon_0._M_local_buf[0] = 0;
      M_string_length = 0LL;
      M_p = &this->error_message_._anon_0;
    }
    this->error_message_._M_string_length = M_string_length;
    M_p->_M_local_buf[M_string_length] = 0;
    v7 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p;
    goto LABEL_7;
  }
};

// Line 99: range 000000000C8961D0-000000000C89627B
void __fastcall google::protobuf::util::Status::Status(
        google::protobuf::util::Status *const this,
        const google::protobuf::util::Status *other)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::string::size_type M_string_length; // r12
  std::string::pointer M_p; // rbp
  char *v6; // rax
  std::string::size_type v7[4]; // [rsp+8h] [rbp-20h] BYREF

  p_anon_0 = &this->error_message_._anon_0;
  M_string_length = other->error_message_._M_string_length;
  *((_DWORD *)&p_anon_0[-2]._M_allocated_capacity + 2) = other->error_code_;
  this->error_message_._M_dataplus._M_p = (std::string::pointer)p_anon_0;
  M_p = other->error_message_._M_dataplus._M_p;
  if ( &M_p[M_string_length] && !M_p )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v7[0] = M_string_length;
  if ( M_string_length > 0xF )
  {
    v6 = (char *)std::string::_M_create(&this->error_message_, v7, 0LL);
    this->error_message_._M_dataplus._M_p = v6;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6;
    this->error_message_._anon_0._M_allocated_capacity = v7[0];
    goto LABEL_10;
  }
  if ( M_string_length != 1 )
  {
    if ( !M_string_length )
      goto LABEL_6;
LABEL_10:
    memcpy(p_anon_0, M_p, M_string_length);
    M_string_length = v7[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->error_message_._M_dataplus._M_p;
    goto LABEL_6;
  }
  this->error_message_._anon_0._M_local_buf[0] = *M_p;
LABEL_6:
  this->error_message_._M_string_length = M_string_length;
  p_anon_0->_M_local_buf[M_string_length] = 0;
};

// Line 103: range 000000000C896280-000000000C89629C
google::protobuf::util::Status *__fastcall google::protobuf::util::Status::operator=(
        google::protobuf::util::Status *const this,
        const google::protobuf::util::Status *other)
{
  std::string *p_error_message; // rdi

  p_error_message = &this->error_message_;
  *((_DWORD *)&p_error_message[-1]._anon_0._M_allocated_capacity + 2) = other->error_code_;
  std::string::_M_assign(p_error_message, &other->error_message_);
  return this;
};

// Line 110: range 000000000C8962A0-000000000C8962DE
bool __fastcall google::protobuf::util::Status::operator==(
        const google::protobuf::util::Status *const this,
        const google::protobuf::util::Status *x)
{
  bool result; // al
  std::string::size_type M_string_length; // rdx

  result = 0;
  if ( this->error_code_ == x->error_code_ )
  {
    M_string_length = this->error_message_._M_string_length;
    if ( M_string_length == x->error_message_._M_string_length )
    {
      result = 1;
      if ( M_string_length )
        return memcmp(this->error_message_._M_dataplus._M_p, x->error_message_._M_dataplus._M_p, M_string_length) == 0;
    }
  }
  return result;
};

// Line 114: range 000000000C896410-000000000C896594
__int64 __fastcall google::protobuf::util::Status::ToString[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  google::protobuf::util::error::Code v6; // esi
  __int64 v7; // rax
  void *v8; // rcx
  const char *v9; // rsi
  __m128i *v10; // rax
  __int64 v11; // rcx
  __int128 *v12; // rdi
  std::string v14; // [rsp+0h] [rbp-58h] BYREF
  void *v15[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16[2]; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(_DWORD *)a2;
  if ( v6 )
  {
    if ( *(_QWORD *)(a2 + 16) )
    {
      google::protobuf::util::error::CodeEnumToString[abi:cxx11](&v14, v6);
      if ( v14._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      v7 = std::string::_M_append(&v14, ":", 1LL);
      v15[0] = v16;
      if ( *(_QWORD *)v7 == v7 + 16 )
      {
        v16[0] = (__int128)_mm_loadu_si128((const __m128i *)(v7 + 16));
      }
      else
      {
        v15[0] = *(void **)v7;
        *(_QWORD *)&v16[0] = *(_QWORD *)(v7 + 16);
      }
      v8 = *(void **)(v7 + 8);
      *(_BYTE *)(v7 + 16) = 0;
      v15[1] = v8;
      *(_QWORD *)v7 = v7 + 16;
      v9 = *(const char **)(a2 + 8);
      *(_QWORD *)(v7 + 8) = 0LL;
      v10 = (__m128i *)std::string::_M_append(v15, v9, *(_QWORD *)(a2 + 16));
      *(_QWORD *)a1 = a1 + 16;
      if ( (__m128i *)v10->m128i_i64[0] == &v10[1] )
      {
        *(__m128i *)(a1 + 16) = _mm_loadu_si128(v10 + 1);
      }
      else
      {
        *(_QWORD *)a1 = v10->m128i_i64[0];
        *(_QWORD *)(a1 + 16) = v10[1].m128i_i64[0];
      }
      v11 = v10->m128i_i64[1];
      v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
      v12 = (__int128 *)v15[0];
      v10->m128i_i64[1] = 0LL;
      *(_QWORD *)(a1 + 8) = v11;
      v10[1].m128i_i8[0] = 0;
      if ( v12 != v16 )
        operator delete(v12);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
      {
        operator delete(v14._M_dataplus._M_p);
        return a1;
      }
    }
    else
    {
      google::protobuf::util::error::CodeEnumToString[abi:cxx11]((std::string *)a1, v6);
    }
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = a1 + 16;
    std::string::_M_construct<char const*>((std::string *const)a1, "OK", "", a4);
    return a1;
  }
};

// Line 127: range 000000000C8965A0-000000000C8965E2
__int64 __fastcall google::protobuf::util::operator<<(__int64 a1, __int64 a2, __int64 a3, std::forward_iterator_tag a4)
{
  void *v5[2]; // [rsp+0h] [rbp-28h] BYREF
  char v6; // [rsp+10h] [rbp-18h] BYREF

  google::protobuf::util::Status::ToString[abi:cxx11]((__int64)v5, a2, a3, a4);
  std::__ostream_insert<char,std::char_traits<char>>(a1, v5[0], v5[1]);
  if ( v5[0] != &v6 )
    operator delete(v5[0]);
  return a1;
};

// Line 134: range 000000000C746840-000000000C7468F0
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util6Status2OKE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  google::protobuf::util::Status::OK.error_code_ = OK;
  google::protobuf::util::Status::OK.error_message_._M_dataplus._M_p = (_BYTE *)(&google::protobuf::util::Status::OK + 24);
  google::protobuf::util::Status::OK.error_message_._M_string_length = 0LL;
  google::protobuf::util::Status::OK.error_message_._anon_0._M_local_buf[0] = 0;
  __cxa_atexit(
    (void (__fastcall *)(void *))google::protobuf::util::Status::~Status,
    (void *)&google::protobuf::util::Status::OK,
    &_dso_handle);
  google::protobuf::util::Status::Status(
    (google::protobuf::util::Status *)&google::protobuf::util::Status::CANCELLED,
    CANCELLED,
    (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
  __cxa_atexit(
    (void (__fastcall *)(void *))google::protobuf::util::Status::~Status,
    (void *)&google::protobuf::util::Status::CANCELLED,
    &_dso_handle);
  google::protobuf::util::Status::Status(
    (google::protobuf::util::Status *)&google::protobuf::util::Status::UNKNOWN,
    UNKNOWN,
    (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
  __cxa_atexit(
    (void (__fastcall *)(void *))google::protobuf::util::Status::~Status,
    (void *)&google::protobuf::util::Status::UNKNOWN,
    &_dso_handle);
};
