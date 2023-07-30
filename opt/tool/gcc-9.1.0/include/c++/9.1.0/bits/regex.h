// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex.h

// Line 80: range 000000000D47C016-000000000D47C030
void __cdecl std::regex_traits<char>::~regex_traits(std::regex_traits<char> *const this)
{
  std::locale::~locale(&this->_M_locale);
};

// Line 95: range 000000000D455632-000000000D4556D0
void __cdecl std::regex_traits<char>::_RegexMask::_RegexMask(
        std::regex_traits<char>::_RegexMask *const this,
        std::regex_traits<char>::_RegexMask::_BaseType __base,
        unsigned __int8 __extended)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(this);
  }
  this->_M_base = __base;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_extended >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_extended >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_extended);
  }
  this->_M_extended = __extended;
};

// Line 101: range 000000000D46AFA8-000000000D46B1E7
std::regex_traits<char>::_RegexMask __fastcall std::regex_traits<char>::_RegexMask::operator&(
        const std::regex_traits<char>::_RegexMask *const this,
        int __other,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 M_extended; // rcx
  __int64 v9; // rsi
  char v10; // dl
  __int64 v11; // rdx
  __int64 M_base; // rcx
  __int64 v13; // rdx
  char v14[128]; // [rsp+10h] [rbp-80h] BYREF
  std::regex_traits<char>::_RegexMask result; // 0:eax.3

  v5 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 11 __other:101";
  *(_QWORD *)(v5 + 16) = std::regex_traits<char>::_RegexMask::operator&;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = __other;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_extended >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_extended >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->_M_extended);
  }
  M_extended = this->_M_extended;
  if ( *(_BYTE *)(((v5 + 66) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 66) & 7) >= *(_BYTE *)(((v5 + 66) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v5 + 66);
  }
  v9 = (unsigned __int8)(M_extended & *(_BYTE *)(v5 + 66));
  v10 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(M_extended) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 1) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_load2(this, v9, v11, M_extended, a5);
  M_base = this->_M_base;
  v13 = (*(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((v5 + 64) & 7) + 1) >= *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load2(v5 + 64, v9, v13, M_base, (((_BYTE)v5 + 64) & 7u) + 1);
  std::regex_traits<char>::_RegexMask::_RegexMask(
    (std::regex_traits<char>::_RegexMask *const)(v5 + 48),
    M_base & *(_WORD *)(v5 + 64),
    v9);
  if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v5 + 48);
  *(_QWORD *)&result._M_base = *(unsigned int *)(v5 + 48);
  if ( v14 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 108: range 000000000D46FFBC-000000000D4701FA
std::regex_traits<char>::_RegexMask __fastcall std::regex_traits<char>::_RegexMask::operator|(
        const std::regex_traits<char>::_RegexMask *const this,
        int __other,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned __int8 M_extended; // si
  __int64 v9; // rsi
  char v10; // dl
  __int64 v11; // rdx
  __int64 M_base; // rcx
  __int64 v13; // rdx
  char v14[128]; // [rsp+10h] [rbp-80h] BYREF
  std::regex_traits<char>::_RegexMask result; // 0:eax.3

  v5 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 11 __other:108";
  *(_QWORD *)(v5 + 16) = std::regex_traits<char>::_RegexMask::operator|;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = __other;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_extended >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_extended >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->_M_extended);
  }
  M_extended = this->_M_extended;
  if ( *(_BYTE *)(((v5 + 66) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 + 66) & 7) >= *(_BYTE *)(((v5 + 66) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v5 + 66);
  }
  v9 = (unsigned __int8)(M_extended | *(_BYTE *)(v5 + 66));
  v10 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(a4) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 1) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_load2(this, v9, v11, a4, a5);
  M_base = this->_M_base;
  v13 = (*(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((v5 + 64) & 7) + 1) >= *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load2(v5 + 64, v9, v13, M_base, (((_BYTE)v5 + 64) & 7u) + 1);
  std::regex_traits<char>::_RegexMask::_RegexMask(
    (std::regex_traits<char>::_RegexMask *const)(v5 + 48),
    M_base | *(_WORD *)(v5 + 64),
    v9);
  if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v5 + 48);
  *(_QWORD *)&result._M_base = *(unsigned int *)(v5 + 48);
  if ( v14 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 130: range 000000000D46386C-000000000D463A2A
std::regex_traits<char>::_RegexMask *__fastcall std::regex_traits<char>::_RegexMask::operator|=(
        std::regex_traits<char>::_RegexMask *const this,
        int __other,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  char v8; // al
  std::regex_traits<char>::_RegexMask *result; // rax
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 11 __other:130";
  *(_QWORD *)(v5 + 16) = std::regex_traits<char>::_RegexMask::operator|=;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = __other;
  v8 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(a4) = v8 != 0;
  if ( v8 != 0 && v8 <= 3 )
    __asan_report_store4(v5 + 48);
  *(std::regex_traits<char>::_RegexMask *)(v5 + 48) = std::regex_traits<char>::_RegexMask::operator|(
                                                        this,
                                                        *(_DWORD *)(v5 + 64),
                                                        *(unsigned int *)(v5 + 64),
                                                        a4,
                                                        a5);
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&this->_M_extended >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_extended >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 3LL);
  }
  *this = *(std::regex_traits<char>::_RegexMask *)(v5 + 48);
  result = this;
  if ( v10 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 138: range 000000000D455456-000000000D455630
__int64 __fastcall std::regex_traits<char>::_RegexMask::operator==(
        const std::regex_traits<char>::_RegexMask *const this,
        int __other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int8 M_extended; // r8
  char v7; // si
  __int64 v8; // r8
  __int64 v9; // rsi
  std::regex_traits<char>::_RegexMask::_BaseType M_base; // di
  char v11; // si
  __int64 v12; // rsi
  __int64 result; // rax
  char v14[80]; // [rsp+10h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 __other:138";
  *(_QWORD *)(v2 + 16) = std::regex_traits<char>::_RegexMask::operator==;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = __other;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_extended >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_extended >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load1(&this->_M_extended);
  }
  M_extended = this->_M_extended;
  v7 = *(_BYTE *)(((unsigned __int64)(v4 - 32 + 2) >> 3) + 0x7FFF8000);
  if ( v7 != 0 && ((v4 - 32 + 2) & 7) >= v7 )
    v4 = __asan_report_load1(v4 - 32 + 2);
  if ( ((M_extended ^ *(_BYTE *)(v4 - 30)) & 1) != 0 )
    goto LABEL_15;
  v8 = ((unsigned __int8)this & 7u) + 1;
  v9 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    v4 = __asan_report_load2(this, v9, v5, this, v8);
  M_base = this->_M_base;
  v11 = *(_BYTE *)(((unsigned __int64)(v4 - 32) >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((char)(((v4 - 32) & 7) + 1) >= v11);
  if ( (_BYTE)v12 )
  {
    M_base = v4 - 32;
    v4 = __asan_report_load2(v4 - 32, v12, v5, v4 - 32, v8);
  }
  if ( M_base != *(_WORD *)(v4 - 32) )
LABEL_15:
    result = 0LL;
  else
    result = 1LL;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 146: range 000000000D46B1E8-000000000D46B2B1
__int64 __fastcall std::regex_traits<char>::_RegexMask::operator!=(
        const std::regex_traits<char>::_RegexMask *const this,
        int __other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 __other:146";
  *(_QWORD *)(v2 + 16) = std::regex_traits<char>::_RegexMask::operator!=;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = __other;
  result = (unsigned int)std::regex_traits<char>::_RegexMask::operator==(this, *(_DWORD *)(v2 + 32)) ^ 1;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 157: range 000000000D482AF0-000000000D482B0A
void __cdecl std::regex_traits<char>::regex_traits(std::regex_traits<char> *const this)
{
  std::locale::locale(&this->_M_locale);
};

// Line 181: range 000000000D46F6F8-000000000D46F70A
std::regex_traits<char>::char_type __cdecl std::regex_traits<char>::translate(
        const std::regex_traits<char> *const this,
        std::regex_traits<char>::char_type __c)
{
  return __c;
};

// Line 194: range 000000000D46F6C2-000000000D46F6F6
std::regex_traits<char>::char_type __cdecl std::regex_traits<char>::translate_nocase(
        const std::regex_traits<char> *const this,
        std::regex_traits<char>::char_type __c)
{
  const std::ctype<char> *__fctyp; // [rsp+18h] [rbp-8h]

  __fctyp = (const std::ctype<char> *)std::use_facet<std::ctype<char>>(this);
  return std::ctype<char>::tolower(__fctyp, __c);
};

// Line 207: range 000000000CFC8CFE-000000000CFC8E30
bool __fastcall std::regex_match<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > __s,
        __gnu_cxx::__normal_iterator<char const*,std::string > __e,
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *__m,
        const std::basic_regex<char,std::regex_traits<char> > *__re,
        std::regex_constants::match_flag_type __flags)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool result; // al
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 8 __s:2059 64 8 8 __e:2060";
  *(_QWORD *)(v5 + 16) = std::regex_match<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 32) = __s;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 64) = __e;
  result = std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>,(std::__detail::_RegexExecutorPolicy)0,true>(
             *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 32),
             *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 64),
             __m,
             __re,
             __flags);
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 223: range 000000000D483EE8-000000000D48414F
std::regex_traits<char>::string_type *__cdecl std::regex_traits<char>::transform<char *>(
        std::regex_traits<char>::string_type *retstr,
        const std::regex_traits<char> *const this,
        char *__first,
        char *__last)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // r14
  __int64 v8; // r14
  std::regex_traits<char>::string_type *v9; // rdi
  const std::regex_traits<char>::transform<char*>::__collate_type *__fclt; // [rsp+28h] [rbp-B8h]
  char v15[176]; // [rsp+30h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 9 <unknown> 64 32 7 __s:227";
  *(_QWORD *)(v4 + 16) = std::regex_traits<char>::transform<char *>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862723] = -202116109;
  __fclt = (const std::regex_traits<char>::transform<char*>::__collate_type *)std::use_facet<std::collate<char>>(this);
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<char *,void>(
    (std::string *const)(v4 + 64),
    __first,
    __last,
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  v7 = std::string::data(v4 + 64);
  v8 = std::string::size(v4 + 64) + v7;
  v9 = (std::regex_traits<char>::string_type *)std::string::data(v4 + 64);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v9 = retstr;
    __asan_report_store_n(retstr, 32LL);
  }
  std::collate<char>::transform(retstr, __fclt, v9, v8);
  std::string::~string((void *)(v4 + 64));
  if ( v15 == (char *)v4 )
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
  return retstr;
};

