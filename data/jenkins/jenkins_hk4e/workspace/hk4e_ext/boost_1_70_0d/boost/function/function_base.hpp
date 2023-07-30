// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/function/function_base.hpp

// Line 283: range 000000000BF9F99F-000000000BF9FC61
void __cdecl boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::manage_small(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op)
{
  unsigned __int64 n; // rax
  const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >::functor_type *v4; // rdx
  __int64 v5; // rbx
  boost::detail::function::function_buffer *v6; // rdx
  void *v7; // rax
  char *v8; // rax
  __int64 v9; // rsi
  boost::typeindex::type_index_facade<boost::typeindex::stl_type_index,std::type_info> rhs[8]; // [rsp+20h] [rbp-30h] BYREF
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >::functor_type *f_0; // [rsp+28h] [rbp-28h]
  const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >::functor_type *in_functor; // [rsp+30h] [rbp-20h]
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >::functor_type *f; // [rsp+38h] [rbp-18h]

  if ( (unsigned int)op > move_functor_tag )
  {
    if ( op == destroy_functor_tag )
    {
      f_0 = (boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >::functor_type *)out_buffer;
    }
    else if ( op == check_functor_type_tag )
    {
      *(boost::typeindex::type_index *)rhs[0].gap0 = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>();
      if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( boost::typeindex::operator==<boost::typeindex::stl_type_index,std::type_info>(
             out_buffer->members.type.type,
             rhs) )
      {
        v6 = (boost::detail::function::function_buffer *)in_buffer;
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        out_buffer->members.obj_ptr = v6;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        out_buffer->members.obj_ptr = 0LL;
      }
    }
    else
    {
      *(boost::typeindex::type_index *)rhs[0].gap0 = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>();
      v7 = boost::typeindex::stl_type_index::type_info((const boost::typeindex::stl_type_index *const)rhs);
      if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
        v7 = (void *)__asan_report_store8();
      out_buffer->members.obj_ptr = v7;
      if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&out_buffer->data[8], out_buffer);
      out_buffer->members.type.const_qualified = 0;
      v8 = &out_buffer->members.bound_memfunc_ptr.gap8[1];
      v9 = ((_BYTE)out_buffer + 9) & 7;
      if ( *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) != 0
        && (char)v9 >= *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v8, v9);
      }
      out_buffer->members.type.volatile_qualified = 0;
    }
  }
  else
  {
    in_functor = (const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >::functor_type *)in_buffer;
    n = (unsigned __int64)operator new(0x18uLL, out_buffer);
    if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(n, 24LL);
    }
    if ( *(char *)(((unsigned __int64)in_functor >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)in_functor + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3)
                                                              + 0x7FFF8000) )
    {
      n = __asan_report_load_n(
            in_functor,
            24LL,
            in_functor,
            (*(char *)(((unsigned __int64)in_functor >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
                                                                                            && (((unsigned __int8)in_functor
                                                                                               + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000)));
    }
    v4 = in_functor;
    v5 = *((_QWORD *)&in_functor->f_.f_ + 1);
    *(_QWORD *)n = in_functor->f_.f_;
    *(_QWORD *)(n + 8) = v5;
    *(_QWORD *)(n + 16) = v4->l_.a1_.t_;
    if ( op == move_functor_tag )
      f = (boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >::functor_type *)in_buffer;
  }
};

// Line 283: range 000000000BFA446C-000000000BFA472E
void __cdecl boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::manage_small(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op)
{
  unsigned __int64 n; // rax
  const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >::functor_type *v4; // rdx
  __int64 v5; // rbx
  boost::detail::function::function_buffer *v6; // rdx
  void *v7; // rax
  char *v8; // rax
  __int64 v9; // rsi
  boost::typeindex::type_index_facade<boost::typeindex::stl_type_index,std::type_info> rhs[8]; // [rsp+20h] [rbp-30h] BYREF
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >::functor_type *f_0; // [rsp+28h] [rbp-28h]
  const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >::functor_type *in_functor; // [rsp+30h] [rbp-20h]
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >::functor_type *f; // [rsp+38h] [rbp-18h]

  if ( (unsigned int)op > move_functor_tag )
  {
    if ( op == destroy_functor_tag )
    {
      f_0 = (boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >::functor_type *)out_buffer;
    }
    else if ( op == check_functor_type_tag )
    {
      *(boost::typeindex::type_index *)rhs[0].gap0 = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>();
      if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( boost::typeindex::operator==<boost::typeindex::stl_type_index,std::type_info>(
             out_buffer->members.type.type,
             rhs) )
      {
        v6 = (boost::detail::function::function_buffer *)in_buffer;
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        out_buffer->members.obj_ptr = v6;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        out_buffer->members.obj_ptr = 0LL;
      }
    }
    else
    {
      *(boost::typeindex::type_index *)rhs[0].gap0 = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>();
      v7 = boost::typeindex::stl_type_index::type_info((const boost::typeindex::stl_type_index *const)rhs);
      if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
        v7 = (void *)__asan_report_store8();
      out_buffer->members.obj_ptr = v7;
      if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&out_buffer->data[8], out_buffer);
      out_buffer->members.type.const_qualified = 0;
      v8 = &out_buffer->members.bound_memfunc_ptr.gap8[1];
      v9 = ((_BYTE)out_buffer + 9) & 7;
      if ( *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) != 0
        && (char)v9 >= *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v8, v9);
      }
      out_buffer->members.type.volatile_qualified = 0;
    }
  }
  else
  {
    in_functor = (const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >::functor_type *)in_buffer;
    n = (unsigned __int64)operator new(0x18uLL, out_buffer);
    if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(n, 24LL);
    }
    if ( *(char *)(((unsigned __int64)in_functor >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)in_functor + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3)
                                                              + 0x7FFF8000) )
    {
      n = __asan_report_load_n(
            in_functor,
            24LL,
            in_functor,
            (*(char *)(((unsigned __int64)in_functor >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
                                                                                            && (((unsigned __int8)in_functor
                                                                                               + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000)));
    }
    v4 = in_functor;
    v5 = *((_QWORD *)&in_functor->f_.f_ + 1);
    *(_QWORD *)n = in_functor->f_.f_;
    *(_QWORD *)(n + 8) = v5;
    *(_QWORD *)(n + 16) = v4->l_.a1_.t_;
    if ( op == move_functor_tag )
      f = (boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >::functor_type *)in_buffer;
  }
};

// Line 283: range 000000000BFA1B7F-000000000BFA1E41
void __cdecl boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>::manage_small(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op)
{
  unsigned __int64 n; // rax
  const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *v4; // rdx
  __int64 v5; // rbx
  boost::detail::function::function_buffer *v6; // rdx
  void *v7; // rax
  char *v8; // rax
  __int64 v9; // rsi
  boost::typeindex::type_index_facade<boost::typeindex::stl_type_index,std::type_info> rhs[8]; // [rsp+20h] [rbp-30h] BYREF
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *f_0; // [rsp+28h] [rbp-28h]
  const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *in_functor; // [rsp+30h] [rbp-20h]
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *f; // [rsp+38h] [rbp-18h]

  if ( (unsigned int)op > move_functor_tag )
  {
    if ( op == destroy_functor_tag )
    {
      f_0 = (boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *)out_buffer;
    }
    else if ( op == check_functor_type_tag )
    {
      *(boost::typeindex::type_index *)rhs[0].gap0 = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>();
      if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( boost::typeindex::operator==<boost::typeindex::stl_type_index,std::type_info>(
             out_buffer->members.type.type,
             rhs) )
      {
        v6 = (boost::detail::function::function_buffer *)in_buffer;
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        out_buffer->members.obj_ptr = v6;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        out_buffer->members.obj_ptr = 0LL;
      }
    }
    else
    {
      *(boost::typeindex::type_index *)rhs[0].gap0 = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>();
      v7 = boost::typeindex::stl_type_index::type_info((const boost::typeindex::stl_type_index *const)rhs);
      if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
        v7 = (void *)__asan_report_store8();
      out_buffer->members.obj_ptr = v7;
      if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&out_buffer->data[8], out_buffer);
      out_buffer->members.type.const_qualified = 0;
      v8 = &out_buffer->members.bound_memfunc_ptr.gap8[1];
      v9 = ((_BYTE)out_buffer + 9) & 7;
      if ( *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) != 0
        && (char)v9 >= *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v8, v9);
      }
      out_buffer->members.type.volatile_qualified = 0;
    }
  }
  else
  {
    in_functor = (const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *)in_buffer;
    n = (unsigned __int64)operator new(0x18uLL, out_buffer);
    if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(n, 24LL);
    }
    if ( *(char *)(((unsigned __int64)in_functor >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)in_functor + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3)
                                                              + 0x7FFF8000) )
    {
      n = __asan_report_load_n(
            in_functor,
            24LL,
            in_functor,
            (*(char *)(((unsigned __int64)in_functor >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
                                                                                            && (((unsigned __int8)in_functor
                                                                                               + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000)));
    }
    v4 = in_functor;
    v5 = *((_QWORD *)&in_functor->f_.f_ + 1);
    *(_QWORD *)n = in_functor->f_.f_;
    *(_QWORD *)(n + 8) = v5;
    *(_QWORD *)(n + 16) = v4->l_.a1_.t_;
    if ( op == move_functor_tag )
      f = (boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *)in_buffer;
  }
};

// Line 283: range 000000000BFA56B9-000000000BFA597B
void __cdecl boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>::manage_small(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op)
{
  unsigned __int64 n; // rax
  const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *v4; // rdx
  __int64 v5; // rbx
  boost::detail::function::function_buffer *v6; // rdx
  void *v7; // rax
  char *v8; // rax
  __int64 v9; // rsi
  boost::typeindex::type_index_facade<boost::typeindex::stl_type_index,std::type_info> rhs[8]; // [rsp+20h] [rbp-30h] BYREF
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *f_0; // [rsp+28h] [rbp-28h]
  const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *in_functor; // [rsp+30h] [rbp-20h]
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *f; // [rsp+38h] [rbp-18h]

  if ( (unsigned int)op > move_functor_tag )
  {
    if ( op == destroy_functor_tag )
    {
      f_0 = (boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *)out_buffer;
    }
    else if ( op == check_functor_type_tag )
    {
      *(boost::typeindex::type_index *)rhs[0].gap0 = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>();
      if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( boost::typeindex::operator==<boost::typeindex::stl_type_index,std::type_info>(
             out_buffer->members.type.type,
             rhs) )
      {
        v6 = (boost::detail::function::function_buffer *)in_buffer;
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        out_buffer->members.obj_ptr = v6;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        out_buffer->members.obj_ptr = 0LL;
      }
    }
    else
    {
      *(boost::typeindex::type_index *)rhs[0].gap0 = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>();
      v7 = boost::typeindex::stl_type_index::type_info((const boost::typeindex::stl_type_index *const)rhs);
      if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
        v7 = (void *)__asan_report_store8();
      out_buffer->members.obj_ptr = v7;
      if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&out_buffer->data[8], out_buffer);
      out_buffer->members.type.const_qualified = 0;
      v8 = &out_buffer->members.bound_memfunc_ptr.gap8[1];
      v9 = ((_BYTE)out_buffer + 9) & 7;
      if ( *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) != 0
        && (char)v9 >= *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v8, v9);
      }
      out_buffer->members.type.volatile_qualified = 0;
    }
  }
  else
  {
    in_functor = (const boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *)in_buffer;
    n = (unsigned __int64)operator new(0x18uLL, out_buffer);
    if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(n, 24LL);
    }
    if ( *(char *)(((unsigned __int64)in_functor >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)in_functor + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3)
                                                              + 0x7FFF8000) )
    {
      n = __asan_report_load_n(
            in_functor,
            24LL,
            in_functor,
            (*(char *)(((unsigned __int64)in_functor >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
                                                                                            && (((unsigned __int8)in_functor
                                                                                               + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&in_functor->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000)));
    }
    v4 = in_functor;
    v5 = *((_QWORD *)&in_functor->f_.f_ + 1);
    *(_QWORD *)n = in_functor->f_.f_;
    *(_QWORD *)(n + 8) = v5;
    *(_QWORD *)(n + 16) = v4->l_.a1_.t_;
    if ( op == move_functor_tag )
      f = (boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > >::functor_type *)in_buffer;
  }
};

// Line 330: range 000000000BF9A58E-000000000BF9A5B9
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::manager(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op,
        boost::true_type a4)
{
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::manage_small(
    in_buffer,
    out_buffer,
    op);
};

// Line 330: range 000000000BF9E396-000000000BF9E3C1
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::manager(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op,
        boost::true_type a4)
{
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::manage_small(
    in_buffer,
    out_buffer,
    op);
};

// Line 330: range 000000000BF9C5FE-000000000BF9C629
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>::manager(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op,
        boost::true_type a4)
{
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>::manage_small(
    in_buffer,
    out_buffer,
    op);
};

// Line 330: range 000000000BF9EF64-000000000BF9EF8F
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>::manager(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op,
        boost::true_type a4)
{
  boost::detail::function::functor_manager_common<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>::manage_small(
    in_buffer,
    out_buffer,
    op);
};

// Line 338: range 000000000CB7FD09-000000000CB801E7
void __cdecl boost::detail::function::functor_manager<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>::manager(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op,
        boost::false_type a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *v7; // r13
  boost::detail::function::function_buffer_members::obj_ptr_t obj_ptr; // rdx
  boost::detail::function::function_buffer_members::obj_ptr_t v9; // r13
  bool v10; // al
  boost::detail::function::function_buffer_members::obj_ptr_t v11; // rdx
  void *v12; // rax
  char *v13; // rax
  __int64 v14; // rsi
  const boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *f; // [rsp+30h] [rbp-90h]
  char v18[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = boost::detail::function::functor_manager<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>::manager;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  if ( op )
  {
    switch ( op )
    {
      case move_functor_tag:
        if ( *(_BYTE *)(((unsigned __int64)in_buffer >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        obj_ptr = in_buffer->members.obj_ptr;
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        out_buffer->members.obj_ptr = obj_ptr;
        in_buffer->members.obj_ptr = 0LL;
        break;
      case destroy_functor_tag:
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = out_buffer->members.obj_ptr;
        if ( out_buffer->members.obj_ptr )
        {
          boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::~token_finderF((boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *const)out_buffer->members.obj_ptr);
          operator delete(v9, 0x20uLL);
        }
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        out_buffer->members.obj_ptr = 0LL;
        break;
      case check_functor_type_tag:
        if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(boost::typeindex::type_index *)(v4 + 32) = boost::typeindex::type_id<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>();
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v10 = boost::typeindex::operator==<boost::typeindex::stl_type_index,std::type_info>(
                out_buffer->members.type.type,
                (const boost::typeindex::type_index_facade<boost::typeindex::stl_type_index,std::type_info> *)(v4 + 32));
        *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
        if ( v10 )
        {
          if ( *(_BYTE *)(((unsigned __int64)in_buffer >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v11 = in_buffer->members.obj_ptr;
          if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          out_buffer->members.obj_ptr = v11;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          out_buffer->members.obj_ptr = 0LL;
        }
        break;
      default:
        if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(boost::typeindex::type_index *)(v4 + 64) = boost::typeindex::type_id<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>();
        v12 = boost::typeindex::stl_type_index::type_info((const boost::typeindex::stl_type_index *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
          v12 = (void *)__asan_report_store8();
        out_buffer->members.obj_ptr = v12;
        *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&out_buffer->data[8], out_buffer);
        out_buffer->members.type.const_qualified = 0;
        v13 = &out_buffer->members.bound_memfunc_ptr.gap8[1];
        v14 = ((_BYTE)out_buffer + 9) & 7;
        if ( *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) != 0
          && (char)v14 >= *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v13, v14);
        }
        out_buffer->members.type.volatile_qualified = 0;
        break;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)in_buffer >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    f = (const boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)in_buffer->members.obj_ptr;
    v7 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)operator new(0x20uLL);
    boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(v7, f);
    if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    out_buffer->members.obj_ptr = v7;
  }
  if ( v18 == (char *)v4 )
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

// Line 376: range 000000000BF950AE-000000000BF950D9
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::manager(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op,
        boost::detail::function::function_obj_tag a4)
{
  boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::manager(
    in_buffer,
    out_buffer,
    op,
    (boost::true_type)out_buffer);
};

// Line 376: range 000000000BF997B6-000000000BF997E1
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::manager(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op,
        boost::detail::function::function_obj_tag a4)
{
  boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::manager(
    in_buffer,
    out_buffer,
    op,
    (boost::true_type)out_buffer);
};

// Line 376: range 000000000BF97349-000000000BF97374
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>::manager(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op,
        boost::detail::function::function_obj_tag a4)
{
  boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>::manager(
    in_buffer,
    out_buffer,
    op,
    (boost::true_type)out_buffer);
};

// Line 376: range 000000000BF99E89-000000000BF99EB4
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>::manager(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op,
        boost::detail::function::function_obj_tag a4)
{
  boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>::manager(
    in_buffer,
    out_buffer,
    op,
    (boost::true_type)out_buffer);
};

// Line 376: range 000000000CB52D3F-000000000CB52E05
void __cdecl boost::detail::function::functor_manager<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>::manager(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op,
        boost::detail::function::function_obj_tag a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v4 + 16) = boost::detail::function::functor_manager<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>::manager;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  boost::detail::function::functor_manager<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>::manager(
    in_buffer,
    out_buffer,
    op,
    (boost::false_type)out_buffer);
  if ( v8 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 395: range 000000000BF8EDA1-000000000BF8EE92
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::manage(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op)
{
  void *v3; // rax
  char *v4; // rax
  __int64 v5; // rsi
  boost::typeindex::stl_type_index v7; // [rsp+28h] [rbp-8h] BYREF

  if ( op == get_functor_type_tag )
  {
    v7.data_ = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>().data_;
    v3 = boost::typeindex::stl_type_index::type_info(&v7);
    if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
      v3 = (void *)__asan_report_store8();
    out_buffer->members.obj_ptr = v3;
    if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&out_buffer->data[8], out_buffer);
    out_buffer->members.type.const_qualified = 0;
    v4 = &out_buffer->members.bound_memfunc_ptr.gap8[1];
    v5 = ((_BYTE)out_buffer + 9) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) != 0
      && (char)v5 >= *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v4, v5);
    }
    out_buffer->members.type.volatile_qualified = 0;
  }
  else
  {
    boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::manager(
      in_buffer,
      out_buffer,
      op,
      (boost::detail::function::function_obj_tag)out_buffer);
  }
};

// Line 395: range 000000000BF9360F-000000000BF93700
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::manage(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op)
{
  void *v3; // rax
  char *v4; // rax
  __int64 v5; // rsi
  boost::typeindex::stl_type_index v7; // [rsp+28h] [rbp-8h] BYREF

  if ( op == get_functor_type_tag )
  {
    v7.data_ = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>().data_;
    v3 = boost::typeindex::stl_type_index::type_info(&v7);
    if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
      v3 = (void *)__asan_report_store8();
    out_buffer->members.obj_ptr = v3;
    if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&out_buffer->data[8], out_buffer);
    out_buffer->members.type.const_qualified = 0;
    v4 = &out_buffer->members.bound_memfunc_ptr.gap8[1];
    v5 = ((_BYTE)out_buffer + 9) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) != 0
      && (char)v5 >= *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v4, v5);
    }
    out_buffer->members.type.volatile_qualified = 0;
  }
  else
  {
    boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::manager(
      in_buffer,
      out_buffer,
      op,
      (boost::detail::function::function_obj_tag)out_buffer);
  }
};

