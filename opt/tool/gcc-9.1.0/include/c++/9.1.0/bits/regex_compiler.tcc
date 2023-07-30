// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex_compiler.tcc

// Line 65: range 000000000D28EBA6-000000000D28F208
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_Compiler(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        std::__detail::_Compiler<std::regex_traits<char> >::_IterT __b,
        std::__detail::_Compiler<std::regex_traits<char> >::_IterT __e,
        const std::regex_traits<char>::locale_type *__loc,
        std::__detail::_Compiler<std::regex_traits<char> >::_FlagT __flags)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::regex_constants::syntax_option_type v8; // eax
  std::regex_constants::syntax_option_type v9; // eax
  std::regex_constants::syntax_option_type v10; // eax
  std::regex_constants::syntax_option_type v11; // eax
  std::regex_constants::syntax_option_type v12; // eax
  std::__detail::_Compiler<std::regex_traits<char> >::_FlagT v13; // eax
  const std::locale *v14; // rdx
  std::regex_traits<char> *p_M_traits; // rcx
  const std::__detail::_Compiler<std::regex_traits<char> >::_CtypeT *v16; // rax
  unsigned __int64 v17; // rax
  std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__detail::_StateIdT v19; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v20; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v21; // rax
  std::__detail::_StateIdT inserted; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v25; // rax
  std::__detail::_StateIdT v26; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v27; // rax
  std::__detail::_StateIdT v28; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v29; // rax
  char v33[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 8 9 <unknown> 64 24 6 __r:82 128 24 9 <unknown>";
  *(_QWORD *)(v5 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_Compiler;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -234881024;
  v7[536862723] = -218959118;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  v8 = std::regex_constants::operator|(
         (std::regex_constants::syntax_option_type)16,
         (std::regex_constants::syntax_option_type)32);
  v9 = std::regex_constants::operator|(v8, (std::regex_constants::syntax_option_type)64);
  v10 = std::regex_constants::operator|(v9, (std::regex_constants::syntax_option_type)256);
  v11 = std::regex_constants::operator|(v10, (std::regex_constants::syntax_option_type)512);
  v12 = std::regex_constants::operator|(v11, (std::regex_constants::syntax_option_type)128);
  if ( std::regex_constants::operator&(__flags, v12) )
    v13 = __flags;
  else
    v13 = std::regex_constants::operator|(__flags, (std::regex_constants::syntax_option_type)16);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    v13 = (unsigned int)__asan_report_store4(this);
  }
  this->_M_flags = v13;
  std::locale::locale((std::locale *)(v5 + 32), __loc);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  std::__detail::_Scanner<char>::_Scanner(&this->_M_scanner, __b, __e, this->_M_flags, (std::locale *)(v5 + 32));
  std::locale::~locale((std::locale *)(v5 + 32));
  *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
  v14 = (const std::locale *)this;
  if ( *(_WORD *)(((unsigned __int64)&this->_M_nfa >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->_M_nfa);
  std::make_shared<std::__detail::_NFA<std::regex_traits<char>>,std::locale const&,std::regex_constants::syntax_option_type &>(
    (const std::locale *)&this->_M_nfa,
    (std::regex_constants::syntax_option_type *)__loc,
    v14,
    (std::regex_constants::syntax_option_type *)&this->_M_nfa);
  std::string::basic_string(&this->_M_value);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::stack<std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>,void>(&this->_M_stack);
  p_M_traits = &std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa)->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_traits = p_M_traits;
  v16 = (const std::__detail::_Compiler<std::regex_traits<char> >::_CtypeT *)std::use_facet<std::ctype<char>>(__loc);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_ctype = v16;
  v17 = ((v5 + 64) >> 3) + 2147450880;
  *(_WORD *)v17 = 0;
  *(_BYTE *)(v17 + 2) = 0;
  v18 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v19 = std::__detail::_NFA_base::_M_start(v18);
  v20 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v5 + 64),
    v20,
    v19);
  v21 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_begin(v21);
  std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v5 + 64),
    inserted);
  std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(this);
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_eof) )
    std::__throw_regex_error(_S_error_paren);
  v23 = ((v5 + 128) >> 3) + 2147450880;
  *(_WORD *)v23 = 0;
  *(_BYTE *)(v23 + 2) = 0;
  if ( *(char *)(((v5 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 151) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 - 105) & 7) >= *(_BYTE *)(((v5 + 151) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 128, 24LL);
  }
  std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
    (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v5 + 128),
    this);
  std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v5 + 64),
    (const std::__detail::_StateSeq<std::regex_traits<char> > *)(v5 + 128));
  v24 = ((v5 + 128) >> 3) + 2147450880;
  *(_WORD *)v24 = -1800;
  *(_BYTE *)(v24 + 2) = -8;
  v25 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v26 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_end(v25);
  std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v5 + 64),
    v26);
  v27 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v28 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_accept(v27);
  std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v5 + 64),
    v28);
  v29 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_NFA<std::regex_traits<char>>::_M_eliminate_dummy(v29);
  if ( v33 == (char *)v5 )
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
};

// Line 96: range 000000000D31EB3C-000000000D31EF87
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v6; // rax
  unsigned __int64 v7; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v8; // rdi
  std::__detail::_StateIdT v9; // rdx
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 __end; // [rsp+18h] [rbp-118h]
  char v17[272]; // [rsp+20h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 24 10 __alt1:102 96 24 10 __alt2:104 160 24 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative(this);
  while ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_or) )
  {
    v4 = ((v1 + 32) >> 3) + 2147450880;
    *(_WORD *)v4 = 0;
    *(_BYTE *)(v4 + 2) = 0;
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 55) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 87) & 7) >= *(_BYTE *)(((v1 + 55) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 32),
      this);
    std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative(this);
    v5 = ((v1 + 96) >> 3) + 2147450880;
    *(_WORD *)v5 = 0;
    *(_BYTE *)(v5 + 2) = 0;
    if ( *(char *)(((v1 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 119) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 119) & 7) >= *(_BYTE *)(((v1 + 119) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 96, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 96),
      this);
    v6 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    __end = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v6);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 32),
      __end);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 96),
      __end);
    v7 = ((v1 + 160) >> 3) + 2147450880;
    *(_WORD *)v7 = 0;
    *(_BYTE *)(v7 + 2) = 0;
    v8 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    if ( *(_BYTE *)(((v1 + 40) >> 3) + 0x7FFF8000) )
    {
      v8 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 40);
      __asan_report_load8(v1 + 40);
    }
    v9 = *(_QWORD *)(v1 + 40);
    if ( *(_BYTE *)(((v1 + 104) >> 3) + 0x7FFF8000) )
    {
      v8 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 104);
      __asan_report_load8(v1 + 104);
    }
    inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_alt(v8, *(_QWORD *)(v1 + 104), v9, 0);
    v11 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 160),
      v11,
      inserted,
      __end);
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 160));
    v12 = ((v1 + 160) >> 3) + 2147450880;
    *(_WORD *)v12 = -1800;
    *(_BYTE *)(v12 + 2) = -8;
    v13 = ((v1 + 32) >> 3) + 2147450880;
    *(_WORD *)v13 = -1800;
    *(_BYTE *)(v13 + 2) = -8;
    v14 = ((v1 + 96) >> 3) + 2147450880;
    *(_WORD *)v14 = -1800;
    *(_BYTE *)(v14 + 2) = -8;
  }
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 120: range 000000000D397B1E-000000000D397E46
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  unsigned __int64 v4; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v5; // rax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v7; // rax
  char v8[272]; // [rsp+10h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 24 8 __re:125 96 24 9 <unknown> 160 24 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_term(this) )
  {
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 55) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 87) & 7) >= *(_BYTE *)(((v1 + 55) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 32),
      this);
    std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative(this);
    if ( *(char *)(((v1 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 119) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 119) & 7) >= *(_BYTE *)(((v1 + 119) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 96, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 96),
      this);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 32),
      (const std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 96));
    v4 = ((v1 + 96) >> 3) + 2147450880;
    *(_WORD *)v4 = -1800;
    *(_BYTE *)(v4 + 2) = -8;
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (const std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 32));
  }
  else
  {
    v5 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v5);
    v7 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 160),
      v7,
      inserted);
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 160));
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 136: range 000000000D3F13D4-000000000D3F1426
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_term(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_assertion(this) )
    return 1;
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_atom(this) )
    return 0;
  while ( std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier(this) )
    ;
  return 1;
};

// Line 151: range 000000000D427518-000000000D427AC3
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_assertion(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__detail::_NFA<std::regex_traits<char> > *v4; // rax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v6; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v7; // rax
  std::__detail::_StateIdT v8; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v9; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v10; // r15
  unsigned __int64 v11; // rax
  _BYTE *v12; // rdx
  std::__detail::_StateIdT v13; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v14; // rax
  unsigned __int64 v15; // rax
  _BYTE *v16; // rdx
  std::__detail::_NFA<std::regex_traits<char> > *v17; // rax
  std::__detail::_StateIdT v18; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v19; // rdi
  bool v20; // dl
  std::__detail::_StateIdT v21; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v22; // rax
  bool result; // al
  bool __neg; // [rsp+1Fh] [rbp-191h]
  char v26[400]; // [rsp+20h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 24 9 <unknown> 96 24 9 <unknown> 160 24 9 <unknown> 224 24 9 __tmp:169 288 24 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_assertion;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862727] = -234881024;
  v3[536862728] = -218959118;
  v3[536862729] = -218103808;
  v3[536862730] = -202116109;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_line_begin) )
  {
    v4 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_line_begin(v4);
    v6 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 32),
      v6,
      inserted);
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 32));
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_line_end) )
  {
    v7 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    v8 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_line_end(v7);
    v9 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 96),
      v9,
      v8);
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 96));
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_word_bound) )
  {
    v10 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    v11 = std::string::operator[](&this->_M_value, 0LL);
    v12 = (_BYTE *)v11;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)(v11 & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v11);
    v13 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_word_bound(v10, *v12 == 110);
    v14 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 160),
      v14,
      v13);
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 160));
  }
  else
  {
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_subexpr_lookahead_begin) )
    {
      result = 0;
      goto LABEL_24;
    }
    v15 = std::string::operator[](&this->_M_value, 0LL);
    v16 = (_BYTE *)v15;
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0 && (char)(v15 & 7) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v15);
    __neg = *v16 == 110;
    std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(this);
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_subexpr_end) )
      std::__throw_regex_error(_S_error_paren, "Parenthesis is not closed.");
    if ( *(char *)(((v1 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 247) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 9) & 7) >= *(_BYTE *)(((v1 + 247) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 224, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 224),
      this);
    v17 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    v18 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_accept(v17);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 224),
      v18);
    v19 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    v20 = __neg;
    if ( *(_BYTE *)(((v1 + 232) >> 3) + 0x7FFF8000) )
    {
      v19 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 232);
      __asan_report_load8(v1 + 232);
    }
    v21 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_lookahead(v19, *(_QWORD *)(v1 + 232), v20);
    v22 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 288),
      v22,
      v21);
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 288));
  }
  result = 1;
