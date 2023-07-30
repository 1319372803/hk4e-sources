// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex_executor.h

// Line 52: range 000000000D0A9D3A-000000000D0A9D74
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::~_Executor(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this)
{
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::~_State_info(&this->_M_states);
  std::vector<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>>::~vector(&this->_M_rep_count);
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::~vector(&this->_M_cur_results);
};

// Line 52: range 000000000D0A9D76-000000000D0A9DA0
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::~_Executor(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this)
{
  std::vector<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>>::~vector(&this->_M_rep_count);
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::~vector(&this->_M_cur_results);
};

// Line 69: range 000000000D1D6C20-000000000D1D70AD
void __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_Executor(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        __gnu_cxx::__normal_iterator<char const*,std::string > __begin,
        __gnu_cxx::__normal_iterator<char const*,std::string > __end,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_ResultsVec *__results,
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_RegexT *__re,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_FlagT __flags)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  __gnu_cxx::__normal_iterator<char const*,std::string > *p_M_end; // rax
  std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::vector<std::__detail::_State<char>>::size_type v11; // rax
  std::size_t v12; // r14
  std::__detail::_StateIdT v13; // rax
  std::regex_constants::match_flag_type v14; // ebx
  std::regex_constants::match_flag_type v15; // eax
  std::regex_constants::match_flag_type v16; // eax
  std::regex_constants::match_flag_type v17; // eax
  char v22[176]; // [rsp+30h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 9 <unknown> 64 8 10 __begin:69 96 8 8 __end:70";
  *(_QWORD *)(v6 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_Executor;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v6 + 64) = __begin;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v6 + 96) = __end;
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::vector(&this->_M_cur_results);
  __gnu_cxx::__normal_iterator<char const*,std::string>::__normal_iterator(&this->_M_current);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_begin >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_begin._M_current = *(const char **)(v6 + 64);
  p_M_end = (__gnu_cxx::__normal_iterator<char const*,std::string > *)&this->_M_end;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  p_M_end->_M_current = *(const char **)(v6 + 96);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_re = __re;
  v10 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>> const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__re->_M_automaton);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_nfa = v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_results >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_results = __results;
  std::allocator<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>>::allocator((std::allocator<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string >,int> > *const)(v6 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  v11 = std::vector<std::__detail::_State<char>>::size(&this->_M_nfa->std::vector<std::__detail::_State<char>>);
  std::vector<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>>::vector(
    &this->_M_rep_count,
    v11,
    (const std::vector<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string >,int>>::allocator_type *)(v6 + 48));
  std::allocator<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>>::~allocator((std::allocator<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string >,int> > *const)(v6 + 48));
  *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  v12 = std::vector<std::__detail::_State<char>>::size(&this->_M_nfa->std::vector<std::__detail::_State<char>>);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  v13 = std::__detail::_NFA_base::_M_start(this->_M_nfa);
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_State_info(
    &this->_M_states,
    v13,
    v12);
  if ( std::regex_constants::operator&(__flags, (std::regex_constants::match_flag_type)128) )
  {
    v14 = std::regex_constants::operator~((std::regex_constants::match_flag_type)4);
    v15 = std::regex_constants::operator~((std::regex_constants::match_flag_type)1);
    v16 = std::regex_constants::operator&(__flags, v15);
    v17 = std::regex_constants::operator&(v16, v14);
  }
  else
  {
    v17 = __flags;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    v17 = (unsigned int)__asan_report_store4(&this->_M_flags);
  }
  this->_M_flags = v17;
  if ( v22 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 69: range 000000000D1D73E4-000000000D1D784F
void __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_Executor(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        __gnu_cxx::__normal_iterator<char const*,std::string > __begin,
        __gnu_cxx::__normal_iterator<char const*,std::string > __end,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_ResultsVec *__results,
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_RegexT *__re,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_FlagT __flags)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  __gnu_cxx::__normal_iterator<char const*,std::string > *p_M_end; // rax
  std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::vector<std::__detail::_State<char>>::size_type v11; // rax
  std::size_t v12; // r14
  std::__detail::_StateIdT v13; // rax
  std::regex_constants::match_flag_type v14; // ebx
  std::regex_constants::match_flag_type v15; // eax
  std::regex_constants::match_flag_type v16; // eax
  std::regex_constants::match_flag_type v17; // eax
  char v22[176]; // [rsp+30h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 9 <unknown> 64 8 10 __begin:69 96 8 8 __end:70";
  *(_QWORD *)(v6 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_Executor;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v6 + 64) = __begin;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v6 + 96) = __end;
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::vector(&this->_M_cur_results);
  __gnu_cxx::__normal_iterator<char const*,std::string>::__normal_iterator(&this->_M_current);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_begin >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_begin._M_current = *(const char **)(v6 + 64);
  p_M_end = (__gnu_cxx::__normal_iterator<char const*,std::string > *)&this->_M_end;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  p_M_end->_M_current = *(const char **)(v6 + 96);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_re = __re;
  v10 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>> const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__re->_M_automaton);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_nfa = v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_results >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_results = __results;
  std::allocator<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>>::allocator((std::allocator<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string >,int> > *const)(v6 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  v11 = std::vector<std::__detail::_State<char>>::size(&this->_M_nfa->std::vector<std::__detail::_State<char>>);
  std::vector<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>>::vector(
    &this->_M_rep_count,
    v11,
    (const std::vector<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string >,int>>::allocator_type *)(v6 + 48));
  std::allocator<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string>,int>>::~allocator((std::allocator<std::pair<__gnu_cxx::__normal_iterator<char const*,std::string >,int> > *const)(v6 + 48));
  *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  v12 = std::vector<std::__detail::_State<char>>::size(&this->_M_nfa->std::vector<std::__detail::_State<char>>);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_nfa);
  v13 = std::__detail::_NFA_base::_M_start(this->_M_nfa);
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_State_info(
    &this->_M_states,
    v13,
    v12);
  if ( std::regex_constants::operator&(__flags, (std::regex_constants::match_flag_type)128) )
  {
    v14 = std::regex_constants::operator~((std::regex_constants::match_flag_type)4);
    v15 = std::regex_constants::operator~((std::regex_constants::match_flag_type)1);
    v16 = std::regex_constants::operator&(__flags, v15);
    v17 = std::regex_constants::operator&(v16, v14);
  }
  else
  {
    v17 = __flags;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    v17 = (unsigned int)__asan_report_store4(&this->_M_flags);
  }
  this->_M_flags = v17;
  if ( v22 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 86: range 000000000D1D7850-000000000D1D78C8
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_match(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_begin >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_begin);
  this->_M_current._M_current = this->_M_begin._M_current;
  return std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_main(
           this,
           _Exact_0);
};

// Line 98: range 000000000D28FBF6-000000000D28FC6E
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_search_from_first(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_begin >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_begin);
  this->_M_current._M_current = this->_M_begin._M_current;
  return std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main(
           this,
           _Prefix);
};

// Line 98: range 000000000D28FD84-000000000D28FDFC
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_search_from_first(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_begin >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_begin);
  this->_M_current._M_current = this->_M_begin._M_current;
  return std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_main(
           this,
           _Prefix_0);
};

