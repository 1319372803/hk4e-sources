// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex_automaton.tcc

// Line 149: range 000000000D44502C-000000000D4454E1
std::__detail::_StateIdT __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_insert_backref(
        std::__detail::_NFA<std::regex_traits<char> > *const this,
        std::size_t __index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  std::__detail::_State<char> *v8; // rax
  std::__detail::_StateIdT inserted; // r14
  unsigned __int64 v10; // rax
  std::__detail::_StateIdT result; // rax
  char v12[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:165 64 8 13 __for_end:165 96 48 9 __tmp:171 176 48 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_backref;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_M_flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_M_flags);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)1024) )
    std::__throw_regex_error(_S_error_complexity, "Unexpected back-reference in polynomial mode.");
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_subexpr_count >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_subexpr_count);
  if ( __index >= this->_M_subexpr_count )
    std::__throw_regex_error(_S_error_backref, "Back-reference index exceeds current sub-expression count.");
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<long unsigned int>::iterator *)(v2 + 32) = std::vector<unsigned long>::begin(&this->_M_paren_stack);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<long unsigned int>::iterator *)(v2 + 64) = std::vector<unsigned long>::end(&this->_M_paren_stack);
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
            (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v2 + 64)) )
  {
    v5 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)(v2 + 32));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    if ( __index == *(_QWORD *)v5 )
      std::__throw_regex_error(_S_error_backref, "Back-reference referred to an opened sub-expression.");
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)&this->_M_has_backref >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_M_has_backref);
  this->_M_has_backref = 1;
  v6 = ((v2 + 96) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v2 + 96), _S_opcode_backref);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v2 + 112) = __index;
  v7 = ((v2 + 176) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  v8 = std::move<std::__detail::_State<char> &>((std::__detail::_State<char> *)(v2 + 96));
  std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v2 + 176), v8);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
               this,
               (std::__detail::_NFA<std::regex_traits<char> >::_StateT *)(v2 + 176));
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v2 + 176));
  v10 = ((v2 + 176) >> 3) + 2147450880;
  *(_DWORD *)v10 = -117901064;
  *(_WORD *)(v10 + 4) = -1800;
  std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v2 + 96));
  result = inserted;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 178: range 000000000D31F596-000000000D31F986
