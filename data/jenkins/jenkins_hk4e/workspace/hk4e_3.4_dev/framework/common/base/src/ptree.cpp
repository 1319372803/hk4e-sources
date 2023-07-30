// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/src/ptree.cpp

// Line 127: range 000000000C9C7742-000000000C9C7A39
void __fastcall common::tools::PTree::PTree(common::tools::PTree *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  signed __int8 v6; // dl
  unsigned __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  struct _Unwind_Exception *v20; // r12

  v4 = operator new(0x28uLL);
  v5 = *(unsigned __int8 *)((v4 >> 3) + 0x7FFF8000);
  v6 = *(_BYTE *)(((v4 + 39) >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v6 <= (signed __int8)((v4 + 39) & 7);
  if ( ((v6 != 0) & (unsigned __int8)v1) != 0 || (v5 & 0x80u) != 0LL )
  {
    v1 = 40LL;
    __asan_report_store_n(v4, 40LL);
    goto LABEL_9;
  }
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  v2 = v4 + 16;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    v7 = v4;
    __asan_report_store8(v4, v1);
    goto LABEL_10;
  }
  *(_QWORD *)v4 = v2;
  v7 = v4 + 8;
  if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8(v7, v1);
    goto LABEL_11;
  }
  *(_QWORD *)(v4 + 8) = 0LL;
  v7 = v4 + 16;
  v8 = *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000);
  v9 = ((_BYTE)v4 + 16) & 7;
  if ( v8 > (char)v9 || !v8 )
  {
    *(_BYTE *)(v4 + 16) = 0;
    v10 = operator new(0x20uLL);
    goto LABEL_12;
  }
LABEL_11:
  v10 = __asan_report_store1(v7, v1, v9, v5);
LABEL_12:
  v11 = (_QWORD *)v10;
  v12 = operator new(0x70uLL);
  v13 = v11 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v13, v1);
    goto LABEL_25;
  }
  v11[1] = v12;
  v13 = (_QWORD *)(v12 + 72);
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(v13);
    goto LABEL_26;
  }
  *(_QWORD *)(v12 + 72) &= ~1uLL;
  v13 = v11 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(v13);
    goto LABEL_27;
  }
  v14 = v11[1];
  v13 = (_QWORD *)(v14 + 72);
  if ( *(_BYTE *)(((unsigned __int64)(v14 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(v13);
    goto LABEL_28;
  }
  *(_QWORD *)(v14 + 72) &= 1uLL;
  v15 = v11[1];
  v13 = (_QWORD *)(v15 + 80);
  if ( *(_BYTE *)(((unsigned __int64)(v15 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store8(v13, v1);
    goto LABEL_29;
  }
  *(_QWORD *)(v15 + 80) = v15 + 72;
  v16 = v11[1];
  v13 = (_QWORD *)(v16 + 88);
  if ( *(_BYTE *)(((unsigned __int64)(v16 + 88) >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8(v13, v1);
    goto LABEL_30;
  }
  *(_QWORD *)(v16 + 88) = v16 + 72;
  v17 = v11[1];
  v18 = v17 + 96;
  v13 = (_QWORD *)(v17 + 104);
  if ( *(_BYTE *)(((unsigned __int64)(v17 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8(v13, v1);
    goto LABEL_31;
  }
  *(_QWORD *)(v17 + 104) = v18;
  v19 = v11[1];
  v13 = (_QWORD *)(v19 + 96);
  if ( *(_BYTE *)(((unsigned __int64)(v19 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8(v13, v1);
    goto LABEL_32;
  }
  *(_QWORD *)(v19 + 96) = v18;
  v13 = v11 + 3;
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 3) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8(v13, v1);
    goto LABEL_33;
  }
  v11[3] = 0LL;
  v13 = (_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8(v13, v1);
    goto LABEL_34;
  }
  *(_QWORD *)(v4 + 32) = v11;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    v20 = (struct _Unwind_Exception *)__asan_report_store8(this, v1);
    operator delete(v11, 0x20uLL);
    while ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v20 = (struct _Unwind_Exception *)__asan_report_load8(v4);
    if ( v2 != *(_QWORD *)v4 )
      operator delete(*(void **)v4);
    operator delete((void *)v4, 0x28uLL);
    __asan_handle_no_return(v4, 40LL);
    _Unwind_Resume(v20);
  }
  this->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)v4;
};

// Line 129: range 000000000C9C88D0-000000000C9C8A38
void __fastcall common::tools::PTree::PTree(common::tools::PTree *const this, const common::tools::PTree *other)
{
  common::tools::PTree::Impl *v2; // rbx
  common::tools::PTree::Impl *M_head_impl; // rbp
  common::tools::PTree *v4; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r13
  const boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *m_children; // r14
  std::forward_iterator_tag v7; // cl
  std::string::size_type *p_M_string_length; // rdi
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v9; // rax
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v10; // rbp
  __int64 v11; // r12
  struct _Unwind_Exception *v12; // rbp

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(other);
    goto LABEL_7;
  }
  v4 = this;
  M_head_impl = other->impl_ptr_._M_t._M_t._M_head_impl;
  v2 = (common::tools::PTree::Impl *)operator new(0x28uLL);
  p_anon_0 = &v2->pt_.m_data._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8(v2, other);
    goto LABEL_8;
  }
  v2->pt_.m_data._M_dataplus._M_p = (std::string::pointer)p_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)M_head_impl >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    p_M_string_length = (std::string::size_type *)M_head_impl;
    __asan_report_load8(M_head_impl);
    goto LABEL_9;
  }
  p_M_string_length = &M_head_impl->pt_.m_data._M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&M_head_impl->pt_.m_data._M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      &v2->pt_.m_data,
      M_head_impl->pt_.m_data._M_dataplus._M_p,
      &M_head_impl->pt_.m_data._M_dataplus._M_p[M_head_impl->pt_.m_data._M_string_length],
      v7);
    goto LABEL_10;
  }
LABEL_9:
  __asan_report_load8(p_M_string_length);
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->pt_.m_children >> 3) + 0x7FFF8000) )
  {
    v9 = (boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)__asan_report_load8(&M_head_impl->pt_.m_children);
  }
  else
  {
    m_children = (const boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)M_head_impl->pt_.m_children;
    v9 = (boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)operator new(0x20uLL);
  }
  v10 = v9;
  boost::multi_index::multi_index_container<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>::multi_index_container(
    v9,
    m_children);
  if ( *(_BYTE *)(((unsigned __int64)&v2->pt_.m_children >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&v2->pt_.m_children, m_children);
    goto LABEL_17;
  }
  v2->pt_.m_children = v10;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    v11 = __asan_report_store8(v4, m_children);
    operator delete(v10, 0x20uLL);
    v12 = (struct _Unwind_Exception *)v11;
    while ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      v12 = (struct _Unwind_Exception *)__asan_report_load8(v2);
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v2->pt_.m_data._M_dataplus._M_p )
      operator delete(v2->pt_.m_data._M_dataplus._M_p);
    operator delete(v2, 0x28uLL);
    __asan_handle_no_return(v2, 40LL);
    _Unwind_Resume(v12);
  }
  v4->impl_ptr_._M_t._M_t._M_head_impl = v2;
};