LABEL_24:
  if ( v26 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 183: range 000000000D42876E-000000000D429A07
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool v4; // cl
  std::__detail::_NFA<std::regex_traits<char> > *v5; // rdi
  char v6; // dl
  std::__detail::_StateIdT inserted; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v8; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v9; // rdi
  char v10; // dl
  std::__detail::_StateIdT v11; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v12; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v13; // rdi
  char v14; // dl
  std::__detail::_StateIdT v15; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v16; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v17; // rax
  std::__detail::_StateIdT v18; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v19; // rax
  bool v20; // si
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v25; // rdi
  char v26; // dl
  std::__detail::_StateIdT v27; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v31; // rax
  unsigned __int64 v32; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v33; // rdi
  char v34; // cl
  std::__detail::_StateIdT v35; // rax
  unsigned __int64 v36; // rax
  std::__detail::_StateIdT v37; // r15
  std::__detail::_StateIdT v38; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v39; // rax
  unsigned __int64 v40; // rax
  std::vector<std::__detail::_State<char>> *v41; // r14
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  bool result; // al
  bool __infi; // [rsp+17h] [rbp-449h]
  __int64 __n; // [rsp+18h] [rbp-448h]
  __int64 __i; // [rsp+20h] [rbp-440h]
  __int64 __i_0; // [rsp+28h] [rbp-438h]
  __int64 __min_rep; // [rsp+30h] [rbp-430h]
  __int64 __end_0; // [rsp+38h] [rbp-428h]
  std::__detail::_State<char> *__tmp; // [rsp+40h] [rbp-420h]
  __int64 __end; // [rsp+48h] [rbp-418h]
  char v54[1040]; // [rsp+50h] [rbp-410h] BYREF

  v1 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(992LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "16 32 1 9 __neg:186 48 8 9 __alt:277 80 16 10 __init:187 112 24 7 __e:197 176 24 7 __r:198 240 2"
                        "4 7 __e:207 304 24 7 __e:215 368 24 7 __r:217 432 24 7 __r:232 496 24 7 __e:233 560 24 9 <unknow"
                        "n> 624 24 9 __tmp:257 688 24 7 __s:258 752 24 9 __tmp:276 816 24 9 <unknown> 880 80 11 __stack:273";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61953;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862726] = -218959360;
  v3[536862727] = 62194;
  v3[536862728] = -218959360;
  v3[536862729] = 62194;
  v3[536862730] = -218959360;
  v3[536862731] = 62194;
  v3[536862732] = -218959360;
  v3[536862733] = 62194;
  v3[536862734] = -218959360;
  v3[536862735] = 62194;
  v3[536862736] = -218959360;
  v3[536862737] = 62194;
  v3[536862738] = -218959360;
  v3[536862739] = 62194;
  v3[536862740] = -218959360;
  v3[536862741] = 62194;
  v3[536862742] = -218959360;
  v3[536862743] = 62194;
  v3[536862744] = -218959360;
  v3[536862745] = 62194;
  v3[536862746] = -218959360;
  v3[536862747] = 62194;
  v3[536862750] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  v4 = std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) != 0;
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v1 + 32);
  *(_BYTE *)(v1 + 32) = v4;
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 80) = this;
  if ( *(_BYTE *)(((v1 + 88) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 88) = v1 + 32;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_closure0) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier(void)::{lambda(void)#1}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_quantifier::<lambda()> *const)(v1 + 80));
    if ( *(char *)(((v1 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 135) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 121) & 7) >= *(_BYTE *)(((v1 + 135) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 112, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 112),
      this);
    v5 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0 )
    {
      v5 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 32);
      __asan_report_load1(v1 + 32);
    }
    v6 = *(_BYTE *)(v1 + 32);
    if ( *(_BYTE *)(((v1 + 120) >> 3) + 0x7FFF8000) )
    {
      v5 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 120);
      __asan_report_load8(v1 + 120);
    }
    inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat(v5, -1LL, *(_QWORD *)(v1 + 120), v6);
    v8 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 176),
      v8,
      inserted);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 112),
      (const std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 176));
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (const std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 176));
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_closure1) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier(void)::{lambda(void)#1}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_quantifier::<lambda()> *const)(v1 + 80));
    if ( *(char *)(((v1 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 263) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 39) & 7) >= *(_BYTE *)(((v1 + 263) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 240, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 240),
      this);
    v9 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0 )
    {
      v9 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 32);
      __asan_report_load1(v1 + 32);
    }
    v10 = *(_BYTE *)(v1 + 32);
    if ( *(_BYTE *)(((v1 + 248) >> 3) + 0x7FFF8000) )
    {
      v9 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 248);
      __asan_report_load8(v1 + 248);
    }
    v11 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat(v9, -1LL, *(_QWORD *)(v1 + 248), v10);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 240),
      v11);
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (const std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 240));
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_opt) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier(void)::{lambda(void)#1}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_quantifier::<lambda()> *const)(v1 + 80));
    if ( *(char *)(((v1 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 327) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 103) & 7) >= *(_BYTE *)(((v1 + 327) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 304, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 304),
      this);
    v12 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    __end = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v12);
    v13 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0 )
    {
      v13 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 32);
      __asan_report_load1(v1 + 32);
    }
    v14 = *(_BYTE *)(v1 + 32);
    if ( *(_BYTE *)(((v1 + 312) >> 3) + 0x7FFF8000) )
    {
      v13 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 312);
      __asan_report_load8(v1 + 312);
    }
    v15 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat(v13, -1LL, *(_QWORD *)(v1 + 312), v14);
    v16 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 368),
      v16,
      v15);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 304),
      __end);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 368),
      __end);
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (const std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 368));
  }
  else
  {
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_interval_begin) )
    {
      result = 0;
      goto LABEL_97;
    }
    if ( std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::empty(&this->_M_stack) )
      std::__throw_regex_error(_S_error_badrepeat, "Nothing to repeat before a quantifier.");
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_dup_count) )
      std::__throw_regex_error(_S_error_badbrace, "Unexpected token in brace expression.");
    if ( *(char *)(((v1 + 432) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 455) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 80 + 23) & 7) >= *(_BYTE *)(((v1 + 455) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 432, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 432),
      this);
    v17 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    v18 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v17);
    v19 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 496),
      v19,
      v18);
    __min_rep = std::__detail::_Compiler<std::regex_traits<char>>::_M_cur_int_value(this, 10);
    __infi = 0;
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_comma) )
    {
      if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_dup_count) )
        __n = std::__detail::_Compiler<std::regex_traits<char>>::_M_cur_int_value(this, 10) - __min_rep;
      else
        __infi = 1;
    }
    else
    {
      __n = 0LL;
    }
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_interval_end) )
      std::__throw_regex_error(_S_error_brace, "Unexpected end of brace expression.");
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(v1 + 32);
    v20 = *(_BYTE *)(v1 + 32) && std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_opt);
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v1 + 32);
    *(_BYTE *)(v1 + 32) = v20;
    for ( __i = 0LL; __i < __min_rep; ++__i )
    {
      v21 = ((v1 + 560) >> 3) + 2147450880;
      *(_WORD *)v21 = 0;
      *(_BYTE *)(v21 + 2) = 0;
      if ( *(char *)(((v1 + 560) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 583) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 32 + 103) & 7) >= *(_BYTE *)(((v1 + 583) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 560, 24LL);
      }
      std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(
        (std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 560),
        (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 432));
      std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
        (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 496),
        (const std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 560));
      v22 = ((v1 + 560) >> 3) + 2147450880;
      *(_WORD *)v22 = -1800;
      *(_BYTE *)(v22 + 2) = -8;
    }
    if ( __infi )
    {
      v23 = ((v1 + 624) >> 3) + 2147450880;
      *(_WORD *)v23 = 0;
      *(_BYTE *)(v23 + 2) = 0;
      if ( *(char *)(((v1 + 624) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 647) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 121) & 7) >= *(_BYTE *)(((v1 + 647) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 624, 24LL);
      }
      std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(
        (std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 624),
        (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 432));
      v24 = ((v1 + 688) >> 3) + 2147450880;
      *(_WORD *)v24 = 0;
      *(_BYTE *)(v24 + 2) = 0;
      v25 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
      if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0 )
      {
        v25 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 32);
        __asan_report_load1(v1 + 32);
      }
      v26 = *(_BYTE *)(v1 + 32);
      if ( *(_BYTE *)(((v1 + 632) >> 3) + 0x7FFF8000) )
      {
        v25 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 632);
        __asan_report_load8(v1 + 632);
      }
      v27 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat(v25, -1LL, *(_QWORD *)(v1 + 632), v26);
      v28 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
      std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
        (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 688),
        v28,
        v27);
      std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
        (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 624),
        (const std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 688));
      std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
        (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 496),
        (const std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 688));
      v29 = ((v1 + 624) >> 3) + 2147450880;
      *(_WORD *)v29 = -1800;
      *(_BYTE *)(v29 + 2) = -8;
      v30 = ((v1 + 688) >> 3) + 2147450880;
      *(_WORD *)v30 = -1800;
      *(_BYTE *)(v30 + 2) = -8;
    }
    else
    {
      if ( __n < 0 )
        std::__throw_regex_error(_S_error_badbrace, "Invalid range in brace expression.");
      v31 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
      __end_0 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v31);
      v32 = ((v1 + 880) >> 3) + 2147450880;
      *(_DWORD *)v32 = 0;
      *(_DWORD *)(v32 + 4) = 0;
      *(_WORD *)(v32 + 8) = 0;
      std::stack<long>::stack<std::deque<long>,void>((std::stack<long int> *const)(v1 + 880));
      for ( __i_0 = 0LL; __i_0 < __n; ++__i_0 )
      {
        if ( *(char *)(((v1 + 752) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 775) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 32 + 39) & 7) >= *(_BYTE *)(((v1 + 775) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 752, 24LL);
        }
        std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(
          (std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 752),
          (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 432));
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 0;
        v33 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
        if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0 )
        {
          v33 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 32);
          __asan_report_load1(v1 + 32);
        }
        v34 = *(_BYTE *)(v1 + 32);
        if ( *(_BYTE *)(((v1 + 760) >> 3) + 0x7FFF8000) )
        {
          v33 = (std::__detail::_NFA<std::regex_traits<char> > *)(v1 + 760);
          __asan_report_load8(v1 + 760);
        }
        v35 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat(v33, *(_QWORD *)(v1 + 760), __end_0, v34);
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(v1 + 48) = v35;
        std::stack<long>::push(
          (std::stack<long int> *const)(v1 + 880),
          (const std::stack<long int>::value_type *)(v1 + 48));
        v36 = ((v1 + 816) >> 3) + 2147450880;
        *(_WORD *)v36 = 0;
        *(_BYTE *)(v36 + 2) = 0;
        if ( *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v1 + 768);
        v37 = *(_QWORD *)(v1 + 768);
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v1 + 48);
        v38 = *(_QWORD *)(v1 + 48);
        v39 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
        std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
          (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 816),
          v39,
          v38,
          v37);
        std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
          (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 496),
          (const std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 816));
        v40 = ((v1 + 816) >> 3) + 2147450880;
        *(_WORD *)v40 = -1800;
        *(_BYTE *)(v40 + 2) = -8;
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
        (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 496),
        __end_0);
      while ( !std::stack<long>::empty((const std::stack<long int> *const)(v1 + 880)) )
      {
        v41 = &std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa)->std::vector<std::__detail::_State<char>>;
        v42 = (unsigned __int64)std::stack<long>::top((std::stack<long int> *const)(v1 + 880));
        if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
          v42 = __asan_report_load8(v42);
        __tmp = std::vector<std::__detail::_State<char>>::operator[](v41, *(_QWORD *)v42);
        std::stack<long>::pop((std::stack<long int> *const)(v1 + 880));
        std::swap<long>(&__tmp->_M_next, (__int64 *)&__tmp->_anon_0);
      }
      std::stack<long>::~stack((std::stack<long int> *const)(v1 + 880));
      v43 = ((v1 + 880) >> 3) + 2147450880;
      *(_DWORD *)v43 = -117901064;
      *(_DWORD *)(v43 + 4) = -117901064;
      *(_WORD *)(v43 + 8) = -1800;
    }
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (const std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 496));
  }
  result = 1;
LABEL_97:
  if ( v54 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8074) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8078) = -168430091;
  }
  return result;
};

// Line 187: range 000000000D4285E6-000000000D428751
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier(void)::{lambda(void)#1}::operator()(
        const std::__detail::_Compiler<std::regex_traits<char> >::_M_quantifier::<lambda()> *const this)
{
  bool *neg; // rdx
  bool *v2; // rdi
  bool *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::empty(&this->__this->_M_stack) )
    std::__throw_regex_error(_S_error_badrepeat, "Nothing to repeat before a quantifier.");
  if ( *(_BYTE *)(((unsigned __int64)&this->____neg >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->____neg);
  neg = this->____neg;
  if ( *(_BYTE *)(((unsigned __int64)neg >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->____neg & 7) >= *(_BYTE *)(((unsigned __int64)neg >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->____neg);
  }
  if ( !*neg )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this->__this, _S_token_opt) )
    LOBYTE(v2) = 1;
  else
LABEL_14:
    LOBYTE(v2) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->____neg >> 3) + 0x7FFF8000) )
  {
    LOBYTE(v2) = (_BYTE)this + 8;
    __asan_report_load8(&this->____neg);
  }
  v3 = this->____neg;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->____neg & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    v2 = this->____neg;
    __asan_report_store1(v2);
  }
  *v3 = (char)v2;
};

// Line 313: range 000000000D427AC4-000000000D4285E5
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_atom(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__detail::_NFA<std::regex_traits<char> > *v4; // r15
  int v5; // eax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v7; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v8; // rax
  std::__detail::_StateIdT v9; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v10; // rax
  unsigned __int64 v11; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v12; // rax
  std::__detail::_StateIdT v13; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v14; // rax
  unsigned __int64 v15; // rax
  std::__detail::_NFA<std::regex_traits<char> > *v16; // rax
  std::__detail::_StateIdT v17; // rax
  bool result; // al
  char v19[400]; // [rsp+10h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 24 9 <unknown> 96 24 7 __r:332 160 24 9 <unknown> 224 24 7 __r:342 288 24 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_atom;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862727] = -234881024;
  v3[536862728] = -218959118;
  v3[536862729] = -218103808;
  v3[536862730] = -202116109;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_anychar) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)1) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(this);
        }
        if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)8) )
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<true,true>(this);
        else
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<true,false>(this);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(this);
        }
        if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)8) )
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<false,true>(this);
        else
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<false,false>(this);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)1) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(this);
        }
        if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)8) )
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,true>(this);
        else
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,false>(this);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(this);
        }
        if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)8) )
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,true>(this);
        else
          std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,false>(this);
      }
    }
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)1) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)8) )
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,true>(this);
      else
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,false>(this);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)8) )
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,true>(this);
      else
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,false>(this);
    }
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_backref) )
  {
    v4 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    v5 = std::__detail::_Compiler<std::regex_traits<char>>::_M_cur_int_value(this, 10);
    inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_backref(v4, v5);
    v7 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 32),
      v7,
      inserted);
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 32));
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_quoted_class) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)1) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)8) )
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,true>(this);
      else
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,false>(this);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)8) )
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,true>(this);
      else
        std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,false>(this);
    }
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_subexpr_no_group_begin) )
  {
    v8 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    v9 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(v8);
    v10 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 96),
      v10,
      v9);
    std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(this);
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_subexpr_end) )
      std::__throw_regex_error(_S_error_paren, "Parenthesis is not closed.");
    if ( *(char *)(((v1 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 183) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 73) & 7) >= *(_BYTE *)(((v1 + 183) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 160, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 160),
      this);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 96),
      (const std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 160));
    v11 = ((v1 + 160) >> 3) + 2147450880;
    *(_WORD *)v11 = -1800;
    *(_BYTE *)(v11 + 2) = -8;
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (const std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 96));
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_subexpr_begin) )
  {
    v12 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    v13 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_begin(v12);
    v14 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 224),
      v14,
      v13);
    std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(this);
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_subexpr_end) )
      std::__throw_regex_error(_S_error_paren, "Parenthesis is not closed.");
    if ( *(char *)(((v1 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 311) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 55) & 7) >= *(_BYTE *)(((v1 + 311) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 288, 24LL);
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_pop(
      (std::__detail::_Compiler<std::regex_traits<char> >::_StateSeqT *)(v1 + 288),
      this);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 224),
      (const std::__detail::_StateSeq<std::regex_traits<char> > *)(v1 + 288));
    v15 = ((v1 + 288) >> 3) + 2147450880;
    *(_WORD *)v15 = -1800;
    *(_BYTE *)(v15 + 2) = -8;
    v16 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
    v17 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_end(v16);
    std::__detail::_StateSeq<std::regex_traits<char>>::_M_append(
      (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 224),
      v17);
    std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
      &this->_M_stack,
      (const std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 224));
  }
  else if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_bracket_expression(this) )
  {
    result = 0;
    goto LABEL_79;
  }
  result = 1;
LABEL_79:
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 358: range 000000000D4477FC-000000000D44798E
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_bracket_expression(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  bool __neg; // [rsp+1Fh] [rbp-1h]

  __neg = std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_neg_begin);
  if ( !__neg && !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_begin) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)1) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)8) )
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,true>(this, __neg);
    else
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,false>(this, __neg);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)8) )
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,true>(this, __neg);
    else
      std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,false>(this, __neg);
  }
  return 1;
};

