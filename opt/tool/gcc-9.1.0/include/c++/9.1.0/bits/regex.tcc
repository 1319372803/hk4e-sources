// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex.tcc

// Line 48: range 000000000D0C3AE4-000000000D0C4758
__int64 __fastcall std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>,(std::__detail::_RegexExecutorPolicy)0,false>(
        __gnu_cxx::__normal_iterator<char const*,std::string > __s,
        __gnu_cxx::__normal_iterator<char const*,std::string > __e,
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *__m,
        const std::basic_regex<char,std::regex_traits<char> > *__re,
        std::regex_constants::match_flag_type __flags)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 result; // rax
  std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int v10; // eax
  std::basic_regex<char,std::regex_traits<char> >::flag_type v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 p_second; // rax
  unsigned __int64 v17; // rax
  bool v18; // dl
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference v19; // rax
  bool v20; // dl
  unsigned __int64 v21; // rax
  bool __ret; // [rsp+37h] [rbp-309h]
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__it_1; // [rsp+50h] [rbp-2F0h]
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__pre; // [rsp+60h] [rbp-2E0h]
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__suf; // [rsp+68h] [rbp-2D8h]
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__it_0; // [rsp+70h] [rbp-2D0h]
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__it; // [rsp+78h] [rbp-2C8h]
  char v31[704]; // [rsp+80h] [rbp-2C0h] BYREF

  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(672LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 48 8 14 __for_begin:60 80 8 12 __for_end:60 112 8 14 __for_begin:86 144 8 12 __for_end:86 176"
                        " 8 15 __for_begin:113 208 8 13 __for_end:113 240 8 6 __s:48 272 8 6 __e:49 304 120 13 __executor"
                        ":78 464 144 13 __executor:69";
  *(_QWORD *)(v5 + 16) = std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>,(std::__detail::_RegexExecutorPolicy)0,false>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862724] = -234881024;
  v7[536862725] = 62194;
  v7[536862725] = -234881024;
  v7[536862726] = 62194;
  v7[536862726] = -234881024;
  v7[536862727] = 62194;
  v7[536862727] = -234881024;
  v7[536862728] = 62194;
  v7[536862728] = -234881024;
  v7[536862729] = 62194;
  v7[536862733] = -218959360;
  v7[536862734] = 62194;
  v7[536862739] = -202116109;
  v7[536862740] = -202116109;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 240) = __s;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 272) = __e;
  if ( std::operator==<std::__detail::_NFA<std::regex_traits<char>> const>(&__re->_M_automaton, 0LL) )
  {
    LODWORD(result) = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__m->_M_begin >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    __m->_M_begin._M_current = *(const char **)(v5 + 240);
    v9 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>> const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__re->_M_automaton);
    v10 = std::__detail::_NFA_base::_M_sub_count(v9);
    std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_resize(__m, v10);
    if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 48) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::begin(__m);
    if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 80) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end(__m);
    while ( __gnu_cxx::operator!=<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>(
              (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 48),
              (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 80)) )
    {
      __it = __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator*((const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 48));
      if ( *(char *)(((unsigned __int64)&__it->matched >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&__it->matched);
      __it->matched = 0;
      __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator++((__gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 48));
    }
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) = -8;
    v11 = std::basic_regex<char,std::regex_traits<char>>::flags(__re);
    if ( std::regex_constants::operator&(v11, (std::regex_constants::syntax_option_type)1024) )
    {
      v12 = ((v5 + 464) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      *(_DWORD *)(v12 + 12) = 0;
      *(_WORD *)(v12 + 16) = 0;
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_Executor(
        (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const)(v5 + 464),
        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 240),
        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 272),
        __m,
        __re,
        __flags);
      __ret = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_search((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const)(v5 + 464));
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::~_Executor((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const)(v5 + 464));
      v13 = ((v5 + 464) >> 3) + 2147450880;
      *(_DWORD *)v13 = -117901064;
      *(_DWORD *)(v13 + 4) = -117901064;
      *(_DWORD *)(v13 + 8) = -117901064;
      *(_DWORD *)(v13 + 12) = -117901064;
      *(_WORD *)(v13 + 16) = -1800;
    }
    else
    {
      v14 = ((v5 + 304) >> 3) + 2147450880;
      *(_DWORD *)v14 = 0;
      *(_DWORD *)(v14 + 4) = 0;
      *(_DWORD *)(v14 + 8) = 0;
      *(_WORD *)(v14 + 12) = 0;
      *(_BYTE *)(v14 + 14) = 0;
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_Executor(
        (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const)(v5 + 304),
        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 240),
        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 272),
        __m,
        __re,
        __flags);
      __ret = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_search((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const)(v5 + 304));
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::~_Executor((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const)(v5 + 304));
      v15 = ((v5 + 304) >> 3) + 2147450880;
      *(_DWORD *)v15 = -117901064;
      *(_DWORD *)(v15 + 4) = -117901064;
      *(_DWORD *)(v15 + 8) = -117901064;
      *(_WORD *)(v15 + 12) = -1800;
      *(_BYTE *)(v15 + 14) = -8;
    }
    if ( __ret )
    {
      *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 112) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::begin(__m);
      *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 144) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end(__m);
      while ( __gnu_cxx::operator!=<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>(
                (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 112),
                (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 144)) )
      {
        __it_0 = __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator*((const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 112));
        if ( *(char *)(((unsigned __int64)&__it_0->matched >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&__it_0->matched);
        if ( !__it_0->matched )
        {
          if ( *(_BYTE *)(((unsigned __int64)&__it_0->second >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          __it_0->second._M_current = *(const char **)(v5 + 272);
          p_second = (unsigned __int64)&__it_0->second;
          if ( *(_BYTE *)(((unsigned __int64)__it_0 >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          if ( *(_BYTE *)((p_second >> 3) + 0x7FFF8000) )
            p_second = __asan_report_load8(p_second);
          __it_0->first._M_current = *(const char **)p_second;
        }
        __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator++((__gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 112));
      }
      *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = -8;
      __pre = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_prefix(__m);
      __suf = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_suffix(__m);
      if ( *(_BYTE *)(((unsigned __int64)__pre >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      __pre->first._M_current = *(const char **)(v5 + 240);
      v17 = (unsigned __int64)std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
                                __m,
                                0LL);
      if ( *(_BYTE *)(((unsigned __int64)&__pre->second >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8(v17);
      __pre->second._M_current = *(const char **)v17;
      v18 = __gnu_cxx::operator!=<char const*,std::string>(&__pre->first, &__pre->second);
      if ( *(char *)(((unsigned __int64)&__pre->matched >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&__pre->matched);
      __pre->matched = v18;
      v19 = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](__m, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)__suf >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      if ( *(_BYTE *)(((unsigned __int64)&v19->second >> 3) + 0x7FFF8000) )
        v19 = (std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference)__asan_report_load8(&v19->second);
      __suf->first._M_current = v19->second._M_current;
      if ( *(_BYTE *)(((unsigned __int64)&__suf->second >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      __suf->second._M_current = *(const char **)(v5 + 272);
      v20 = __gnu_cxx::operator!=<char const*,std::string>(&__suf->first, &__suf->second);
      if ( *(char *)(((unsigned __int64)&__suf->matched >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&__suf->matched);
      __suf->matched = v20;
    }
    else
    {
      std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_resize(__m, 0);
      *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 176) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::begin(__m);
      *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 208) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end(__m);
      while ( __gnu_cxx::operator!=<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>(
                (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 176),
                (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 208)) )
      {
        __it_1 = __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator*((const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 176));
        if ( *(char *)(((unsigned __int64)&__it_1->matched >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&__it_1->matched);
        __it_1->matched = 0;
        if ( *(_BYTE *)(((unsigned __int64)&__it_1->second >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        __it_1->second._M_current = *(const char **)(v5 + 272);
        v21 = (unsigned __int64)&__it_1->second;
        if ( *(_BYTE *)(((unsigned __int64)__it_1 >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(v21);
        __it_1->first._M_current = *(const char **)v21;
        __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator++((__gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 176));
      }
    }
    LODWORD(result) = __ret;
  }
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8050) = -168430091;
  }
  return (unsigned int)result;
};

// Line 52: range 000000000D0A9DA1-000000000D0AA975
__int64 __fastcall std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>,(std::__detail::_RegexExecutorPolicy)0,true>(
        __gnu_cxx::__normal_iterator<char const*,std::string > __s,
        __gnu_cxx::__normal_iterator<char const*,std::string > __e,
        std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string >> *__m,
        const std::basic_regex<char,std::regex_traits<char> > *__re,
        std::regex_constants::match_flag_type __flags)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 result; // rax
  std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int v10; // eax
  std::basic_regex<char,std::regex_traits<char> >::flag_type v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 p_second; // rax
  unsigned __int64 v17; // rax
  bool __ret; // [rsp+37h] [rbp-309h]
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__it_1; // [rsp+50h] [rbp-2F0h]
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__pre; // [rsp+60h] [rbp-2E0h]
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__suf; // [rsp+68h] [rbp-2D8h]
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__it_0; // [rsp+70h] [rbp-2D0h]
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *__it; // [rsp+78h] [rbp-2C8h]
  char v27[704]; // [rsp+80h] [rbp-2C0h] BYREF

  v5 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(672LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 48 8 14 __for_begin:60 80 8 12 __for_end:60 112 8 14 __for_begin:86 144 8 12 __for_end:86 176"
                        " 8 15 __for_begin:113 208 8 13 __for_end:113 240 8 6 __s:48 272 8 6 __e:49 304 120 13 __executor"
                        ":78 464 144 13 __executor:69";
  *(_QWORD *)(v5 + 16) = std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>,(std::__detail::_RegexExecutorPolicy)0,true>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862724] = -234881024;
  v7[536862725] = 62194;
  v7[536862725] = -234881024;
  v7[536862726] = 62194;
  v7[536862726] = -234881024;
  v7[536862727] = 62194;
  v7[536862727] = -234881024;
  v7[536862728] = 62194;
  v7[536862728] = -234881024;
  v7[536862729] = 62194;
  v7[536862733] = -218959360;
  v7[536862734] = 62194;
  v7[536862739] = -202116109;
  v7[536862740] = -202116109;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 240) = __s;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 272) = __e;
  if ( std::operator==<std::__detail::_NFA<std::regex_traits<char>> const>(&__re->_M_automaton, 0LL) )
  {
    LODWORD(result) = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__m->_M_begin >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    __m->_M_begin._M_current = *(const char **)(v5 + 240);
    v9 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>> const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__re->_M_automaton);
    v10 = std::__detail::_NFA_base::_M_sub_count(v9);
    std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_resize(__m, v10);
    if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 48) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::begin(__m);
    if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 80) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end(__m);
    while ( __gnu_cxx::operator!=<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>(
              (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 48),
              (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 80)) )
    {
      __it = __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator*((const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 48));
      if ( *(char *)(((unsigned __int64)&__it->matched >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&__it->matched);
      __it->matched = 0;
      __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator++((__gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 48));
    }
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) = -8;
    v11 = std::basic_regex<char,std::regex_traits<char>>::flags(__re);
    if ( std::regex_constants::operator&(v11, (std::regex_constants::syntax_option_type)1024) )
    {
      v12 = ((v5 + 464) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      *(_DWORD *)(v12 + 12) = 0;
      *(_WORD *)(v12 + 16) = 0;
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_Executor(
        (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const)(v5 + 464),
        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 240),
        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 272),
        __m,
        __re,
        __flags);
      __ret = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_match((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const)(v5 + 464));
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::~_Executor((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const)(v5 + 464));
      v13 = ((v5 + 464) >> 3) + 2147450880;
      *(_DWORD *)v13 = -117901064;
      *(_DWORD *)(v13 + 4) = -117901064;
      *(_DWORD *)(v13 + 8) = -117901064;
      *(_DWORD *)(v13 + 12) = -117901064;
      *(_WORD *)(v13 + 16) = -1800;
    }
    else
    {
      v14 = ((v5 + 304) >> 3) + 2147450880;
      *(_DWORD *)v14 = 0;
      *(_DWORD *)(v14 + 4) = 0;
      *(_DWORD *)(v14 + 8) = 0;
      *(_WORD *)(v14 + 12) = 0;
      *(_BYTE *)(v14 + 14) = 0;
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_Executor(
        (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const)(v5 + 304),
        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 240),
        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 272),
        __m,
        __re,
        __flags);
      __ret = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_match((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const)(v5 + 304));
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::~_Executor((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const)(v5 + 304));
      v15 = ((v5 + 304) >> 3) + 2147450880;
      *(_DWORD *)v15 = -117901064;
      *(_DWORD *)(v15 + 4) = -117901064;
      *(_DWORD *)(v15 + 8) = -117901064;
      *(_WORD *)(v15 + 12) = -1800;
      *(_BYTE *)(v15 + 14) = -8;
    }
    if ( __ret )
    {
      *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 112) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::begin(__m);
      *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 144) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end(__m);
      while ( __gnu_cxx::operator!=<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>(
                (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 112),
                (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 144)) )
      {
        __it_0 = __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator*((const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 112));
        if ( *(char *)(((unsigned __int64)&__it_0->matched >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&__it_0->matched);
        if ( !__it_0->matched )
        {
          if ( *(_BYTE *)(((unsigned __int64)&__it_0->second >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          __it_0->second._M_current = *(const char **)(v5 + 272);
          p_second = (unsigned __int64)&__it_0->second;
          if ( *(_BYTE *)(((unsigned __int64)__it_0 >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          if ( *(_BYTE *)((p_second >> 3) + 0x7FFF8000) )
            p_second = __asan_report_load8(p_second);
          __it_0->first._M_current = *(const char **)p_second;
        }
        __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator++((__gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 112));
      }
      *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = -8;
      __pre = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_prefix(__m);
      __suf = std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_suffix(__m);
      if ( *(char *)(((unsigned __int64)&__pre->matched >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&__pre->matched);
      __pre->matched = 0;
      if ( *(_BYTE *)(((unsigned __int64)__pre >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      __pre->first._M_current = *(const char **)(v5 + 240);
      if ( *(_BYTE *)(((unsigned __int64)&__pre->second >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      __pre->second._M_current = *(const char **)(v5 + 240);
      if ( *(char *)(((unsigned __int64)&__suf->matched >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&__suf->matched);
      __suf->matched = 0;
      if ( *(_BYTE *)(((unsigned __int64)__suf >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      __suf->first._M_current = *(const char **)(v5 + 272);
      if ( *(_BYTE *)(((unsigned __int64)&__suf->second >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      __suf->second._M_current = *(const char **)(v5 + 272);
    }
    else
    {
      std::match_results<__gnu_cxx::__normal_iterator<char const*,std::string>>::_M_resize(__m, 0);
      *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 176) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::begin(__m);
      *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::iterator *)(v5 + 208) = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end(__m);
      while ( __gnu_cxx::operator!=<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>(
                (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 176),
                (const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *)(v5 + 208)) )
      {
        __it_1 = __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator*((const __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 176));
        if ( *(char *)(((unsigned __int64)&__it_1->matched >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&__it_1->matched);
        __it_1->matched = 0;
        if ( *(_BYTE *)(((unsigned __int64)&__it_1->second >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        __it_1->second._M_current = *(const char **)(v5 + 272);
        v17 = (unsigned __int64)&__it_1->second;
        if ( *(_BYTE *)(((unsigned __int64)__it_1 >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8(v17);
        __it_1->first._M_current = *(const char **)v17;
        __gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>> *,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::operator++((__gnu_cxx::__normal_iterator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >*,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const)(v5 + 176));
      }
    }
    LODWORD(result) = __ret;
  }
  if ( v27 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8050) = -168430091;
  }
  return (unsigned int)result;
};

// Line 126: range 000000000D47FFCC-000000000D4802F3
std::regex_traits<char>::string_type *__cdecl std::regex_traits<char>::lookup_collatename<char const*>(
        std::regex_traits<char>::string_type *retstr,
        const std::regex_traits<char> *const this,
        const char *__first,
        const char *__last)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  char v7; // al
  char v8; // dl
  const char **__for_begin; // [rsp+28h] [rbp-C8h]
  const std::ctype<char> *__fctyp; // [rsp+30h] [rbp-C0h]
  char v14[160]; // [rsp+50h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 9 <unknown> 64 32 7 __s:264";
  *(_QWORD *)(v4 + 16) = std::regex_traits<char>::lookup_collatename<char const*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862723] = -202116109;
  __fctyp = (const std::ctype<char> *)std::use_facet<std::ctype<char>>(this);
  std::string::basic_string(v4 + 64);
  while ( __first != __last )
  {
    if ( *(_BYTE *)(((unsigned __int64)__first >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)__first & 7) >= *(_BYTE *)(((unsigned __int64)__first >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(__first);
    }
    v7 = std::ctype<char>::narrow(__fctyp, *__first, 0);
    std::string::operator+=(v4 + 64, (unsigned int)v7);
    ++__first;
  }
  for ( __for_begin = std::regex_traits<char>::lookup_collatename<char const*>(char const*,char const*)const::__collatenames;
        __for_begin != &std::regex_traits<char>::lookup_collatename<char const*>(char const*,char const*)const::__collatenames[128];
        ++__for_begin )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      __asan_report_load8(__for_begin);
    if ( std::operator==<char>((const std::string *)(v4 + 64), *__for_begin) )
    {
      std::allocator<char>::allocator(v4 + 48);
      v8 = std::ctype<char>::widen(
             __fctyp,
             __for_begin
           - std::regex_traits<char>::lookup_collatename<char const*>(char const*,char const*)const::__collatenames);
      std::string::basic_string<std::allocator<char>>(retstr, 1uLL, v8, (const std::allocator<char> *)(v4 + 48));
      std::allocator<char>::~allocator(v4 + 48);
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      goto LABEL_17;
    }
  }
  std::string::basic_string(retstr);
LABEL_17:
  std::string::~string((void *)(v4 + 64));
  if ( v14 == (char *)v4 )
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

// Line 282: range 000000000D45AB00-000000000D45B06B
std::regex_traits<char>::char_class_type __cdecl std::regex_traits<char>::lookup_classname<char const*>(
        const std::regex_traits<char> *const this,
        const char *__first,
        const char *__last,
        bool __icase)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::ctype<char>::char_type v7; // cl
  char v8; // al
  char v9; // r14
  char v10; // r15
  __int64 v11; // r8
  const std::regex_traits<char>::_RegexMask *p_second; // rcx
  __int64 v13; // rdx
  char v14; // dl
  std::regex_traits<char>::char_class_type second; // r14d
  char v16; // [rsp+13h] [rbp-13Dh]
  const std::pair<char const*,std::regex_traits<char>::_RegexMask> *__for_begin; // [rsp+38h] [rbp-118h]
  const std::ctype<char> *__fctyp; // [rsp+40h] [rbp-110h]
  char v22[240]; // [rsp+60h] [rbp-F0h] BYREF
  std::regex_traits<char>::char_class_type result; // 0:eax.3

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 32 7 __s:308";
  *(_QWORD *)(v4 + 16) = std::regex_traits<char>::lookup_classname<char const*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862725] = -202116109;
  __fctyp = (const std::ctype<char> *)std::use_facet<std::ctype<char>>(this);
  std::string::basic_string(v4 + 128);
  while ( __first != __last )
  {
    if ( *(_BYTE *)(((unsigned __int64)__first >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)__first & 7) >= *(_BYTE *)(((unsigned __int64)__first >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(__first);
    }
    v7 = std::ctype<char>::tolower(__fctyp, *__first);
    v8 = std::ctype<char>::narrow(__fctyp, v7, 0);
    std::string::operator+=(v4 + 128, (unsigned int)v8);
    ++__first;
  }
  for ( __for_begin = std::regex_traits<char>::lookup_classname<char const*>(char const*,char const*,bool)const::__classnames;
        __for_begin != &std::regex_traits<char>::lookup_classname<char const*>(char const*,char const*,bool)const::__classnames[15];
        ++__for_begin )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      __asan_report_load8(__for_begin);
    if ( std::operator==<char>((const std::string *)(v4 + 128), __for_begin->first) )
    {
      v9 = 0;
      v10 = 0;
      v16 = 0;
      if ( !__icase )
        goto LABEL_23;
      std::regex_traits<char>::_RegexMask::_RegexMask((std::regex_traits<char>::_RegexMask *const)(v4 + 80), 0, 0);
      v9 = 1;
      std::regex_traits<char>::_RegexMask::_RegexMask((std::regex_traits<char>::_RegexMask *const)(v4 + 48), 0x300u, 0);
      v10 = 1;
      p_second = &__for_begin->second;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 64);
      v13 = v4 + 48;
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 48);
      *(std::regex_traits<char>::_RegexMask *)(v4 + 64) = std::regex_traits<char>::_RegexMask::operator&(
                                                            p_second,
                                                            *(_DWORD *)(v4 + 48),
                                                            v13,
                                                            (__int64)p_second,
                                                            v11);
      v16 = 1;
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 80);
      if ( (unsigned __int8)std::regex_traits<char>::_RegexMask::operator!=(
                              (const std::regex_traits<char>::_RegexMask *const)(v4 + 64),
                              *(_DWORD *)(v4 + 80)) )
        v14 = 1;
      else
LABEL_23:
        v14 = 0;
      if ( v16 )
        *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
        *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v9 )
        *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
      {
        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 4;
        std::regex_traits<char>::_RegexMask::_RegexMask(
          (std::regex_traits<char>::_RegexMask *const)(v4 + 96),
          0x400u,
          0);
        if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 96);
        second = *(std::regex_traits<char>::char_class_type *)(v4 + 96);
        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&__for_begin->second >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&__for_begin->second >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&__for_begin->second);
        }
        second = __for_begin->second;
      }
      goto LABEL_41;
    }
  }
  std::regex_traits<char>::_RegexMask::_RegexMask((std::regex_traits<char>::_RegexMask *const)(v4 + 112), 0, 0);
  if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v4 + 112);
  second = *(std::regex_traits<char>::char_class_type *)(v4 + 112);
  *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
LABEL_41:
  std::string::~string((void *)(v4 + 128));
  result = second;
  if ( v22 == (char *)v4 )
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
  return result;
};

// Line 326: range 000000000D45B06C-000000000D45B1FF
__int64 __fastcall std::regex_traits<char>::isctype(const std::regex_traits<char> *const this, char __c, int __f)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // r8
  __int64 v7; // rsi
  char v8; // dl
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  const std::ctype<char> *__fctyp; // [rsp+18h] [rbp-68h]
  char v15[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 __f:327";
  *(_QWORD *)(v3 + 16) = std::regex_traits<char>::isctype;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = __f;
  __fctyp = (const std::ctype<char> *)std::use_facet<std::ctype<char>>(this);
  v7 = (unsigned int)__c;
  v8 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v8 != 0;
  v10 = (v8 != 0) & (unsigned __int8)((char)(((v3 + 32) & 7) + 1) >= v8);
  if ( (_BYTE)v10 )
    __asan_report_load2(v3 + 32, v7, v10, v9, v6);
  if ( std::ctype<char>::is(__fctyp, *(_WORD *)(v3 + 32), v7) )
    goto LABEL_11;
  if ( *(_BYTE *)(((v3 + 34) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 34) & 7) >= *(_BYTE *)(((v3 + 34) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v3 + 34);
  }
  if ( (*(_BYTE *)(v3 + 34) & 1) != 0 && __c == std::ctype<char>::widen(__fctyp, 95) )
LABEL_11:
    result = 1LL;
  else
    result = 0LL;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 340: range 000000000D454CCE-000000000D45503D
int __cdecl std::regex_traits<char>::value(const std::regex_traits<char> *const this, char __ch, int __radix)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // r14d
  int result; // eax
  char v9[656]; // [rsp+10h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 9 <unknown> 64 8 7 __v:344 96 32 9 <unknown> 160 384 8 __is:343";
  *(_QWORD *)(v3 + 16) = std::regex_traits<char>::value;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    1uLL,
    __ch,
    (const std::allocator<char> *)(v3 + 48));
  std::istringstream::basic_istringstream(v3 + 160, v3 + 96, 8LL);
  std::string::~string((void *)(v3 + 96));
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( __radix == 8 )
  {
    std::istream::operator>>(v3 + 160, std::oct);
  }
  else if ( __radix == 16 )
  {
    std::istream::operator>>(v3 + 160, std::hex);
  }
  std::istream::operator>>(v3 + 160, v3 + 64);
  if ( (unsigned __int8)std::ios::fail(v3 + 280) )
  {
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 64);
    v6 = *(_QWORD *)(v3 + 64);
  }
  std::istringstream::~istringstream(v3 + 160);
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};