// Line 395: range 000000000BF91056-000000000BF91147
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>::manage(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op)
{
  void *v3; // rax
  char *v4; // rax
  __int64 v5; // rsi
  boost::typeindex::stl_type_index v7; // [rsp+28h] [rbp-8h] BYREF

  if ( op == get_functor_type_tag )
  {
    v7.data_ = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>().data_;
    v3 = boost::typeindex::stl_type_index::type_info(&v7);
    if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
      v3 = (void *)__asan_report_store8();
    out_buffer->members.obj_ptr = v3;
    if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&out_buffer->data[8], out_buffer);
    out_buffer->members.type.const_qualified = 0;
    v4 = &out_buffer->members.bound_memfunc_ptr.gap8[1];
    v5 = ((_BYTE)out_buffer + 9) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) != 0
      && (char)v5 >= *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v4, v5);
    }
    out_buffer->members.type.volatile_qualified = 0;
  }
  else
  {
    boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>::manager(
      in_buffer,
      out_buffer,
      op,
      (boost::detail::function::function_obj_tag)out_buffer);
  }
};

// Line 395: range 000000000BF940D4-000000000BF941C5
void __cdecl boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>::manage(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op)
{
  void *v3; // rax
  char *v4; // rax
  __int64 v5; // rsi
  boost::typeindex::stl_type_index v7; // [rsp+28h] [rbp-8h] BYREF

  if ( op == get_functor_type_tag )
  {
    v7.data_ = boost::typeindex::type_id<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>().data_;
    v3 = boost::typeindex::stl_type_index::type_info(&v7);
    if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
      v3 = (void *)__asan_report_store8();
    out_buffer->members.obj_ptr = v3;
    if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&out_buffer->data[8], out_buffer);
    out_buffer->members.type.const_qualified = 0;
    v4 = &out_buffer->members.bound_memfunc_ptr.gap8[1];
    v5 = ((_BYTE)out_buffer + 9) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) != 0
      && (char)v5 >= *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v4, v5);
    }
    out_buffer->members.type.volatile_qualified = 0;
  }
  else
  {
    boost::detail::function::functor_manager<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>::manager(
      in_buffer,
      out_buffer,
      op,
      (boost::detail::function::function_obj_tag)out_buffer);
  }
};