// Line 373: range 000000000D44384C-000000000D443ACF
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<false,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__detail::_NFA<std::regex_traits<char> > *v4; // r15
  const std::regex_traits<char> *M_traits; // rsi
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v7; // rax
  unsigned __int64 v8; // rax
  char v9[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<false,false>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v4 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false>::_AnyMatcher(
    (std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false> *const)(v1 + 48),
    M_traits);
  if ( *(char *)(((v1 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v1 + 48);
  std::function<bool ()(char)>::function<std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    (std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,false>)M_traits);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v4,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v7 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v7,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v8 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v8 = -1800;
  *(_BYTE *)(v8 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 373: range 000000000D443AD0-000000000D443D5D
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<false,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_NFA<std::regex_traits<char> > *v4; // r15
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v6; // rax
  unsigned __int64 v7; // rax
  char v8[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<false,true>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v4 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true>::_AnyMatcher(
    (std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true> *const)(v1 + 32),
    this->_M_traits);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 32);
  std::function<bool ()(char)>::function<std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    *(std::__detail::_AnyMatcher<std::regex_traits<char>,true,false,true> *)(v1 + 32));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v4,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v6 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v6,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v7 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v7 = -1800;
  *(_BYTE *)(v7 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 373: range 000000000D443D5E-000000000D443FEB
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<true,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_NFA<std::regex_traits<char> > *v4; // r15
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v6; // rax
  unsigned __int64 v7; // rax
  char v8[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<true,false>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v4 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false>::_AnyMatcher(
    (std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false> *const)(v1 + 32),
    this->_M_traits);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 32);
  std::function<bool ()(char)>::function<std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    *(std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,false> *)(v1 + 32));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v4,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v6 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v6,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v7 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v7 = -1800;
  *(_BYTE *)(v7 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 373: range 000000000D443FEC-000000000D444279
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<true,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_NFA<std::regex_traits<char> > *v4; // r15
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v6; // rax
  unsigned __int64 v7; // rax
  char v8[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_ecma<true,true>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v4 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true>::_AnyMatcher(
    (std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true> *const)(v1 + 32),
    this->_M_traits);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 32);
  std::function<bool ()(char)>::function<std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    *(std::__detail::_AnyMatcher<std::regex_traits<char>,true,true,true> *)(v1 + 32));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v4,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v6 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v6,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v7 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v7 = -1800;
  *(_BYTE *)(v7 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 385: range 000000000D442E1E-000000000D4430A1
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__detail::_NFA<std::regex_traits<char> > *v4; // r15
  const std::regex_traits<char> *M_traits; // rsi
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v7; // rax
  unsigned __int64 v8; // rax
  char v9[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,false>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v4 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>::_AnyMatcher(
    (std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false> *const)(v1 + 48),
    M_traits);
  if ( *(char *)(((v1 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v1 + 48);
  std::function<bool ()(char)>::function<std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    (std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>)M_traits);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v4,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v7 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v7,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v8 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v8 = -1800;
  *(_BYTE *)(v8 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 385: range 000000000D4430A2-000000000D44332F
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_NFA<std::regex_traits<char> > *v4; // r15
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v6; // rax
  unsigned __int64 v7; // rax
  char v8[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,true>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v4 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true>::_AnyMatcher(
    (std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true> *const)(v1 + 32),
    this->_M_traits);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 32);
  std::function<bool ()(char)>::function<std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    *(std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,true> *)(v1 + 32));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v4,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v6 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v6,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v7 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v7 = -1800;
  *(_BYTE *)(v7 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 385: range 000000000D443330-000000000D4435BD
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_NFA<std::regex_traits<char> > *v4; // r15
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v6; // rax
  unsigned __int64 v7; // rax
  char v8[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,false>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v4 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>::_AnyMatcher(
    (std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false> *const)(v1 + 32),
    this->_M_traits);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 32);
  std::function<bool ()(char)>::function<std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    *(std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,false> *)(v1 + 32));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v4,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v6 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v6,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v7 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v7 = -1800;
  *(_BYTE *)(v7 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 385: range 000000000D4435BE-000000000D44384B
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_NFA<std::regex_traits<char> > *v4; // r15
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v6; // rax
  unsigned __int64 v7; // rax
  char v8[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,true>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v4 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>::_AnyMatcher(
    (std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true> *const)(v1 + 32),
    this->_M_traits);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 32);
  std::function<bool ()(char)>::function<std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    *(std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true> *)(v1 + 32));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v4,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v6 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v6,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v7 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v7 = -1800;
  *(_BYTE *)(v7 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 397: range 000000000D444342-000000000D44463D
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::regex_traits<char> *M_traits; // r14
  unsigned __int64 v5; // rax
  char *v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // al
  std::__detail::_StateIdT inserted; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v13; // rax
  unsigned __int64 v14; // rax
  std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // [rsp+10h] [rbp-100h]
  char v16[240]; // [rsp+20h] [rbp-F0h] BYREF
  std::__detail::_CharMatcher<std::regex_traits<char>,false,false> v17; // 0:si.2

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 2 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,false>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234688015;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v15 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v5 = std::string::operator[](&this->_M_value, 0LL);
  v6 = (char *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v5);
  v7 = *v6;
  v8 = v7;
  std::__detail::_CharMatcher<std::regex_traits<char>,false,false>::_CharMatcher(
    (std::__detail::_CharMatcher<std::regex_traits<char>,false,false> *const)(v1 + 48),
    v7,
    M_traits);
  v11 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 1 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_load2(v1 + 48, v8, v1 + 48, v9, v10);
  }
  v17 = *(std::__detail::_CharMatcher<std::regex_traits<char>,false,false> *)(v1 + 48);
  std::function<bool ()(char)>::function<std::__detail::_CharMatcher<std::regex_traits<char>,false,false>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    v17);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v15,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v13 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v13,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v14 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v14 = -1800;
  *(_BYTE *)(v14 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 397: range 000000000D44463E-000000000D444934
// local variable allocation has failed, the output may be wrong!
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::regex_traits<char> *M_traits; // r14
  unsigned __int64 v5; // rax
  std::__detail::_CharMatcher<std::regex_traits<char>,false,true>::_CharT *v6; // rdx
  __int64 v7; // rdx OVERLAPPED
  __int64 v8; // rsi
  std::__detail::_StateIdT inserted; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v10; // rax
  unsigned __int64 v11; // rax
  std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // [rsp+10h] [rbp-100h]
  char v13[240]; // [rsp+20h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,true>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v12 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v5 = std::string::operator[](&this->_M_value, 0LL);
  v6 = (std::__detail::_CharMatcher<std::regex_traits<char>,false,true>::_CharT *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v5);
  std::__detail::_CharMatcher<std::regex_traits<char>,false,true>::_CharMatcher(
    (std::__detail::_CharMatcher<std::regex_traits<char>,false,true> *const)(v1 + 32),
    *v6,
    M_traits);
  if ( *(_WORD *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v1 + 32);
  v7 = *(_QWORD *)(v1 + 40);
  v8 = *(_QWORD *)(v1 + 32);
  std::function<bool ()(char)>::function<std::__detail::_CharMatcher<std::regex_traits<char>,false,true>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    *(std::__detail::_CharMatcher<std::regex_traits<char>,false,true> *)(&v7 - 1));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v12,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v10 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v10,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v11 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v11 = -1800;
  *(_BYTE *)(v11 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 397: range 000000000D444936-000000000D444C2C
// local variable allocation has failed, the output may be wrong!
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::regex_traits<char> *M_traits; // r14
  unsigned __int64 v5; // rax
  std::__detail::_CharMatcher<std::regex_traits<char>,true,false>::_CharT *v6; // rdx
  __int64 v7; // rdx OVERLAPPED
  __int64 v8; // rsi
  std::__detail::_StateIdT inserted; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v10; // rax
  unsigned __int64 v11; // rax
  std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // [rsp+10h] [rbp-100h]
  char v13[240]; // [rsp+20h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,false>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v12 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v5 = std::string::operator[](&this->_M_value, 0LL);
  v6 = (std::__detail::_CharMatcher<std::regex_traits<char>,true,false>::_CharT *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v5);
  std::__detail::_CharMatcher<std::regex_traits<char>,true,false>::_CharMatcher(
    (std::__detail::_CharMatcher<std::regex_traits<char>,true,false> *const)(v1 + 32),
    *v6,
    M_traits);
  if ( *(_WORD *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v1 + 32);
  v7 = *(_QWORD *)(v1 + 40);
  v8 = *(_QWORD *)(v1 + 32);
  std::function<bool ()(char)>::function<std::__detail::_CharMatcher<std::regex_traits<char>,true,false>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    *(std::__detail::_CharMatcher<std::regex_traits<char>,true,false> *)(&v7 - 1));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v12,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v10 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v10,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v11 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v11 = -1800;
  *(_BYTE *)(v11 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 397: range 000000000D444C2E-000000000D444F24
// local variable allocation has failed, the output may be wrong!
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::regex_traits<char> *M_traits; // r14
  unsigned __int64 v5; // rax
  std::__detail::_CharMatcher<std::regex_traits<char>,true,true>::_CharT *v6; // rdx
  __int64 v7; // rdx OVERLAPPED
  __int64 v8; // rsi
  std::__detail::_StateIdT inserted; // r14
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v10; // rax
  unsigned __int64 v11; // rax
  std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // [rsp+10h] [rbp-100h]
  char v13[240]; // [rsp+20h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 9 <unknown> 64 24 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,true>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  v12 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  v5 = std::string::operator[](&this->_M_value, 0LL);
  v6 = (std::__detail::_CharMatcher<std::regex_traits<char>,true,true>::_CharT *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v5);
  std::__detail::_CharMatcher<std::regex_traits<char>,true,true>::_CharMatcher(
    (std::__detail::_CharMatcher<std::regex_traits<char>,true,true> *const)(v1 + 32),
    *v6,
    M_traits);
  if ( *(_WORD *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v1 + 32);
  v7 = *(_QWORD *)(v1 + 40);
  v8 = *(_QWORD *)(v1 + 32);
  std::function<bool ()(char)>::function<std::__detail::_CharMatcher<std::regex_traits<char>,true,true>,void,void>(
    (std::function<bool(char)> *const)(v1 + 128),
    *(std::__detail::_CharMatcher<std::regex_traits<char>,true,true> *)(&v7 - 1));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v12,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 128));
  v10 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 64),
    v10,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 64));
  v11 = ((v1 + 64) >> 3) + 2147450880;
  *(_WORD *)v11 = -1800;
  *(_BYTE *)(v11 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 128));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 409: range 000000000D44592C-000000000D445E36
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  const std::regex_traits<char> *M_traits; // r14
  const std::ctype<char> *M_ctype; // r15
  unsigned __int64 v6; // rax
  char *v7; // rdx
  bool v8; // al
  std::__detail::_NFA<std::regex_traits<char> > *v9; // r15
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *v10; // rax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  char v15[656]; // [rsp+10h] [rbp-290h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(608LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 24 9 <unknown> 96 32 9 <unknown> 160 152 13 __matcher:413 384 152 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,false>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862729] = -234881024;
  v3[536862730] = -218959118;
  v3[536862731] = -218959118;
  v3[536862736] = -218103808;
  v3[536862737] = -202116109;
  v3[536862738] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_ctype);
  M_ctype = this->_M_ctype;
  v6 = std::string::operator[](&this->_M_value, 0LL);
  v7 = (char *)v6;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v6);
  v8 = std::ctype<char>::is(M_ctype, 0x100u, *v7);
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v1 + 160),
    v8,
    M_traits);
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_character_class(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v1 + 160),
    &this->_M_value,
    0);
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_ready((std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v1 + 160));
  v9 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v10 = std::move<std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &>((std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)(v1 + 160));
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v1 + 384),
    v10);
  std::function<bool ()(char)>::function<std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>,void,void>(
    (std::function<bool(char)> *const)(v1 + 96),
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)(v1 + 384));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v9,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 96));
  v12 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 32),
    v12,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 32));
  v13 = ((v1 + 32) >> 3) + 2147450880;
  *(_WORD *)v13 = -1800;
  *(_BYTE *)(v13 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v1 + 384));
  v14 = ((v1 + 384) >> 3) + 2147450880;
  *(_DWORD *)v14 = -117901064;
  *(_DWORD *)(v14 + 4) = -117901064;
  *(_DWORD *)(v14 + 8) = -117901064;
  *(_DWORD *)(v14 + 12) = -117901064;
  *(_WORD *)(v14 + 16) = -1800;
  *(_BYTE *)(v14 + 18) = -8;
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v1 + 160));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8044) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 409: range 000000000D446212-000000000D446713
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::regex_traits<char> *M_traits; // r14
  const std::ctype<char> *M_ctype; // r15
  unsigned __int64 v6; // rax
  char *v7; // rdx
  bool v8; // al
  std::__detail::_NFA<std::regex_traits<char> > *v9; // r15
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *v10; // rax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v12; // rax
  unsigned __int64 v13; // rax
  _DWORD *v14; // rax
  char v15[656]; // [rsp+10h] [rbp-290h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(608LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 24 9 <unknown> 96 32 9 <unknown> 160 160 13 __matcher:413 384 160 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,true>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862730] = -218959118;
  v3[536862731] = -218959118;
  v3[536862737] = -202116109;
  v3[536862738] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_ctype);
  M_ctype = this->_M_ctype;
  v6 = std::string::operator[](&this->_M_value, 0LL);
  v7 = (char *)v6;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v6);
  v8 = std::ctype<char>::is(M_ctype, 0x100u, *v7);
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v1 + 160),
    v8,
    M_traits);
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_character_class(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v1 + 160),
    &this->_M_value,
    0);
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_ready((std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v1 + 160));
  v9 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v10 = std::move<std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &>((std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)(v1 + 160));
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v1 + 384),
    v10);
  std::function<bool ()(char)>::function<std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>,void,void>(
    (std::function<bool(char)> *const)(v1 + 96),
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)(v1 + 384));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v9,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 96));
  v12 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 32),
    v12,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 32));
  v13 = ((v1 + 32) >> 3) + 2147450880;
  *(_WORD *)v13 = -1800;
  *(_BYTE *)(v13 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v1 + 384));
  v14 = (_DWORD *)(((v1 + 384) >> 3) + 2147450880);
  *v14 = -117901064;
  v14[1] = -117901064;
  v14[2] = -117901064;
  v14[3] = -117901064;
  v14[4] = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v1 + 160));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 409: range 000000000D446A86-000000000D446F87
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::regex_traits<char> *M_traits; // r14
  const std::ctype<char> *M_ctype; // r15
  unsigned __int64 v6; // rax
  char *v7; // rdx
  bool v8; // al
  std::__detail::_NFA<std::regex_traits<char> > *v9; // r15
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *v10; // rax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v12; // rax
  unsigned __int64 v13; // rax
  _DWORD *v14; // rax
  char v15[656]; // [rsp+10h] [rbp-290h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(608LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 24 9 <unknown> 96 32 9 <unknown> 160 160 13 __matcher:413 384 160 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,false>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862730] = -218959118;
  v3[536862731] = -218959118;
  v3[536862737] = -202116109;
  v3[536862738] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_ctype);
  M_ctype = this->_M_ctype;
  v6 = std::string::operator[](&this->_M_value, 0LL);
  v7 = (char *)v6;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v6);
  v8 = std::ctype<char>::is(M_ctype, 0x100u, *v7);
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v1 + 160),
    v8,
    M_traits);
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_character_class(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v1 + 160),
    &this->_M_value,
    0);
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_ready((std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v1 + 160));
  v9 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v10 = std::move<std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &>((std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)(v1 + 160));
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v1 + 384),
    v10);
  std::function<bool ()(char)>::function<std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>,void,void>(
    (std::function<bool(char)> *const)(v1 + 96),
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)(v1 + 384));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v9,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 96));
  v12 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 32),
    v12,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 32));
  v13 = ((v1 + 32) >> 3) + 2147450880;
  *(_WORD *)v13 = -1800;
  *(_BYTE *)(v13 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v1 + 384));
  v14 = (_DWORD *)(((v1 + 384) >> 3) + 2147450880);
  *v14 = -117901064;
  v14[1] = -117901064;
  v14[2] = -117901064;
  v14[3] = -117901064;
  v14[4] = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v1 + 160));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 409: range 000000000D4472FA-000000000D4477FB
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::regex_traits<char> *M_traits; // r14
  const std::ctype<char> *M_ctype; // r15
  unsigned __int64 v6; // rax
  char *v7; // rdx
  bool v8; // al
  std::__detail::_NFA<std::regex_traits<char> > *v9; // r15
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *v10; // rax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v12; // rax
  unsigned __int64 v13; // rax
  _DWORD *v14; // rax
  char v15[656]; // [rsp+10h] [rbp-290h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(608LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 24 9 <unknown> 96 32 9 <unknown> 160 160 13 __matcher:413 384 160 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,true>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862730] = -218959118;
  v3[536862731] = -218959118;
  v3[536862737] = -202116109;
  v3[536862738] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  M_traits = this->_M_traits;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_ctype);
  M_ctype = this->_M_ctype;
  v6 = std::string::operator[](&this->_M_value, 0LL);
  v7 = (char *)v6;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v6);
  v8 = std::ctype<char>::is(M_ctype, 0x100u, *v7);
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v1 + 160),
    v8,
    M_traits);
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_character_class(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v1 + 160),
    &this->_M_value,
    0);
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_ready((std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v1 + 160));
  v9 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v10 = std::move<std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &>((std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)(v1 + 160));
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v1 + 384),
    v10);
  std::function<bool ()(char)>::function<std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>,void,void>(
    (std::function<bool(char)> *const)(v1 + 96),
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)(v1 + 384));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v9,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v1 + 96));
  v12 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v1 + 32),
    v12,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v1 + 32));
  v13 = ((v1 + 32) >> 3) + 2147450880;
  *(_WORD *)v13 = -1800;
  *(_BYTE *)(v13 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v1 + 384));
  v14 = (_DWORD *)(((v1 + 384) >> 3) + 2147450880);
  *v14 = -117901064;
  v14[1] = -117901064;
  v14[2] = -117901064;
  v14[3] = -117901064;
  v14[4] = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v1 + 160));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 424: range 000000000D4577A2-000000000D457F04
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        bool __neg)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  char *v6; // rdx
  char v7; // cl
  std::__detail::_NFA<std::regex_traits<char> > *v8; // r15
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *v9; // rax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  char v14[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 2 15 __last_char:428 64 24 9 <unknown> 128 32 9 <unknown> 192 152 13 __matcher:427 416 152 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,false>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -218959118;
  v4[536862737] = -218103808;
  v4[536862738] = -202116109;
  v4[536862739] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v2 + 192),
    __neg,
    this->_M_traits);
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v2 + 48);
  *(_WORD *)(v2 + 48) = 0;
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( !std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) )
  {
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
    {
      if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v2 + 48);
      *(_BYTE *)(v2 + 48) = 1;
      v5 = std::string::operator[](&this->_M_value, 0LL);
      v6 = (char *)v5;
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v5);
      v7 = *v6;
      if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v2 + 49);
      }
      *(_BYTE *)(v2 + 49) = v7;
    }
    else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
    {
      if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v2 + 48);
      *(_BYTE *)(v2 + 48) = 1;
      if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v2 + 49);
      }
      *(_BYTE *)(v2 + 49) = 45;
    }
  }
  while ( std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(
            this,
            (std::pair<bool,char> *)(v2 + 48),
            (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)(v2 + 192)) )
    ;
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 48);
  if ( *(_BYTE *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v2 + 49);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_char(
      (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v2 + 192),
      *(_BYTE *)(v2 + 49));
  }
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_ready((std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v2 + 192));
  v8 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v9 = std::move<std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &>((std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)(v2 + 192));
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v2 + 416),
    v9);
  std::function<bool ()(char)>::function<std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>,void,void>(
    (std::function<bool(char)> *const)(v2 + 128),
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)(v2 + 416));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v8,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v2 + 128));
  v11 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v2 + 64),
    v11,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v2 + 64));
  v12 = ((v2 + 64) >> 3) + 2147450880;
  *(_WORD *)v12 = -1800;
  *(_BYTE *)(v12 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v2 + 416));
  v13 = ((v2 + 416) >> 3) + 2147450880;
  *(_DWORD *)v13 = -117901064;
  *(_DWORD *)(v13 + 4) = -117901064;
  *(_DWORD *)(v13 + 8) = -117901064;
  *(_DWORD *)(v13 + 12) = -117901064;
  *(_WORD *)(v13 + 16) = -1800;
  *(_BYTE *)(v13 + 18) = -8;
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const)(v2 + 192));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 424: range 000000000D457F06-000000000D45864A
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        bool __neg)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  char *v6; // rdx
  char v7; // cl
  std::__detail::_NFA<std::regex_traits<char> > *v8; // r15
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *v9; // rax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  char v14[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 2 15 __last_char:428 64 24 9 <unknown> 128 32 9 <unknown> 192 160 13 __matcher:427 416 160 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,true>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862731] = -218959118;
  v4[536862732] = -218959118;
  v4[536862738] = -202116109;
  v4[536862739] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v2 + 192),
    __neg,
    this->_M_traits);
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v2 + 48);
  *(_WORD *)(v2 + 48) = 0;
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( !std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) )
  {
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
    {
      if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v2 + 48);
      *(_BYTE *)(v2 + 48) = 1;
      v5 = std::string::operator[](&this->_M_value, 0LL);
      v6 = (char *)v5;
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v5);
      v7 = *v6;
      if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v2 + 49);
      }
      *(_BYTE *)(v2 + 49) = v7;
    }
    else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
    {
      if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v2 + 48);
      *(_BYTE *)(v2 + 48) = 1;
      if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v2 + 49);
      }
      *(_BYTE *)(v2 + 49) = 45;
    }
  }
  while ( std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(
            this,
            (std::pair<bool,char> *)(v2 + 48),
            (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)(v2 + 192)) )
    ;
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 48);
  if ( *(_BYTE *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v2 + 49);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_char(
      (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v2 + 192),
      *(_BYTE *)(v2 + 49));
  }
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_ready((std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v2 + 192));
  v8 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v9 = std::move<std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &>((std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)(v2 + 192));
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v2 + 416),
    v9);
  std::function<bool ()(char)>::function<std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>,void,void>(
    (std::function<bool(char)> *const)(v2 + 128),
    (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)(v2 + 416));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v8,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v2 + 128));
  v11 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v2 + 64),
    v11,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v2 + 64));
  v12 = ((v2 + 64) >> 3) + 2147450880;
  *(_WORD *)v12 = -1800;
  *(_BYTE *)(v12 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v2 + 416));
  v13 = (_DWORD *)(((v2 + 416) >> 3) + 2147450880);
  *v13 = -117901064;
  v13[1] = -117901064;
  v13[2] = -117901064;
  v13[3] = -117901064;
  v13[4] = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const)(v2 + 192));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 424: range 000000000D45864C-000000000D458D90
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        bool __neg)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  char *v6; // rdx
  char v7; // cl
  std::__detail::_NFA<std::regex_traits<char> > *v8; // r15
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *v9; // rax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  char v14[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 2 15 __last_char:428 64 24 9 <unknown> 128 32 9 <unknown> 192 160 13 __matcher:427 416 160 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,false>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862731] = -218959118;
  v4[536862732] = -218959118;
  v4[536862738] = -202116109;
  v4[536862739] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v2 + 192),
    __neg,
    this->_M_traits);
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v2 + 48);
  *(_WORD *)(v2 + 48) = 0;
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( !std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) )
  {
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
    {
      if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v2 + 48);
      *(_BYTE *)(v2 + 48) = 1;
      v5 = std::string::operator[](&this->_M_value, 0LL);
      v6 = (char *)v5;
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v5);
      v7 = *v6;
      if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v2 + 49);
      }
      *(_BYTE *)(v2 + 49) = v7;
    }
    else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
    {
      if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v2 + 48);
      *(_BYTE *)(v2 + 48) = 1;
      if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v2 + 49);
      }
      *(_BYTE *)(v2 + 49) = 45;
    }
  }
  while ( std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(
            this,
            (std::pair<bool,char> *)(v2 + 48),
            (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)(v2 + 192)) )
    ;
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 48);
  if ( *(_BYTE *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v2 + 49);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_char(
      (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v2 + 192),
      *(_BYTE *)(v2 + 49));
  }
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_ready((std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v2 + 192));
  v8 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v9 = std::move<std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &>((std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)(v2 + 192));
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v2 + 416),
    v9);
  std::function<bool ()(char)>::function<std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>,void,void>(
    (std::function<bool(char)> *const)(v2 + 128),
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)(v2 + 416));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v8,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v2 + 128));
  v11 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v2 + 64),
    v11,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v2 + 64));
  v12 = ((v2 + 64) >> 3) + 2147450880;
  *(_WORD *)v12 = -1800;
  *(_BYTE *)(v12 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v2 + 416));
  v13 = (_DWORD *)(((v2 + 416) >> 3) + 2147450880);
  *v13 = -117901064;
  v13[1] = -117901064;
  v13[2] = -117901064;
  v13[3] = -117901064;
  v13[4] = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const)(v2 + 192));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 424: range 000000000D458D92-000000000D4594D6
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        bool __neg)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  char *v6; // rdx
  char v7; // cl
  std::__detail::_NFA<std::regex_traits<char> > *v8; // r15
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *v9; // rax
  std::__detail::_StateIdT inserted; // r15
  std::__detail::_StateSeq<std::regex_traits<char> >::_RegexT *v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  char v14[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 2 15 __last_char:428 64 24 9 <unknown> 128 32 9 <unknown> 192 160 13 __matcher:427 416 160 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,true>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862731] = -218959118;
  v4[536862732] = -218959118;
  v4[536862738] = -202116109;
  v4[536862739] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->_M_traits);
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v2 + 192),
    __neg,
    this->_M_traits);
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v2 + 48);
  *(_WORD *)(v2 + 48) = 0;
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( !std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) )
  {
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
    {
      if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v2 + 48);
      *(_BYTE *)(v2 + 48) = 1;
      v5 = std::string::operator[](&this->_M_value, 0LL);
      v6 = (char *)v5;
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v5);
      v7 = *v6;
      if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v2 + 49);
      }
      *(_BYTE *)(v2 + 49) = v7;
    }
    else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
    {
      if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v2 + 48);
      *(_BYTE *)(v2 + 48) = 1;
      if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v2 + 49);
      }
      *(_BYTE *)(v2 + 49) = 45;
    }
  }
  while ( std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(
            this,
            (std::pair<bool,char> *)(v2 + 48),
            (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)(v2 + 192)) )
    ;
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 48);
  if ( *(_BYTE *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 49) & 7) >= *(_BYTE *)(((v2 + 49) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v2 + 49);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_char(
      (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v2 + 192),
      *(_BYTE *)(v2 + 49));
  }
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_ready((std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v2 + 192));
  v8 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  v9 = std::move<std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &>((std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)(v2 + 192));
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_BracketMatcher(
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v2 + 416),
    v9);
  std::function<bool ()(char)>::function<std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>,void,void>(
    (std::function<bool(char)> *const)(v2 + 128),
    (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)(v2 + 416));
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
               v8,
               (std::__detail::_NFA<std::regex_traits<char> >::_MatcherT *)(v2 + 128));
  v11 = std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::__detail::_NFA<std::regex_traits<char> >,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_M_nfa);
  std::__detail::_StateSeq<std::regex_traits<char>>::_StateSeq(
    (std::__detail::_StateSeq<std::regex_traits<char> > *const)(v2 + 64),
    v11,
    inserted);
  std::stack<std::__detail::_StateSeq<std::regex_traits<char>>>::push(
    &this->_M_stack,
    (std::stack<std::__detail::_StateSeq<std::regex_traits<char> >>::value_type *)(v2 + 64));
  v12 = ((v2 + 64) >> 3) + 2147450880;
  *(_WORD *)v12 = -1800;
  *(_BYTE *)(v12 + 2) = -8;
  std::function<bool ()(char)>::~function((std::function<bool(char)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v2 + 416));
  v13 = (_DWORD *)(((v2 + 416) >> 3) + 2147450880);
  *v13 = -117901064;
  v13[1] = -117901064;
  v13[2] = -117901064;
  v13[3] = -117901064;
  v13[4] = -117901064;
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::~_BracketMatcher((std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const)(v2 + 192));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 455: range 000000000D465ECC-000000000D46675E
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        std::pair<bool,char> *__last_char,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *__matcher)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  std::__detail::_Compiler<std::regex_traits<char> >::_StringT *p_M_value; // rsi
  unsigned __int64 v8; // rax
  std::__detail::_Compiler<std::regex_traits<char> >::_CharT *v9; // rdx
  unsigned __int64 v10; // rax
  std::__detail::_Compiler<std::regex_traits<char> >::_CharT *v11; // rdx
  unsigned __int64 v12; // rax
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT *v13; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT v14; // si
  const std::ctype<char> *M_ctype; // rbx
  unsigned __int64 v16; // rax
  char *v17; // rdx
  bool v18; // dl
  char v21[192]; // [rsp+20h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 __push_char:462 64 16 11 __flush:470 96 32 12 __symbol:481";
  *(_QWORD *)(v3 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_end) )
  {
    result = 0;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 32) = __last_char;
  if ( *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 40) = __matcher;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 64) = __last_char;
  if ( *(_BYTE *)(((v3 + 72) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 72) = __matcher;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_collsymbol) )
  {
    p_M_value = &this->_M_value;
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      p_M_value = (std::__detail::_Compiler<std::regex_traits<char> >::_StringT *)32;
      __asan_report_store_n(v3 + 96, 32LL);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_collate_element(
      (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_StringT *)(v3 + 96),
      __matcher,
      p_M_value);
    if ( std::string::size(v3 + 96) == 1 )
    {
      v8 = std::string::operator[](v3 + 96, 0LL);
      v9 = (std::__detail::_Compiler<std::regex_traits<char> >::_CharT *)v8;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)(v8 & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v8);
      std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &)::{lambda(char)#1}::operator()(
        (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,false>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
        *v9);
    }
    else
    {
      std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,false>::<lambda()> *const)(v3 + 64));
    }
    std::string::~string((void *)(v3 + 96));
    goto LABEL_66;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_equiv_class_name) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,false>::<lambda()> *const)(v3 + 64));
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_equivalence_class(
      __matcher,
      &this->_M_value);