// Line 223: range 000000000D4847E0-000000000D484AA4
std::regex_traits<char>::string_type *__fastcall std::regex_traits<char>::transform<__gnu_cxx::__normal_iterator<char *,std::string>>(
        unsigned __int64 retstr,
        const std::regex_traits<char> *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > __first,
        __gnu_cxx::__normal_iterator<char*,std::string > __last)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // rdi
  const std::regex_traits<char>::transform<__gnu_cxx::__normal_iterator<char*,std::string > >::__collate_type *__fclt; // [rsp+28h] [rbp-F8h]
  char v15[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 9 <unknown> 64 8 11 __first:223 96 8 10 __last:223 128 32 7 __s:227";
  *(_QWORD *)(v4 + 16) = std::regex_traits<char>::transform<__gnu_cxx::__normal_iterator<char *,std::string>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862725] = -202116109;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 64) = __first;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 96) = __last;
  __fclt = (const std::regex_traits<char>::transform<__gnu_cxx::__normal_iterator<char*,std::string > >::__collate_type *)std::use_facet<std::collate<char>>(this);
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<__gnu_cxx::__normal_iterator<char *,std::string>,void>(
    (std::string *const)(v4 + 128),
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 64),
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 96),
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  v7 = std::string::data(v4 + 128);
  v8 = std::string::size(v4 + 128) + v7;
  v9 = std::string::data(v4 + 128);
  if ( *(char *)((retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((retstr + 31) >> 3) + 0x7FFF8000) != 0
    && (char)((retstr + 31) & 7) >= *(_BYTE *)(((retstr + 31) >> 3) + 0x7FFF8000) )
  {
    v9 = retstr;
    __asan_report_store_n(retstr, 32LL);
  }
  std::collate<char>::transform(retstr, __fclt, v9, v8);
  std::string::~string((void *)(v4 + 128));
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (std::regex_traits<char>::string_type *)retstr;
};

