// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container/detail/copy_move_algo.hpp

// Line 296: range 000000000BFA18A3-000000000BFA1AAD
boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type __fastcall boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>(
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *a,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *f,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *l,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *r)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v7; // rax
  boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type result; // rax
  char v9; // [rsp+Fh] [rbp-121h]
  boost::movelib::detail::iterator_to_element_ptr<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type v13; // [rsp+48h] [rbp-E8h]
  char v14[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 9 <unknown> 48 1 4 flag 64 8 8 back:298 96 8 5 r:296";
  *(_QWORD *)(v4 + 16) = boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_QWORD *)(v4 + 96) = r;
  *(_QWORD *)(v4 + 64) = *(_QWORD *)(v4 + 96);
  while ( f != l )
  {
    v13 = boost::movelib::iterator_to_raw_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *>((boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const *)(v4 + 96));
    *(_BYTE *)(v4 + 32) = v9;
    v7 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *)operator new(
                                                                                            0x18uLL,
                                                                                            v13,
                                                                                            (boost_container_new_t)v13);
    boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::pair(v7, f++);
    *(_QWORD *)(v4 + 96) += 24LL;
  }
  result = *(boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type *)(v4 + 96);
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 296: range 000000000BFA53DD-000000000BFA55E7
boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type __fastcall boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>(
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *a,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *f,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *l,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *r)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v7; // rax
  boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type result; // rax
  char v9; // [rsp+Fh] [rbp-121h]
  boost::movelib::detail::iterator_to_element_ptr<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type v13; // [rsp+48h] [rbp-E8h]
  char v14[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 9 <unknown> 48 1 4 flag 64 8 8 back:298 96 8 5 r:296";
  *(_QWORD *)(v4 + 16) = boost::container::uninitialized_move_alloc<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_QWORD *)(v4 + 96) = r;
  *(_QWORD *)(v4 + 64) = *(_QWORD *)(v4 + 96);
  while ( f != l )
  {
    v13 = boost::movelib::iterator_to_raw_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *>((boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const *)(v4 + 96));
    *(_BYTE *)(v4 + 32) = v9;
    v7 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *)operator new(
                                                                                      0x18uLL,
                                                                                      v13,
                                                                                      (boost_container_new_t)v13);
    boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::pair(v7, f++);
    *(_QWORD *)(v4 + 96) += 24LL;
  }
  result = *(boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type *)(v4 + 96);
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 824: range 000000000BF836E1-000000000BF8372B
boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type __cdecl boost::container::move<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *>(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *f,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *l,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *r)
{
  while ( f != l )
    boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::operator=(r++, f++);
  return r;
};

// Line 824: range 000000000BF8737B-000000000BF873C5
boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type __cdecl boost::container::move<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *>(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *f,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *l,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *r)
{
  while ( f != l )
    boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::operator=(r++, f++);
  return r;
};

// Line 879: range 000000000BFA1AAE-000000000BFA1AF8
boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type __cdecl boost::container::move_backward<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *>(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *f,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *l,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *r)
{
  while ( f != l )
    boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::operator=(--r, --l);
  return r;
};

// Line 879: range 000000000BFA55E8-000000000BFA5632
boost::move_detail::enable_if_c<true,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type __cdecl boost::container::move_backward<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *>(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *f,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *l,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *r)
{
  while ( f != l )
    boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::operator=(--r, --l);
  return r;
};

// Line 968: range 000000000BF4BCCB-000000000BF4BE44
void __fastcall boost::container::destroy_alloc_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*,unsigned long>(
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *a,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *f,
        unsigned __int64 n)
{
  char v3; // r15
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v8; // [rsp+38h] [rbp-A8h]
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 4 flag 64 8 5 f:968";
  *(_QWORD *)(v4 + 16) = boost::container::destroy_alloc_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*,unsigned long>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202116352;
  *(_QWORD *)(v4 + 64) = f;
  while ( n )
  {
    --n;
    v8 = boost::movelib::iterator_to_raw_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *>((boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const *)(v4 + 64));
    *(_BYTE *)(v4 + 48) = v3;
    boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::~pair(v8);
    *(_QWORD *)(v4 + 64) += 24LL;
  }
  if ( v9 == (char *)v4 )
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

// Line 968: range 000000000BF4B817-000000000BF4B990
void __fastcall boost::container::destroy_alloc_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*,unsigned long>(
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *a,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *f,
        unsigned __int64 n)
{
  char v3; // r15
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v8; // [rsp+38h] [rbp-A8h]
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 4 flag 64 8 5 f:968";
  *(_QWORD *)(v4 + 16) = boost::container::destroy_alloc_n<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*,unsigned long>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202116352;
  *(_QWORD *)(v4 + 64) = f;
  while ( n )
  {
    --n;
    v8 = boost::movelib::iterator_to_raw_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *>((boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const *)(v4 + 64));
    *(_BYTE *)(v4 + 48) = v3;
    boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::~pair(v8);
    *(_QWORD *)(v4 + 64) += 24LL;
  }
  if ( v9 == (char *)v4 )
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