LABEL_66:
    result = 1;
    goto LABEL_67;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_char_class_name) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,false>::<lambda()> *const)(v3 + 64));
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_character_class(
      __matcher,
      &this->_M_value,
      0);
    goto LABEL_66;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
  {
    v10 = std::string::operator[](&this->_M_value, 0LL);
    v11 = (std::__detail::_Compiler<std::regex_traits<char> >::_CharT *)v10;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v10);
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &)::{lambda(char)#1}::operator()(
      (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,false>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
      *v11);
    goto LABEL_66;
  }
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
  {
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_quoted_class) )
      std::__throw_regex_error(_S_error_brack, "Unexpected character in bracket expression.");
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,false>::<lambda()> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_ctype);
    M_ctype = this->_M_ctype;
    v16 = std::string::operator[](&this->_M_value, 0LL);
    v17 = (char *)v16;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)(v16 & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v16);
    v18 = std::ctype<char>::is(M_ctype, 0x100u, *v17);
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_character_class(
      __matcher,
      &this->_M_value,
      v18);
    goto LABEL_66;
  }
  if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__last_char);
  }
  if ( __last_char->first )
  {
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
    {
      v12 = std::string::operator[](&this->_M_value, 0LL);
      v13 = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT *)v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v12);
      v14 = *v13;
      if ( *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)__last_char + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&__last_char->second);
      }
      std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_make_range(
        __matcher,
        __last_char->second,
        v14);
      if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__last_char);
      }
      __last_char->first = 0;
      goto LABEL_66;
    }
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)__last_char + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&__last_char->second);
      }
      std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_make_range(
        __matcher,
        __last_char->second,
        45);
      if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__last_char);
      }
      __last_char->first = 0;
      goto LABEL_66;
    }
    if ( std::__detail::_Scanner<char>::_M_get_token(&this->_M_scanner) != _S_token_bracket_end )
      std::__throw_regex_error(_S_error_range, "Character is expected after a dash.");
    goto LABEL_41;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) )
  {
LABEL_41:
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &)::{lambda(char)#1}::operator()(
      (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,false>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
      45);
    goto LABEL_66;
  }
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_end) )
    std::__throw_regex_error(
      _S_error_range,
      "Unexpected dash in bracket expression. For POSIX syntax, a dash is not treated literally only when it is at beginning or end.");
  std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &)::{lambda(char)#1}::operator()(
    (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,false>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
    45);
  result = 0;
LABEL_67:
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 455: range 000000000D466B80-000000000D467412
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        std::pair<bool,char> *__last_char,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *__matcher)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  std::__detail::_Compiler<std::regex_traits<char> >::_StringT *p_M_value; // rsi
  unsigned __int64 v8; // rax
  std::__detail::_Compiler<std::regex_traits<char> >::_CharT *v9; // rdx
  unsigned __int64 v10; // rax
  std::__detail::_Compiler<std::regex_traits<char> >::_CharT *v11; // rdx
  unsigned __int64 v12; // rax
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT *v13; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT v14; // si
  const std::ctype<char> *M_ctype; // rbx
  unsigned __int64 v16; // rax
  char *v17; // rdx
  bool v18; // dl
  char v21[192]; // [rsp+20h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 __push_char:462 64 16 11 __flush:470 96 32 12 __symbol:481";
  *(_QWORD *)(v3 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_end) )
  {
    result = 0;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 32) = __last_char;
  if ( *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 40) = __matcher;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 64) = __last_char;
  if ( *(_BYTE *)(((v3 + 72) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 72) = __matcher;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_collsymbol) )
  {
    p_M_value = &this->_M_value;
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      p_M_value = (std::__detail::_Compiler<std::regex_traits<char> >::_StringT *)32;
      __asan_report_store_n(v3 + 96, 32LL);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_collate_element(
      (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_StringT *)(v3 + 96),
      __matcher,
      p_M_value);
    if ( std::string::size(v3 + 96) == 1 )
    {
      v8 = std::string::operator[](v3 + 96, 0LL);
      v9 = (std::__detail::_Compiler<std::regex_traits<char> >::_CharT *)v8;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)(v8 & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v8);
      std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &)::{lambda(char)#1}::operator()(
        (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,true>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
        *v9);
    }
    else
    {
      std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,true>::<lambda()> *const)(v3 + 64));
    }
    std::string::~string((void *)(v3 + 96));
    goto LABEL_66;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_equiv_class_name) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,true>::<lambda()> *const)(v3 + 64));
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_equivalence_class(
      __matcher,
      &this->_M_value);