// Line 247: range 000000000D4802F4-000000000D4805A8
std::regex_traits<char>::string_type *__cdecl std::regex_traits<char>::transform_primary<char *>(
        std::regex_traits<char>::string_type *retstr,
        const std::regex_traits<char> *const this,
        char *__first,
        char *__last)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  char *v7; // r14
  const std::ctype<char>::char_type *v8; // r14
  char *v9; // rcx
  char *v10; // r14
  char *v11; // r14
  char *v12; // rdi
  const std::ctype<char> *__fctyp; // [rsp+28h] [rbp-B8h]
  char v18[176]; // [rsp+30h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 9 <unknown> 64 24 7 __s:257";
  *(_QWORD *)(v4 + 16) = std::regex_traits<char>::transform_primary<char *>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  __fctyp = (const std::ctype<char> *)std::use_facet<std::ctype<char>>(this);
  std::allocator<char>::allocator(v4 + 48);
  std::vector<char>::vector<char *,void>(
    (std::vector<char> *const)(v4 + 64),
    __first,
    __last,
    (const std::vector<char>::allocator_type *)(v4 + 48));
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  v7 = std::vector<char>::data((std::vector<char> *const)(v4 + 64));
  v8 = &v7[std::vector<char>::size((const std::vector<char> *const)(v4 + 64))];
  v9 = std::vector<char>::data((std::vector<char> *const)(v4 + 64));
  std::ctype<char>::tolower(__fctyp, v9, v8);
  v10 = std::vector<char>::data((std::vector<char> *const)(v4 + 64));
  v11 = &v10[std::vector<char>::size((const std::vector<char> *const)(v4 + 64))];
  v12 = std::vector<char>::data((std::vector<char> *const)(v4 + 64));
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v12 = (char *)retstr;
    __asan_report_store_n(retstr, 32LL);
  }
  std::regex_traits<char>::transform<char *>(retstr, this, v12, v11);
  std::vector<char>::~vector((std::vector<char> *const)(v4 + 64));
  if ( v18 == (char *)v4 )
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
  return retstr;
};