// Line 148: range 000000000D28FB36-000000000D28FBF5
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_Match_mode __match_mode)
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
  *(_QWORD *)(v2 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  result = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main_dispatch(
             this,
             __match_mode,
             (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::__bfs)__match_mode);
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

// Line 148: range 000000000D28FCC4-000000000D28FD83
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_main(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_Match_mode __match_mode)
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
  *(_QWORD *)(v2 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_main;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  result = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_main_dispatch(
             this,
             __match_mode,
             (std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::__dfs)__match_mode);
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

// Line 158: range 000000000D449B8A-000000000D449C4E
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_is_word(
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_CharT __ch)
{
  std::regex_traits<char> *p_M_traits; // rbx
  std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::regex_traits<char>::char_class_type v4; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_re);
  p_M_traits = &std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>> const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_re->_M_automaton)->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_re);
  v3 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>> const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_re->_M_automaton);
  v4 = std::regex_traits<char>::lookup_classname<char const*>(&v3->_M_traits, "w", "", 0);
  return std::regex_traits<char>::isctype(p_M_traits, __ch, *(_DWORD *)&v4);
};

// Line 158: range 000000000D44AC74-000000000D44AD38
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_is_word(
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this,
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_CharT __ch)
{
  std::regex_traits<char> *p_M_traits; // rbx
  std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::regex_traits<char>::char_class_type v4; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_re);
  p_M_traits = &std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>> const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_re->_M_automaton)->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_re >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_re);
  v3 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>> const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_re->_M_automaton);
  v4 = std::regex_traits<char>::lookup_classname<char const*>(&v3->_M_traits, "w", "", 0);
  return std::regex_traits<char>::isctype(p_M_traits, __ch, *(_DWORD *)&v4);
};

// Line 166: range 000000000D42AFA6-000000000D42B03C
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_at_begin(
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this)
{
  std::regex_constants::match_flag_type v1; // ecx

  if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_begin) )
    return 0;
  v1 = std::regex_constants::operator|(
         (std::regex_constants::match_flag_type)1,
         (std::regex_constants::match_flag_type)128);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  return !std::regex_constants::operator&(this->_M_flags, v1);
};