// Line 136: range 000000000C9C8A3A-000000000C9C8D04
common::tools::PTree *__fastcall common::tools::PTree::operator=(
        common::tools::PTree *const this,
        const common::tools::PTree *other)
{
  const std::string *v3; // rdx

  if ( this == other )
    return this;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    this = (common::tools::PTree *const)other;
    __asan_report_load8(other);
  }
  else
  {
    other = (const common::tools::PTree *)other->impl_ptr_._M_t._M_t._M_head_impl;
    if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::operator=(
        &this->impl_ptr_._M_t._M_t._M_head_impl->pt_,
        (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)other);
      return this;
    }
  }
  __asan_report_load8(this);
  return (common::tools::PTree *)common::tools::PTree::getChild(other, v3).impl_ptr_._M_t._M_t._M_head_impl;
};

// Line 147: range 000000000C9C989A-000000000C9C9907
void __fastcall common::tools::PTree::readXml(common::tools::PTree *const this, const std::string *path)
{
  common::tools::PTree::Impl *M_head_impl; // r12
  std::locale loc; // [rsp+8h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
  }
  else
  {
    M_head_impl = this->impl_ptr_._M_t._M_t._M_head_impl;
    std::locale::locale(&loc);
    boost::property_tree::xml_parser::read_xml<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
      path,
      &M_head_impl->pt_,
      4,
      &loc);
  }
  std::locale::~locale(&loc);
};

// Line 159: range 000000000C9C8D06-000000000C9C8E22
std::optional<common::tools::PTree> __fastcall common::tools::PTree::getChildOptional(
        common::tools::PTree *a1,
        const common::tools::PTree *const this,
        const std::string *child_name)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _Unwind_Exception *v13; // rdi
  __int64 i; // rax
  struct _Unwind_Exception *v15; // rbp
  common::tools::PTree *v16; // rdi
  common::tools::PTree other; // [rsp+8h] [rbp-20h] BYREF
  std::optional<common::tools::PTree> result; // 0:rax.9

  if ( *(_WORD *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16(a1);
  }
  else
  {
    a1->impl_ptr_._M_t._M_t._M_head_impl = 0LL;
    a1[1].impl_ptr_._M_t._M_t._M_head_impl = 0LL;
    common::tools::PTree::getChild(this, child_name);
  }
  if ( *(char *)(((unsigned __int64)&a1[1] >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&a1[1], this, v4, v5);
  }
  else if ( LOBYTE(a1[1].impl_ptr_._M_t._M_t._M_head_impl) )
  {
    common::tools::PTree::operator=(a1, &other);
LABEL_10:
    common::tools::PTree::~PTree(&other);
    goto LABEL_11;
  }
  common::tools::PTree::PTree(a1, &other);
  if ( *(char *)(((unsigned __int64)&a1[1] >> 3) + 0x7FFF8000) >= 0 )
  {
    LOBYTE(a1[1].impl_ptr_._M_t._M_t._M_head_impl) = 1;
    goto LABEL_10;
  }
  v8 = __asan_report_store1(&a1[1], &other, v6, v7);
  v10 = v9;
  common::tools::PTree::~PTree(&other);
  v13 = (struct _Unwind_Exception *)v8;
  for ( i = v10; i != 1; i = v11 )
  {
    v15 = v13;
    v16 = a1 + 1;
    if ( *(char *)(((unsigned __int64)&a1[1] >> 3) + 0x7FFF8000) >= 0 )
    {
      if ( LOBYTE(a1[1].impl_ptr_._M_t._M_t._M_head_impl) )
      {
        LOBYTE(a1[1].impl_ptr_._M_t._M_t._M_head_impl) = 0;
        v16 = a1;
        common::tools::PTree::~PTree(a1);
      }
      __asan_handle_no_return(v16, &other);
      _Unwind_Resume(v15);
    }
    v13 = (struct _Unwind_Exception *)__asan_report_load1(v16, &other, v11, v12);
  }
  __cxa_begin_catch(v13);
  __cxa_end_catch();
LABEL_11:
  result._M_payload._M_payload._M_value.impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)a1;
  return result;
};

// Line 173: range 000000000C9C8E28-000000000C9C9897
std::list<std::pair<std::string,common::tools::PTree>> *__fastcall common::tools::PTree::getAllChild[abi:cxx11](
        std::list<std::pair<std::string,common::tools::PTree>> *retstr,
        const common::tools::PTree *const this)
{
  unsigned __int64 m_children; // r12
  __int64 v3; // r14
  unsigned __int64 v4; // r15
  std::list<std::pair<std::string,common::tools::PTree>> *v5; // r13
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *p_pt; // rbp
  __int64 v7; // rax
  std::forward_iterator_tag v8; // cl
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *child; // rbp
  std::string::size_type *p_M_string_length; // rdi
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v11; // rax
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  std::forward_iterator_tag v19; // cl
  std::string *v20; // rbp
  unsigned __int64 v21; // rdi
  boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *v22; // rax
  std::forward_iterator_tag v23; // cl
  __int64 *v24; // rdi
  __int64 *v25; // rax
  struct _Unwind_Exception *v26; // rbx
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v27; // rax
  std::__detail::_List_node_base *v28; // rax
  std::__detail::_List_node_base *v29; // rdi
  std::__detail::_List_node_base *v30; // rdx
  __int64 v31; // rax
  __int64 p_M_prev; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v33; // rdx
  __int64 v34; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v35; // rbp
  void *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  signed __int8 v41; // cl
  char *v42; // rax
  std::string::size_type M_allocated_capacity; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v44; // r12
  __int64 v45; // rax
  std::forward_iterator_tag v46; // cl
  std::__detail::_List_node_base *v47; // r12
  __int64 v48; // r14
  __int64 v49; // rdi
  std::size_t *p_M_size; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v51; // rbp
  unsigned __int64 v53; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v54; // [rsp+18h] [rbp-1B0h]
  _DWORD *v55; // [rsp+28h] [rbp-1A0h]
  std::string v56; // [rsp+30h] [rbp-198h] BYREF
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v57; // [rsp+50h] [rbp-178h]
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type v58; // [rsp+60h] [rbp-168h] BYREF
  char v59[312]; // [rsp+90h] [rbp-138h] BYREF

  v5 = retstr;
  p_pt = (boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *)this;
  v54 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v54 = v7;
  }
  *(_QWORD *)v54 = 1102416563LL;
  *(_QWORD *)(v54 + 8) = "4 48 8 5 it:45 80 8 6 pt:178 112 24 13 impl_list:175 176 40 11 child_pt:44";
  *(_QWORD *)(v54 + 16) = common::tools::PTree::getAllChild[abi:cxx11];
  v55 = (_DWORD *)(v54 >> 3);
  v55[536862720] = -235802127;
  v55[536862721] = -234881024;
  v55[536862722] = -234881024;
  v55[536862723] = 62194;
  v55[536862724] = -218959360;
  v55[536862725] = 62194;
  v55[536862726] = -218103808;
  v55[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->_M_impl._M_node._M_prev >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&retstr->_M_impl._M_node._M_prev, this);
    goto LABEL_10;
  }
  retstr->_M_impl._M_node._M_prev = &retstr->_M_impl._M_node;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8(retstr, this);
    goto LABEL_11;
  }
  retstr->_M_impl._M_node._M_next = &retstr->_M_impl._M_node;
  retstr = (std::list<std::pair<std::string,common::tools::PTree>> *)((char *)retstr + 16);
  if ( *(_BYTE *)(((unsigned __int64)&v5->_M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8(retstr, this);
    goto LABEL_12;
  }
  v5->_M_impl._M_node._M_size = 0LL;
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    p_pt = &this->impl_ptr_._M_t._M_t._M_head_impl->pt_;
    v4 = v54 + 256;
    *(_QWORD *)(v54 + 120) = v54 + 112;
    *(_QWORD *)(v54 + 112) = v54 + 112;
    *(_QWORD *)(v54 + 128) = 0LL;
    v58.m_value._M_dataplus._M_p = v58.m_value._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &v58.m_value,
      byte_19EC8D80,
      byte_19EC8D80,
      (std::forward_iterator_tag)common::tools::PTree::getAllChild[abi:cxx11]);
    goto LABEL_13;
  }
