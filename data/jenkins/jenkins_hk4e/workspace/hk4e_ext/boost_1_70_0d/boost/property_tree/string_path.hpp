// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/string_path.hpp

// Line 206: range 000000000C28E7A4-000000000C28EB16
boost::property_tree::id_translator<std::string >::external_type *__fastcall boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::reduce(
        boost::property_tree::id_translator<std::string >::external_type *retstr,
        boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > *const this)
{
  std::random_access_iterator_tag v2; // cl
  unsigned __int64 v5; // r13
  _DWORD *v6; // r12
  std::string::pointer M_p; // rsi
  void *p_M_string_length; // rdi
  char *v9; // rsi
  char *M_current; // r15
  __gnu_cxx::__normal_iterator<char*,std::string > v11; // rax
  std::forward_iterator_tag v12; // cl
  char *v13; // rax
  char *v14; // rax
  std::forward_iterator_tag v15; // cl
  __int64 v16; // rax
  std::forward_iterator_tag *v17; // rdi
  std::forward_iterator_tag *v18; // rdi
  std::forward_iterator_tag *v20; // [rsp+0h] [rbp-108h]
  char *v21; // [rsp+8h] [rbp-100h]
  std::forward_iterator_tag v22; // [rsp+10h] [rbp-F8h] BYREF

  v5 = (unsigned __int64)&v22;
  v20 = &v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_2(192LL);
    if ( v16 )
      v5 = v16;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 32 8 part:211 112 40 7 key:218";
  *(_QWORD *)(v5 + 16) = boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::reduce;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -219021312;
  v6[536862723] = 62194;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = this;
    __asan_report_load8();
    goto LABEL_17;
  }
  M_p = this->m_value._M_dataplus._M_p;
  p_M_string_length = &this->m_value._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_value._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  v9 = &M_p[this->m_value._M_string_length];
  p_M_string_length = &this->m_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_start >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8();
LABEL_19:
    __asan_handle_no_return(p_M_string_length);
    __assert_fail(
      "!empty() && \"Reducing empty path\"",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/string_path.hpp",
      0xD0u,
      "typename Translator::external_type boost::property_tree::string_path<String, Translator>::reduce() [with String = "
      "std::__cxx11::basic_string<char>; Translator = boost::property_tree::id_translator<std::__cxx11::basic_string<char"
      "> >; typename Translator::external_type = std::__cxx11::basic_string<char>]");
  }
  if ( this->m_start._M_current == v9 )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_start >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_21;
  }
  M_current = this->m_start._M_current;
  v11._M_current = std::__find_if<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__ops::_Iter_equals_val<char const>>(
                     (__gnu_cxx::__normal_iterator<char*,std::string >)M_current,
                     (__gnu_cxx::__normal_iterator<char*,std::string >)v9,
                     (__gnu_cxx::__ops::_Iter_equals_val<char const>)&this->m_separator,
                     v2)._M_current;
  *(_QWORD *)(v5 + 48) = v5 + 64;
  v21 = v11._M_current;
  std::string::_M_construct<__gnu_cxx::__normal_iterator<char *,std::string>>(
    (std::string *const)(v5 + 48),
    (__gnu_cxx::__normal_iterator<char*,std::string >)M_current,
    v11,
    (std::forward_iterator_tag)&v22);
  this->m_start._M_current = v21;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8();
    goto LABEL_22;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_value._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8();
    goto LABEL_23;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_start >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8();
    goto LABEL_24;
  }
  v13 = this->m_start._M_current;
  if ( &this->m_value._M_dataplus._M_p[this->m_value._M_string_length] == v13 )
  {
LABEL_13:
    *(_BYTE *)(v5 + 112) = 0;
    *(_QWORD *)(v5 + 120) = v5 + 136;
    std::string::_M_construct<char *>(
      (std::string *const)(v5 + 120),
      *(char **)(v5 + 48),
      (char *)(*(_QWORD *)(v5 + 56) + *(_QWORD *)(v5 + 48)),
      v12);
    goto LABEL_25;
  }
  v14 = v13 + 1;
  if ( !*(_BYTE *)(((unsigned __int64)&this->m_start >> 3) + 0x7FFF8000) )
  {
    this->m_start._M_current = v14;
    goto LABEL_13;
  }
LABEL_24:
  __asan_report_store8();
LABEL_25:
  *(_BYTE *)(v5 + 112) = 1;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      retstr,
      *(char **)(v5 + 120),
      (char *)(*(_QWORD *)(v5 + 128) + *(_QWORD *)(v5 + 120)),
      v15);
  }
  if ( *(_BYTE *)(v5 + 112) )
  {
    v17 = *(std::forward_iterator_tag **)(v5 + 120);
    if ( v17 != (std::forward_iterator_tag *)(v5 + 136) )
      operator delete(v17);
  }
  v18 = *(std::forward_iterator_tag **)(v5 + 48);
  if ( v18 != (std::forward_iterator_tag *)(v5 + 64) )
    operator delete(v18);
  if ( v20 == (std::forward_iterator_tag *)v5 )
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
  return retstr;
};
