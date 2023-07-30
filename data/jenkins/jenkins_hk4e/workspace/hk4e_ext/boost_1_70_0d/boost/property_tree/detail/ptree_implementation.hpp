// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/detail/ptree_implementation.hpp

// Line 179: range 000000000C289A2A-000000000C289C70
void __fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this)
{
  __int64 v1; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r12
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v3; // rbp
  char v4; // al
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r13
  struct _Unwind_Exception *v15; // rbx
  struct _Unwind_Exception *v16; // rax
  std::string::pointer M_p; // rdi

  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  p_anon_0 = &this->m_data._anon_0;
  this->m_data._M_dataplus._M_p = this->m_data._anon_0._M_local_buf;
  this = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8();
    goto LABEL_8;
  }
  v3->m_data._M_string_length = 0LL;
  this = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)&v3->m_data._anon_0;
  v4 = *(_BYTE *)(((unsigned __int64)&v3->m_data._anon_0 >> 3) + 0x7FFF8000);
  if ( v4 > (((unsigned __int8)v3 + 16) & 7) || !v4 )
  {
    v3->m_data._anon_0._M_local_buf[0] = 0;
    v5 = operator new(0x20uLL);
    goto LABEL_9;
  }
LABEL_8:
  v5 = __asan_report_store1(this, v1);
LABEL_9:
  v6 = (_QWORD *)v5;
  v7 = operator new(0x70uLL);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_21;
  }
  v6[1] = v7;
  if ( *(_BYTE *)(((unsigned __int64)(v7 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8();
    goto LABEL_22;
  }
  *(_QWORD *)(v7 + 72) &= ~1uLL;
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8();
    goto LABEL_23;
  }
  v8 = v6[1];
  if ( *(_BYTE *)(((unsigned __int64)(v8 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8();
    goto LABEL_24;
  }
  *(_QWORD *)(v8 + 72) &= 1uLL;
  v9 = v6[1];
  if ( *(_BYTE *)(((unsigned __int64)(v9 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  *(_QWORD *)(v9 + 80) = v9 + 72;
  v10 = v6[1];
  if ( *(_BYTE *)(((unsigned __int64)(v10 + 88) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  *(_QWORD *)(v10 + 88) = v10 + 72;
  v11 = v6[1];
  v12 = v11 + 96;
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
    goto LABEL_27;
  }
  *(_QWORD *)(v11 + 104) = v12;
  v13 = v6[1];
  if ( *(_BYTE *)(((unsigned __int64)(v13 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    goto LABEL_28;
  }
  *(_QWORD *)(v13 + 96) = v12;
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 3) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store8();
    goto LABEL_29;
  }
  v6[3] = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v3->m_children >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    v14 = __asan_report_store8();
    operator delete(v6, 0x20uLL);
    v15 = (struct _Unwind_Exception *)v14;
    while ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      v15 = v16;
    }
    M_p = v3->m_data._M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v3->m_data._M_dataplus._M_p )
      operator delete(M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v15);
  }
  v3->m_children = v6;
};

// Line 191: range 000000000C2A74DA-000000000C2A75EA
void __fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *rhs)
{
  std::forward_iterator_tag v2; // cl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r12
  const boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *m_children; // r13
  char *M_p; // rsi
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v8; // rax
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v9; // rbp
  struct _Unwind_Exception *v10; // r13
  struct _Unwind_Exception *v11; // rax
  std::string::pointer v12; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  p_anon_0 = &this->m_data._anon_0;
  this->m_data._M_dataplus._M_p = this->m_data._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8();
    goto LABEL_8;
  }
  M_p = rhs->m_data._M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->m_data._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8();
    goto LABEL_9;
  }
  std::string::_M_construct<char *>(&this->m_data, M_p, &M_p[rhs->m_data._M_string_length], v2);
  if ( !*(_BYTE *)(((unsigned __int64)&rhs->m_children >> 3) + 0x7FFF8000) )
  {
    m_children = (const boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)rhs->m_children;
    v8 = (boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)operator new(0x20uLL);
    goto LABEL_10;
  }
LABEL_9:
  __asan_report_load8();
LABEL_10:
  v9 = v8;
  boost::multi_index::multi_index_container<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>::multi_index_container(
    v8,
    m_children);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_children >> 3) + 0x7FFF8000) )
  {
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    operator delete(v9, 0x20uLL);
    while ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      v10 = v11;
    }
    v12 = this->m_data._M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->m_data._M_dataplus._M_p )
      operator delete(v12);
    __asan_handle_no_return(v12);
    _Unwind_Resume(v10);
  }
  this->m_children = v9;
};

// Line 199: range 000000000C2A75F0-000000000C2A7703
boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::operator=(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *rhs)
{
  std::forward_iterator_tag v2; // cl
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v3; // rbp
  const boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *m_children; // r12
  char *M_p; // rsi
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v7; // rax
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v8; // rbx
  void *v9; // rax
  struct _Unwind_Exception *v11; // rax
  struct _Unwind_Exception *v12; // rbp
  std::string::pointer v13; // rdi
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > v14; // [rsp+0h] [rbp-48h] BYREF

  v14.m_data._M_dataplus._M_p = v14.m_data._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_6;
  }
  v3 = this;
  M_p = rhs->m_data._M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->m_data._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8();
    goto LABEL_7;
  }
  std::string::_M_construct<char *>(&v14.m_data, M_p, &M_p[rhs->m_data._M_string_length], v2);
  if ( !*(_BYTE *)(((unsigned __int64)&rhs->m_children >> 3) + 0x7FFF8000) )
  {
    m_children = (const boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)rhs->m_children;
    v7 = (boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)operator new(0x20uLL);
    goto LABEL_8;
  }
LABEL_7:
  __asan_report_load8();
LABEL_8:
  v8 = v7;
  boost::multi_index::multi_index_container<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>::multi_index_container(
    v7,
    m_children);
  v14.m_children = v8;
  boost::swap<std::string,std::string>(&v14.m_data, &v3->m_data);
  v9 = v14.m_children;
  if ( *(_BYTE *)(((unsigned __int64)&v3->m_children >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    v12 = v11;
    operator delete(v8, 0x20uLL);
    v13 = v14.m_data._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14.m_data._M_dataplus._M_p != &v14.m_data._anon_0 )
      operator delete(v14.m_data._M_dataplus._M_p);
    __asan_handle_no_return(v13);
    _Unwind_Resume(v12);
  }
  v14.m_children = v3->m_children;
  v3->m_children = v9;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v14);
  return v3;
};