LABEL_12:
  __asan_report_load8(this);
LABEL_13:
  v58.m_separator = 46;
  v58.m_start._M_current = v58.m_value._M_dataplus._M_p;
  child = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child(p_pt, &v58);
  *(_QWORD *)(v4 - 80) = v4 - 64;
  if ( *(_BYTE *)(((unsigned __int64)child >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (std::string::size_type *)child;
    __asan_report_load8(child);
  }
  else
  {
    p_M_string_length = &child->m_data._M_string_length;
    if ( !*(_BYTE *)(((unsigned __int64)&child->m_data._M_string_length >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        (std::string *const)(v54 + 176),
        child->m_data._M_dataplus._M_p,
        &child->m_data._M_dataplus._M_p[child->m_data._M_string_length],
        v8);
      goto LABEL_18;
    }
  }
  __asan_report_load8(p_M_string_length);
LABEL_18:
  if ( *(_BYTE *)(((unsigned __int64)&child->m_children >> 3) + 0x7FFF8000) )
  {
    v11 = (boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)__asan_report_load8(&child->m_children);
  }
  else
  {
    m_children = (unsigned __int64)child->m_children;
    v11 = (boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)operator new(0x20uLL);
  }
  v12 = v11;
  v13 = m_children;
  boost::multi_index::multi_index_container<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>::multi_index_container(
    v11,
    (const boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)m_children);
  *(_QWORD *)(v54 + 208) = v12;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v58.m_value._M_dataplus._M_p != &v58.m_value._anon_0 )
    operator delete(v58.m_value._M_dataplus._M_p);
  v14 = *(_QWORD *)(v54 + 208);
  v15 = v14 + 8;
  if ( *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v15);
    goto LABEL_30;
  }
  v16 = *(_QWORD *)(v14 + 8);
  v15 = v16 + 104;
  if ( *(_BYTE *)(((unsigned __int64)(v16 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(v15);
    goto LABEL_31;
  }
  v17 = *(_QWORD *)(v16 + 104);
  if ( v17 )
    v17 -= 96LL;
  for ( *(_QWORD *)(v54 + 48) = v17; ; *(_QWORD *)(v54 + 48) = v39 )
  {
    v40 = *(_QWORD *)(v54 + 208);
    v15 = v40 + 8;
    if ( *(_BYTE *)(((unsigned __int64)(v40 + 8) >> 3) + 0x7FFF8000) )
    {
LABEL_31:
      v18 = __asan_report_load8(v15);
    }
    else
    {
      *(_QWORD *)(v54 + 80) = *(_QWORD *)(v40 + 8);
      v13 = v54 + 80;
      if ( boost::multi_index::detail::operator==<boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>>(
             (const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > > *)(v54 + 48),
             (const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > > *)(v54 + 80)) )
      {
        goto LABEL_85;
      }
      v13 = (__int64)"<xmlattr>";
      if ( !(unsigned int)std::string::compare(*(_QWORD *)(v54 + 48), "<xmlattr>") )
        goto LABEL_67;
      v3 = *(_QWORD *)(v54 + 48);
      m_children = v3 + 32;
      v18 = operator new(0x28uLL);
    }
    v20 = (std::string *)v18;
    v53 = v18;
    v4 = v18 + 16;
    v21 = v18;
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(v18, v13);
LABEL_37:
      __asan_report_load8(v21);
      goto LABEL_38;
    }
    *(_QWORD *)v18 = v4;
    v21 = m_children;
    if ( *(_BYTE *)((m_children >> 3) + 0x7FFF8000) )
      goto LABEL_37;
    v21 = m_children + 8;
    if ( !*(_BYTE *)(((m_children + 8) >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        (std::string *const)v18,
        *(char **)(v3 + 32),
        (char *)(*(_QWORD *)(m_children + 8) + *(_QWORD *)(v3 + 32)),
        v19);
      goto LABEL_39;
    }
LABEL_38:
    __asan_report_load8(v21);
LABEL_39:
    if ( *(_BYTE *)(((m_children + 32) >> 3) + 0x7FFF8000) )
    {
      v22 = (boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)__asan_report_load8(m_children + 32);
    }
    else
    {
      v3 = *(_QWORD *)(m_children + 32);
      v22 = (boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)operator new(0x20uLL);
    }
    m_children = (unsigned __int64)v22;
    boost::multi_index::multi_index_container<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>>,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::string const,&std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>::first>,std::less<std::string>>,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>::multi_index_container(
      v22,
      (const boost::multi_index::multi_index_container<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::multi_index::indexed_by<boost::multi_index::sequenced<boost::multi_index::tag<mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na> >,boost::multi_index::ordered_non_unique<boost::multi_index::tag<boost::property_tree::basic_ptree<std::string,std::string >::subs::by_name,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,boost::multi_index::member<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,const std::string,&std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >::first>,std::less<std::string > >,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na,mpl_::na>,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *)v3);
    v24 = (__int64 *)&v20[1];
    if ( *(_BYTE *)(((unsigned __int64)&v20[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(v24, v3);
LABEL_47:
      __asan_report_load8(v24);
LABEL_48:
      v26 = (struct _Unwind_Exception *)__asan_report_load8(v24);
      operator delete((void *)m_children, 0x20uLL);
      while ( *(_BYTE *)((v53 >> 3) + 0x7FFF8000) )
        v26 = (struct _Unwind_Exception *)__asan_report_load8(v53);
      if ( v4 != *(_QWORD *)v53 )
        operator delete(*(void **)v53);
      v13 = 40LL;
      operator delete(v20, 0x28uLL);
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v54 + 176));
      std::_List_base<std::pair<std::string,std::unique_ptr<common::tools::PTree::Impl>>>::_M_clear((std::_List_base<std::pair<std::string,std::unique_ptr<common::tools::PTree::Impl> >> *const)(v54 + 112));
      goto LABEL_28;
    }
    v20[1]._M_dataplus._M_p = (std::string::pointer)m_children;
    *(_QWORD *)(v54 + 80) = v20;
    v25 = *(__int64 **)(v54 + 48);
    v56._M_dataplus._M_p = v56._anon_0._M_local_buf;
    v24 = v25;
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      goto LABEL_47;
    v13 = *v25;
    v24 = v25 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(v25 + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_48;
    std::string::_M_construct<char *>(&v56, (char *)v13, (char *)(v25[1] + v13), v23);
    v27 = *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > **)(v54 + 80);
    *(_QWORD *)(v54 + 80) = 0LL;
    v57 = v27;
    v28 = (std::__detail::_List_node_base *)operator new(0x38uLL);
    v29 = v28;
    if ( *(_BYTE *)(((unsigned __int64)&v28[1] >> 3) + 0x7FFF8000) )
    {
      v29 = v28 + 1;
      __asan_report_store8(&v28[1], v13);
    }
    else
    {
      v28[1]._M_next = v28 + 2;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v56._M_dataplus._M_p != &v56._anon_0 )
      {
        v30 = v28 + 1;
        if ( *(_BYTE *)(((unsigned __int64)&v28[1] >> 3) + 0x7FFF8000) )
          goto LABEL_80;
        v28[1]._M_next = (std::__detail::_List_node_base *)v56._M_dataplus._M_p;
        v31 = (__int64)&v28[2];
        if ( *(_BYTE *)(((unsigned __int64)&v29[2] >> 3) + 0x7FFF8000) )
          goto LABEL_81;
        v29[2]._M_next = (std::__detail::_List_node_base *)v56._anon_0._M_allocated_capacity;
        goto LABEL_59;
      }
    }
    v13 = *(unsigned __int8 *)(((unsigned __int64)&v29[2] >> 3) + 0x7FFF8000);
    v41 = *(_BYTE *)((((unsigned __int64)&v29[2]._M_prev + 7) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v13 != 0 && (char)v13 <= (((unsigned __int8)v29 + 32) & 7) )
      break;
    LOBYTE(v13) = v41 <= (((unsigned __int8)v29 + 47) & 7);
    if ( ((v41 != 0) & (unsigned __int8)v13) != 0 )
      break;
    v29[2] = (std::__detail::_List_node_base)v56._anon_0;
LABEL_59:
    p_M_prev = (__int64)&v29[1]._M_prev;
    if ( *(_BYTE *)(((unsigned __int64)&v29[1]._M_prev >> 3) + 0x7FFF8000) )
      goto LABEL_82;
    v29[1]._M_prev = (std::__detail::_List_node_base *)v56._M_string_length;
    v56._M_dataplus._M_p = v56._anon_0._M_local_buf;
    v56._M_string_length = 0LL;
    v56._anon_0._M_local_buf[0] = 0;
    v33 = v57;
    v57 = 0LL;
    v34 = (__int64)&v29[3];
    if ( *(_BYTE *)(((unsigned __int64)&v29[3] >> 3) + 0x7FFF8000) )
      goto LABEL_83;
    v29[3]._M_next = (std::__detail::_List_node_base *)v33;
    v13 = v54 + 112;
    std::__detail::_List_node_base::_M_hook(v29, (std::__detail::_List_node_base *)(v54 + 112));
    ++*(_QWORD *)(v54 + 128);
    v35 = v57;
    if ( v57 )
    {
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(v57);
      v13 = 40LL;
      operator delete(v35, 0x28uLL);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v56._M_dataplus._M_p != &v56._anon_0 )
      operator delete(v56._M_dataplus._M_p);
    v36 = *(void **)(v54 + 80);
    if ( v36 )
    {
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(*(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const *)(v54 + 80));
      v13 = 40LL;
      operator delete(v36, 0x28uLL);
    }
LABEL_67:
    v37 = *(_QWORD *)(v54 + 48);
    v38 = v37 + 104;
    if ( *(_BYTE *)(((unsigned __int64)(v37 + 104) >> 3) + 0x7FFF8000) )
      goto LABEL_84;
    v39 = *(_QWORD *)(v37 + 104);
    if ( v39 )
      v39 -= 96LL;
  }
  v13 = 16LL;
  __asan_report_store_n(&v29[2], 16LL);
LABEL_80:
  v31 = __asan_report_store8(v30, v13);
LABEL_81:
  p_M_prev = __asan_report_store8(v31, v13);
LABEL_82:
  v34 = __asan_report_store8(p_M_prev, v13);
LABEL_83:
  v38 = v34;
  __asan_report_store8(v34, v13);
LABEL_84:
  __asan_report_load8(v38);
LABEL_85:
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v54 + 176));
  v42 = *(char **)(v54 + 112);
  while ( 2 )
  {
    v51 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v42;
    if ( v42 != (char *)(v54 + 112) )
    {
      common::tools::PTree::PTree((common::tools::PTree *const)(v54 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&v51[3] >> 3) + 0x7FFF8000) )
      {
        v45 = __asan_report_load8(&v51[3]);
      }
      else
      {
        M_allocated_capacity = v51[3]._M_allocated_capacity;
        v51[3]._M_allocated_capacity = 0LL;
        v44 = *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > **)(v54 + 80);
        *(_QWORD *)(v54 + 80) = M_allocated_capacity;
        if ( v44 )
        {
          boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree(v44);
          v13 = 40LL;
          operator delete(v44, 0x28uLL);
        }
        v4 = (unsigned __int64)&v51[1];
        v45 = operator new(0x38uLL);
      }
      v47 = (std::__detail::_List_node_base *)v45;
      v48 = v45 + 16;
      v49 = v45 + 16;
      if ( *(_BYTE *)(((unsigned __int64)(v45 + 16) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store8(v49, v13);
      }
      else
      {
        *(_QWORD *)(v45 + 16) = v45 + 32;
        v49 = v4;
        if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        {
          v49 = v4 + 8;
          if ( !*(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
          {
            std::string::_M_construct<char *>(
              (std::string *const)v48,
              (char *)v51[1]._M_allocated_capacity,
              (char *)(*(_QWORD *)(v4 + 8) + v51[1]._M_allocated_capacity),
              v46);
            goto LABEL_98;
          }
LABEL_97:
          __asan_report_load8(v49);
LABEL_98:
          common::tools::PTree::PTree((common::tools::PTree *const)(v48 + 32), (common::tools::PTree *)(v54 + 80));
          v13 = (__int64)v5;
          std::__detail::_List_node_base::_M_hook(v47, &v5->_M_impl._M_node);
          p_M_size = &v5->_M_impl._M_node._M_size;
          if ( *(_BYTE *)(((unsigned __int64)&v5->_M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(p_M_size);
LABEL_108:
            v26 = (struct _Unwind_Exception *)__asan_report_load8(p_M_size);
            if ( v47 )
              operator delete(v47);
            common::tools::PTree::~PTree((common::tools::PTree *const)(v54 + 80));
            std::_List_base<std::pair<std::string,std::unique_ptr<common::tools::PTree::Impl>>>::_M_clear((std::_List_base<std::pair<std::string,std::unique_ptr<common::tools::PTree::Impl> >> *const)(v54 + 112));
LABEL_28:
            std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(v5);
            __asan_handle_no_return(v5, v13);
            _Unwind_Resume(v26);
          }
          ++v5->_M_impl._M_node._M_size;
          common::tools::PTree::~PTree((common::tools::PTree *const)(v54 + 80));
          p_M_size = (std::size_t *)v51;
          if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
            goto LABEL_108;
          v42 = (char *)v51->_M_allocated_capacity;
          continue;
        }
      }
      __asan_report_load8(v49);
      goto LABEL_97;
    }
    break;
  }
  std::_List_base<std::pair<std::string,std::unique_ptr<common::tools::PTree::Impl>>>::_M_clear((std::_List_base<std::pair<std::string,std::unique_ptr<common::tools::PTree::Impl> >> *const)(v54 + 112));
  if ( v59 == (char *)v54 )
  {
    *(_QWORD *)((v54 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v54 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v54 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v54 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v54 = 1172321806LL;
    *(_QWORD *)((v54 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v54 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v54 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v54 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};

// Line 191: range 000000000C9C7C8A-000000000C9C7F6A
int32_t __fastcall common::tools::PTree::tryGetValue(
        const common::tools::PTree *const this,
        const std::string *attr_name,
        std::string *value)
{
  std::forward_iterator_tag v3; // cl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v4; // rbx
  std::string::size_type v5; // rbp
  common::tools::PTree::Impl *M_head_impl; // r12
  void *p_M_string_length; // rdi
  unsigned __int64 child; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 M_allocated_capacity; // rdi
  __int64 p_M_allocated_capacity; // rax
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rdx
  std::string::size_type M_string_length; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  char v19; // al
  unsigned __int64 v20; // rdx
  char v21; // al
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  char v24; // al
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rbp
  std::string v28; // [rsp+0h] [rbp-68h] BYREF
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type v29; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  v4 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value;
  M_head_impl = this->impl_ptr_._M_t._M_t._M_head_impl;
  v29.m_value._M_dataplus._M_p = v29.m_value._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)attr_name >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    p_M_string_length = (void *)attr_name;
    __asan_report_load8(attr_name);
    goto LABEL_7;
  }
  p_M_string_length = &attr_name->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&attr_name->_M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      &v29.m_value,
      attr_name->_M_dataplus._M_p,
      &attr_name->_M_dataplus._M_p[attr_name->_M_string_length],
      v3);
    goto LABEL_8;
  }
LABEL_7:
  __asan_report_load8(p_M_string_length);
LABEL_8:
  v29.m_separator = 46;
  v29.m_start._M_current = v29.m_value._M_dataplus._M_p;
  child = (unsigned __int64)boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child(
                              &M_head_impl->pt_,
                              &v29);
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_value<std::string,boost::property_tree::id_translator<std::string>>(
    &v28,
    (boost::property_tree::id_translator<std::string >)v28._M_dataplus._M_p);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    M_allocated_capacity = (unsigned __int64)v4;
    __asan_report_load8(v4);
LABEL_25:
    if ( !v28._M_string_length )
      goto LABEL_28;
    if ( v28._M_string_length != 1 )
    {
      memcpy((void *)M_allocated_capacity, (const void *)child, v28._M_string_length);
      goto LABEL_28;
    }
    v21 = *(_BYTE *)((child >> 3) + 0x7FFF8000);
    v22 = child & 7;
    if ( v21 <= (char)v22 && v21 )
    {
      M_allocated_capacity = child;
      __asan_report_load1(child, child, v22, v9);
    }
    else
    {
      v23 = *(unsigned __int8 *)child;
      v24 = *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000);
      v9 = M_allocated_capacity & 7;
      if ( v24 > (char)v9 || !v24 )
      {
        *(_BYTE *)M_allocated_capacity = v23;
LABEL_28:
        M_string_length = v28._M_string_length;
        v17 = (__int64)(&v4->_M_allocated_capacity + 1);
        if ( !*(_BYTE *)(((unsigned __int64)(&v4->_M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
        {
          *(&v4->_M_allocated_capacity + 1) = v28._M_string_length;
          v18 = v4->_M_allocated_capacity + M_string_length;
          v19 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
          v20 = v18 & 7;
          if ( v19 > (char)v20 || !v19 )
          {
            *(_BYTE *)v18 = 0;
            goto LABEL_17;
          }
          goto LABEL_40;
        }
LABEL_39:
        v18 = v17;
        __asan_report_store8(v17, child);
LABEL_40:
        p_M_allocated_capacity = __asan_report_store1(v18, child, v20, v9);
LABEL_41:
        __asan_report_load8(p_M_allocated_capacity);
        goto LABEL_42;
      }
    }
    v17 = __asan_report_store1(M_allocated_capacity, child, v23, v9);
    goto LABEL_39;
  }
  M_allocated_capacity = v4->_M_allocated_capacity;
  child = (unsigned __int64)v28._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28._M_dataplus._M_p == &v28._anon_0 )
    goto LABEL_25;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_allocated_capacity != &v4[1] )
  {
    p_M_allocated_capacity = (__int64)&v4[1]._M_allocated_capacity;
    if ( !*(_BYTE *)(((unsigned __int64)&v4[1] >> 3) + 0x7FFF8000) )
    {
      v5 = v4[1]._M_allocated_capacity;
      goto LABEL_13;
    }
    goto LABEL_41;
  }
LABEL_42:
  M_allocated_capacity = 0LL;
LABEL_13:
  v4->_M_allocated_capacity = child;
  if ( *(_BYTE *)(((unsigned __int64)(&v4->_M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_store8(&v4->_M_allocated_capacity + 1, child);
    goto LABEL_44;
  }
  *(&v4->_M_allocated_capacity + 1) = v28._M_string_length;
  v12 = (__int64)&v4[1]._M_allocated_capacity;
  v9 = (unsigned __int64)&v4[1] >> 3;
  if ( *(_BYTE *)(v9 + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8(v12, child);
    goto LABEL_45;
  }
  v4[1]._M_allocated_capacity = v28._anon_0._M_allocated_capacity;
  if ( !M_allocated_capacity )
  {
LABEL_45:
    v28._M_dataplus._M_p = v28._anon_0._M_local_buf;
    goto LABEL_17;
  }
  v28._M_dataplus._M_p = (std::string::pointer)M_allocated_capacity;
  v28._anon_0._M_allocated_capacity = v5;
LABEL_17:
  v28._M_string_length = 0LL;
  v13 = *(_BYTE *)(((unsigned __int64)v28._M_dataplus._M_p >> 3) + 0x7FFF8000);
  v14 = (__int64)v28._M_dataplus._M_p & 7;
  if ( v13 <= (char)v14 && v13 )
  {
    v25 = (void *)__asan_report_store1(v28._M_dataplus._M_p, child, v14, v9);
    v27 = v26;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v29.m_value._M_dataplus._M_p != &v29.m_value._anon_0 )
      operator delete(v29.m_value._M_dataplus._M_p);
    if ( v27 != 1 )
      std::terminate();
    __cxa_begin_catch(v25);
    __cxa_end_catch();
    return -1;
  }
  else
  {
    *v28._M_dataplus._M_p = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28._M_dataplus._M_p != &v28._anon_0 )
      operator delete(v28._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v29.m_value._M_dataplus._M_p != &v29.m_value._anon_0 )
      operator delete(v29.m_value._M_dataplus._M_p);
    return 0;
  }
};

// Line 196: range 000000000C9C9A12-000000000C9C9B08
int __fastcall common::tools::PTree::putValue(
        common::tools::PTree *const this,
        const std::string *path,
        const std::string *value)
{
  std::forward_iterator_tag v3; // cl
  const std::string *v4; // rbx
  common::tools::PTree::Impl *M_head_impl; // rbp
  void *p_M_string_length; // rdi
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type v8; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  v4 = value;
  M_head_impl = this->impl_ptr_._M_t._M_t._M_head_impl;
  v8.m_value._M_dataplus._M_p = v8.m_value._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)path >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    p_M_string_length = (void *)path;
    __asan_report_load8(path);
    goto LABEL_7;
  }
  p_M_string_length = &path->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&path->_M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      &v8.m_value,
      path->_M_dataplus._M_p,
      &path->_M_dataplus._M_p[path->_M_string_length],
      v3);
    goto LABEL_8;
  }
LABEL_7:
  __asan_report_load8(p_M_string_length);
LABEL_8:
  v8.m_separator = 46;
  v8.m_start._M_current = v8.m_value._M_dataplus._M_p;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::put<std::string,boost::property_tree::id_translator<std::string>>(
    &M_head_impl->pt_,
    &v8,
    v4,
    (boost::property_tree::id_translator<std::string >)v8.m_value._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8.m_value._M_dataplus._M_p != &v8.m_value._anon_0 )
    operator delete(v8.m_value._M_dataplus._M_p);
  return 0;
};

// Line 211: range 000000000C9C7F70-000000000C9C88CD
int __fastcall common::tools::PTree::erase(common::tools::PTree *const this, const std::string *child_name)
{
  std::string::size_type M_string_length; // r14
  std::string::size_type v3; // r15
  common::tools::PTree *v4; // rbp
  common::tools::PTree::Impl *M_head_impl; // rax
  common::tools::PTree *m_children; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  const std::string *v10; // rax
  signed __int64 v11; // rax
  common::tools::PTree *v12; // rax
  size_t *v13; // rax
  signed __int64 v14; // rax
  common::tools::PTree *v15; // r13
  std::string::size_type *p_M_string_length; // rdi
  const std::string *v17; // rdi
  size_t M_p; // rdx
  __int64 v19; // rax
  common::tools::PTree *v20; // rdx
  size_t *v21; // rax
  signed __int64 v22; // rax
  common::tools::PTree *v23; // rdi
  const void **p_M_head_impl; // rdi
  size_t v25; // rax
  __int64 v26; // rax
  common::tools::PTree *v27; // rdx
  size_t *v28; // rax
  signed __int64 v29; // rax
  const void **v30; // rdi
  size_t v31; // rax
  common::tools::PTree *v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rbp
  common::tools::PTree *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rdi
  common::tools::PTree::Impl *v46; // rdx
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rdx
  common::tools::PTree *v50; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v51; // [rsp+10h] [rbp-E8h]
  common::tools::PTree *v52; // [rsp+18h] [rbp-E0h]
  _DWORD *v53; // [rsp+30h] [rbp-C8h]
  char v54[184]; // [rsp+40h] [rbp-B8h] BYREF

  v4 = this;
  v51 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v51 = v9;
  }
  *(_QWORD *)v51 = 1102416563LL;
  *(_QWORD *)(v51 + 8) = "3 32 8 6 __size 64 8 7 __osize 96 16 1 p";
  *(_QWORD *)(v51 + 16) = common::tools::PTree::erase;
  v53 = (_DWORD *)(v51 >> 3);
  v53[536862720] = -235802127;
  v53[536862721] = -218959360;
  v53[536862722] = -218959360;
  v53[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_11;
  }
  M_head_impl = this->impl_ptr_._M_t._M_t._M_head_impl;
  this = (common::tools::PTree *const)&this->impl_ptr_._M_t._M_t._M_head_impl->pt_.m_children;
  if ( *(_BYTE *)(((unsigned __int64)&v4->impl_ptr_._M_t._M_t._M_head_impl->pt_.m_children >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(this);
    goto LABEL_12;
  }
  m_children = (common::tools::PTree *)M_head_impl->pt_.m_children;
  v52 = m_children + 2;
  this = m_children + 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(this);
    goto LABEL_13;
  }
  v50 = (common::tools::PTree *)v52[-1].impl_ptr_._M_t._M_t._M_head_impl;
  this = v50 + 9;
  if ( !*(_BYTE *)(((unsigned __int64)&v50[9] >> 3) + 0x7FFF8000) )
  {
    v7 = (unsigned __int64)v50[9].impl_ptr_._M_t._M_t._M_head_impl & 0xFFFFFFFFFFFFFFFELL;
    if ( v7 )
    {
      v8 = v7 - 72;
      goto LABEL_38;
    }
    goto LABEL_14;
  }
LABEL_13:
  __asan_report_load8(this);
LABEL_14:
  v8 = 0LL;
LABEL_38:
  while ( v8 )
  {
    v15 = (common::tools::PTree *)v8;
    p_M_string_length = (std::string::size_type *)(v8 + 8);
    if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_string_length);
LABEL_17:
      __asan_report_load8(p_M_string_length);
LABEL_18:
      v10 = (const std::string *)(v51 + 64);
      goto LABEL_43;
    }
    v3 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v51 + 32) = v3;
    p_M_string_length = &child_name->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&child_name->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_17;
    M_string_length = child_name->_M_string_length;
    *(_QWORD *)(v51 + 64) = M_string_length;
    if ( v3 > M_string_length )
      goto LABEL_18;
    v10 = (const std::string *)(v51 + 32);
LABEL_43:
    v17 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v10);
LABEL_20:
      __asan_report_load8(v17);
LABEL_21:
      __asan_report_load8(v17);
LABEL_22:
      LODWORD(v11) = 0x7FFFFFFF;
      goto LABEL_51;
    }
    M_p = (size_t)v10->_M_dataplus._M_p;
    v17 = child_name;
    if ( *(_BYTE *)(((unsigned __int64)child_name >> 3) + 0x7FFF8000) )
      goto LABEL_20;
    v17 = (const std::string *)v8;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      goto LABEL_21;
    if ( !M_p || (LODWORD(v11) = memcmp(*(const void **)v8, child_name->_M_dataplus._M_p, M_p), !(_DWORD)v11) )
    {
      v11 = v3 - M_string_length;
      if ( (__int64)(v3 - M_string_length) > 0x7FFFFFFF )
        goto LABEL_22;
      if ( v11 < (__int64)0xFFFFFFFF80000000LL )
        LODWORD(v11) = 0x80000000;
    }
LABEL_51:
    if ( (int)v11 < 0 )
    {
      if ( !*(_BYTE *)(((v8 + 88) >> 3) + 0x7FFF8000) )
      {
        v12 = *(common::tools::PTree **)(v8 + 88);
        if ( v12 )
          v12 -= 9;
        goto LABEL_37;
      }
      __asan_report_load8(v8 + 88);
LABEL_27:
      v13 = (size_t *)(v51 + 64);
      goto LABEL_54;
    }
    v3 = child_name->_M_string_length;
    *(_QWORD *)(v51 + 32) = v3;
    M_string_length = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v51 + 64) = M_string_length;
    if ( v3 > M_string_length )
      goto LABEL_27;
    v13 = (size_t *)(v51 + 32);
LABEL_54:
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v13);
LABEL_29:
      v14 = v3 - M_string_length;
      if ( (__int64)(v3 - M_string_length) > 0x7FFFFFFF )
      {
        LODWORD(v14) = 0x7FFFFFFF;
      }
      else if ( v14 < (__int64)0xFFFFFFFF80000000LL )
      {
        LODWORD(v14) = 0x80000000;
      }
      goto LABEL_32;
    }
    if ( !*v13 )
      goto LABEL_29;
    LODWORD(v14) = memcmp(child_name->_M_dataplus._M_p, *(const void **)v8, *v13);
    if ( !(_DWORD)v14 )
      goto LABEL_29;