// Line 395: range 000000000C2423CB-000000000C24282B
void __fastcall boost::detail::function::functor_manager<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>::manage(
        const boost::detail::function::function_buffer *in_buffer,
        boost::detail::function::function_buffer *out_buffer,
        boost::detail::function::functor_manager_operation_type op)
{
  unsigned __int64 obj_ptr; // r12
  boost::detail::function::function_buffer *v4; // rbx
  char v5; // al
  unsigned __int64 v6; // rbp
  boost::detail::function::function_buffer *v7; // rdi
  char v8; // al
  unsigned __int64 v9; // rdi
  void *v10; // rdi
  _QWORD *v11; // rdi
  char v12; // al
  char v13; // al
  boost::detail::function::function_buffer *v14; // rdi
  char v15; // al
  bool v16; // al
  struct _Unwind_Exception *v17; // rbx

  v4 = out_buffer;
  if ( op == get_functor_type_tag )
  {
    if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
    {
      in_buffer = out_buffer;
      __asan_report_store8();
    }
    else
    {
      out_buffer->members.obj_ptr = &`typeinfo for'boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>;
      in_buffer = (const boost::detail::function::function_buffer *)&out_buffer->data[8];
      if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) >= 0 )
      {
        out_buffer->members.type.const_qualified = 0;
        in_buffer = (const boost::detail::function::function_buffer *)&out_buffer->data[9];
        v5 = *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000);
        if ( v5 > (((unsigned __int8)out_buffer + 9) & 7) || !v5 )
        {
          out_buffer->members.type.volatile_qualified = 0;
          return;
        }
        goto LABEL_9;
      }
    }
    __asan_report_store1(in_buffer, out_buffer);
LABEL_9:
    __asan_report_store1(in_buffer, out_buffer);
  }
  v6 = (unsigned __int64)in_buffer;
  switch ( op )
  {
    case clone_functor_tag:
      if ( *(_BYTE *)(((unsigned __int64)in_buffer >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        obj_ptr = (unsigned __int64)in_buffer->members.obj_ptr;
        v6 = operator new(0x20uLL);
        if ( !*(_BYTE *)(((obj_ptr + 16) >> 3) + 0x7FFF8000) )
        {
          v9 = *(_QWORD *)(obj_ptr + 16);
          if ( !*(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v6 + 16) = v9;
            if ( !*(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)v6 = 0LL;
              if ( v9 <= 0x10 )
              {
                v10 = (void *)v6;
                out_buffer = (boost::detail::function::function_buffer *)obj_ptr;
LABEL_25:
                memcpy(v10, out_buffer, *(_QWORD *)(v6 + 16));
                v11 = (_QWORD *)(obj_ptr + 24);
                v12 = *(_BYTE *)(((obj_ptr + 24) >> 3) + 0x7FFF8000);
                if ( !v12 || v12 > 3 )
                {
                  v11 = (_QWORD *)(v6 + 24);
                  v13 = *(_BYTE *)(((v6 + 24) >> 3) + 0x7FFF8000);
                  if ( !v13 || v13 > 3 )
                  {
                    *(_DWORD *)(v6 + 24) = *(_DWORD *)(obj_ptr + 24);
                    if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
                    {
                      v4->members.obj_ptr = (boost::detail::function::function_buffer_members::obj_ptr_t)v6;
                      return;
                    }
                    goto LABEL_42;
                  }
LABEL_41:
                  __asan_report_store4(v11);
LABEL_42:
                  in_buffer = v4;
                  __asan_report_store8();
                  goto LABEL_43;
                }
LABEL_40:
                __asan_report_load4(v11);
                goto LABEL_41;
              }
LABEL_35:
              v10 = (void *)operator new[](v9);
              if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store8();
              }
              else
              {
                *(_QWORD *)v6 = v10;
                if ( !*(_BYTE *)((obj_ptr >> 3) + 0x7FFF8000) )
                {
                  out_buffer = *(boost::detail::function::function_buffer **)obj_ptr;
                  goto LABEL_25;
                }
              }
              v11 = (_QWORD *)obj_ptr;
              __asan_report_load8();
              goto LABEL_40;
            }
LABEL_34:
            v9 = v6;
            __asan_report_store8();
            goto LABEL_35;
          }
LABEL_33:
          __asan_report_store8();
          goto LABEL_34;
        }
      }
      __asan_report_load8();
      goto LABEL_33;
    case move_functor_tag:
LABEL_43:
      if ( *(_BYTE *)(((unsigned __int64)in_buffer >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else if ( !*(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
      {
        out_buffer->members.obj_ptr = in_buffer->members.obj_ptr;
        in_buffer->members.obj_ptr = 0LL;
        return;
      }
      __asan_report_store8();
LABEL_48:
      if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v6 = (unsigned __int64)out_buffer->members.obj_ptr;
        if ( !out_buffer->members.obj_ptr )
          goto LABEL_56;
        if ( !*(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
        {
          if ( *(_QWORD *)(v6 + 16) <= 0x10uLL )
          {
LABEL_55:
            out_buffer = (boost::detail::function::function_buffer *)32;
            operator delete((void *)v6, 0x20uLL);
LABEL_56:
            if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
            {
              v4->members.obj_ptr = 0LL;
              return;
            }
            goto LABEL_61;
          }
          if ( !*(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          {
            if ( *(_QWORD *)v6 )
              operator delete[](*(void **)v6);
            goto LABEL_55;
          }
LABEL_60:
          __asan_report_load8();
LABEL_61:
          __asan_report_store8();
          goto LABEL_62;
        }
      }
      __asan_report_load8();
      goto LABEL_60;
    case destroy_functor_tag:
      goto LABEL_48;
  }
  if ( op != check_functor_type_tag )
  {
    if ( !*(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
    {
      out_buffer->members.obj_ptr = &`typeinfo for'boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>;
      v7 = (boost::detail::function::function_buffer *)&out_buffer->data[8];
      if ( *(char *)(((unsigned __int64)&out_buffer->data[8] >> 3) + 0x7FFF8000) >= 0 )
      {
        out_buffer->members.type.const_qualified = 0;
        v7 = (boost::detail::function::function_buffer *)&out_buffer->data[9];
        v8 = *(_BYTE *)(((unsigned __int64)&out_buffer->data[9] >> 3) + 0x7FFF8000);
        if ( v8 > (((unsigned __int8)out_buffer + 9) & 7) || !v8 )
        {
          out_buffer->members.type.volatile_qualified = 0;
          return;
        }
LABEL_85:
        v17 = (struct _Unwind_Exception *)__asan_report_store1(v7, out_buffer);
        operator delete((void *)v6, 0x20uLL);
        __asan_handle_no_return(v6);
        _Unwind_Resume(v17);
      }
LABEL_84:
      __asan_report_store1(v7, out_buffer);
      goto LABEL_85;
    }
LABEL_83:
    v7 = out_buffer;
    __asan_report_store8();
    goto LABEL_84;
  }
LABEL_62:
  if ( *(_BYTE *)(((unsigned __int64)out_buffer >> 3) + 0x7FFF8000) )
  {
    v14 = out_buffer;
    __asan_report_load8();
    goto LABEL_70;
  }
  v14 = (boost::detail::function::function_buffer *)((char *)out_buffer->members.obj_ptr + 8);
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8();
    goto LABEL_71;
  }
  v14 = (boost::detail::function::function_buffer *)*((_QWORD *)out_buffer->members.obj_ptr + 1);
  if ( v14 == (boost::detail::function::function_buffer *)"N5boost9algorithm6detail13token_finderFINS1_10is_any_ofFIcEEEE" )
  {
LABEL_72:
    v16 = 1;
    goto LABEL_73;
  }
  v15 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
  if ( v15 <= ((unsigned __int8)v14 & 7) && v15 )
  {
LABEL_71:
    __asan_report_load1(v14);
    goto LABEL_72;
  }
  if ( v14->data[0] == 42 )
  {
    v16 = 0;
  }
  else
  {
    out_buffer = (boost::detail::function::function_buffer *)"N5boost9algorithm6detail13token_finderFINS1_10is_any_ofFIcEEEE";
    v16 = strcmp((const char *)v14, "N5boost9algorithm6detail13token_finderFINS1_10is_any_ofFIcEEEE") == 0;
  }