// Line 247: range 000000000D47E3EE-000000000D47E6A2
std::regex_traits<char>::string_type *__cdecl std::regex_traits<char>::transform_primary<char const*>(
        std::regex_traits<char>::string_type *retstr,
        const std::regex_traits<char> *const this,
        const char *__first,
        const char *__last)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  char *v7; // r14
  const std::ctype<char>::char_type *v8; // r14
  char *v9; // rcx
  char *v10; // r14
  char *v11; // r14
  char *v12; // rdi
  const std::ctype<char> *__fctyp; // [rsp+28h] [rbp-B8h]
  char v18[176]; // [rsp+30h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 9 <unknown> 64 24 7 __s:257";
  *(_QWORD *)(v4 + 16) = std::regex_traits<char>::transform_primary<char const*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  __fctyp = (const std::ctype<char> *)std::use_facet<std::ctype<char>>(this);
  std::allocator<char>::allocator(v4 + 48);
  std::vector<char>::vector<char const*,void>(
    (std::vector<char> *const)(v4 + 64),
    __first,
    __last,
    (const std::vector<char>::allocator_type *)(v4 + 48));
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  v7 = std::vector<char>::data((std::vector<char> *const)(v4 + 64));
  v8 = &v7[std::vector<char>::size((const std::vector<char> *const)(v4 + 64))];
  v9 = std::vector<char>::data((std::vector<char> *const)(v4 + 64));
  std::ctype<char>::tolower(__fctyp, v9, v8);
  v10 = std::vector<char>::data((std::vector<char> *const)(v4 + 64));
  v11 = &v10[std::vector<char>::size((const std::vector<char> *const)(v4 + 64))];
  v12 = std::vector<char>::data((std::vector<char> *const)(v4 + 64));
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v12 = (char *)retstr;
    __asan_report_store_n(retstr, 32LL);
  }
  std::regex_traits<char>::transform<char *>(retstr, this, v12, v11);
  std::vector<char>::~vector((std::vector<char> *const)(v4 + 64));
  if ( v18 == (char *)v4 )
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
  return retstr;
};

