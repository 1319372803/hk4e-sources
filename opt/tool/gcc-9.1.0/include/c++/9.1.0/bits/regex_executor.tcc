// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex_executor.tcc

// Line 39: range 000000000D1D72FE-000000000D1D73E2
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_search(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this)
{
  if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_search_from_first(this) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)64) )
    return 0;
  std::regex_constants::operator|=(&this->_M_flags, (std::regex_constants::match_flag_type)128);
  while ( __gnu_cxx::operator!=<char const*,std::string>(&this->_M_begin, &this->_M_end) )
  {
    __gnu_cxx::__normal_iterator<char const*,std::string>::operator++(&this->_M_begin);
    if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_search_from_first(this) )
      return 1;
  }
  return 0;
};

// Line 39: range 000000000D1D78CA-000000000D1D79A7
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_search(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this)
{
  if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_search_from_first(this) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)64) )
    return 0;
  std::regex_constants::operator|=(&this->_M_flags, (std::regex_constants::match_flag_type)128);
  while ( __gnu_cxx::operator!=<char const*,std::string>(&this->_M_begin, &this->_M_end) )
  {
    __gnu_cxx::__normal_iterator<char const*,std::string>::operator++(&this->_M_begin);
    if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_search_from_first(this) )
      return 1;
  }
  return 0;
};

// Line 81: range 000000000D320D5C-000000000D320F84
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_main_dispatch(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::__dfs a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 sol_pos; // rax
  bool result; // al
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_main_dispatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->_M_has_sol);
  }
  this->_M_has_sol = 0;
  __gnu_cxx::__normal_iterator<char const*,std::string>::__normal_iterator((__gnu_cxx::__normal_iterator<char const*,std::string > *const)(v3 + 32));
  sol_pos = (unsigned __int64)std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_get_sol_pos(&this->_M_states);
  if ( *(_BYTE *)((sol_pos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    sol_pos = __asan_report_load8(v3 + 32);
  *(_QWORD *)sol_pos = *(_QWORD *)(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_results >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_results);
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
    &this->_M_cur_results,
    this->_M_results);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_states >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_states);
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
    this,
    __match_mode,
    this->_M_states._M_start);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->_M_has_sol);
  }
  result = this->_M_has_sol;
  if ( v8 == (char *)v3 )
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

