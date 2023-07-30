// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/detail/tree_iterator.hpp

// Line 102: range 000000000C78A96C-000000000C78AA4D
// local variable allocation has failed, the output may be wrong!
boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,true> __cdecl boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,true>::operator++(
        boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,true> *const this,
        int a2)
{
  boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,true> *v2; // rdx
  boost::intrusive::rbtree_node<void*> *v3; // rdx
  __int64 node; // rax
  boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,true> *v6; // [rsp+58h] [rbp-8h]

  v2 = this;
  if ( *(_BYTE *)((*(_QWORD *)&a2 >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(*(_QWORD *)&a2, *(_QWORD *)&a2);
  v6 = v2;
  v3 = **(boost::intrusive::rbtree_node<void*> ***)&a2;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v6->members_.nodeptr_ = v3;
  node = (__int64)boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::next_node(*(const boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr **)&a2);
  if ( *(_BYTE *)((*(_QWORD *)&a2 >> 3) + 0x7FFF8000LL) )
    node = __asan_report_store8();
  **(_QWORD **)&a2 = node;
  return (boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,true>)this;
};

// Line 166: range 000000000C76B030-000000000C76B106
boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,false> __cdecl boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,true>::unconst(
        const boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,true> *const this)
{
  unsigned __int64 v1; // rsi
  boost::intrusive::rbtree_node<void*> *v2; // rdx
  __int64 v4; // [rsp+18h] [rbp-48h] BYREF
  __int64 v5[2]; // [rsp+20h] [rbp-40h] BYREF
  boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,true> *v6; // [rsp+30h] [rbp-30h]
  __int64 *v7; // [rsp+38h] [rbp-28h]
  __int64 *v8; // [rsp+40h] [rbp-20h]
  __int64 *v9; // [rsp+48h] [rbp-18h]
  unsigned __int64 v10; // [rsp+50h] [rbp-10h]
  unsigned __int64 v11; // [rsp+58h] [rbp-8h]

  v10 = v1;
  v11 = v1;
  v5[0] = 0LL;
  v9 = (__int64 *)v1;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1, v1);
  v4 = *v9;
  v5[1] = (__int64)this;
  v6 = (boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,true> *)this;
  v7 = &v4;
  v8 = v5;
  if ( *(_BYTE *)(((unsigned __int64)&v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v4, v1);
  v2 = (boost::intrusive::rbtree_node<void*> *)*v7;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v6->members_.nodeptr_ = v2;
  return (boost::intrusive::tree_iterator<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,false>)this;
};
