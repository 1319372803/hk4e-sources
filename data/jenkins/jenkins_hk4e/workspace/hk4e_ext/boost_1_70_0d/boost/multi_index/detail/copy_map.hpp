// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/multi_index/detail/copy_map.hpp

// Line 77: range 000000000C289C76-000000000C28A129
void __fastcall boost::multi_index::detail::copy_map<boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>::~copy_map(
        boost::multi_index::detail::copy_map<boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > *const this)
{
  const boost::throw_function *v1; // rsi
  __int64 v2; // r12
  boost::multi_index::detail::copy_map<boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > >::size_type i; // r13
  unsigned __int64 p_released; // rdi
  boost::multi_index::detail::copy_map_entry<boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > > *v6; // rax
  unsigned __int64 second; // rbp

  p_released = (unsigned __int64)&this->released;
  if ( *(char *)((p_released >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(p_released);
    goto LABEL_5;
  }
  if ( this->released )
    goto LABEL_22;
  for ( i = 0LL; ; ++i )
  {
    p_released = (unsigned __int64)&this->n;
    if ( *(_BYTE *)(((unsigned __int64)&this->n >> 3) + 0x7FFF8000) )
    {
LABEL_5:
      __asan_report_load8();
LABEL_6:
      __asan_report_load8();
LABEL_7:
      __asan_report_load8();
LABEL_8:
      __asan_report_load8();
LABEL_9:
      operator delete((void *)p_released);
      goto LABEL_10;
    }
    if ( this->n <= i )
      goto LABEL_22;
    p_released = (unsigned __int64)&this->spc.data_;
    if ( *(_BYTE *)(((unsigned __int64)&this->spc.data_ >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    v2 = 16 * i;
    v6 = &this->spc.data_[i];
    p_released = (unsigned __int64)&v6->second;
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    second = (unsigned __int64)v6->second;
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::~basic_ptree((boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(second + 32));
    p_released = second;
    if ( *(_BYTE *)((second >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    p_released = *(_QWORD *)second;
    if ( *(_QWORD *)second != second + 16 )
      goto LABEL_9;
LABEL_10:
    if ( *(_BYTE *)(((unsigned __int64)&this->spc.data_ >> 3) + 0x7FFF8000) )
      break;
    v2 += (__int64)this->spc.data_;
    if ( *(_BYTE *)(((unsigned __int64)(v2 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_21;
    operator delete(*(void **)(v2 + 8));
  }
  __asan_report_load8();
LABEL_21:
  __asan_report_load8();
LABEL_22:
  if ( *(_BYTE *)(((unsigned __int64)&this->spc.n_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !this->spc.n_ )
  {
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->spc.data_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    boost::exception_detail::set_info<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>(
      (const boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> *)&this->spc.data_,
      v1);
  }
  else
  {
    operator delete(this->spc.data_);
  }
};