// Line 115: range 000000000D320714-000000000D320D5B
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main_dispatch(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::__bfs a3)
{
  const std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *v3; // r8
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *p_M_states; // rcx
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_ResultsVec *M_results; // rdx
  _BOOL4 v9; // edx
  unsigned __int64 v10; // r14
  bool *v11; // rax
  unsigned __int64 v12; // rax
  std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >> *v13; // rax
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *v14; // rdx
  int v15; // r14d
  unsigned __int64 v16; // rax
  bool result; // al
  bool __ret; // [rsp+1Fh] [rbp-101h]
  std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >> *__for_range; // [rsp+20h] [rbp-100h]
  __gnu_cxx::__normal_iterator<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >*,std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >> >::reference __task; // [rsp+28h] [rbp-F8h]
  char v21[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 9 <unknown> 64 8 15 __for_begin:127 96 8 13 __for_end:127 128 24 15 __old_queue:126";
  *(_QWORD *)(v4 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main_dispatch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  p_M_states = &this->_M_states;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_results >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_results);
  M_results = this->_M_results;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_states._M_start >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_states._M_start);
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_queue(
    p_M_states,
    this->_M_states._M_start,
    M_results,
    (__int64)p_M_states,
    v3);
  __ret = 0;
  do
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->_M_has_sol);
    }
    this->_M_has_sol = 0;
    if ( std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::empty(&this->_M_states._M_match_queue) )
    {
      v9 = 0;
    }
    else
    {
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
      if ( *(char *)(((v4 + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v4 + 48);
      *(_BYTE *)(v4 + 48) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_nfa);
      v10 = std::vector<std::__detail::_State<char>>::size(&this->_M_nfa->std::vector<std::__detail::_State<char>>);
      v11 = std::unique_ptr<bool []>::get(&this->_M_states._M_visited_states);
      std::fill_n<bool *,unsigned long,bool>(v11, v10, (const bool *)(v4 + 48));
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      v12 = ((v4 + 128) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      v13 = std::move<std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>> &>(&this->_M_states._M_match_queue);
      std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::vector(
        (std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >> *const)(v4 + 128),
        v13);
      __for_range = (std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >> *)(v4 + 128);
      *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >>::iterator *)(v4 + 64) = std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::begin(__for_range);
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >>::iterator *)(v4 + 96) = std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::end(__for_range);
      while ( __gnu_cxx::operator!=<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>> *,std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>>(
                (const __gnu_cxx::__normal_iterator<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >*,std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >> > *)(v4 + 64),
                (const __gnu_cxx::__normal_iterator<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >*,std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >> > *)(v4 + 96)) )
      {
        __task = __gnu_cxx::__normal_iterator<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>> *,std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >*,std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >> > *const)(v4 + 64));
        v14 = std::move<std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>> &>(&__task->second);
        std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
          &this->_M_cur_results,
          v14);
        if ( *(_BYTE *)(((unsigned __int64)__task >> 3) + 0x7FFF8000) )
          __asan_report_load8(__task);
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
          this,
          __match_mode,
          __task->first);
        __gnu_cxx::__normal_iterator<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>> *,std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >*,std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >> > *const)(v4 + 64));
      }
      *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( __match_mode == _Prefix )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&this->_M_has_sol);
        }
        __ret = __ret || this->_M_has_sol;
      }
      if ( __gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_end) )
      {
        v15 = 0;
      }
      else
      {
        __gnu_cxx::__normal_iterator<char const*,std::string>::operator++(&this->_M_current);
        v15 = 1;
      }
      std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::~vector((std::vector<std::pair<long int,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> >> *const)(v4 + 128));
      v9 = v15 == 1;
    }
    v16 = ((v4 + 128) >> 3) + 2147450880;
    *(_WORD *)v16 = -1800;
    *(_BYTE *)(v16 + 2) = -8;
  }
  while ( v9 );
  if ( __match_mode == _Exact )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    __ret = this->_M_has_sol;
  }
  std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::clear(&this->_M_states._M_match_queue);
  result = __ret;
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 147: range 000000000D42B522-000000000D42B901
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_lookahead(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_StateIdT __next)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_FlagT M_flags; // r8d
  const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_RegexT *M_re; // rdi
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference v7; // rax
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v8; // r14
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v9; // rax
  bool v10; // r14
  bool result; // al
  std::size_t __i; // [rsp+18h] [rbp-178h]
  char v14[368]; // [rsp+20h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 24 10 __what:153 112 144 9 __sub:154";
  *(_QWORD *)(v2 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_lookahead;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::vector(
    (std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *const)(v2 + 48),
    &this->_M_cur_results);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  M_flags = this->_M_flags;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_re);
  M_re = this->_M_re;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
  {
    M_re = (const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_RegexT *)&this->_M_current;
    __asan_report_load8(&this->_M_current);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
  {
    M_re = (const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_RegexT *)&this->_M_end;
    __asan_report_load8(&this->_M_end);
  }
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_Executor(
    (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const)(v2 + 112),
    this->_M_current,
    (__gnu_cxx::__normal_iterator<char const*,std::string >)this->_M_end._M_current,
    (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_ResultsVec *)(v2 + 48),
    M_re,
    M_flags);
  if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v2 + 240) = __next;
  if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_search_from_first((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const)(v2 + 112)) )
  {
    for ( __i = 0LL;
          __i < std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::size((const std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *const)(v2 + 48));
          ++__i )
    {
      v7 = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
             (std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *const)(v2 + 48),
             __i);
      if ( *(char *)(((unsigned __int64)&v7->matched >> 3) + 0x7FFF8000) < 0 )
        v7 = (std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference)__asan_report_load1(&v7->matched);
      if ( v7->matched )
      {
        v8 = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
               (std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *const)(v2 + 48),
               __i);
        v9 = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
               &this->_M_cur_results,
               __i);
        std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator=(v9, v8);
      }
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::~_Executor((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const)(v2 + 112));
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::~vector((std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *const)(v2 + 48));
  result = v10;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 147: range 000000000D42CC42-000000000D42CFFA
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_lookahead(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_StateIdT __next)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_FlagT M_flags; // r8d
  const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_RegexT *M_re; // rdi
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference v7; // rax
  const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v8; // r14
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *v9; // rax
  bool v10; // r14
  bool result; // al
  std::size_t __i; // [rsp+18h] [rbp-138h]
  char v14[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 10 __what:153 96 120 9 __sub:154";
  *(_QWORD *)(v2 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_lookahead;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::vector(
    (std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *const)(v2 + 32),
    &this->_M_cur_results);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  M_flags = this->_M_flags;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_re);
  M_re = this->_M_re;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
  {
    M_re = (const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_RegexT *)&this->_M_current;
    __asan_report_load8(&this->_M_current);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
  {
    M_re = (const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_RegexT *)&this->_M_end;
    __asan_report_load8(&this->_M_end);
  }
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_Executor(
    (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const)(v2 + 96),
    this->_M_current,
    (__gnu_cxx::__normal_iterator<char const*,std::string >)this->_M_end._M_current,
    (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_ResultsVec *)(v2 + 32),
    M_re,
    M_flags);
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v2 + 192) = __next;
  if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_search_from_first((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const)(v2 + 96)) )
  {
    for ( __i = 0LL;
          __i < std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::size((const std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *const)(v2 + 32));
          ++__i )
    {
      v7 = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
             (std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *const)(v2 + 32),
             __i);
      if ( *(char *)(((unsigned __int64)&v7->matched >> 3) + 0x7FFF8000) < 0 )
        v7 = (std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference)__asan_report_load1(&v7->matched);
      if ( v7->matched )
      {
        v8 = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
               (std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *const)(v2 + 32),
               __i);
        v9 = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
               &this->_M_cur_results,
               __i);
        std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator=(v9, v8);
      }
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::~_Executor((std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const)(v2 + 96));
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::~vector((std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *const)(v2 + 32));
  result = v10;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 174: range 000000000D42AB3A-000000000D42AEE4
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_rep_once_more(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v7; // rdx
  const std::__detail::_State<char> *__state; // [rsp+20h] [rbp-70h]
  std::vector<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string >,int>>::reference __rep_count; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 10 __back:181";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_rep_once_more;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  __rep_count = std::vector<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>>::operator[](
                  &this->_M_rep_count,
                  __i);
  if ( *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__rep_count->second);
  }
  if ( !__rep_count->second || __gnu_cxx::operator!=<char const*,std::string>(&__rep_count->first, &this->_M_current) )
  {
    if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 32);
    if ( *(_WORD *)(((unsigned __int64)__rep_count >> 3) + 0x7FFF8000) )
      __asan_report_load16(__rep_count);
    v7 = *(_QWORD *)&__rep_count->second;
    *(_QWORD *)(v3 + 32) = __rep_count->first._M_current;
    *(_QWORD *)(v3 + 40) = v7;
    if ( *(_BYTE *)(((unsigned __int64)__rep_count >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    __rep_count->first._M_current = this->_M_current._M_current;
    if ( *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&__rep_count->second);
    }
    __rep_count->second = 1;
    if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_anon_0);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
      this,
      __match_mode,
      __state->_anon_0._anon_0._M_alt);
    std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>::operator=(
      __rep_count,
      (std::conditional<true,const std::pair<__gnu_cxx::__normal_iterator<char const*,std::string >,int>&,const std::__nonesuch_no_braces&>::type)(v3 + 32));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&__rep_count->second);
    }
    if ( __rep_count->second <= 1 )
    {
      ++__rep_count->second;
      if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__state->_anon_0);
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
        this,
        __match_mode,
        __state->_anon_0._anon_0._M_alt);
      if ( *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__rep_count->second);
      }
      --__rep_count->second;
    }
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 174: range 000000000D42C334-000000000D42C6DE
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_rep_once_more(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v7; // rdx
  const std::__detail::_State<char> *__state; // [rsp+20h] [rbp-70h]
  std::vector<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string >,int>>::reference __rep_count; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 10 __back:181";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_rep_once_more;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  __rep_count = std::vector<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>>::operator[](
                  &this->_M_rep_count,
                  __i);
  if ( *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__rep_count->second);
  }
  if ( !__rep_count->second || __gnu_cxx::operator!=<char const*,std::string>(&__rep_count->first, &this->_M_current) )
  {
    if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 32);
    if ( *(_WORD *)(((unsigned __int64)__rep_count >> 3) + 0x7FFF8000) )
      __asan_report_load16(__rep_count);
    v7 = *(_QWORD *)&__rep_count->second;
    *(_QWORD *)(v3 + 32) = __rep_count->first._M_current;
    *(_QWORD *)(v3 + 40) = v7;
    if ( *(_BYTE *)(((unsigned __int64)__rep_count >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    __rep_count->first._M_current = this->_M_current._M_current;
    if ( *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&__rep_count->second);
    }
    __rep_count->second = 1;
    if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_anon_0);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
      this,
      __match_mode,
      __state->_anon_0._anon_0._M_alt);
    std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>::operator=(
      __rep_count,
      (std::conditional<true,const std::pair<__gnu_cxx::__normal_iterator<char const*,std::string >,int>&,const std::__nonesuch_no_braces&>::type)(v3 + 32));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&__rep_count->second);
    }
    if ( __rep_count->second <= 1 )
    {
      ++__rep_count->second;
      if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__state->_anon_0);
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
        this,
        __match_mode,
        __state->_anon_0._anon_0._M_alt);
      if ( *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__rep_count->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__rep_count->second);
      }
      --__rep_count->second;
    }
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 204: range 000000000D3F2856-000000000D3F2A3E
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_repeat(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( *(char *)(((unsigned __int64)&__state->_anon_0._M_matcher_storage._M_storage[8] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__state->_anon_0._M_matcher_storage._M_storage[8]);
  if ( !__state->_anon_0._anon_0._M_neg )
  {
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_rep_once_more(
      this,
      __match_mode,
      __i);
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    if ( !this->_M_has_sol )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__state->_M_next);
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
        this,
        __match_mode,
        __state->_M_next);
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->_M_has_sol);
      }
      if ( !this->_M_has_sol )
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_rep_once_more(
          this,
          __match_mode,
          __i);
    }
  }
};