// Line 166: range 000000000D42C6E0-000000000D42C771
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_at_begin(
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this)
{
  std::regex_constants::match_flag_type v1; // ecx

  if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_begin) )
    return 0;
  v1 = std::regex_constants::operator|(
         (std::regex_constants::match_flag_type)1,
         (std::regex_constants::match_flag_type)128);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  return !std::regex_constants::operator&(this->_M_flags, v1);
};

// Line 174: range 000000000D42B03E-000000000D42B0C5
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_at_end(
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this)
{
  if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_end) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  return !std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)2);
};

// Line 174: range 000000000D42C772-000000000D42C7F4
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_at_end(
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true> *const this)
{
  if ( !__gnu_cxx::operator==<char const*,std::string>(&this->_M_current, &this->_M_end) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  return !std::regex_constants::operator&(this->_M_flags, (std::regex_constants::match_flag_type)2);
};

// Line 191: range 000000000D0A9D0E-000000000D0A9D38
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::~_State_info(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const this)
{
  std::unique_ptr<bool []>::~unique_ptr(&this->_M_visited_states);
  std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::~vector(&this->_M_match_queue);
};

// Line 194: range 000000000D28F82A-000000000D28F91B
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_State_info(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const this,
        std::__detail::_StateIdT __start,
        std::size_t __n)
{
  std::unique_ptr<bool []> *p_M_visited_states; // r12
  unsigned __int64 v4; // rax
  bool *v5; // rdi
  signed __int64 i; // rcx

  std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::vector(&this->_M_match_queue);
  p_M_visited_states = &this->_M_visited_states;
  v4 = operator new[](__n);
  v5 = (bool *)v4;
  for ( i = __n - 1; i >= 0; --i )
  {
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)(v4 & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      v5 = (bool *)v4;
      v4 = __asan_report_store1(v4);
    }
    *(_BYTE *)v4++ = 0;
  }
  std::unique_ptr<bool []>::unique_ptr<bool *,std::default_delete<bool []>,void,bool>(p_M_visited_states, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_start >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_start = __start;
};

// Line 198: range 000000000D3F2744-000000000D3F2807
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_visited(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const this,
        std::__detail::_StateIdT __i)
{
  std::__add_lvalue_reference_helper<bool,true>::type v2; // rax
  _BYTE *v3; // rdx
  std::__add_lvalue_reference_helper<bool,true>::type v5; // rax
  _BYTE *v6; // rdx

  v2 = std::unique_ptr<bool []>::operator[](&this->_M_visited_states, __i);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v2);
  }
  if ( *v3 )
    return 1;
  v5 = std::unique_ptr<bool []>::operator[](&this->_M_visited_states, __i);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(v5);
  }
  *v6 = 1;
  return 0;
};

// Line 206: range 000000000D3992D6-000000000D3993AD
void __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_queue(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const this,
        std::__detail::_StateIdT __i,
        const std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *__res,
        __int64 a4,
        const std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> *a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 7 __i:206";
  *(_QWORD *)(v5 + 16) = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_State_info<std::integral_constant<bool,false>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_queue;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = __i;
  std::vector<std::pair<long,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>>::emplace_back<long &,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>> const&>(
    &this->_M_match_queue,
    (__int64 *)(v5 + 32),
    __res,
    (__int64 *)(v5 + 32),
    a5);
  if ( v9 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 224: range 000000000D28FC70-000000000D28FCC2
void __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_State_info(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const this,
        std::__detail::_StateIdT __start,
        std::size_t a3)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_start = __start;
  __gnu_cxx::__normal_iterator<char const*,std::string>::__normal_iterator(&this->_M_sol_pos);
};

// Line 228: range 000000000D3F475A-000000000D3F476C
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_visited(
        const std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const this,
        std::__detail::_StateIdT a2)
{
  return 0;
};

// Line 231: range 000000000D399CB0-000000000D399CC1
__gnu_cxx::__normal_iterator<char const*,std::string > *__cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>>::_M_get_sol_pos(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,true>::_State_info<std::integral_constant<bool,true>,std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > >> > *const this)
{
  return &this->_M_sol_pos;
};

// Line 557: range 000000000D1D7284-000000000D1D72FC
bool __cdecl std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_match(
        std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string >,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string > > >,std::regex_traits<char>,false> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_current >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_begin >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_begin);
  this->_M_current._M_current = this->_M_begin._M_current;
  return std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main(
           this,
           _Exact);
};
