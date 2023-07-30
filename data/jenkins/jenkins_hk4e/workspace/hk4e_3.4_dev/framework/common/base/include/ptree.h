// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/include/ptree.h

// Line 26: range 000000000C9C7A3E-000000000C9C7C85
void __fastcall common::tools::PTree::PTree(common::tools::PTree *const this, common::tools::PTree *other)
{
  common::tools::PTree::Impl *M_head_impl; // rax

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    this = other;
    __asan_report_load8(other);
    goto LABEL_5;
  }
  M_head_impl = other->impl_ptr_._M_t._M_t._M_head_impl;
  other->impl_ptr_._M_t._M_t._M_head_impl = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_5:
    __asan_report_store8(this, other);
    JUMPOUT(0xC9C7A81LL);
  }
  this->impl_ptr_._M_t._M_t._M_head_impl = M_head_impl;
};

// Line 74: range 000000000C65B9A6-000000000C65BADC
int __cdecl common::tools::PTree::get<int>(const common::tools::PTree *const this, const std::string *path)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  int result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 val_str:88";
  *(_QWORD *)(v2 + 16) = common::tools::PTree::get<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  common::tools::PTree::getValue((std::string *)(v2 + 32), this, path);
  v5 = common::tools::Converter<int>::convertTo((const std::string *)(v2 + 32));
  std::string::~string((void *)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 74: range 000000000C6B14D8-000000000C6B160E
unsigned __int16 __cdecl common::tools::PTree::get<unsigned short>(
        const common::tools::PTree *const this,
        const std::string *path)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int16 v5; // r14
  unsigned __int16 result; // ax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 val_str:88";
  *(_QWORD *)(v2 + 16) = common::tools::PTree::get<unsigned short>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  common::tools::PTree::getValue((std::string *)(v2 + 32), this, path);
  v5 = common::tools::Converter<unsigned short>::convertTo((const std::string *)(v2 + 32));
  std::string::~string((void *)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 86: range 000000000C6B1748-000000000C6B187E
bool __cdecl common::tools::PTree::get<bool>(const common::tools::PTree *const this, const std::string *path)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  bool result; // al
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 val_str:88";
  *(_QWORD *)(v2 + 16) = common::tools::PTree::get<bool>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  common::tools::PTree::getValue((std::string *)(v2 + 32), this, path);
  v5 = common::tools::Converter<bool>::convertTo((const std::string *)(v2 + 32));
  std::string::~string((void *)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 86: range 000000000CA21842-000000000CA21996
std::string *__fastcall common::tools::PTree::get<std::string>(
        std::string *retstr,
        const common::tools::PTree *const this,
        const std::string *path)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  std::forward_iterator_tag v7; // cl
  __int64 v8; // rax
  char *v9; // rdi
  char v11[152]; // [rsp+10h] [rbp-98h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 32 10 val_str:88";
  *(_QWORD *)(v5 + 16) = common::tools::PTree::get<std::string>;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  common::tools::PTree::getValue((std::string *)(v5 + 32), this, path);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, this);
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      retstr,
      *(char **)(v5 + 32),
      (char *)(*(_QWORD *)(v5 + 40) + *(_QWORD *)(v5 + 32)),
      v7);
  }
  v9 = *(char **)(v5 + 32);
  if ( v9 != (char *)(v5 + 48) )
    operator delete(v9);
  if ( v11 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 86: range 000000000C6B1610-000000000C6B1746
unsigned int __cdecl common::tools::PTree::get<unsigned int>(
        const common::tools::PTree *const this,
        const std::string *path)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int v5; // r14d
  unsigned int result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 val_str:88";
  *(_QWORD *)(v2 + 16) = common::tools::PTree::get<unsigned int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  common::tools::PTree::getValue((std::string *)(v2 + 32), this, path);
  v5 = common::tools::Converter<unsigned int>::convertTo((const std::string *)(v2 + 32));
  std::string::~string((void *)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 93: range 000000000C65B5EC-000000000C65B731
bool __cdecl common::tools::PTree::get<bool>(
        const common::tools::PTree *const this,
        const std::string *path,
        bool default_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r14
  bool result; // al
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 10 val_str:95";
  *(_QWORD *)(v3 + 16) = common::tools::PTree::get<bool>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  std::string::basic_string(v3 + 32);
  if ( common::tools::PTree::tryGetValue(this, path, (std::string *)(v3 + 32)) )
    v6 = default_value;
  else
    v6 = common::tools::Converter<bool>::convertTo((const std::string *)(v3 + 32));
  std::string::~string((void *)(v3 + 32));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 93: range 000000000C998682-000000000C9989D5
std::string::$CFBEC286C7F52157F7E59FC354047095 *__fastcall common::tools::PTree::get<std::string>(
        std::string *retstr,
        const common::tools::PTree *const this,
        const std::string *path,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  std::forward_iterator_tag v9; // cl
  unsigned __int64 v10; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  unsigned __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  char *v15; // rdi
  __int64 v17; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v18; // rdi
  std::string::size_type v19; // r9
  char v22[152]; // [rsp+10h] [rbp-98h] BYREF

  v6 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(96LL);
    if ( v17 )
      v6 = v17;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 32 10 val_str:95";
  *(_QWORD *)(v6 + 16) = common::tools::PTree::get<std::string>;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450888) = -202116109;
  *(_QWORD *)(v6 + 32) = v6 + 48;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_BYTE *)(v6 + 48) = 0;
  v8 = (__int64)path;
  if ( !common::tools::PTree::tryGetValue(this, path, (std::string *)(v6 + 32)) )
    goto LABEL_37;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, path);
    goto LABEL_23;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( *(_BYTE *)((a4 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    v10 = __asan_report_load8(a4);
    goto LABEL_24;
  }
  v10 = a4 + 16;
  if ( *(_QWORD *)a4 != a4 + 16 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
    {
      retstr->_M_dataplus._M_p = *(std::string::pointer *)a4;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(a4 + 16);
      if ( !*(_BYTE *)(((a4 + 16) >> 3) + 0x7FFF8000) )
      {
        p_anon_0 = &retstr->_anon_0;
        if ( !*(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000) )
        {
          retstr->_anon_0._M_allocated_capacity = *(_QWORD *)(a4 + 16);
          goto LABEL_10;
        }
LABEL_33:
        __asan_report_store8(p_anon_0, v8);
        goto LABEL_34;
      }
LABEL_32:
      __asan_report_load8(p_anon_0);
      goto LABEL_33;
    }
LABEL_31:
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr;
    __asan_report_store8(retstr, v8);
    goto LABEL_32;
  }
LABEL_24:
  v18 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v10 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v10 & 7)
    || *(_BYTE *)(((a4 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((a4 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((a4 + 31) & 7) )
  {
    __asan_report_load_n(v10, 16LL);
LABEL_30:
    v8 = 16LL;
    __asan_report_store_n(v18, 16LL);
    goto LABEL_31;
  }
  v19 = *(_QWORD *)(a4 + 24);
  v18 = &retstr->_anon_0;
  v8 = *(unsigned __int8 *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&retstr->_anon_0 >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 16) & 7)
    || (_BYTE)v8 != 0 && (char)v8 <= (((unsigned __int8)retstr + 31) & 7) )
  {
    goto LABEL_30;
  }
  retstr->_anon_0._M_allocated_capacity = *(_QWORD *)(a4 + 16);
  *(&retstr->_anon_0._M_allocated_capacity + 1) = v19;
LABEL_10:
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(a4 + 8);
  if ( *(_BYTE *)(((a4 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_anon_0);
    goto LABEL_35;
  }
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&retstr->_M_string_length;
  v12 = (unsigned __int64)&retstr->_M_string_length >> 3;
  if ( !*(_BYTE *)(v12 + 0x7FFF8000) )
  {
    retstr->_M_string_length = *(_QWORD *)(a4 + 8);
    *(_QWORD *)a4 = v10;
    *(_QWORD *)(a4 + 8) = 0LL;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(a4 + 16);
    v13 = *(_BYTE *)(((a4 + 16) >> 3) + 0x7FFF8000);
    v14 = ((_BYTE)a4 + 16) & 7;
    if ( v13 > (char)v14 || !v13 )
    {
      *(_BYTE *)(a4 + 16) = 0;
      goto LABEL_15;
    }
    goto LABEL_36;
  }
LABEL_35:
  __asan_report_store8(p_anon_0, v8);
LABEL_36:
  __asan_report_store1(p_anon_0, v8, v14, v12);
LABEL_37:
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, v8);
LABEL_40:
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
    return (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    retstr,
    *(char **)(v6 + 32),
    (char *)(*(_QWORD *)(v6 + 40) + *(_QWORD *)(v6 + 32)),
    v9);
LABEL_15:
  v15 = *(char **)(v6 + 32);
  if ( v15 != (char *)(v6 + 48) )
    operator delete(v15);
  if ( v22 != (char *)v6 )
    goto LABEL_40;
  *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  return (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr;
};

// Line 93: range 000000000C9989DA-000000000C998B1E
unsigned __int16 __fastcall common::tools::PTree::get<unsigned short>(
        const common::tools::PTree *const this,
        const std::string *path,
        unsigned __int16 default_value)
{
  unsigned __int64 v4; // rbx
  _DWORD *v5; // r13
  char *v6; // rdi
  unsigned __int16 result; // ax
  __int64 v8; // rax
  char v9[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v4 = v8;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 2 1 t 64 32 10 val_str:95";
  *(_QWORD *)(v4 + 16) = common::tools::PTree::get<unsigned short>;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234688015;
  v5[536862723] = -202116109;
  *(_QWORD *)(v4 + 64) = v4 + 80;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_BYTE *)(v4 + 80) = 0;
  if ( !common::tools::PTree::tryGetValue(this, path, (std::string *)(v4 + 64)) )
  {
    *(_WORD *)(v4 + 48) = 0;
    common::tools::StringUtils::strToNum<unsigned short>(
      (const std::string *)(v4 + 64),
      (unsigned __int16 *)(v4 + 48),
      1);
    default_value = *(_WORD *)(v4 + 48);
  }
  v6 = *(char **)(v4 + 64);
  if ( v6 != (char *)(v4 + 80) )
    operator delete(v6);
  result = default_value;
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 93: range 000000000C65B4A8-000000000C65B5EA
unsigned int __cdecl common::tools::PTree::get<unsigned int>(
        const common::tools::PTree *const this,
        const std::string *path,
        unsigned int default_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned int v6; // r14d
  unsigned int result; // eax
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 10 val_str:95";
  *(_QWORD *)(v3 + 16) = common::tools::PTree::get<unsigned int>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  std::string::basic_string(v3 + 32);
  if ( common::tools::PTree::tryGetValue(this, path, (std::string *)(v3 + 32)) )
    v6 = default_value;
  else
    v6 = common::tools::Converter<unsigned int>::convertTo((const std::string *)(v3 + 32));
  std::string::~string((void *)(v3 + 32));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