// Line 204: range 000000000D3F476E-000000000D3F4950
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_repeat(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( *(char *)(((unsigned __int64)&__state->_anon_0._M_matcher_storage._M_storage[8] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__state->_anon_0._M_matcher_storage._M_storage[8]);
  if ( !__state->_anon_0._anon_0._M_neg )
  {
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_rep_once_more(
      this,
      __match_mode,
      __i);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    if ( !this->_M_has_sol )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__state->_M_next);
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
        this,
        __match_mode,
        __state->_M_next);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    if ( !this->_M_has_sol )
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_rep_once_more(
        this,
        __match_mode,
        __i);
  }
};

// Line 246: range 000000000D3F2A40-000000000D3F2C6F
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_subexpr_begin(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *v6; // rax
  const std::__detail::_State<char> *__state; // [rsp+20h] [rbp-70h]
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference __res; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 10 __back:252";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_subexpr_begin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
    v6 = (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *)__asan_report_load8(&__state->_anon_0);
  __res = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
            &v6->_M_cur_results,
            __state->_anon_0._M_subexpr);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)__res >> 3) + 0x7FFF8000) )
    __asan_report_load8(__res);
  *(_QWORD *)(v3 + 32) = __res->first._M_current;
  __res->first._M_current = this->_M_current._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__state->_M_next);
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
    this,
    __match_mode,
    __state->_M_next);
  if ( *(_BYTE *)(((unsigned __int64)__res >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 32);
  __res->first._M_current = *(const char **)(v3 + 32);
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 246: range 000000000D3F4952-000000000D3F4B81
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_subexpr_begin(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *v6; // rax
  const std::__detail::_State<char> *__state; // [rsp+20h] [rbp-70h]
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference __res; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 10 __back:252";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_subexpr_begin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
    v6 = (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *)__asan_report_load8(&__state->_anon_0);
  __res = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
            &v6->_M_cur_results,
            __state->_anon_0._M_subexpr);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)__res >> 3) + 0x7FFF8000) )
    __asan_report_load8(__res);
  *(_QWORD *)(v3 + 32) = __res->first._M_current;
  __res->first._M_current = this->_M_current._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__state->_M_next);
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
    this,
    __match_mode,
    __state->_M_next);
  if ( *(_BYTE *)(((unsigned __int64)__res >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 32);
  __res->first._M_current = *(const char **)(v3 + 32);
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 260: range 000000000D3F2D10-000000000D3F308D
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_subexpr_end(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *v6; // rax
  const char *M_current; // rdx
  const std::__detail::_State<char> *__state; // [rsp+20h] [rbp-90h]
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference __res; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 10 __back:266";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_subexpr_end;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
    v6 = (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *)__asan_report_load8(&__state->_anon_0);
  __res = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
            &v6->_M_cur_results,
            __state->_anon_0._M_subexpr);
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 32, 24LL);
  }
  if ( *(char *)(((unsigned __int64)__res >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&__res->matched + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__res + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&__res->matched + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(__res, 24LL);
  }
  M_current = __res->second._M_current;
  *(_QWORD *)(v3 + 32) = __res->first._M_current;
  *(_QWORD *)(v3 + 40) = M_current;
  *(_QWORD *)(v3 + 48) = *(_QWORD *)&__res->matched;
  if ( *(_BYTE *)(((unsigned __int64)&__res->second >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  __res->second._M_current = this->_M_current._M_current;
  if ( *(char *)(((unsigned __int64)&__res->matched >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&__res->matched);
  __res->matched = 1;
  if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__state->_M_next);
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
    this,
    __match_mode,
    __state->_M_next);
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator=(
    __res,
    (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)(v3 + 32));
  if ( v11 == (char *)v3 )
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

// Line 260: range 000000000D3F4B82-000000000D3F4EFF
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_subexpr_end(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *v6; // rax
  const char *M_current; // rdx
  const std::__detail::_State<char> *__state; // [rsp+20h] [rbp-90h]
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference __res; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 10 __back:266";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_subexpr_end;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
    v6 = (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *)__asan_report_load8(&__state->_anon_0);
  __res = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
            &v6->_M_cur_results,
            __state->_anon_0._M_subexpr);
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 32, 24LL);
  }
  if ( *(char *)(((unsigned __int64)__res >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&__res->matched + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__res + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&__res->matched + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(__res, 24LL);
  }
  M_current = __res->second._M_current;
  *(_QWORD *)(v3 + 32) = __res->first._M_current;
  *(_QWORD *)(v3 + 40) = M_current;
  *(_QWORD *)(v3 + 48) = *(_QWORD *)&__res->matched;
  if ( *(_BYTE *)(((unsigned __int64)&__res->second >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_current);
  __res->second._M_current = this->_M_current._M_current;
  if ( *(char *)(((unsigned __int64)&__res->matched >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&__res->matched);
  __res->matched = 1;
  if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__state->_M_next);
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
    this,
    __match_mode,
    __state->_M_next);
  std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>::operator=(
    __res,
    (const std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > *)(v3 + 32));
  if ( v11 == (char *)v3 )
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

// Line 275: range 000000000D3F308E-000000000D3F3138
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_line_begin_assertion(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_at_begin(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
  }
};

// Line 275: range 000000000D3F4F00-000000000D3F4FAA
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_line_begin_assertion(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_at_begin(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
  }
};

// Line 285: range 000000000D3F313A-000000000D3F31E4
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_line_end_assertion(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_at_end(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
  }
};

// Line 285: range 000000000D3F4FAC-000000000D3F5056
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_line_end_assertion(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_at_end(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
  }
};

// Line 295: range 000000000D3F31E6-000000000D3F32D6
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_word_boundary(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  bool v3; // cl
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  v3 = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_word_boundary(this);
  if ( *(char *)(((unsigned __int64)&__state->_anon_0._M_matcher_storage._M_storage[8] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__state->_anon_0._M_matcher_storage._M_storage[8]);
  if ( v3 == !__state->_anon_0._anon_0._M_neg )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
  }
};

// Line 295: range 000000000D3F5058-000000000D3F5148
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_word_boundary(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  bool v3; // cl
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  v3 = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_word_boundary(this);
  if ( *(char *)(((unsigned __int64)&__state->_anon_0._M_matcher_storage._M_storage[8] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__state->_anon_0._M_matcher_storage._M_storage[8]);
  if ( v3 == !__state->_anon_0._anon_0._M_neg )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
  }
};

// Line 307: range 000000000D3F32D8-000000000D3F33F8
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_subexpr_lookahead(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  bool v3; // cl
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__state->_anon_0);
  v3 = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_lookahead(
         this,
         __state->_anon_0._anon_0._M_alt);
  if ( *(char *)(((unsigned __int64)&__state->_anon_0._M_matcher_storage._M_storage[8] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__state->_anon_0._M_matcher_storage._M_storage[8]);
  if ( v3 == !__state->_anon_0._anon_0._M_neg )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
  }
};

// Line 307: range 000000000D3F514A-000000000D3F526A
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_subexpr_lookahead(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  bool v3; // cl
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__state->_anon_0);
  v3 = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_lookahead(
         this,
         __state->_anon_0._anon_0._M_alt);
  if ( *(char *)(((unsigned __int64)&__state->_anon_0._M_matcher_storage._M_storage[8] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__state->_anon_0._M_matcher_storage._M_storage[8]);
  if ( v3 == !__state->_anon_0._anon_0._M_neg )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
  }
};

// Line 317: range 000000000D3F33FA-000000000D3F351E
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_match(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  char *v3; // rax
  char *v4; // rdx
  const std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *v5; // r8
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *p_M_states; // rcx
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *v7; // rdx
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_end) )
  {
    v3 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(&this->_M_current);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v3);
    }
    if ( std::__detail::_State<char>::_M_matches(__state, *v4) )
    {
      p_M_states = &this->_M_states;
      v7 = this;
      if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__state->_M_next);
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_queue(
        p_M_states,
        __state->_M_next,
        &v7->_M_cur_results,
        (__int64)p_M_states,
        v5);
    }
  }
};

// Line 317: range 000000000D3F526C-000000000D3F53AA
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_match(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  char *v3; // rax
  char *v4; // rdx
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_end) )
  {
    v3 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(&this->_M_current);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v3);
    }
    if ( std::__detail::_State<char>::_M_matches(__state, *v4) )
    {
      __gnu_cxx::__normal_iterator<char const*,std::string>::operator++(&this->_M_current);
      if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__state->_M_next);
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
        this,
        __match_mode,
        __state->_M_next);
      __gnu_cxx::__normal_iterator<char const*,std::string>::operator--(&this->_M_current);
    }
  }
};