// Line 359: range 000000000D482B0C-000000000D482B4B
std::regex_traits<char>::locale_type __cdecl std::regex_traits<char>::imbue(
        std::regex_traits<char> *const this,
        std::regex_traits<char>::locale_type *p___loc)
{
  std::locale *v2; // rdx
  std::regex_traits<char>::locale_type *p___loca; // [rsp+8h] [rbp-18h]

  p___loca = v2;
  std::swap<std::locale>(p___loc, v2);
  std::locale::locale(&this->_M_locale, p___loca);
  return (std::regex_traits<char>::locale_type)this;
};

// Line 370: range 000000000D44A3D4-000000000D44A3FC
std::regex_traits<char>::locale_type __cdecl std::regex_traits<char>::getloc(const std::regex_traits<char> *const this)
{
  const std::locale *v1; // rsi

  std::locale::locale(&this->_M_locale, v1);
  return (std::regex_traits<char>::locale_type)this;
};

// Line 437: range 000000000CEC57DE-000000000CEC581F
void __cdecl std::basic_regex<char,std::regex_traits<char>>::basic_regex(
        std::basic_regex<char,std::regex_traits<char> > *const this,
        const char *__p,
        std::basic_regex<char,std::regex_traits<char> >::flag_type __f)
{
  const char *v3; // rdi

  v3 = &__p[std::char_traits<char>::length(__p)];
  std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>(this, __p, v3, __f);
};

// Line 470: range 000000000D0F739E-000000000D0F7451
void __cdecl std::basic_regex<char,std::regex_traits<char>>::basic_regex(
        std::basic_regex<char,std::regex_traits<char> > *const this,
        std::basic_regex<char,std::regex_traits<char> > *__rhs)
{
  std::basic_regex<char,std::regex_traits<char> >::flag_type M_flags; // ecx

  if ( *(_BYTE *)(((unsigned __int64)__rhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__rhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__rhs);
  }
  M_flags = __rhs->_M_flags;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->_M_flags = M_flags;
  std::locale::locale(&this->_M_loc, &__rhs->_M_loc);
  std::shared_ptr<std::__detail::_NFA<std::regex_traits<char>> const>::shared_ptr(
    &this->_M_automaton,
    &__rhs->_M_automaton);
};

// Line 483: range 000000000CF19EEA-000000000CF19F46
void __cdecl std::basic_regex<char,std::regex_traits<char>>::basic_regex<std::char_traits<char>,std::allocator<char>>(
        std::basic_regex<char,std::regex_traits<char> > *const this,
        const std::string *__s,
        std::basic_regex<char,std::regex_traits<char> >::flag_type __f)
{
  __int64 v3; // rbx
  const char *v4; // rbx
  const char *v5; // rsi

  v3 = std::string::data(__s);
  v4 = (const char *)(std::string::size(__s) + v3);
  v5 = (const char *)std::string::data(__s);
  std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>(this, v5, v4, __f);
};

// Line 503: range 000000000CFC8826-000000000CFC8A03
void __fastcall std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>(
        std::basic_regex<char,std::regex_traits<char> > *const this,
        const char *__first,
        const char *__last,
        std::basic_regex<char,std::regex_traits<char> >::flag_type __f)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  const char *v8; // r14
  const char **v9; // rax
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 9 <unknown> 64 8 11 __first:503 96 8 10 __last:503";
  *(_QWORD *)(v4 + 16) = std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_QWORD *)(v4 + 64) = __first;
  *(_QWORD *)(v4 + 96) = __last;
  std::locale::locale((std::locale *)(v4 + 32));
  v7 = (unsigned __int64)std::move<char const*&>((const char **)(v4 + 96));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  v8 = *(const char **)v7;
  v9 = std::move<char const*&>((const char **)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    v9 = (const char **)__asan_report_load8(v9);
  std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>(
    this,
    *v9,
    v8,
    (std::basic_regex<char,std::regex_traits<char> >::locale_type *)(v4 + 32),
    __f);
  std::locale::~locale((std::locale *)(v4 + 32));
  if ( v12 == (char *)v4 )
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

// Line 506: range 000000000CFC8A04-000000000CFC8B97
__int64 __fastcall std::regex_match<__gnu_cxx::__normal_iterator<char const*,std::string>,char,std::regex_traits<char>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > __first,
        __gnu_cxx::__normal_iterator<char const*,std::string > __last,
        const std::basic_regex<char,std::regex_traits<char> > *__re,
        std::regex_constants::match_flag_type __flags)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 result; // rax
  char v12[208]; // [rsp+20h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 12 __first:2087 64 8 11 __last:2087 96 32 11 __what:2092";
  *(_QWORD *)(v4 + 16) = std::regex_match<__gnu_cxx::__normal_iterator<char const*,std::string>,char,std::regex_traits<char>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -202116109;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 32) = __first;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 64) = __last;
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v4 + 96));
  LOBYTE(v7) = std::regex_match<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
                 *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 32),
                 *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 64),
                 (std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *)(v4 + 96),
                 __re,
                 __flags);
  v8 = v7;
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::~match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v4 + 96));
  result = v8;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 523: range 000000000CEC585C-000000000CEC588A