LABEL_66:
    result = 1;
    goto LABEL_67;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_char_class_name) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,true>::<lambda()> *const)(v3 + 64));
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_character_class(
      __matcher,
      &this->_M_value,
      0);
    goto LABEL_66;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
  {
    v10 = std::string::operator[](&this->_M_value, 0LL);
    v11 = (std::__detail::_Compiler<std::regex_traits<char> >::_CharT *)v10;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v10);
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &)::{lambda(char)#1}::operator()(
      (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,true>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
      *v11);
    goto LABEL_66;
  }
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
  {
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_quoted_class) )
      std::__throw_regex_error(_S_error_brack, "Unexpected character in bracket expression.");
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,true>::<lambda()> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_ctype);
    M_ctype = this->_M_ctype;
    v16 = std::string::operator[](&this->_M_value, 0LL);
    v17 = (char *)v16;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)(v16 & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v16);
    v18 = std::ctype<char>::is(M_ctype, 0x100u, *v17);
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_character_class(
      __matcher,
      &this->_M_value,
      v18);
    goto LABEL_66;
  }
  if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__last_char);
  }
  if ( __last_char->first )
  {
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
    {
      v12 = std::string::operator[](&this->_M_value, 0LL);
      v13 = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT *)v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v12);
      v14 = *v13;
      if ( *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)__last_char + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&__last_char->second);
      }
      std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_make_range(
        __matcher,
        __last_char->second,
        v14);
      if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__last_char);
      }
      __last_char->first = 0;
      goto LABEL_66;
    }
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)__last_char + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&__last_char->second);
      }
      std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_make_range(
        __matcher,
        __last_char->second,
        45);
      if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__last_char);
      }
      __last_char->first = 0;
      goto LABEL_66;
    }
    if ( std::__detail::_Scanner<char>::_M_get_token(&this->_M_scanner) != _S_token_bracket_end )
      std::__throw_regex_error(_S_error_range, "Character is expected after a dash.");
    goto LABEL_41;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) )
  {
LABEL_41:
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &)::{lambda(char)#1}::operator()(
      (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,true>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
      45);
    goto LABEL_66;
  }
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_end) )
    std::__throw_regex_error(
      _S_error_range,
      "Unexpected dash in bracket expression. For POSIX syntax, a dash is not treated literally only when it is at beginning or end.");
  std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &)::{lambda(char)#1}::operator()(
    (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,true>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
    45);
  result = 0;
LABEL_67:
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 455: range 000000000D467834-000000000D4680C6
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        std::pair<bool,char> *__last_char,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *__matcher)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  std::__detail::_Compiler<std::regex_traits<char> >::_StringT *p_M_value; // rsi
  unsigned __int64 v8; // rax
  std::__detail::_Compiler<std::regex_traits<char> >::_CharT *v9; // rdx
  unsigned __int64 v10; // rax
  std::__detail::_Compiler<std::regex_traits<char> >::_CharT *v11; // rdx
  unsigned __int64 v12; // rax
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT *v13; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT v14; // si
  const std::ctype<char> *M_ctype; // rbx
  unsigned __int64 v16; // rax
  char *v17; // rdx
  bool v18; // dl
  char v21[192]; // [rsp+20h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 __push_char:462 64 16 11 __flush:470 96 32 12 __symbol:481";
  *(_QWORD *)(v3 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_end) )
  {
    result = 0;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 32) = __last_char;
  if ( *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 40) = __matcher;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 64) = __last_char;
  if ( *(_BYTE *)(((v3 + 72) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 72) = __matcher;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_collsymbol) )
  {
    p_M_value = &this->_M_value;
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      p_M_value = (std::__detail::_Compiler<std::regex_traits<char> >::_StringT *)32;
      __asan_report_store_n(v3 + 96, 32LL);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_collate_element(
      (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_StringT *)(v3 + 96),
      __matcher,
      p_M_value);
    if ( std::string::size(v3 + 96) == 1 )
    {
      v8 = std::string::operator[](v3 + 96, 0LL);
      v9 = (std::__detail::_Compiler<std::regex_traits<char> >::_CharT *)v8;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)(v8 & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v8);
      std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &)::{lambda(char)#1}::operator()(
        (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,false>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
        *v9);
    }
    else
    {
      std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,false>::<lambda()> *const)(v3 + 64));
    }
    std::string::~string((void *)(v3 + 96));
    goto LABEL_66;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_equiv_class_name) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,false>::<lambda()> *const)(v3 + 64));
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_equivalence_class(
      __matcher,
      &this->_M_value);
LABEL_66:
    result = 1;
    goto LABEL_67;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_char_class_name) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,false>::<lambda()> *const)(v3 + 64));
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_character_class(
      __matcher,
      &this->_M_value,
      0);
    goto LABEL_66;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
  {
    v10 = std::string::operator[](&this->_M_value, 0LL);
    v11 = (std::__detail::_Compiler<std::regex_traits<char> >::_CharT *)v10;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v10);
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &)::{lambda(char)#1}::operator()(
      (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,false>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
      *v11);
    goto LABEL_66;
  }
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
  {
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_quoted_class) )
      std::__throw_regex_error(_S_error_brack, "Unexpected character in bracket expression.");
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,false>::<lambda()> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_ctype);
    M_ctype = this->_M_ctype;
    v16 = std::string::operator[](&this->_M_value, 0LL);
    v17 = (char *)v16;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)(v16 & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v16);
    v18 = std::ctype<char>::is(M_ctype, 0x100u, *v17);
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_character_class(
      __matcher,
      &this->_M_value,
      v18);
    goto LABEL_66;
  }
  if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__last_char);
  }
  if ( __last_char->first )
  {
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
    {
      v12 = std::string::operator[](&this->_M_value, 0LL);
      v13 = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT *)v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v12);
      v14 = *v13;
      if ( *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)__last_char + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&__last_char->second);
      }
      std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_make_range(
        __matcher,
        __last_char->second,
        v14);
      if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__last_char);
      }
      __last_char->first = 0;
      goto LABEL_66;
    }
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)__last_char + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&__last_char->second);
      }
      std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_make_range(
        __matcher,
        __last_char->second,
        45);
      if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__last_char);
      }
      __last_char->first = 0;
      goto LABEL_66;
    }
    if ( std::__detail::_Scanner<char>::_M_get_token(&this->_M_scanner) != _S_token_bracket_end )
      std::__throw_regex_error(_S_error_range, "Character is expected after a dash.");
    goto LABEL_41;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) )
  {
LABEL_41:
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &)::{lambda(char)#1}::operator()(
      (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,false>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
      45);
    goto LABEL_66;
  }
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_end) )
    std::__throw_regex_error(
      _S_error_range,
      "Unexpected dash in bracket expression. For POSIX syntax, a dash is not treated literally only when it is at beginning or end.");
  std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &)::{lambda(char)#1}::operator()(
    (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,false>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
    45);
  result = 0;
LABEL_67:
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 455: range 000000000D4684E8-000000000D468D7A
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        std::pair<bool,char> *__last_char,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *__matcher)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  std::__detail::_Compiler<std::regex_traits<char> >::_StringT *p_M_value; // rsi
  unsigned __int64 v8; // rax
  std::__detail::_Compiler<std::regex_traits<char> >::_CharT *v9; // rdx
  unsigned __int64 v10; // rax
  std::__detail::_Compiler<std::regex_traits<char> >::_CharT *v11; // rdx
  unsigned __int64 v12; // rax
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT *v13; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT v14; // si
  const std::ctype<char> *M_ctype; // rbx
  unsigned __int64 v16; // rax
  char *v17; // rdx
  bool v18; // dl
  char v21[192]; // [rsp+20h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 __push_char:462 64 16 11 __flush:470 96 32 12 __symbol:481";
  *(_QWORD *)(v3 + 16) = std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_end) )
  {
    result = 0;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 32) = __last_char;
  if ( *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 40) = __matcher;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 64) = __last_char;
  if ( *(_BYTE *)(((v3 + 72) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 72) = __matcher;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_collsymbol) )
  {
    p_M_value = &this->_M_value;
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      p_M_value = (std::__detail::_Compiler<std::regex_traits<char> >::_StringT *)32;
      __asan_report_store_n(v3 + 96, 32LL);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_collate_element(
      (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_StringT *)(v3 + 96),
      __matcher,
      p_M_value);
    if ( std::string::size(v3 + 96) == 1 )
    {
      v8 = std::string::operator[](v3 + 96, 0LL);
      v9 = (std::__detail::_Compiler<std::regex_traits<char> >::_CharT *)v8;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)(v8 & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v8);
      std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &)::{lambda(char)#1}::operator()(
        (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,true>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
        *v9);
    }
    else
    {
      std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,true>::<lambda()> *const)(v3 + 64));
    }
    std::string::~string((void *)(v3 + 96));
    goto LABEL_66;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_equiv_class_name) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,true>::<lambda()> *const)(v3 + 64));
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_equivalence_class(
      __matcher,
      &this->_M_value);
LABEL_66:
    result = 1;
    goto LABEL_67;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_char_class_name) )
  {
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,true>::<lambda()> *const)(v3 + 64));
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_character_class(
      __matcher,
      &this->_M_value,
      0);
    goto LABEL_66;
  }
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
  {
    v10 = std::string::operator[](&this->_M_value, 0LL);
    v11 = (std::__detail::_Compiler<std::regex_traits<char> >::_CharT *)v10;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v10);
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &)::{lambda(char)#1}::operator()(
      (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,true>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
      *v11);
    goto LABEL_66;
  }
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
  {
    if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_quoted_class) )
      std::__throw_regex_error(_S_error_brack, "Unexpected character in bracket expression.");
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &)::{lambda(void)#2}::operator()((const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,true>::<lambda()> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_ctype >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_ctype);
    M_ctype = this->_M_ctype;
    v16 = std::string::operator[](&this->_M_value, 0LL);
    v17 = (char *)v16;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)(v16 & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v16);
    v18 = std::ctype<char>::is(M_ctype, 0x100u, *v17);
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_character_class(
      __matcher,
      &this->_M_value,
      v18);
    goto LABEL_66;
  }
  if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__last_char);
  }
  if ( __last_char->first )
  {
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(this) )
    {
      v12 = std::string::operator[](&this->_M_value, 0LL);
      v13 = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT *)v12;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v12);
      v14 = *v13;
      if ( *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)__last_char + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&__last_char->second);
      }
      std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_make_range(
        __matcher,
        __last_char->second,
        v14);
      if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__last_char);
      }
      __last_char->first = 0;
      goto LABEL_66;
    }
    if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_dash) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)__last_char + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__last_char->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&__last_char->second);
      }
      std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_make_range(
        __matcher,
        __last_char->second,
        45);
      if ( *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)__last_char & 7) >= *(_BYTE *)(((unsigned __int64)__last_char >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__last_char);
      }
      __last_char->first = 0;
      goto LABEL_66;
    }
    if ( std::__detail::_Scanner<char>::_M_get_token(&this->_M_scanner) != _S_token_bracket_end )
      std::__throw_regex_error(_S_error_range, "Character is expected after a dash.");
    goto LABEL_41;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( std::regex_constants::operator&(this->_M_flags, (std::regex_constants::syntax_option_type)16) )
  {
LABEL_41:
    std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &)::{lambda(char)#1}::operator()(
      (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,true>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
      45);
    goto LABEL_66;
  }
  if ( !std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_bracket_end) )
    std::__throw_regex_error(
      _S_error_range,
      "Unexpected dash in bracket expression. For POSIX syntax, a dash is not treated literally only when it is at beginning or end.");
  std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &)::{lambda(char)#1}::operator()(
    (const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,true>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const)(v3 + 32),
    45);
  result = 0;