// Line 360: range 000000000D42B978-000000000D42B9F9
void __cdecl std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string>,std::regex_traits<char>>::_Backref_matcher(
        std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string >,std::regex_traits<char> > *const this,
        bool __icase,
        const std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string >,std::regex_traits<char> >::_TraitsT *__traits)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->_M_icase = __icase;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = __traits;
};

// Line 364: range 000000000D42BA98-000000000D42BD6F
bool __fastcall std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string>,std::regex_traits<char>>::_M_apply(
        std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string >,std::regex_traits<char> > *const this,
        __gnu_cxx::__normal_iterator<char const*,std::string > __expected_begin,
        __gnu_cxx::__normal_iterator<char const*,std::string > __expected_end,
        __gnu_cxx::__normal_iterator<char const*,std::string > __actual_begin,
        __gnu_cxx::__normal_iterator<char const*,std::string > __actual_end)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool result; // al
  std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string >,std::regex_traits<char> >::_M_apply::<lambda(char, char)> v9; // r8
  const std::ctype<char> *__fctyp; // [rsp+38h] [rbp-F8h]
  char v14[240]; // [rsp+40h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 8 9 <unknown> 64 8 20 __expected_begin:364 96 8 18 __expected_end:365 128 8 18 __actual_beg"
                        "in:365 160 8 16 __actual_end:366";
  *(_QWORD *)(v5 + 16) = std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string>,std::regex_traits<char>>::_M_apply;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 64) = __expected_begin;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 96) = __expected_end;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 128) = __actual_begin;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 160) = __actual_end;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  if ( !this->_M_icase )
  {
    result = std::__equal4<__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>>(
               *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 64),
               *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 96),
               *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 128),
               *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 160));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_traits);
    if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    std::regex_traits<char>::getloc((const std::regex_traits<char> *const)(v5 + 32));
    __fctyp = (const std::ctype<char> *)std::use_facet<std::ctype<char>>(v5 + 32);
    std::locale::~locale((std::locale *)(v5 + 32));
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
    v9.__this = this;
    v9.____fctyp = __fctyp;
    result = std::__equal4<__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>,std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string>,std::regex_traits<char>>::_M_apply(__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>)::{lambda(char,char)#1}>(
               *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 64),
               *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 96),
               *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 128),
               *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v5 + 160),
               v9);
  }
  if ( v14 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 375: range 000000000D42B9FA-000000000D42BA96
bool __cdecl std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string>,std::regex_traits<char>>::_M_apply(__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>)::{lambda(char,char)#1}::operator()(
        const std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string >,std::regex_traits<char> >::_M_apply::<lambda(char, char)> *const this,
        char __lhs,
        char __rhs)
{
  std::ctype<char>::char_type v3; // bl

  if ( *(_BYTE *)(((unsigned __int64)&this->____fctyp >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->____fctyp);
  v3 = std::ctype<char>::tolower(this->____fctyp, __lhs);
  if ( *(_BYTE *)(((unsigned __int64)&this->____fctyp >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->____fctyp);
  return v3 == std::ctype<char>::tolower(this->____fctyp, __rhs);
};

// Line 392: range 000000000D3F3520-000000000D3F3B82
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_backref(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *v6; // rax
  std::regex_traits<char> *p_M_traits; // r14
  std::basic_regex<char,std::regex_traits<char> >::flag_type v9; // eax
  std::regex_constants::syntax_option_type v10; // eax
  bool v11; // al
  const std::__detail::_State<char> *__state; // [rsp+20h] [rbp-E0h]
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference __submatch; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 10 __last:401 64 8 9 __tmp:402 96 8 12 __backup:413 128 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_backref;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
    v6 = (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *)__asan_report_load8(&__state->_anon_0);
  __submatch = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
                 &v6->_M_cur_results,
                 __state->_anon_0._M_subexpr);
  if ( *(char *)(((unsigned __int64)&__submatch->matched >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__submatch->matched);
  if ( __submatch->matched )
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    *(_QWORD *)(v3 + 32) = this->_M_current._M_current;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)__submatch >> 3) + 0x7FFF8000) )
      __asan_report_load8(__submatch);
    *(_QWORD *)(v3 + 64) = __submatch->first._M_current;
    while ( __gnu_cxx::operator!=<char const*,std::string>(
              (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32),
              &this->_M_end)
         && __gnu_cxx::operator!=<char const*,std::string>(
              (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64),
              &__submatch->second) )
    {
      __gnu_cxx::__normal_iterator<char const*,std::string>::operator++((__gnu_cxx::__normal_iterator<char const*,std::string > *const)(v3 + 32));
      __gnu_cxx::__normal_iterator<char const*,std::string>::operator++((__gnu_cxx::__normal_iterator<char const*,std::string > *const)(v3 + 64));
    }
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_re);
    p_M_traits = &std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>> const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_re->_M_automaton)->_M_traits;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_re);
    v9 = std::basic_regex<char,std::regex_traits<char>>::flags(this->_M_re);
    v10 = std::regex_constants::operator&(v9, (std::regex_constants::syntax_option_type)1);
    std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string>,std::regex_traits<char>>::_Backref_matcher(
      (std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string >,std::regex_traits<char> > *const)(v3 + 128),
      v10 != 0,
      p_M_traits);
    if ( *(_BYTE *)(((unsigned __int64)__submatch >> 3) + 0x7FFF8000) )
      __asan_report_load8(__submatch);
    if ( *(_BYTE *)(((unsigned __int64)&__submatch->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__submatch->second);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v11 = std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string>,std::regex_traits<char>>::_M_apply(
            (std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string >,std::regex_traits<char> > *const)(v3 + 128),
            __submatch->first,
            __submatch->second,
            this->_M_current,
            *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32));
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
    if ( v11 )
    {
      if ( __gnu_cxx::operator!=<char const*,std::string>(
             (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32),
             &this->_M_current) )
      {
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_current);
        *(_QWORD *)(v3 + 96) = this->_M_current._M_current;
        this->_M_current._M_current = *(const char **)(v3 + 32);
        if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__state->_M_next);
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
          this,
          __match_mode,
          __state->_M_next);
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 96);
        this->_M_current._M_current = *(const char **)(v3 + 96);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__state->_M_next);
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
          this,
          __match_mode,
          __state->_M_next);
      }
    }
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 392: range 000000000D3F53AC-000000000D3F5A0E
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_backref(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *v6; // rax
  std::regex_traits<char> *p_M_traits; // r14
  std::basic_regex<char,std::regex_traits<char> >::flag_type v9; // eax
  std::regex_constants::syntax_option_type v10; // eax
  bool v11; // al
  const std::__detail::_State<char> *__state; // [rsp+20h] [rbp-E0h]
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >>::reference __submatch; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 10 __last:401 64 8 9 __tmp:402 96 8 12 __backup:413 128 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_backref;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
    v6 = (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *)__asan_report_load8(&__state->_anon_0);
  __submatch = std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator[](
                 &v6->_M_cur_results,
                 __state->_anon_0._M_subexpr);
  if ( *(char *)(((unsigned __int64)&__submatch->matched >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__submatch->matched);
  if ( __submatch->matched )
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    *(_QWORD *)(v3 + 32) = this->_M_current._M_current;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)__submatch >> 3) + 0x7FFF8000) )
      __asan_report_load8(__submatch);
    *(_QWORD *)(v3 + 64) = __submatch->first._M_current;
    while ( __gnu_cxx::operator!=<char const*,std::string>(
              (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32),
              &this->_M_end)
         && __gnu_cxx::operator!=<char const*,std::string>(
              (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64),
              &__submatch->second) )
    {
      __gnu_cxx::__normal_iterator<char const*,std::string>::operator++((__gnu_cxx::__normal_iterator<char const*,std::string > *const)(v3 + 32));
      __gnu_cxx::__normal_iterator<char const*,std::string>::operator++((__gnu_cxx::__normal_iterator<char const*,std::string > *const)(v3 + 64));
    }
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_re);
    p_M_traits = &std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>> const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_re->_M_automaton)->_M_traits;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_re);
    v9 = std::basic_regex<char,std::regex_traits<char>>::flags(this->_M_re);
    v10 = std::regex_constants::operator&(v9, (std::regex_constants::syntax_option_type)1);
    std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string>,std::regex_traits<char>>::_Backref_matcher(
      (std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string >,std::regex_traits<char> > *const)(v3 + 128),
      v10 != 0,
      p_M_traits);
    if ( *(_BYTE *)(((unsigned __int64)__submatch >> 3) + 0x7FFF8000) )
      __asan_report_load8(__submatch);
    if ( *(_BYTE *)(((unsigned __int64)&__submatch->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__submatch->second);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v11 = std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string>,std::regex_traits<char>>::_M_apply(
            (std::__detail::_Backref_matcher<__gnu_cxx::__normal_iterator<char const*,std::string >,std::regex_traits<char> > *const)(v3 + 128),
            __submatch->first,
            __submatch->second,
            this->_M_current,
            *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32));
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
    if ( v11 )
    {
      if ( __gnu_cxx::operator!=<char const*,std::string>(
             (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32),
             &this->_M_current) )
      {
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_current);
        *(_QWORD *)(v3 + 96) = this->_M_current._M_current;
        this->_M_current._M_current = *(const char **)(v3 + 32);
        if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__state->_M_next);
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
          this,
          __match_mode,
          __state->_M_next);
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 96);
        this->_M_current._M_current = *(const char **)(v3 + 96);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__state->_M_next);
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
          this,
          __match_mode,
          __state->_M_next);
      }
    }
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 425: range 000000000D3F3B84-000000000D3F3D86
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_accept(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6; // al
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *v8; // rdx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_accept;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_begin) )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)32) )
    v6 = 1;
  else
LABEL_9:
    v6 = 0;
  if ( !v6
    && (__match_mode == _Prefix || __gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_end)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    if ( !this->_M_has_sol )
    {
      this->_M_has_sol = 1;
      v8 = this;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_results >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_results);
      std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
        this->_M_results,
        &v8->_M_cur_results);
    }
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 425: range 000000000D3F5A10-000000000D3F5EEC
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_accept(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // cl
  char v7; // al
  const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_NFAT *M_nfa; // rax
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *v9; // rdx
  __gnu_cxx::__normal_iterator<char const*,std::string > *sol_pos; // rax
  unsigned __int64 v11; // rax
  std::__iterator_traits<__gnu_cxx::__normal_iterator<char const*,std::string >,void>::difference_type v12; // r14
  char v13; // dl
  unsigned __int64 v14; // rax
  char v15[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_accept;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( __match_mode )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->_M_has_sol);
    }
    this->_M_has_sol = 1;
  }
  else
  {
    v6 = __gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_end);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->_M_has_sol);
    }
    this->_M_has_sol = v6;
  }
  if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_begin) )
    goto LABEL_16;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)32) )
    v7 = 1;
  else
