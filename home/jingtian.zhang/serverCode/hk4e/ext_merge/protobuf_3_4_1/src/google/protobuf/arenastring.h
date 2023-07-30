// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/arenastring.h

// Line 194: range 000000000C8F21E0-000000000C8F21F7
void __fastcall google::protobuf::Any::SharedCtor(google::protobuf::Any *const this)
{
  this->type_url_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->_cached_size_ = 0;
};

// Line 194: range 000000000C950670-000000000C95067F
void __fastcall google::protobuf::BytesValue::SharedCtor(google::protobuf::BytesValue *const this)
{
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->_cached_size_ = 0;
};

// Line 194: range 000000000C947EB0-000000000C947ECE
void __fastcall google::protobuf::Enum::SharedCtor(google::protobuf::Enum *const this)
{
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->source_context_ = 0LL;
  this->syntax_ = 0;
  this->_cached_size_ = 0;
};

// Line 194: range 000000000C948030-000000000C948040
void __fastcall google::protobuf::EnumValue::SharedCtor(google::protobuf::EnumValue *const this)
{
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_QWORD *)&this->number_ = 0LL;
};

// Line 194: range 000000000C9482F0-000000000C948307
void __fastcall google::protobuf::Option::SharedCtor(google::protobuf::Option *const this)
{
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->value_ = 0LL;
  this->_cached_size_ = 0;
};

// Line 194: range 000000000C9708A0-000000000C9708AF
void __fastcall google::protobuf::SourceContext::SharedCtor(google::protobuf::SourceContext *const this)
{
  this->file_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->_cached_size_ = 0;
};

// Line 194: range 000000000C950430-000000000C95043F
void __fastcall google::protobuf::StringValue::SharedCtor(google::protobuf::StringValue *const this)
{
  this->value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->_cached_size_ = 0;
};

// Line 194: range 000000000C947990-000000000C9479AE
void __fastcall google::protobuf::Type::SharedCtor(google::protobuf::Type *const this)
{
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->source_context_ = 0LL;
  this->syntax_ = 0;
  this->_cached_size_ = 0;
};

