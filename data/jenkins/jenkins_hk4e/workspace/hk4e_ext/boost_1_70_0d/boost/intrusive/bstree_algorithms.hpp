// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp

// Line 687: range 000000000C7A0464-000000000C7A0A91
void __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::swap_tree(
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header1,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rdx
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *v12; // rcx
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *v13; // rcx
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr tmp; // [rsp+18h] [rbp-148h]
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr tmpa; // [rsp+18h] [rbp-148h]
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr tmpb; // [rsp+18h] [rbp-148h]
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr h1_parent; // [rsp+20h] [rbp-140h]
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr h2_parent; // [rsp+28h] [rbp-138h]
  __int64 v19; // [rsp+30h] [rbp-130h]
  __int64 v20; // [rsp+40h] [rbp-120h]
  __int64 v21; // [rsp+48h] [rbp-118h]
  __int64 v22; // [rsp+50h] [rbp-110h]
  __int64 v23; // [rsp+60h] [rbp-100h]
  __int64 v24; // [rsp+68h] [rbp-F8h]
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *v25; // [rsp+70h] [rbp-F0h]
  unsigned __int64 v26; // [rsp+80h] [rbp-E0h]
  __int64 v27; // [rsp+88h] [rbp-D8h]
  boost::intrusive::rbtree_node<void*> *v28; // [rsp+98h] [rbp-C8h]
  __int64 v29; // [rsp+A0h] [rbp-C0h]
  __int64 v30; // [rsp+B0h] [rbp-B0h]
  boost::intrusive::rbtree_node<void*> *v31; // [rsp+C8h] [rbp-98h]
  __int64 v32; // [rsp+D0h] [rbp-90h]
  __int64 v33; // [rsp+E0h] [rbp-80h]
  char v34[112]; // [rsp+F0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 96;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 11 header1:687 64 8 11 header2:687";
  *(_QWORD *)(v2 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::swap_tree;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(_QWORD *)(v2 + 32) = header1;
  *(_QWORD *)(v2 + 64) = header2;
  if ( *(_QWORD *)(v2 + 32) != *(_QWORD *)(v2 + 64) )
  {
    v6 = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr **)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 32));
    tmp = *v6;
    v7 = *(_QWORD *)(v4 - 32);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)(v4 - 32), *(_QWORD *)(v4 - 32));
    v26 = *(_QWORD *)(v4 - 64);
    v27 = *(_QWORD *)v7;
    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)v26 = v27;
    v25 = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr **)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *v25 = tmp;
    v8 = *(_QWORD *)(v4 - 64);
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v8 + 8, v8 + 8);
    tmpa = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v8 + 8);
    v9 = *(_QWORD *)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v9 + 8, v9 + 8);
    v23 = *(_QWORD *)(v4 - 64);
    v24 = *(_QWORD *)(v9 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v23 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v23 + 8) = v24;
    v22 = *(_QWORD *)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v22 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v22 + 8) = tmpa;
    v10 = *(_QWORD *)(v4 - 64);
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 16) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v10 + 16, v10 + 16);
    tmpb = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v10 + 16);
    v11 = *(_QWORD *)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v11 + 16) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v11 + 16, v11 + 16);
    v20 = *(_QWORD *)(v4 - 64);
    v21 = *(_QWORD *)(v11 + 16);
    if ( *(_BYTE *)(((unsigned __int64)(v20 + 16) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v20 + 16) = v21;
    v19 = *(_QWORD *)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v19 + 16) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v19 + 16) = tmpb;
    v12 = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr **)(v4 - 64);
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)(v4 - 64), *(_QWORD *)(v4 - 64));
    h1_parent = *v12;
    if ( *v12 )
    {
      v28 = *(boost::intrusive::rbtree_node<void*> **)(v4 - 64);
      if ( *(_BYTE *)(((unsigned __int64)h1_parent >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      h1_parent->parent_ = v28;
    }
    else
    {
      v30 = *(_QWORD *)(v4 - 64);
      if ( *(_BYTE *)(((unsigned __int64)(v30 + 8) >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      *(_QWORD *)(v30 + 8) = v30;
      v29 = *(_QWORD *)(v4 - 64);
      if ( *(_BYTE *)(((unsigned __int64)(v29 + 16) >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      *(_QWORD *)(v29 + 16) = v29;
    }
    v13 = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr **)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)(v4 - 32), *(_QWORD *)(v4 - 32));
    h2_parent = *v13;
    if ( *v13 )
    {
      v31 = *(boost::intrusive::rbtree_node<void*> **)(v4 - 32);
      if ( *(_BYTE *)(((unsigned __int64)h2_parent >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      h2_parent->parent_ = v31;
    }
    else
    {
      v33 = *(_QWORD *)(v4 - 32);
      if ( *(_BYTE *)(((unsigned __int64)(v33 + 8) >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      *(_QWORD *)(v33 + 8) = v33;
      v32 = *(_QWORD *)(v4 - 32);
      if ( *(_BYTE *)(((unsigned __int64)(v32 + 16) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v32 + 16) = v32;
    }
  }
  if ( v34 == (char *)v2 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    v5[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v5[536862722] = -168430091;
  }
};

// Line 750: range 000000000C7736B2-000000000C773A4D
boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr __cdecl boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::find<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>(
        const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *header,
        const boost::basic_string_view<char,std::char_traits<char> > *key,
        boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *p_comp)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::intrusive::rbtree_node<void*> *v6; // rsi
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *v7; // rax
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr v8; // rdi
  const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v9; // rdi
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v10; // rcx
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr result; // rax
  char v14; // [rsp+27h] [rbp-139h] BYREF
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > v15; // [rsp+28h] [rbp-138h] BYREF
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > v16; // [rsp+30h] [rbp-130h] BYREF
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr end; // [rsp+38h] [rbp-128h]
  boost::intrusive::rbtree_node<void*> **ptr; // [rsp+40h] [rbp-120h]
  boost::basic_string_view<char,std::char_traits<char> > *v19; // [rsp+48h] [rbp-118h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v20; // [rsp+50h] [rbp-110h]
  boost::intrusive::rbtree_node<void*> **v21; // [rsp+58h] [rbp-108h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v22; // [rsp+60h] [rbp-100h]
  boost::basic_string_view<char,std::char_traits<char> > *v23; // [rsp+68h] [rbp-F8h]
  __int64 v24; // [rsp+70h] [rbp-F0h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v25; // [rsp+78h] [rbp-E8h]
  char *v26; // [rsp+80h] [rbp-E0h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v27; // [rsp+88h] [rbp-D8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v28; // [rsp+90h] [rbp-D0h]
  char *v29; // [rsp+98h] [rbp-C8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v30; // [rsp+A0h] [rbp-C0h]
  boost::intrusive::rbtree_node<void*> *v31; // [rsp+A8h] [rbp-B8h]
  const boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3> *p_right; // [rsp+B0h] [rbp-B0h]
  const boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3> *v33; // [rsp+B8h] [rbp-A8h]
  const boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3> *v34; // [rsp+C0h] [rbp-A0h]
  const boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3> *v35; // [rsp+C8h] [rbp-98h]
  __int64 v36; // [rsp+D0h] [rbp-90h]
  const boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3> *v37; // [rsp+D8h] [rbp-88h]
  boost::beast::string_view *v38; // [rsp+E0h] [rbp-80h]
  const boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3> *v39; // [rsp+E8h] [rbp-78h]
  __int64 v40; // [rsp+F0h] [rbp-70h]
  char *v41; // [rsp+F8h] [rbp-68h]
  char v42[96]; // [rsp+100h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 y:754";
  *(_QWORD *)(v3 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::find<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  end = boost::intrusive::detail::uncast<boost::intrusive::rbtree_node<void *> const*>(header);
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>::key_nodeptr_comp(
    &v15,
    p_comp);
  ptr = (boost::intrusive::rbtree_node<void*> **)header;
  v19 = (boost::basic_string_view<char,std::char_traits<char> > *)key;
  v20 = &v15;
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>::key_nodeptr_comp(
    &v16,
    &v15);
  v6 = boost::intrusive::detail::uncast<boost::intrusive::rbtree_node<void *> const*>((const boost::intrusive::rbtree_node<void*> *const *)ptr);
  v21 = ptr;
  if ( *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(ptr, v6);
  v7 = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)*v21;
  if ( *(_BYTE *)(((unsigned __int64)*v21 >> 3) + 0x7FFF8000) )
    v7 = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)__asan_report_load8(*v21, v6);
  v8 = *v7;
  *(_QWORD *)(v3 + 32) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::lower_bound_loop<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>(
                           *v7,
                           v6,
                           v19,
                           &v16);
  if ( end == *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 32) )
    goto LABEL_16;
  v22 = p_comp;
  v23 = (boost::basic_string_view<char,std::char_traits<char> > *)key;
  v24 = 0LL;
  v25 = p_comp;
  v26 = &v14;
  v27 = p_comp;
  v28 = p_comp;
  v29 = &v14;
  v30 = p_comp;
  v31 = (boost::intrusive::rbtree_node<void*> *)(v3 + 32);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
  {
    v8 = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)(v3 + 32);
    __asan_report_load8(v3 + 32, v6);
  }
  p_right = (const boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3> *)&v31->parent_[-1].right_;
  v33 = p_right;
  v34 = p_right;
  v16.traits_ = p_right;
  v35 = p_right;
  v36 = 0LL;
  v37 = p_right;
  if ( !p_right )
  {
    __asan_handle_no_return(v8);
    __assert_fail(
      off_19EF58C0,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
      0x3Eu,
      "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePtr,"
      " Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::elem"
      "ent; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3; boos"
      "t::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocator<char"
      "> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtree_node<void*>*]");
  }
  v38 = v23;
  v39 = v37;
  v40 = 0LL;
  v41 = &v14;
  v9 = (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)&v14;
  v10 = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&v37[48];
  if ( *(_WORD *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    v9 = (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)v23;
    __asan_report_load16();
  }
  if ( boost::beast::http::basic_fields<std::allocator<char>>::key_compare::operator()(v9, *v38, v10) )
LABEL_16:
    result = end;
  else
    result = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 32);
  if ( v42 == (char *)v3 )
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

// Line 780: range 000000000C78F534-000000000C79023C
std::pair<boost::intrusive::rbtree_node<void*>*,boost::intrusive::rbtree_node<void*>*> __cdecl boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::bounded_range<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>(
        const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *header,
        const boost::basic_string_view<char,std::char_traits<char> > *lower_key,
        const boost::basic_string_view<char,std::char_traits<char> > *upper_key,
        boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *p_comp,
        bool left_closed,
        bool right_closed)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  _QWORD *v9; // rax
  const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v10; // rdi
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *p_right; // rsi
  __int64 v12; // rax
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v13; // rcx
  __int64 v14; // rax
  const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v15; // rdi
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v16; // rcx
  const char *ptr; // rsi
  const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v18; // rdi
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v19; // rsi
  boost::intrusive::rbtree_node<void*> *v20; // rsi
  __int64 v21; // rax
  boost::intrusive::rbtree_node<void*> *v22; // rax
  boost::intrusive::rbtree_node<void*> *v23; // rsi
  __int64 v24; // rax
  boost::intrusive::rbtree_node<void*> *v25; // rax
  std::pair<boost::intrusive::rbtree_node<void*>*,boost::intrusive::rbtree_node<void*>*> result; // rax
  const boost::basic_string_view<char,std::char_traits<char> > *lower_keya; // [rsp+20h] [rbp-400h]
  char v32; // [rsp+37h] [rbp-3E9h] BYREF
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > v33; // [rsp+38h] [rbp-3E8h] BYREF
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > v34; // [rsp+40h] [rbp-3E0h] BYREF
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > v35; // [rsp+48h] [rbp-3D8h] BYREF
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > v36; // [rsp+50h] [rbp-3D0h] BYREF
  boost::intrusive::rbtree_node<void*> *__x; // [rsp+58h] [rbp-3C8h] BYREF
  boost::intrusive::rbtree_node<void*> *__y; // [rsp+60h] [rbp-3C0h] BYREF
  const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr **v39; // [rsp+68h] [rbp-3B8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v40; // [rsp+70h] [rbp-3B0h]
  boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v41; // [rsp+78h] [rbp-3A8h]
  __int64 v42; // [rsp+80h] [rbp-3A0h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v43; // [rsp+88h] [rbp-398h]
  char *v44; // [rsp+90h] [rbp-390h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v45; // [rsp+98h] [rbp-388h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v46; // [rsp+A0h] [rbp-380h]
  char *v47; // [rsp+A8h] [rbp-378h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v48; // [rsp+B0h] [rbp-370h]
  _QWORD *v49; // [rsp+B8h] [rbp-368h]
  boost::intrusive::rbtree_node<void*> *v50; // [rsp+C0h] [rbp-360h]
  boost::intrusive::rbtree_node<void*> *v51; // [rsp+C8h] [rbp-358h]
  boost::intrusive::rbtree_node<void*> *v52; // [rsp+D0h] [rbp-350h]
  boost::intrusive::rbtree_node<void*> *v53; // [rsp+D8h] [rbp-348h]
  __int64 v54; // [rsp+E0h] [rbp-340h]
  boost::intrusive::rbtree_node<void*> *v55; // [rsp+E8h] [rbp-338h]
  boost::intrusive::rbtree_node<void*> *v56; // [rsp+F0h] [rbp-330h]
  boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v57; // [rsp+F8h] [rbp-328h]
  __int64 v58; // [rsp+100h] [rbp-320h]
  char *v59; // [rsp+108h] [rbp-318h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v60; // [rsp+110h] [rbp-310h]
  boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v61; // [rsp+118h] [rbp-308h]
  __int64 v62; // [rsp+120h] [rbp-300h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v63; // [rsp+128h] [rbp-2F8h]
  char *v64; // [rsp+130h] [rbp-2F0h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v65; // [rsp+138h] [rbp-2E8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v66; // [rsp+140h] [rbp-2E0h]
  char *v67; // [rsp+148h] [rbp-2D8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v68; // [rsp+150h] [rbp-2D0h]
  _QWORD *v69; // [rsp+158h] [rbp-2C8h]
  boost::intrusive::rbtree_node<void*> *v70; // [rsp+160h] [rbp-2C0h]
  boost::intrusive::rbtree_node<void*> *v71; // [rsp+168h] [rbp-2B8h]
  boost::intrusive::rbtree_node<void*> *v72; // [rsp+170h] [rbp-2B0h]
  boost::intrusive::rbtree_node<void*> *v73; // [rsp+178h] [rbp-2A8h]
  __int64 v74; // [rsp+180h] [rbp-2A0h]
  const boost::basic_string_view<char,std::char_traits<char> > *v75; // [rsp+188h] [rbp-298h]
  const boost::basic_string_view<char,std::char_traits<char> > *v76; // [rsp+190h] [rbp-290h]
  boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v77; // [rsp+198h] [rbp-288h]
  __int64 v78; // [rsp+1A0h] [rbp-280h]
  char *v79; // [rsp+1A8h] [rbp-278h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v80; // [rsp+1B0h] [rbp-270h]
  const boost::basic_string_view<char,std::char_traits<char> > **v81; // [rsp+1B8h] [rbp-268h]
  __int64 v82; // [rsp+1C0h] [rbp-260h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v83; // [rsp+1C8h] [rbp-258h]
  char *v84; // [rsp+1D0h] [rbp-250h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v85; // [rsp+1D8h] [rbp-248h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v86; // [rsp+1E0h] [rbp-240h]
  char *v87; // [rsp+1E8h] [rbp-238h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v88; // [rsp+1F0h] [rbp-230h]
  _QWORD *v89; // [rsp+1F8h] [rbp-228h]
  boost::intrusive::rbtree_node<void*> *v90; // [rsp+200h] [rbp-220h]
  boost::intrusive::rbtree_node<void*> *v91; // [rsp+208h] [rbp-218h]
  boost::intrusive::rbtree_node<void*> *v92; // [rsp+210h] [rbp-210h]
  boost::intrusive::rbtree_node<void*> *v93; // [rsp+218h] [rbp-208h]
  __int64 v94; // [rsp+220h] [rbp-200h]
  boost::intrusive::rbtree_node<void*> *v95; // [rsp+228h] [rbp-1F8h]
  const boost::basic_string_view<char,std::char_traits<char> > **v96; // [rsp+230h] [rbp-1F0h]
  boost::intrusive::rbtree_node<void*> *v97; // [rsp+238h] [rbp-1E8h]
  __int64 v98; // [rsp+240h] [rbp-1E0h]
  char *v99; // [rsp+248h] [rbp-1D8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v100; // [rsp+250h] [rbp-1D0h]
  unsigned __int64 v101; // [rsp+258h] [rbp-1C8h]
  __int64 v102; // [rsp+260h] [rbp-1C0h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v103; // [rsp+268h] [rbp-1B8h]
  char *v104; // [rsp+270h] [rbp-1B0h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v105; // [rsp+278h] [rbp-1A8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v106; // [rsp+280h] [rbp-1A0h]
  char *v107; // [rsp+288h] [rbp-198h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v108; // [rsp+290h] [rbp-190h]
  _QWORD *v109; // [rsp+298h] [rbp-188h]
  boost::intrusive::rbtree_node<void*> *v110; // [rsp+2A0h] [rbp-180h]
  boost::intrusive::rbtree_node<void*> *v111; // [rsp+2A8h] [rbp-178h]
  boost::intrusive::rbtree_node<void*> *v112; // [rsp+2B0h] [rbp-170h]
  boost::intrusive::rbtree_node<void*> *v113; // [rsp+2B8h] [rbp-168h]
  __int64 v114; // [rsp+2C0h] [rbp-160h]
  boost::intrusive::rbtree_node<void*> *v115; // [rsp+2C8h] [rbp-158h]
  boost::beast::string_view *v116; // [rsp+2D0h] [rbp-150h]
  boost::intrusive::rbtree_node<void*> *v117; // [rsp+2D8h] [rbp-148h]
  __int64 v118; // [rsp+2E0h] [rbp-140h]
  char *v119; // [rsp+2E8h] [rbp-138h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v120; // [rsp+2F0h] [rbp-130h]
  boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v121; // [rsp+2F8h] [rbp-128h]
  __int64 v122; // [rsp+300h] [rbp-120h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v123; // [rsp+308h] [rbp-118h]
  char *v124; // [rsp+310h] [rbp-110h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v125; // [rsp+318h] [rbp-108h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v126; // [rsp+320h] [rbp-100h]
  char *v127; // [rsp+328h] [rbp-F8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v128; // [rsp+330h] [rbp-F0h]
  _QWORD *v129; // [rsp+338h] [rbp-E8h]
  boost::intrusive::rbtree_node<void*> *v130; // [rsp+340h] [rbp-E0h]
  boost::intrusive::rbtree_node<void*> *v131; // [rsp+348h] [rbp-D8h]
  boost::intrusive::rbtree_node<void*> *v132; // [rsp+350h] [rbp-D0h]
  boost::intrusive::rbtree_node<void*> *v133; // [rsp+358h] [rbp-C8h]
  __int64 v134; // [rsp+360h] [rbp-C0h]
  boost::intrusive::rbtree_node<void*> *v135; // [rsp+368h] [rbp-B8h]
  boost::intrusive::rbtree_node<void*> *v136; // [rsp+370h] [rbp-B0h]
  boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v137; // [rsp+378h] [rbp-A8h]
  __int64 v138; // [rsp+380h] [rbp-A0h]
  char *v139; // [rsp+388h] [rbp-98h]
  std::pair<boost::intrusive::rbtree_node<void*>*,boost::intrusive::rbtree_node<void*>*> v140; // [rsp+390h] [rbp-90h] BYREF
  char v141[128]; // [rsp+3A0h] [rbp-80h] BYREF

  lower_keya = lower_key;
  v6 = (unsigned __int64)v141;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 5 y:788 64 8 5 x:789";
  *(_QWORD *)(v6 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::bounded_range<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -202116352;
  *(_QWORD *)(v6 + 32) = boost::intrusive::detail::uncast<boost::intrusive::rbtree_node<void *> const*>(header);
  v39 = (const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr **)header;
  if ( *(_BYTE *)(((unsigned __int64)header >> 3) + 0x7FFF8000) )
    __asan_report_load8(header, lower_key);
  v9 = *v39;
  if ( *(_BYTE *)(((unsigned __int64)*v39 >> 3) + 0x7FFF8000) )
  {
    header = *v39;
    v9 = (_QWORD *)__asan_report_load8(*v39, lower_key);
  }
  for ( *(_QWORD *)(v6 + 64) = *v9; ; *(_QWORD *)(v6 + 64) = *(_QWORD *)(v14 + 8) )
  {
    while ( 1 )
    {
      if ( !*(_QWORD *)(v6 + 64) )
      {
        std::pair<boost::intrusive::rbtree_node<void *> *,boost::intrusive::rbtree_node<void *> *>::pair<boost::intrusive::rbtree_node<void *> *&,boost::intrusive::rbtree_node<void *> *&,true>(
          &v140,
          (boost::intrusive::rbtree_node<void*> **)(v6 + 32),
          (boost::intrusive::rbtree_node<void*> **)(v6 + 32));
        result = v140;
        goto LABEL_67;
      }
      v40 = p_comp;
      v41 = (boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)lower_keya;
      v42 = 0LL;
      v43 = p_comp;
      v44 = &v32;
      v45 = p_comp;
      v46 = p_comp;
      v47 = &v32;
      v48 = p_comp;
      v49 = (_QWORD *)(v6 + 64);
      if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
      {
        header = (const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)(v6 + 64);
        __asan_report_load8(v6 + 64, lower_key);
      }
      v50 = (boost::intrusive::rbtree_node<void*> *)(*v49 - 16LL);
      v51 = v50;
      v52 = v50;
      __y = v50;
      v53 = v50;
      v54 = 0LL;
      v55 = v50;
      if ( !v50 )
      {
        __asan_handle_no_return(header);
        __assert_fail(
          off_19EF58C0,
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
          0x3Eu,
          "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, Node"
          "Ptr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char>"
          " >::element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Ty"
          "pe = 3; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std"
          "::allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intru"
          "sive::rbtree_node<void*>*]");
      }
      v56 = v55;
      v57 = v41;
      v58 = 0LL;
      v59 = &v32;
      v10 = (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)&v32;
      p_right = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&v55[1].right_;
      if ( *(_WORD *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
      {
        v10 = v41;
        __asan_report_load16();
      }
      if ( !boost::beast::http::basic_fields<std::allocator<char>>::key_compare::operator()(
              v10,
              p_right,
              *(boost::beast::string_view *)v57->gap0) )
        break;
      v60 = p_comp;
      v61 = (boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)upper_key;
      v62 = 0LL;
      v63 = p_comp;
      v64 = &v32;
      v65 = p_comp;
      v66 = p_comp;
      v67 = &v32;
      v68 = p_comp;
      v69 = (_QWORD *)(v6 + 64);
      if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
      {
        v10 = (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)(v6 + 64);
        __asan_report_load8(v6 + 64, p_right);
      }
      v70 = (boost::intrusive::rbtree_node<void*> *)(*v69 - 16LL);
      v71 = v70;
      v72 = v70;
      __y = v70;
      v73 = v70;
      v74 = 0LL;
      v75 = (const boost::basic_string_view<char,std::char_traits<char> > *)v70;
      if ( !v70 )
      {
        __asan_handle_no_return(v10);
        __assert_fail(
          off_19EF58C0,
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
          0x3Eu,
          "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, Node"
          "Ptr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char>"
          " >::element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Ty"
          "pe = 3; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std"
          "::allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intru"
          "sive::rbtree_node<void*>*]");
      }
      v76 = v75;
      v77 = v61;
      v78 = 0LL;
      v79 = &v32;
      header = (const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)&v32;
      lower_key = v75 + 3;
      if ( *(_WORD *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
      {
        header = (const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)v61;
        __asan_report_load16();
      }
      if ( !boost::beast::http::basic_fields<std::allocator<char>>::key_compare::operator()(
              (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *const)header,
              (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)lower_key,
              *(boost::beast::string_view *)v77->gap0) )
      {
        __asan_handle_no_return(header);
        __assert_fail(
          "comp(x, upper_key)",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp",
          0x31Cu,
          "static std::pair<typename NodeTraits::node_ptr, typename NodeTraits::node_ptr> boost::intrusive::bstree_algori"
          "thms<NodeTraits>::bounded_range(const const_node_ptr&, const KeyType&, const KeyType&, KeyNodePtrCompare, bool"
          ", bool) [with KeyType = boost::basic_string_view<char, std::char_traits<char> >; KeyNodePtrCompare = boost::in"
          "trusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare, boost:"
          ":intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element, boost::intrusive::rbtre"
          "e_node_traits<void*, false>, boost::intrusive::normal_link, boost::intrusive::dft_tag, 3>, boost::move_detail:"
          ":identity<boost::beast::http::basic_fields<std::allocator<char> >::element> >; NodeTraits = boost::intrusive::"
          "rbtree_node_traits<void*, false>; typename NodeTraits::node_ptr = boost::intrusive::rbtree_node<void*>*; boost"
          "::intrusive::bstree_algorithms<NodeTraits>::const_node_ptr = const boost::intrusive::rbtree_node<void*>*]");
      }
      v12 = *(_QWORD *)(v6 + 64);
      if ( *(_BYTE *)(((unsigned __int64)(v12 + 16) >> 3) + 0x7FFF8000) )
      {
        header = (const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)(v12 + 16);
        v12 = __asan_report_load8(v12 + 16, lower_key);
      }
      *(_QWORD *)(v6 + 64) = *(_QWORD *)(v12 + 16);
    }
    v80 = p_comp;
    v81 = (const boost::basic_string_view<char,std::char_traits<char> > **)upper_key;
    v82 = 0LL;
    v83 = p_comp;
    v84 = &v32;
    v85 = p_comp;
    v86 = p_comp;
    v87 = &v32;
    v88 = p_comp;
    v89 = (_QWORD *)(v6 + 64);
    if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    {
      v10 = (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)(v6 + 64);
      __asan_report_load8(v6 + 64, p_right);
    }
    v90 = (boost::intrusive::rbtree_node<void*> *)(*v89 - 16LL);
    v91 = v90;
    v92 = v90;
    __y = v90;
    v93 = v90;
    v94 = 0LL;
    v95 = v90;
    if ( !v90 )
    {
      __asan_handle_no_return(v10);
      __assert_fail(
        off_19EF58C0,
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
        0x3Eu,
        "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePt"
        "r, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::"
        "element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3"
        "; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::alloca"
        "tor<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtr"
        "ee_node<void*>*]");
    }
    v96 = v81;
    v97 = v95;
    v98 = 0LL;
    v99 = &v32;
    header = (const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)&v32;
    v13 = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&v95[1].right_;
    if ( *(_WORD *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) )
    {
      header = (const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)v81;
      __asan_report_load16();
    }
    lower_key = *v96;
    if ( !boost::beast::http::basic_fields<std::allocator<char>>::key_compare::operator()(
            (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *const)header,
            *(boost::beast::string_view *)v96,
            v13) )
      break;
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(v6 + 64);
    v14 = *(_QWORD *)(v6 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000) )
    {
      header = (const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)(v14 + 8);
      v14 = __asan_report_load8(v14 + 8, lower_key);
    }
  }
  if ( !left_closed && !right_closed )
  {
    v100 = p_comp;
    v101 = (unsigned __int64)lower_keya;
    v102 = 0LL;
    v103 = p_comp;
    v104 = &v32;
    v105 = p_comp;
    v106 = p_comp;
    v107 = &v32;
    v108 = p_comp;
    v109 = (_QWORD *)(v6 + 64);
    if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    {
      header = (const boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)(v6 + 64);
      __asan_report_load8(v6 + 64, lower_key);
    }
    v110 = (boost::intrusive::rbtree_node<void*> *)(*v109 - 16LL);
    v111 = v110;
    v112 = v110;
    __y = v110;
    v113 = v110;
    v114 = 0LL;
    v115 = v110;
    if ( !v110 )
    {
      __asan_handle_no_return(header);
      __assert_fail(
        off_19EF58C0,
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
        0x3Eu,
        "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePt"
        "r, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::"
        "element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3"
        "; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::alloca"
        "tor<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtr"
        "ee_node<void*>*]");
    }
    v116 = (boost::beast::string_view *)v101;
    v117 = v115;
    v118 = 0LL;
    v119 = &v32;
    v15 = (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)&v32;
    v16 = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&v115[1].right_;
    if ( *(_WORD *)((v101 >> 3) + 0x7FFF8000) )
    {
      v15 = (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)v101;
      __asan_report_load16();
    }
    ptr = v116->ptr_;
    if ( !boost::beast::http::basic_fields<std::allocator<char>>::key_compare::operator()(v15, *v116, v16) )
    {
      v120 = p_comp;
      v121 = (boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)upper_key;
      v122 = 0LL;
      v123 = p_comp;
      v124 = &v32;
      v125 = p_comp;
      v126 = p_comp;
      v127 = &v32;
      v128 = p_comp;
      v129 = (_QWORD *)(v6 + 64);
      if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
      {
        v15 = (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)(v6 + 64);
        __asan_report_load8(v6 + 64, ptr);
      }
      v130 = (boost::intrusive::rbtree_node<void*> *)(*v129 - 16LL);
      v131 = v130;
      v132 = v130;
      __y = v130;
      v133 = v130;
      v134 = 0LL;
      v135 = v130;
      if ( !v130 )
      {
        __asan_handle_no_return(v15);
        __assert_fail(
          off_19EF58C0,
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
          0x3Eu,
          "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, Node"
          "Ptr, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char>"
          " >::element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Ty"
          "pe = 3; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std"
          "::allocator<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intru"
          "sive::rbtree_node<void*>*]");
      }
      v136 = v135;
      v137 = v121;
      v138 = 0LL;
      v139 = &v32;
      v18 = (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *)&v32;
      v19 = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&v135[1].right_;
      if ( *(_WORD *)(((unsigned __int64)v121 >> 3) + 0x7FFF8000) )
      {
        v18 = v121;
        __asan_report_load16();
      }
      if ( !boost::beast::http::basic_fields<std::allocator<char>>::key_compare::operator()(
              v18,
              v19,
              *(boost::beast::string_view *)v137->gap0) )
      {
        __asan_handle_no_return(v18);
        __assert_fail(
          "left_closed || right_closed || comp(lower_key, x) || comp(x, upper_key)",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp",
          0x32Au,
          "static std::pair<typename NodeTraits::node_ptr, typename NodeTraits::node_ptr> boost::intrusive::bstree_algori"
          "thms<NodeTraits>::bounded_range(const const_node_ptr&, const KeyType&, const KeyType&, KeyNodePtrCompare, bool"
          ", bool) [with KeyType = boost::basic_string_view<char, std::char_traits<char> >; KeyNodePtrCompare = boost::in"
          "trusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare, boost:"
          ":intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element, boost::intrusive::rbtre"
          "e_node_traits<void*, false>, boost::intrusive::normal_link, boost::intrusive::dft_tag, 3>, boost::move_detail:"
          ":identity<boost::beast::http::basic_fields<std::allocator<char> >::element> >; NodeTraits = boost::intrusive::"
          "rbtree_node_traits<void*, false>; typename NodeTraits::node_ptr = boost::intrusive::rbtree_node<void*>*; boost"
          "::intrusive::bstree_algorithms<NodeTraits>::const_node_ptr = const boost::intrusive::rbtree_node<void*>*]");
      }
    }
  }
  if ( right_closed )
  {
    boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>::key_nodeptr_comp(
      &v35,
      p_comp);
    v20 = *(boost::intrusive::rbtree_node<void*> **)(v6 + 32);
    v21 = *(_QWORD *)(v6 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v21 + 16) >> 3) + 0x7FFF8000) )
      v21 = __asan_report_load8(v21 + 16, v20);
    v22 = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::upper_bound_loop<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>(
            *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v21 + 16),
            v20,
            upper_key,
            &v35);
  }
  else
  {
    boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>::key_nodeptr_comp(
      &v36,
      p_comp);
    v22 = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::lower_bound_loop<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>(
            *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v6 + 64),
            *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v6 + 32),
            upper_key,
            &v36);
  }
  __y = v22;
  if ( left_closed )
  {
    boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>::key_nodeptr_comp(
      &v33,
      p_comp);
    v23 = *(boost::intrusive::rbtree_node<void*> **)(v6 + 64);
    v24 = (__int64)v23;
    if ( *(_BYTE *)(((unsigned __int64)&v23->left_ >> 3) + 0x7FFF8000) )
      v24 = __asan_report_load8(&v23->left_, v23);
    v25 = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::lower_bound_loop<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>(
            *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v24 + 8),
            v23,
            lower_keya,
            &v33);
  }
  else
  {
    boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>::key_nodeptr_comp(
      &v34,
      p_comp);
    v25 = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::upper_bound_loop<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>(
            *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v6 + 64),
            *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v6 + 32),
            lower_keya,
            &v34);
  }
  __x = v25;
  std::pair<boost::intrusive::rbtree_node<void *> *,boost::intrusive::rbtree_node<void *> *>::pair<boost::intrusive::rbtree_node<void *> *,boost::intrusive::rbtree_node<void *> *,true>(
    &v140,
    &__x,
    &__y);
  result = v140;
LABEL_67:
  if ( v141 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1193: range 000000000C778A66-000000000C778B66
boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr __cdecl boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before(
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr pos,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr new_node,
        std::size_t *pdepth)
{
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::insert_commit_data *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr result; // rax
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::insert_commit_data *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::insert_commit_data *)v5;
  }
  *(_QWORD *)&v4->link_left = 1102416563LL;
  v4->node = (boost::intrusive::rbtree_node<void*> *)"1 32 16 16 commit_data:1200";
  *(_QWORD *)&v4[1].link_left = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before;
  v6 = (unsigned __int64)v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  v4[2].link_left = 0;
  v4[2].node = 0LL;
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before_check(
    header,
    pos,
    v4 + 2,
    pdepth);
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_commit(
    header,
    new_node,
    v4 + 2);
  result = new_node;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)&v4->link_left = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1265: range 000000000C78B0A1-000000000C78B1F2
std::size_t __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::depth(
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr node)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  char *v3; // rdx
  _DWORD *v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  std::size_t depth; // [rsp+18h] [rbp-78h]
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = (char *)(v1 + 96);
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 13 p_parent:1268 64 8 9 node:1265";
  *(_QWORD *)(v1 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::depth;
  v4 = (_DWORD *)(v1 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  *(_QWORD *)(v1 + 64) = node;
  for ( depth = 0LL; ; ++depth )
  {
    v5 = *((_QWORD *)v3 - 4);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = (_DWORD *)__asan_report_load8(*((_QWORD *)v3 - 4), *((_QWORD *)v3 - 4));
    *((_QWORD *)v3 - 8) = *(_QWORD *)v5;
    v6 = *((_QWORD *)v3 - 8);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v4 = (_DWORD *)__asan_report_load8(*((_QWORD *)v3 - 8), *((_QWORD *)v3 - 8));
    if ( *(_QWORD *)v6 == *((_QWORD *)v3 - 4) )
      break;
    *((_QWORD *)v3 - 4) = *((_QWORD *)v3 - 8);
  }
  if ( v9 == (char *)v1 )
  {
    *((_QWORD *)v4 + 268431360) = 0LL;
    v4[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *((_QWORD *)v4 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v4[536862722] = -168430091;
  }
  return depth;
};

// Line 1500: range 000000000C7792A8-000000000C779BF7
void __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::erase(
        __int64 header,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr z,
        unsigned __int64 info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  boost::intrusive::rbtree_node<void*> *v13; // rsi
  boost::intrusive::rbtree_node<void*> *v14; // rdi
  __int64 v15; // rax
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr v16; // rax
  __int64 v17; // rax
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr v18; // rax
  boost::intrusive::rbtree_node<void*> *v19; // rdx
  boost::intrusive::rbtree_node<void*> *v20; // rdx
  unsigned __int64 v21; // rax
  boost::intrusive::rbtree_node<void*> *v22; // rdx
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr v24; // [rsp+18h] [rbp-1C8h]
  bool z_is_leftchild; // [rsp+2Fh] [rbp-1B1h]
  unsigned __int64 z_left; // [rsp+30h] [rbp-1B0h]
  boost::intrusive::rbtree_node<void*> *z_right; // [rsp+38h] [rbp-1A8h]
  __int64 v28; // [rsp+40h] [rbp-1A0h]
  boost::intrusive::rbtree_node<void*> *v29; // [rsp+58h] [rbp-188h]
  boost::intrusive::rbtree_node<void*> *v30; // [rsp+68h] [rbp-178h]
  __int64 v31; // [rsp+70h] [rbp-170h]
  unsigned __int64 v32; // [rsp+80h] [rbp-160h]
  __int64 v33; // [rsp+88h] [rbp-158h]
  __int64 v34; // [rsp+90h] [rbp-150h]
  __int64 v35; // [rsp+98h] [rbp-148h]
  unsigned __int64 v36; // [rsp+A0h] [rbp-140h]
  __int64 v37; // [rsp+A8h] [rbp-138h]
  unsigned __int64 v38; // [rsp+B0h] [rbp-130h]
  __int64 v39; // [rsp+B8h] [rbp-128h]
  __int64 v40; // [rsp+C0h] [rbp-120h]
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr v41; // [rsp+C8h] [rbp-118h]
  __int64 v42; // [rsp+D0h] [rbp-110h]
  boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr v43; // [rsp+D8h] [rbp-108h]
  char v44[256]; // [rsp+E0h] [rbp-100h] BYREF

  v24 = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)header;
  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    header = 224LL;
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 6 y:1502 64 8 6 x:1503 96 8 13 x_parent:1520 128 8 13 z_parent:1521 160 8 11 header:1500 192 8 6 z:1500";
  *(_QWORD *)(v3 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::erase;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -202116352;
  *(_QWORD *)(v3 + 160) = v24;
  *(_QWORD *)(v3 + 192) = z;
  *(_QWORD *)(v3 + 32) = *(_QWORD *)(v3 + 192);
  v6 = *(_QWORD *)(v3 + 192);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
  {
    header = v6 + 8;
    v6 = __asan_report_load8(v6 + 8, z);
  }
  z_left = *(_QWORD *)(v6 + 8);
  v7 = *(_QWORD *)(v3 + 192);
  if ( *(_BYTE *)(((unsigned __int64)(v7 + 16) >> 3) + 0x7FFF8000) )
  {
    header = v7 + 16;
    v7 = __asan_report_load8(v7 + 16, z);
  }
  z_right = *(boost::intrusive::rbtree_node<void*> **)(v7 + 16);
  if ( z_left )
  {
    if ( z_right )
    {
      header = *(_QWORD *)(v7 + 16);
      *(_QWORD *)(v3 + 32) = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::minimum(z_right);
      v8 = *(_QWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v8 + 16) >> 3) + 0x7FFF8000) )
      {
        header = v8 + 16;
        v8 = __asan_report_load8(v8 + 16, z);
      }
      *(_QWORD *)(v3 + 64) = *(_QWORD *)(v8 + 16);
    }
    else
    {
      *(_QWORD *)(v3 + 64) = z_left;
      if ( !*(_QWORD *)(v3 + 64) )
      {
        __asan_handle_no_return(header);
        __assert_fail(
          "x",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp",
          0x5E8u,
          "static void boost::intrusive::bstree_algorithms<NodeTraits>::erase(boost::intrusive::bstree_algorithms<NodeTra"
          "its>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, boost::intrusive::bstree_algorithms"
          "<NodeTraits>::data_for_rebalance&) [with NodeTraits = boost::intrusive::rbtree_node_traits<void*, false>; boos"
          "t::intrusive::bstree_algorithms<NodeTraits>::node_ptr = boost::intrusive::rbtree_node<void*>*; boost::intrusiv"
          "e::bstree_algorithms<NodeTraits>::data_for_rebalance = boost::intrusive::data_for_rebalance_t<boost::intrusive"
          "::rbtree_node<void*>*>; typename NodeTraits::node_ptr = boost::intrusive::rbtree_node<void*>*]");
      }
    }
  }
  else
  {
    *(_QWORD *)(v3 + 64) = z_right;
  }
  v9 = *(_QWORD *)(v3 + 192);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
    header = *(_QWORD *)(v3 + 192);
    v9 = __asan_report_load8(header, z);
  }
  *(_QWORD *)(v3 + 128) = *(_QWORD *)v9;
  v10 = *(_QWORD *)(v3 + 128);
  if ( *(_BYTE *)(((unsigned __int64)(v10 + 8) >> 3) + 0x7FFF8000) )
  {
    header = v10 + 8;
    v10 = __asan_report_load8(v10 + 8, z);
  }
  z_is_leftchild = *(_QWORD *)(v10 + 8) == *(_QWORD *)(v3 + 192);
  if ( *(_QWORD *)(v3 + 32) == *(_QWORD *)(v3 + 192) )
  {
    *(_QWORD *)(v3 + 96) = *(_QWORD *)(v3 + 128);
    if ( *(_QWORD *)(v3 + 64) )
    {
      v38 = *(_QWORD *)(v3 + 64);
      v39 = *(_QWORD *)(v3 + 128);
      if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)v38 = v39;
    }
    v13 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 64);
    v14 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 160);
    boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::set_child(
      v14,
      v13,
      *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 128),
      z_is_leftchild);
    v15 = *(_QWORD *)(v3 + 160);
    if ( *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000) )
    {
      v14 = (boost::intrusive::rbtree_node<void*> *)(v15 + 8);
      v15 = __asan_report_load8(v15 + 8, v13);
    }
    if ( *(_QWORD *)(v15 + 8) == *(_QWORD *)(v3 + 192) )
    {
      if ( z_left )
      {
        __asan_handle_no_return(v14);
        __assert_fail(
          "!z_left",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp",
          0x616u,
          "static void boost::intrusive::bstree_algorithms<NodeTraits>::erase(boost::intrusive::bstree_algorithms<NodeTra"
          "its>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, boost::intrusive::bstree_algorithms"
          "<NodeTraits>::data_for_rebalance&) [with NodeTraits = boost::intrusive::rbtree_node_traits<void*, false>; boos"
          "t::intrusive::bstree_algorithms<NodeTraits>::node_ptr = boost::intrusive::rbtree_node<void*>*; boost::intrusiv"
          "e::bstree_algorithms<NodeTraits>::data_for_rebalance = boost::intrusive::data_for_rebalance_t<boost::intrusive"
          "::rbtree_node<void*>*>; typename NodeTraits::node_ptr = boost::intrusive::rbtree_node<void*>*]");
      }
      if ( z_right )
      {
        v14 = z_right;
        v16 = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::minimum(z_right);
      }
      else
      {
        v16 = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 128);
      }
      v40 = *(_QWORD *)(v3 + 160);
      v41 = v16;
      if ( *(_BYTE *)(((unsigned __int64)(v40 + 8) >> 3) + 0x7FFF8000) )
      {
        v14 = (boost::intrusive::rbtree_node<void*> *)(v40 + 8);
        __asan_report_store8();
      }
      *(_QWORD *)(v40 + 8) = v41;
    }
    v17 = *(_QWORD *)(v3 + 160);
    if ( *(_BYTE *)(((unsigned __int64)(v17 + 16) >> 3) + 0x7FFF8000) )
    {
      v14 = (boost::intrusive::rbtree_node<void*> *)(v17 + 16);
      v17 = __asan_report_load8(v17 + 16, v13);
    }
    if ( *(_QWORD *)(v17 + 16) == *(_QWORD *)(v3 + 192) )
    {
      if ( z_right )
      {
        __asan_handle_no_return(v14);
        __assert_fail(
          "!z_right",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp",
          0x61Du,
          "static void boost::intrusive::bstree_algorithms<NodeTraits>::erase(boost::intrusive::bstree_algorithms<NodeTra"
          "its>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, boost::intrusive::bstree_algorithms"
          "<NodeTraits>::data_for_rebalance&) [with NodeTraits = boost::intrusive::rbtree_node_traits<void*, false>; boos"
          "t::intrusive::bstree_algorithms<NodeTraits>::node_ptr = boost::intrusive::rbtree_node<void*>*; boost::intrusiv"
          "e::bstree_algorithms<NodeTraits>::data_for_rebalance = boost::intrusive::data_for_rebalance_t<boost::intrusive"
          "::rbtree_node<void*>*>; typename NodeTraits::node_ptr = boost::intrusive::rbtree_node<void*>*]");
      }
      if ( z_left )
      {
        v14 = (boost::intrusive::rbtree_node<void*> *)z_left;
        v18 = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::maximum((boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)z_left);
      }
      else
      {
        v18 = *(boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 128);
      }
      v42 = *(_QWORD *)(v3 + 160);
      v43 = v18;
      if ( *(_BYTE *)(((unsigned __int64)(v42 + 16) >> 3) + 0x7FFF8000) )
      {
        v14 = (boost::intrusive::rbtree_node<void*> *)(v42 + 16);
        __asan_report_store8();
      }
      *(_QWORD *)(v42 + 16) = v43;
    }
  }
  else
  {
    v29 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 32);
    if ( *(_BYTE *)((z_left >> 3) + 0x7FFF8000) )
    {
      header = z_left;
      __asan_report_store8();
    }
    *(_QWORD *)z_left = v29;
    v28 = *(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v28 + 8) >> 3) + 0x7FFF8000) )
    {
      header = v28 + 8;
      __asan_report_store8();
    }
    *(_QWORD *)(v28 + 8) = z_left;
    if ( z_right == *(boost::intrusive::rbtree_node<void*> **)(v3 + 32) )
    {
      *(_QWORD *)(v3 + 96) = *(_QWORD *)(v3 + 32);
    }
    else
    {
      v31 = *(_QWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v31 + 16) >> 3) + 0x7FFF8000) )
      {
        header = v31 + 16;
        __asan_report_store8();
      }
      *(_QWORD *)(v31 + 16) = z_right;
      v30 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)z_right >> 3) + 0x7FFF8000) )
      {
        header = (__int64)z_right;
        __asan_report_store8();
      }
      z_right->parent_ = v30;
      v11 = *(_QWORD *)(v3 + 32);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        header = *(_QWORD *)(v3 + 32);
        v11 = __asan_report_load8(header, z);
      }
      *(_QWORD *)(v3 + 96) = *(_QWORD *)v11;
      v12 = *(_QWORD *)(v3 + 96);
      if ( *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000) )
      {
        header = v12 + 8;
        v12 = __asan_report_load8(v12 + 8, z);
      }
      if ( *(_QWORD *)(v12 + 8) != *(_QWORD *)(v3 + 32) )
      {
        __asan_handle_no_return(header);
        __assert_fail(
          "NodeTraits::get_left(x_parent) == y",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp",
          0x600u,
          "static void boost::intrusive::bstree_algorithms<NodeTraits>::erase(boost::intrusive::bstree_algorithms<NodeTra"
          "its>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, boost::intrusive::bstree_algorithms"
          "<NodeTraits>::data_for_rebalance&) [with NodeTraits = boost::intrusive::rbtree_node_traits<void*, false>; boos"
          "t::intrusive::bstree_algorithms<NodeTraits>::node_ptr = boost::intrusive::rbtree_node<void*>*; boost::intrusiv"
          "e::bstree_algorithms<NodeTraits>::data_for_rebalance = boost::intrusive::data_for_rebalance_t<boost::intrusive"
          "::rbtree_node<void*>*>; typename NodeTraits::node_ptr = boost::intrusive::rbtree_node<void*>*]");
      }
      if ( *(_QWORD *)(v3 + 64) )
      {
        v32 = *(_QWORD *)(v3 + 64);
        v33 = *(_QWORD *)(v3 + 96);
        if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)v32 = v33;
      }
      v34 = *(_QWORD *)(v3 + 96);
      v35 = *(_QWORD *)(v3 + 64);
      if ( *(_BYTE *)(((unsigned __int64)(v34 + 8) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v34 + 8) = v35;
    }
    v36 = *(_QWORD *)(v3 + 32);
    v37 = *(_QWORD *)(v3 + 128);
    if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)v36 = v37;
    v13 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 32);
    v14 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 160);
    boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::set_child(
      v14,
      v13,
      *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v3 + 128),
      z_is_leftchild);
  }
  v19 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 64);
  if ( *(_BYTE *)((info >> 3) + 0x7FFF8000) )
  {
    v14 = (boost::intrusive::rbtree_node<void*> *)info;
    __asan_report_store8();
  }
  *(_QWORD *)info = v19;
  v20 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 32);
  if ( *(_BYTE *)(((info + 16) >> 3) + 0x7FFF8000) )
  {
    v14 = (boost::intrusive::rbtree_node<void*> *)(info + 16);
    __asan_report_store8();
  }
  *(_QWORD *)(info + 16) = v20;
  if ( *(_QWORD *)(v3 + 64) )
  {
    v21 = *(_QWORD *)(v3 + 64);
    if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    {
      v14 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 64);
      v21 = __asan_report_load8(v14, v13);
    }
    if ( *(_QWORD *)v21 != *(_QWORD *)(v3 + 96) )
    {
      __asan_handle_no_return(v14);
      __assert_fail(
        "!x || NodeTraits::get_parent(x) == x_parent",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp",
        0x62Au,
        "static void boost::intrusive::bstree_algorithms<NodeTraits>::erase(boost::intrusive::bstree_algorithms<NodeTrait"
        "s>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, boost::intrusive::bstree_algorithms<Nod"
        "eTraits>::data_for_rebalance&) [with NodeTraits = boost::intrusive::rbtree_node_traits<void*, false>; boost::int"
        "rusive::bstree_algorithms<NodeTraits>::node_ptr = boost::intrusive::rbtree_node<void*>*; boost::intrusive::bstre"
        "e_algorithms<NodeTraits>::data_for_rebalance = boost::intrusive::data_for_rebalance_t<boost::intrusive::rbtree_n"
        "ode<void*>*>; typename NodeTraits::node_ptr = boost::intrusive::rbtree_node<void*>*]");
    }
  }
  v22 = *(boost::intrusive::rbtree_node<void*> **)(v3 + 96);
  if ( *(_BYTE *)(((info + 8) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(info + 8) = v22;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1645: range 000000000C78286E-000000000C782B76
void __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before_check(
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr pos,
        unsigned __int64 commit_data,
        unsigned __int64 pdepth)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  char v10; // al
  boost::intrusive::rbtree_node<void*> *v11; // rax
  std::size_t v12; // rdx
  bool link_left; // [rsp+27h] [rbp-99h]
  __int64 v16; // [rsp+28h] [rbp-98h] BYREF
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr prev; // [rsp+30h] [rbp-90h]
  __int64 *v18; // [rsp+38h] [rbp-88h]
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 11 header:1646 64 8 8 pos:1646";
  *(_QWORD *)(v4 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before_check;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(_QWORD *)(v4 + 32) = header;
  *(_QWORD *)(v4 + 64) = pos;
  prev = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v4 + 64);
  v7 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7 + 8, pos);
  if ( *(_QWORD *)(v7 + 8) != *(_QWORD *)(v4 + 64) )
    prev = boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void *,false>>::prev_node((const boost::intrusive::bstree_algorithms_base<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v4 + 64));
  v16 = *(_QWORD *)(v4 + 32);
  v18 = &v16;
  if ( *(_BYTE *)(((unsigned __int64)&v16 >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v16, pos);
  v8 = (_QWORD *)*v18;
  if ( *(_BYTE *)(((unsigned __int64)*v18 >> 3) + 0x7FFF8000) )
    v8 = (_QWORD *)__asan_report_load8(*v18, pos);
  if ( !*v8 )
    goto LABEL_16;
  v9 = *(_QWORD *)(v4 + 64);
  if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(v9 + 8, pos);
  if ( *(_QWORD *)(v9 + 8) )
    v10 = 0;
  else
LABEL_16:
    v10 = 1;
  link_left = v10;
  if ( *(char *)((commit_data >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(commit_data);
  *(_BYTE *)commit_data = link_left;
  if ( link_left )
    v11 = *(boost::intrusive::rbtree_node<void*> **)(v4 + 64);
  else
    v11 = prev;
  if ( *(_BYTE *)(((commit_data + 8) >> 3) + 0x7FFF8000) )
    v11 = (boost::intrusive::rbtree_node<void*> *)__asan_report_store8();
  *(_QWORD *)(commit_data + 8) = v11;
  if ( pdepth )
  {
    if ( *(_QWORD *)(commit_data + 8) == *(_QWORD *)(v4 + 32) )
      v12 = 0LL;
    else
      v12 = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::depth(*(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::const_node_ptr *)(commit_data + 8))
          + 1;
    if ( *(_BYTE *)((pdepth >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)pdepth = v12;
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1761: range 000000000C782B77-000000000C7830BD
void __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_commit(
        __int64 header,
        unsigned __int64 new_node,
        unsigned __int64 commit_data)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v13; // [rsp+18h] [rbp-108h]
  boost::intrusive::rbtree_node<void*> *parent_node; // [rsp+28h] [rbp-F8h]
  __int64 v15; // [rsp+30h] [rbp-F0h]
  __int64 v16; // [rsp+40h] [rbp-E0h]
  unsigned __int64 *v17; // [rsp+50h] [rbp-D0h]
  __int64 v18; // [rsp+70h] [rbp-B0h]
  __int64 v19; // [rsp+90h] [rbp-90h]
  char v20[80]; // [rsp+D0h] [rbp-50h] BYREF

  v13 = header;
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    header = 64LL;
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = v3 + 64;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 11 header:1762";
  *(_QWORD *)(v3 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_commit;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = v13;
  v7 = *(unsigned __int8 *)(((commit_data + 8) >> 3) + 0x7FFF8000);
  if ( (_BYTE)v7 )
  {
    header = commit_data + 8;
    v5 = __asan_report_load8(commit_data + 8, v7);
  }
  if ( !*(_QWORD *)(commit_data + 8) )
  {
    __asan_handle_no_return(header);
    __assert_fail(
      "commit_data.node != node_ptr()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/bstree_algorithms.hpp",
      0x6E5u,
      "static void boost::intrusive::bstree_algorithms<NodeTraits>::insert_commit(boost::intrusive::bstree_algorithms<Nod"
      "eTraits>::node_ptr, boost::intrusive::bstree_algorithms<NodeTraits>::node_ptr, const insert_commit_data&) [with No"
      "deTraits = boost::intrusive::rbtree_node_traits<void*, false>; boost::intrusive::bstree_algorithms<NodeTraits>::no"
      "de_ptr = boost::intrusive::rbtree_node<void*>*; boost::intrusive::bstree_algorithms<NodeTraits>::insert_commit_dat"
      "a = boost::intrusive::insert_commit_data_t<boost::intrusive::rbtree_node<void*>*>; typename NodeTraits::node_ptr ="
      " boost::intrusive::rbtree_node<void*>*]");
  }
  v8 = *(unsigned __int8 *)(((commit_data + 8) >> 3) + 0x7FFF8000);
  if ( (_BYTE)v8 )
    v5 = __asan_report_load8(commit_data + 8, v8);
  parent_node = *(boost::intrusive::rbtree_node<void*> **)(commit_data + 8);
  if ( parent_node == *(boost::intrusive::rbtree_node<void*> **)(v5 - 32) )
  {
    v17 = *(unsigned __int64 **)(v5 - 32);
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store8();
    *v17 = new_node;
    v16 = *(_QWORD *)(v5 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v16 + 16) >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store8();
    *(_QWORD *)(v16 + 16) = new_node;
    v15 = *(_QWORD *)(v5 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v15 + 8) = new_node;
  }
  else
  {
    if ( *(char *)((commit_data >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(commit_data);
    if ( *(_BYTE *)commit_data )
    {
      if ( *(_BYTE *)(((unsigned __int64)&parent_node->left_ >> 3) + 0x7FFF8000) )
        v5 = __asan_report_store8();
      parent_node->left_ = (boost::intrusive::rbtree_node<void*>::node_ptr)new_node;
      v9 = *(_QWORD *)(v5 - 32);
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v9 + 8, v9 + 8);
      if ( parent_node == *(boost::intrusive::rbtree_node<void*> **)(v9 + 8) )
      {
        v18 = *(_QWORD *)(v5 - 32);
        if ( *(_BYTE *)(((unsigned __int64)(v18 + 8) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(v18 + 8) = new_node;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&parent_node->right_ >> 3) + 0x7FFF8000) )
        v5 = __asan_report_store8();
      parent_node->right_ = (boost::intrusive::rbtree_node<void*>::node_ptr)new_node;
      v10 = *(_QWORD *)(v5 - 32);
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 16) >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v10 + 16, v10 + 16);
      if ( parent_node == *(boost::intrusive::rbtree_node<void*> **)(v10 + 16) )
      {
        v19 = *(_QWORD *)(v5 - 32);
        if ( *(_BYTE *)(((unsigned __int64)(v19 + 16) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(v19 + 16) = new_node;
      }
    }
  }
  if ( *(_BYTE *)((new_node >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)new_node = parent_node;
  if ( *(_BYTE *)(((new_node + 16) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(new_node + 16) = 0LL;
  if ( *(_BYTE *)(((new_node + 8) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(new_node + 8) = 0LL;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)(v6 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)(v6 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1788: range 000000000C7837FC-000000000C7838EC
void __cdecl boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::set_child(
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr new_child,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr new_parent,
        const bool link_left)
{
  if ( new_parent == header )
  {
    if ( *(_BYTE *)(((unsigned __int64)header >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    header->parent_ = new_child;
  }
  else if ( link_left )
  {
    if ( *(_BYTE *)(((unsigned __int64)&new_parent->left_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    new_parent->left_ = new_child;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&new_parent->right_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    new_parent->right_ = new_child;
  }
};

// Line 1799: range 000000000C7830BE-000000000C7832D8
void __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_left_no_parent_fix(
        unsigned __int64 p,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_right)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_right_left; // [rsp+18h] [rbp-98h]
  boost::intrusive::rbtree_node<void*> *v8; // [rsp+48h] [rbp-68h]
  __int64 v9; // [rsp+50h] [rbp-60h]
  char v10[80]; // [rsp+60h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 p_right:1799";
  *(_QWORD *)(v2 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_left_no_parent_fix;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = p_right;
  v6 = *(_QWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v6 + 8, v6 + 8);
  p_right_left = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v6 + 8);
  if ( *(_BYTE *)(((p + 16) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)(p + 16) = p_right_left;
  if ( p_right_left )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_right_left >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store8();
    p_right_left->parent_ = (boost::intrusive::rbtree_node<void*>::node_ptr)p;
  }
  v9 = *((_QWORD *)v4 - 4);
  if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)(v9 + 8) = p;
  v8 = (boost::intrusive::rbtree_node<void*> *)*((_QWORD *)v4 - 4);
  if ( *(_BYTE *)((p >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)p = v8;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1811: range 000000000C783678-000000000C7837FB
void __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_left(
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_right,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_parent,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  bool p_was_left; // [rsp+2Fh] [rbp-71h]
  boost::intrusive::rbtree_node<void*> *v11; // [rsp+38h] [rbp-68h]
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 13 p_parent:1811";
  *(_QWORD *)(v4 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_left;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = p_parent;
  v7 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7 + 8, p_right);
  p_was_left = p == *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v7 + 8);
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_left_no_parent_fix(
    (unsigned __int64)p,
    p_right);
  v11 = *(boost::intrusive::rbtree_node<void*> **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)p_right >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  p_right->parent_ = v11;
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::set_child(
    header,
    p_right,
    *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v4 + 32),
    p_was_left);
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1820: range 000000000C78345D-000000000C783677
void __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_right_no_parent_fix(
        unsigned __int64 p,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_left)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_left_right; // [rsp+18h] [rbp-98h]
  boost::intrusive::rbtree_node<void*> *v8; // [rsp+48h] [rbp-68h]
  __int64 v9; // [rsp+50h] [rbp-60h]
  char v10[80]; // [rsp+60h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 p_left:1820";
  *(_QWORD *)(v2 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_right_no_parent_fix;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = p_left;
  v6 = *(_QWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 16) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v6 + 16, v6 + 16);
  p_left_right = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v6 + 16);
  if ( *(_BYTE *)(((p + 8) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)(p + 8) = p_left_right;
  if ( p_left_right )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_left_right >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store8();
    p_left_right->parent_ = (boost::intrusive::rbtree_node<void*>::node_ptr)p;
  }
  v9 = *((_QWORD *)v4 - 4);
  if ( *(_BYTE *)(((unsigned __int64)(v9 + 16) >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)(v9 + 16) = p;
  v8 = (boost::intrusive::rbtree_node<void*> *)*((_QWORD *)v4 - 4);
  if ( *(_BYTE *)((p >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)p = v8;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1832: range 000000000C7832D9-000000000C78345C
void __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_right(
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_left,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr p_parent,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr header)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  bool p_was_left; // [rsp+2Fh] [rbp-71h]
  boost::intrusive::rbtree_node<void*> *v11; // [rsp+38h] [rbp-68h]
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 13 p_parent:1832";
  *(_QWORD *)(v4 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_right;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = p_parent;
  v7 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7 + 8, p_left);
  p_was_left = p == *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v7 + 8);
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rotate_right_no_parent_fix(
    (unsigned __int64)p,
    p_left);
  v11 = *(boost::intrusive::rbtree_node<void*> **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)p_left >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  p_left->parent_ = v11;
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::set_child(
    header,
    p_left,
    *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v4 + 32),
    p_was_left);
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2024: range 000000000C77874C-000000000C778A65
boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::lower_bound_loop<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>(
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr x,
        const boost::beast::http::basic_fields<std::allocator<char> >::value_type *y,
        boost::beast::http::basic_fields<std::allocator<char> >::key_compare *key,
        boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *p_comp)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr result; // rax
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr ya; // [rsp+10h] [rbp-120h]
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr v13; // [rsp+18h] [rbp-118h]
  char v14; // [rsp+27h] [rbp-109h] BYREF
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v15; // [rsp+28h] [rbp-108h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v16; // [rsp+30h] [rbp-100h]
  boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v17; // [rsp+38h] [rbp-F8h]
  __int64 v18; // [rsp+40h] [rbp-F0h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v19; // [rsp+48h] [rbp-E8h]
  char *v20; // [rsp+50h] [rbp-E0h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v21; // [rsp+58h] [rbp-D8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v22; // [rsp+60h] [rbp-D0h]
  char *v23; // [rsp+68h] [rbp-C8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v24; // [rsp+70h] [rbp-C0h]
  boost::intrusive::rbtree_node<void*> *v25; // [rsp+78h] [rbp-B8h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *p_right; // [rsp+80h] [rbp-B0h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v27; // [rsp+88h] [rbp-A8h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v28; // [rsp+90h] [rbp-A0h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v29; // [rsp+98h] [rbp-98h]
  __int64 v30; // [rsp+A0h] [rbp-90h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v31; // [rsp+A8h] [rbp-88h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v32; // [rsp+B0h] [rbp-80h]
  boost::beast::http::basic_fields<std::allocator<char> >::key_compare *v33; // [rsp+B8h] [rbp-78h]
  __int64 v34; // [rsp+C0h] [rbp-70h]
  char *v35; // [rsp+C8h] [rbp-68h]
  char v36[96]; // [rsp+D0h] [rbp-60h] BYREF

  v13 = x;
  ya = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)y;
  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    x = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)64;
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 6 x:2025";
  *(_QWORD *)(v4 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::lower_bound_loop<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = v13;
  while ( *(_QWORD *)(v4 + 32) )
  {
    v16 = p_comp;
    v17 = key;
    v18 = 0LL;
    v19 = p_comp;
    v20 = &v14;
    v21 = p_comp;
    v22 = p_comp;
    v23 = &v14;
    v24 = p_comp;
    v25 = (boost::intrusive::rbtree_node<void*> *)(v4 + 32);
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    {
      x = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)(v4 + 32);
      __asan_report_load8(v4 + 32, y);
    }
    p_right = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&v25->parent_[-1].right_;
    v27 = p_right;
    v28 = p_right;
    v15 = p_right;
    v29 = p_right;
    v30 = 0LL;
    v31 = p_right;
    if ( !p_right )
    {
      __asan_handle_no_return(x);
      __assert_fail(
        off_19EF58C0,
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
        0x3Eu,
        "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePt"
        "r, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::"
        "element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3"
        "; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::alloca"
        "tor<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtr"
        "ee_node<void*>*]");
    }
    v32 = v31;
    v33 = v17;
    v34 = 0LL;
    v35 = &v14;
    x = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)&v14;
    y = v31 + 8;
    if ( *(_WORD *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      x = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)v17;
      __asan_report_load16();
    }
    if ( boost::beast::http::basic_fields<std::allocator<char>>::key_compare::operator()(
           (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *const)x,
           y,
           *(boost::beast::string_view *)v33->gap0) )
    {
      v7 = *(_QWORD *)(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 16) >> 3) + 0x7FFF8000) )
      {
        x = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)(v7 + 16);
        v7 = __asan_report_load8(v7 + 16, y);
      }
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(v7 + 16);
    }
    else
    {
      ya = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v4 + 32);
      v8 = (__int64)ya;
      if ( *(_BYTE *)(((unsigned __int64)&ya->left_ >> 3) + 0x7FFF8000) )
      {
        x = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)&ya->left_;
        v8 = __asan_report_load8(&ya->left_, y);
      }
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(v8 + 8);
    }
  }
  result = ya;
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2040: range 000000000C788F6D-000000000C789286
boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::upper_bound_loop<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>(
        __int64 x,
        boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr y,
        const boost::basic_string_view<char,std::char_traits<char> > *key,
        boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *p_comp)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr result; // rax
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr ya; // [rsp+10h] [rbp-120h]
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr v14; // [rsp+18h] [rbp-118h]
  char v15; // [rsp+27h] [rbp-109h] BYREF
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v16; // [rsp+28h] [rbp-108h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v17; // [rsp+30h] [rbp-100h]
  unsigned __int64 v18; // [rsp+38h] [rbp-F8h]
  __int64 v19; // [rsp+40h] [rbp-F0h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v20; // [rsp+48h] [rbp-E8h]
  char *v21; // [rsp+50h] [rbp-E0h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v22; // [rsp+58h] [rbp-D8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v23; // [rsp+60h] [rbp-D0h]
  char *v24; // [rsp+68h] [rbp-C8h]
  boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char> >::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char> >::element> > *v25; // [rsp+70h] [rbp-C0h]
  boost::intrusive::rbtree_node<void*> *v26; // [rsp+78h] [rbp-B8h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *p_right; // [rsp+80h] [rbp-B0h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v28; // [rsp+88h] [rbp-A8h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v29; // [rsp+90h] [rbp-A0h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v30; // [rsp+98h] [rbp-98h]
  __int64 v31; // [rsp+A0h] [rbp-90h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v32; // [rsp+A8h] [rbp-88h]
  boost::beast::string_view *v33; // [rsp+B0h] [rbp-80h]
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *v34; // [rsp+B8h] [rbp-78h]
  __int64 v35; // [rsp+C0h] [rbp-70h]
  char *v36; // [rsp+C8h] [rbp-68h]
  char v37[96]; // [rsp+D0h] [rbp-60h] BYREF

  v14 = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)x;
  ya = y;
  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    x = 64LL;
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 6 x:2041";
  *(_QWORD *)(v4 + 16) = boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::upper_bound_loop<boost::basic_string_view<char,std::char_traits<char>>,boost::intrusive::detail::key_nodeptr_comp<boost::beast::http::basic_fields<std::allocator<char>>::key_compare,boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char>>::element,boost::intrusive::rbtree_node_traits<void *,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3u>,boost::move_detail::identity<boost::beast::http::basic_fields<std::allocator<char>>::element>>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = v14;
  while ( *(_QWORD *)(v4 + 32) )
  {
    v17 = p_comp;
    v18 = (unsigned __int64)key;
    v19 = 0LL;
    v20 = p_comp;
    v21 = &v15;
    v22 = p_comp;
    v23 = p_comp;
    v24 = &v15;
    v25 = p_comp;
    v26 = (boost::intrusive::rbtree_node<void*> *)(v4 + 32);
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    {
      x = v4 + 32;
      __asan_report_load8(v4 + 32, y);
    }
    p_right = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&v26->parent_[-1].right_;
    v28 = p_right;
    v29 = p_right;
    v16 = p_right;
    v30 = p_right;
    v31 = 0LL;
    v32 = p_right;
    if ( !p_right )
    {
      __asan_handle_no_return(x);
      __assert_fail(
        off_19EF58C0,
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
        0x3Eu,
        "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePt"
        "r, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::"
        "element; NodePtr = boost::intrusive::rbtree_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 3"
        "; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::alloca"
        "tor<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::rbtr"
        "ee_node<void*>*]");
    }
    v33 = (boost::beast::string_view *)v18;
    v34 = v32;
    v35 = 0LL;
    v36 = &v15;
    x = (__int64)&v15;
    v7 = v32 + 8;
    if ( *(_WORD *)((v18 >> 3) + 0x7FFF8000) )
    {
      x = v18;
      __asan_report_load16();
    }
    y = (boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr)v33->ptr_;
    if ( boost::beast::http::basic_fields<std::allocator<char>>::key_compare::operator()(
           (const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *const)x,
           *v33,
           v7) )
    {
      ya = *(boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)(v4 + 32);
      v8 = (__int64)ya;
      if ( *(_BYTE *)(((unsigned __int64)&ya->left_ >> 3) + 0x7FFF8000) )
      {
        x = (__int64)&ya->left_;
        v8 = __asan_report_load8(&ya->left_, y);
      }
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v9 = *(_QWORD *)(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 16) >> 3) + 0x7FFF8000) )
      {
        x = v9 + 16;
        v9 = __asan_report_load8(v9 + 16, y);
      }
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(v9 + 16);
    }
  }
  result = ya;
  if ( v37 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