// Line 206: range 000000000C289794-000000000C289A28
void __fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this)
{
  unsigned __int64 v1; // rbx
  char *v2; // r12
  void **m_children; // r13
  void **v4; // r14
  unsigned __int64 p_m_children; // rdi
  char *v7; // rax

  p_m_children = (unsigned __int64)&this->m_children;
  if ( *(_BYTE *)((p_m_children >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_8:
    __asan_report_load8();
    goto LABEL_9;
  }
  m_children = (void **)this->m_children;
  if ( !m_children )
    goto LABEL_25;
  v4 = m_children + 2;
  p_m_children = (unsigned __int64)(m_children + 1);
  if ( *(_BYTE *)(((unsigned __int64)(m_children + 1) >> 3) + 0x7FFF8000) )
    goto LABEL_8;
  v7 = (char *)m_children[1];
  p_m_children = (unsigned __int64)(v7 + 104);
  if ( *(_BYTE *)(((unsigned __int64)(v7 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8();
    goto LABEL_10;
  }
  v1 = *((_QWORD *)v7 + 13);
  if ( v1 )
    v1 -= 96LL;
  while ( 1 )
  {
    p_m_children = (unsigned __int64)(v4 - 1);
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 1) >> 3) + 0x7FFF8000) )
    {
LABEL_10:
      __asan_report_load8();
LABEL_11:
      __asan_report_load8();
LABEL_12:
      __asan_report_load8();
LABEL_13:
      operator delete((void *)p_m_children);
      goto LABEL_14;
    }
    if ( *(v4 - 1) == (void *)v1 )
      break;
    p_m_children = v1 + 104;
    if ( *(_BYTE *)(((v1 + 104) >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    v2 = *(char **)(v1 + 104);
    if ( v2 )
      v2 -= 96;
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v1 + 32));
    p_m_children = v1;
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      goto LABEL_12;
    p_m_children = *(_QWORD *)v1;
    if ( *(_QWORD *)v1 != v1 + 16 )
      goto LABEL_13;
LABEL_14:
    operator delete((void *)v1);
    v1 = (unsigned __int64)v2;
  }
  if ( *(_BYTE *)(((unsigned __int64)(m_children + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_30:
    __asan_report_load8();
    std::unique_ptr<common::tools::PTree::Impl>::~unique_ptr((std::unique_ptr<common::tools::PTree::Impl> *const)this);
    return;
  }
  operator delete(m_children[1]);
  operator delete(m_children, 0x20uLL);
LABEL_25:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_30;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->m_data._M_dataplus._M_p != &this->m_data._anon_0 )
    operator delete(this->m_data._M_dataplus._M_p);
};

// Line 571: range 000000000C28F044-000000000C28F295
boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *path)
{
  std::forward_iterator_tag v2; // cl
  unsigned __int64 v5; // r12
  _DWORD *v6; // r13
  char *M_p; // rsi
  void *p_M_string_length; // rdi
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v9; // rax
  __int64 v10; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v11; // r14
  char *v12; // rdi
  std::allocator<char> __a; // [rsp+Fh] [rbp-F9h] BYREF
  boost::property_tree::ptree_bad_path v15; // [rsp+10h] [rbp-F8h] BYREF
  std::string w; // [rsp+30h] [rbp-D8h] BYREF
  char v17[184]; // [rsp+50h] [rbp-B8h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(128LL);
    if ( v10 )
      v5 = v10;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 48 48 5 p:573";
  *(_QWORD *)(v5 + 16) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -202116109;
  *(_QWORD *)(v5 + 48) = v5 + 64;
  if ( *(_BYTE *)(((unsigned __int64)path >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (void *)path;
    __asan_report_load8();
    goto LABEL_10;
  }
  M_p = path->m_value._M_dataplus._M_p;
  p_M_string_length = &path->m_value._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&path->m_value._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8();
    goto LABEL_11;
  }
  std::string::_M_construct<char *>((std::string *const)(v5 + 48), M_p, &M_p[path->m_value._M_string_length], v2);
  p_M_string_length = &path->m_separator;
  if ( *(char *)(((unsigned __int64)&path->m_separator >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_11:
    __asan_report_load1(p_M_string_length);
    goto LABEL_12;
  }
  *(_BYTE *)(v5 + 80) = path->m_separator;
  *(_QWORD *)(v5 + 88) = *(_QWORD *)(v5 + 48);
  if ( !*(_BYTE *)(((unsigned __int64)&path->m_start >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v5 + 88) += path->m_start._M_current - path->m_value._M_dataplus._M_p;
    v9 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::walk_path(
           this,
           (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *)(v5 + 48));
    goto LABEL_13;
  }
LABEL_12:
  __asan_report_load8();
LABEL_13:
  v11 = v9;
  if ( !v9 )
  {
    std::string::basic_string<std::allocator<char>>(&w, "No such node", &__a);
    boost::property_tree::ptree_bad_path::ptree_bad_path<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>>(
      &v15,
      &w,
      path);
    __asan_handle_no_return(&v15);
    boost::exception_detail::throw_exception_<boost::property_tree::ptree_bad_path>(
      &v15,
      "boost::property_tree::basic_ptree<K, D, C>& boost::property_tree::basic_ptree<Key, Data, KeyCompare>::get_child(co"
      "nst path_type&) [with Key = std::__cxx11::basic_string<char>; Data = std::__cxx11::basic_string<char>; KeyCompare "
      "= std::less<std::__cxx11::basic_string<char> >; boost::property_tree::basic_ptree<Key, Data, KeyCompare>::path_typ"
      "e = boost::property_tree::string_path<std::__cxx11::basic_string<char>, boost::property_tree::id_translator<std::_"
      "_cxx11::basic_string<char> > >]",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/detail/ptree_implementation.hpp",
      576);
  }
  v12 = *(char **)(v5 + 48);
  if ( v12 != (char *)(v5 + 64) )
    operator delete(v12);
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v11;
};

// Line 610: range 000000000C28F29A-000000000C28F4B7
boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> __fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child_optional(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > **a1,
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this,
        unsigned __int64 path,
        std::forward_iterator_tag a4)
{
  unsigned __int64 v6; // r12
  _DWORD *v7; // r14
  const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *v8; // rdi
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v9; // rax
  __int64 v10; // rax
  char *v11; // rdi
  struct _Unwind_Exception *v13; // rbp
  char *v14; // rdi
  char v15[184]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(128LL);
    if ( v10 )
      v6 = v10;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 48 48 5 p:612";
  *(_QWORD *)(v6 + 16) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child_optional;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862723] = -202116109;
  *(_QWORD *)(v6 + 48) = v6 + 64;
  if ( *(_BYTE *)((path >> 3) + 0x7FFF8000) )
  {
    v8 = (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *)path;
    __asan_report_load8();
    goto LABEL_10;
  }
  v8 = (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *)(path + 8);
  if ( *(_BYTE *)(((path + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8();
    goto LABEL_11;
  }
  std::string::_M_construct<char *>(
    (std::string *const)(v6 + 48),
    *(char **)path,
    (char *)(*(_QWORD *)(path + 8) + *(_QWORD *)path),
    a4);
  v8 = (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *)(path + 32);
  if ( *(char *)(((path + 32) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_11:
    __asan_report_load1(v8);
    goto LABEL_12;
  }
  *(_BYTE *)(v6 + 80) = *(_BYTE *)(path + 32);
  *(_QWORD *)(v6 + 88) = *(_QWORD *)(v6 + 48);
  if ( !*(_BYTE *)(((path + 40) >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v6 + 88) += *(_QWORD *)(path + 40) - *(_QWORD *)path;
    v9 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::walk_path(
           this,
           (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *)(v6 + 48));
    goto LABEL_13;
  }
LABEL_12:
  __asan_report_load8();
LABEL_13:
  if ( v9 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
    {
      *a1 = v9;
      goto LABEL_16;
    }
LABEL_24:
    v13 = (struct _Unwind_Exception *)__asan_report_store8();
    v14 = *(char **)(v6 + 48);
    if ( v14 != (char *)(v6 + 64) )
      operator delete(v14);
    __asan_handle_no_return(v14);
    _Unwind_Resume(v13);
  }
  if ( *(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_24;
  }
  *a1 = 0LL;
LABEL_16:
  v11 = *(char **)(v6 + 48);
  if ( v11 != (char *)(v6 + 64) )
    operator delete(v11);
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&>)a1;
};

// Line 634: range 000000000C2AD822-000000000C2AE557
boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put_child(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *path,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *value)
{
  unsigned __int64 v3; // r13
  _DWORD *v6; // r15
  char *M_p; // rsi
  void *p_M_string_length; // rdi
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v9; // rax
  __int64 v10; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v11; // r14
  void *m_children; // rdi
  const void **v13; // rbp
  const void **v14; // rdx
  size_t *v15; // rax
  signed __int64 v16; // rax
  const void **v17; // rax
  size_t v18; // rax
  const void **v19; // rdi
  size_t *v20; // rax
  size_t v21; // rdx
  int v22; // eax
  _QWORD *v23; // rax
  unsigned int v24; // eax
  std::forward_iterator_tag v25; // cl
  unsigned __int64 v26; // r13
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v27; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v28; // rbp
  char *v29; // rdi
  char *v30; // rdi
  char *v32; // rdi
  char *v33; // rdi
  char *v34; // rdi
  const void **v35; // rdx
  char *v36; // r12
  const void **v37; // rdx
  size_t *v38; // rax
  signed __int64 v39; // rax
  const void **v40; // rax
  std::string::size_type M_string_length; // r14
  size_t v42; // rax
  const void **v43; // r13
  std::forward_iterator_tag v44; // cl
  unsigned __int64 v45; // rbp
  void *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rdi
  __int64 v50; // rax
  _QWORD *v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  std::string::size_type v54; // rdx
  unsigned __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  struct _Unwind_Exception *v58; // rbp
  const void **p_M_p; // [rsp+8h] [rbp-1E0h]
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *parent; // [rsp+10h] [rbp-1D8h]
  unsigned __int64 v61; // [rsp+18h] [rbp-1D0h]
  _BOOL4 v62; // [rsp+20h] [rbp-1C8h]
  const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *valueb; // [rsp+30h] [rbp-1B8h]
  std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > v65; // [rsp+40h] [rbp-1A8h] BYREF
  char v66[344]; // [rsp+90h] [rbp-158h] BYREF

  v61 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_3(288LL);
    if ( v10 )
      v61 = v10;
  }
  *(_QWORD *)v61 = 1102416563LL;
  *(_QWORD *)(v61 + 8) = "5 48 8 6 el:641 80 8 6 __size 112 8 7 __osize 144 32 12 fragment:640 208 48 5 p:637";
  *(_QWORD *)(v61 + 16) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put_child;
  v6 = (_DWORD *)(v61 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = -234881024;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  *(_QWORD *)(v61 + 208) = v61 + 224;
  if ( *(_BYTE *)(((unsigned __int64)path >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (void *)path;
    __asan_report_load8();
    goto LABEL_10;
  }
  M_p = path->m_value._M_dataplus._M_p;
  p_M_string_length = &path->m_value._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&path->m_value._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8();
    goto LABEL_11;
  }
  std::string::_M_construct<char *>(
    (std::string *const)(v61 + 208),
    M_p,
    &M_p[path->m_value._M_string_length],
    (std::forward_iterator_tag)boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put_child);
  p_M_string_length = &path->m_separator;
  if ( *(char *)(((unsigned __int64)&path->m_separator >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_11:
    __asan_report_load1(p_M_string_length);
    goto LABEL_12;
  }
  *(_BYTE *)(v61 + 240) = path->m_separator;
  *(_QWORD *)(v61 + 248) = *(_QWORD *)(v61 + 208);
  if ( !*(_BYTE *)(((unsigned __int64)&path->m_start >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v61 + 248) += path->m_start._M_current - path->m_value._M_dataplus._M_p;
    v9 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::force_path(
           this,
           (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *)(v61 + 208));
    goto LABEL_13;
  }
LABEL_12:
  __asan_report_load8();
LABEL_13:
  v11 = v9;
  parent = v9;
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::reduce(
    (boost::property_tree::id_translator<std::string >::external_type *)(v61 + 144),
    (boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > *const)(v61 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&v11->m_children >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_20;
  }
  m_children = parent->m_children;
  if ( *(_BYTE *)((((unsigned __int64)m_children + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8();
    goto LABEL_21;
  }
  v11 = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)*((_QWORD *)m_children + 1);
  if ( *(_BYTE *)(((unsigned __int64)&v11[1].m_children >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8();
    goto LABEL_22;
  }
  if ( ((unsigned __int64)v11[1].m_children & 0xFFFFFFFFFFFFFFFELL) == 0 )
  {
LABEL_22:
    v13 = 0LL;
    goto LABEL_18;
  }
  v13 = (const void **)(((unsigned __int64)v11[1].m_children & 0xFFFFFFFFFFFFFFFELL) - 72);
LABEL_18:
  p_M_p = (const void **)&v11->m_data._M_dataplus._M_p;
  while ( v13 )
  {
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_25:
      v15 = (size_t *)(v61 + 112);
      goto LABEL_41;
    }
    v3 = (unsigned __int64)v13[1];
    *(_QWORD *)(v61 + 80) = v3;
    this = *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const *)(v61 + 152);
    *(_QWORD *)(v61 + 112) = this;
    if ( v3 > (unsigned __int64)this )
      goto LABEL_25;
    v15 = (size_t *)(v61 + 80);
LABEL_41:
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v18 = *v15;
      if ( !*(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        if ( v18 )
        {
          LODWORD(v16) = memcmp(*v14, *(const void **)(v61 + 144), v18);
          if ( (_DWORD)v16 )
            goto LABEL_31;
        }
        goto LABEL_28;
      }
    }
    __asan_report_load8();
LABEL_28:
    v16 = v3 - (_QWORD)this;
    if ( (__int64)(v3 - (_QWORD)this) > 0x7FFFFFFF )
    {
      LODWORD(v16) = 0x7FFFFFFF;
    }
    else if ( v16 < (__int64)0xFFFFFFFF80000000LL )
    {
      LODWORD(v16) = 0x80000000;
    }
LABEL_31:
    if ( (int)v16 >= 0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(v13 + 10) >> 3) + 0x7FFF8000) )
      {
        v17 = (const void **)v13[10];
        if ( v17 )
          v17 -= 9;
        p_M_p = v13;
        goto LABEL_36;
      }
      __asan_report_load8();
    }
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      break;
    }
    v17 = (const void **)v13[11];
    if ( v17 )
      v17 -= 9;
LABEL_36:
    v13 = v17;
  }
  if ( v11 == (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)p_M_p )
    goto LABEL_65;
  v19 = p_M_p;
  this = *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const *)(v61 + 152);
  *(_QWORD *)(v61 + 80) = this;
  if ( *(_BYTE *)(((unsigned __int64)(p_M_p + 1) >> 3) + 0x7FFF8000) )
  {
    v19 = p_M_p + 1;
    __asan_report_load8();
  }
  else
  {
    v3 = (unsigned __int64)p_M_p[1];
    *(_QWORD *)(v61 + 112) = v3;
    if ( (unsigned __int64)this <= v3 )
    {
      v20 = (size_t *)(v61 + 80);
      goto LABEL_56;
    }
  }
  v20 = (size_t *)(v61 + 112);
LABEL_56:
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_71;
  }
  v21 = *v20;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8();
    goto LABEL_72;
  }
  if ( v21 )
  {
    v22 = memcmp(*(const void **)(v61 + 144), *v19, v21);
    if ( v22 )
      goto LABEL_63;
  }
  this = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)((char *)this - v3);
  if ( (__int64)this <= 0x7FFFFFFF )
  {
    if ( (__int64)this < (__int64)0xFFFFFFFF80000000LL )
      v22 = 0x80000000;
    else
      v22 = (int)this;
    goto LABEL_63;
  }
LABEL_72:
  v22 = 0x7FFFFFFF;
LABEL_63:
  if ( v22 >= 0 )
    v11 = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)p_M_p;
LABEL_65:
  *(_QWORD *)(v61 + 48) = v11;
  v23 = parent->m_children;
  if ( *(_BYTE *)(((unsigned __int64)(v23 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_75;
  }
  *(_QWORD *)(v61 + 112) = v23[1];
  LOBYTE(v24) = boost::multi_index::detail::operator==<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>(
                  (const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *)(v61 + 48),
                  (const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *)(v61 + 112));
  v26 = v24;
  if ( !(_BYTE)v24 )
  {
    v27 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::operator=(
            (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(*(_QWORD *)(v61 + 48) + 32LL),
            value);
LABEL_75:
    v28 = v27;
    goto LABEL_76;
  }
  v65.first._M_dataplus._M_p = v65.first._anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    (std::string *const)&v65.first,
    *(char **)(v61 + 144),
    (char *)(*(_QWORD *)(v61 + 152) + *(_QWORD *)(v61 + 144)),
    v25);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(&v65.second, value);
  if ( *(_BYTE *)(((unsigned __int64)&parent->m_children >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_96;
  }
  v34 = (char *)parent->m_children;
  this = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v34 + 16);
  if ( *(_BYTE *)(((unsigned __int64)(v34 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8();
    goto LABEL_97;
  }
  parent = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *)*((_QWORD *)v34 + 1);
  p_M_p = (const void **)v34;
  if ( *(_BYTE *)(((unsigned __int64)(v34 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_load8();
    goto LABEL_98;
  }
  v35 = (const void **)*((_QWORD *)v34 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v35 + 9) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8();
    goto LABEL_99;
  }
  if ( ((unsigned __int64)v35[9] & 0xFFFFFFFFFFFFFFFELL) != 0 )
  {
    v13 = (const void **)(((unsigned __int64)v35[9] & 0xFFFFFFFFFFFFFFFELL) - 72);
    valueb = (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *)(v34 + 16);
    v36 = (char *)(v61 + 288);
    goto LABEL_113;
  }
LABEL_99:
  valueb = this;
  v36 = (char *)(v61 + 288);
LABEL_113:
  while ( 2 )
  {
    if ( v13 )
    {
      v37 = v13;
      M_string_length = v65.first._M_string_length;
      *((_QWORD *)v36 - 26) = v65.first._M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)(v13 + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v26 = (unsigned __int64)v13[1];
        *((_QWORD *)v36 - 22) = v26;
        if ( M_string_length <= v26 )
        {
          v38 = (size_t *)(v36 - 208);
LABEL_117:
          if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8();
          }
          else
          {
            v42 = *v38;
            if ( !*(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
            {
              if ( !v42 )
                goto LABEL_104;
              LODWORD(v39) = memcmp(v65.first._M_dataplus._M_p, *v37, v42);
              if ( !(_DWORD)v39 )
                goto LABEL_104;
              goto LABEL_107;
            }
          }
          __asan_report_load8();
LABEL_104:
          v39 = M_string_length - v26;
          if ( (__int64)(M_string_length - v26) > 0x7FFFFFFF )
          {
            LODWORD(v39) = 0x7FFFFFFF;
          }
          else if ( v39 < (__int64)0xFFFFFFFF80000000LL )
          {
            LODWORD(v39) = 0x80000000;
          }
LABEL_107:
          v26 = (unsigned int)v39 >> 31;
          if ( (int)v39 < 0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)(v13 + 10) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8();
LABEL_126:
              __asan_report_load8();
              break;
            }
            v40 = (const void **)v13[10];
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)(v13 + 11) >> 3) + 0x7FFF8000) )
              goto LABEL_126;
            v40 = (const void **)v13[11];
          }
          if ( v40 )
            v40 -= 9;
          v35 = v13;
          v13 = v40;
          continue;
        }
      }
      v38 = (size_t *)(v36 - 176);
      goto LABEL_117;
    }
    break;
  }
  v62 = (_BYTE)v26 == 0;
  v43 = v35 + 9;
  v45 = operator new(0x70uLL);
  if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    *(_QWORD *)v45 = v45 + 16;
    std::string::_M_construct<char *>(
      (std::string *const)v45,
      v65.first._M_dataplus._M_p,
      &v65.first._M_dataplus._M_p[v65.first._M_string_length],
      v44);
  }
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v45 + 32),
    &v65.second);
  if ( *(_BYTE *)(((unsigned __int64)&valueb[-1].m_children >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    __cxa_begin_catch(v46);
    operator delete((void *)v45);
    __asan_handle_no_return(v45);
    __cxa_rethrow();
  }
  v47 = (__int64)valueb[-1].m_children;
  v48 = v47 + 72;
  v49 = v45 + 72;
  if ( !v62 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(v43 + 1) >> 3) + 0x7FFF8000) )
    {
      v49 = (unsigned __int64)(v43 + 1);
      v47 = __asan_report_store8();
    }
    else
    {
      v43[1] = (const void *)v49;
      if ( (const void **)v48 != v43 )
      {
        if ( !*(_BYTE *)(((unsigned __int64)(v47 + 80) >> 3) + 0x7FFF8000) )
        {
          if ( v43 == *(const void ***)(v47 + 80) )
            *(_QWORD *)(v47 + 80) = v49;
          goto LABEL_135;
        }
        goto LABEL_167;
      }
    }
    if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      *(_QWORD *)(v47 + 72) = v49 | *(_QWORD *)(v47 + 72) & 1LL;
      if ( !*(_BYTE *)(((v48 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v48 + 16) = v49;
        goto LABEL_135;
      }
    }
    __asan_report_store8();
LABEL_167:
    __asan_report_load8();
    goto LABEL_168;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v43 + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_168:
    v50 = __asan_report_store8();
    goto LABEL_169;
  }
  v43[2] = (const void *)v49;
  v50 = v47 + 88;
  if ( *(_BYTE *)(((v48 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_169:
    v49 = v50;
    __asan_report_load8();
    goto LABEL_170;
  }
  if ( v43 != *(const void ***)(v48 + 16) )
    goto LABEL_135;
LABEL_170:
  *(_QWORD *)(v48 + 16) = v49;
LABEL_135:
  if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_172;
  }
  *(_QWORD *)(v45 + 72) = *(_QWORD *)(v45 + 72) & 1LL | (unsigned __int64)v43;
  if ( *(_BYTE *)(((v49 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_172:
    __asan_report_store8();
    goto LABEL_173;
  }
  *(_QWORD *)(v49 + 8) = 0LL;
  if ( *(_BYTE *)(((v49 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_173:
    __asan_report_store8();
    goto LABEL_174;
  }
  *(_QWORD *)(v49 + 16) = 0LL;
  *(_QWORD *)(v61 + 112) = v48;
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char>>::rebalance(
    v49,
    (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::parent_ref)(v61 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&valueb[-1].m_children >> 3) + 0x7FFF8000) )
  {
LABEL_174:
    __asan_report_load8();
    goto LABEL_175;
  }
  v51 = valueb[-1].m_children;
  v52 = v45 + 96;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 12) >> 3) + 0x7FFF8000) )
  {
LABEL_175:
    __asan_report_load8();
    goto LABEL_176;
  }
  if ( *(_BYTE *)(((v45 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_176:
    __asan_report_store8();
    goto LABEL_177;
  }
  *(_QWORD *)(v45 + 96) = v51[12];
  if ( *(_BYTE *)(((v45 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_177:
    __asan_report_store8();
    goto LABEL_178;
  }
  *(_QWORD *)(v45 + 104) = v51 + 12;
  v51[12] = v52;
  v53 = *(_QWORD *)(v45 + 96);
  if ( *(_BYTE *)(((unsigned __int64)(v53 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_178:
    __asan_report_store8();
    goto LABEL_179;
  }
  *(_QWORD *)(v53 + 8) = v52;
  if ( *(_BYTE *)(((unsigned __int64)(p_M_p + 3) >> 3) + 0x7FFF8000) )
  {
LABEL_179:
    __asan_report_load8();
    goto LABEL_180;
  }
  p_M_p[3] = (char *)p_M_p[3] + 1;
  if ( *(_BYTE *)(((unsigned __int64)&valueb[-1].m_children >> 3) + 0x7FFF8000) )
  {
LABEL_180:
    __asan_report_load8();
    goto LABEL_181;
  }
  if ( parent != valueb[-1].m_children )
  {
    v54 = v45 + 96;
    if ( !*(_BYTE *)(((v45 + 104) >> 3) + 0x7FFF8000) )
    {
      v55 = *(_QWORD *)(v45 + 104);
      if ( !*(_BYTE *)(((v45 + 96) >> 3) + 0x7FFF8000) )
      {
        v56 = *(_QWORD *)(v45 + 96);
        if ( !*(_BYTE *)(((unsigned __int64)(v56 + 8) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v56 + 8) = v55;
          if ( !*(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v55 = *(_QWORD *)(v45 + 96);
            if ( !*(_BYTE *)(((unsigned __int64)&parent[2].m_data._anon_0 >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v45 + 96) = parent[2].m_data._anon_0._M_allocated_capacity;
              *(_QWORD *)(v45 + 104) = (char *)parent + 96;
              parent[2].m_data._anon_0._M_allocated_capacity = v54;
              v57 = *(_QWORD *)(v45 + 96);
              if ( !*(_BYTE *)(((unsigned __int64)(v57 + 8) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v57 + 8) = v54;
                goto LABEL_153;
              }
LABEL_186:
              v58 = (struct _Unwind_Exception *)__asan_report_store8();
              std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::~pair(&v65);
              v32 = *(char **)(v61 + 144);
              if ( v32 != (char *)(v61 + 160) )
                operator delete(v32);
              v33 = *(char **)(v61 + 208);
              if ( v33 != (char *)(v61 + 224) )
                operator delete(v33);
              __asan_handle_no_return(v33);
              _Unwind_Resume(v58);
            }
LABEL_185:
            __asan_report_load8();
            goto LABEL_186;
          }
LABEL_184:
          __asan_report_store8();
          goto LABEL_185;
        }
LABEL_183:
        __asan_report_store8();
        goto LABEL_184;
      }
LABEL_182:
      __asan_report_load8();
      goto LABEL_183;
    }
LABEL_181:
    __asan_report_load8();
    goto LABEL_182;
  }
LABEL_153:
  v28 = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(v45 + 32);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v65.second);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v65.first._M_dataplus._M_p != &v65.first._anon_0 )
    operator delete(v65.first._M_dataplus._M_p);
LABEL_76:
  v29 = *(char **)(v61 + 144);
  if ( v29 != (char *)(v61 + 160) )
    operator delete(v29);
  v30 = *(char **)(v61 + 208);
  if ( v30 != (char *)(v61 + 224) )
    operator delete(v30);
  if ( v66 == (char *)v61 )
  {
    *(_QWORD *)((v61 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v61 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v61 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v61 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v61 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v61 = 1172321806LL;
    *(_QWORD *)((v61 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v61 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v61 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v61 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v61 >> 3) + 0x7FFF8020) = -168430091;
  }
  return v28;
};

// Line 652: range 000000000C2ACDAE-000000000C2AD81D
boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *path,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *value)
{
  std::forward_iterator_tag v3; // cl
  unsigned __int64 v7; // r14
  _DWORD *v8; // r12
  char *M_p; // rsi
  void *p_M_string_length; // rdi
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v11; // rax
  __int64 v12; // rax
  void *p_anon_0; // r13
  std::forward_iterator_tag v14; // cl
  std::forward_iterator_tag v15; // cl
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v16; // rax
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v17; // rbp
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v18; // rdi
  const void **v19; // rdx
  const void **v20; // rbp
  unsigned int v21; // ecx
  char *v22; // rdi
  char *v23; // rdi
  const void **v24; // rdx
  size_t *v25; // rax
  signed __int64 v26; // rax
  const void **v27; // rax
  size_t v28; // rax
  std::forward_iterator_tag v29; // cl
  unsigned __int64 v30; // rbp
  void *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v43; // rbp
  char *v44; // rdi
  char *v45; // rdi
  struct _Unwind_Exception *v47; // rbp
  const void **v48; // [rsp+8h] [rbp-1B0h]
  std::string::size_type v49; // [rsp+10h] [rbp-1A8h]
  std::string::size_type M_string_length; // [rsp+18h] [rbp-1A0h]
  std::string::size_type v51; // [rsp+20h] [rbp-198h]
  _BOOL4 v52; // [rsp+20h] [rbp-198h]
  std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > v53; // [rsp+30h] [rbp-188h] BYREF
  char v54[312]; // [rsp+80h] [rbp-138h] BYREF

  v7 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(256LL);
    if ( v12 )
      v7 = v12;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 8 6 __size 80 8 7 __osize 112 32 12 fragment:658 176 48 5 p:655";
  *(_QWORD *)(v7 + 16) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234881024;
  v8[536862722] = -234881024;
  v8[536862723] = 62194;
  v8[536862724] = -219021312;
  v8[536862725] = 62194;
  v8[536862727] = -202116109;
  *(_QWORD *)(v7 + 176) = v7 + 192;
  if ( *(_BYTE *)(((unsigned __int64)path >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (void *)path;
    __asan_report_load8();
    goto LABEL_10;
  }
  M_p = path->m_value._M_dataplus._M_p;
  p_M_string_length = &path->m_value._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&path->m_value._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8();
    goto LABEL_11;
  }
  std::string::_M_construct<char *>((std::string *const)(v7 + 176), M_p, &M_p[path->m_value._M_string_length], v3);
  p_M_string_length = &path->m_separator;
  if ( *(char *)(((unsigned __int64)&path->m_separator >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_11:
    __asan_report_load1(p_M_string_length);
    goto LABEL_12;
  }
  *(_BYTE *)(v7 + 208) = path->m_separator;
  *(_QWORD *)(v7 + 216) = *(_QWORD *)(v7 + 176);
  if ( !*(_BYTE *)(((unsigned __int64)&path->m_start >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v7 + 216) += path->m_start._M_current - path->m_value._M_dataplus._M_p;
    v11 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::force_path(
            this,
            (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *)(v7 + 176));
    goto LABEL_13;
  }
LABEL_12:
  __asan_report_load8();
LABEL_13:
  p_anon_0 = v11;
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::reduce(
    (boost::property_tree::id_translator<std::string >::external_type *)(v7 + 112),
    (boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > *const)(v7 + 176));
  v53.first._M_dataplus._M_p = v53.first._anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    (std::string *const)&v53.first,
    *(char **)(v7 + 112),
    (char *)(*(_QWORD *)(v7 + 120) + *(_QWORD *)(v7 + 112)),
    v14);
  v53.second.m_data._M_dataplus._M_p = v53.second.m_data._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)&value->m_data._M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      &v53.second.m_data,
      value->m_data._M_dataplus._M_p,
      &value->m_data._M_dataplus._M_p[value->m_data._M_string_length],
      v15);
    goto LABEL_18;
  }
  __asan_report_load8();
LABEL_18:
  if ( *(_BYTE *)(((unsigned __int64)&value->m_children >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    this = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)value->m_children;
    v16 = (boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)operator new(0x20uLL);
  }
  v17 = v16;
  boost::multi_index::multi_index_container<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>::multi_index_container(
    v16,
    (const boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)this);
  v53.second.m_children = v17;
  if ( *(_BYTE *)((((unsigned __int64)p_anon_0 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_29;
  }
  v18 = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)*((_QWORD *)p_anon_0 + 4);
  p_anon_0 = &v18->m_data._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&v18->m_data._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8();
    goto LABEL_30;
  }
  M_string_length = v18->m_data._M_string_length;
  this = v18;
  if ( *(_BYTE *)(((unsigned __int64)&v18->m_data._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8();
    goto LABEL_31;
  }
  v19 = (const void **)v18->m_data._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)(v19 + 9) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8();
    goto LABEL_32;
  }
  if ( ((unsigned __int64)v19[9] & 0xFFFFFFFFFFFFFFFELL) == 0 )
  {
LABEL_32:
    v20 = 0LL;
    goto LABEL_27;
  }
  v20 = (const void **)(((unsigned __int64)v19[9] & 0xFFFFFFFFFFFFFFFELL) - 72);
LABEL_27:
  LOBYTE(v21) = 1;
  while ( v20 )
  {
    v24 = v20;
    v49 = v53.first._M_string_length;
    *(_QWORD *)(v7 + 48) = v53.first._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)(v20 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_39:
      v25 = (size_t *)(v7 + 80);
      goto LABEL_55;
    }
    v51 = (std::string::size_type)v20[1];
    *(_QWORD *)(v7 + 80) = v51;
    if ( v49 > v51 )
      goto LABEL_39;
    v25 = (size_t *)(v7 + 48);
LABEL_55:
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v28 = *v25;
      if ( !*(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        if ( v28 )
        {
          LODWORD(v26) = memcmp(v53.first._M_dataplus._M_p, *v24, v28);
          if ( (_DWORD)v26 )
            goto LABEL_45;
        }
        goto LABEL_42;
      }
    }
    __asan_report_load8();
LABEL_42:
    v26 = v49 - v51;
    if ( (__int64)(v49 - v51) > 0x7FFFFFFF )
    {
      LODWORD(v26) = 0x7FFFFFFF;
    }
    else if ( v26 < (__int64)0xFFFFFFFF80000000LL )
    {
      LODWORD(v26) = 0x80000000;
    }
LABEL_45:
    v21 = (unsigned int)v26 >> 31;
    if ( (int)v26 < 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(v20 + 10) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_64:
        __asan_report_load8();
        break;
      }
      v27 = (const void **)v20[10];
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)(v20 + 11) >> 3) + 0x7FFF8000) )
        goto LABEL_64;
      v27 = (const void **)v20[11];
    }
    if ( v27 )
      v27 -= 9;
    v19 = v20;
    v20 = v27;
  }
  v52 = (_BYTE)v21 == 0;
  v48 = v19 + 9;
  v30 = operator new(0x70uLL);
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    *(_QWORD *)v30 = v30 + 16;
    std::string::_M_construct<char *>(
      (std::string *const)v30,
      v53.first._M_dataplus._M_p,
      &v53.first._M_dataplus._M_p[v53.first._M_string_length],
      v29);
  }
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v30 + 32),
    &v53.second);
  if ( *(_BYTE *)((((unsigned __int64)p_anon_0 - 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    __cxa_begin_catch(v31);
    operator delete((void *)v30);
    __asan_handle_no_return(v30);
    __cxa_rethrow();
  }
  v32 = *((_QWORD *)p_anon_0 - 1);
  v33 = v32 + 72;
  v34 = v30 + 72;
  if ( !v52 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(v48 + 1) >> 3) + 0x7FFF8000) )
    {
      v34 = (unsigned __int64)(v48 + 1);
      v32 = __asan_report_store8();
    }
    else
    {
      v48[1] = (const void *)v34;
      if ( (const void **)v33 != v48 )
      {
        if ( !*(_BYTE *)(((unsigned __int64)(v32 + 80) >> 3) + 0x7FFF8000) )
        {
          if ( v48 == *(const void ***)(v32 + 80) )
            *(_QWORD *)(v32 + 80) = v34;
          goto LABEL_73;
        }
        goto LABEL_112;
      }
    }
    if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      *(_QWORD *)(v32 + 72) = v34 | *(_QWORD *)(v32 + 72) & 1LL;
      if ( !*(_BYTE *)(((v33 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v33 + 16) = v34;
        goto LABEL_73;
      }
    }
    __asan_report_store8();
LABEL_112:
    __asan_report_load8();
    goto LABEL_113;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v48 + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v35 = __asan_report_store8();
    goto LABEL_114;
  }
  v48[2] = (const void *)v34;
  v35 = v32 + 88;
  if ( *(_BYTE *)(((v33 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_114:
    v34 = v35;
    __asan_report_load8();
    goto LABEL_115;
  }
  if ( v48 != *(const void ***)(v33 + 16) )
    goto LABEL_73;
LABEL_115:
  *(_QWORD *)(v33 + 16) = v34;
LABEL_73:
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_117;
  }
  *(_QWORD *)(v30 + 72) = (unsigned __int64)v48 | *(_QWORD *)(v30 + 72) & 1LL;
  if ( *(_BYTE *)(((v34 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_117:
    __asan_report_store8();
    goto LABEL_118;
  }
  *(_QWORD *)(v34 + 8) = 0LL;
  if ( *(_BYTE *)(((v34 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_118:
    __asan_report_store8();
    goto LABEL_119;
  }
  *(_QWORD *)(v34 + 16) = 0LL;
  *(_QWORD *)(v7 + 80) = v33;
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char>>::rebalance(
    v34,
    (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::parent_ref)(v7 + 80));
  if ( *(_BYTE *)((((unsigned __int64)p_anon_0 - 8) >> 3) + 0x7FFF8000) )
  {
LABEL_119:
    __asan_report_load8();
    goto LABEL_120;
  }
  v36 = *((_QWORD *)p_anon_0 - 1);
  v37 = v30 + 96;
  if ( *(_BYTE *)(((unsigned __int64)(v36 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_120:
    __asan_report_load8();
    goto LABEL_121;
  }
  if ( *(_BYTE *)(((v30 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_121:
    __asan_report_store8();
    goto LABEL_122;
  }
  *(_QWORD *)(v30 + 96) = *(_QWORD *)(v36 + 96);
  if ( *(_BYTE *)(((v30 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_122:
    __asan_report_store8();
    goto LABEL_123;
  }
  *(_QWORD *)(v30 + 104) = v36 + 96;
  *(_QWORD *)(v36 + 96) = v37;
  v38 = *(_QWORD *)(v30 + 96);
  if ( *(_BYTE *)(((unsigned __int64)(v38 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_123:
    __asan_report_store8();
    goto LABEL_124;
  }
  *(_QWORD *)(v38 + 8) = v37;
  if ( *(_BYTE *)(((unsigned __int64)(&this->m_data._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_124:
    __asan_report_load8();
    goto LABEL_125;
  }
  ++*(&this->m_data._anon_0._M_allocated_capacity + 1);
  if ( *(_BYTE *)((((unsigned __int64)p_anon_0 - 8) >> 3) + 0x7FFF8000) )
  {
LABEL_125:
    __asan_report_load8();
LABEL_126:
    __asan_report_load8();
    goto LABEL_127;
  }
  if ( M_string_length == *((_QWORD *)p_anon_0 - 1) )
    goto LABEL_91;
  v39 = v30 + 96;
  if ( *(_BYTE *)(((v30 + 104) >> 3) + 0x7FFF8000) )
    goto LABEL_126;
  v40 = *(_QWORD *)(v30 + 104);
  if ( *(_BYTE *)(((v30 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_127:
    __asan_report_load8();
    goto LABEL_128;
  }
  v41 = *(_QWORD *)(v30 + 96);
  if ( *(_BYTE *)(((unsigned __int64)(v41 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_128:
    __asan_report_store8();
    goto LABEL_129;
  }
  *(_QWORD *)(v41 + 8) = v40;
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
  {
LABEL_129:
    __asan_report_store8();
    goto LABEL_130;
  }
  *(_QWORD *)v40 = *(_QWORD *)(v30 + 96);
  if ( *(_BYTE *)(((M_string_length + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_130:
    __asan_report_load8();
    goto LABEL_131;
  }
  *(_QWORD *)(v30 + 96) = *(_QWORD *)(M_string_length + 96);
  *(_QWORD *)(v30 + 104) = M_string_length + 96;
  *(_QWORD *)(M_string_length + 96) = v39;
  v42 = *(_QWORD *)(v30 + 96);
  if ( *(_BYTE *)(((unsigned __int64)(v42 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_131:
    v47 = (struct _Unwind_Exception *)__asan_report_store8();
    std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::~pair(&v53);
    v22 = *(char **)(v7 + 112);
    if ( v22 != (char *)(v7 + 128) )
      operator delete(v22);
    v23 = *(char **)(v7 + 176);
    if ( v23 != (char *)(v7 + 192) )
      operator delete(v23);
    __asan_handle_no_return(v23);
    _Unwind_Resume(v47);
  }
  *(_QWORD *)(v42 + 8) = v39;
LABEL_91:
  v43 = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(v30 + 32);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v53.second);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53.first._M_dataplus._M_p != &v53.first._anon_0 )
    operator delete(v53.first._M_dataplus._M_p);
  v44 = *(char **)(v7 + 112);
  if ( v44 != (char *)(v7 + 128) )
    operator delete(v44);
  v45 = *(char **)(v7 + 176);
  if ( v45 != (char *)(v7 + 192) )
    operator delete(v45);
  if ( v54 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v43;
};

// Line 665: range 000000000C28A12E-000000000C28A2E9
std::string *__fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_value<std::string,boost::property_tree::id_translator<std::string>>(
        std::string *this,
        unsigned __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  _DWORD *v5; // r14
  char *v6; // rsi
  std::forward_iterator_tag v7; // cl
  __int64 vars0[6]; // [rsp+0h] [rbp+0h] BYREF
  char anonymous0; // [rsp+30h] [rbp+30h]
  std::string _38[2]; // [rsp+38h] [rbp+38h] BYREF

  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_1(128LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 48 40 5 o:667";
  vars0[2] = (__int64)boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_value<std::string,boost::property_tree::id_translator<std::string>>;
  v5 = (_DWORD *)((unsigned __int64)vars0 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  LOBYTE(vars0[6]) = 0;
  vars0[7] = (__int64)&_38[0]._anon_0._M_allocated_capacity;
  if ( *(_BYTE *)((a2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_8;
  }
  v6 = *(char **)a2;
  if ( *(_BYTE *)(((a2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8();
    goto LABEL_9;
  }
  std::string::_M_construct<char *>(_38, v6, &v6[*(_QWORD *)(a2 + 8)], a4);
  anonymous0 = 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    goto LABEL_10;
  }
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    this,
    _38[0]._M_dataplus._M_p,
    &_38[0]._M_dataplus._M_p[_38[0]._M_string_length],
    v7);
LABEL_10:
  if ( anonymous0 && (std::string::$CFBEC286C7F52157F7E59FC354047095 *)_38[0]._M_dataplus._M_p != &_38[0]._anon_0 )
    operator delete(_38[0]._M_dataplus._M_p);
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0LL;
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8008) = 0LL;
  return this;
};

// Line 821: range 000000000C28A2EC-000000000C28A47E
void __fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put_value<std::string,boost::property_tree::id_translator<std::string>>(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this,
        unsigned __int64 value,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  unsigned __int64 v5; // rbx
  _DWORD *v6; // r13
  char *v7; // rsi
  __int64 v8; // rax
  _BYTE *v9; // rdi
  _BYTE v10[184]; // [rsp+0h] [rbp-B8h] BYREF

  v5 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 48 40 5 o:823";
  *(_QWORD *)(v5 + 16) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put_value<std::string,boost::property_tree::id_translator<std::string>>;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  *(_BYTE *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = v5 + 72;
  if ( *(_BYTE *)((value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_8;
  }
  v7 = *(char **)value;
  if ( *(_BYTE *)(((value + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8();
    goto LABEL_9;
  }
  std::string::_M_construct<char *>((std::string *const)(v5 + 56), v7, &v7[*(_QWORD *)(value + 8)], a4);
  *(_BYTE *)(v5 + 48) = 1;
  std::string::_M_assign(this, v5 + 56);
LABEL_9:
  if ( *(_BYTE *)(v5 + 48) )
  {
    v9 = *(_BYTE **)(v5 + 56);
    if ( v9 != (_BYTE *)(v5 + 72) )
      operator delete(v9);
  }
  if ( v10 == (_BYTE *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 841: range 000000000C2AE55C-000000000C2AE87A
boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string,boost::property_tree::id_translator<std::string>>(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *path,
        const std::string *value,
        std::forward_iterator_tag a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rdx
  std::forward_iterator_tag v8; // cl
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v9; // rdi
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v10; // rbp
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  std::forward_iterator_tag v23; // cl
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type v25; // [rsp+10h] [rbp-A8h] BYREF
  char v26[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v5 = v12;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 9 child:844";
  *(_QWORD *)(v5 + 16) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string,boost::property_tree::id_translator<std::string>>;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child_optional(
    (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > **)(v5 + 32),
    this,
    (unsigned __int64)path,
    a4);
  v9 = *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > **)(v5 + 32);
  if ( !v9 )
  {
    v25.m_data._M_dataplus._M_p = v25.m_data._anon_0._M_local_buf;
    v25.m_data._M_string_length = 0LL;
    v25.m_data._anon_0._M_local_buf[0] = 0;
    v13 = (_QWORD *)operator new(0x20uLL);
    v14 = operator new(0x70uLL);
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
    }
    else
    {
      v13[1] = v14;
      if ( !*(_BYTE *)(((unsigned __int64)(v14 + 72) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v14 + 72) &= ~1uLL;
        if ( !*(_BYTE *)(((unsigned __int64)(v13 + 1) >> 3) + 0x7FFF8000) )
        {
          v15 = v13[1];
          if ( !*(_BYTE *)(((unsigned __int64)(v15 + 72) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v15 + 72) &= 1uLL;
            v16 = v13[1];
            if ( !*(_BYTE *)(((unsigned __int64)(v16 + 80) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v16 + 80) = v16 + 72;
              v17 = v13[1];
              if ( !*(_BYTE *)(((unsigned __int64)(v17 + 88) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v17 + 88) = v17 + 72;
                v18 = v13[1];
                v19 = v18 + 96;
                if ( !*(_BYTE *)(((unsigned __int64)(v18 + 104) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v18 + 104) = v19;
                  v20 = v13[1];
                  if ( !*(_BYTE *)(((unsigned __int64)(v20 + 96) >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)(v20 + 96) = v19;
                    if ( !*(_BYTE *)(((unsigned __int64)(v13 + 3) >> 3) + 0x7FFF8000) )
                    {
                      v13[3] = 0LL;
                      v25.m_children = v13;
                      v21 = (__int64)boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put_child(
                                       this,
                                       path,
                                       &v25);
LABEL_29:
                      v10 = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)v21;
                      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v25);
                      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put_value<std::string,boost::property_tree::id_translator<std::string>>(
                        v10,
                        (unsigned __int64)value,
                        v22,
                        v23);
                      goto LABEL_4;
                    }
LABEL_28:
                    v21 = __asan_report_store8();
                    goto LABEL_29;
                  }
LABEL_27:
                  __asan_report_store8();
                  goto LABEL_28;
                }
LABEL_26:
                __asan_report_store8();
                goto LABEL_27;
              }
LABEL_25:
              __asan_report_store8();
              goto LABEL_26;
            }
LABEL_24:
            __asan_report_store8();
            goto LABEL_25;
          }
LABEL_23:
          __asan_report_load8();
          goto LABEL_24;
        }
LABEL_22:
        __asan_report_load8();
        goto LABEL_23;
      }
    }
    __asan_report_load8();
    goto LABEL_22;
  }
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put_value<std::string,boost::property_tree::id_translator<std::string>>(
    v9,
    (unsigned __int64)value,
    v7,
    v8);
  v10 = *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > **)(v5 + 32);
  if ( !v10 )
  {
    __asan_handle_no_return(v9);
    __assert_fail(
      "ptr_",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/optional/d"
      "etail/optional_reference_spec.hpp",
      0x99u,
      "T& boost::optional<T&>::operator*() const [with T = boost::property_tree::basic_ptree<std::__cxx11::basic_string<c"
      "har>, std::__cxx11::basic_string<char> >]");
  }
LABEL_4:
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v10;
};

// Line 885: range 000000000C28EB1C-000000000C28F03E
boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::walk_path(
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this,
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *p)
{
  unsigned __int64 v2; // r12
  char *M_string_length; // r15
  _DWORD *v4; // r13
  _QWORD *m_children; // rdi
  unsigned __int64 v6; // rbx
  const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v7; // rbx
  char *v8; // rbp
  __int64 v9; // rax
  const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v10; // rdx
  size_t *v11; // rax
  signed __int64 v12; // rax
  const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *M_p; // rax
  size_t v14; // rax
  const void **v15; // rdi
  size_t *v16; // rax
  size_t v17; // rdx
  signed __int64 v18; // rax
  _QWORD *v19; // rax
  char *v20; // rdi
  const void **v22; // [rsp+0h] [rbp-108h]
  const void **p_M_p; // [rsp+8h] [rbp-100h]
  char *v25; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v26; // [rsp+20h] [rbp-E8h]
  char *v27; // [rsp+28h] [rbp-E0h]
  char v28[216]; // [rsp+30h] [rbp-D8h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(160LL);
    if ( v9 )
      v2 = v9;
  }
  M_string_length = (char *)(v2 + 160);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 6 __size 64 8 7 __osize 96 32 12 fragment:892";
  *(_QWORD *)(v2 + 16) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::walk_path;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_15;
  }
  if ( *(_BYTE *)(((unsigned __int64)&p->m_value._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8();
    goto LABEL_16;
  }
  if ( *(_BYTE *)(((unsigned __int64)&p->m_start >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  if ( &p->m_value._M_dataplus._M_p[p->m_value._M_string_length] == p->m_start._M_current )
  {
    v7 = this;
    goto LABEL_67;
  }
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::reduce(
    (boost::property_tree::id_translator<std::string >::external_type *)(v2 + 96),
    p);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_children >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  m_children = this->m_children;
  if ( *(_BYTE *)(((unsigned __int64)(m_children + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8();
    goto LABEL_19;
  }
  v22 = (const void **)m_children[1];
  if ( *(_BYTE *)(((unsigned __int64)(v22 + 9) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8();
    goto LABEL_20;
  }
  v6 = (unsigned __int64)v22[9] & 0xFFFFFFFFFFFFFFFELL;
  if ( !v6 )
  {
LABEL_20:
    v7 = 0LL;
    goto LABEL_11;
  }
  v7 = (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(v6 - 72);
LABEL_11:
  p_M_p = v22;
  v25 = (char *)v2;
  v27 = (char *)(v2 + 160);
  v8 = (char *)(v2 + 160);
  while ( v7 )
  {
    v10 = v7;
    if ( *(_BYTE *)(((unsigned __int64)&v7->m_data._M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_23:
      v11 = (size_t *)(v8 - 96);
      goto LABEL_39;
    }
    M_string_length = (char *)v7->m_data._M_string_length;
    *((_QWORD *)v8 - 16) = M_string_length;
    v2 = *((_QWORD *)v8 - 7);
    *((_QWORD *)v8 - 12) = v2;
    if ( (unsigned __int64)M_string_length > v2 )
      goto LABEL_23;
    v11 = (size_t *)(v8 - 128);
LABEL_39:
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v14 = *v11;
      if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        if ( v14 )
        {
          LODWORD(v12) = memcmp(v10->m_data._M_dataplus._M_p, *((const void **)v8 - 8), v14);
          if ( (_DWORD)v12 )
            goto LABEL_29;
        }
        goto LABEL_26;
      }
    }
    __asan_report_load8();
LABEL_26:
    v12 = (signed __int64)&M_string_length[-v2];
    if ( (__int64)&M_string_length[-v2] > 0x7FFFFFFF )
    {
      LODWORD(v12) = 0x7FFFFFFF;
    }
    else if ( v12 < (__int64)0xFFFFFFFF80000000LL )
    {
      LODWORD(v12) = 0x80000000;
    }
LABEL_29:
    if ( (int)v12 >= 0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)&v7[2] >> 3) + 0x7FFF8000) )
      {
        M_p = (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)v7[2].m_data._M_dataplus._M_p;
        if ( M_p )
          M_p = (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)((char *)M_p - 72);
        p_M_p = (const void **)&v7->m_data._M_dataplus._M_p;
        goto LABEL_34;
      }
      __asan_report_load8();
    }
    if ( *(_BYTE *)(((unsigned __int64)&v7[2].m_data._M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      break;
    }
    M_p = (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)v7[2].m_data._M_string_length;
    if ( M_p )
      M_p = (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)((char *)M_p - 72);
LABEL_34:
    v7 = M_p;
  }
  v2 = (unsigned __int64)v25;
  if ( v22 == p_M_p )
    goto LABEL_63;
  v15 = p_M_p;
  v26 = *((_QWORD *)v27 - 7);
  *((_QWORD *)v27 - 16) = v26;
  if ( *(_BYTE *)(((unsigned __int64)(p_M_p + 1) >> 3) + 0x7FFF8000) )
  {
    v15 = p_M_p + 1;
    __asan_report_load8();
  }
  else
  {
    M_string_length = (char *)p_M_p[1];
    *((_QWORD *)v27 - 12) = M_string_length;
    if ( v26 <= (unsigned __int64)M_string_length )
    {
      v16 = (size_t *)(v27 - 128);
      goto LABEL_54;
    }
  }
  v16 = (size_t *)(v27 - 96);
LABEL_54:
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_73;
  }
  v17 = *v16;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8();
LABEL_74:
    LODWORD(v18) = 0x7FFFFFFF;
    goto LABEL_61;
  }
  if ( v17 )
  {
    LODWORD(v18) = memcmp(*((const void **)v27 - 8), *v15, v17);
    if ( (_DWORD)v18 )
      goto LABEL_61;
  }
  v18 = v26 - (_QWORD)M_string_length;
  if ( (__int64)(v26 - (_QWORD)M_string_length) > 0x7FFFFFFF )
    goto LABEL_74;
  if ( v18 < (__int64)0xFFFFFFFF80000000LL )
    LODWORD(v18) = 0x80000000;
LABEL_61:
  if ( (int)v18 >= 0 )
    v22 = p_M_p;
LABEL_63:
  *((_QWORD *)v27 - 16) = v22;
  v19 = this->m_children;
  if ( *(_BYTE *)(((unsigned __int64)(v19 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_76;
  }
  *((_QWORD *)v27 - 12) = v19[1];
  if ( !boost::multi_index::detail::operator==<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>(
          (const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *)v27
        - 16,
          (const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *)v27
        - 12) )
LABEL_76:
    v7 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::walk_path(
           (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(*((_QWORD *)v27 - 16) + 32LL),
           p);
  v20 = (char *)*((_QWORD *)v27 - 8);
  if ( v20 != v27 - 48 )
    operator delete(v20);
LABEL_67:
  if ( v28 == (char *)v2 )
  {
    *((_QWORD *)v4 + 268431360) = 0LL;
    v4[536862722] = 0;
    v4[536862724] = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *((_QWORD *)v4 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v4 + 268431361) = 0xF5F5F5F5F5F5F5F5LL;
    v4[536862724] = -168430091;
  }
  return (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)v7;
};

// Line 903: range 000000000C2AC55C-000000000C2ACDA9
boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *__fastcall boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::force_path(
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const this,
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *p)
{
  std::random_access_iterator_tag v2; // cl
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r15
  _DWORD *v5; // r13
  void *p_M_string_length; // rdi
  const char *v7; // rbp
  __gnu_cxx::__normal_iterator<char const*,std::string > v8; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *result; // rax
  __int64 v10; // rax
  _QWORD *m_children; // rdi
  unsigned __int64 v12; // rbp
  __int64 v13; // rbp
  char *v14; // r12
  unsigned __int64 v15; // rdx
  size_t *v16; // rax
  signed __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // rax
  const void **v20; // rdi
  size_t *v21; // rax
  size_t v22; // rdx
  int v23; // eax
  _QWORD *v24; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v25; // r15
  _QWORD *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  struct _Unwind_Exception *v35; // rbx
  char *v36; // rdi
  boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *node; // rax
  char *v38; // rdi
  bool v40; // [rsp+17h] [rbp-181h]
  const void **v41; // [rsp+18h] [rbp-180h]
  const void **v42; // [rsp+20h] [rbp-178h]
  char *v43; // [rsp+30h] [rbp-168h]
  char *v44; // [rsp+38h] [rbp-160h]
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > rhs; // [rsp+40h] [rbp-158h] BYREF
  boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> >::value_type v46; // [rsp+70h] [rbp-128h] BYREF
  char v47[216]; // [rsp+C0h] [rbp-D8h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_2(160LL);
    if ( v10 )
      v3 = v10;
  }
  v4 = v3 + 160;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 6 __size 64 8 7 __osize 96 32 12 fragment:910";
  *(_QWORD *)(v3 + 16) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::force_path;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = p;
    __asan_report_load8();
    goto LABEL_12;
  }
  p_M_string_length = &p->m_value._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&p->m_value._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8();
    goto LABEL_13;
  }
  p_M_string_length = &p->m_start;
  if ( *(_BYTE *)(((unsigned __int64)&p->m_start >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8();
LABEL_14:
    __asan_handle_no_return(p_M_string_length);
    __assert_fail(
      "!p.empty() && \"Empty path not allowed for put_child.\"",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/detail/ptree_implementation.hpp",
      0x389u,
      "boost::property_tree::basic_ptree<K, D, C>& boost::property_tree::basic_ptree<Key, Data, KeyCompare>::force_path(b"
      "oost::property_tree::basic_ptree<Key, Data, KeyCompare>::path_type&) [with Key = std::__cxx11::basic_string<char>;"
      " Data = std::__cxx11::basic_string<char>; KeyCompare = std::less<std::__cxx11::basic_string<char> >; boost::proper"
      "ty_tree::basic_ptree<Key, Data, KeyCompare>::path_type = boost::property_tree::string_path<std::__cxx11::basic_str"
      "ing<char>, boost::property_tree::id_translator<std::__cxx11::basic_string<char> > >]");
  }
  if ( p->m_start._M_current == &p->m_value._M_dataplus._M_p[p->m_value._M_string_length] )
    goto LABEL_14;
  v7 = &p->m_value._M_dataplus._M_p[p->m_value._M_string_length];
  v8._M_current = std::__find_if<__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__ops::_Iter_equals_val<char const>>(
                    (__gnu_cxx::__normal_iterator<char const*,std::string >)p->m_start._M_current,
                    (__gnu_cxx::__normal_iterator<char const*,std::string >)v7,
                    (__gnu_cxx::__ops::_Iter_equals_val<char const>)&p->m_separator,
                    v2)._M_current;
  v40 = v7 == v8._M_current;
  if ( v7 == v8._M_current )
    goto LABEL_7;
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::reduce(
    (boost::property_tree::id_translator<std::string >::external_type *)(v3 + 96),
    p);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_children >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_22;
  }
  m_children = this->m_children;
  if ( *(_BYTE *)(((unsigned __int64)(m_children + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8();
    goto LABEL_23;
  }
  v42 = (const void **)m_children[1];
  if ( *(_BYTE *)(((unsigned __int64)(v42 + 9) >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8();
    goto LABEL_24;
  }
  v12 = (unsigned __int64)v42[9] & 0xFFFFFFFFFFFFFFFELL;
  if ( !v12 )
  {
LABEL_24:
    v13 = 0LL;
    goto LABEL_20;
  }
  v13 = v12 - 72;
LABEL_20:
  v41 = v42;
  v43 = (char *)v3;
  v44 = (char *)(v3 + 160);
  v14 = (char *)(v3 + 160);
  while ( v13 )
  {
    v15 = v13;
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_27:
      v16 = (size_t *)(v14 - 96);
      goto LABEL_43;
    }
    v4 = *(_QWORD *)(v13 + 8);
    *((_QWORD *)v14 - 16) = v4;
    v3 = *((_QWORD *)v14 - 7);
    *((_QWORD *)v14 - 12) = v3;
    if ( v4 > v3 )
      goto LABEL_27;
    v16 = (size_t *)(v14 - 128);
LABEL_43:
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v19 = *v16;
      if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      {
        if ( v19 )
        {
          LODWORD(v17) = memcmp(*(const void **)v15, *((const void **)v14 - 8), v19);
          if ( (_DWORD)v17 )
            goto LABEL_33;
        }
        goto LABEL_30;
      }
    }
    __asan_report_load8();
LABEL_30:
    v17 = v4 - v3;
    if ( (__int64)(v4 - v3) > 0x7FFFFFFF )
    {
      LODWORD(v17) = 0x7FFFFFFF;
    }
    else if ( v17 < (__int64)0xFFFFFFFF80000000LL )
    {
      LODWORD(v17) = 0x80000000;
    }
LABEL_33:
    if ( (int)v17 >= 0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(v13 + 80) >> 3) + 0x7FFF8000) )
      {
        v18 = *(_QWORD *)(v13 + 80);
        if ( v18 )
          v18 -= 72LL;
        v41 = (const void **)v13;
        goto LABEL_38;
      }
      __asan_report_load8();
    }
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 88) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      break;
    }
    v18 = *(_QWORD *)(v13 + 88);
    if ( v18 )
      v18 -= 72LL;
LABEL_38:
    v13 = v18;
  }
  v3 = (unsigned __int64)v43;
  if ( v42 == v41 )
    goto LABEL_67;
  v20 = v41;
  v13 = *((_QWORD *)v44 - 7);
  *((_QWORD *)v44 - 16) = v13;
  if ( *(_BYTE *)(((unsigned __int64)(v41 + 1) >> 3) + 0x7FFF8000) )
  {
    v20 = v41 + 1;
    __asan_report_load8();
  }
  else
  {
    v4 = (unsigned __int64)v41[1];
    *((_QWORD *)v44 - 12) = v4;
    if ( v13 <= v4 )
    {
      v21 = (size_t *)(v44 - 128);
      goto LABEL_58;
    }
  }
  v21 = (size_t *)(v44 - 96);
LABEL_58:
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_77;
  }
  v22 = *v21;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_load8();
    goto LABEL_78;
  }
  if ( v22 )
  {
    v23 = memcmp(*((const void **)v44 - 8), *v20, v22);
    if ( v23 )
      goto LABEL_65;
  }
  v13 -= v4;
  if ( v13 <= 0x7FFFFFFF )
  {
    if ( v13 < (__int64)0xFFFFFFFF80000000LL )
      v23 = 0x80000000;
    else
      v23 = v13;
    goto LABEL_65;
  }
LABEL_78:
  v23 = 0x7FFFFFFF;
LABEL_65:
  if ( v23 >= 0 )
    v42 = v41;
LABEL_67:
  *((_QWORD *)v44 - 16) = v42;
  v24 = this->m_children;
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    *((_QWORD *)v44 - 12) = v24[1];
    LOBYTE(v13) = boost::multi_index::detail::operator==<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>(
                    (const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *)v44
                  - 16,
                    (const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *)v44
                  - 12);
    if ( !(_BYTE)v13 )
    {
      v25 = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(*((_QWORD *)v44 - 16)
                                                                                                  + 32LL);
      goto LABEL_70;
    }
  }
  rhs.m_data._M_dataplus._M_p = rhs.m_data._anon_0._M_local_buf;
  rhs.m_data._M_string_length = 0LL;
  rhs.m_data._anon_0._M_local_buf[0] = 0;
  v26 = (_QWORD *)operator new(0x20uLL);
  v27 = operator new(0x70uLL);
  if ( *(_BYTE *)(((unsigned __int64)(v26 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_92;
  }
  v26[1] = v27;
  if ( *(_BYTE *)(((unsigned __int64)(v27 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_load8();
    goto LABEL_93;
  }
  *(_QWORD *)(v27 + 72) &= ~1uLL;
  if ( *(_BYTE *)(((unsigned __int64)(v26 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8();
    goto LABEL_94;
  }
  v28 = v26[1];
  if ( *(_BYTE *)(((unsigned __int64)(v28 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_load8();
    goto LABEL_95;
  }
  *(_QWORD *)(v28 + 72) &= 1uLL;
  v29 = v26[1];
  if ( *(_BYTE *)(((unsigned __int64)(v29 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_store8();
    goto LABEL_96;
  }
  *(_QWORD *)(v29 + 80) = v29 + 72;
  v30 = v26[1];
  if ( *(_BYTE *)(((unsigned __int64)(v30 + 88) >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_store8();
    goto LABEL_97;
  }
  *(_QWORD *)(v30 + 88) = v30 + 72;
  v31 = v26[1];
  v32 = v31 + 96;
  if ( *(_BYTE *)(((unsigned __int64)(v31 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_store8();
    goto LABEL_98;
  }
  *(_QWORD *)(v31 + 104) = v32;
  v33 = v26[1];
  v34 = (unsigned __int64)(v33 + 96) >> 3;
  if ( *(_BYTE *)(v34 + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_store8();
LABEL_99:
    v35 = (struct _Unwind_Exception *)__asan_report_store8();
    operator delete(v26, 0x20uLL);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)rhs.m_data._M_dataplus._M_p != &rhs.m_data._anon_0 )
      operator delete(rhs.m_data._M_dataplus._M_p);
    if ( v40 )
      std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::~pair(&v46);
    if ( v40 )
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&rhs);
    v36 = (char *)*((_QWORD *)v44 - 8);
    if ( v36 != v44 - 48 )
      operator delete(v36);
    __asan_handle_no_return(v36);
    _Unwind_Resume(v35);
  }
  *(_QWORD *)(v33 + 96) = v32;
  if ( *(_BYTE *)(((unsigned __int64)(v26 + 3) >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  v26[3] = 0LL;
  rhs.m_children = v26;
  v46.first._M_dataplus._M_p = v46.first._anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    (std::string *const)&v46.first,
    *((char **)v44 - 8),
    (char *)(*((_QWORD *)v44 - 7) + *((_QWORD *)v44 - 8)),
    (std::forward_iterator_tag)v34);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::basic_ptree(&v46.second, &rhs);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_children >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  else
    node = boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>,boost::mpl::vector0<mpl_::na>>::push_back(
             (boost::multi_index::detail::sequenced_index<boost::multi_index::detail::nth_layer<1,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >,boost::mpl::vector0<mpl_::na> > *const)this->m_children
           + 8,
             &v46).first.node;
  v25 = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)(&node->space.data_.align_
                                                                                              + 4);
LABEL_70:
  if ( (_BYTE)v13 )
  {
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&v46.second);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v46.first._M_dataplus._M_p != &v46.first._anon_0 )
      operator delete(v46.first._M_dataplus._M_p);
  }
  if ( (_BYTE)v13 )
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(&rhs);
  this = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::force_path(v25, p);
  v38 = (char *)*((_QWORD *)v44 - 8);
  if ( v38 != v44 - 48 )
    operator delete(v38);
LABEL_7:
  result = this;
  if ( v47 == (char *)v3 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    v5[536862722] = 0;
    v5[536862724] = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v5 + 268431361) = 0xF5F5F5F5F5F5F5F5LL;
    v5[536862724] = -168430091;
  }
  return result;
};