void __cdecl std::basic_regex<char,std::regex_traits<char>>::~basic_regex(
        std::basic_regex<char,std::regex_traits<char> > *const this)
{
  std::shared_ptr<std::__detail::_NFA<std::regex_traits<char>> const>::~shared_ptr(&this->_M_automaton);
  std::locale::~locale(&this->_M_loc);
};

// Line 524: range 000000000CEC588B-000000000CEC58D7
bool __cdecl std::regex_match<std::char_traits<char>,std::allocator<char>,char,std::regex_traits<char>>(
        const std::string *__s,
        const std::basic_regex<char,std::regex_traits<char> > *__re,
        std::regex_constants::match_flag_type __flags)
{
  __gnu_cxx::__normal_iterator<char const*,std::string > v3; // rbx
  __gnu_cxx::__normal_iterator<char const*,std::string > v4; // rdi

  v3._M_current = (const char *)std::string::end(__s);
  v4._M_current = (const char *)std::string::begin(__s);
  return std::regex_match<__gnu_cxx::__normal_iterator<char const*,std::string>,char,std::regex_traits<char>>(
           v4,
           v3,
           __re,
           __flags);
};

// Line 680: range 000000000CEC5A45-000000000CEC5A9D
bool __cdecl std::regex_match<std::char_traits<char>,std::allocator<char>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
        const std::string *__s,
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *__m,
        const std::basic_regex<char,std::regex_traits<char> > *__re,
        std::regex_constants::match_flag_type __flags)
{
  __gnu_cxx::__normal_iterator<char const*,std::string > v4; // rbx
  __gnu_cxx::__normal_iterator<char const*,std::string > v5; // rdi

  v4._M_current = (const char *)std::string::end(__s);
  v5._M_current = (const char *)std::string::begin(__s);
  return std::regex_match<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
           v5,
           v4,
           __m,
           __re,
           __flags);
};

// Line 707: range 000000000D1D6BA4-000000000D1D6BE6
std::basic_regex<char,std::regex_traits<char> >::flag_type __cdecl std::basic_regex<char,std::regex_traits<char>>::flags(
        const std::basic_regex<char,std::regex_traits<char> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->_M_flags;
};