// Line 294: range 000000000C9508B0-000000000C950982
void __fastcall google::protobuf::internal::ArenaStringPtr::CreateInstance(
        std::string **a1,
        google::protobuf::Arena *a2,
        __int64 a3)
{
  std::string *v5; // rax
  char *v6; // r14
  size_t v7; // r12
  void *p_anon_0; // rdi
  std::string *v9; // rbp
  __int64 v10; // rax
  std::string::size_type v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = (std::string *)operator new(0x20uLL);
  v6 = *(char **)a3;
  v7 = *(_QWORD *)(a3 + 8);
  p_anon_0 = &v5->_anon_0;
  v9 = v5;
  v5->_M_dataplus._M_p = v5->_anon_0._M_local_buf;
  if ( &v6[v7] && !v6 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v11[0] = v7;
  if ( v7 > 0xF )
  {
    v10 = std::string::_M_create(v5, v11, 0LL);
    v9->_M_dataplus._M_p = (std::string::pointer)v10;
    p_anon_0 = (void *)v10;
    v9->_anon_0._M_allocated_capacity = v11[0];
LABEL_12:
    memcpy(p_anon_0, v6, v7);
    v7 = v11[0];
    p_anon_0 = v9->_M_dataplus._M_p;
    goto LABEL_6;
  }
  if ( v7 == 1 )
  {
    v5->_anon_0._M_local_buf[0] = *v6;
    goto LABEL_6;
  }
  if ( v7 )
    goto LABEL_12;
LABEL_6:
  v9->_M_string_length = v7;
  *((_BYTE *)p_anon_0 + v7) = 0;
  *a1 = v9;
  if ( a2 )
    google::protobuf::Arena::Own<std::string>(a2, v9);
};

// Line 294: range 000000000C8A91E0-000000000C8A924E
void __fastcall google::protobuf::internal::ArenaStringPtr::CreateInstance(
        std::string **a1,
        google::protobuf::Arena *a2,
        __int64 a3)
{
  std::string *v5; // rax
  char *v6; // rsi
  std::string *v7; // rbp
  char *v8; // rdx
  std::forward_iterator_tag v9; // cl

  v5 = (std::string *)operator new(0x20uLL);
  v6 = *(char **)a3;
  v7 = v5;
  v8 = (char *)(*(_QWORD *)a3 + *(_QWORD *)(a3 + 8));
  v5->_M_dataplus._M_p = v5->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(v5, v6, v8, v9);
  *a1 = v7;
  if ( a2 )
    google::protobuf::Arena::Own<std::string>(a2, v7);
};

// Line 294: range 000000000C8E0D90-000000000C8E0DFE
void __fastcall google::protobuf::internal::ArenaStringPtr::CreateInstance(
        std::string **a1,
        google::protobuf::Arena *a2,
        __int64 a3)
{
  std::string *v5; // rax
  char *v6; // rsi
  std::string *v7; // rbp
  char *v8; // rdx
  std::forward_iterator_tag v9; // cl

  v5 = (std::string *)operator new(0x20uLL);
  v6 = *(char **)a3;
  v7 = v5;
  v8 = (char *)(*(_QWORD *)a3 + *(_QWORD *)(a3 + 8));
  v5->_M_dataplus._M_p = v5->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(v5, v6, v8, v9);
  *a1 = v7;
  if ( a2 )
    google::protobuf::Arena::Own<std::string>(a2, v7);
};

// Line 294: range 000000000C948570-000000000C948642
void __fastcall google::protobuf::internal::ArenaStringPtr::CreateInstance(
        std::string **a1,
        google::protobuf::Arena *a2,
        __int64 a3)
{
  std::string *v5; // rax
  char *v6; // r14
  size_t v7; // r12
  void *p_anon_0; // rdi
  std::string *v9; // rbp
  __int64 v10; // rax
  std::string::size_type v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = (std::string *)operator new(0x20uLL);
  v6 = *(char **)a3;
  v7 = *(_QWORD *)(a3 + 8);
  p_anon_0 = &v5->_anon_0;
  v9 = v5;
  v5->_M_dataplus._M_p = v5->_anon_0._M_local_buf;
  if ( &v6[v7] && !v6 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v11[0] = v7;
  if ( v7 > 0xF )
  {
    v10 = std::string::_M_create(v5, v11, 0LL);
    v9->_M_dataplus._M_p = (std::string::pointer)v10;
    p_anon_0 = (void *)v10;
    v9->_anon_0._M_allocated_capacity = v11[0];
LABEL_12:
    memcpy(p_anon_0, v6, v7);
    v7 = v11[0];
    p_anon_0 = v9->_M_dataplus._M_p;
    goto LABEL_6;
  }
  if ( v7 == 1 )
  {
    v5->_anon_0._M_local_buf[0] = *v6;
    goto LABEL_6;
  }
  if ( v7 )
    goto LABEL_12;
LABEL_6:
  v9->_M_string_length = v7;
  *((_BYTE *)p_anon_0 + v7) = 0;
  *a1 = v9;
  if ( a2 )
    google::protobuf::Arena::Own<std::string>(a2, v9);
};

// Line 297: range 000000000C732362-000000000C732372
void __fastcall __noreturn google::protobuf::internal::ArenaStringPtr::CreateInstance()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 297: range 000000000C7328C4-000000000C7328D4
void __fastcall __noreturn google::protobuf::internal::ArenaStringPtr::CreateInstance()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 297: range 000000000C72C964-000000000C72C974
void __fastcall __noreturn google::protobuf::internal::ArenaStringPtr::CreateInstance()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 297: range 000000000C72AAAA-000000000C72AABA
void __fastcall __noreturn google::protobuf::internal::ArenaStringPtr::CreateInstance()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 302: range 000000000C8F2DC0-000000000C8F2E00
void __fastcall google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(std::string **a1)
{
  std::string *v1; // rax
  char *align_to_int64; // rsi
  std::string *v3; // rbp
  char *v4; // rdx
  std::forward_iterator_tag v5; // cl

  v1 = (std::string *)operator new(0x20uLL);
  align_to_int64 = (char *)google::protobuf::internal::fixed_address_empty_string[abi:cxx11].union_.align_to_int64;
  v3 = v1;
  v4 = (char *)(google::protobuf::internal::fixed_address_empty_string[abi:cxx11].union_.align_to_int64
              + *((_QWORD *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11].union_.align_to_ptr + 1));
  v1->_M_dataplus._M_p = v1->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(v1, align_to_int64, v4, v5);
  *a1 = v3;
};

// Line 302: range 000000000C929330-000000000C9293F2
unsigned __int8 *__fastcall google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        __int64 **a1,
        unsigned __int8 **a2)
{
  __int64 *v3; // rax
  unsigned __int8 *v4; // r13
  size_t v5; // r12
  void *v6; // rdi
  __int64 *v7; // rbp
  unsigned __int8 *result; // rax
  __int64 v9; // rax
  size_t v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (__int64 *)operator new(0x20uLL);
  v4 = *a2;
  v5 = (size_t)a2[1];
  v6 = v3 + 2;
  v7 = v3;
  *v3 = (__int64)(v3 + 2);
  result = &v4[v5];
  if ( &v4[v5] && !v4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v10[0] = v5;
  if ( v5 > 0xF )
  {
    v9 = std::string::_M_create(v7, v10, 0LL);
    *v7 = v9;
    v6 = (void *)v9;
    v7[2] = v10[0];
    goto LABEL_10;
  }
  if ( v5 != 1 )
  {
    if ( !v5 )
      goto LABEL_6;
LABEL_10:
    result = (unsigned __int8 *)memcpy(v6, v4, v5);
    v5 = v10[0];
    v6 = (void *)*v7;
    goto LABEL_6;
  }
  result = (unsigned __int8 *)*v4;
  *((_BYTE *)v7 + 16) = (_BYTE)result;
LABEL_6:
  v7[1] = v5;
  *((_BYTE *)v6 + v5) = 0;
  *a1 = v7;
  return result;
};

// Line 302: range 000000000C8FAFE0-000000000C8FB01D
void __fastcall google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(std::string **a1, __int64 a2)
{
  std::string *v3; // rax
  char *v4; // rsi
  std::string *v5; // rbp
  char *v6; // rdx
  std::forward_iterator_tag v7; // cl

  v3 = (std::string *)operator new(0x20uLL);
  v4 = *(char **)a2;
  v5 = v3;
  v6 = (char *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  v3->_M_dataplus._M_p = v3->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(v3, v4, v6, v7);
  *a1 = v5;
};

// Line 302: range 000000000C8F1DE0-000000000C8F1EA2
unsigned __int8 *__fastcall google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        __int64 **a1,
        unsigned __int8 **a2)
{
  __int64 *v3; // rax
  unsigned __int8 *v4; // r13
  size_t v5; // r12
  void *v6; // rdi
  __int64 *v7; // rbp
  unsigned __int8 *result; // rax
  __int64 v9; // rax
  size_t v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (__int64 *)operator new(0x20uLL);
  v4 = *a2;
  v5 = (size_t)a2[1];
  v6 = v3 + 2;
  v7 = v3;
  *v3 = (__int64)(v3 + 2);
  result = &v4[v5];
  if ( &v4[v5] && !v4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v10[0] = v5;
  if ( v5 > 0xF )
  {
    v9 = std::string::_M_create(v7, v10, 0LL);
    *v7 = v9;
    v6 = (void *)v9;
    v7[2] = v10[0];
    goto LABEL_10;
  }
  if ( v5 != 1 )
  {
    if ( !v5 )
      goto LABEL_6;
LABEL_10:
    result = (unsigned __int8 *)memcpy(v6, v4, v5);
    v5 = v10[0];
    v6 = (void *)*v7;
    goto LABEL_6;
  }
  result = (unsigned __int8 *)*v4;
  *((_BYTE *)v7 + 16) = (_BYTE)result;
LABEL_6:
  v7[1] = v5;
  *((_BYTE *)v6 + v5) = 0;
  *a1 = v7;
  return result;
};

// Line 302: range 000000000C8E0E10-000000000C8E0E4D
void __fastcall google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(std::string **a1, __int64 a2)
{
  std::string *v3; // rax
  char *v4; // rsi
  std::string *v5; // rbp
  char *v6; // rdx
  std::forward_iterator_tag v7; // cl

  v3 = (std::string *)operator new(0x20uLL);
  v4 = *(char **)a2;
  v5 = v3;
  v6 = (char *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  v3->_M_dataplus._M_p = v3->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(v3, v4, v6, v7);
  *a1 = v5;
};

// Line 302: range 000000000C9704D0-000000000C970592
unsigned __int8 *__fastcall google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        __int64 **a1,
        unsigned __int8 **a2)
{
  __int64 *v3; // rax
  unsigned __int8 *v4; // r13
  size_t v5; // r12
  void *v6; // rdi
  __int64 *v7; // rbp
  unsigned __int8 *result; // rax
  __int64 v9; // rax
  size_t v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (__int64 *)operator new(0x20uLL);
  v4 = *a2;
  v5 = (size_t)a2[1];
  v6 = v3 + 2;
  v7 = v3;
  *v3 = (__int64)(v3 + 2);
  result = &v4[v5];
  if ( &v4[v5] && !v4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v10[0] = v5;
  if ( v5 > 0xF )
  {
    v9 = std::string::_M_create(v7, v10, 0LL);
    *v7 = v9;
    v6 = (void *)v9;
    v7[2] = v10[0];
    goto LABEL_10;
  }
  if ( v5 != 1 )
  {
    if ( !v5 )
      goto LABEL_6;
LABEL_10:
    result = (unsigned __int8 *)memcpy(v6, v4, v5);
    v5 = v10[0];
    v6 = (void *)*v7;
    goto LABEL_6;
  }
  result = (unsigned __int8 *)*v4;
  *((_BYTE *)v7 + 16) = (_BYTE)result;
LABEL_6:
  v7[1] = v5;
  *((_BYTE *)v6 + v5) = 0;
  *a1 = v7;
  return result;
};

// Line 304: range 000000000C72D0EE-000000000C72D0FE
void __fastcall __noreturn google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 304: range 000000000C72C97A-000000000C72C98A
void __fastcall __noreturn google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 304: range 000000000C72DF60-000000000C72DF70
void __fastcall __noreturn google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 304: range 000000000C72D212-000000000C72D222
void __fastcall __noreturn google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 304: range 000000000C734A80-000000000C734A90
void __fastcall __noreturn google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 304: range 000000000C730A8A-000000000C730A9A
void __fastcall __noreturn google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};
