// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex_compiler.h

// Line 57: range 000000000D1D65AC-000000000D1D6600
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::~_Compiler(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::~stack(&this->_M_stack);
  std::string::~string(&this->_M_value);
  std::shared_ptr<std::__detail::_NFA<std::regex_traits<char>>>::~shared_ptr(&this->_M_nfa);
  std::__detail::_Scanner<char>::~_Scanner(&this->_M_scanner);
};

// Line 69: range 000000000D28F45C-000000000D28F495
std::shared_ptr<const std::__detail::_NFA<std::regex_traits<char> > > __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_get_nfa(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  std::shared_ptr<std::__detail::_NFA<std::regex_traits<char> > > *v1; // rsi
  std::shared_ptr<std::__detail::_NFA<std::regex_traits<char> > > *v2; // rdx
  std::shared_ptr<const std::__detail::_NFA<std::regex_traits<char> > > result; // rax

  v2 = std::move<std::shared_ptr<std::__detail::_NFA<std::regex_traits<char>>> &>(v1 + 16);
  std::shared_ptr<std::__detail::_NFA<std::regex_traits<char>> const>::shared_ptr<std::__detail::_NFA<std::regex_traits<char>>,void>(
    (std::shared_ptr<const std::__detail::_NFA<std::regex_traits<char> > > *const)this,
    v2);
  result._M_ptr = (std::__shared_ptr<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 140: range 000000000D31EFF8-000000000D31F0B9
std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *__cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
        std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *retstr,
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 n; // rax
  std::__detail::_StateIdT v3; // rbx

  n = (unsigned __int64)std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::top(&this->_M_stack);
  if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0 && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 24LL);
  }
  v3 = *(_QWORD *)(n + 8);
  retstr->_M_nfa = *(std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT **)n;
  retstr->_M_start = v3;
  retstr->_M_end = *(_QWORD *)(n + 16);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::pop(&this->_M_stack);
  return retstr;
};

// Line 176: range 000000000D1D6601-000000000D1D6806
// local variable allocation has failed, the output may be wrong!
std::__detail::__enable_if_contiguous_iter __cdecl std::__detail::__compile_nfa<std::regex_traits<char>,char const*>(
        const char *__first,
        const char *__last,
        const std::regex_traits<char>::locale_type *__loc,
        std::regex_constants::syntax_option_type __flags)
{
  std::regex_constants::syntax_option_type v4; // r8d
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  const char *v8; // rax
  std::__detail::__enable_if_contiguous_iter result; // rax
  std::regex_constants::syntax_option_type __flagsa; // [rsp+Ch] [rbp-254h]
  const std::regex_traits<char>::locale_type *__loca; // [rsp+10h] [rbp-250h]
  char v13[544]; // [rsp+40h] [rbp-220h] BYREF

  __loca = *(const std::regex_traits<char>::locale_type **)&__flags;
  __flagsa = v4;
  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(512LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 48 400 9 <unknown>";
  *(_QWORD *)(v5 + 16) = std::__detail::__compile_nfa<std::regex_traits<char>,char const*>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862734] = -202116109;
  v7[536862735] = -202116109;
  if ( __loc == (const std::regex_traits<char>::locale_type *)__last )
    v8 = 0LL;
  else
    v8 = std::__addressof<char const>(__last);
  std::__detail::_Compiler<std::regex_traits<char>>::_Compiler(
    (std::__detail::_Compiler<std::regex_traits<char> > *const)(v5 + 48),
    v8,
    &v8[(char *)__loc - __last],
    __loca,
    __flagsa);
  if ( *(_WORD *)(((unsigned __int64)__first >> 3) + 0x7FFF8000) )
    __asan_report_store16(__first);
  std::__detail::_Compiler<std::regex_traits<char>>::_M_get_nfa((std::__detail::_Compiler<std::regex_traits<char> > *const)__first);
  std::__detail::_Compiler<std::regex_traits<char>>::~_Compiler((std::__detail::_Compiler<std::regex_traits<char> > *const)(v5 + 48));
  if ( v13 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2>::element_type *)__first;
  return result;
};

// Line 207: range 000000000D4614F0-000000000D46152E
void __cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_RegexTranslatorBase(
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true> *const this,
        const std::regex_traits<char> *__traits)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = __traits;
};

// Line 207: range 000000000D46181A-000000000D461858
void __cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_RegexTranslatorBase(
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false> *const this,
        const std::regex_traits<char> *__traits)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = __traits;
};

// Line 207: range 000000000D461B44-000000000D461B82
void __cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_RegexTranslatorBase(
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true> *const this,
        const std::regex_traits<char> *__traits)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = __traits;
};

// Line 212: range 000000000D462D18-000000000D462D60
std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT __cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true> *const this,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT __ch)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return std::regex_traits<char>::translate(this->_M_traits, __ch);
};

// Line 212: range 000000000D46304C-000000000D463094
std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT __cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false> *const this,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT __ch)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return std::regex_traits<char>::translate_nocase(this->_M_traits, __ch);
};

// Line 212: range 000000000D463380-000000000D4633C8
std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT __cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true> *const this,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT __ch)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return std::regex_traits<char>::translate_nocase(this->_M_traits, __ch);
};

// Line 223: range 000000000D47F1F6-000000000D47F461
std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_StrTransT *__cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_transform(
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_StrTransT *retstr,
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true> *const this,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT __ch)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::regex_traits<char> *M_traits; // r14
  __gnu_cxx::__normal_iterator<char*,std::string > v7; // r15
  __gnu_cxx::__normal_iterator<char*,std::string > v8; // rsi
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 32 9 __str:225";
  *(_QWORD *)(v3 + 16) = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_transform;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    1uLL,
    __ch,
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  M_traits = this->_M_traits;
  v7._M_current = (char *)std::string::end(v3 + 64);
  v8._M_current = (char *)std::string::begin(v3 + 64);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v8._M_current = (char *)32;
    __asan_report_store_n(retstr, 32LL);
  }
  std::regex_traits<char>::transform<__gnu_cxx::__normal_iterator<char *,std::string>>(
    (unsigned __int64)retstr,
    M_traits,
    v8,
    v7);
  std::string::~string((void *)(v3 + 64));
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 223: range 000000000D47FBD4-000000000D47FE3F
std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_StrTransT *__cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_transform(
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_StrTransT *retstr,
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true> *const this,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT __ch)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::regex_traits<char> *M_traits; // r14
  __gnu_cxx::__normal_iterator<char*,std::string > v7; // r15
  __gnu_cxx::__normal_iterator<char*,std::string > v8; // rsi
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 32 9 __str:225";
  *(_QWORD *)(v3 + 16) = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_transform;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    1uLL,
    __ch,
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  M_traits = this->_M_traits;
  v7._M_current = (char *)std::string::end(v3 + 64);
  v8._M_current = (char *)std::string::begin(v3 + 64);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v8._M_current = (char *)32;
    __asan_report_store_n(retstr, 32LL);
  }
  std::regex_traits<char>::transform<__gnu_cxx::__normal_iterator<char *,std::string>>(
    (unsigned __int64)retstr,
    M_traits,
    v8,
    v7);
  std::string::~string((void *)(v3 + 64));
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 233: range 000000000D47F82C-000000000D47F87F
bool __cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_match_range(
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true> *const this,
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_StrTransT *__first,
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_StrTransT *__last,
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_StrTransT *__s)
{
  return std::operator<=<char>(__first, __s) && std::operator<=<char>(__s, __last);
};

// Line 238: range 000000000D484D9A-000000000D484F62
bool __cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_in_range_icase(
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false> *const this,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT __first,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT __last,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT __ch)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  bool result; // al
  char __lower; // [rsp+26h] [rbp-6Ah]
  char __upper; // [rsp+27h] [rbp-69h]
  const std::ctype<char> *__fctyp; // [rsp+28h] [rbp-68h]
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_in_range_icase;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  std::regex_traits<char>::getloc((const std::regex_traits<char> *const)(v4 + 32));
  __fctyp = (const std::ctype<char> *)std::use_facet<std::ctype<char>>(v4 + 32);
  std::locale::~locale((std::locale *)(v4 + 32));
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  __lower = std::ctype<char>::tolower(__fctyp, __ch);
  __upper = std::ctype<char>::toupper(__fctyp, __ch);
  result = __first <= __lower && __lower <= __last || __first <= __upper && __upper <= __last;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 238: range 000000000D484F64-000000000D48512C
bool __cdecl std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_in_range_icase(
        const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true> *const this,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT __first,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT __last,
        std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT __ch)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  bool result; // al
  char __lower; // [rsp+26h] [rbp-6Ah]
  char __upper; // [rsp+27h] [rbp-69h]
  const std::ctype<char> *__fctyp; // [rsp+28h] [rbp-68h]
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_in_range_icase;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  std::regex_traits<char>::getloc((const std::regex_traits<char> *const)(v4 + 32));
  __fctyp = (const std::ctype<char> *)std::use_facet<std::ctype<char>>(v4 + 32);
  std::locale::~locale((std::locale *)(v4 + 32));
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  __lower = std::ctype<char>::tolower(__fctyp, __ch);
  __upper = std::ctype<char>::toupper(__fctyp, __ch);
  result = __first <= __lower && __lower <= __last || __first <= __upper && __upper <= __last;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 257: range 000000000D45385E-000000000D453883
void __cdecl ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb0ELb1EECI2NS_20_RegexTranslatorBaseIS3_Lb0ELb1EEEERKS3_(
        std::__detail::_RegexTranslator<std::regex_traits<char>,false,true> *const this,
        const std::regex_traits<char> *a2)
{
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_RegexTranslatorBase(this, a2);
};

// Line 269: range 000000000D453A30-000000000D453A55
void __cdecl ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb1ELb0EECI2NS_20_RegexTranslatorBaseIS3_Lb1ELb0EEEERKS3_(
        std::__detail::_RegexTranslator<std::regex_traits<char>,true,false> *const this,
        const std::regex_traits<char> *a2)
{
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_RegexTranslatorBase(this, a2);
};