// Line 756: range 000000000D0A9998-000000000D0A9C37
void __fastcall std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>(
        std::basic_regex<char,std::regex_traits<char> > *const this,
        const char *__first,
        const char *__last,
        std::basic_regex<char,std::regex_traits<char> >::locale_type *p___loc,
        std::basic_regex<char,std::regex_traits<char> >::flag_type __f)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::remove_reference<std::locale&>::type *v8; // rax
  unsigned __int64 v9; // rax
  const std::regex_traits<char>::locale_type *v10; // r14
  unsigned __int64 v11; // rax
  const char *v12; // rax
  char v16[144]; // [rsp+30h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 11 __first:756 64 8 10 __last:756";
  *(_QWORD *)(v5 + 16) = std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -202116352;
  *(_QWORD *)(v5 + 32) = __first;
  *(_QWORD *)(v5 + 64) = __last;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->_M_flags = __f;
  v8 = std::move<std::locale &>(p___loc);
  std::locale::locale(&this->_M_loc, v8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  v9 = (unsigned __int64)std::move<char const*&>((const char **)(v5 + 64));
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(v9);
  v10 = *(const std::regex_traits<char>::locale_type **)v9;
  v11 = (unsigned __int64)std::move<char const*&>((const char **)(v5 + 32));
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8(v11);
  v12 = *(const char **)v11;
  if ( *(_WORD *)(((unsigned __int64)&this->_M_automaton >> 3) + 0x7FFF8000) )
    v12 = (const char *)__asan_report_store16(&this->_M_automaton);
  std::__detail::__compile_nfa<std::regex_traits<char>,char const*>(
    (const char *)&this->_M_automaton,
    v12,
    v10,
    (std::regex_constants::syntax_option_type)((_DWORD)this + 8));
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 863: range 000000000D3F2C70-000000000D3F2D0E
std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__cdecl std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator=(
        std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *const this,
        const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *a2)
{
  bool matched; // cl

  std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>>::operator=(
    this,
    a2);
  if ( *(char *)(((unsigned __int64)&a2->matched >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->matched);
  matched = a2->matched;
  if ( *(char *)(((unsigned __int64)&this->matched >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->matched);
  this->matched = matched;
  return this;
};

// Line 875: range 000000000D45A832-000000000D45A887
void __cdecl std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::sub_match(
        std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *const this)
{
  std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>>::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>,true>(this);
  if ( *(char *)(((unsigned __int64)&this->matched >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->matched);
  this->matched = 0;
};

// Line 892: range 000000000CED9912-000000000CED999E
std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *__cdecl std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator std::string(
        std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *retstr,
        const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *const this)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(retstr, this);
  return retstr;
};

// Line 901: range 000000000CEC5B1A-000000000CEC5CF7
std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *__cdecl std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str(
        std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >::string_type *retstr,
        const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5; // r15
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::str;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(char *)(((unsigned __int64)&this->matched >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->matched);
  v5 = 0;
  if ( this->matched )
  {
    std::allocator<char>::allocator(v2 + 32);
    v5 = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->second);
    std::string::basic_string<__gnu_cxx::__normal_iterator<char const*,std::string>,void>(
      retstr,
      this->first,
      this->second,
      (const std::allocator<char> *)(v2 + 32));
  }
  else
  {
    std::string::basic_string(retstr);
  }
  if ( v5 )
    std::allocator<char>::~allocator(v2 + 32);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1635: range 000000000CEC58D8-000000000CEC59B7
void __cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results(
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::allocator((std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > > *const)(v1 + 32));
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results(
    this,
    (const std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > > *)(v1 + 32));
  std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::~allocator((std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > > *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1638: range 000000000CFC8BD0-000000000CFC8C05
void __cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results(
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this,
        const std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > > *__a)
{
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::vector(this, __a);
  __gnu_cxx::__normal_iterator<char const*,std::string>::__normal_iterator(&this->_M_begin);
};

// Line 1669: range 000000000CE396A4-000000000CE396BE
void __cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::~match_results(
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this)
{
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::~vector(this);
};

// Line 1696: range 000000000CEC5A9E-000000000CEC5AD2
std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >>::size_type __cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::size(
        const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this)
{
  if ( std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::empty(this) )
    return 0LL;
  else
    return std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::size(this) - 3;
};

// Line 1709: range 000000000CFE47A4-000000000CFE47C3
bool __cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::empty(
        const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this)
{
  return std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::size(this) == 0;
};

// Line 1771: range 000000000CEC5AD4-000000000CEC5B18
std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >>::const_reference __cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator[](
        const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this,
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >>::size_type __sub)
{
  if ( __sub >= std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::size(this) )
    return std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_unmatched_sub(this);
  else
    return std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](this, __sub);
};

// Line 1813: range 000000000CED9EEE-000000000CED9F07
std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >>::const_iterator __cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::begin(
        const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this)
{
  return std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::begin(this);
};

// Line 1827: range 000000000CED9F08-000000000CEDA01D
std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >>::const_iterator __cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::end(
        const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __gnu_cxx::__normal_iterator<const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >::difference_type v4; // r14
  const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *v5; // rax
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >>::const_iterator result; // rax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::end;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::empty(this) )
    v4 = 0LL;
  else
    v4 = 3LL;
  v5 = this;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::const_iterator *)(v1 + 32) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end(v5);
  result._M_current = __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> const*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator-(
                        (const __gnu_cxx::__normal_iterator<const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v1 + 32),
                        v4)._M_current;
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1946: range 000000000D1D68A6-000000000D1D68CE
void __cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_resize(
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this,
        unsigned int __size)
{
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::resize(this, __size + 3);
};

// Line 1950: range 000000000CFC9054-000000000CFC9086
std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >>::const_reference __cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_unmatched_sub(
        const std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this)
{
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::size_type v1; // rax

  v1 = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::size(this);
  return std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](this, v1 - 3);
};

// Line 1962: range 000000000D1D79A8-000000000D1D79DA
std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_prefix(
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this)
{
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::size_type v1; // rax

  v1 = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::size(this);
  return std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](this, v1 - 2);
};

// Line 1970: range 000000000D1D79DC-000000000D1D7A0E
std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__cdecl std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_suffix(
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const this)
{
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::size_type v1; // rax

  v1 = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::size(this);
  return std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](this, v1 - 1);
};

// Line 2217: range 000000000CFE3FC8-000000000CFE40FA
bool __fastcall std::regex_search<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > __s,
        __gnu_cxx::__normal_iterator<char const*,std::string > __e,
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *__m,
        const std::basic_regex<char,std::regex_traits<char> > *__re,
        std::regex_constants::match_flag_type __flags)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool result; // al
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 8 __s:2217 64 8 8 __e:2217";
  *(_QWORD *)(v5 + 16) = std::regex_search<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 32) = __s;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 64) = __e;
  result = std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>,(std::__detail::_RegexExecutorPolicy)0,false>(
             *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 32),
             *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 64),
             __m,
             __re,
             __flags);
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 2241: range 000000000CFD8BCC-000000000CFD8D5F
__int64 __fastcall std::regex_search<__gnu_cxx::__normal_iterator<char const*,std::string>,char,std::regex_traits<char>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > __first,
        __gnu_cxx::__normal_iterator<char const*,std::string > __last,
        const std::basic_regex<char,std::regex_traits<char> > *__re,
        std::regex_constants::match_flag_type __flags)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 result; // rax
  char v12[208]; // [rsp+20h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 12 __first:2241 64 8 11 __last:2241 96 32 11 __what:2246";
  *(_QWORD *)(v4 + 16) = std::regex_search<__gnu_cxx::__normal_iterator<char const*,std::string>,char,std::regex_traits<char>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -202116109;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 32) = __first;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 64) = __last;
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v4 + 96));
  LOBYTE(v7) = std::regex_search<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
                 *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 32),
                 *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v4 + 64),
                 (std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *)(v4 + 96),
                 __re,
                 __flags);
  v8 = v7;
  std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::~match_results((std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *const)(v4 + 96));
  result = v8;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2302: range 000000000CECE910-000000000CECE95C