LABEL_16:
    v7 = 0;
  if ( v7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->_M_has_sol);
    }
    this->_M_has_sol = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->_M_has_sol);
  }
  if ( this->_M_has_sol )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_nfa);
    M_nfa = this->_M_nfa;
    if ( *(_BYTE *)(((unsigned __int64)&M_nfa->_M_flags >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&M_nfa->_M_flags >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&M_nfa->_M_flags);
    }
    if ( std::regex_constants::operator&(M_nfa->_M_flags, (std::regex_constants::syntax_option_type)16) )
    {
      v9 = this;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_results >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_results);
LABEL_49:
      std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
        this->_M_results,
        &v9->_M_cur_results);
      goto LABEL_50;
    }
    __gnu_cxx::__normal_iterator<char const*,std::string>::__normal_iterator((__gnu_cxx::__normal_iterator<char const*,std::string > *const)(v3 + 32));
    sol_pos = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_get_sol_pos(&this->_M_states);
    if ( __gnu_cxx::operator==<char const*,std::string>(
           sol_pos,
           (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32)) )
    {
      goto LABEL_40;
    }
    v11 = (unsigned __int64)std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_get_sol_pos(&this->_M_states);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_begin >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(&this->_M_begin);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    v12 = std::distance<__gnu_cxx::__normal_iterator<char const*,std::string>>(
            this->_M_begin,
            *(__gnu_cxx::__normal_iterator<char const*,std::string > *)v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_current);
    if ( v12 < std::distance<__gnu_cxx::__normal_iterator<char const*,std::string>>(this->_M_begin, this->_M_current) )
