// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/multi_index/detail/bidir_node_iterator.hpp

// Line 101: range 000000000C28C110-000000000C28C292
bool __fastcall boost::multi_index::detail::operator==<boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>>(
        const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > > *x,
        const boost::multi_index::detail::bidir_node_iterator<boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > > *y)
{
  __gnu_cxx::__ops::_Iter_equals_val<char const> v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
  {
    return x->node == y->node;
  }
  __asan_report_load8();
  return std::__count_if<char *,__gnu_cxx::__ops::_Iter_equals_val<char const>>((char *)y, (char *)y, v3);
};