LABEL_73:
  if ( v16 )
  {
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      v4->members.obj_ptr = *(boost::detail::function::function_buffer_members::obj_ptr_t *)v6;
      return;
    }
    __asan_report_store8();
  }
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_83;
  }
  v4->members.obj_ptr = 0LL;
};

// Line 590: range 000000000CB936FC-000000000CB93754
void __cdecl boost::bad_function_call::bad_function_call(
        boost::bad_function_call *const this,
        const boost::bad_function_call *a2)
{
  __int64 *v2; // rdx

  std::runtime_error::runtime_error((std::runtime_error *)this, (const std::runtime_error *)a2);
  v2 = &`vtable for'boost::bad_function_call + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 611: range 000000000BEFA182-000000000BEFA1BC
void __cdecl boost::function_base::function_base(boost::function_base *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->vtable = 0LL;
};

// Line 614: range 000000000BEFA1BE-000000000BEFA1F9
bool __cdecl boost::function_base::empty(const boost::function_base *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->vtable == 0LL;
};

// Line 697: range 000000000BEFA1FA-000000000BEFA238
bool __cdecl boost::function_base::has_trivial_copy_and_destroy(const boost::function_base *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return ((__int64)this->vtable & 1) != 0;
};

// Line 713: range 000000000C23F6E4-000000000C23FBC2
void __fastcall boost::bad_function_call::~bad_function_call(boost::bad_function_call *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    boost::bad_function_call::~bad_function_call(this);
  }
  else
  {
    *(_QWORD *)this->baseclass_0 = &`vtable for'boost::bad_function_call + 2;
    std::runtime_error::~runtime_error((std::runtime_error *)this);
  }
};

// Line 716: range 000000000C64546C-000000000C6454C0
void __cdecl boost::bad_function_call::bad_function_call(boost::bad_function_call *const this)
{
  __int64 *v1; // rdx

  std::runtime_error::runtime_error((std::runtime_error *)this, "call to empty boost::function");
  v1 = &`vtable for'boost::bad_function_call + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
};

// Line 872: range 000000000BEFA239-000000000BEFA243
__int64 boost::detail::function::has_empty_target()
{
  return 0LL;
};