bool __cdecl std::regex_search<std::char_traits<char>,std::allocator<char>,char,std::regex_traits<char>>(
        const std::string *__s,
        const std::basic_regex<char,std::regex_traits<char> > *__e,
        std::regex_constants::match_flag_type __flags)
{
  __gnu_cxx::__normal_iterator<char const*,std::string > v3; // rbx
  __gnu_cxx::__normal_iterator<char const*,std::string > v4; // rdi

  v3._M_current = (const char *)std::string::end(__s);
  v4._M_current = (const char *)std::string::begin(__s);
  return std::regex_search<__gnu_cxx::__normal_iterator<char const*,std::string>,char,std::regex_traits<char>>(
           v4,
           v3,
           __e,
           __flags);
};

// Line 2325: range 000000000CED98B8-000000000CED9910
bool __cdecl std::regex_search<std::char_traits<char>,std::allocator<char>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
        const std::string *__s,
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *__m,
        const std::basic_regex<char,std::regex_traits<char> > *__e,
        std::regex_constants::match_flag_type __f)
{
  __gnu_cxx::__normal_iterator<char const*,std::string > v4; // rbx
  __gnu_cxx::__normal_iterator<char const*,std::string > v5; // rdi

  v4._M_current = (const char *)std::string::end(__s);
  v5._M_current = (const char *)std::string::begin(__s);
  return std::regex_search<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>>(
           v5,
           v4,
           __m,
           __e,
           __f);
};
