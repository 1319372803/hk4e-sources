// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/basic_string.tcc

// Line 132: range 000000000F97B776-000000000F97B8C7
std::basic_string<bool>::pointer __cdecl std::basic_string<bool>::_M_create(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type *__capacity,
        std::basic_string<bool>::size_type __old_capacity)
{
  std::basic_string<bool>::size_type v3; // rbx
  std::basic_string<bool>::size_type v4; // rbx
  std::basic_string<bool>::size_type v5; // rdx
  std::allocator_traits<std::allocator<bool> >::size_type v6; // rbx
  std::allocator_traits<std::allocator<bool> >::allocator_type *allocator; // rax

  if ( *(_BYTE *)(((unsigned __int64)__capacity >> 3) + 0x7FFF8000) )
    __asan_report_load8(__capacity);
  v3 = *__capacity;
  if ( v3 > std::basic_string<bool>::max_size(this) )
  {
    __asan_handle_no_return(this);
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( *(_BYTE *)(((unsigned __int64)__capacity >> 3) + 0x7FFF8000) )
    __asan_report_load8(__capacity);
  if ( __old_capacity < *__capacity && *__capacity < 2 * __old_capacity )
  {
    *__capacity = 2 * __old_capacity;
    v4 = *__capacity;
    if ( v4 > std::basic_string<bool>::max_size(this) )
    {
      v5 = std::basic_string<bool>::max_size(this);
      if ( *(_BYTE *)(((unsigned __int64)__capacity >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *__capacity = v5;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)__capacity >> 3) + 0x7FFF8000) )
    __asan_report_load8(__capacity);
  v6 = *__capacity + 1;
  allocator = std::basic_string<bool>::_M_get_allocator(this);
  return std::allocator_traits<std::allocator<bool>>::allocate(allocator, v6);
};

// Line 143: range 000000000C67C87E-000000000C67CA3E
void __cdecl std::string::_M_construct<char *>(
        std::string *const this,
        char *__beg,
        char *__end,
        std::forward_iterator_tag a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 10 __dnew:215";
  *(_QWORD *)(v4 + 16) = std::string::_M_construct<char *>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( __gnu_cxx::__is_null_pointer<char>(__beg) && __beg != __end )
  {
    __asan_handle_no_return(__beg);
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  *(_QWORD *)(v4 + 32) = std::distance<char *>(__beg, __end);
  if ( *(_QWORD *)(v4 + 32) > 0xFuLL )
  {
    v8 = std::string::_M_create(this, v4 + 32, 0LL);
    std::string::_M_data(this, v8);
    std::string::_M_capacity(this, *(_QWORD *)(v4 + 32));
  }
  v9 = std::string::_M_data(this);
  std::string::_S_copy_chars(v9, __beg, __end);
  std::string::_M_set_length(this, *(_QWORD *)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 206: range 000000000C67C5DE-000000000C67C79E
void __cdecl std::string::_M_construct<char const*>(
        std::string *const this,
        const char *__beg,
        const char *__end,
        std::forward_iterator_tag a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 10 __dnew:215";
  *(_QWORD *)(v4 + 16) = std::string::_M_construct<char const*>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( __gnu_cxx::__is_null_pointer<char const>(__beg) && __beg != __end )
  {
    __asan_handle_no_return(__beg);
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  *(_QWORD *)(v4 + 32) = std::distance<char const*>(__beg, __end);
  if ( *(_QWORD *)(v4 + 32) > 0xFuLL )
  {
    v8 = std::string::_M_create(this, v4 + 32, 0LL);
    std::string::_M_data(this, v8);
    std::string::_M_capacity(this, *(_QWORD *)(v4 + 32));
  }
  v9 = std::string::_M_data(this);
  std::string::_S_copy_chars(v9, __beg, __end);
  std::string::_M_set_length(this, *(_QWORD *)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 206: range 000000000C99DC64-000000000C99DE6B
void __fastcall std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        std::string *const this,
        __gnu_cxx::__normal_iterator<char const*,std::string > __beg,
        __gnu_cxx::__normal_iterator<char const*,std::string > __end)
{
  std::string *v3; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  size_t v7; // r12
  __int64 v8; // rax
  char *v9; // rax
  char v10; // al
  char v11; // al
  std::string::size_type v12; // rdi
  __int64 p_M_string_length; // rax
  unsigned __int64 v14; // rdi
  char v15; // al
  char v16[120]; // [rsp+10h] [rbp-78h] BYREF

  v3 = this;
  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 10 __dnew:215";
  *(_QWORD *)(v5 + 16) = std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = __end._M_current - __beg._M_current;
  if ( (const char *)(__end._M_current - __beg._M_current) > (const char *)0xF )
  {
    v9 = (char *)std::string::_M_create(this, v5 + 32, 0LL);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
    }
    else
    {
      this->_M_dataplus._M_p = v9;
      if ( !*(_BYTE *)(((unsigned __int64)&this->_anon_0 >> 3) + 0x7FFF8000) )
      {
        this->_anon_0._M_allocated_capacity = *(_QWORD *)(v5 + 32);
        goto LABEL_3;
      }
    }
    __asan_report_store8();
    goto LABEL_14;
  }
LABEL_3:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(this);
    goto LABEL_15;
  }
  this = (std::string *const)this->_M_dataplus._M_p;
  v7 = __end._M_current - __beg._M_current;
  if ( v7 == 1 )
  {
LABEL_15:
    v10 = *(_BYTE *)(((unsigned __int64)__beg._M_current >> 3) + 0x7FFF8000);
    if ( v10 <= ((__int64)__beg._M_current & 7) && v10 )
    {
      this = (std::string *const)__beg._M_current;
      __asan_report_load1(__beg._M_current);
    }
    else
    {
      v11 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
      if ( v11 > ((unsigned __int8)this & 7) || !v11 )
      {
        LOBYTE(this->_M_dataplus._M_p) = *__beg._M_current;
        goto LABEL_20;
      }
    }
    p_M_string_length = __asan_report_store1(this);
    goto LABEL_27;
  }
  if ( v7 )
    memcpy(this, __beg._M_current, v7);
LABEL_20:
  v12 = *(_QWORD *)(v5 + 32);
  p_M_string_length = (__int64)&v3->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    v14 = p_M_string_length;
    __asan_report_store8();
LABEL_28:
    __asan_report_store1(v14);
    goto LABEL_29;
  }
  v3->_M_string_length = v12;
  v14 = (unsigned __int64)&v3->_M_dataplus._M_p[v12];
  v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
  if ( v15 <= (char)(v14 & 7) && v15 )
    goto LABEL_28;
  *(_BYTE *)v14 = 0;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_29:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 310: range 000000000F938C2A-000000000F938E7D
void __cdecl std::basic_string<bool>::_M_mutate(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __pos,
        std::basic_string<bool>::size_type __len1,
        const bool *__s,
        std::basic_string<bool>::size_type __len2)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  std::basic_string<bool>::size_type v8; // rdx
  std::basic_string<bool>::size_type v9; // rdx
  const bool *v10; // rcx
  const bool *v11; // rsi
  std::basic_string<bool>::size_type __how_much; // [rsp+30h] [rbp-70h]
  bool *__r; // [rsp+38h] [rbp-68h]
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 18 __new_capacity:316";
  *(_QWORD *)(v5 + 16) = std::basic_string<bool>::_M_mutate;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  __how_much = std::basic_string<bool>::length(this) - __pos - __len1;
  v8 = __len2 + std::basic_string<bool>::length(this) - __len1;
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v5 + 32) = v8;
  v9 = std::basic_string<bool>::capacity(this);
  __r = std::basic_string<bool>::_M_create(this, (std::basic_string<bool>::size_type *)(v5 + 32), v9);
  if ( __pos )
  {
    v10 = std::basic_string<bool>::_M_data(this);
    std::basic_string<bool>::_S_copy(__r, v10, __pos);
  }
  if ( __s && __len2 )
    std::basic_string<bool>::_S_copy(&__r[__pos], __s, __len2);
  if ( __how_much )
  {
    v11 = &std::basic_string<bool>::_M_data(this)[__pos + __len1];
    std::basic_string<bool>::_S_copy(&__r[__len2 + __pos], v11, __how_much);
  }
  std::basic_string<bool>::_M_dispose(this);
  std::basic_string<bool>::_M_data(this, __r);
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v5 + 32);
  std::basic_string<bool>::_M_capacity(this, *(_QWORD *)(v5 + 32));
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 347: range 000000000F807C9E-000000000F807D0C
void __cdecl std::basic_string<bool>::resize(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __n,
        bool __c)
{
  std::basic_string<bool>::size_type __size; // [rsp+28h] [rbp-8h]

  __size = std::basic_string<bool>::size(this);
  if ( __size >= __n )
  {
    if ( __n < __size )
      std::basic_string<bool>::_M_set_length(this, __n);
  }
  else
  {
    std::basic_string<bool>::append(this, __n - __size, __c);
  }
};

// Line 392: range 000000000F8DDCFC-000000000F8DDE3E
std::basic_string<bool> *__cdecl std::basic_string<bool>::_M_replace_aux(
        std::basic_string<bool> *const this,
        std::basic_string<bool>::size_type __pos1,
        std::basic_string<bool>::size_type __n1,
        std::basic_string<bool>::size_type __n2,
        bool __c)
{
  bool *v5; // rcx
  std::basic_string<bool>::size_type __old_size; // [rsp+30h] [rbp-30h]
  std::basic_string<bool>::size_type __new_size; // [rsp+38h] [rbp-28h]
  std::basic_string<bool>::pointer __p; // [rsp+40h] [rbp-20h]

  std::basic_string<bool>::_M_check_length(this, __n1, __n2, "basic_string::_M_replace_aux");
  __old_size = std::basic_string<bool>::size(this);
  __new_size = __old_size + __n2 - __n1;
  if ( __new_size > std::basic_string<bool>::capacity(this) )
  {
    std::basic_string<bool>::_M_mutate(this, __pos1, __n1, 0LL, __n2);
  }
  else
  {
    __p = &std::basic_string<bool>::_M_data(this)[__pos1];
    if ( __old_size - __pos1 != __n1 && __n1 != __n2 )
      std::basic_string<bool>::_S_move(&__p[__n2], &__p[__n1], __old_size - __pos1 - __n1);
  }
  if ( __n2 )
  {
    v5 = &std::basic_string<bool>::_M_data(this)[__pos1];
    std::basic_string<bool>::_S_assign(v5, __n2, __c);
  }
  std::basic_string<bool>::_M_set_length(this, __new_size);
  return this;
};

// Line 463: range 000000000C99DA5A-000000000C99DC61
void __fastcall std::string::_M_construct<__gnu_cxx::__normal_iterator<char *,std::string>>(
        std::string *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > __beg,
        __gnu_cxx::__normal_iterator<char*,std::string > __end)
{
  std::string *v3; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  size_t v7; // r12
  __int64 v8; // rax
  char *v9; // rax
  char v10; // al
  char v11; // al
  std::string::size_type v12; // rdi
  __int64 p_M_string_length; // rax
  unsigned __int64 v14; // rdi
  char v15; // al
  char v16[120]; // [rsp+10h] [rbp-78h] BYREF

  v3 = this;
  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 10 __dnew:215";
  *(_QWORD *)(v5 + 16) = std::string::_M_construct<__gnu_cxx::__normal_iterator<char *,std::string>>;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = __end._M_current - __beg._M_current;
  if ( (char *)(__end._M_current - __beg._M_current) > (char *)0xF )
  {
    v9 = (char *)std::string::_M_create(this, v5 + 32, 0LL);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
    }
    else
    {
      this->_M_dataplus._M_p = v9;
      if ( !*(_BYTE *)(((unsigned __int64)&this->_anon_0 >> 3) + 0x7FFF8000) )
      {
        this->_anon_0._M_allocated_capacity = *(_QWORD *)(v5 + 32);
        goto LABEL_3;
      }
    }
    __asan_report_store8();
    goto LABEL_14;
  }
LABEL_3:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(this);
    goto LABEL_15;
  }
  this = (std::string *const)this->_M_dataplus._M_p;
  v7 = __end._M_current - __beg._M_current;
  if ( v7 == 1 )
  {
LABEL_15:
    v10 = *(_BYTE *)(((unsigned __int64)__beg._M_current >> 3) + 0x7FFF8000);
    if ( v10 <= ((__int64)__beg._M_current & 7) && v10 )
    {
      this = (std::string *const)__beg._M_current;
      __asan_report_load1(__beg._M_current);
    }
    else
    {
      v11 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
      if ( v11 > ((unsigned __int8)this & 7) || !v11 )
      {
        LOBYTE(this->_M_dataplus._M_p) = *__beg._M_current;
        goto LABEL_20;
      }
    }
    p_M_string_length = __asan_report_store1(this);
    goto LABEL_27;
  }
  if ( v7 )
    memcpy(this, __beg._M_current, v7);
LABEL_20:
  v12 = *(_QWORD *)(v5 + 32);
  p_M_string_length = (__int64)&v3->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    v14 = p_M_string_length;
    __asan_report_store8();
LABEL_28:
    __asan_report_store1(v14);
    goto LABEL_29;
  }
  v3->_M_string_length = v12;
  v14 = (unsigned __int64)&v3->_M_dataplus._M_p[v12];
  v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
  if ( v15 <= (char)(v14 & 7) && v15 )
    goto LABEL_28;
  *(_BYTE *)v14 = 0;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_29:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 1158: range 000000000C71D960-000000000C71D9FE
std::string *__fastcall std::operator+<char>(std::string *retstr, const char *__lhs, const std::string *__rhs)
{
  size_t v5; // rax
  std::string::size_type M_string_length; // rsi
  std::string::size_type v7; // r13

  v5 = strlen(__lhs);
  retstr->_anon_0._M_local_buf[0] = 0;
  retstr->_M_string_length = 0LL;
  M_string_length = __rhs->_M_string_length;
  v7 = v5;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::reserve(retstr, v5 + M_string_length);
  if ( v7 > 0x3FFFFFFFFFFFFFFFLL - retstr->_M_string_length )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(retstr, __lhs, v7);
  std::string::_M_append(retstr, __rhs->_M_dataplus._M_p, __rhs->_M_string_length);
  return retstr;
};