LABEL_40:
      v13 = 1;
    else
      v13 = 0;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
    {
      v14 = (unsigned __int64)std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_get_sol_pos(&this->_M_states);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(&this->_M_current);
      *(_QWORD *)v14 = this->_M_current._M_current;
      v9 = this;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_results >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->_M_results);
      goto LABEL_49;
    }
  }
LABEL_50:
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 479: range 000000000D3F3D88-000000000D3F405C
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_alternative(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_NFAT *M_nfa; // rax
  bool __has_sol; // [rsp+27h] [rbp-9h]
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  M_nfa = this->_M_nfa;
  if ( *(_BYTE *)(((unsigned __int64)&M_nfa->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&M_nfa->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&M_nfa->_M_flags);
  }
  if ( std::regex_constants::operator&(M_nfa->_M_flags, (std::regex_constants::syntax_option_type)16) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_anon_0);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
      this,
      __match_mode,
      __state->_anon_0._anon_0._M_alt);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    if ( !this->_M_has_sol )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__state->_M_next);
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
        this,
        __match_mode,
        __state->_M_next);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_anon_0);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
      this,
      __match_mode,
      __state->_anon_0._anon_0._M_alt);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    __has_sol = this->_M_has_sol;
    this->_M_has_sol = 0;
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    this->_M_has_sol = __has_sol || this->_M_has_sol;
  }
};

