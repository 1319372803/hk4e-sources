// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container/detail/advanced_insert_int.hpp

// Line 198: range 000000000BF9BD26-000000000BF9BD64
void __cdecl boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>::insert_move_proxy(
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *const this,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::value_type *v)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->v_ = v;
};

// Line 198: range 000000000BF9E68C-000000000BF9E6CA
void __cdecl boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>::insert_move_proxy(
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *const this,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::value_type *v)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->v_ = v;
};

// Line 202: range 000000000BFA1690-000000000BFA18A2
void __fastcall boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>::uninitialized_copy_n_and_update(
        const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *const this,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *a,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *p,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::size_type n)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v; // r14
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v8; // rax
  char v9; // [rsp+Fh] [rbp-101h]
  const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *thisa; // [rsp+28h] [rbp-E8h]
  boost::movelib::detail::iterator_to_element_ptr<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::type v13; // [rsp+40h] [rbp-D0h]
  char v14[144]; // [rsp+80h] [rbp-90h] BYREF

  thisa = this;
  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *const)96;
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 1 9 <unknown> 48 1 4 flag 64 8 5 p:202";
  *(_QWORD *)(v4 + 16) = boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>::uninitialized_copy_n_and_update;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -202116352;
  *(_QWORD *)(v4 + 64) = p;
  if ( n != 1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "n == 1",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/"
      "detail/advanced_insert_int.hpp",
      0xCCu,
      "void boost::container::dtl::insert_move_proxy<Allocator, Iterator>::uninitialized_copy_n_and_update(Allocator&, It"
      "erator, boost::container::dtl::insert_move_proxy<Allocator, Iterator>::size_type) const [with Allocator = boost::c"
      "ontainer::new_allocator<boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> > >; Iterator"
      " = boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> >*; boost::container::dtl::insert_"
      "move_proxy<Allocator, Iterator>::size_type = long unsigned int]");
  }
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa);
  v = thisa->v_;
  v13 = boost::movelib::iterator_to_raw_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *>((boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const *)(v4 + 64));
  *(_BYTE *)(v4 + 32) = v9;
  v8 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *)operator new(
                                                                                          0x18uLL,
                                                                                          v13,
                                                                                          (boost_container_new_t)v13);
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::pair(v8, v);
  if ( v14 == (char *)v4 )
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

// Line 202: range 000000000BFA51CA-000000000BFA53DC
void __fastcall boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>::uninitialized_copy_n_and_update(
        const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *const this,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *a,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *p,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::size_type n)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v; // r14
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v8; // rax
  char v9; // [rsp+Fh] [rbp-101h]
  const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *thisa; // [rsp+28h] [rbp-E8h]
  boost::movelib::detail::iterator_to_element_ptr<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::type v13; // [rsp+40h] [rbp-D0h]
  char v14[144]; // [rsp+80h] [rbp-90h] BYREF

  thisa = this;
  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *const)96;
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 1 9 <unknown> 48 1 4 flag 64 8 5 p:202";
  *(_QWORD *)(v4 + 16) = boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>::uninitialized_copy_n_and_update;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -202116352;
  *(_QWORD *)(v4 + 64) = p;
  if ( n != 1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "n == 1",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/"
      "detail/advanced_insert_int.hpp",
      0xCCu,
      "void boost::container::dtl::insert_move_proxy<Allocator, Iterator>::uninitialized_copy_n_and_update(Allocator&, It"
      "erator, boost::container::dtl::insert_move_proxy<Allocator, Iterator>::size_type) const [with Allocator = boost::c"
      "ontainer::new_allocator<boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> > >; Iterator = boo"
      "st::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> >*; boost::container::dtl::insert_move_proxy<A"
      "llocator, Iterator>::size_type = long unsigned int]");
  }
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa);
  v = thisa->v_;
  v13 = boost::movelib::iterator_to_raw_pointer<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *>((boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const *)(v4 + 64));
  *(_BYTE *)(v4 + 32) = v9;
  v8 = (boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *)operator new(
                                                                                    0x18uLL,
                                                                                    v13,
                                                                                    (boost_container_new_t)v13);
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::pair(v8, v);
  if ( v14 == (char *)v4 )
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

// Line 208: range 000000000BFA1AFA-000000000BFA1B7E
void __cdecl boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>::copy_n_and_update(
        const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> *const this,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > > *a2,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *p,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::size_type n)
{
  if ( n != 1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "n == 1",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/"
      "detail/advanced_insert_int.hpp",
      0xD2u,
      "void boost::container::dtl::insert_move_proxy<Allocator, Iterator>::copy_n_and_update(Allocator&, Iterator, boost:"
      ":container::dtl::insert_move_proxy<Allocator, Iterator>::size_type) const [with Allocator = boost::container::new_"
      "allocator<boost::container::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> > >; Iterator = boost::cont"
      "ainer::dtl::pair<unsigned int, std::shared_ptr<GateserverSession> >*; boost::container::dtl::insert_move_proxy<All"
      "ocator, Iterator>::size_type = long unsigned int]");
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::operator=(p, this->v_);
};

// Line 208: range 000000000BFA5634-000000000BFA56B8
void __cdecl boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>::copy_n_and_update(
        const boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> *const this,
        boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > > *a2,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *p,
        boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::size_type n)
{
  if ( n != 1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "n == 1",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/container/"
      "detail/advanced_insert_int.hpp",
      0xD2u,
      "void boost::container::dtl::insert_move_proxy<Allocator, Iterator>::copy_n_and_update(Allocator&, Iterator, boost:"
      ":container::dtl::insert_move_proxy<Allocator, Iterator>::size_type) const [with Allocator = boost::container::new_"
      "allocator<boost::container::dtl::pair<unsigned int, std::shared_ptr<HttpSession> > >; Iterator = boost::container:"
      ":dtl::pair<unsigned int, std::shared_ptr<HttpSession> >*; boost::container::dtl::insert_move_proxy<Allocator, Iter"
      "ator>::size_type = long unsigned int]");
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::operator=(p, this->v_);
};

// Line 218: range 000000000BF96F37-000000000BF96F5B
boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> __cdecl boost::container::dtl::get_insert_value_proxy<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>> *,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>>(
        boost::movelib::iterator_traits<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*>::value_type *v)
{
  boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> >*> v2; // [rsp+18h] [rbp-8h] BYREF

  boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>*>::insert_move_proxy(
    &v2,
    v);
  return v2;
};

// Line 218: range 000000000BF99A77-000000000BF99A9B
boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> __cdecl boost::container::dtl::get_insert_value_proxy<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>> *,boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>>(
        boost::movelib::iterator_traits<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*>::value_type *v)
{
  boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > >,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> >*> v2; // [rsp+18h] [rbp-8h] BYREF

  boost::container::dtl::insert_move_proxy<boost::container::new_allocator<boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>>,boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>*>::insert_move_proxy(
    &v2,
    v);
  return v2;
};