void __cdecl std::__detail::_NFA<std::regex_traits<char>>::_M_eliminate_dummy(
        std::__detail::_NFA<std::regex_traits<char> > *const this)
{
  __gnu_cxx::__normal_iterator<std::__detail::_State<char>*,std::vector<std::__detail::_State<char>> > *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::vector<std::__detail::_State<char>> *v4; // rdx
  std::vector<std::__detail::_State<char>> *v5; // rdx
  const std::__detail::_State<char> *v6; // rax
  std::vector<std::__detail::_State<char>> *v8; // rdx
  std::vector<std::__detail::_State<char>>::reference v9; // rax
  std::__detail::_StateIdT M_next; // rdx
  const std::__detail::_State<char> *v11; // rax
  std::vector<std::__detail::_State<char>> *v13; // rdx
  std::vector<std::__detail::_State<char>>::reference v14; // rax
  std::size_t v15; // rdx
  std::__detail::_State<char> *__it; // [rsp+18h] [rbp-88h]
  char v17[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (__gnu_cxx::__normal_iterator<std::__detail::_State<char>*,std::vector<std::__detail::_State<char>> > *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = (__gnu_cxx::__normal_iterator<std::__detail::_State<char>*,std::vector<std::__detail::_State<char>> > *)v2;
  }
  v1->_M_current = (std::__detail::_State<char> *)1102416563;
  v1[1]._M_current = (std::__detail::_State<char> *)"2 32 8 15 __for_begin:180 64 8 13 __for_end:180";
  v1[2]._M_current = (std::__detail::_State<char> *)std::__detail::_NFA<std::regex_traits<char>>::_M_eliminate_dummy;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  v4 = &this->std::vector<std::__detail::_State<char>>;
  if ( *(_BYTE *)(((unsigned __int64)&v1[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v1[4]._M_current = std::vector<std::__detail::_State<char>>::begin(v4)._M_current;
  v5 = &this->std::vector<std::__detail::_State<char>>;
  if ( *(_BYTE *)(((unsigned __int64)&v1[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v1[8]._M_current = std::vector<std::__detail::_State<char>>::end(v5)._M_current;
  while ( __gnu_cxx::operator!=<std::__detail::_State<char> *,std::vector<std::__detail::_State<char>>>(v1 + 4, v1 + 8) )
  {
    for ( __it = __gnu_cxx::__normal_iterator<std::__detail::_State<char> *,std::vector<std::__detail::_State<char>>>::operator*(v1 + 4);
          ;
          __it->_M_next = M_next )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__it->_M_next >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__it->_M_next);
      if ( __it->_M_next < 0 )
        break;
      v6 = std::vector<std::__detail::_State<char>>::operator[](
             &this->std::vector<std::__detail::_State<char>>,
             __it->_M_next);
      if ( std::__detail::_State<char>::_M_opcode(v6) != _S_opcode_dummy )
        break;
      v8 = &this->std::vector<std::__detail::_State<char>>;
      if ( *(_BYTE *)(((unsigned __int64)&__it->_M_next >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__it->_M_next);
      v9 = std::vector<std::__detail::_State<char>>::operator[](v8, __it->_M_next);
      if ( *(_BYTE *)(((unsigned __int64)&v9->_M_next >> 3) + 0x7FFF8000) )
        v9 = (std::vector<std::__detail::_State<char>>::reference)__asan_report_load8(&v9->_M_next);
      M_next = v9->_M_next;
      if ( *(_BYTE *)(((unsigned __int64)&__it->_M_next >> 3) + 0x7FFF8000) )
        __asan_report_store8();
    }
    if ( std::__detail::_State_base::_M_has_alt(__it) )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&__it->_anon_0 >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__it->_anon_0);
        if ( __it->_anon_0._anon_0._M_alt < 0 )
          break;
        v11 = std::vector<std::__detail::_State<char>>::operator[](
                &this->std::vector<std::__detail::_State<char>>,
                __it->_anon_0._M_subexpr);
        if ( std::__detail::_State<char>::_M_opcode(v11) != _S_opcode_dummy )
          break;
        v13 = &this->std::vector<std::__detail::_State<char>>;
        if ( *(_BYTE *)(((unsigned __int64)&__it->_anon_0 >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__it->_anon_0);
        v14 = std::vector<std::__detail::_State<char>>::operator[](v13, __it->_anon_0._M_subexpr);
        if ( *(_BYTE *)(((unsigned __int64)&v14->_M_next >> 3) + 0x7FFF8000) )
          v14 = (std::vector<std::__detail::_State<char>>::reference)__asan_report_load8(&v14->_M_next);
        v15 = v14->_M_next;
        if ( *(_BYTE *)(((unsigned __int64)&__it->_anon_0 >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        __it->_anon_0._M_subexpr = v15;
      }
    }
    __gnu_cxx::__normal_iterator<std::__detail::_State<char> *,std::vector<std::__detail::_State<char>>>::operator++(v1 + 4);
  }
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v1->_M_current = (std::__detail::_State<char> *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 195: range 000000000D447CD0-000000000D4488C8
std::__detail::_StateSeq<std::regex_traits<char> > *__cdecl std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(
        std::__detail::_StateSeq<std::regex_traits<char> > *retstr,
        std::__detail::_StateSeq<std::regex_traits<char> > *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  std::vector<std::__detail::_State<char>> *v8; // rdx
  const std::__detail::_State<char> *v9; // rax
  std::__detail::_NFA<std::regex_traits<char> > *M_nfa; // r14
  unsigned __int64 v11; // rax
  std::__detail::_State<char> *v12; // rax
  unsigned __int64 v13; // rax
  std::map<long int,long int>::mapped_type *v14; // rax
  std::__detail::_StateIdT M_end; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  const std::map<long int,long int>::key_type *p_M_next; // rdx
  std::_Rb_tree_iterator<std::pair<long int const,long int> >::pointer v22; // rax
  __int64 second; // rdx
  char v24; // al
  const std::map<long int,long int>::key_type *p_anon_0; // rdx
  std::_Rb_tree_iterator<std::pair<long int const,long int> >::pointer v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  std::__detail::_StateIdT v29; // r14
  unsigned __int64 v30; // rax
  std::__detail::_StateIdT v31; // rdx
  std::map<long int,long int> *__for_range; // [rsp+10h] [rbp-290h]
  __int64 __v; // [rsp+18h] [rbp-288h]
  std::__detail::_State<char> *__ref; // [rsp+20h] [rbp-280h]
  __int64 __id; // [rsp+28h] [rbp-278h]
  char v37[624]; // [rsp+30h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 7 __u:202 64 8 15 __for_begin:218 96 8 13 __for_end:218 128 8 9 <unknown> 160 8 9 <unkno"
                        "wn> 192 16 8 __it:218 224 48 7 __m:197 304 48 9 __dup:204 384 48 9 <unknown> 464 80 11 __stack:198";
  *(_QWORD *)(v2 + 16) = std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862731] = -218959118;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862737] = -202116109;
  std::map<long,long>::map((std::map<long int,long int> *const)(v2 + 224));
  std::stack<long>::stack<std::deque<long>,void>((std::stack<long int> *const)(v2 + 464));
  std::stack<long>::push((std::stack<long int> *const)(v2 + 464), &this->_M_start);
  while ( !std::stack<long>::empty((const std::stack<long int> *const)(v2 + 464)) )
  {
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
    v5 = (unsigned __int64)std::stack<long>::top((std::stack<long int> *const)(v2 + 464));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(_QWORD *)v5;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v2 + 32) = v6;
    std::stack<long>::pop((std::stack<long int> *const)(v2 + 464));
    v7 = ((v2 + 304) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_WORD *)(v7 + 4) = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = &this->_M_nfa->std::vector<std::__detail::_State<char>>;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 32);
    v9 = std::vector<std::__detail::_State<char>>::operator[](v8, *(_QWORD *)(v2 + 32));
    std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v2 + 304), v9);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    M_nfa = this->_M_nfa;
    v11 = ((v2 + 384) >> 3) + 2147450880;
    *(_DWORD *)v11 = 0;
    *(_WORD *)(v11 + 4) = 0;
    v12 = std::move<std::__detail::_State<char> &>((std::__detail::_State<char> *)(v2 + 304));
    std::__detail::_State<char>::_State((std::__detail::_State<char> *const)(v2 + 384), v12);
    __id = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state(
             M_nfa,
             (std::__detail::_NFA<std::regex_traits<char> >::_StateT *)(v2 + 384));
    std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v2 + 384));
    v13 = ((v2 + 384) >> 3) + 2147450880;
    *(_DWORD *)v13 = -117901064;
    *(_WORD *)(v13 + 4) = -1800;
    v14 = std::map<long,long>::operator[](
            (std::map<long int,long int> *const)(v2 + 224),
            (const std::map<long int,long int>::key_type *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v14 = __id;
    if ( std::__detail::_State_base::_M_has_alt((std::__detail::_State_base *const)(v2 + 304)) )
    {
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 320);
      if ( *(_QWORD *)(v2 + 320) != -1LL
        && !std::map<long,long>::count(
              (const std::map<long int,long int> *const)(v2 + 224),
              (const std::map<long int,long int>::key_type *)(v2 + 320)) )
      {
        std::stack<long>::push(
          (std::stack<long int> *const)(v2 + 464),
          (const std::stack<long int>::value_type *)(v2 + 320));
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_end);
    M_end = this->_M_end;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 32);
    if ( M_end != *(_QWORD *)(v2 + 32) )
    {
      if ( *(_BYTE *)(((v2 + 312) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 312);
      if ( *(_QWORD *)(v2 + 312) != -1LL
        && !std::map<long,long>::count(
              (const std::map<long int,long int> *const)(v2 + 224),
              (const std::map<long int,long int>::key_type *)(v2 + 312)) )
      {
        std::stack<long>::push(
          (std::stack<long int> *const)(v2 + 464),
          (const std::stack<long int>::value_type *)(v2 + 312));
      }
    }
    std::__detail::_State<char>::~_State((std::__detail::_State<char> *const)(v2 + 304));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    v18 = ((v2 + 304) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_WORD *)(v18 + 4) = -1800;
  }
  __for_range = (std::map<long int,long int> *)(v2 + 224);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<long int,long int>::iterator *)(v2 + 64) = std::map<long,long>::begin(__for_range);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<long int,long int>::iterator *)(v2 + 96) = std::map<long,long>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<long int const,long int> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_iterator<std::pair<long int const,long int> >::_Self *)(v2 + 96)) )
  {
    v19 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<long const,long>>::operator*((const std::_Rb_tree_iterator<std::pair<long int const,long int> > *const)(v2 + 64));
    if ( *(_WORD *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_load16(v19);
    v20 = *(_QWORD *)(v19 + 8);
    *(_QWORD *)(v2 + 192) = *(_QWORD *)v19;
    *(_QWORD *)(v2 + 200) = v20;
    __v = *(_QWORD *)(v2 + 200);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    __ref = std::vector<std::__detail::_State<char>>::operator[](
              &this->_M_nfa->std::vector<std::__detail::_State<char>>,
              __v);
    if ( *(_BYTE *)(((unsigned __int64)&__ref->_M_next >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__ref->_M_next);
    if ( __ref->_M_next != -1 )
    {
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      p_M_next = &__ref->_M_next;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::map<long int,long int>::iterator *)(v2 + 128) = std::map<long,long>::find(
                                                               (std::map<long int,long int> *const)(v2 + 224),
                                                               p_M_next);
      v22 = std::_Rb_tree_iterator<std::pair<long const,long>>::operator->((const std::_Rb_tree_iterator<std::pair<long int const,long int> > *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v22->second >> 3) + 0x7FFF8000) )
        v22 = (std::_Rb_tree_iterator<std::pair<long int const,long int> >::pointer)__asan_report_load8(&v22->second);
      second = v22->second;
      if ( *(_BYTE *)(((unsigned __int64)&__ref->_M_next >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      __ref->_M_next = second;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    }
    if ( !std::__detail::_State_base::_M_has_alt(__ref) )
      goto LABEL_66;
    if ( *(_BYTE *)(((unsigned __int64)&__ref->_anon_0 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__ref->_anon_0);
    if ( __ref->_anon_0._M_subexpr == -1LL )
LABEL_66:
      v24 = 0;
    else
      v24 = 1;
    if ( v24 )
    {
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      p_anon_0 = (const std::map<long int,long int>::key_type *)&__ref->_anon_0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::map<long int,long int>::iterator *)(v2 + 160) = std::map<long,long>::find(
                                                               (std::map<long int,long int> *const)(v2 + 224),
                                                               p_anon_0);
      v26 = std::_Rb_tree_iterator<std::pair<long const,long>>::operator->((const std::_Rb_tree_iterator<std::pair<long int const,long int> > *const)(v2 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&v26->second >> 3) + 0x7FFF8000) )
        v26 = (std::_Rb_tree_iterator<std::pair<long int const,long int> >::pointer)__asan_report_load8(&v26->second);
      v27 = v26->second;
      if ( *(_BYTE *)(((unsigned __int64)&__ref->_anon_0 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      __ref->_anon_0._M_subexpr = v27;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    std::_Rb_tree_iterator<std::pair<long const,long>>::operator++((std::_Rb_tree_iterator<std::pair<long int const,long int> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  v28 = (unsigned __int64)std::map<long,long>::operator[]((std::map<long int,long int> *const)(v2 + 224), &this->_M_end);
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    v28 = __asan_report_load8(v28);
  v29 = *(_QWORD *)v28;
  v30 = (unsigned __int64)std::map<long,long>::operator[](
                            (std::map<long int,long int> *const)(v2 + 224),
                            &this->_M_start);
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    v30 = __asan_report_load8(v30);
  v31 = *(_QWORD *)v30;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(retstr, this->_M_nfa, v31, v29);
  std::stack<long>::~stack((std::stack<long int> *const)(v2 + 464));
  std::map<long,long>::~map((std::map<long int,long int> *const)(v2 + 224));
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