// Line 272: range 000000000D47FB28-000000000D47FB3A
std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_StrTransT __cdecl std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_M_transform(
        const std::__detail::_RegexTranslator<std::regex_traits<char>,true,false> *const this,
        std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_CharT __ch)
{
  return __ch;
};

// Line 276: range 000000000D47FB3C-000000000D47FB6E
bool __cdecl std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_M_match_range(
        const std::__detail::_RegexTranslator<std::regex_traits<char>,true,false> *const this,
        std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_CharT __first,
        std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_CharT __last,
        std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_CharT __ch)
{
  return std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_in_range_icase(
           this,
           __first,
           __last,
           __ch);
};

// Line 294: range 000000000D453C02-000000000D453C27
void __cdecl ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb1ELb1EECI2NS_20_RegexTranslatorBaseIS3_Lb1ELb1EEEERKS3_(
        std::__detail::_RegexTranslator<std::regex_traits<char>,true,true> *const this,
        const std::regex_traits<char> *a2)
{
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_RegexTranslatorBase(this, a2);
};

// Line 297: range 000000000D47FE40-000000000D47FF67
bool __cdecl std::__detail::_RegexTranslator<std::regex_traits<char>,true,true>::_M_match_range(
        const std::__detail::_RegexTranslator<std::regex_traits<char>,true,true> *const this,
        const std::__detail::_RegexTranslator<std::regex_traits<char>,true,true>::_StrTransT *__first,
        const std::__detail::_RegexTranslator<std::regex_traits<char>,true,true>::_StrTransT *__last,
        const std::__detail::_RegexTranslator<std::regex_traits<char>,true,true>::_StrTransT *__str)
{
  unsigned __int64 v4; // rax
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT *v5; // rdx
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT v6; // r13
  unsigned __int64 v7; // rax
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT *v8; // rdx
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT v9; // r12
  unsigned __int64 v10; // rax
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT *v11; // rdx

  v4 = std::string::operator[](__str, 0LL);
  v5 = (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT *)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)(v4 & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v4);
  v6 = *v5;
  v7 = std::string::operator[](__last, 0LL);
  v8 = (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT *)v7;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v7);
  v9 = *v8;
  v10 = std::string::operator[](__first, 0LL);
  v11 = (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT *)v10;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v10);
  return std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_in_range_icase(this, *v11, v9, v6);
};

// Line 315: range 000000000D4610D6-000000000D4610E4
void __cdecl std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_RegexTranslator(
        std::__detail::_RegexTranslator<std::regex_traits<char>,false,false> *const this,
        const std::regex_traits<char> *a2)
{
  ;
};

// Line 319: range 000000000D462A1A-000000000D462A2C
std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT __cdecl std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(
        const std::__detail::_RegexTranslator<std::regex_traits<char>,false,false> *const this,
        std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT __ch)
{
  return __ch;
};

// Line 323: range 000000000D47DFDA-000000000D47DFEC
std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_StrTransT __cdecl std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_transform(
        const std::__detail::_RegexTranslator<std::regex_traits<char>,false,false> *const this,
        std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT __ch)
{
  return __ch;
};

// Line 327: range 000000000D47E3B8-000000000D47E3EC
bool __cdecl std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_match_range(
        const std::__detail::_RegexTranslator<std::regex_traits<char>,false,false> *const this,
        std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT __first,
        std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT __last,
        std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT __ch)
{
  return __first <= __ch && __ch <= __last;
};

// Line 341: range 000000000D453492-000000000D4534B7
void __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::_AnyMatcher(
        std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false> *const this,
        const std::regex_traits<char> *__traits)
{
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_RegexTranslator(&this->_M_translator, __traits);
};

// Line 341: range 000000000D453884-000000000D4538A9
void __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true>::_AnyMatcher(
        std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true> *const this,
        const std::regex_traits<char> *__traits)
{
  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb0ELb1EECI2NS_20_RegexTranslatorBaseIS3_Lb0ELb1EEEERKS3_(
    &this->_M_translator,
    __traits);
};

// Line 341: range 000000000D453A56-000000000D453A7B
void __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::_AnyMatcher(
        std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false> *const this,
        const std::regex_traits<char> *__traits)
{
  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb1ELb0EECI2NS_20_RegexTranslatorBaseIS3_Lb1ELb0EEEERKS3_(
    &this->_M_translator,
    __traits);
};

// Line 341: range 000000000D453C28-000000000D453C4D
void __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>::_AnyMatcher(
        std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true> *const this,
        const std::regex_traits<char> *__traits)
{
  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb1ELb1EECI2NS_20_RegexTranslatorBaseIS3_Lb1ELb1EEEERKS3_(
    &this->_M_translator,
    __traits);
};

// Line 346: range 000000000D46E44C-000000000D46E4D3
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::_CharT __ch)
{
  if ( !(_BYTE)`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)::__nul
    && __cxa_guard_acquire(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)::__nul) )
  {
    std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)const::__nul[0] = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(&this->_M_translator, 0);
    __cxa_guard_release(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)::__nul);
  }
  return std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(&this->_M_translator, __ch) != std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::operator()(char)const::__nul[0];
};

// Line 346: range 000000000D46E5F2-000000000D46E679
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true>::operator()(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true>::_CharT __ch)
{
  if ( !(_BYTE)`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true>::operator()(char)::__nul
    && __cxa_guard_acquire(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true>::operator()(char)::__nul) )
  {
    std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true>::operator()(char)const::__nul[0] = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(&this->_M_translator, 0);
    __cxa_guard_release(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true>::operator()(char)::__nul);
  }
  return std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(
           &this->_M_translator,
           __ch) != std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true>::operator()(char)const::__nul[0];
};

