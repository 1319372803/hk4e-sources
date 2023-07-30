// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/any.hpp

// Line 169: range 000000000C9C9B8E-000000000C9CED69
void __fastcall boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>>::~holder(
        boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > > *const this)
{
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > *p_held; // rax
  boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > > *M_p; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  this->_vptr_placeholder = (int (**)(...))(&`vtable for'boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>>
                                          + 2);
  p_held = &this->held;
  if ( *(_BYTE *)(((unsigned __int64)&this->held >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8(p_held);
    JUMPOUT(0xC9C9BEBLL);
  }
  M_p = (boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > > *)this->held.m_value._M_dataplus._M_p;
  if ( M_p != (boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > > *)&this->held.m_value._anon_0 )
    operator delete(M_p);
};

// Line 191: range 000000000C9D2510-000000000C9D26A5
boost::any::placeholder *__fastcall boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>>::clone(
        const boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > > *const this)
{
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > >::s_iter *v1; // rbx
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > *p_held; // r12
  std::forward_iterator_tag v4; // cl
  boost::any::placeholder *v5; // rbp
  std::string::size_type *p_M_string_length; // rdi
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > >::char_type *p_m_separator; // rdi
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > >::s_iter *p_m_start; // rdi
  struct _Unwind_Exception *v10; // rbx

  v5 = (boost::any::placeholder *)operator new(0x38uLL);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  p_held = &this->held;
  v5->_vptr_placeholder = (int (**)(...))(&`vtable for'boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>>
                                        + 2);
  v1 = (boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > >::s_iter *)&v5[1];
  if ( *(_BYTE *)(((unsigned __int64)&v5[1] >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8();
    goto LABEL_8;
  }
  v5[1]._vptr_placeholder = (int (**)(...))&v5[3];
  if ( *(_BYTE *)(((unsigned __int64)p_held >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    p_M_string_length = (std::string::size_type *)p_held;
    __asan_report_load8(p_held);
    goto LABEL_9;
  }
  p_M_string_length = &this->held.m_value._M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&this->held.m_value._M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      (std::string *const)&v5[1],
      this->held.m_value._M_dataplus._M_p,
      &this->held.m_value._M_dataplus._M_p[this->held.m_value._M_string_length],
      v4);
    goto LABEL_10;
  }
LABEL_9:
  __asan_report_load8(p_M_string_length);
LABEL_10:
  p_m_separator = &p_held->m_separator;
  if ( *(char *)(((unsigned __int64)&p_held->m_separator >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(p_m_separator);
    goto LABEL_18;
  }
  p_m_separator = (boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > >::char_type *)&v1[4];
  if ( *(char *)(((unsigned __int64)&v1[4] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_18:
    __asan_report_store1(p_m_separator);
    goto LABEL_19;
  }
  LOBYTE(v1[4]._M_current) = p_held->m_separator;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    p_m_start = v1;
    __asan_report_load8(v1);
    goto LABEL_20;
  }
  p_m_start = v1 + 5;
  if ( *(_BYTE *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8();
    goto LABEL_21;
  }
  v1[5]._M_current = (char *)v5[1]._vptr_placeholder;
  p_m_start = &p_held->m_start;
  if ( *(_BYTE *)(((unsigned __int64)&p_held->m_start >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(p_m_start);
LABEL_22:
    v10 = (struct _Unwind_Exception *)__asan_report_load8(p_m_start);
    operator delete(v5, 0x38uLL);
    __asan_handle_no_return(v5);
    _Unwind_Resume(v10);
  }
  p_m_start = v1 + 5;
  if ( *(_BYTE *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) )
    goto LABEL_22;
  v1[5]._M_current += p_held->m_start._M_current - this->held.m_value._M_dataplus._M_p;
  return v5;
};