LABEL_67:
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 462: range 000000000D465BCA-000000000D465D7D
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &)::{lambda(char)#1}::operator()(
        const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,false>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const this,
        std::__detail::_Compiler<std::regex_traits<char> >::_CharT __ch)
{
  std::pair<bool,char> *last_char; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *matcher; // rdi
  std::pair<bool,char> *v4; // rdx
  char v5; // cl
  std::pair<bool,char> *v6; // rdx
  std::pair<bool,char> *v7; // rdx
  char v8; // cl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  last_char = this->____last_char;
  if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->____last_char);
  }
  if ( last_char->first )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->____matcher >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->____matcher);
    matcher = this->____matcher;
    v4 = this->____last_char;
    v5 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
    if ( v5 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v5 )
    {
      matcher = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)&this->____last_char->second;
      __asan_report_load1(matcher);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_char(matcher, v4->second);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = this->____last_char;
    if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(this->____last_char);
    }
    v6->first = 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = this->____last_char;
  v8 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
  if ( v8 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v8 )
    __asan_report_store1(&this->____last_char->second);
  v7->second = __ch;
};

// Line 462: range 000000000D46687E-000000000D466A31
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &)::{lambda(char)#1}::operator()(
        const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,true>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const this,
        std::__detail::_Compiler<std::regex_traits<char> >::_CharT __ch)
{
  std::pair<bool,char> *last_char; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *matcher; // rdi
  std::pair<bool,char> *v4; // rdx
  char v5; // cl
  std::pair<bool,char> *v6; // rdx
  std::pair<bool,char> *v7; // rdx
  char v8; // cl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  last_char = this->____last_char;
  if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->____last_char);
  }
  if ( last_char->first )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->____matcher >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->____matcher);
    matcher = this->____matcher;
    v4 = this->____last_char;
    v5 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
    if ( v5 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v5 )
    {
      matcher = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)&this->____last_char->second;
      __asan_report_load1(matcher);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_char(matcher, v4->second);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = this->____last_char;
    if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(this->____last_char);
    }
    v6->first = 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = this->____last_char;
  v8 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
  if ( v8 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v8 )
    __asan_report_store1(&this->____last_char->second);
  v7->second = __ch;
};

// Line 462: range 000000000D467532-000000000D4676E5
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &)::{lambda(char)#1}::operator()(
        const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,false>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const this,
        std::__detail::_Compiler<std::regex_traits<char> >::_CharT __ch)
{
  std::pair<bool,char> *last_char; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *matcher; // rdi
  std::pair<bool,char> *v4; // rdx
  char v5; // cl
  std::pair<bool,char> *v6; // rdx
  std::pair<bool,char> *v7; // rdx
  char v8; // cl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  last_char = this->____last_char;
  if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->____last_char);
  }
  if ( last_char->first )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->____matcher >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->____matcher);
    matcher = this->____matcher;
    v4 = this->____last_char;
    v5 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
    if ( v5 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v5 )
    {
      matcher = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)&this->____last_char->second;
      __asan_report_load1(matcher);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_char(matcher, v4->second);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = this->____last_char;
    if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(this->____last_char);
    }
    v6->first = 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = this->____last_char;
  v8 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
  if ( v8 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v8 )
    __asan_report_store1(&this->____last_char->second);
  v7->second = __ch;
};

// Line 462: range 000000000D4681E6-000000000D468399
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &)::{lambda(char)#1}::operator()(
        const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,true>::<lambda(std::__detail::_Compiler<std::regex_traits<char> >::_CharT)> *const this,
        std::__detail::_Compiler<std::regex_traits<char> >::_CharT __ch)
{
  std::pair<bool,char> *last_char; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *matcher; // rdi
  std::pair<bool,char> *v4; // rdx
  char v5; // cl
  std::pair<bool,char> *v6; // rdx
  std::pair<bool,char> *v7; // rdx
  char v8; // cl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  last_char = this->____last_char;
  if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->____last_char);
  }
  if ( last_char->first )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->____matcher >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->____matcher);
    matcher = this->____matcher;
    v4 = this->____last_char;
    v5 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
    if ( v5 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v5 )
    {
      matcher = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)&this->____last_char->second;
      __asan_report_load1(matcher);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_char(matcher, v4->second);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = this->____last_char;
    if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(this->____last_char);
    }
    v6->first = 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = this->____last_char;
  v8 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
  if ( v8 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v8 )
    __asan_report_store1(&this->____last_char->second);
  v7->second = __ch;
};

// Line 470: range 000000000D465D7E-000000000D465ECA
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> &)::{lambda(void)#2}::operator()(
        const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,false>::<lambda()> *const this)
{
  std::pair<bool,char> *last_char; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *matcher; // rdi
  std::pair<bool,char> *v3; // rdx
  char v4; // cl
  std::pair<bool,char> *v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  last_char = this->____last_char;
  if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->____last_char);
  }
  if ( last_char->first )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->____matcher >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->____matcher);
    matcher = this->____matcher;
    v3 = this->____last_char;
    v4 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
    if ( v4 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v4 )
    {
      matcher = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)&this->____last_char->second;
      __asan_report_load1(matcher);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_add_char(matcher, v3->second);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = this->____last_char;
    if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(this->____last_char);
    }
    v5->first = 0;
  }
};

// Line 470: range 000000000D466A32-000000000D466B7E
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> &)::{lambda(void)#2}::operator()(
        const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<false,true>::<lambda()> *const this)
{
  std::pair<bool,char> *last_char; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *matcher; // rdi
  std::pair<bool,char> *v3; // rdx
  char v4; // cl
  std::pair<bool,char> *v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  last_char = this->____last_char;
  if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->____last_char);
  }
  if ( last_char->first )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->____matcher >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->____matcher);
    matcher = this->____matcher;
    v3 = this->____last_char;
    v4 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
    if ( v4 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v4 )
    {
      matcher = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)&this->____last_char->second;
      __asan_report_load1(matcher);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_add_char(matcher, v3->second);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = this->____last_char;
    if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(this->____last_char);
    }
    v5->first = 0;
  }
};

// Line 470: range 000000000D4676E6-000000000D467832
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> &)::{lambda(void)#2}::operator()(
        const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,false>::<lambda()> *const this)
{
  std::pair<bool,char> *last_char; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *matcher; // rdi
  std::pair<bool,char> *v3; // rdx
  char v4; // cl
  std::pair<bool,char> *v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  last_char = this->____last_char;
  if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->____last_char);
  }
  if ( last_char->first )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->____matcher >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->____matcher);
    matcher = this->____matcher;
    v3 = this->____last_char;
    v4 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
    if ( v4 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v4 )
    {
      matcher = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)&this->____last_char->second;
      __asan_report_load1(matcher);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_add_char(matcher, v3->second);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = this->____last_char;
    if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(this->____last_char);
    }
    v5->first = 0;
  }
};

// Line 470: range 000000000D46839A-000000000D4684E6
void __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,true>(std::pair<bool,char> &,std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> &)::{lambda(void)#2}::operator()(
        const std::__detail::_Compiler<std::regex_traits<char> >::_M_expression_term<true,true>::<lambda()> *const this)
{
  std::pair<bool,char> *last_char; // rdx
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *matcher; // rdi
  std::pair<bool,char> *v3; // rdx
  char v4; // cl
  std::pair<bool,char> *v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  last_char = this->____last_char;
  if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
    && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this->____last_char);
  }
  if ( last_char->first )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->____matcher >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->____matcher);
    matcher = this->____matcher;
    v3 = this->____last_char;
    v4 = *(_BYTE *)(((unsigned __int64)&this->____last_char->second >> 3) + 0x7FFF8000);
    if ( v4 != 0 && ((LOBYTE(this->____last_char) + 1) & 7) >= v4 )
    {
      matcher = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)&this->____last_char->second;
      __asan_report_load1(matcher);
    }
    std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_add_char(matcher, v3->second);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = this->____last_char;
    if ( *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) != 0
      && ((__int64)this->____last_char & 7) >= *(_BYTE *)(((unsigned __int64)this->____last_char >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(this->____last_char);
    }
    v5->first = 0;
  }
};

// Line 567: range 000000000D44427A-000000000D444340
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char(
        std::__detail::_Compiler<std::regex_traits<char> > *const this)
{
  char v1; // al
  char v2; // al
  bool __is_char; // [rsp+1Fh] [rbp-11h]

  __is_char = 0;
  if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_oct_num) )
  {
    __is_char = 1;
    v1 = std::__detail::_Compiler<std::regex_traits<char>>::_M_cur_int_value(this, 8);
    std::string::assign(&this->_M_value, 1LL, (unsigned int)v1);
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_hex_num) )
  {
    __is_char = 1;
    v2 = std::__detail::_Compiler<std::regex_traits<char>>::_M_cur_int_value(this, 16);
    std::string::assign(&this->_M_value, 1LL, (unsigned int)v2);
  }
  else if ( std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(this, _S_token_ord_char) )
  {
    return 1;
  }
  return __is_char;
};

// Line 588: range 000000000D31EF88-000000000D31EFF6
bool __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_match_token(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        std::__detail::_Compiler<std::regex_traits<char> >::_TokenT token)
{
  const std::__detail::_Scanner<char>::_StringT *v2; // rax

  if ( token != std::__detail::_Scanner<char>::_M_get_token(&this->_M_scanner) )
    return 0;
  v2 = std::__detail::_Scanner<char>::_M_get_value[abi:cxx11](&this->_M_scanner);
  std::string::operator=(&this->_M_value, v2);
  std::__detail::_Scanner<char>::_M_advance(&this->_M_scanner);
  return 1;
};

// Line 602: range 000000000D444F26-000000000D44502B
int __cdecl std::__detail::_Compiler<std::regex_traits<char>>::_M_cur_int_value(
        std::__detail::_Compiler<std::regex_traits<char> > *const this,
        int __radix)
{
  const std::regex_traits<char> *M_traits; // rbx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  __int64 __v; // [rsp+10h] [rbp-20h]
  std::string::size_type __i; // [rsp+18h] [rbp-18h]

  __v = 0LL;
  for ( __i = 0LL; __i < std::string::length(&this->_M_value); ++__i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_traits >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_traits);
    M_traits = this->_M_traits;
    v3 = std::string::operator[](&this->_M_value, __i);
    v4 = (char *)v3;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && (char)(v3 & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v3);
    __v = __v * __radix + std::regex_traits<char>::value(M_traits, *v4, __radix);
  }
  return __v;
};

// Line 614: range 000000000D471D8E-000000000D471EF3
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_apply(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT __ch,
        std::false_type a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  bool v7; // cl
  bool result; // al
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = v3 + 64;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_apply;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v5 - 32) = this;
  if ( *(char *)(((unsigned __int64)(v5 - 32 + 8) >> 3) + 0x7FFF8000) < 0 )
    v5 = __asan_report_store1(v5 - 32 + 8);
  *(_BYTE *)(v5 - 24) = __ch;
  v7 = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator()((const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_apply::<lambda()> *const)(v5 - 32));
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->_M_is_non_matching);
  result = v7 != this->_M_is_non_matching;
  if ( v9 == (char *)v3 )
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

// Line 614: range 000000000D47336C-000000000D4734D1
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_apply(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT __ch,
        std::false_type a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  bool v7; // cl
  bool result; // al
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = v3 + 64;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_apply;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v5 - 32) = this;
  if ( *(char *)(((unsigned __int64)(v5 - 32 + 8) >> 3) + 0x7FFF8000) < 0 )
    v5 = __asan_report_store1(v5 - 32 + 8);
  *(_BYTE *)(v5 - 24) = __ch;
  v7 = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator()((const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_apply::<lambda()> *const)(v5 - 32));
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->_M_is_non_matching);
  result = v7 != this->_M_is_non_matching;
  if ( v9 == (char *)v3 )
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

// Line 614: range 000000000D474642-000000000D4747A7
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_apply(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT __ch,
        std::false_type a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  bool v7; // cl
  bool result; // al
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = v3 + 64;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_apply;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v5 - 32) = this;
  if ( *(char *)(((unsigned __int64)(v5 - 32 + 8) >> 3) + 0x7FFF8000) < 0 )
    v5 = __asan_report_store1(v5 - 32 + 8);
  *(_BYTE *)(v5 - 24) = __ch;
  v7 = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator()((const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_apply::<lambda()> *const)(v5 - 32));
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->_M_is_non_matching);
  result = v7 != this->_M_is_non_matching;
  if ( v9 == (char *)v3 )
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