// Line 346: range 000000000D46E7E8-000000000D46E8A5
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::_CharT __ch)
{
  if ( !(_BYTE)`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(char)::__nul
    && __cxa_guard_acquire(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(char)::__nul) )
  {
    std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(char)const::__nul[0] = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(&this->_M_translator, 0);
    __cxa_guard_release(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(char)::__nul);
  }
  return std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(
           &this->_M_translator,
           __ch) != std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::operator()(char)const::__nul[0];
};

// Line 346: range 000000000D46EA14-000000000D46EAD1
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>::operator()(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>::_CharT __ch)
{
  if ( !(_BYTE)`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>::operator()(char)::__nul
    && __cxa_guard_acquire(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>::operator()(char)::__nul) )
  {
    std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>::operator()(char)const::__nul[0] = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(&this->_M_translator, 0);
    __cxa_guard_release(&`guard variable for'std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>::operator()(char)::__nul);
  }
  return std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(
           &this->_M_translator,
           __ch) != std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>::operator()(char)const::__nul[0];
};

// Line 362: range 000000000D453DD4-000000000D453DF9
void __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false>::_AnyMatcher(
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false> *const this,
        const std::regex_traits<char> *__traits)
{
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_RegexTranslator(&this->_M_translator, __traits);
};

// Line 362: range 000000000D453F7C-000000000D453FA1
void __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true>::_AnyMatcher(
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true> *const this,
        const std::regex_traits<char> *__traits)
{
  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb0ELb1EECI2NS_20_RegexTranslatorBaseIS3_Lb0ELb1EEEERKS3_(
    &this->_M_translator,
    __traits);
};

// Line 362: range 000000000D454128-000000000D45414D
void __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false>::_AnyMatcher(
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false> *const this,
        const std::regex_traits<char> *__traits)
{
  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb1ELb0EECI2NS_20_RegexTranslatorBaseIS3_Lb1ELb0EEEERKS3_(
    &this->_M_translator,
    __traits);
};

// Line 362: range 000000000D4542D4-000000000D4542F9
void __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true>::_AnyMatcher(
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true> *const this,
        const std::regex_traits<char> *__traits)
{
  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb1ELb1EECI2NS_20_RegexTranslatorBaseIS3_Lb1ELb1EEEERKS3_(
    &this->_M_translator,
    __traits);
};

// Line 367: range 000000000D46EBF0-000000000D46ECAF
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false>::operator()(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false>::_CharT __ch)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
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
  *(_QWORD *)(v2 + 16) = std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  result = std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false>::_M_apply(
             this,
             __ch,
             (std::true_type)__ch);
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

// Line 367: range 000000000D46EDCE-000000000D46EE8D
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true>::operator()(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true>::_CharT __ch)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
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
  *(_QWORD *)(v2 + 16) = std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  result = std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true>::_M_apply(
             this,
             __ch,
             (std::true_type)__ch);
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

// Line 367: range 000000000D46EFFC-000000000D46F0BB
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false>::operator()(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false>::_CharT __ch)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
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
  *(_QWORD *)(v2 + 16) = std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  result = std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false>::_M_apply(
             this,
             __ch,
             (std::true_type)__ch);
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

// Line 367: range 000000000D46F22A-000000000D46F2E9
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true>::operator()(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true>::_CharT __ch)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
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
  *(_QWORD *)(v2 + 16) = std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  result = std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true>::_M_apply(
             this,
             __ch,
             (std::true_type)__ch);
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

// Line 371: range 000000000D47C418-000000000D47C485
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false>::_M_apply(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false>::_CharT __ch,
        std::true_type a3)
{
  char __c; // [rsp+1Dh] [rbp-3h]
  char __n; // [rsp+1Eh] [rbp-2h]
  char __r; // [rsp+1Fh] [rbp-1h]

  __c = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(&this->_M_translator, __ch);
  __n = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(&this->_M_translator, 10);
  __r = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(&this->_M_translator, 13);
  return __c != __n && __c != __r;
};

// Line 371: range 000000000D47C4C8-000000000D47C535
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true>::_M_apply(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true>::_CharT __ch,
        std::true_type a3)
{
  char __c; // [rsp+1Dh] [rbp-3h]
  char __n; // [rsp+1Eh] [rbp-2h]
  char __r; // [rsp+1Fh] [rbp-1h]

  __c = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(
          &this->_M_translator,
          __ch);
  __n = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(&this->_M_translator, 10);
  __r = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(&this->_M_translator, 13);
  return __c != __n && __c != __r;
};

// Line 371: range 000000000D47C578-000000000D47C5E5
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false>::_M_apply(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false>::_CharT __ch,
        std::true_type a3)
{
  char __c; // [rsp+1Dh] [rbp-3h]
  char __n; // [rsp+1Eh] [rbp-2h]
  char __r; // [rsp+1Fh] [rbp-1h]

  __c = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(
          &this->_M_translator,
          __ch);
  __n = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(&this->_M_translator, 10);
  __r = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(&this->_M_translator, 13);
  return __c != __n && __c != __r;
};

// Line 371: range 000000000D47C628-000000000D47C695
bool __cdecl std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true>::_M_apply(
        const std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true> *const this,
        std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true>::_CharT __ch,
        std::true_type a3)
{
  char __c; // [rsp+1Dh] [rbp-3h]
  char __n; // [rsp+1Eh] [rbp-2h]
  char __r; // [rsp+1Fh] [rbp-1h]

  __c = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(&this->_M_translator, __ch);
  __n = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(&this->_M_translator, 10);
  __r = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(&this->_M_translator, 13);
  return __c != __n && __c != __r;
};

// Line 399: range 000000000D454480-000000000D4544FE
void __cdecl std::__detail::_CharMatcher<std::regex_traits<char>,false,false>::_CharMatcher(
        std::__detail::_CharMatcher<std::regex_traits<char>,false,false> *const this,
        std::__detail::_CharMatcher<std::regex_traits<char>,false,false>::_CharT __ch,
        const std::regex_traits<char> *__traits)
{
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT v3; // cl

  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_RegexTranslator(&this->_M_translator, __traits);
  v3 = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(&this->_M_translator, __ch);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ch >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ch >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_ch);
  }
  this->_M_ch = v3;
};

// Line 399: range 000000000D454686-000000000D4546FF
void __cdecl std::__detail::_CharMatcher<std::regex_traits<char>,false,true>::_CharMatcher(
        std::__detail::_CharMatcher<std::regex_traits<char>,false,true> *const this,
        std::__detail::_CharMatcher<std::regex_traits<char>,false,true>::_CharT __ch,
        const std::regex_traits<char> *__traits)
{
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT v3; // dl

  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb0ELb1EECI2NS_20_RegexTranslatorBaseIS3_Lb0ELb1EEEERKS3_(
    &this->_M_translator,
    __traits);
  v3 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(&this->_M_translator, __ch);
  if ( *(char *)(((unsigned __int64)&this->_M_ch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_ch);
  this->_M_ch = v3;
};

// Line 399: range 000000000D45489E-000000000D454917
void __cdecl std::__detail::_CharMatcher<std::regex_traits<char>,true,false>::_CharMatcher(
        std::__detail::_CharMatcher<std::regex_traits<char>,true,false> *const this,
        std::__detail::_CharMatcher<std::regex_traits<char>,true,false>::_CharT __ch,
        const std::regex_traits<char> *__traits)
{
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT v3; // dl

  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb1ELb0EECI2NS_20_RegexTranslatorBaseIS3_Lb1ELb0EEEERKS3_(
    &this->_M_translator,
    __traits);
  v3 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(&this->_M_translator, __ch);
  if ( *(char *)(((unsigned __int64)&this->_M_ch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_ch);
  this->_M_ch = v3;
};

// Line 399: range 000000000D454AB6-000000000D454B2F
void __cdecl std::__detail::_CharMatcher<std::regex_traits<char>,true,true>::_CharMatcher(
        std::__detail::_CharMatcher<std::regex_traits<char>,true,true> *const this,
        std::__detail::_CharMatcher<std::regex_traits<char>,true,true>::_CharT __ch,
        const std::regex_traits<char> *__traits)
{
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT v3; // dl

  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb1ELb1EECI2NS_20_RegexTranslatorBaseIS3_Lb1ELb1EEEERKS3_(
    &this->_M_translator,
    __traits);
  v3 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(&this->_M_translator, __ch);
  if ( *(char *)(((unsigned __int64)&this->_M_ch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_ch);
  this->_M_ch = v3;
};

// Line 404: range 000000000D46F4F6-000000000D46F565
bool __cdecl std::__detail::_CharMatcher<std::regex_traits<char>,false,false>::operator()(
        const std::__detail::_CharMatcher<std::regex_traits<char>,false,false> *const this,
        std::__detail::_CharMatcher<std::regex_traits<char>,false,false>::_CharT __ch)
{
  std::__detail::_CharMatcher<std::regex_traits<char>,false,false>::_CharT M_ch; // bl

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ch >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_ch >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->_M_ch);
  }
  M_ch = this->_M_ch;
  return M_ch == std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(
                   &this->_M_translator,
                   __ch);
};

// Line 404: range 000000000D46F7CA-000000000D46F834
bool __cdecl std::__detail::_CharMatcher<std::regex_traits<char>,false,true>::operator()(
        const std::__detail::_CharMatcher<std::regex_traits<char>,false,true> *const this,
        std::__detail::_CharMatcher<std::regex_traits<char>,false,true>::_CharT __ch)
{
  std::__detail::_CharMatcher<std::regex_traits<char>,false,true>::_CharT M_ch; // bl

  if ( *(char *)(((unsigned __int64)&this->_M_ch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->_M_ch);
  M_ch = this->_M_ch;
  return M_ch == std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(
                   &this->_M_translator,
                   __ch);
};

// Line 404: range 000000000D46F9BE-000000000D46FA28
bool __cdecl std::__detail::_CharMatcher<std::regex_traits<char>,true,false>::operator()(
        const std::__detail::_CharMatcher<std::regex_traits<char>,true,false> *const this,
        std::__detail::_CharMatcher<std::regex_traits<char>,true,false>::_CharT __ch)
{
  std::__detail::_CharMatcher<std::regex_traits<char>,true,false>::_CharT M_ch; // bl

  if ( *(char *)(((unsigned __int64)&this->_M_ch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->_M_ch);
  M_ch = this->_M_ch;
  return M_ch == std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(
                   &this->_M_translator,
                   __ch);
};

// Line 404: range 000000000D46FBB2-000000000D46FC1C
bool __cdecl std::__detail::_CharMatcher<std::regex_traits<char>,true,true>::operator()(
        const std::__detail::_CharMatcher<std::regex_traits<char>,true,true> *const this,
        std::__detail::_CharMatcher<std::regex_traits<char>,true,true>::_CharT __ch)
{
  std::__detail::_CharMatcher<std::regex_traits<char>,true,true>::_CharT M_ch; // bl

  if ( *(char *)(((unsigned __int64)&this->_M_ch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->_M_ch);
  M_ch = this->_M_ch;
  return M_ch == std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(
                   &this->_M_translator,
                   __ch);
};

// Line 413: range 000000000D472288-000000000D472599
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *a2)
{
  const std::regex_traits<char> *M_traits; // rdx
  bool M_is_non_matching; // cl
  std::_Base_bitset<4>::_WordT v4; // rdx
  std::_Base_bitset<4>::_WordT v5; // rdx

  std::vector<char>::vector(&this->_M_char_set, &a2->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set, &a2->_M_equiv_set);
  std::vector<std::pair<char,char>>::vector(&this->_M_range_set, &a2->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(
    &this->_M_neg_class_set,
    &a2->_M_neg_class_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_M_class_set);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_M_class_set);
  }
  this->_M_class_set = a2->_M_class_set;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_traits);
  M_traits = a2->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = M_traits;
  if ( *(char *)(((unsigned __int64)&a2->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->_M_is_non_matching);
  M_is_non_matching = a2->_M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 105) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->_M_cache, 32LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 105) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->_M_cache, 32LL);
  }
  v4 = a2->_M_cache._M_w[1];
  this->_M_cache._M_w[0] = a2->_M_cache._M_w[0];
  this->_M_cache._M_w[1] = v4;
  v5 = a2->_M_cache._M_w[3];
  this->_M_cache._M_w[2] = a2->_M_cache._M_w[2];
  this->_M_cache._M_w[3] = v5;
};

// Line 413: range 000000000D445666-000000000D44592A
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *a2)
{
  const std::regex_traits<char> *M_traits; // rdx
  bool M_is_non_matching; // cl
  std::_Base_bitset<4>::_WordT v4; // rdx
  std::_Base_bitset<4>::_WordT v5; // rdx

  std::vector<char>::vector(&this->_M_char_set, &a2->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set, &a2->_M_equiv_set);
  std::vector<std::pair<char,char>>::vector(&this->_M_range_set, &a2->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(
    &this->_M_neg_class_set,
    &a2->_M_neg_class_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_M_class_set);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_M_class_set);
  }
  this->_M_class_set = a2->_M_class_set;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_traits);
  M_traits = a2->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = M_traits;
  if ( *(char *)(((unsigned __int64)&a2->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->_M_is_non_matching);
  M_is_non_matching = a2->_M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 105) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->_M_cache, 32LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 105) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->_M_cache, 32LL);
  }
  v4 = a2->_M_cache._M_w[1];
  this->_M_cache._M_w[0] = a2->_M_cache._M_w[0];
  this->_M_cache._M_w[1] = v4;
  v5 = a2->_M_cache._M_w[3];
  this->_M_cache._M_w[2] = a2->_M_cache._M_w[2];
  this->_M_cache._M_w[3] = v5;
};

// Line 413: range 000000000D4454E2-000000000D44552C
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::~_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this)
{
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::~vector(&this->_M_neg_class_set);
  std::vector<std::pair<char,char>>::~vector(&this->_M_range_set);
  std::vector<std::string>::~vector(&this->_M_equiv_set);
  std::vector<char>::~vector(&this->_M_char_set);
};

// Line 413: range 000000000D47369A-000000000D473A0B
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *a2)
{
  const std::regex_traits<char> *M_traits; // rdx
  bool M_is_non_matching; // cl
  std::_Base_bitset<4>::_WordT v4; // rdx
  std::_Base_bitset<4>::_WordT v5; // rdx

  std::vector<char>::vector(&this->_M_char_set, &a2->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set, &a2->_M_equiv_set);
  std::vector<std::pair<std::string,std::string>>::vector(&this->_M_range_set, &a2->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(
    &this->_M_neg_class_set,
    &a2->_M_neg_class_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_M_class_set);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_M_class_set);
  }
  this->_M_class_set = a2->_M_class_set;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_translator);
  this->_M_translator._M_traits = a2->_M_translator._M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_traits);
  M_traits = a2->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = M_traits;
  if ( *(char *)(((unsigned __int64)&a2->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->_M_is_non_matching);
  M_is_non_matching = a2->_M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->_M_cache, 32LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->_M_cache, 32LL);
  }
  v4 = a2->_M_cache._M_w[1];
  this->_M_cache._M_w[0] = a2->_M_cache._M_w[0];
  this->_M_cache._M_w[1] = v4;
  v5 = a2->_M_cache._M_w[3];
  this->_M_cache._M_w[2] = a2->_M_cache._M_w[2];
  this->_M_cache._M_w[3] = v5;
};

// Line 413: range 000000000D445EEC-000000000D446210
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *a2)
{
  const std::regex_traits<char> *M_traits; // rdx
  bool M_is_non_matching; // cl
  std::_Base_bitset<4>::_WordT v4; // rdx
  std::_Base_bitset<4>::_WordT v5; // rdx

  std::vector<char>::vector(&this->_M_char_set, &a2->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set, &a2->_M_equiv_set);
  std::vector<std::pair<std::string,std::string>>::vector(&this->_M_range_set, &a2->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(
    &this->_M_neg_class_set,
    &a2->_M_neg_class_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_M_class_set);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_M_class_set);
  }
  this->_M_class_set = a2->_M_class_set;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_translator);
  this->_M_translator._M_traits = a2->_M_translator._M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_traits);
  M_traits = a2->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = M_traits;
  if ( *(char *)(((unsigned __int64)&a2->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->_M_is_non_matching);
  M_is_non_matching = a2->_M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->_M_cache, 32LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->_M_cache, 32LL);
  }
  v4 = a2->_M_cache._M_w[1];
  this->_M_cache._M_w[0] = a2->_M_cache._M_w[0];
  this->_M_cache._M_w[1] = v4;
  v5 = a2->_M_cache._M_w[3];
  this->_M_cache._M_w[2] = a2->_M_cache._M_w[2];
  this->_M_cache._M_w[3] = v5;
};

// Line 413: range 000000000D445E38-000000000D445E82
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::~_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this)
{
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::~vector(&this->_M_neg_class_set);
  std::vector<std::pair<std::string,std::string>>::~vector(&this->_M_range_set);
  std::vector<std::string>::~vector(&this->_M_equiv_set);
  std::vector<char>::~vector(&this->_M_char_set);
};

// Line 413: range 000000000D474932-000000000D474CA3
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *a2)
{
  const std::regex_traits<char> *M_traits; // rdx
  bool M_is_non_matching; // cl
  std::_Base_bitset<4>::_WordT v4; // rdx
  std::_Base_bitset<4>::_WordT v5; // rdx

  std::vector<char>::vector(&this->_M_char_set, &a2->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set, &a2->_M_equiv_set);
  std::vector<std::pair<char,char>>::vector(&this->_M_range_set, &a2->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(
    &this->_M_neg_class_set,
    &a2->_M_neg_class_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_M_class_set);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_M_class_set);
  }
  this->_M_class_set = a2->_M_class_set;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_translator);
  this->_M_translator._M_traits = a2->_M_translator._M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_traits);
  M_traits = a2->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = M_traits;
  if ( *(char *)(((unsigned __int64)&a2->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->_M_is_non_matching);
  M_is_non_matching = a2->_M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->_M_cache, 32LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->_M_cache, 32LL);
  }
  v4 = a2->_M_cache._M_w[1];
  this->_M_cache._M_w[0] = a2->_M_cache._M_w[0];
  this->_M_cache._M_w[1] = v4;
  v5 = a2->_M_cache._M_w[3];
  this->_M_cache._M_w[2] = a2->_M_cache._M_w[2];
  this->_M_cache._M_w[3] = v5;
};

// Line 413: range 000000000D446760-000000000D446A84
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *a2)
{
  const std::regex_traits<char> *M_traits; // rdx
  bool M_is_non_matching; // cl
  std::_Base_bitset<4>::_WordT v4; // rdx
  std::_Base_bitset<4>::_WordT v5; // rdx

  std::vector<char>::vector(&this->_M_char_set, &a2->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set, &a2->_M_equiv_set);
  std::vector<std::pair<char,char>>::vector(&this->_M_range_set, &a2->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(
    &this->_M_neg_class_set,
    &a2->_M_neg_class_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_M_class_set);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_M_class_set);
  }
  this->_M_class_set = a2->_M_class_set;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_translator);
  this->_M_translator._M_traits = a2->_M_translator._M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_traits);
  M_traits = a2->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = M_traits;
  if ( *(char *)(((unsigned __int64)&a2->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->_M_is_non_matching);
  M_is_non_matching = a2->_M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->_M_cache, 32LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->_M_cache, 32LL);
  }
  v4 = a2->_M_cache._M_w[1];
  this->_M_cache._M_w[0] = a2->_M_cache._M_w[0];
  this->_M_cache._M_w[1] = v4;
  v5 = a2->_M_cache._M_w[3];
  this->_M_cache._M_w[2] = a2->_M_cache._M_w[2];
  this->_M_cache._M_w[3] = v5;
};

// Line 413: range 000000000D446714-000000000D44675E
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::~_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this)
{
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::~vector(&this->_M_neg_class_set);
  std::vector<std::pair<char,char>>::~vector(&this->_M_range_set);
  std::vector<std::string>::~vector(&this->_M_equiv_set);
  std::vector<char>::~vector(&this->_M_char_set);
};

// Line 413: range 000000000D475CB6-000000000D476027
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *a2)
{
  const std::regex_traits<char> *M_traits; // rdx
  bool M_is_non_matching; // cl
  std::_Base_bitset<4>::_WordT v4; // rdx
  std::_Base_bitset<4>::_WordT v5; // rdx

  std::vector<char>::vector(&this->_M_char_set, &a2->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set, &a2->_M_equiv_set);
  std::vector<std::pair<std::string,std::string>>::vector(&this->_M_range_set, &a2->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(
    &this->_M_neg_class_set,
    &a2->_M_neg_class_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_M_class_set);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_M_class_set);
  }
  this->_M_class_set = a2->_M_class_set;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_translator);
  this->_M_translator._M_traits = a2->_M_translator._M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_traits);
  M_traits = a2->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = M_traits;
  if ( *(char *)(((unsigned __int64)&a2->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->_M_is_non_matching);
  M_is_non_matching = a2->_M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->_M_cache, 32LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->_M_cache, 32LL);
  }
  v4 = a2->_M_cache._M_w[1];
  this->_M_cache._M_w[0] = a2->_M_cache._M_w[0];
  this->_M_cache._M_w[1] = v4;
  v5 = a2->_M_cache._M_w[3];
  this->_M_cache._M_w[2] = a2->_M_cache._M_w[2];
  this->_M_cache._M_w[3] = v5;
};

// Line 413: range 000000000D446FD4-000000000D4472F8
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *a2)
{
  const std::regex_traits<char> *M_traits; // rdx
  bool M_is_non_matching; // cl
  std::_Base_bitset<4>::_WordT v4; // rdx
  std::_Base_bitset<4>::_WordT v5; // rdx

  std::vector<char>::vector(&this->_M_char_set, &a2->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set, &a2->_M_equiv_set);
  std::vector<std::pair<std::string,std::string>>::vector(&this->_M_range_set, &a2->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(
    &this->_M_neg_class_set,
    &a2->_M_neg_class_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->_M_class_set);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->_M_class_set);
  }
  this->_M_class_set = a2->_M_class_set;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_translator >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_translator);
  this->_M_translator._M_traits = a2->_M_translator._M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&a2->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->_M_traits);
  M_traits = a2->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = M_traits;
  if ( *(char *)(((unsigned __int64)&a2->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->_M_is_non_matching);
  M_is_non_matching = a2->_M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = M_is_non_matching;
  if ( *(char *)(((unsigned __int64)&this->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_M_cache._M_w[3] + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->_M_cache, 32LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->_M_cache >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->_M_cache._M_w[3] + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->_M_cache, 32LL);
  }
  v4 = a2->_M_cache._M_w[1];
  this->_M_cache._M_w[0] = a2->_M_cache._M_w[0];
  this->_M_cache._M_w[1] = v4;
  v5 = a2->_M_cache._M_w[3];
  this->_M_cache._M_w[2] = a2->_M_cache._M_w[2];
  this->_M_cache._M_w[3] = v5;
};

// Line 413: range 000000000D446F88-000000000D446FD2
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::~_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this)
{
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::~vector(&this->_M_neg_class_set);
  std::vector<std::pair<std::string,std::string>>::~vector(&this->_M_range_set);
  std::vector<std::string>::~vector(&this->_M_equiv_set);
  std::vector<char>::~vector(&this->_M_char_set);
};

// Line 423: range 000000000D4551A8-000000000D4552AB
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        bool __is_non_matching,
        const std::regex_traits<char> *__traits)
{
  std::vector<char>::vector(&this->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set);
  std::vector<std::pair<char,char>>::vector(&this->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(&this->_M_neg_class_set);
  std::regex_traits<char>::_RegexMask::_RegexMask(&this->_M_class_set, 0, 0);
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_RegexTranslator(&this->_M_translator, __traits);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = __traits;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = __is_non_matching;
  std::bitset<256ul>::bitset(&this->_M_cache);
};

// Line 423: range 000000000D456034-000000000D456137
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        bool __is_non_matching,
        const std::regex_traits<char> *__traits)
{
  std::vector<char>::vector(&this->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set);
  std::vector<std::pair<std::string,std::string>>::vector(&this->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(&this->_M_neg_class_set);
  std::regex_traits<char>::_RegexMask::_RegexMask(&this->_M_class_set, 0, 0);
  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb0ELb1EECI2NS_20_RegexTranslatorBaseIS3_Lb0ELb1EEEERKS3_(
    &this->_M_translator,
    __traits);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = __traits;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = __is_non_matching;
  std::bitset<256ul>::bitset(&this->_M_cache);
};

// Line 423: range 000000000D45690E-000000000D456A11
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        bool __is_non_matching,
        const std::regex_traits<char> *__traits)
{
  std::vector<char>::vector(&this->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set);
  std::vector<std::pair<char,char>>::vector(&this->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(&this->_M_neg_class_set);
  std::regex_traits<char>::_RegexMask::_RegexMask(&this->_M_class_set, 0, 0);
  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb1ELb0EECI2NS_20_RegexTranslatorBaseIS3_Lb1ELb0EEEERKS3_(
    &this->_M_translator,
    __traits);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = __traits;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = __is_non_matching;
  std::bitset<256ul>::bitset(&this->_M_cache);
};

// Line 423: range 000000000D457058-000000000D45715B
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_BracketMatcher(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        bool __is_non_matching,
        const std::regex_traits<char> *__traits)
{
  std::vector<char>::vector(&this->_M_char_set);
  std::vector<std::string>::vector(&this->_M_equiv_set);
  std::vector<std::pair<std::string,std::string>>::vector(&this->_M_range_set);
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::vector(&this->_M_neg_class_set);
  std::regex_traits<char>::_RegexMask::_RegexMask(&this->_M_class_set, 0, 0);
  ZNSt8__detail16_RegexTranslatorINSt7__cxx1112regex_traitsIcEELb1ELb1EECI2NS_20_RegexTranslatorBaseIS3_Lb1ELb1EEEERKS3_(
    &this->_M_translator,
    __traits);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = __traits;
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_is_non_matching);
  this->_M_is_non_matching = __is_non_matching;
  std::bitset<256ul>::bitset(&this->_M_cache);
};

// Line 430: range 000000000D4721AE-000000000D47226D
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::operator()(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT __ch)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
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
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  result = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_apply(
             this,
             __ch,
             (std::true_type)__ch);
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

// Line 430: range 000000000D4735C0-000000000D47367F
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::operator()(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT __ch)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
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
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  result = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_apply(
             this,
             __ch,
             (std::true_type)__ch);
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

// Line 430: range 000000000D474858-000000000D474917
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::operator()(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT __ch)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
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
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  result = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_apply(
             this,
             __ch,
             (std::true_type)__ch);
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

// Line 430: range 000000000D475BDC-000000000D475C9B
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::operator()(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT __ch)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
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
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  result = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_apply(this, __ch, (std::true_type)__ch);
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

// Line 437: range 000000000D466760-000000000D46687C
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_char(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT __c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT v5; // dl
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_char;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(&this->_M_translator, __c);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 32);
  *(_BYTE *)(v2 + 32) = v5;
  std::vector<char>::push_back(&this->_M_char_set, (std::vector<char>::value_type *)(v2 + 32));
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

// Line 437: range 000000000D467414-000000000D467530
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_char(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT __c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT v5; // dl
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_char;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(&this->_M_translator, __c);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 32);
  *(_BYTE *)(v2 + 32) = v5;
  std::vector<char>::push_back(&this->_M_char_set, (std::vector<char>::value_type *)(v2 + 32));
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

// Line 437: range 000000000D4680C8-000000000D4681E4
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_char(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT __c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT v5; // dl
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_char;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(&this->_M_translator, __c);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 32);
  *(_BYTE *)(v2 + 32) = v5;
  std::vector<char>::push_back(&this->_M_char_set, (std::vector<char>::value_type *)(v2 + 32));
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

// Line 437: range 000000000D468D7C-000000000D468E98
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_char(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT __c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT v5; // dl
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_char;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(&this->_M_translator, __c);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 32);
  *(_BYTE *)(v2 + 32) = v5;
  std::vector<char>::push_back(&this->_M_char_set, (std::vector<char>::value_type *)(v2 + 32));
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

// Line 444: range 000000000D47613A-000000000D4763E5
std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_StringT *__cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_collate_element(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_StringT *retstr,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_StringT *__s)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const std::regex_traits<char> *M_traits; // r14
  __int64 v7; // r15
  const char *v8; // r15
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT *v11; // rdx
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT v12; // dl
  char v16[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_collate_element;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v7 = std::string::data(__s);
  v8 = (const char *)(std::string::size(__s) + v7);
  v9 = std::string::data(__s);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v9 = 32LL;
    __asan_report_store_n(retstr, 32LL);
  }
  std::regex_traits<char>::lookup_collatename<char const*>(retstr, M_traits, (const char *)v9, v8);
  if ( (unsigned __int8)std::string::empty(retstr) )
    std::__throw_regex_error(_S_error_collate, "Invalid collate element.");
  v10 = std::string::operator[](retstr, 0LL);
  v11 = (std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT *)v10;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v10);
  v12 = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(&this->_M_translator, *v11);
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v3 + 32);
  *(_BYTE *)(v3 + 32) = v12;
  std::vector<char>::push_back(&this->_M_char_set, (std::vector<char>::value_type *)(v3 + 32));
  if ( v16 == (char *)v3 )
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

// Line 444: range 000000000D4769A4-000000000D476C4F
std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_StringT *__cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_collate_element(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_StringT *retstr,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_StringT *__s)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const std::regex_traits<char> *M_traits; // r14
  __int64 v7; // r15
  const char *v8; // r15
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT *v11; // rdx
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT v12; // dl
  char v16[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_collate_element;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v7 = std::string::data(__s);
  v8 = (const char *)(std::string::size(__s) + v7);
  v9 = std::string::data(__s);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v9 = 32LL;
    __asan_report_store_n(retstr, 32LL);
  }
  std::regex_traits<char>::lookup_collatename<char const*>(retstr, M_traits, (const char *)v9, v8);
  if ( (unsigned __int8)std::string::empty(retstr) )
    std::__throw_regex_error(_S_error_collate, "Invalid collate element.");
  v10 = std::string::operator[](retstr, 0LL);
  v11 = (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT *)v10;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v10);
  v12 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(
          &this->_M_translator,
          *v11);
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v3 + 32);
  *(_BYTE *)(v3 + 32) = v12;
  std::vector<char>::push_back(&this->_M_char_set, (std::vector<char>::value_type *)(v3 + 32));
  if ( v16 == (char *)v3 )
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

// Line 444: range 000000000D4773C0-000000000D47766B
std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_StringT *__cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_collate_element(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_StringT *retstr,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_StringT *__s)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const std::regex_traits<char> *M_traits; // r14
  __int64 v7; // r15
  const char *v8; // r15
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT *v11; // rdx
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT v12; // dl
  char v16[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_collate_element;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v7 = std::string::data(__s);
  v8 = (const char *)(std::string::size(__s) + v7);
  v9 = std::string::data(__s);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v9 = 32LL;
    __asan_report_store_n(retstr, 32LL);
  }
  std::regex_traits<char>::lookup_collatename<char const*>(retstr, M_traits, (const char *)v9, v8);
  if ( (unsigned __int8)std::string::empty(retstr) )
    std::__throw_regex_error(_S_error_collate, "Invalid collate element.");
  v10 = std::string::operator[](retstr, 0LL);
  v11 = (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT *)v10;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v10);
  v12 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(
          &this->_M_translator,
          *v11);
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v3 + 32);
  *(_BYTE *)(v3 + 32) = v12;
  std::vector<char>::push_back(&this->_M_char_set, (std::vector<char>::value_type *)(v3 + 32));
  if ( v16 == (char *)v3 )
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

// Line 444: range 000000000D477BF8-000000000D477EA3
std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_StringT *__cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_collate_element(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_StringT *retstr,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_StringT *__s)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const std::regex_traits<char> *M_traits; // r14
  __int64 v7; // r15
  const char *v8; // r15
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT *v11; // rdx
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT v12; // dl
  char v16[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_collate_element;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v7 = std::string::data(__s);
  v8 = (const char *)(std::string::size(__s) + v7);
  v9 = std::string::data(__s);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v9 = 32LL;
    __asan_report_store_n(retstr, 32LL);
  }
  std::regex_traits<char>::lookup_collatename<char const*>(retstr, M_traits, (const char *)v9, v8);
  if ( (unsigned __int8)std::string::empty(retstr) )
    std::__throw_regex_error(_S_error_collate, "Invalid collate element.");
  v10 = std::string::operator[](retstr, 0LL);
  v11 = (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT *)v10;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v10);
  v12 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(&this->_M_translator, *v11);
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v3 + 32);
  *(_BYTE *)(v3 + 32) = v12;
  std::vector<char>::push_back(&this->_M_char_set, (std::vector<char>::value_type *)(v3 + 32));
  if ( v16 == (char *)v3 )
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

// Line 457: range 000000000D4763E6-000000000D476754
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_equivalence_class(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_StringT *__s)
{
  std::vector<std::string>::value_type *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::regex_traits<char> *M_traits; // r14
  __int64 v6; // r15
  const char *v7; // r15
  __int64 v8; // rsi
  const std::regex_traits<char> *v9; // r14
  __int64 v10; // r15
  char *v11; // r15
  __int64 v12; // rsi
  char v13[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (std::vector<std::string>::value_type *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = (std::vector<std::string>::value_type *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"2 32 32 8 __st:459 96 32 9 <unknown>";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_equivalence_class;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v6 = std::string::data(__s);
  v7 = (const char *)(std::string::size(__s) + v6);
  v8 = std::string::data(__s);
  if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v2[1]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v8 = 32LL;
    __asan_report_store_n(&v2[1], 32LL);
  }
  std::regex_traits<char>::lookup_collatename<char const*>(v2 + 1, M_traits, (const char *)v8, v7);
  if ( (unsigned __int8)std::string::empty(&v2[1]) )
    std::__throw_regex_error(_S_error_collate, "Invalid equivalence class.");
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  v9 = this->_M_traits;
  v10 = std::string::data(&v2[1]);
  v11 = (char *)(std::string::size(&v2[1]) + v10);
  v12 = std::string::data(&v2[1]);
  if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v2[3]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3]._anon_0._M_allocated_capacity + 15) >> 3)
                                                     + 0x7FFF8000) )
  {
    v12 = 32LL;
    __asan_report_store_n(&v2[3], 32LL);
  }
  std::regex_traits<char>::transform_primary<char *>(v2 + 3, v9, (char *)v12, v11);
  std::string::operator=(&v2[1], &v2[3]);
  std::string::~string(&v2[3]);
  *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = -117901064;
  std::vector<std::string>::push_back(&this->_M_equiv_set, v2 + 1);
  std::string::~string(&v2[1]);
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 457: range 000000000D476C50-000000000D476FBE
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_equivalence_class(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_StringT *__s)
{
  std::vector<std::string>::value_type *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::regex_traits<char> *M_traits; // r14
  __int64 v6; // r15
  const char *v7; // r15
  __int64 v8; // rsi
  const std::regex_traits<char> *v9; // r14
  __int64 v10; // r15
  char *v11; // r15
  __int64 v12; // rsi
  char v13[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (std::vector<std::string>::value_type *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = (std::vector<std::string>::value_type *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"2 32 32 8 __st:459 96 32 9 <unknown>";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_equivalence_class;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v6 = std::string::data(__s);
  v7 = (const char *)(std::string::size(__s) + v6);
  v8 = std::string::data(__s);
  if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v2[1]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v8 = 32LL;
    __asan_report_store_n(&v2[1], 32LL);
  }
  std::regex_traits<char>::lookup_collatename<char const*>(v2 + 1, M_traits, (const char *)v8, v7);
  if ( (unsigned __int8)std::string::empty(&v2[1]) )
    std::__throw_regex_error(_S_error_collate, "Invalid equivalence class.");
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  v9 = this->_M_traits;
  v10 = std::string::data(&v2[1]);
  v11 = (char *)(std::string::size(&v2[1]) + v10);
  v12 = std::string::data(&v2[1]);
  if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v2[3]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3]._anon_0._M_allocated_capacity + 15) >> 3)
                                                     + 0x7FFF8000) )
  {
    v12 = 32LL;
    __asan_report_store_n(&v2[3], 32LL);
  }
  std::regex_traits<char>::transform_primary<char *>(v2 + 3, v9, (char *)v12, v11);
  std::string::operator=(&v2[1], &v2[3]);
  std::string::~string(&v2[3]);
  *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = -117901064;
  std::vector<std::string>::push_back(&this->_M_equiv_set, v2 + 1);
  std::string::~string(&v2[1]);
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 457: range 000000000D47766C-000000000D4779DA
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_equivalence_class(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_StringT *__s)
{
  std::vector<std::string>::value_type *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::regex_traits<char> *M_traits; // r14
  __int64 v6; // r15
  const char *v7; // r15
  __int64 v8; // rsi
  const std::regex_traits<char> *v9; // r14
  __int64 v10; // r15
  char *v11; // r15
  __int64 v12; // rsi
  char v13[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (std::vector<std::string>::value_type *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = (std::vector<std::string>::value_type *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"2 32 32 8 __st:459 96 32 9 <unknown>";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_equivalence_class;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v6 = std::string::data(__s);
  v7 = (const char *)(std::string::size(__s) + v6);
  v8 = std::string::data(__s);
  if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v2[1]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v8 = 32LL;
    __asan_report_store_n(&v2[1], 32LL);
  }
  std::regex_traits<char>::lookup_collatename<char const*>(v2 + 1, M_traits, (const char *)v8, v7);
  if ( (unsigned __int8)std::string::empty(&v2[1]) )
    std::__throw_regex_error(_S_error_collate, "Invalid equivalence class.");
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  v9 = this->_M_traits;
  v10 = std::string::data(&v2[1]);
  v11 = (char *)(std::string::size(&v2[1]) + v10);
  v12 = std::string::data(&v2[1]);
  if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v2[3]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3]._anon_0._M_allocated_capacity + 15) >> 3)
                                                     + 0x7FFF8000) )
  {
    v12 = 32LL;
    __asan_report_store_n(&v2[3], 32LL);
  }
  std::regex_traits<char>::transform_primary<char *>(v2 + 3, v9, (char *)v12, v11);
  std::string::operator=(&v2[1], &v2[3]);
  std::string::~string(&v2[3]);
  *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = -117901064;
  std::vector<std::string>::push_back(&this->_M_equiv_set, v2 + 1);
  std::string::~string(&v2[1]);
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 457: range 000000000D477EA4-000000000D478212
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_equivalence_class(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_StringT *__s)
{
  std::vector<std::string>::value_type *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::regex_traits<char> *M_traits; // r14
  __int64 v6; // r15
  const char *v7; // r15
  __int64 v8; // rsi
  const std::regex_traits<char> *v9; // r14
  __int64 v10; // r15
  char *v11; // r15
  __int64 v12; // rsi
  char v13[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (std::vector<std::string>::value_type *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = (std::vector<std::string>::value_type *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"2 32 32 8 __st:459 96 32 9 <unknown>";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_equivalence_class;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v6 = std::string::data(__s);
  v7 = (const char *)(std::string::size(__s) + v6);
  v8 = std::string::data(__s);
  if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v2[1]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v8 = 32LL;
    __asan_report_store_n(&v2[1], 32LL);
  }
  std::regex_traits<char>::lookup_collatename<char const*>(v2 + 1, M_traits, (const char *)v8, v7);
  if ( (unsigned __int8)std::string::empty(&v2[1]) )
    std::__throw_regex_error(_S_error_collate, "Invalid equivalence class.");
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  v9 = this->_M_traits;
  v10 = std::string::data(&v2[1]);
  v11 = (char *)(std::string::size(&v2[1]) + v10);
  v12 = std::string::data(&v2[1]);
  if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v2[3]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3]._anon_0._M_allocated_capacity + 15) >> 3)
                                                     + 0x7FFF8000) )
  {
    v12 = 32LL;
    __asan_report_store_n(&v2[3], 32LL);
  }
  std::regex_traits<char>::transform_primary<char *>(v2 + 3, v9, (char *)v12, v11);
  std::string::operator=(&v2[1], &v2[3]);
  std::string::~string(&v2[3]);
  *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = -117901064;
  std::vector<std::string>::push_back(&this->_M_equiv_set, v2 + 1);
  std::string::~string(&v2[1]);
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 472: range 000000000D4556D2-000000000D455969
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_character_class(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_StringT *__s,
        bool __neg)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::regex_traits<char> *M_traits; // r14
  __int64 v7; // r15
  const char *v8; // r15
  const char *v9; // rsi
  char v10; // al
  __int64 v11; // r8
  std::regex_traits<char>::_RegexMask *p_M_class_set; // rcx
  __int64 v13; // rdx
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 __mask:474 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_character_class;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v7 = std::string::data(__s);
  v8 = (const char *)(std::string::size(__s) + v7);
  v9 = (const char *)std::string::data(__s);
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  *(std::regex_traits<char>::char_class_type *)(v3 + 48) = std::regex_traits<char>::lookup_classname<char const*>(
                                                             M_traits,
                                                             v9,
                                                             v8,
                                                             0);
  std::regex_traits<char>::_RegexMask::_RegexMask((std::regex_traits<char>::_RegexMask *const)(v3 + 64), 0, 0);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 64);
  v10 = std::regex_traits<char>::_RegexMask::operator==(
          (const std::regex_traits<char>::_RegexMask *const)(v3 + 48),
          *(_DWORD *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
    std::__throw_regex_error(_S_error_collate, "Invalid character class.");
  if ( !__neg )
  {
    p_M_class_set = &this->_M_class_set;
    v13 = v3 + 48;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    std::regex_traits<char>::_RegexMask::operator|=(
      p_M_class_set,
      *(_DWORD *)(v3 + 48),
      v13,
      (__int64)p_M_class_set,
      v11);
  }
  else
  {
    std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::push_back(
      &this->_M_neg_class_set,
      (const std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::value_type *)(v3 + 48));
  }
  if ( v15 == (char *)v3 )
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

// Line 472: range 000000000D4561C6-000000000D45645D
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_character_class(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_StringT *__s,
        bool __neg)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::regex_traits<char> *M_traits; // r14
  __int64 v7; // r15
  const char *v8; // r15
  const char *v9; // rsi
  char v10; // al
  __int64 v11; // r8
  std::regex_traits<char>::_RegexMask *p_M_class_set; // rcx
  __int64 v13; // rdx
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 __mask:474 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_character_class;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v7 = std::string::data(__s);
  v8 = (const char *)(std::string::size(__s) + v7);
  v9 = (const char *)std::string::data(__s);
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  *(std::regex_traits<char>::char_class_type *)(v3 + 48) = std::regex_traits<char>::lookup_classname<char const*>(
                                                             M_traits,
                                                             v9,
                                                             v8,
                                                             0);
  std::regex_traits<char>::_RegexMask::_RegexMask((std::regex_traits<char>::_RegexMask *const)(v3 + 64), 0, 0);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 64);
  v10 = std::regex_traits<char>::_RegexMask::operator==(
          (const std::regex_traits<char>::_RegexMask *const)(v3 + 48),
          *(_DWORD *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
    std::__throw_regex_error(_S_error_collate, "Invalid character class.");
  if ( !__neg )
  {
    p_M_class_set = &this->_M_class_set;
    v13 = v3 + 48;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    std::regex_traits<char>::_RegexMask::operator|=(
      p_M_class_set,
      *(_DWORD *)(v3 + 48),
      v13,
      (__int64)p_M_class_set,
      v11);
  }
  else
  {
    std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::push_back(
      &this->_M_neg_class_set,
      (const std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::value_type *)(v3 + 48));
  }
  if ( v15 == (char *)v3 )
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

// Line 472: range 000000000D456A12-000000000D456CA9
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_character_class(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_StringT *__s,
        bool __neg)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::regex_traits<char> *M_traits; // r14
  __int64 v7; // r15
  const char *v8; // r15
  const char *v9; // rsi
  char v10; // al
  __int64 v11; // r8
  std::regex_traits<char>::_RegexMask *p_M_class_set; // rcx
  __int64 v13; // rdx
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 __mask:474 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_character_class;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v7 = std::string::data(__s);
  v8 = (const char *)(std::string::size(__s) + v7);
  v9 = (const char *)std::string::data(__s);
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  *(std::regex_traits<char>::char_class_type *)(v3 + 48) = std::regex_traits<char>::lookup_classname<char const*>(
                                                             M_traits,
                                                             v9,
                                                             v8,
                                                             1);
  std::regex_traits<char>::_RegexMask::_RegexMask((std::regex_traits<char>::_RegexMask *const)(v3 + 64), 0, 0);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 64);
  v10 = std::regex_traits<char>::_RegexMask::operator==(
          (const std::regex_traits<char>::_RegexMask *const)(v3 + 48),
          *(_DWORD *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
    std::__throw_regex_error(_S_error_collate, "Invalid character class.");
  if ( !__neg )
  {
    p_M_class_set = &this->_M_class_set;
    v13 = v3 + 48;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    std::regex_traits<char>::_RegexMask::operator|=(
      p_M_class_set,
      *(_DWORD *)(v3 + 48),
      v13,
      (__int64)p_M_class_set,
      v11);
  }
  else
  {
    std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::push_back(
      &this->_M_neg_class_set,
      (const std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::value_type *)(v3 + 48));
  }
  if ( v15 == (char *)v3 )
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

// Line 472: range 000000000D45715C-000000000D4573F3
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_character_class(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_StringT *__s,
        bool __neg)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::regex_traits<char> *M_traits; // r14
  __int64 v7; // r15
  const char *v8; // r15
  const char *v9; // rsi
  char v10; // al
  __int64 v11; // r8
  std::regex_traits<char>::_RegexMask *p_M_class_set; // rcx
  __int64 v13; // rdx
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 __mask:474 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_character_class;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v7 = std::string::data(__s);
  v8 = (const char *)(std::string::size(__s) + v7);
  v9 = (const char *)std::string::data(__s);
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  *(std::regex_traits<char>::char_class_type *)(v3 + 48) = std::regex_traits<char>::lookup_classname<char const*>(
                                                             M_traits,
                                                             v9,
                                                             v8,
                                                             1);
  std::regex_traits<char>::_RegexMask::_RegexMask((std::regex_traits<char>::_RegexMask *const)(v3 + 64), 0, 0);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 64);
  v10 = std::regex_traits<char>::_RegexMask::operator==(
          (const std::regex_traits<char>::_RegexMask *const)(v3 + 48),
          *(_DWORD *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
    std::__throw_regex_error(_S_error_collate, "Invalid character class.");
  if ( !__neg )
  {
    p_M_class_set = &this->_M_class_set;
    v13 = v3 + 48;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    std::regex_traits<char>::_RegexMask::operator|=(
      p_M_class_set,
      *(_DWORD *)(v3 + 48),
      v13,
      (__int64)p_M_class_set,
      v11);
  }
  else
  {
    std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::push_back(
      &this->_M_neg_class_set,
      (const std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::value_type *)(v3 + 48));
  }
  if ( v15 == (char *)v3 )
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

// Line 488: range 000000000D476756-000000000D476971
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_make_range(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT __l,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT __r)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_StrTransT v6; // dl
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_StrTransT v7; // dl
  char v9[144]; // [rsp+10h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 9 <unknown> 48 1 9 <unknown> 64 2 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_make_range;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -202116350;
  if ( __l > __r )
    std::__throw_regex_error(_S_error_range, "Invalid range in bracket expression.");
  v6 = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_transform(&this->_M_translator, __r);
  if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v3 + 48);
  *(_BYTE *)(v3 + 48) = v6;
  v7 = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_transform(&this->_M_translator, __l);
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v3 + 32);
  *(_BYTE *)(v3 + 32) = v7;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v3 + 64);
  *(std::pair<char,char> *)(v3 + 64) = std::make_pair<char,char>((char *)(v3 + 32), (char *)(v3 + 48));
  std::vector<std::pair<char,char>>::push_back(
    &this->_M_range_set,
    (std::vector<std::pair<char,char>>::value_type *)(v3 + 64));
  if ( v9 == (char *)v3 )
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

// Line 488: range 000000000D476FC0-000000000D4773BE
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_make_range(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT __l,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT __r)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_TransT *p_M_translator; // rdi
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT v7; // si
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_TransT *v8; // rdi
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT v9; // si
  _DWORD *v10; // rax
  char v14[304]; // [rsp+10h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 32 9 <unknown> 96 32 9 <unknown> 160 64 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_make_range;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862727] = -202116109;
  if ( __l > __r )
    std::__throw_regex_error(_S_error_range, "Invalid range in bracket expression.");
  p_M_translator = &this->_M_translator;
  v7 = __r;
  if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
  {
    v7 = 32;
    p_M_translator = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_TransT *)(v3 + 96);
    __asan_report_store_n(v3 + 96, 32LL);
  }
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_transform(
    (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_StrTransT *)(v3 + 96),
    p_M_translator,
    v7);
  v8 = &this->_M_translator;
  v9 = __l;
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
  {
    v9 = 32;
    v8 = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_TransT *)(v3 + 32);
    __asan_report_store_n(v3 + 32, 32LL);
  }
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_transform(
    (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_StrTransT *)(v3 + 32),
    v8,
    v9);
  if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 160, 64LL);
  }
  std::make_pair<std::string,std::string>(
    (std::pair<std::string,std::string > *)(v3 + 160),
    (std::string *)(v3 + 32),
    (std::string *)(v3 + 96));
  std::vector<std::pair<std::string,std::string>>::push_back(
    &this->_M_range_set,
    (std::vector<std::pair<std::string,std::string >>::value_type *)(v3 + 160));
  std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v3 + 160));
  v10 = (_DWORD *)(((v3 + 160) >> 3) + 2147450880);
  *v10 = -117901064;
  v10[1] = -117901064;
  std::string::~string((void *)(v3 + 32));
  *(_DWORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 96));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 488: range 000000000D4779DC-000000000D477BF7
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_make_range(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT __l,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT __r)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_StrTransT v6; // dl
  std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_StrTransT v7; // dl
  char v9[144]; // [rsp+10h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 9 <unknown> 48 1 9 <unknown> 64 2 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_make_range;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -202116350;
  if ( __l > __r )
    std::__throw_regex_error(_S_error_range, "Invalid range in bracket expression.");
  v6 = std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_M_transform(&this->_M_translator, __r);
  if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v3 + 48);
  *(_BYTE *)(v3 + 48) = v6;
  v7 = std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_M_transform(&this->_M_translator, __l);
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v3 + 32);
  *(_BYTE *)(v3 + 32) = v7;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v3 + 64);
  *(std::pair<char,char> *)(v3 + 64) = std::make_pair<char,char>((char *)(v3 + 32), (char *)(v3 + 48));
  std::vector<std::pair<char,char>>::push_back(
    &this->_M_range_set,
    (std::vector<std::pair<char,char>>::value_type *)(v3 + 64));
  if ( v9 == (char *)v3 )
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

// Line 488: range 000000000D478214-000000000D478612
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_make_range(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT __l,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT __r)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_TransT *p_M_translator; // rdi
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT v7; // si
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_TransT *v8; // rdi
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT v9; // si
  _DWORD *v10; // rax
  char v14[304]; // [rsp+10h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 32 9 <unknown> 96 32 9 <unknown> 160 64 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_make_range;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862727] = -202116109;
  if ( __l > __r )
    std::__throw_regex_error(_S_error_range, "Invalid range in bracket expression.");
  p_M_translator = &this->_M_translator;
  v7 = __r;
  if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
  {
    v7 = 32;
    p_M_translator = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_TransT *)(v3 + 96);
    __asan_report_store_n(v3 + 96, 32LL);
  }
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_transform(
    (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_StrTransT *)(v3 + 96),
    p_M_translator,
    v7);
  v8 = &this->_M_translator;
  v9 = __l;
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
  {
    v9 = 32;
    v8 = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_TransT *)(v3 + 32);
    __asan_report_store_n(v3 + 32, 32LL);
  }
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_transform(
    (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_StrTransT *)(v3 + 32),
    v8,
    v9);
  if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 160, 64LL);
  }
  std::make_pair<std::string,std::string>(
    (std::pair<std::string,std::string > *)(v3 + 160),
    (std::string *)(v3 + 32),
    (std::string *)(v3 + 96));
  std::vector<std::pair<std::string,std::string>>::push_back(
    &this->_M_range_set,
    (std::vector<std::pair<std::string,std::string >>::value_type *)(v3 + 160));
  std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v3 + 160));
  v10 = (_DWORD *)(((v3 + 160) >> 3) + 2147450880);
  *v10 = -117901064;
  v10[1] = -117901064;
  std::string::~string((void *)(v3 + 32));
  *(_DWORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 96));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 499: range 000000000D45596A-000000000D455C2B
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_ready(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  char *M_current; // r14
  std::vector<char>::iterator v5; // rax
  char *v6; // r14
  char *v7; // rcx
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *v8; // rax
  std::vector<char>::const_iterator v9; // rsi
  char v10[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 1 9 <unknown> 64 8 9 __end:502 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_ready;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -202116352;
  M_current = std::vector<char>::end(&this->_M_char_set)._M_current;
  v5._M_current = std::vector<char>::begin(&this->_M_char_set)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>>(
    v5,
    (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)M_current);
  v6 = std::vector<char>::end(&this->_M_char_set)._M_current;
  v7 = std::vector<char>::begin(&this->_M_char_set)._M_current;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(__gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 64) = std::unique<__gnu_cxx::__normal_iterator<char *,std::vector<char>>>(
                                                                           (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)v7,
                                                                           (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)v6);
  v8 = this;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<char>::iterator *)(v1 + 96) = std::vector<char>::end(&v8->_M_char_set);
  __gnu_cxx::__normal_iterator<char const*,std::vector<char>>::__normal_iterator<char *>(
    (__gnu_cxx::__normal_iterator<char const*,std::vector<char> > *const)(v1 + 160),
    (const __gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 96));
  __gnu_cxx::__normal_iterator<char const*,std::vector<char>>::__normal_iterator<char *>(
    (__gnu_cxx::__normal_iterator<char const*,std::vector<char> > *const)(v1 + 128),
    (const __gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 64));
  if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 128);
  if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 160);
  v9._M_current = *(const char **)(v1 + 128);
  std::vector<char>::erase(&this->_M_char_set, v9, *(std::vector<char>::const_iterator *)(v1 + 160));
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_make_cache(
    this,
    (std::true_type)v9._M_current);
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 499: range 000000000D45645E-000000000D45671F
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_ready(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  char *M_current; // r14
  std::vector<char>::iterator v5; // rax
  char *v6; // r14
  char *v7; // rcx
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *v8; // rax
  std::vector<char>::const_iterator v9; // rsi
  char v10[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 1 9 <unknown> 64 8 9 __end:502 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_ready;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -202116352;
  M_current = std::vector<char>::end(&this->_M_char_set)._M_current;
  v5._M_current = std::vector<char>::begin(&this->_M_char_set)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>>(
    v5,
    (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)M_current);
  v6 = std::vector<char>::end(&this->_M_char_set)._M_current;
  v7 = std::vector<char>::begin(&this->_M_char_set)._M_current;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(__gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 64) = std::unique<__gnu_cxx::__normal_iterator<char *,std::vector<char>>>(
                                                                           (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)v7,
                                                                           (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)v6);
  v8 = this;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<char>::iterator *)(v1 + 96) = std::vector<char>::end(&v8->_M_char_set);
  __gnu_cxx::__normal_iterator<char const*,std::vector<char>>::__normal_iterator<char *>(
    (__gnu_cxx::__normal_iterator<char const*,std::vector<char> > *const)(v1 + 160),
    (const __gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 96));
  __gnu_cxx::__normal_iterator<char const*,std::vector<char>>::__normal_iterator<char *>(
    (__gnu_cxx::__normal_iterator<char const*,std::vector<char> > *const)(v1 + 128),
    (const __gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 64));
  if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 128);
  if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 160);
  v9._M_current = *(const char **)(v1 + 128);
  std::vector<char>::erase(&this->_M_char_set, v9, *(std::vector<char>::const_iterator *)(v1 + 160));
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_make_cache(this, (std::true_type)v9._M_current);
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 499: range 000000000D456CAA-000000000D456F6B
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_ready(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  char *M_current; // r14
  std::vector<char>::iterator v5; // rax
  char *v6; // r14
  char *v7; // rcx
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *v8; // rax
  std::vector<char>::const_iterator v9; // rsi
  char v10[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 1 9 <unknown> 64 8 9 __end:502 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_ready;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -202116352;
  M_current = std::vector<char>::end(&this->_M_char_set)._M_current;
  v5._M_current = std::vector<char>::begin(&this->_M_char_set)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>>(
    v5,
    (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)M_current);
  v6 = std::vector<char>::end(&this->_M_char_set)._M_current;
  v7 = std::vector<char>::begin(&this->_M_char_set)._M_current;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(__gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 64) = std::unique<__gnu_cxx::__normal_iterator<char *,std::vector<char>>>(
                                                                           (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)v7,
                                                                           (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)v6);
  v8 = this;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<char>::iterator *)(v1 + 96) = std::vector<char>::end(&v8->_M_char_set);
  __gnu_cxx::__normal_iterator<char const*,std::vector<char>>::__normal_iterator<char *>(
    (__gnu_cxx::__normal_iterator<char const*,std::vector<char> > *const)(v1 + 160),
    (const __gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 96));
  __gnu_cxx::__normal_iterator<char const*,std::vector<char>>::__normal_iterator<char *>(
    (__gnu_cxx::__normal_iterator<char const*,std::vector<char> > *const)(v1 + 128),
    (const __gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 64));
  if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 128);
  if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 160);
  v9._M_current = *(const char **)(v1 + 128);
  std::vector<char>::erase(&this->_M_char_set, v9, *(std::vector<char>::const_iterator *)(v1 + 160));
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_make_cache(this, (std::true_type)v9._M_current);
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 499: range 000000000D4573F4-000000000D4576B5
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_ready(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  char *M_current; // r14
  std::vector<char>::iterator v5; // rax
  char *v6; // r14
  char *v7; // rcx
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *v8; // rax
  std::vector<char>::const_iterator v9; // rsi
  char v10[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 1 9 <unknown> 64 8 9 __end:502 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_ready;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -202116352;
  M_current = std::vector<char>::end(&this->_M_char_set)._M_current;
  v5._M_current = std::vector<char>::begin(&this->_M_char_set)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<char *,std::vector<char>>>(
    v5,
    (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)M_current);
  v6 = std::vector<char>::end(&this->_M_char_set)._M_current;
  v7 = std::vector<char>::begin(&this->_M_char_set)._M_current;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(__gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 64) = std::unique<__gnu_cxx::__normal_iterator<char *,std::vector<char>>>(
                                                                           (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)v7,
                                                                           (__gnu_cxx::__normal_iterator<char*,std::vector<char> >)v6);
  v8 = this;
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<char>::iterator *)(v1 + 96) = std::vector<char>::end(&v8->_M_char_set);
  __gnu_cxx::__normal_iterator<char const*,std::vector<char>>::__normal_iterator<char *>(
    (__gnu_cxx::__normal_iterator<char const*,std::vector<char> > *const)(v1 + 160),
    (const __gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 96));
  __gnu_cxx::__normal_iterator<char const*,std::vector<char>>::__normal_iterator<char *>(
    (__gnu_cxx::__normal_iterator<char const*,std::vector<char> > *const)(v1 + 128),
    (const __gnu_cxx::__normal_iterator<char*,std::vector<char> > *)(v1 + 64));
  if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 128);
  if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 160);
  v9._M_current = *(const char **)(v1 + 128);
  std::vector<char>::erase(&this->_M_char_set, v9, *(std::vector<char>::const_iterator *)(v1 + 160));
  *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_make_cache(this, (std::true_type)v9._M_current);
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 526: range 000000000D47EB04-000000000D47EB30
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_apply(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT __ch,
        std::true_type a3)
{
  return std::bitset<256ul>::operator[](&this->_M_cache, (unsigned __int8)__ch);
};

// Line 526: range 000000000D47F8BC-000000000D47F8EB
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_apply(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT __ch,
        std::true_type a3)
{
  return std::bitset<256ul>::operator[](&this->_M_cache, (unsigned __int8)__ch);
};

// Line 526: range 000000000D47FB8A-000000000D47FBB9
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_apply(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT __ch,
        std::true_type a3)
{
  return std::bitset<256ul>::operator[](&this->_M_cache, (unsigned __int8)__ch);
};

// Line 526: range 000000000D47FF82-000000000D47FFB1
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_apply(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT __ch,
        std::true_type a3)
{
  return std::bitset<256ul>::operator[](&this->_M_cache, (unsigned __int8)__ch);
};

// Line 530: range 000000000D464192-000000000D46437C
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_make_cache(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        std::true_type a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CacheT *p_M_cache; // rcx
  unsigned int __i; // [rsp+1Ch] [rbp-94h]
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_make_cache;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  for ( __i = 0; __i < std::bitset<256ul>::size(&this->_M_cache); ++__i )
  {
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    v5 = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_apply(this, __i, (std::false_type)__i);
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    p_M_cache = &this->_M_cache;
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 64);
    std::bitset<256ul>::operator[]((std::bitset<256> *const)(v2 + 64), (std::size_t)p_M_cache);
    std::bitset<256ul>::reference::operator=((std::bitset<256>::reference *const)(v2 + 64), v5);
    std::bitset<256ul>::reference::~reference((std::bitset<256>::reference *const)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 530: range 000000000D464BB0-000000000D464D9D
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_make_cache(
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        std::true_type a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CacheT *p_M_cache; // rcx
  unsigned int __i; // [rsp+1Ch] [rbp-94h]
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_make_cache;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  for ( __i = 0; __i < std::bitset<256ul>::size(&this->_M_cache); ++__i )
  {
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    v5 = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_apply(this, __i, (std::false_type)__i);
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    p_M_cache = &this->_M_cache;
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 64);
    std::bitset<256ul>::operator[]((std::bitset<256> *const)(v2 + 64), (std::size_t)p_M_cache);
    std::bitset<256ul>::reference::operator=((std::bitset<256>::reference *const)(v2 + 64), v5);
    std::bitset<256ul>::reference::~reference((std::bitset<256>::reference *const)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 530: range 000000000D465232-000000000D46541F
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_make_cache(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        std::true_type a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CacheT *p_M_cache; // rcx
  unsigned int __i; // [rsp+1Ch] [rbp-94h]
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_make_cache;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  for ( __i = 0; __i < std::bitset<256ul>::size(&this->_M_cache); ++__i )
  {
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    v5 = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_apply(this, __i, (std::false_type)__i);
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    p_M_cache = &this->_M_cache;
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 64);
    std::bitset<256ul>::operator[]((std::bitset<256> *const)(v2 + 64), (std::size_t)p_M_cache);
    std::bitset<256ul>::reference::operator=((std::bitset<256>::reference *const)(v2 + 64), v5);
    std::bitset<256ul>::reference::~reference((std::bitset<256>::reference *const)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 530: range 000000000D4656FE-000000000D4658EB
void __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_make_cache(
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        std::true_type a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CacheT *p_M_cache; // rcx
  unsigned int __i; // [rsp+1Ch] [rbp-94h]
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_make_cache;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  for ( __i = 0; __i < std::bitset<256ul>::size(&this->_M_cache); ++__i )
  {
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    v5 = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_apply(this, __i, (std::false_type)__i);
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    p_M_cache = &this->_M_cache;
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 64);
    std::bitset<256ul>::operator[]((std::bitset<256> *const)(v2 + 64), (std::size_t)p_M_cache);
    std::bitset<256ul>::reference::operator=((std::bitset<256>::reference *const)(v2 + 64), v5);
    std::bitset<256ul>::reference::~reference((std::bitset<256>::reference *const)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};
