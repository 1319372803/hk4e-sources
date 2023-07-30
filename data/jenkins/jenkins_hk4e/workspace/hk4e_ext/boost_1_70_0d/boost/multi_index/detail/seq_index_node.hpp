// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/multi_index/detail/seq_index_node.hpp

// Line 40: range 0000000000723832-000000000072383F
boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> >::pointer *__cdecl boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(
        boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *const this)
{
  return &this->prior_;
};

// Line 42: range 000000000068B3C6-000000000068B3D7
boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> >::pointer *__cdecl boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(
        boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *const this)
{
  return &this->next_;
};

// Line 47: range 0000000000723419-00000000007234A2
void __cdecl boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::increment(
        boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> >::pointer *x)
{
  unsigned __int64 v1; // rax
  boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_load8(x);
  v1 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(*x);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > **)v1;
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *x = v2;
};

// Line 52: range 00000000008DBC1C-00000000008DBD80
void __cdecl boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::link(
        boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> >::pointer x,
        boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> >::pointer header)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax

  v2 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(header);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2);
  v3 = *(_QWORD *)v2;
  v4 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(x);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)v4 = v3;
  v5 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(x);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = header;
  v6 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(x);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6);
  v7 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(*(boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *const *)v6);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  *(_QWORD *)v7 = x;
  v8 = *(_QWORD *)v7;
  v9 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(x);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(v9);
  v10 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(*(boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *const *)v9);
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_store8();
  *(_QWORD *)v10 = v8;
};

// Line 59: range 0000000000781682-00000000007817A8
void __cdecl boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::unlink(
        boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> >::pointer x)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v1 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(x);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1;
  v3 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(x);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(v3);
  v4 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(*(boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *const *)v3);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)v4 = v2;
  v5 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(x);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v5);
  v6 = *(_QWORD *)v5;
  v7 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(x);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  v8 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(*(boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *const *)v7);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_store8();
  *(_QWORD *)v8 = v6;
};

// Line 65: range 0000000000723DA7-0000000000723F17
void __cdecl boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::relink(
        boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> >::pointer position,
        boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> >::pointer x)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax

  boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::unlink(x);
  v2 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(position);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2);
  v3 = *(_QWORD *)v2;
  v4 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(x);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)v4 = v3;
  v5 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(x);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = position;
  v6 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(x);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6);
  v7 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(*(boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *const *)v6);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  *(_QWORD *)v7 = x;
  v8 = *(_QWORD *)v7;
  v9 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(x);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(v9);
  v10 = (unsigned __int64)boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(*(boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *const *)v9);
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_store8();
  *(_QWORD *)v10 = v8;
};

// Line 161: range 0000000000682CD0-0000000000682CED
boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > >::impl_pointer *__cdecl boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>::prior(
        boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *const this)
{
  return boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::prior(&this->boost::multi_index::detail::sequenced_index_node_trampoline<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > >);
};

// Line 163: range 00000000005FD9D0-00000000005FD9ED
boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > >::impl_pointer *__cdecl boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>::next(
        boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *const this)
{
  return boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::next(&this->boost::multi_index::detail::sequenced_index_node_trampoline<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > >);
};

// Line 166: range 0000000000682CBE-0000000000682CCF
boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > >::impl_pointer __cdecl boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>::impl(
        boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *const this)
{
  return &this->boost::multi_index::detail::sequenced_index_node_trampoline<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > >;
};

// Line 178: range 00000000005FD9EE-00000000005FDABE
boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *__fastcall boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>::from_impl(
        boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > >::impl_pointer x)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *v4; // rax
  boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 x:178";
  *(_QWORD *)(v1 + 16) = boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>::from_impl;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = x;
  v4 = boost::multi_index::detail::raw_ptr<boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>> *,boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>> *>((boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> > *const *)(v1 + 32));
  if ( v4 )
    result = v4 - 6;
  else
    result = 0LL;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 196: range 00000000006829DA-0000000000682B05
void __cdecl boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>::increment(
        boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > **x)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *v4; // rdx
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 6 xi:198";
  *(_QWORD *)(v1 + 16) = boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>::increment;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_load8(x);
  *(_QWORD *)(v1 + 32) = boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>::impl(*x);
  boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char>>::increment((boost::multi_index::detail::sequenced_index_node_impl<std::allocator<char> >::pointer *)(v1 + 32));
  v4 = (boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > > *)boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,std::allocator<std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>>>>>::from_impl(*(boost::multi_index::detail::sequenced_index_node<boost::multi_index::detail::ordered_index_node<boost::multi_index::detail::null_augment_policy,boost::multi_index::detail::index_node_base<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,std::allocator<std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > > > > > >::impl_pointer *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *x = v4;
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