// Line 614: range 000000000D4759C6-000000000D475B2B
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_apply(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *const this,
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT __ch,
        std::false_type a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  bool v7; // cl
  bool result; // al
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = v3 + 64;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_apply;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v5 - 32) = this;
  if ( *(char *)(((unsigned __int64)(v5 - 32 + 8) >> 3) + 0x7FFF8000) < 0 )
    v5 = __asan_report_store1(v5 - 32 + 8);
  *(_BYTE *)(v5 - 24) = __ch;
  v7 = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator()((const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_apply::<lambda()> *const)(v5 - 32));
  if ( *(char *)(((unsigned __int64)&this->_M_is_non_matching >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->_M_is_non_matching);
  result = v7 != this->_M_is_non_matching;
  if ( v9 == (char *)v3 )
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

// Line 617: range 000000000D47126A-000000000D471D8D
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator()(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_apply::<lambda()> *const this)
{
  bool v1; // r15
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_TransT *p_M_translator; // rcx
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT v6; // dl
  const char *M_current; // r14
  std::vector<char>::const_iterator v8; // rax
  bool v9; // al
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_TransT *v10; // rcx
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_TransT *p_second; // rdi
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT v12; // cl
  std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_CharT second; // si
  int v14; // edx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *v15; // rax
  const std::regex_traits<char> *M_traits; // rcx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *v17; // rax
  char ch; // si
  std::vector<std::string> *p_M_equiv_set; // rdx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *v20; // rax
  __int64 v21; // rsi
  const char *v22; // r8
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT *p_ch; // rdi
  const std::string *v24; // r14
  const std::string *v25; // rcx
  bool v26; // r14
  const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *v27; // rax
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT *v28; // rdi
  char v29; // si
  int v30; // eax
  bool result; // al
  char __s; // [rsp+1Fh] [rbp-191h]
  std::vector<std::pair<char,char>> *__for_range; // [rsp+20h] [rbp-190h]
  std::pair<char,char> *__it; // [rsp+28h] [rbp-188h]
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > *__for_range_0; // [rsp+30h] [rbp-180h]
  std::regex_traits<char>::_RegexMask *__it_0; // [rsp+38h] [rbp-178h]
  char v38[368]; // [rsp+40h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 8 15 __for_begin:623 96 8 13 __for_end:623 128 8 9 <unknown> 160 8 9 <unkn"
                        "own> 192 8 15 __for_begin:632 224 8 13 __for_end:632 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  p_M_translator = &this->__this->_M_translator;
  if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->____ch);
  v6 = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_translate(p_M_translator, this->____ch);
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = v6;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  M_current = std::vector<char>::end(&this->__this->_M_char_set)._M_current;
  v8._M_current = std::vector<char>::begin(&this->__this->_M_char_set)._M_current;
  v9 = std::binary_search<__gnu_cxx::__normal_iterator<char const*,std::vector<char>>,char>(
         v8,
         (__gnu_cxx::__normal_iterator<char const*,std::vector<char> >)M_current,
         (const char *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v1 = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = &this->__this->_M_translator;
    if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->____ch);
    __s = std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_transform(v10, this->____ch);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    __for_range = &this->__this->_M_range_set;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::pair<char,char>>::const_iterator *)(v2 + 64) = std::vector<std::pair<char,char>>::begin(__for_range);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::pair<char,char>>::const_iterator *)(v2 + 96) = std::vector<std::pair<char,char>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::pair<char,char> const*,std::vector<std::pair<char,char>>>(
              (const __gnu_cxx::__normal_iterator<const std::pair<char,char>*,std::vector<std::pair<char,char>> > *)(v2 + 64),
              (const __gnu_cxx::__normal_iterator<const std::pair<char,char>*,std::vector<std::pair<char,char>> > *)(v2 + 96)) )
    {
      __it = (std::pair<char,char> *)__gnu_cxx::__normal_iterator<std::pair<char,char> const*,std::vector<std::pair<char,char>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<char,char>*,std::vector<std::pair<char,char>> > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      p_second = &this->__this->_M_translator;
      v12 = __s;
      if ( *(_BYTE *)(((unsigned __int64)&__it->second >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)__it + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__it->second >> 3) + 0x7FFF8000) )
      {
        p_second = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_TransT *)&__it->second;
        __asan_report_load1(&__it->second);
      }
      second = __it->second;
      if ( *(_BYTE *)(((unsigned __int64)__it >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)__it & 7) >= *(_BYTE *)(((unsigned __int64)__it >> 3) + 0x7FFF8000) )
      {
        p_second = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_TransT *)__it;
        __asan_report_load1(__it);
      }
      if ( std::__detail::_RegexTranslator<std::regex_traits<char>,false,false>::_M_match_range(
             p_second,
             __it->first,
             second,
             v12) )
      {
        v1 = 1;
        v14 = 0;
        goto LABEL_36;
      }
      __gnu_cxx::__normal_iterator<std::pair<char,char> const*,std::vector<std::pair<char,char>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<char,char>*,std::vector<std::pair<char,char>> > *const)(v2 + 64));
    }
    v14 = 1;
LABEL_36:
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v14 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v15 = this->__this;
      if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
        v15 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)__asan_report_load8(&this->__this->_M_traits);
      M_traits = v15->_M_traits;
      v17 = this->__this;
      if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
        v17 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)__asan_report_load1(&this->____ch);
      ch = this->____ch;
      if ( *(_BYTE *)(((unsigned __int64)&v17->_M_class_set >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v17->_M_class_set);
      }
      if ( (unsigned __int8)std::regex_traits<char>::isctype(M_traits, ch, *(_DWORD *)&v17->_M_class_set) )
      {
        v1 = 1;
      }
      else
      {
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        p_M_equiv_set = &this->__this->_M_equiv_set;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::const_iterator *)(v2 + 160) = std::vector<std::string>::end(p_M_equiv_set);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        v20 = this->__this;
        if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
          v20 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)__asan_report_load8(&this->__this->_M_traits);
        v21 = (__int64)v20->_M_traits;
        v22 = &this->____ch + 1;
        p_ch = &this->____ch;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          v21 = 32LL;
          p_ch = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT *)(v2 + 256);
          __asan_report_store_n(v2 + 256, 32LL);
        }
        std::regex_traits<char>::transform_primary<char const*>(
          (std::regex_traits<char>::string_type *)(v2 + 256),
          (const std::regex_traits<char> *const)v21,
          p_ch,
          v22);
        v24 = std::vector<std::string>::end(&this->__this->_M_equiv_set)._M_current;
        v25 = std::vector<std::string>::begin(&this->__this->_M_equiv_set)._M_current;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 128) = std::find<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::string>((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v25, (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v24, (const std::string *)(v2 + 256));
        v26 = __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 160));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        std::string::~string((void *)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v26 )
        {
          v1 = 1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          __for_range_0 = &this->__this->_M_neg_class_set;
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::const_iterator *)(v2 + 192) = std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::const_iterator *)(v2 + 224) = std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>(
                    (const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *)(v2 + 192),
                    (const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *)(v2 + 224)) )
          {
            __it_0 = (std::regex_traits<char>::_RegexMask *)__gnu_cxx::__normal_iterator<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>::operator*((const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *const)(v2 + 192));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v27 = this->__this;
            if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
              v27 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,false,false> *)__asan_report_load8(&this->__this->_M_traits);
            v28 = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT *)v27->_M_traits;
            if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
            {
              v28 = &this->____ch;
              __asan_report_load1(&this->____ch);
            }
            v29 = this->____ch;
            if ( ((unsigned __int8)__it_0 & 7) >= *(_BYTE *)(((unsigned __int64)__it_0 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)__it_0 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((unsigned __int64)(&__it_0->_M_extended + 1) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)__it_0 + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(&__it_0->_M_extended + 1) >> 3)
                                                                 + 0x7FFF8000) )
            {
              v29 = 4;
              v28 = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::_CharT *)__it_0;
              __asan_report_load_n(__it_0, 4LL);
            }
            if ( (unsigned __int8)std::regex_traits<char>::isctype(
                                    (const std::regex_traits<char> *const)v28,
                                    v29,
                                    (int)*__it_0) != 1 )
            {
              v1 = 1;
              v30 = 0;
              goto LABEL_79;
            }
            __gnu_cxx::__normal_iterator<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>::operator++((__gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *const)(v2 + 192));
          }
          v30 = 1;
LABEL_79:
          if ( v30 == 1 )
            v1 = 0;
        }
      }
    }
  }
  result = v1;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 617: range 000000000D47278C-000000000D47336B
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator()(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_apply::<lambda()> *const this)
{
  bool v1; // r15
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_TransT *p_M_translator; // rcx
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT v6; // dl
  const char *M_current; // r14
  std::vector<char>::const_iterator v8; // rax
  bool v9; // al
  const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true> *p_ch; // rdi
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_CharT ch; // si
  int v12; // edx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *v13; // rax
  const std::regex_traits<char> *M_traits; // rcx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *v15; // rax
  char v16; // si
  std::vector<std::string> *p_M_equiv_set; // rdx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *v18; // rax
  __int64 v19; // rsi
  const char *v20; // r8
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT *v21; // rdi
  const std::string *v22; // r14
  const std::string *v23; // rcx
  bool v24; // r14
  const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *v25; // rax
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT *v26; // rdi
  char v27; // si
  int v28; // edx
  bool result; // al
  std::vector<std::pair<std::string,std::string >> *__for_range; // [rsp+10h] [rbp-1D0h]
  const std::pair<std::string,std::string > *__it; // [rsp+18h] [rbp-1C8h]
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > *__for_range_0; // [rsp+20h] [rbp-1C0h]
  std::regex_traits<char>::_RegexMask *__it_0; // [rsp+28h] [rbp-1B8h]
  char v35[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 8 15 __for_begin:623 96 8 13 __for_end:623 128 8 9 <unknown> 160 8 9 <unkn"
                        "own> 192 8 15 __for_begin:632 224 8 13 __for_end:632 256 32 7 __s:622 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  p_M_translator = &this->__this->_M_translator;
  if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->____ch);
  v6 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_translate(
         p_M_translator,
         this->____ch);
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = v6;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  M_current = std::vector<char>::end(&this->__this->_M_char_set)._M_current;
  v8._M_current = std::vector<char>::begin(&this->__this->_M_char_set)._M_current;
  v9 = std::binary_search<__gnu_cxx::__normal_iterator<char const*,std::vector<char>>,char>(
         v8,
         (__gnu_cxx::__normal_iterator<char const*,std::vector<char> >)M_current,
         (const char *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v1 = 1;
  }
  else
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    p_ch = &this->__this->_M_translator;
    if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
    {
      p_ch = (const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true> *)&this->____ch;
      __asan_report_load1(&this->____ch);
    }
    ch = this->____ch;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      ch = 32;
      p_ch = (const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true> *)(v2 + 256);
      __asan_report_store_n(v2 + 256, 32LL);
    }
    std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_transform(
      (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_StrTransT *)(v2 + 256),
      p_ch,
      ch);
    __for_range = &this->__this->_M_range_set;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::vector<std::pair<std::string,std::string>>::begin(__for_range);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::vector<std::pair<std::string,std::string>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::pair<std::string,std::string> const*,std::vector<std::pair<std::string,std::string>>>(
              (const __gnu_cxx::__normal_iterator<const std::pair<std::string,std::string >*,std::vector<std::pair<std::string,std::string >> > *)(v2 + 64),
              (const __gnu_cxx::__normal_iterator<const std::pair<std::string,std::string >*,std::vector<std::pair<std::string,std::string >> > *)(v2 + 96)) )
    {
      __it = __gnu_cxx::__normal_iterator<std::pair<std::string,std::string> const*,std::vector<std::pair<std::string,std::string>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<std::string,std::string >*,std::vector<std::pair<std::string,std::string >> > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      if ( std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_M_match_range(
             &this->__this->_M_translator,
             &__it->first,
             &__it->second,
             (const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,false,true>::_StrTransT *)(v2 + 256)) )
      {
        v1 = 1;
        v12 = 0;
        goto LABEL_32;
      }
      __gnu_cxx::__normal_iterator<std::pair<std::string,std::string> const*,std::vector<std::pair<std::string,std::string>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<std::string,std::string >*,std::vector<std::pair<std::string,std::string >> > *const)(v2 + 64));
    }
    v12 = 1;
LABEL_32:
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v12 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v13 = this->__this;
      if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
        v13 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)__asan_report_load8(&this->__this->_M_traits);
      M_traits = v13->_M_traits;
      v15 = this->__this;
      if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
        v15 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)__asan_report_load1(&this->____ch);
      v16 = this->____ch;
      if ( *(_BYTE *)(((unsigned __int64)&v15->_M_class_set >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v15->_M_class_set);
      }
      if ( (unsigned __int8)std::regex_traits<char>::isctype(M_traits, v16, *(_DWORD *)&v15->_M_class_set) )
      {
        v1 = 1;
      }
      else
      {
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        p_M_equiv_set = &this->__this->_M_equiv_set;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::const_iterator *)(v2 + 160) = std::vector<std::string>::end(p_M_equiv_set);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        v18 = this->__this;
        if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
          v18 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)__asan_report_load8(&this->__this->_M_traits);
        v19 = (__int64)v18->_M_traits;
        v20 = &this->____ch + 1;
        v21 = &this->____ch;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          v19 = 32LL;
          v21 = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT *)(v2 + 320);
          __asan_report_store_n(v2 + 320, 32LL);
        }
        std::regex_traits<char>::transform_primary<char const*>(
          (std::regex_traits<char>::string_type *)(v2 + 320),
          (const std::regex_traits<char> *const)v19,
          v21,
          v20);
        v22 = std::vector<std::string>::end(&this->__this->_M_equiv_set)._M_current;
        v23 = std::vector<std::string>::begin(&this->__this->_M_equiv_set)._M_current;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 128) = std::find<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::string>((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v23, (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v22, (const std::string *)(v2 + 320));
        v24 = __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 160));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        std::string::~string((void *)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v24 )
        {
          v1 = 1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          __for_range_0 = &this->__this->_M_neg_class_set;
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::const_iterator *)(v2 + 192) = std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::const_iterator *)(v2 + 224) = std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>(
                    (const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *)(v2 + 192),
                    (const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *)(v2 + 224)) )
          {
            __it_0 = (std::regex_traits<char>::_RegexMask *)__gnu_cxx::__normal_iterator<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>::operator*((const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *const)(v2 + 192));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v25 = this->__this;
            if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
              v25 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,false,true> *)__asan_report_load8(&this->__this->_M_traits);
            v26 = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT *)v25->_M_traits;
            if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
            {
              v26 = &this->____ch;
              __asan_report_load1(&this->____ch);
            }
            v27 = this->____ch;
            if ( ((unsigned __int8)__it_0 & 7) >= *(_BYTE *)(((unsigned __int64)__it_0 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)__it_0 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((unsigned __int64)(&__it_0->_M_extended + 1) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)__it_0 + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(&__it_0->_M_extended + 1) >> 3)
                                                                 + 0x7FFF8000) )
            {
              v27 = 4;
              v26 = (std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_CharT *)__it_0;
              __asan_report_load_n(__it_0, 4LL);
            }
            if ( (unsigned __int8)std::regex_traits<char>::isctype(
                                    (const std::regex_traits<char> *const)v26,
                                    v27,
                                    (int)*__it_0) != 1 )
            {
              v1 = 1;
              v28 = 0;
              goto LABEL_75;
            }
            __gnu_cxx::__normal_iterator<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>::operator++((__gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *const)(v2 + 192));
          }
          v28 = 1;