// Line 479: range 000000000D3F5EEE-000000000D3F61AD
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_alternative(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_NFAT *M_nfa; // rax
  bool __has_sol; // [rsp+27h] [rbp-9h]
  const std::__detail::_State<char> *__state; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  __state = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __i);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  M_nfa = this->_M_nfa;
  if ( *(_BYTE *)(((unsigned __int64)&M_nfa->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&M_nfa->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&M_nfa->_M_flags);
  }
  if ( std::regex_constants::operator&(M_nfa->_M_flags, (std::regex_constants::syntax_option_type)16) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_anon_0);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
      this,
      __match_mode,
      __state->_anon_0._anon_0._M_alt);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    if ( !this->_M_has_sol )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__state->_M_next);
      std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
        this,
        __match_mode,
        __state->_M_next);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__state->_anon_0 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_anon_0);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
      this,
      __match_mode,
      __state->_anon_0._anon_0._M_alt);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    __has_sol = this->_M_has_sol;
    this->_M_has_sol = 0;
    if ( *(_BYTE *)(((unsigned __int64)&__state->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__state->_M_next);
    std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
      this,
      __match_mode,
      __state->_M_next);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->_M_has_sol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->_M_has_sol);
    }
    this->_M_has_sol = __has_sol || this->_M_has_sol;
  }
};