LABEL_32:
    if ( (int)v14 >= 0 )
      goto LABEL_60;
    if ( *(_BYTE *)(((v8 + 80) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v8 + 80);
LABEL_60:
      if ( *(_BYTE *)(((v8 + 88) >> 3) + 0x7FFF8000) )
      {
        v19 = __asan_report_load8(v8 + 88);
        goto LABEL_64;
      }
      v15 = *(common::tools::PTree **)(v8 + 88);
      if ( v15 )
        v15 -= 9;
      while ( 2 )
      {
        if ( !v15 )
          goto LABEL_92;
        v20 = v15;
        v3 = child_name->_M_string_length;
        *(_QWORD *)(v51 + 32) = v3;
        if ( *(_BYTE *)(((unsigned __int64)&v15[1] >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(&v15[1]);
        }
        else
        {
          M_string_length = (std::string::size_type)v15[1].impl_ptr_._M_t._M_t._M_head_impl;
          *(_QWORD *)(v51 + 64) = M_string_length;
          if ( v3 <= M_string_length )
          {
            v21 = (size_t *)(v51 + 32);
LABEL_81:
            p_M_head_impl = (const void **)v21;
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v21);
            }
            else
            {
              v25 = *v21;
              p_M_head_impl = (const void **)&v20->impl_ptr_._M_t._M_t._M_head_impl;
              if ( !*(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              {
                if ( !v25 )
                  goto LABEL_69;
                LODWORD(v22) = memcmp(child_name->_M_dataplus._M_p, v20->impl_ptr_._M_t._M_t._M_head_impl, v25);
                if ( !(_DWORD)v22 )
                  goto LABEL_69;
                goto LABEL_72;
              }
            }
            __asan_report_load8(p_M_head_impl);
LABEL_69:
            v22 = v3 - M_string_length;
            if ( (__int64)(v3 - M_string_length) > 0x7FFFFFFF )
            {
              LODWORD(v22) = 0x7FFFFFFF;
            }
            else if ( v22 < (__int64)0xFFFFFFFF80000000LL )
            {
              LODWORD(v22) = 0x80000000;
            }
LABEL_72:
            if ( (int)v22 < 0 )
            {
              v23 = v15 + 10;
              if ( *(_BYTE *)(((unsigned __int64)&v15[10] >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v23);
LABEL_91:
                __asan_report_load8(v23);
LABEL_92:
                if ( *(_BYTE *)(((v8 + 80) >> 3) + 0x7FFF8000) )
                {
                  v26 = __asan_report_load8(v8 + 80);
                  goto LABEL_96;
                }
                v15 = *(common::tools::PTree **)(v8 + 80);
                if ( v15 )
                  v15 -= 9;
                while ( 2 )
                {
                  if ( !v15 )
                  {
LABEL_124:
                    v32 = v50;
                    goto LABEL_126;
                  }
                  v27 = v15;
                  if ( *(_BYTE *)(((unsigned __int64)&v15[1] >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8(&v15[1]);
                  }
                  else
                  {
                    v3 = (std::string::size_type)v15[1].impl_ptr_._M_t._M_t._M_head_impl;
                    *(_QWORD *)(v51 + 32) = v3;
                    M_string_length = child_name->_M_string_length;
                    *(_QWORD *)(v51 + 64) = M_string_length;
                    if ( v3 <= M_string_length )
                    {
                      v28 = (size_t *)(v51 + 32);
LABEL_113:
                      v30 = (const void **)v28;
                      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8(v28);
                      }
                      else
                      {
                        v31 = *v28;
                        v30 = (const void **)&v27->impl_ptr_._M_t._M_t._M_head_impl;
                        if ( !*(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                        {
                          if ( !v31 )
                            goto LABEL_101;
                          LODWORD(v29) = memcmp(
                                           v27->impl_ptr_._M_t._M_t._M_head_impl,
                                           child_name->_M_dataplus._M_p,
                                           v31);
                          if ( !(_DWORD)v29 )
                            goto LABEL_101;
                          goto LABEL_104;
                        }
                      }
                      __asan_report_load8(v30);
LABEL_101:
                      v29 = v3 - M_string_length;
                      if ( (__int64)(v3 - M_string_length) > 0x7FFFFFFF )
                      {
                        LODWORD(v29) = 0x7FFFFFFF;
                      }
                      else if ( v29 < (__int64)0xFFFFFFFF80000000LL )
                      {
                        LODWORD(v29) = 0x80000000;
                      }
LABEL_104:
                      if ( (int)v29 >= 0 )
                      {
                        if ( !*(_BYTE *)(((unsigned __int64)&v15[10] >> 3) + 0x7FFF8000) )
                        {
                          v26 = (__int64)v15[10].impl_ptr_._M_t._M_t._M_head_impl;
                          if ( v26 )
                          {
                            v26 -= 72LL;
                            v8 = (unsigned __int64)v15;
                          }
                          else
                          {
LABEL_96:
                            v8 = (unsigned __int64)v15;
                          }
LABEL_108:
                          v15 = (common::tools::PTree *)v26;
                          continue;
                        }
                        __asan_report_load8(&v15[10]);
                      }
                      if ( *(_BYTE *)(((unsigned __int64)&v15[11] >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8(&v15[11]);
                        goto LABEL_124;
                      }
                      v26 = (__int64)v15[11].impl_ptr_._M_t._M_t._M_head_impl;
                      if ( v26 )
                        v26 -= 72LL;
                      goto LABEL_108;
                    }
                  }
                  break;
                }
                v28 = (size_t *)(v51 + 64);
                goto LABEL_113;
              }
              v19 = (__int64)v15[10].impl_ptr_._M_t._M_t._M_head_impl;
              if ( v19 )
              {
                v19 -= 72LL;
                v50 = v15;
              }
              else
              {
LABEL_64:
                v50 = v15;
              }
            }
            else
            {
              v23 = v15 + 11;
              if ( *(_BYTE *)(((unsigned __int64)&v15[11] >> 3) + 0x7FFF8000) )
                goto LABEL_91;
              v19 = (__int64)v15[11].impl_ptr_._M_t._M_t._M_head_impl;
              if ( v19 )
                v19 -= 72LL;
            }
            v15 = (common::tools::PTree *)v19;
            continue;
          }
        }
        break;
      }
      v21 = (size_t *)(v51 + 64);
      goto LABEL_81;
    }
    v12 = *(common::tools::PTree **)(v8 + 80);
    if ( v12 )
      v12 -= 9;
    v50 = (common::tools::PTree *)v8;
LABEL_37:
    v8 = (unsigned __int64)v12;
  }
  v32 = v50;
  v8 = (unsigned __int64)v50;
LABEL_126:
  *(_QWORD *)(v51 + 96) = v8;
  *(_QWORD *)(v51 + 104) = v32;
  while ( 2 )
  {
    v44 = v51 + 104;
    if ( boost::multi_index::detail::operator==<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>(
           (const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *)(v51 + 96),
           (const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *)(v51 + 104)) )
    {
      goto LABEL_167;
    }
    v47 = *(_QWORD *)(v51 + 96);
    v48 = v47 + 72;
    if ( *(_BYTE *)(((v47 + 88) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v47 + 88);
      goto LABEL_128;
    }
    v34 = *(_QWORD *)(v47 + 88);
    if ( v34 )
    {
      while ( 1 )
      {
        v35 = v34 + 8;
        if ( *(_BYTE *)(((v34 + 8) >> 3) + 0x7FFF8000) )
          break;
        v33 = *(_QWORD *)(v34 + 8);
        if ( !v33 )
          goto LABEL_131;
LABEL_128:
        v34 = v33;
      }
      __asan_report_load8(v35);
    }
    else
    {
      v35 = v47 + 72;
      if ( !*(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
      {
        v34 = *(_QWORD *)(v47 + 72) & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_152;
      }
    }
    __asan_report_load8(v35);
LABEL_150:
    v34 = __asan_report_load8(v35);
    do
    {
      v48 = v34;
      v34 = *(_QWORD *)v34 & 0xFFFFFFFFFFFFFFFELL;
LABEL_152:
      v35 = v34 + 16;
      if ( *(_BYTE *)(((v34 + 16) >> 3) + 0x7FFF8000) )
        goto LABEL_150;
      if ( *(_QWORD *)(v34 + 16) != v48 )
        goto LABEL_156;
    }
    while ( !*(_BYTE *)((v34 >> 3) + 0x7FFF8000) );
    v34 = __asan_report_load8(v34);
LABEL_156:
    if ( !*(_BYTE *)(((v48 + 16) >> 3) + 0x7FFF8000) )
    {
      if ( v34 == *(_QWORD *)(v48 + 16) )
        v34 = v48;
LABEL_131:
      if ( v34 )
        v34 -= 72LL;
      v36 = v34;
      v37 = v52 - 2;
      v38 = (__int64)&v52[1];
      if ( *(_BYTE *)(((unsigned __int64)&v52[1] >> 3) + 0x7FFF8000) )
        goto LABEL_160;
      --v37[3].impl_ptr_._M_t._M_t._M_head_impl;
      v39 = v47 + 104;
      if ( *(_BYTE *)(((v47 + 104) >> 3) + 0x7FFF8000) )
        goto LABEL_161;
      v40 = *(_QWORD *)(v47 + 104);
      v41 = v47 + 96;
      if ( *(_BYTE *)(((v47 + 96) >> 3) + 0x7FFF8000) )
        goto LABEL_162;
      v42 = *(_QWORD *)(v47 + 96);
      v43 = v42 + 8;
      v44 = (unsigned __int64)(v42 + 8) >> 3;
      if ( *(_BYTE *)(v44 + 0x7FFF8000) )
        goto LABEL_163;
      *(_QWORD *)(v42 + 8) = v40;
      if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
        goto LABEL_164;
      *(_QWORD *)v40 = *(_QWORD *)(v47 + 96);
      v45 = (unsigned __int64)&v37[1];
      if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
        goto LABEL_165;
      v46 = v52[-1].impl_ptr_._M_t._M_t._M_head_impl;
      *(_QWORD *)(v51 + 64) = (char *)v46 + 72;
      boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char>>::rebalance_for_erase(
        (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::pointer)(v47 + 72),
        (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::parent_ref)(v51 + 64),
        (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::pointer *)&v46[2],
        (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::pointer *)&v46[2].pt_.m_data._M_string_length);
      boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v47 + 32));
      v45 = v47;
      if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
        goto LABEL_166;
      if ( *(_QWORD *)v47 != v47 + 16 )
        operator delete(*(void **)v47);
      operator delete((void *)v47);
      *(_QWORD *)(v51 + 96) = v36;
      continue;
    }
    break;
  }
  v38 = __asan_report_load8(v48 + 16);
LABEL_160:
  v39 = __asan_report_load8(v38);
LABEL_161:
  __asan_report_load8(v39);
LABEL_162:
  __asan_report_load8(v41);
LABEL_163:
  v40 = __asan_report_store8(v43, v44);
LABEL_164:
  v45 = v40;
  __asan_report_store8(v40, v44);
LABEL_165:
  __asan_report_load8(v45);
LABEL_166:
  __asan_report_load8(v45);
LABEL_167:
  if ( v54 == (char *)v51 )
  {
    *(_QWORD *)((v51 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v51 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v51 = 1172321806LL;
    *(_QWORD *)((v51 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v51 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return 0;
};

// Line 216: range 000000000C9C990C-000000000C9C9A10
int __fastcall common::tools::PTree::addChild(
        common::tools::PTree *const this,
        const std::string *path,
        const common::tools::PTree *ptree)
{
  std::string *v3; // rbx
  common::tools::PTree::Impl *M_head_impl; // r12
  const boost::property_tree::ptree *v5; // rax
  std::forward_iterator_tag v6; // cl
  const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::self_type *v7; // rbp
  std::string::size_type *p_M_string_length; // rdi
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type v10; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v5 = (const boost::property_tree::ptree *)__asan_report_load8(this);
  }
  else
  {
    v3 = (std::string *)path;
    M_head_impl = this->impl_ptr_._M_t._M_t._M_head_impl;
    v5 = common::tools::PTree::getImplPt[abi:cxx11](ptree);
  }
  v7 = v5;
  v10.m_value._M_dataplus._M_p = v10.m_value._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (std::string::size_type *)v3;
    __asan_report_load8(v3);
  }
  else
  {
    p_M_string_length = &v3->_M_string_length;
    if ( !*(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        &v10.m_value,
        v3->_M_dataplus._M_p,
        &v3->_M_dataplus._M_p[v3->_M_string_length],
        v6);
      goto LABEL_9;
    }
  }
  __asan_report_load8(p_M_string_length);
LABEL_9:
  v10.m_separator = 46;
  v10.m_start._M_current = v10.m_value._M_dataplus._M_p;
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::add_child(
    &M_head_impl->pt_,
    &v10,
    v7);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10.m_value._M_dataplus._M_p != &v10.m_value._anon_0 )
    operator delete(v10.m_value._M_dataplus._M_p);
  return 0;
};

// Line 219: range 000000000C9C9B0A-000000000C9C9B21
void __cdecl GLOBAL__sub_I_ptree_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 219: range 000000000C9C76F6-000000000C9C7740
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/ptree.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    }
    __asan_after_dynamic_init();
  }
};