LABEL_75:
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
          if ( v28 == 1 )
            v1 = 0;
        }
      }
    }
    std::string::~string((void *)(v2 + 256));
  }
  result = v1;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 617: range 000000000D473B1E-000000000D474641
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator()(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_apply::<lambda()> *const this)
{
  bool v1; // r15
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_TransT *p_M_translator; // rcx
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_CharT v6; // dl
  const char *M_current; // r14
  std::vector<char>::const_iterator v8; // rax
  bool v9; // al
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_TransT *v10; // rcx
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_TransT *p_second; // rdi
  std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_CharT v12; // cl
  std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_CharT second; // si
  int v14; // edx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *v15; // rax
  const std::regex_traits<char> *M_traits; // rcx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *v17; // rax
  char ch; // si
  std::vector<std::string> *p_M_equiv_set; // rdx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *v20; // rax
  __int64 v21; // rsi
  const char *v22; // r8
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT *p_ch; // rdi
  const std::string *v24; // r14
  const std::string *v25; // rcx
  bool v26; // r14
  const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *v27; // rax
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT *v28; // rdi
  char v29; // si
  int v30; // eax
  bool result; // al
  char __s; // [rsp+1Fh] [rbp-191h]
  std::vector<std::pair<char,char>> *__for_range; // [rsp+20h] [rbp-190h]
  std::pair<char,char> *__it; // [rsp+28h] [rbp-188h]
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > *__for_range_0; // [rsp+30h] [rbp-180h]
  std::regex_traits<char>::_RegexMask *__it_0; // [rsp+38h] [rbp-178h]
  char v38[368]; // [rsp+40h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 8 15 __for_begin:623 96 8 13 __for_end:623 128 8 9 <unknown> 160 8 9 <unkn"
                        "own> 192 8 15 __for_begin:632 224 8 13 __for_end:632 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  p_M_translator = &this->__this->_M_translator;
  if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->____ch);
  v6 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,false>::_M_translate(
         p_M_translator,
         this->____ch);
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = v6;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  M_current = std::vector<char>::end(&this->__this->_M_char_set)._M_current;
  v8._M_current = std::vector<char>::begin(&this->__this->_M_char_set)._M_current;
  v9 = std::binary_search<__gnu_cxx::__normal_iterator<char const*,std::vector<char>>,char>(
         v8,
         (__gnu_cxx::__normal_iterator<char const*,std::vector<char> >)M_current,
         (const char *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v1 = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = &this->__this->_M_translator;
    if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->____ch);
    __s = std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_M_transform(v10, this->____ch);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    __for_range = &this->__this->_M_range_set;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::pair<char,char>>::const_iterator *)(v2 + 64) = std::vector<std::pair<char,char>>::begin(__for_range);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::pair<char,char>>::const_iterator *)(v2 + 96) = std::vector<std::pair<char,char>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::pair<char,char> const*,std::vector<std::pair<char,char>>>(
              (const __gnu_cxx::__normal_iterator<const std::pair<char,char>*,std::vector<std::pair<char,char>> > *)(v2 + 64),
              (const __gnu_cxx::__normal_iterator<const std::pair<char,char>*,std::vector<std::pair<char,char>> > *)(v2 + 96)) )
    {
      __it = (std::pair<char,char> *)__gnu_cxx::__normal_iterator<std::pair<char,char> const*,std::vector<std::pair<char,char>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<char,char>*,std::vector<std::pair<char,char>> > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      p_second = &this->__this->_M_translator;
      v12 = __s;
      if ( *(_BYTE *)(((unsigned __int64)&__it->second >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)__it + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__it->second >> 3) + 0x7FFF8000) )
      {
        p_second = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_TransT *)&__it->second;
        __asan_report_load1(&__it->second);
      }
      second = __it->second;
      if ( *(_BYTE *)(((unsigned __int64)__it >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)__it & 7) >= *(_BYTE *)(((unsigned __int64)__it >> 3) + 0x7FFF8000) )
      {
        p_second = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_TransT *)__it;
        __asan_report_load1(__it);
      }
      if ( std::__detail::_RegexTranslator<std::regex_traits<char>,true,false>::_M_match_range(
             p_second,
             __it->first,
             second,
             v12) )
      {
        v1 = 1;
        v14 = 0;
        goto LABEL_36;
      }
      __gnu_cxx::__normal_iterator<std::pair<char,char> const*,std::vector<std::pair<char,char>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<char,char>*,std::vector<std::pair<char,char>> > *const)(v2 + 64));
    }
    v14 = 1;
LABEL_36:
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v14 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v15 = this->__this;
      if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
        v15 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)__asan_report_load8(&this->__this->_M_traits);
      M_traits = v15->_M_traits;
      v17 = this->__this;
      if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
        v17 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)__asan_report_load1(&this->____ch);
      ch = this->____ch;
      if ( *(_BYTE *)(((unsigned __int64)&v17->_M_class_set >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v17->_M_class_set);
      }
      if ( (unsigned __int8)std::regex_traits<char>::isctype(M_traits, ch, *(_DWORD *)&v17->_M_class_set) )
      {
        v1 = 1;
      }
      else
      {
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        p_M_equiv_set = &this->__this->_M_equiv_set;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::const_iterator *)(v2 + 160) = std::vector<std::string>::end(p_M_equiv_set);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        v20 = this->__this;
        if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
          v20 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)__asan_report_load8(&this->__this->_M_traits);
        v21 = (__int64)v20->_M_traits;
        v22 = &this->____ch + 1;
        p_ch = &this->____ch;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          v21 = 32LL;
          p_ch = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT *)(v2 + 256);
          __asan_report_store_n(v2 + 256, 32LL);
        }
        std::regex_traits<char>::transform_primary<char const*>(
          (std::regex_traits<char>::string_type *)(v2 + 256),
          (const std::regex_traits<char> *const)v21,
          p_ch,
          v22);
        v24 = std::vector<std::string>::end(&this->__this->_M_equiv_set)._M_current;
        v25 = std::vector<std::string>::begin(&this->__this->_M_equiv_set)._M_current;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 128) = std::find<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::string>((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v25, (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v24, (const std::string *)(v2 + 256));
        v26 = __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 160));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        std::string::~string((void *)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v26 )
        {
          v1 = 1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          __for_range_0 = &this->__this->_M_neg_class_set;
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::const_iterator *)(v2 + 192) = std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::const_iterator *)(v2 + 224) = std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>(
                    (const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *)(v2 + 192),
                    (const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *)(v2 + 224)) )
          {
            __it_0 = (std::regex_traits<char>::_RegexMask *)__gnu_cxx::__normal_iterator<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>::operator*((const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *const)(v2 + 192));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v27 = this->__this;
            if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
              v27 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,true,false> *)__asan_report_load8(&this->__this->_M_traits);
            v28 = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT *)v27->_M_traits;
            if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
            {
              v28 = &this->____ch;
              __asan_report_load1(&this->____ch);
            }
            v29 = this->____ch;
            if ( ((unsigned __int8)__it_0 & 7) >= *(_BYTE *)(((unsigned __int64)__it_0 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)__it_0 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((unsigned __int64)(&__it_0->_M_extended + 1) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)__it_0 + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(&__it_0->_M_extended + 1) >> 3)
                                                                 + 0x7FFF8000) )
            {
              v29 = 4;
              v28 = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_CharT *)__it_0;
              __asan_report_load_n(__it_0, 4LL);
            }
            if ( (unsigned __int8)std::regex_traits<char>::isctype(
                                    (const std::regex_traits<char> *const)v28,
                                    v29,
                                    (int)*__it_0) != 1 )
            {
              v1 = 1;
              v30 = 0;
              goto LABEL_79;
            }
            __gnu_cxx::__normal_iterator<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>::operator++((__gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *const)(v2 + 192));
          }
          v30 = 1;
LABEL_79:
          if ( v30 == 1 )
            v1 = 0;
        }
      }
    }
  }
  result = v1;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 617: range 000000000D474DB6-000000000D4759C4
bool __cdecl std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator()(
        const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_apply::<lambda()> *const this)
{
  bool v1; // r15
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_TransT *p_M_translator; // rcx
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT v6; // dl
  const char *M_current; // r14
  std::vector<char>::const_iterator v8; // rax
  bool v9; // al
  const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true> *p_ch; // rdi
  std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_CharT ch; // si
  int v12; // edx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *v13; // rax
  const std::regex_traits<char> *M_traits; // rcx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *v15; // rax
  char v16; // si
  std::vector<std::string> *p_M_equiv_set; // rdx
  const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *v18; // rax
  __int64 v19; // rsi
  const char *v20; // r8
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT *v21; // rdi
  const std::string *v22; // r14
  const std::string *v23; // rcx
  bool v24; // r14
  const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *v25; // rax
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT *v26; // rdi
  char v27; // si
  int v28; // edx
  bool result; // al
  std::vector<std::pair<std::string,std::string >> *__for_range; // [rsp+10h] [rbp-1D0h]
  const std::pair<std::string,std::string > *__it; // [rsp+18h] [rbp-1C8h]
  std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > *__for_range_0; // [rsp+20h] [rbp-1C0h]
  std::regex_traits<char>::_RegexMask *__it_0; // [rsp+28h] [rbp-1B8h]
  char v35[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 8 15 __for_begin:623 96 8 13 __for_end:623 128 8 9 <unknown> 160 8 9 <unkn"
                        "own> 192 8 15 __for_begin:632 224 8 13 __for_end:632 256 32 7 __s:622 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_apply(char,std::integral_constant<bool,false>)const::{lambda(void)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  p_M_translator = &this->__this->_M_translator;
  if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->____ch);
  v6 = std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_translate(
         p_M_translator,
         this->____ch);
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = v6;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  M_current = std::vector<char>::end(&this->__this->_M_char_set)._M_current;
  v8._M_current = std::vector<char>::begin(&this->__this->_M_char_set)._M_current;
  v9 = std::binary_search<__gnu_cxx::__normal_iterator<char const*,std::vector<char>>,char>(
         v8,
         (__gnu_cxx::__normal_iterator<char const*,std::vector<char> >)M_current,
         (const char *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v1 = 1;
  }
  else
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    p_ch = &this->__this->_M_translator;
    if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
    {
      p_ch = (const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true> *)&this->____ch;
      __asan_report_load1(&this->____ch);
    }
    ch = this->____ch;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      ch = 32;
      p_ch = (const std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true> *)(v2 + 256);
      __asan_report_store_n(v2 + 256, 32LL);
    }
    std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_M_transform(
      (std::__detail::_RegexTranslatorBase<std::regex_traits<char>,true,true>::_StrTransT *)(v2 + 256),
      p_ch,
      ch);
    __for_range = &this->__this->_M_range_set;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::vector<std::pair<std::string,std::string>>::begin(__for_range);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::vector<std::pair<std::string,std::string>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::pair<std::string,std::string> const*,std::vector<std::pair<std::string,std::string>>>(
              (const __gnu_cxx::__normal_iterator<const std::pair<std::string,std::string >*,std::vector<std::pair<std::string,std::string >> > *)(v2 + 64),
              (const __gnu_cxx::__normal_iterator<const std::pair<std::string,std::string >*,std::vector<std::pair<std::string,std::string >> > *)(v2 + 96)) )
    {
      __it = __gnu_cxx::__normal_iterator<std::pair<std::string,std::string> const*,std::vector<std::pair<std::string,std::string>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<std::string,std::string >*,std::vector<std::pair<std::string,std::string >> > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      if ( std::__detail::_RegexTranslator<std::regex_traits<char>,true,true>::_M_match_range(
             &this->__this->_M_translator,
             &__it->first,
             &__it->second,
             (const std::__detail::_RegexTranslator<std::regex_traits<char>,true,true>::_StrTransT *)(v2 + 256)) )
      {
        v1 = 1;
        v12 = 0;
        goto LABEL_32;
      }
      __gnu_cxx::__normal_iterator<std::pair<std::string,std::string> const*,std::vector<std::pair<std::string,std::string>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<std::string,std::string >*,std::vector<std::pair<std::string,std::string >> > *const)(v2 + 64));
    }
    v12 = 1;
LABEL_32:
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v12 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v13 = this->__this;
      if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
        v13 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)__asan_report_load8(&this->__this->_M_traits);
      M_traits = v13->_M_traits;
      v15 = this->__this;
      if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
        v15 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)__asan_report_load1(&this->____ch);
      v16 = this->____ch;
      if ( *(_BYTE *)(((unsigned __int64)&v15->_M_class_set >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->_M_class_set >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v15->_M_class_set);
      }
      if ( (unsigned __int8)std::regex_traits<char>::isctype(M_traits, v16, *(_DWORD *)&v15->_M_class_set) )
      {
        v1 = 1;
      }
      else
      {
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        p_M_equiv_set = &this->__this->_M_equiv_set;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::const_iterator *)(v2 + 160) = std::vector<std::string>::end(p_M_equiv_set);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        v18 = this->__this;
        if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
          v18 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)__asan_report_load8(&this->__this->_M_traits);
        v19 = (__int64)v18->_M_traits;
        v20 = &this->____ch + 1;
        v21 = &this->____ch;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          v19 = 32LL;
          v21 = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT *)(v2 + 320);
          __asan_report_store_n(v2 + 320, 32LL);
        }
        std::regex_traits<char>::transform_primary<char const*>(
          (std::regex_traits<char>::string_type *)(v2 + 320),
          (const std::regex_traits<char> *const)v19,
          v21,
          v20);
        v22 = std::vector<std::string>::end(&this->__this->_M_equiv_set)._M_current;
        v23 = std::vector<std::string>::begin(&this->__this->_M_equiv_set)._M_current;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 128) = std::find<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::string>((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v23, (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v22, (const std::string *)(v2 + 320));
        v24 = __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 160));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        std::string::~string((void *)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v24 )
        {
          v1 = 1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          __for_range_0 = &this->__this->_M_neg_class_set;
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::const_iterator *)(v2 + 192) = std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> >::const_iterator *)(v2 + 224) = std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>(
                    (const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *)(v2 + 192),
                    (const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *)(v2 + 224)) )
          {
            __it_0 = (std::regex_traits<char>::_RegexMask *)__gnu_cxx::__normal_iterator<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>::operator*((const __gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *const)(v2 + 192));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v25 = this->__this;
            if ( *(_BYTE *)(((unsigned __int64)&this->__this->_M_traits >> 3) + 0x7FFF8000) )
              v25 = (const std::__detail::_BracketMatcher<std::regex_traits<char>,true,true> *)__asan_report_load8(&this->__this->_M_traits);
            v26 = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT *)v25->_M_traits;
            if ( *(char *)(((unsigned __int64)&this->____ch >> 3) + 0x7FFF8000) < 0 )
            {
              v26 = &this->____ch;
              __asan_report_load1(&this->____ch);
            }
            v27 = this->____ch;
            if ( ((unsigned __int8)__it_0 & 7) >= *(_BYTE *)(((unsigned __int64)__it_0 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)__it_0 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((unsigned __int64)(&__it_0->_M_extended + 1) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)__it_0 + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(&__it_0->_M_extended + 1) >> 3)
                                                                 + 0x7FFF8000) )
            {
              v27 = 4;
              v26 = (std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_CharT *)__it_0;
              __asan_report_load_n(__it_0, 4LL);
            }
            if ( (unsigned __int8)std::regex_traits<char>::isctype(
                                    (const std::regex_traits<char> *const)v26,
                                    v27,
                                    (int)*__it_0) != 1 )
            {
              v1 = 1;
              v28 = 0;
              goto LABEL_75;
            }
            __gnu_cxx::__normal_iterator<std::regex_traits<char>::_RegexMask const*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask>>>::operator++((__gnu_cxx::__normal_iterator<const std::regex_traits<char>::_RegexMask*,std::vector<std::regex_traits<char>::_RegexMask,std::allocator<std::regex_traits<char>::_RegexMask> > > *const)(v2 + 192));
          }
          v28 = 1;
LABEL_75:
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
          if ( v28 == 1 )
            v1 = 0;
        }
      }
    }
    std::string::~string((void *)(v2 + 256));
  }
  result = v1;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};