// Line 506: range 000000000D399A2C-000000000D399BEC
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_dfs(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  const std::__detail::_State<char> *v3; // rax

  if ( !std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_visited(
          &this->_M_states,
          __i) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_nfa);
    v3 = std::vector<std::__detail::_State<char>>::operator[](
           &this->_M_nfa->std::vector<std::__detail::_State<char>>,
           __i);
    switch ( std::__detail::_State<char>::_M_opcode(v3) )
    {
      case _S_opcode_alternative:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_alternative(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_repeat:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_repeat(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_backref:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_backref(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_line_begin_assertion:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_line_begin_assertion(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_line_end_assertion:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_line_end_assertion(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_word_boundary:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_word_boundary(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_subexpr_lookahead:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_subexpr_lookahead(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_subexpr_begin:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_subexpr_begin(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_subexpr_end:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_subexpr_end(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_match:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_match(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_accept:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_handle_accept(
          this,
          __match_mode,
          __i);
        break;
      default:
        return;
    }
  }
};

// Line 506: range 000000000D39A2CE-000000000D39A48E
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode,
        std::__detail::_StateIdT __i)
{
  const std::__detail::_State<char> *v3; // rax

  if ( !std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_visited(
          &this->_M_states,
          __i) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_nfa);
    v3 = std::vector<std::__detail::_State<char>>::operator[](
           &this->_M_nfa->std::vector<std::__detail::_State<char>>,
           __i);
    switch ( std::__detail::_State<char>::_M_opcode(v3) )
    {
      case _S_opcode_alternative:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_alternative(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_repeat:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_repeat(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_backref:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_backref(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_line_begin_assertion:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_line_begin_assertion(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_line_end_assertion:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_line_end_assertion(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_word_boundary:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_word_boundary(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_subexpr_lookahead:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_subexpr_lookahead(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_subexpr_begin:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_subexpr_begin(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_subexpr_end:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_subexpr_end(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_match:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_match(
          this,
          __match_mode,
          __i);
        break;
      case _S_opcode_accept:
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_handle_accept(
          this,
          __match_mode,
          __i);
        break;
      default:
        return;
    }
  }
};

// Line 544: range 000000000D42B0C6-000000000D42B520
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_word_boundary(
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  char v4; // al
  bool result; // al
  char v6; // al
  char v7; // al
  char *v8; // rax
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_CharT *v9; // rdx
  bool is_word; // al
  char *v11; // rax
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_CharT *v12; // rdx
  char v13; // al
  char __left_is_word; // [rsp+1Eh] [rbp-82h]
  char v15[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 10 __prev:556 64 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_word_boundary;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_begin) )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)4) )
    v4 = 1;
  else
LABEL_9:
    v4 = 0;
  if ( v4 )
  {
    result = 0;
  }
  else
  {
    if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_end) )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_M_flags);
    }
    if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)8) )
      v6 = 1;
    else
LABEL_17:
      v6 = 0;
    if ( v6 )
    {
      result = 0;
    }
    else
    {
      __left_is_word = 0;
      if ( __gnu_cxx::operator!=<char const*,std::string>(&this->_M_current, &this->_M_begin) )
        goto LABEL_24;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->_M_flags);
      }
      if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)128) )
LABEL_24:
        v7 = 1;
      else
        v7 = 0;
      if ( v7 )
      {
        if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_current);
        *(_QWORD *)(v1 + 32) = this->_M_current._M_current;
        if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v1 + 64) = std::prev<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                                                                                 *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v1 + 32),
                                                                                 1LL);
        v8 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*((const __gnu_cxx::__normal_iterator<char const*,std::string > *const)(v1 + 64));
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v8);
        }
        is_word = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_is_word(
                    this,
                    *v9);
        *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( is_word )
          __left_is_word = 1;
        *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
      }
      if ( !__gnu_cxx::operator!=<char const*,std::string>(&this->_M_current, &this->_M_end) )
        goto LABEL_43;
      v11 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(&this->_M_current);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v11);
      }
      if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_is_word(
             this,
             *v12) )
      {
        v13 = 1;
      }
      else
      {
LABEL_43:
        v13 = 0;
      }
      result = __left_is_word != v13;
    }
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 544: range 000000000D42C7F6-000000000D42CC41
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_word_boundary(
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  char v4; // al
  bool result; // al
  char v6; // al
  char v7; // al
  char *v8; // rax
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_CharT *v9; // rdx
  bool is_word; // al
  char *v11; // rax
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_CharT *v12; // rdx
  char v13; // al
  char __left_is_word; // [rsp+1Eh] [rbp-82h]
  char v15[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 10 __prev:556 64 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_word_boundary;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_begin) )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)4) )
    v4 = 1;
  else
LABEL_9:
    v4 = 0;
  if ( v4 )
  {
    result = 0;
  }
  else
  {
    if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_end) )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->_M_flags);
    }
    if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)8) )
      v6 = 1;
    else
LABEL_17:
      v6 = 0;
    if ( v6 )
    {
      result = 0;
    }
    else
    {
      __left_is_word = 0;
      if ( __gnu_cxx::operator!=<char const*,std::string>(&this->_M_current, &this->_M_begin) )
        goto LABEL_24;
      if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->_M_flags);
      }
      if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)128) )
LABEL_24:
        v7 = 1;
      else
        v7 = 0;
      if ( v7 )
      {
        if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->_M_current);
        *(_QWORD *)(v1 + 32) = this->_M_current._M_current;
        if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v1 + 64) = std::prev<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                                                                                 *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v1 + 32),
                                                                                 1LL);
        v8 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*((const __gnu_cxx::__normal_iterator<char const*,std::string > *const)(v1 + 64));
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v8);
        }
        is_word = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_is_word(
                    this,
                    *v9);
        *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( is_word )
          __left_is_word = 1;
        *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
      }
      if ( !__gnu_cxx::operator!=<char const*,std::string>(&this->_M_current, &this->_M_end) )
        goto LABEL_43;
      v11 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(&this->_M_current);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v11);
      }
      if ( std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_is_word(
             this,
             *v12) )
      {
        v13 = 1;
      }
      else
      {
LABEL_43:
        v13 = 0;
      }
      result = __left_is_word != v13;
    }
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
