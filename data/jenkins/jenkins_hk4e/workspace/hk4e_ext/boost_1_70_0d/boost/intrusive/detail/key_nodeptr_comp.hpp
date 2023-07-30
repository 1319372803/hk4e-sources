// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/detail/key_nodeptr_comp.hpp

// Line 58: range 000000000C76ABD0-000000000C76AC5C
void __cdecl boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>::key_nodeptr_comp(
        boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *const this,
        const boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *a2)
{
  const boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3> *traits; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2, a2);
  traits = a2->traits_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->traits_ = traits;
};
