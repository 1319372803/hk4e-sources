// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/wait_handler.hpp

// Line 33: range 000000000C6E2CA2-000000000C6E2CCC
void __cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~wait_handler(
        boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this)
{
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(&this->io_executor_);
  boost::asio::detail::wait_op::~wait_op(this);
};

// Line 33: range 000000000C6E4434-000000000C6E445E
void __cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~wait_handler(
        boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this)
{
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(&this->io_executor_);
  boost::asio::detail::wait_op::~wait_op(this);
};

// Line 34: range 0000000014ED9FEC-0000000014EDAD7C
void __fastcall boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::arg<1> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset(
        boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const this)
{
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor> > *p; // rbp
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *v2; // rsi
  unsigned __int64 p_p; // rdi
  unsigned __int64 v5; // rdx
  boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> *p_l; // r12
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor> > **p_v; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor> > **v11; // rdi
  char v12; // dl
  char v13; // al
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> > *v14; // rdx
  const boost::asio::detail::io_object_executor<boost::asio::executor> *v15; // rcx

  p_p = (unsigned __int64)&this->p;
  if ( *(_BYTE *)((p_p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_p);
LABEL_26:
    __asan_report_load8(p_p);
LABEL_27:
    __asan_report_load8(p_p);
    goto LABEL_28;
  }
  p = this->p;
  if ( !p )
    goto LABEL_13;
  p_p = (unsigned __int64)&p->io_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&p->io_executor_ >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  p_p = (unsigned __int64)p->io_executor_.executor_.impl_;
  if ( !p_p )
    goto LABEL_8;
  if ( *(_BYTE *)((p_p >> 3) + 0x7FFF8000) )
    goto LABEL_27;
  v5 = *(_QWORD *)p_p + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(v5);
    goto LABEL_29;
  }
  (*(void (**)(void))(*(_QWORD *)p_p + 8LL))();
LABEL_8:
  p_l = &p->handler_.l_;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&p->handler_.l_.a2_.t_);
  p = (boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor> > *)((char *)p + 64);
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    p_v = (boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor> > **)p;
    __asan_report_load8(p);
LABEL_30:
    __asan_report_store8();
    goto LABEL_31;
  }
  M_pi = p_l->a1_.t_._M_refcount._M_pi;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  p_v = &this->p;
  if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
    goto LABEL_30;
  this->p = 0LL;
LABEL_13:
  p_v = &this->v;
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    v10 = __asan_report_load8(p_v);
    goto LABEL_32;
  }
  p = this->v;
  if ( !p )
    return;
  v9 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                           + __readfsqword(0));
  if ( v9 )
  {
    v10 = v9 + 8;
    if ( !*(_BYTE *)(((v9 + 8) >> 3) + 0x7FFF8000) )
    {
      v9 = *(_QWORD *)(v9 + 8);
      goto LABEL_18;
    }
LABEL_32:
    v9 = v10;
    __asan_report_load8(v10);
LABEL_33:
    __asan_report_load8(v9);
    goto LABEL_34;
  }
LABEL_18:
  if ( !v9 )
  {
LABEL_21:
    operator delete(this->v);
    goto LABEL_22;
  }
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  if ( *(_QWORD *)v9 )
    goto LABEL_21;
LABEL_34:
  v12 = *(_BYTE *)(((unsigned __int64)&p[1] >> 3) + 0x7FFF8000);
  if ( v12 <= (((unsigned __int8)p - 120) & 7) && v12 )
  {
    __asan_report_load1(&p[1]);
LABEL_40:
    v11 = (boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor> > **)p;
    __asan_report_store1(p);
    goto LABEL_41;
  }
  v13 = *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000);
  if ( v13 <= ((unsigned __int8)p & 7) && v13 )
    goto LABEL_40;
  LOBYTE(p->next_) = p[1].next_;
  *(_QWORD *)v9 = p;
LABEL_22:
  v11 = &this->v;
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::arg<1> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
      (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const)v11,
      v2,
      v14,
      v15);
    return;
  }
  this->v = 0LL;
};

// Line 36: range 000000000C6DCB19-000000000C6DCC13
boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *__cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::allocate(
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *result; // rax
  std::allocator<void> v5; // [rsp+17h] [rbp-69h] BYREF
  boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,void> a; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 4 a:36";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::allocate;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  boost::asio::get_associated_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>(handler);
  a.handler_ = boost::asio::detail::get_hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,std::allocator<void>>::get(
                 handler,
                 &v5).handler_;
  boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::hook_allocator<void>(
    (boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
    &a);
  result = boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::allocate(
             (boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
             1uLL);
  if ( v7 == (char *)v1 )
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

// Line 36: range 000000000C6DE45E-000000000C6DE558
boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *__cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::allocate(
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *result; // rax
  std::allocator<void> v5; // [rsp+17h] [rbp-69h] BYREF
  boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,void> a; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 4 a:36";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::allocate;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  boost::asio::get_associated_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>(handler);
  a.handler_ = boost::asio::detail::get_hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,std::allocator<void>>::get(
                 handler,
                 &v5).handler_;
  boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::hook_allocator<void>(
    (boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
    &a);
  result = boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::allocate(
             (boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
             1uLL);
  if ( v7 == (char *)v1 )
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

// Line 36: range 000000000C6E2CCE-000000000C6E2F1B
void __cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset(
        boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::allocator<void> v4; // [rsp+17h] [rbp-69h] BYREF
  boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,void> a; // [rsp+18h] [rbp-68h] BYREF
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 4 a:36";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->p);
  if ( this->p )
  {
    boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~wait_handler(this->p);
    if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->p = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->v);
  if ( this->v )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::get_associated_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>(this->h);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    a.handler_ = boost::asio::detail::get_hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,std::allocator<void>>::get(
                   this->h,
                   &v4).handler_;
    boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::hook_allocator<void>(
      (boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
      &a);
    if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->v);
    boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::deallocate(
      (boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
      this->v,
      1uLL);
    if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->v = 0LL;
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 36: range 000000000C6DCC14-000000000C6DCC2E
void __cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::~ptr(
        boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const this)
{
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset(this);
};

// Line 36: range 000000000C6E4460-000000000C6E46AD
void __cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset(
        boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::allocator<void> v4; // [rsp+17h] [rbp-69h] BYREF
  boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,void> a; // [rsp+18h] [rbp-68h] BYREF
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 4 a:36";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->p);
  if ( this->p )
  {
    boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~wait_handler(this->p);
    if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->p = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->v);
  if ( this->v )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::get_associated_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>(this->h);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    a.handler_ = boost::asio::detail::get_hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,std::allocator<void>>::get(
                   this->h,
                   &v4).handler_;
    boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::hook_allocator<void>(
      (boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
      &a);
    if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->v);
    boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::deallocate(
      (boost::asio::detail::hook_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
      this->v,
      1uLL);
    if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->v = 0LL;
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 36: range 000000000C6DE55A-000000000C6DE574
void __cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::~ptr(
        boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const this)
{
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset(this);
};

// Line 36: range 0000000019B8F6EE-0000000019B8FDF2
void __fastcall boost::asio::detail::wait_handler<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset(
        boost::asio::detail::wait_handler<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const this)
{
  boost::asio::detail::wait_handler<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *p; // rbp
  unsigned __int64 p_p; // rdi
  unsigned __int64 v4; // rdx
  boost::asio::detail::wait_handler<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > **p_v; // rdi
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  char v8; // dl
  char v9; // al

  p_p = (unsigned __int64)&this->p;
  if ( *(_BYTE *)((p_p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_p);
LABEL_23:
    __asan_report_load8(p_p);
LABEL_24:
    __asan_report_load8(p_p);
    goto LABEL_25;
  }
  p = this->p;
  if ( !p )
    goto LABEL_10;
  p_p = (unsigned __int64)&p->io_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&p->io_executor_ >> 3) + 0x7FFF8000) )
    goto LABEL_23;
  p_p = (unsigned __int64)p->io_executor_.executor_.impl_;
  if ( !p_p )
    goto LABEL_8;
  if ( *(_BYTE *)((p_p >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  v4 = *(_QWORD *)p_p + 8LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    p_v = (boost::asio::detail::wait_handler<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > **)v4;
    __asan_report_load8(v4);
    goto LABEL_26;
  }
  (*(void (**)(void))(*(_QWORD *)p_p + 8LL))();
LABEL_8:
  boost::asio::detail::executor_binder_base<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor,false>::~executor_binder_base(&p->handler_);
  p_v = &this->p;
  if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
    goto LABEL_27;
  }
  this->p = 0LL;
LABEL_10:
  p_v = &this->v;
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    v7 = __asan_report_load8(p_v);
    goto LABEL_28;
  }
  p = this->v;
  if ( !p )
    return;
  v6 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                           + __readfsqword(0));
  if ( v6 )
  {
    v7 = v6 + 8;
    if ( !*(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
    {
      v6 = *(_QWORD *)(v6 + 8);
      goto LABEL_15;
    }
LABEL_28:
    v6 = v7;
    __asan_report_load8(v7);
LABEL_29:
    __asan_report_load8(v6);
    goto LABEL_30;
  }
LABEL_15:
  if ( !v6 )
  {
LABEL_18:
    operator delete(this->v);
    goto LABEL_19;
  }
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_29;
  if ( *(_QWORD *)v6 )
    goto LABEL_18;
LABEL_30:
  v8 = *(_BYTE *)(((unsigned __int64)&p[1] >> 3) + 0x7FFF8000);
  if ( v8 <= (((unsigned __int8)p + 96) & 7) && v8 )
  {
    __asan_report_load1(&p[1]);
LABEL_36:
    __asan_report_store1(p);
    goto LABEL_37;
  }
  v9 = *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000);
  if ( v9 <= ((unsigned __int8)p & 7) && v9 )
    goto LABEL_36;
  LOBYTE(p->next_) = p[1].next_;
  *(_QWORD *)v6 = p;
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    JUMPOUT(0x19B8F8BDLL);
  }
  this->v = 0LL;
};

// Line 36: range 0000000019BEA856-0000000019BEBA1F
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset(
        boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const this)
{
  unsigned __int64 p_p; // rdi
  boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *p; // rbp
  unsigned __int64 v4; // rdx
  boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > **p_handler; // rdi
  boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *v; // rdi

  p_p = (unsigned __int64)&this->p;
  if ( *(_BYTE *)((p_p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_p);
LABEL_19:
    __asan_report_load8(p_p);
LABEL_20:
    __asan_report_load8(p_p);
    goto LABEL_21;
  }
  p = this->p;
  if ( !p )
    goto LABEL_12;
  p_p = (unsigned __int64)&p->io_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&p->io_executor_ >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  p_p = (unsigned __int64)p->io_executor_.executor_.impl_;
  if ( !p_p )
    goto LABEL_8;
  if ( *(_BYTE *)((p_p >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v4 = *(_QWORD *)p_p + 8LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_handler = (boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > **)v4;
    __asan_report_load8(v4);
    goto LABEL_22;
  }
  (*(void (**)(void))(*(_QWORD *)p_p + 8LL))();
LABEL_8:
  p_handler = (boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > **)&p->handler_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&p->handler_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  p->handler_.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                                                        + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&p->handler_.handler_.wg1_);
  p_handler = (boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > **)&p->handler_.handler_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&p->handler_.handler_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8();
    goto LABEL_24;
  }
  p->handler_.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>
                                                           + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&p->handler_.handler_.h_);
  p_handler = &this->p;
  if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->p = 0LL;
LABEL_12:
  p_handler = &this->v;
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_handler);
LABEL_26:
    __asan_report_load8(this);
    goto LABEL_27;
  }
  v = this->v;
  if ( !v )
    return;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  boost::beast::asio_handler_deallocate<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>(
    v,
    0x138uLL,
    &this->h->handler_);
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    JUMPOUT(0x19BEA9F9LL);
  }
  this->v = 0LL;
};

// Line 36: range 0000000019C61C04-0000000019C6337F
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset(
        boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const this)
{
  unsigned __int64 p_p; // rdi
  boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *p; // rbp
  unsigned __int64 v4; // rdx
  boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > **p_handler; // rdi
  boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *v; // rdi

  p_p = (unsigned __int64)&this->p;
  if ( *(_BYTE *)((p_p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_p);
LABEL_19:
    __asan_report_load8(p_p);
LABEL_20:
    __asan_report_load8(p_p);
    goto LABEL_21;
  }
  p = this->p;
  if ( !p )
    goto LABEL_12;
  p_p = (unsigned __int64)&p->io_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&p->io_executor_ >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  p_p = (unsigned __int64)p->io_executor_.executor_.impl_;
  if ( !p_p )
    goto LABEL_8;
  if ( *(_BYTE *)((p_p >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v4 = *(_QWORD *)p_p + 8LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_handler = (boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > **)v4;
    __asan_report_load8(v4);
    goto LABEL_22;
  }
  (*(void (**)(void))(*(_QWORD *)p_p + 8LL))();
LABEL_8:
  p_handler = (boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > **)&p->handler_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&p->handler_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  p->handler_.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                        + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&p->handler_.handler_.wg1_);
  p_handler = (boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> > **)&p->handler_.handler_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&p->handler_.handler_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8();
    goto LABEL_24;
  }
  p->handler_.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                           + 2);
  boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&p->handler_.handler_.h_);
  p_handler = &this->p;
  if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->p = 0LL;
LABEL_12:
  p_handler = &this->v;
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_handler);
LABEL_26:
    __asan_report_load8(this);
    goto LABEL_27;
  }
  v = this->v;
  if ( !v )
    return;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
    v,
    0x168uLL,
    &this->h->handler_);
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    JUMPOUT(0x19C61DA7LL);
  }
  this->v = 0LL;
};

// Line 38: range 000000000C6DCC4C-000000000C6DCD9D
void __cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::wait_handler(
        boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *h,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *ex)
{
  __int64 v3; // rdx
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *t; // rdx

  boost::asio::detail::wait_op::wait_op(
    this,
    (boost::asio::detail::scheduler_operation::func_type)boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete);
  if ( *(char *)(((unsigned __int64)&this->handler_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->handler_, 32LL);
  }
  if ( *(char *)(((unsigned __int64)h >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&h->l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)h + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&h->l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(h, 32LL);
  }
  v3 = *((_QWORD *)&h->f_.f_ + 1);
  this->handler_.f_.f_ = h->f_.f_;
  *((_QWORD *)&this->handler_.f_.f_ + 1) = v3;
  t = h->l_.a3_.t_;
  this->handler_.l_.a1_.t_ = h->l_.a1_.t_;
  this->handler_.l_.a3_.t_ = t;
  boost::asio::detail::io_object_executor<boost::asio::executor>::io_object_executor(&this->io_executor_, ex);
  boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::start(
    &this->handler_,
    &this->io_executor_);
};

// Line 38: range 000000000C6DE576-000000000C6DE6C7
void __cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::wait_handler(
        boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *h,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *ex)
{
  __int64 v3; // rdx
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *t; // rdx

  boost::asio::detail::wait_op::wait_op(
    this,
    (boost::asio::detail::scheduler_operation::func_type)boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete);
  if ( *(char *)(((unsigned __int64)&this->handler_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->handler_, 32LL);
  }
  if ( *(char *)(((unsigned __int64)h >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&h->l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)h + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&h->l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(h, 32LL);
  }
  v3 = *((_QWORD *)&h->f_.f_ + 1);
  this->handler_.f_.f_ = h->f_.f_;
  *((_QWORD *)&this->handler_.f_.f_ + 1) = v3;
  t = h->l_.a3_.t_;
  this->handler_.l_.a1_.t_ = h->l_.a1_.t_;
  this->handler_.l_.a3_.t_ = t;
  boost::asio::detail::io_object_executor<boost::asio::executor>::io_object_executor(&this->io_executor_, ex);
  boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::start(
    &this->handler_,
    &this->io_executor_);
};

// Line 46: range 000000000C6E2F1C-000000000C6E31DB
void __cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v8[288]; // [rsp+30h] [rbp-120h] BYREF

  v4 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 4 b:71 48 24 4 p:52 112 32 4 w:53 176 48 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61953;
  v6[536862722] = -218959360;
  v6[536862723] = 62194;
  v6[536862724] = -219021312;
  v6[536862725] = 62194;
  v6[536862727] = -202116109;
  *(_QWORD *)(v4 + 48) = std::addressof<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>((boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&base[1].task_result_);
  *(_QWORD *)(v4 + 56) = base;
  *(_QWORD *)(v4 + 64) = base;
  boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::handler_work(
    (boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const)(v4 + 112),
    (boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&base[1].task_result_,
    (const boost::asio::detail::io_object_executor<boost::asio::executor> *)&base[3]);
  boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>::binder1(
    (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *const)(v4 + 176),
    (boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&base[1].task_result_,
    (const boost::system::error_code *)&base[1]);
  *(_QWORD *)(v4 + 48) = std::addressof<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>((boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)(v4 + 176));
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
  if ( owner )
  {
    boost::asio::detail::std_fenced_block::std_fenced_block(
      (boost::asio::detail::std_fenced_block *const)(v4 + 32),
      half);
    boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::complete<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>>(
      (boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const)(v4 + 112),
      (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *)(v4 + 176),
      (boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)(v4 + 176));
    boost::asio::detail::std_fenced_block::~std_fenced_block((boost::asio::detail::std_fenced_block *const)(v4 + 32));
  }
  boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~handler_work((boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const)(v4 + 112));
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::~ptr((boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
  if ( v8 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 000000000C6E46AE-000000000C6E496D
void __cdecl boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v8[288]; // [rsp+30h] [rbp-120h] BYREF

  v4 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 4 b:71 48 24 4 p:52 112 32 4 w:53 176 48 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61953;
  v6[536862722] = -218959360;
  v6[536862723] = 62194;
  v6[536862724] = -219021312;
  v6[536862725] = 62194;
  v6[536862727] = -202116109;
  *(_QWORD *)(v4 + 48) = std::addressof<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>((boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&base[1].task_result_);
  *(_QWORD *)(v4 + 56) = base;
  *(_QWORD *)(v4 + 64) = base;
  boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::handler_work(
    (boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const)(v4 + 112),
    (boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&base[1].task_result_,
    (const boost::asio::detail::io_object_executor<boost::asio::executor> *)&base[3]);
  boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>::binder1(
    (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *const)(v4 + 176),
    (boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&base[1].task_result_,
    (const boost::system::error_code *)&base[1]);
  *(_QWORD *)(v4 + 48) = std::addressof<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>((boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)(v4 + 176));
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
  if ( owner )
  {
    boost::asio::detail::std_fenced_block::std_fenced_block(
      (boost::asio::detail::std_fenced_block *const)(v4 + 32),
      half);
    boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::complete<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>>(
      (boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const)(v4 + 112),
      (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *)(v4 + 176),
      (boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)(v4 + 176));
    boost::asio::detail::std_fenced_block::~std_fenced_block((boost::asio::detail::std_fenced_block *const)(v4 + 32));
  }
  boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~handler_work((boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const)(v4 + 112));
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::~ptr((boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
  if ( v8 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 0000000014EEC042-0000000014EECD1A
void __fastcall boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::arg<1> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r13
  unsigned __int64 p_func; // rbp
  unsigned __int64 next; // rdi
  boost::asio::detail::scheduler_operation *v10; // rax
  boost::asio::detail::scheduler_operation *v11; // rdx
  boost::asio::detail::scheduler_operation *v12; // rax
  unsigned int *p_task_result; // rdi
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  boost::asio::detail::operation *v16; // rax
  boost::asio::detail::operation *v17; // rdi
  unsigned __int64 v18; // rdx
  char *v19; // r12
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  __int64 (__fastcall **v25)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t); // rax
  unsigned __int64 v26; // rax
  void (__fastcall *v27)(unsigned __int64, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *, unsigned __int64); // r12
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  char v30; // dl
  char v31; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v32; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v33; // rdi
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  char *v40; // r12
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v41; // rdi
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rdx
  boost::wrapexcept<boost::asio::bad_executor> *exception; // rbp
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  boost::wrapexcept<boost::asio::bad_executor> *v49; // rbp
  char v50; // dl
  char v51; // al
  struct _Unwind_Exception *v52; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-259h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v54; // [rsp+20h] [rbp-258h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v55; // [rsp+50h] [rbp-228h] BYREF
  char v56[504]; // [rsp+80h] [rbp-1F8h] BYREF

  v5 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v29 = __asan_stack_malloc_3(448LL);
    if ( v29 )
      v5 = v29;
  }
  v6 = v5 + 448;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 8 2 ex 64 24 4 p:52 128 32 4 w:53 192 96 10 handler:64 320 96 8 function";
  *(_QWORD *)(v5 + 16) = boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::arg<1> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -234881024;
  v7[536862723] = -218959118;
  v7[536862725] = -218959118;
  v7[536862729] = -218959118;
  v7[536862733] = -202116109;
  *(_QWORD *)(v5 + 64) = (char *)base + 40;
  *(_QWORD *)(v5 + 72) = base;
  *(_QWORD *)(v5 + 80) = base;
  p_func = (unsigned __int64)&base[5];
  if ( *(_BYTE *)(((unsigned __int64)&base[5] >> 3) + 0x7FFF8000) )
  {
    next = (unsigned __int64)&base[5];
    __asan_report_load8(&base[5]);
LABEL_59:
    v10 = (boost::asio::detail::scheduler_operation *)__asan_report_load8(next);
    goto LABEL_60;
  }
  next = (unsigned __int64)base[5].next_;
  if ( !next )
    goto LABEL_7;
  if ( *(_BYTE *)((next >> 3) + 0x7FFF8000) )
    goto LABEL_59;
  v10 = *(boost::asio::detail::scheduler_operation **)next;
  if ( *(_BYTE *)((*(_QWORD *)next >> 3) + 0x7FFF8000LL) )
  {
LABEL_60:
    __asan_report_load8(v10);
    goto LABEL_61;
  }
  next = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v10->next_)(
           next,
           base,
           *(_QWORD *)next >> 3,
           a4);
LABEL_7:
  *(_QWORD *)(v5 + 128) = next;
  v11 = (boost::asio::detail::operation *)((char *)base + 128);
  if ( *(char *)(((unsigned __int64)&base[5].func_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_61:
    next = (unsigned __int64)v11;
    __asan_report_load1(v11);
LABEL_62:
    v12 = (boost::asio::detail::scheduler_operation *)__asan_report_load8(next);
    goto LABEL_63;
  }
  *(_BYTE *)(v5 + 136) = base[5].func_;
  if ( !next )
    goto LABEL_12;
  if ( *(_BYTE *)((next >> 3) + 0x7FFF8000) )
    goto LABEL_62;
  v12 = *(boost::asio::detail::scheduler_operation **)next;
  if ( *(_BYTE *)((*(_QWORD *)next >> 3) + 0x7FFF8000LL) )
  {
LABEL_63:
    p_task_result = (unsigned int *)v12;
    __asan_report_load8(v12);
    goto LABEL_64;
  }
  next = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v12->next_)(
           next,
           base,
           *(_QWORD *)next >> 3,
           a4);
LABEL_12:
  *(_QWORD *)(v5 + 144) = next;
  *(_BYTE *)(v5 + 152) = *(_BYTE *)(v5 + 136);
  p_task_result = &base[1].task_result_;
  if ( *(_WORD *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load16(p_task_result);
    goto LABEL_65;
  }
  *(__m128i *)(v5 + 192) = _mm_loadu_si128((const __m128i *)&base[1].task_result_);
  p_func = (unsigned __int64)&base[2].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[2].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    v14 = p_func;
    __asan_report_load8(p_func);
    goto LABEL_66;
  }
  *(_QWORD *)(v5 + 208) = base[2].func_;
  *(_QWORD *)(v5 + 216) = 0LL;
  v14 = (unsigned __int64)&base[2].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[2].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v14);
    goto LABEL_67;
  }
  v15 = *(_QWORD *)&base[2].task_result_;
  *(_QWORD *)&base[2].task_result_ = 0LL;
  *(_QWORD *)(v5 + 216) = v15;
  base[2].func_ = 0LL;
  v14 = (unsigned __int64)&base[3];
  if ( *(_BYTE *)(((unsigned __int64)&base[3] >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(v14);
    goto LABEL_68;
  }
  *(_QWORD *)(v5 + 224) = base[3].next_;
  v14 = (unsigned __int64)&base[3].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[3].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(v14);
    goto LABEL_69;
  }
  *(_QWORD *)(v5 + 232) = base[3].func_;
  base[3].func_ = 0LL;
  base[3].next_ = 0LL;
  v14 = (unsigned __int64)&base[3].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[3].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(v14);
    goto LABEL_70;
  }
  *(_QWORD *)(v5 + 240) = *(_QWORD *)&base[3].task_result_;
  v14 = (unsigned __int64)&base[4];
  if ( *(_BYTE *)(((unsigned __int64)&base[4] >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8(v14);
LABEL_71:
    v16 = (boost::asio::detail::operation *)__asan_report_load8(v14);
    goto LABEL_72;
  }
  v14 = (unsigned __int64)base[4].next_;
  if ( !v14 )
    goto LABEL_23;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    goto LABEL_71;
  v16 = *(boost::asio::detail::operation **)v14;
  if ( *(_BYTE *)((*(_QWORD *)v14 >> 3) + 0x7FFF8000LL) )
  {
LABEL_72:
    v17 = v16;
    __asan_report_load8(v16);
    goto LABEL_73;
  }
  v14 = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v16->next_)(
          v14,
          base,
          *(_QWORD *)v14 >> 3,
          a4);
LABEL_23:
  *(_QWORD *)(v5 + 248) = v14;
  v17 = (boost::asio::detail::operation *)((char *)base + 104);
  if ( *(_BYTE *)(((unsigned __int64)&base[4].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v17);
    goto LABEL_74;
  }
  *(_QWORD *)(v5 + 256) = base[4].func_;
  v17 = (boost::asio::detail::operation *)((char *)base + 112);
  if ( *(_BYTE *)(((unsigned __int64)&base[4].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8(v17);
    goto LABEL_75;
  }
  *(_QWORD *)(v5 + 264) = *(_QWORD *)&base[4].task_result_;
  v17 = base + 1;
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load16(v17);
LABEL_76:
    __asan_report_load8(v17);
LABEL_77:
    __asan_report_load8(v17);
    goto LABEL_78;
  }
  *(__m128i *)(v5 + 272) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v5 + 64) = v5 + 192;
  p_func = *(_QWORD *)(v5 + 80);
  if ( !p_func )
    goto LABEL_36;
  v17 = (boost::asio::detail::operation *)(p_func + 120);
  if ( *(_BYTE *)(((p_func + 120) >> 3) + 0x7FFF8000) )
    goto LABEL_76;
  v17 = *(boost::asio::detail::operation **)(p_func + 120);
  if ( !v17 )
    goto LABEL_32;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v18 = (unsigned __int64)&v17->next_->func_;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v18);
    goto LABEL_79;
  }
  ((void (*)(void))v17->next_->func_)();
LABEL_32:
  v19 = (char *)(p_func + 56);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const)(p_func + 72));
  p_func += 64LL;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    v22 = __asan_report_load8(p_func);
    goto LABEL_80;
  }
  v20 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v19 + 1);
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
  *(_QWORD *)(v5 + 80) = 0LL;
LABEL_36:
  p_func = *(_QWORD *)(v5 + 72);
  if ( !p_func )
    goto LABEL_45;
  v21 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v21 )
  {
    v22 = v21 + 8;
    if ( !*(_BYTE *)(((v21 + 8) >> 3) + 0x7FFF8000) )
    {
      v21 = *(_QWORD *)(v21 + 8);
      goto LABEL_40;
    }
LABEL_80:
    v21 = v22;
    __asan_report_load8(v22);
    goto LABEL_81;
  }
LABEL_40:
  if ( v21 )
  {
    if ( !*(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)v21 )
        goto LABEL_43;
LABEL_82:
      v30 = *(_BYTE *)(((p_func + 136) >> 3) + 0x7FFF8000);
      if ( v30 <= (char)((p_func - 120) & 7) && v30 )
      {
        __asan_report_load1(p_func + 136);
      }
      else
      {
        v31 = *(_BYTE *)((p_func >> 3) + 0x7FFF8000);
        a4 = p_func & 7;
        if ( v31 > (char)a4 || !v31 )
        {
          *(_BYTE *)p_func = *(_BYTE *)(p_func + 136);
          *(_QWORD *)v21 = p_func;
          goto LABEL_44;
        }
      }
      v24 = p_func;
      __asan_report_store1(p_func);
      goto LABEL_89;
    }
LABEL_81:
    __asan_report_load8(v21);
    goto LABEL_82;
  }
LABEL_43:
  operator delete(*(void **)(v5 + 72));
LABEL_44:
  *(_QWORD *)(v5 + 72) = 0LL;
LABEL_45:
  if ( !owner )
    goto LABEL_95;
  if ( !*(_BYTE *)(v5 + 152) )
  {
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::arg<1> (*)(void)>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v5 + 144),
      (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> >,boost::system::error_code> *)(v5 + 192),
      &a);
    goto LABEL_95;
  }
  *(__m128i *)(v5 + 320) = _mm_load_si128((const __m128i *)(v5 + 192));
  *(_QWORD *)(v5 + 336) = *(_QWORD *)(v5 + 208);
  v23 = *(_QWORD *)(v5 + 216);
  *(_QWORD *)(v5 + 216) = 0LL;
  *(_QWORD *)(v5 + 344) = v23;
  *(_QWORD *)(v5 + 208) = 0LL;
  *(_QWORD *)(v5 + 352) = *(_QWORD *)(v5 + 224);
  *(_QWORD *)(v5 + 360) = *(_QWORD *)(v5 + 232);
  *(_QWORD *)(v5 + 232) = 0LL;
  *(_QWORD *)(v5 + 224) = 0LL;
  *(_QWORD *)(v5 + 368) = *(_QWORD *)(v5 + 240);
  v24 = *(_QWORD *)(v5 + 248);
  if ( v24 )
  {
    if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    {
      v25 = *(__int64 (__fastcall ***)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v24;
      if ( !*(_BYTE *)((*(_QWORD *)v24 >> 3) + 0x7FFF8000LL) )
      {
        v24 = (*v25)(v24, base, *(_QWORD *)v24 >> 3, a4);
        goto LABEL_51;
      }
LABEL_90:
      __asan_report_load8(v25);
LABEL_91:
      v28 = p_func;
      __asan_report_load8(p_func);
      goto LABEL_92;
    }
LABEL_89:
    v25 = (__int64 (__fastcall **)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))__asan_report_load8(v24);
    goto LABEL_90;
  }
LABEL_51:
  *(_QWORD *)(v5 + 376) = v24;
  *(_QWORD *)(v5 + 384) = *(_QWORD *)(v5 + 256);
  *(_QWORD *)(v5 + 392) = *(_QWORD *)(v5 + 264);
  *(__m128i *)(v5 + 400) = _mm_load_si128((const __m128i *)(v5 + 272));
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v54,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)(v5 + 352));
  v26 = (unsigned __int64)boost::get_pointer<common::minet::AServerSession>((const std::shared_ptr<common::minet::AServerSession> *)(v5 + 336))
      + *(_QWORD *)(v5 + 328);
  p_func = v26;
  v27 = *(void (__fastcall **)(unsigned __int64, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *, unsigned __int64))(v5 + 320);
  if ( ((unsigned __int8)v27 & 1) == 0 )
  {
LABEL_55:
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
      &v55,
      &v54);
    v27(p_func, &v55, v5 + 400);
    goto LABEL_93;
  }
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    goto LABEL_91;
  v28 = (unsigned __int64)v27 + *(_QWORD *)v26 - 1;
  if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
  {
    v27 = *(void (__fastcall **)(unsigned __int64, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *, unsigned __int64))v28;
    goto LABEL_55;
  }
LABEL_92:
  __asan_report_load8(v28);
LABEL_93:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v55);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v54);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const)(v5 + 352));
  v32 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 344);
  if ( v32 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v32);
LABEL_95:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const)(v5 + 224));
  v33 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 216);
  if ( v33 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v33);
  if ( !*(_BYTE *)(v5 + 136) )
  {
    v44 = *(_QWORD *)(v5 + 128);
    if ( !v44 )
    {
      *(_QWORD *)(v5 + 32) = &`vtable for'boost::asio::bad_executor + 2;
      exception = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
      if ( *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) <= (((unsigned __int8)exception + 55) & 7)
        || *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0 )
      {
        __asan_report_store_n(exception, 56LL);
      }
      boost::exception_detail::enable_both<boost::asio::bad_executor>(
        exception,
        (const boost::asio::bad_executor *)(v5 + 32));
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>,
        (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
    }
    if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v44);
    }
    else
    {
      v45 = *(_QWORD *)v44 + 32LL;
      if ( !*(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v44 + 32LL))();
        goto LABEL_98;
      }
    }
    __asan_report_load8(v45);
    goto LABEL_138;
  }
LABEL_98:
  if ( *(_BYTE *)(v5 + 152) )
    goto LABEL_99;
LABEL_138:
  v47 = *(_QWORD *)(v5 + 144);
  if ( !v47 )
  {
    *(_QWORD *)(v5 + 32) = &`vtable for'boost::asio::bad_executor + 2;
    v49 = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
    if ( *(_BYTE *)(((unsigned __int64)&v49->gap30[7] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v49->gap30[7] >> 3) + 0x7FFF8000) <= (((unsigned __int8)v49 + 55) & 7)
      || *(char *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_store_n(v49, 56LL);
    }
    boost::exception_detail::enable_both<boost::asio::bad_executor>(v49, (const boost::asio::bad_executor *)(v5 + 32));
    __asan_handle_no_return(v49);
    _cxa_throw(
      v49,
      (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>,
      (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
  }
  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v47);
    goto LABEL_147;
  }
  v48 = *(_QWORD *)v47 + 32LL;
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
  {
LABEL_147:
    v34 = v48;
    __asan_report_load8(v48);
LABEL_148:
    __asan_report_load8(v34);
    goto LABEL_149;
  }
  (*(void (**)(void))(*(_QWORD *)v47 + 32LL))();
LABEL_99:
  v34 = *(_QWORD *)(v5 + 144);
  if ( !v34 )
    goto LABEL_103;
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
    goto LABEL_148;
  v35 = *(_QWORD *)v34 + 8LL;
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
  {
LABEL_149:
    v36 = v35;
    __asan_report_load8(v35);
LABEL_150:
    __asan_report_load8(v36);
    goto LABEL_151;
  }
  (*(void (**)(void))(*(_QWORD *)v34 + 8LL))();
LABEL_103:
  v36 = *(_QWORD *)(v5 + 128);
  if ( !v36 )
    goto LABEL_107;
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
    goto LABEL_150;
  v37 = *(_QWORD *)v36 + 8LL;
  if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    v38 = v37;
    __asan_report_load8(v37);
LABEL_152:
    __asan_report_load8(v38);
LABEL_153:
    __asan_report_load8(v38);
    goto LABEL_154;
  }
  (*(void (**)(void))(*(_QWORD *)v36 + 8LL))();
LABEL_107:
  p_func = *(_QWORD *)(v5 + 80);
  if ( !p_func )
    goto LABEL_117;
  v38 = p_func + 120;
  if ( *(_BYTE *)(((p_func + 120) >> 3) + 0x7FFF8000) )
    goto LABEL_152;
  v38 = *(_QWORD *)(p_func + 120);
  if ( !v38 )
    goto LABEL_113;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
    goto LABEL_153;
  v39 = *(_QWORD *)v38 + 8LL;
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
  {
LABEL_154:
    __asan_report_load8(v39);
    goto LABEL_155;
  }
  (*(void (**)(void))(*(_QWORD *)v38 + 8LL))();
LABEL_113:
  v40 = (char *)(p_func + 56);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const)(p_func + 72));
  p_func += 64LL;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
  {
LABEL_155:
    v43 = __asan_report_load8(p_func);
    goto LABEL_156;
  }
  v41 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v40 + 1);
  if ( v41 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v41);
  *(_QWORD *)(v5 + 80) = 0LL;
LABEL_117:
  v6 = *(_QWORD *)(v5 + 72);
  if ( !v6 )
    goto LABEL_125;
  v42 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v42 )
  {
    v43 = v42 + 8;
    if ( !*(_BYTE *)(((v42 + 8) >> 3) + 0x7FFF8000) )
    {
      v42 = *(_QWORD *)(v42 + 8);
      goto LABEL_121;
    }
LABEL_156:
    v42 = v43;
    __asan_report_load8(v43);
LABEL_157:
    __asan_report_load8(v42);
    goto LABEL_158;
  }
LABEL_121:
  if ( !v42 )
  {
LABEL_124:
    operator delete((void *)v6);
    goto LABEL_125;
  }
  if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
    goto LABEL_157;
  if ( *(_QWORD *)v42 )
    goto LABEL_124;
LABEL_158:
  v50 = *(_BYTE *)(((v6 + 136) >> 3) + 0x7FFF8000);
  if ( v50 <= (char)((v6 - 120) & 7) && v50 )
  {
    __asan_report_load1(v6 + 136);
    goto LABEL_164;
  }
  v51 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
  if ( v51 <= (char)(v6 & 7) && v51 )
  {
LABEL_164:
    v52 = (struct _Unwind_Exception *)__asan_report_store1(v6);
    boost::_bi::storage2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>>::~storage2((boost::_bi::storage2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > > *const)(v6 - 240));
    boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::arg<1> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~handler_work((boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const)(v6 - 320));
    boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::arg<1> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,const boost::system::error_code&>,boost::_bi::list3<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::_bi::value<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::arg<1> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v6 - 384));
    __asan_handle_no_return(v6 - 384);
    _Unwind_Resume(v52);
  }
  *(_BYTE *)v6 = *(_BYTE *)(v6 + 136);
  *(_QWORD *)v42 = v6;
LABEL_125:
  if ( v56 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 0000000019B9F04A-0000000019B9F7F4
void __fastcall boost::asio::detail::wait_handler<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  boost::asio::detail::operation *v4; // rbp
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r12
  unsigned __int64 p_func; // rdi
  unsigned int *v9; // rax
  unsigned int *p_task_result; // rdi
  unsigned __int64 v11; // rdi
  __int64 (__fastcall **v12)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t); // rax
  unsigned __int64 v13; // rdi
  boost::asio::detail::operation *v14; // rax
  boost::asio::detail::scheduler_operation::func_type func; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // dl
  char v21; // al
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  boost::asio::detail::executor_binder_base<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor,false> *v28; // rbp
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  char v33; // dl
  char v34; // al
  struct _Unwind_Exception *v35; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-139h] BYREF
  char v38[312]; // [rsp+20h] [rbp-138h] BYREF

  v4 = base;
  v5 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_2(256LL);
    if ( v19 )
      v5 = v19;
  }
  v6 = v5 + 256;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 24 4 p:52 96 24 4 w:53 160 56 10 handler:64";
  *(_QWORD *)(v5 + 16) = boost::asio::detail::wait_handler<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234881024;
  v7[536862722] = -218959118;
  v7[536862723] = -234881024;
  v7[536862724] = -218959118;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  *(_QWORD *)(v5 + 32) = (char *)base + 40;
  *(_QWORD *)(v5 + 40) = base;
  *(_QWORD *)(v5 + 48) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[3].func_ >> 3) + 0x7FFF8000) )
  {
    p_func = (unsigned __int64)&base[3].func_;
    __asan_report_load8(&base[3].func_);
LABEL_44:
    v9 = (unsigned int *)__asan_report_load8(p_func);
    goto LABEL_45;
  }
  p_func = (unsigned __int64)base[3].func_;
  if ( !p_func )
    goto LABEL_7;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
    goto LABEL_44;
  v9 = *(unsigned int **)p_func;
  if ( *(_BYTE *)((*(_QWORD *)p_func >> 3) + 0x7FFF8000LL) )
  {
LABEL_45:
    p_task_result = v9;
    __asan_report_load8(v9);
    goto LABEL_46;
  }
  p_func = (*(__int64 (__fastcall **)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v9)(
             p_func,
             base,
             *(_QWORD *)p_func >> 3,
             a4);
LABEL_7:
  *(_QWORD *)(v5 + 96) = p_func;
  p_task_result = &base[3].task_result_;
  if ( *(char *)(((unsigned __int64)&base[3].task_result_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_46:
    __asan_report_load1(p_task_result);
    goto LABEL_47;
  }
  *(_BYTE *)(v5 + 104) = base[3].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    v11 = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
LABEL_48:
    v12 = (__int64 (__fastcall **)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))__asan_report_load8(v11);
    goto LABEL_49;
  }
  v11 = *(_QWORD *)&base[1].task_result_;
  if ( !v11 )
    goto LABEL_13;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    goto LABEL_48;
  v12 = *(__int64 (__fastcall ***)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v11;
  if ( *(_BYTE *)((*(_QWORD *)v11 >> 3) + 0x7FFF8000LL) )
  {
LABEL_49:
    v13 = (unsigned __int64)v12;
    __asan_report_load8(v12);
    goto LABEL_50;
  }
  v11 = (*v12)(v11, base, *(_QWORD *)v11 >> 3, a4);
LABEL_13:
  *(_QWORD *)(v5 + 112) = v11;
  v13 = (unsigned __int64)&base[1].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(v13);
LABEL_51:
    v14 = (boost::asio::detail::operation *)__asan_report_load8(v13);
    goto LABEL_52;
  }
  v13 = *(_QWORD *)&base[1].task_result_;
  if ( !v13 )
    goto LABEL_18;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    goto LABEL_51;
  v14 = *(boost::asio::detail::operation **)v13;
  if ( *(_BYTE *)((*(_QWORD *)v13 >> 3) + 0x7FFF8000LL) )
  {
LABEL_52:
    func = (boost::asio::detail::scheduler_operation::func_type)v14;
    __asan_report_load8(v14);
    goto LABEL_53;
  }
  v13 = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v14->next_)(
          v13,
          base,
          *(_QWORD *)v13 >> 3,
          a4);
LABEL_18:
  *(_QWORD *)(v5 + 160) = v13;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(func);
    goto LABEL_54;
  }
  *(_QWORD *)(v5 + 168) = base[2].next_;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[2].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[2].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(func);
    goto LABEL_55;
  }
  *(_QWORD *)(v5 + 176) = base[2].func_;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[2].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[2].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load8(func);
    goto LABEL_56;
  }
  *(_QWORD *)(v5 + 184) = *(_QWORD *)&base[2].task_result_;
  *(_QWORD *)&base[2].task_result_ = 0LL;
  base[2].func_ = 0LL;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[3];
  if ( *(_BYTE *)(((unsigned __int64)&base[3] >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_load8(func);
    goto LABEL_57;
  }
  *(_QWORD *)(v5 + 192) = base[3].next_;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load16(func);
LABEL_58:
    __asan_report_load8(func);
    goto LABEL_59;
  }
  *(__m128i *)(v5 + 200) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v5 + 32) = v5 + 160;
  v4 = *(boost::asio::detail::operation **)(v5 + 48);
  if ( !v4 )
    goto LABEL_30;
  func = (boost::asio::detail::scheduler_operation::func_type)&v4[3].func_;
  if ( *(_BYTE *)(((unsigned __int64)&v4[3].func_ >> 3) + 0x7FFF8000) )
    goto LABEL_58;
  func = v4[3].func_;
  if ( func )
  {
    if ( !*(_BYTE *)(((unsigned __int64)func >> 3) + 0x7FFF8000) )
    {
      v16 = *(_QWORD *)func + 8LL;
      if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)func + 8LL))();
        goto LABEL_29;
      }
LABEL_60:
      v18 = __asan_report_load8(v16);
      goto LABEL_61;
    }
LABEL_59:
    __asan_report_load8(func);
    goto LABEL_60;
  }
LABEL_29:
  boost::asio::detail::executor_binder_base<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor,false>::~executor_binder_base((boost::asio::detail::executor_binder_base<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor,false> *const)&v4[1].task_result_);
  *(_QWORD *)(v5 + 48) = 0LL;
LABEL_30:
  v4 = *(boost::asio::detail::operation **)(v5 + 40);
  if ( !v4 )
    goto LABEL_39;
  v17 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v17 )
  {
    v18 = v17 + 8;
    if ( !*(_BYTE *)(((v17 + 8) >> 3) + 0x7FFF8000) )
    {
      v17 = *(_QWORD *)(v17 + 8);
      goto LABEL_34;
    }
LABEL_61:
    v17 = v18;
    __asan_report_load8(v18);
    goto LABEL_62;
  }
LABEL_34:
  if ( v17 )
  {
    if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)v17 )
        goto LABEL_37;
LABEL_63:
      v20 = *(_BYTE *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000);
      if ( v20 <= (((unsigned __int8)v4 + 96) & 7) && v20 )
      {
        __asan_report_load1(&v4[4]);
      }
      else
      {
        v21 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
        if ( v21 > ((unsigned __int8)v4 & 7) || !v21 )
        {
          LOBYTE(v4->next_) = v4[4].next_;
          *(_QWORD *)v17 = v4;
          goto LABEL_38;
        }
      }
      __asan_report_store1(v4);
      goto LABEL_70;
    }
LABEL_62:
    __asan_report_load8(v17);
    goto LABEL_63;
  }
LABEL_37:
  operator delete(*(void **)(v5 + 40));
LABEL_38:
  *(_QWORD *)(v5 + 40) = 0LL;
LABEL_39:
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v5 + 112),
      (boost::asio::detail::binder1<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::system::error_code> *)(v5 + 160),
      &a);
LABEL_70:
  boost::asio::detail::executor_binder_base<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor,false>::~executor_binder_base((boost::asio::detail::executor_binder_base<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor,false> *const)(v5 + 160));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v5 + 96));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v5 + 112));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_98;
  }
  v23 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    v24 = v23;
    __asan_report_load8(v23);
LABEL_99:
    __asan_report_load8(v24);
    goto LABEL_100;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v24 = *(_QWORD *)(v5 + 112);
  if ( !v24 )
    goto LABEL_76;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  v25 = *(_QWORD *)v24 + 8LL;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    v26 = v25;
    __asan_report_load8(v25);
LABEL_101:
    __asan_report_load8(v26);
    goto LABEL_102;
  }
  (*(void (**)(void))(*(_QWORD *)v24 + 8LL))();
LABEL_76:
  v26 = *(_QWORD *)(v5 + 96);
  if ( !v26 )
    goto LABEL_80;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    goto LABEL_101;
  v27 = *(_QWORD *)v26 + 8LL;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    v29 = v27;
    __asan_report_load8(v27);
LABEL_103:
    __asan_report_load8(v29);
    goto LABEL_104;
  }
  (*(void (**)(void))(*(_QWORD *)v26 + 8LL))();
LABEL_80:
  v28 = *(boost::asio::detail::executor_binder_base<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor,false> **)(v5 + 48);
  if ( !v28 )
    goto LABEL_87;
  v29 = (unsigned __int64)&v28[2];
  if ( *(_BYTE *)(((unsigned __int64)&v28[2] >> 3) + 0x7FFF8000) )
    goto LABEL_103;
  v29 = (unsigned __int64)v28[2].executor_.impl_;
  if ( v29 )
  {
    if ( !*(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
    {
      v30 = *(_QWORD *)v29 + 8LL;
      if ( !*(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v29 + 8LL))();
        goto LABEL_86;
      }
LABEL_105:
      v32 = __asan_report_load8(v30);
      goto LABEL_106;
    }
LABEL_104:
    __asan_report_load8(v29);
    goto LABEL_105;
  }
LABEL_86:
  boost::asio::detail::executor_binder_base<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor,false>::~executor_binder_base(v28 + 1);
  *(_QWORD *)(v5 + 48) = 0LL;
LABEL_87:
  v6 = *(_QWORD *)(v5 + 40);
  if ( !v6 )
    goto LABEL_95;
  v31 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v31 )
  {
    v32 = v31 + 8;
    if ( !*(_BYTE *)(((v31 + 8) >> 3) + 0x7FFF8000) )
    {
      v31 = *(_QWORD *)(v31 + 8);
      goto LABEL_91;
    }
LABEL_106:
    v31 = v32;
    __asan_report_load8(v32);
LABEL_107:
    __asan_report_load8(v31);
    goto LABEL_108;
  }
LABEL_91:
  if ( !v31 )
  {
LABEL_94:
    operator delete((void *)v6);
    goto LABEL_95;
  }
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    goto LABEL_107;
  if ( *(_QWORD *)v31 )
    goto LABEL_94;
LABEL_108:
  v33 = *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000);
  if ( v33 <= (char)((v6 + 96) & 7) && v33 )
  {
    __asan_report_load1(v6 + 96);
    goto LABEL_114;
  }
  v34 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
  if ( v34 <= (char)(v6 & 7) && v34 )
  {
LABEL_114:
    v35 = (struct _Unwind_Exception *)__asan_report_store1(v6);
    boost::asio::detail::executor_binder_base<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor,false>::~executor_binder_base((boost::asio::detail::executor_binder_base<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor,false> *const)(v6 - 96));
    boost::asio::detail::handler_work<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v6 - 160));
    boost::asio::detail::wait_handler<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v6 - 224));
    __asan_handle_no_return(v6 - 224);
    _Unwind_Resume(v35);
  }
  *(_BYTE *)v6 = *(_BYTE *)(v6 + 96);
  *(_QWORD *)v31 = v6;
LABEL_95:
  if ( v38 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 0000000019BC3D5A-0000000019BC455A
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  boost::asio::detail::operation *v4; // rbp
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r12
  unsigned __int64 p_func; // rdi
  boost::asio::detail::scheduler_operation *v9; // rax
  unsigned __int64 p_task_result; // rdi
  boost::asio::detail::operation *v11; // rax
  boost::asio::detail::scheduler_operation::func_type func; // rdi
  char v13; // al
  char v14; // dl
  char v15; // al
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // dl
  char v21; // al
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  __int64 v28; // rbp
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  char v33; // dl
  char v34; // al
  struct _Unwind_Exception *v35; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-179h] BYREF
  char v38[376]; // [rsp+20h] [rbp-178h] BYREF

  v4 = base;
  v5 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_3(320LL);
    if ( v19 )
      v5 = v19;
  }
  v6 = v5 + 320;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 24 4 p:52 96 24 4 w:53 160 128 10 handler:64";
  *(_QWORD *)(v5 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234881024;
  v7[536862722] = -218959118;
  v7[536862723] = -234881024;
  v7[536862724] = -218959118;
  v7[536862729] = -202116109;
  *(_QWORD *)(v5 + 32) = (char *)base + 40;
  *(_QWORD *)(v5 + 40) = base;
  *(_QWORD *)(v5 + 48) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
    p_func = (unsigned __int64)&base[6].func_;
    __asan_report_load8(&base[6].func_);
LABEL_45:
    v9 = (boost::asio::detail::scheduler_operation *)__asan_report_load8(p_func);
    goto LABEL_46;
  }
  p_func = (unsigned __int64)base[6].func_;
  if ( !p_func )
    goto LABEL_7;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
    goto LABEL_45;
  v9 = *(boost::asio::detail::scheduler_operation **)p_func;
  if ( *(_BYTE *)((*(_QWORD *)p_func >> 3) + 0x7FFF8000LL) )
  {
LABEL_46:
    p_task_result = (unsigned __int64)v9;
    __asan_report_load8(v9);
    goto LABEL_47;
  }
  p_func = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v9->next_)(
             p_func,
             base,
             *(_QWORD *)p_func >> 3,
             a4);
LABEL_7:
  *(_QWORD *)(v5 + 96) = p_func;
  p_task_result = (unsigned __int64)&base[6].task_result_;
  if ( *(char *)(((unsigned __int64)&base[6].task_result_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_47:
    __asan_report_load1(p_task_result);
    goto LABEL_48;
  }
  *(_BYTE *)(v5 + 104) = base[6].task_result_;
  p_task_result = (unsigned __int64)&base[5];
  if ( *(_BYTE *)(((unsigned __int64)&base[5] >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(p_task_result);
LABEL_49:
    v11 = (boost::asio::detail::operation *)__asan_report_load8(p_task_result);
    goto LABEL_50;
  }
  p_task_result = (unsigned __int64)base[5].next_;
  if ( !p_task_result )
    goto LABEL_13;
  if ( *(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_49;
  v11 = *(boost::asio::detail::operation **)p_task_result;
  if ( *(_BYTE *)((*(_QWORD *)p_task_result >> 3) + 0x7FFF8000LL) )
  {
LABEL_50:
    func = (boost::asio::detail::scheduler_operation::func_type)v11;
    __asan_report_load8(v11);
    goto LABEL_51;
  }
  p_task_result = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v11->next_)(
                    p_task_result,
                    base,
                    *(_QWORD *)p_task_result >> 3,
                    a4);
LABEL_13:
  *(_QWORD *)(v5 + 112) = p_task_result;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[1].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_load8(func);
    goto LABEL_52;
  }
  *(_QWORD *)(v5 + 160) = *(_QWORD *)&base[1].task_result_;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(func);
LABEL_53:
    __asan_report_load4(func);
LABEL_54:
    __asan_report_load4(func);
LABEL_55:
    __asan_report_load4(func);
    goto LABEL_56;
  }
  *(_QWORD *)(v5 + 168) = base[2].next_;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[2].func_;
  v13 = *(_BYTE *)(((unsigned __int64)&base[2].func_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_53;
  *(_DWORD *)(v5 + 176) = base[2].func_;
  func = (boost::asio::detail::scheduler_operation::func_type)((char *)&base[2].func_ + 4);
  v14 = *(_BYTE *)((((unsigned __int64)&base[2].func_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base + 60) & 7) + 3) >= v14 && v14 )
    goto LABEL_54;
  *(_DWORD *)(v5 + 180) = HIDWORD(base[2].func_);
  func = (boost::asio::detail::scheduler_operation::func_type)&base[2].task_result_;
  v15 = *(_BYTE *)(((unsigned __int64)&base[2].task_result_ >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_55;
  *(_DWORD *)(v5 + 184) = base[2].task_result_;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[3];
  if ( *(_WORD *)(((unsigned __int64)&base[3] >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_load16(func);
    goto LABEL_57;
  }
  *(__m128i *)(v5 + 192) = _mm_loadu_si128((const __m128i *)&base[3]);
  func = (boost::asio::detail::scheduler_operation::func_type)&base[3].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[3].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(func);
    goto LABEL_58;
  }
  *(_QWORD *)(v5 + 208) = *(_QWORD *)&base[3].task_result_;
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_handler(
    (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v5 + 216),
    (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)&base[4]);
  func = (boost::asio::detail::scheduler_operation::func_type)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load16(func);
LABEL_59:
    __asan_report_load8(func);
    goto LABEL_60;
  }
  *(__m128i *)(v5 + 272) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v5 + 32) = v5 + 160;
  v4 = *(boost::asio::detail::operation **)(v5 + 48);
  if ( !v4 )
    goto LABEL_31;
  func = (boost::asio::detail::scheduler_operation::func_type)&v4[6].func_;
  if ( *(_BYTE *)(((unsigned __int64)&v4[6].func_ >> 3) + 0x7FFF8000) )
    goto LABEL_59;
  func = v4[6].func_;
  if ( func )
  {
    if ( !*(_BYTE *)(((unsigned __int64)func >> 3) + 0x7FFF8000) )
    {
      v16 = *(_QWORD *)func + 8LL;
      if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)func + 8LL))();
        goto LABEL_30;
      }
LABEL_61:
      v18 = __asan_report_load8(v16);
      goto LABEL_62;
    }
LABEL_60:
    __asan_report_load8(func);
    goto LABEL_61;
  }
LABEL_30:
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)&v4[4]);
  *(_QWORD *)(v5 + 48) = 0LL;
LABEL_31:
  v4 = *(boost::asio::detail::operation **)(v5 + 40);
  if ( !v4 )
    goto LABEL_40;
  v17 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v17 )
  {
    v18 = v17 + 8;
    if ( !*(_BYTE *)(((v17 + 8) >> 3) + 0x7FFF8000) )
    {
      v17 = *(_QWORD *)(v17 + 8);
      goto LABEL_35;
    }
LABEL_62:
    v17 = v18;
    __asan_report_load8(v18);
    goto LABEL_63;
  }
LABEL_35:
  if ( v17 )
  {
    if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)v17 )
        goto LABEL_38;
LABEL_64:
      v20 = *(_BYTE *)(((unsigned __int64)&v4[7] >> 3) + 0x7FFF8000);
      if ( v20 <= (((unsigned __int8)v4 - 88) & 7) && v20 )
      {
        __asan_report_load1(&v4[7]);
      }
      else
      {
        v21 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
        if ( v21 > ((unsigned __int8)v4 & 7) || !v21 )
        {
          LOBYTE(v4->next_) = v4[7].next_;
          *(_QWORD *)v17 = v4;
          goto LABEL_39;
        }
      }
      __asan_report_store1(v4);
      goto LABEL_71;
    }
LABEL_63:
    __asan_report_load8(v17);
    goto LABEL_64;
  }
LABEL_38:
  operator delete(*(void **)(v5 + 40));
LABEL_39:
  *(_QWORD *)(v5 + 40) = 0LL;
LABEL_40:
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v5 + 112),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::system::error_code> *)(v5 + 160),
      &a);
LABEL_71:
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v5 + 216));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v5 + 96));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v5 + 112));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_99;
  }
  v23 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    v24 = v23;
    __asan_report_load8(v23);
LABEL_100:
    __asan_report_load8(v24);
    goto LABEL_101;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v24 = *(_QWORD *)(v5 + 112);
  if ( !v24 )
    goto LABEL_77;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    goto LABEL_100;
  v25 = *(_QWORD *)v24 + 8LL;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    v26 = v25;
    __asan_report_load8(v25);
LABEL_102:
    __asan_report_load8(v26);
    goto LABEL_103;
  }
  (*(void (**)(void))(*(_QWORD *)v24 + 8LL))();
LABEL_77:
  v26 = *(_QWORD *)(v5 + 96);
  if ( !v26 )
    goto LABEL_81;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    goto LABEL_102;
  v27 = *(_QWORD *)v26 + 8LL;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    v29 = v27;
    __asan_report_load8(v27);
LABEL_104:
    __asan_report_load8(v29);
    goto LABEL_105;
  }
  (*(void (**)(void))(*(_QWORD *)v26 + 8LL))();
LABEL_81:
  v28 = *(_QWORD *)(v5 + 48);
  if ( !v28 )
    goto LABEL_88;
  v29 = v28 + 152;
  if ( *(_BYTE *)(((unsigned __int64)(v28 + 152) >> 3) + 0x7FFF8000) )
    goto LABEL_104;
  v29 = *(_QWORD *)(v28 + 152);
  if ( v29 )
  {
    if ( !*(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
    {
      v30 = *(_QWORD *)v29 + 8LL;
      if ( !*(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v29 + 8LL))();
        goto LABEL_87;
      }
LABEL_106:
      v32 = __asan_report_load8(v30);
      goto LABEL_107;
    }
LABEL_105:
    __asan_report_load8(v29);
    goto LABEL_106;
  }
LABEL_87:
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v28 + 96));
  *(_QWORD *)(v5 + 48) = 0LL;
LABEL_88:
  v6 = *(_QWORD *)(v5 + 40);
  if ( !v6 )
    goto LABEL_96;
  v31 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v31 )
  {
    v32 = v31 + 8;
    if ( !*(_BYTE *)(((v31 + 8) >> 3) + 0x7FFF8000) )
    {
      v31 = *(_QWORD *)(v31 + 8);
      goto LABEL_92;
    }
LABEL_107:
    v31 = v32;
    __asan_report_load8(v32);
LABEL_108:
    __asan_report_load8(v31);
    goto LABEL_109;
  }
LABEL_92:
  if ( !v31 )
  {
LABEL_95:
    operator delete((void *)v6);
    goto LABEL_96;
  }
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    goto LABEL_108;
  if ( *(_QWORD *)v31 )
    goto LABEL_95;
LABEL_109:
  v33 = *(_BYTE *)(((v6 + 168) >> 3) + 0x7FFF8000);
  if ( v33 <= (char)((v6 - 88) & 7) && v33 )
  {
    __asan_report_load1(v6 + 168);
    goto LABEL_115;
  }
  v34 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
  if ( v34 <= (char)(v6 & 7) && v34 )
  {
LABEL_115:
    v35 = (struct _Unwind_Exception *)__asan_report_store1(v6);
    boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v6 - 104));
    boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v6 - 224));
    boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v6 - 288));
    __asan_handle_no_return(v6 - 288);
    _Unwind_Resume(v35);
  }
  *(_BYTE *)v6 = *(_BYTE *)(v6 + 168);
  *(_QWORD *)v31 = v6;
LABEL_96:
  if ( v38 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 0000000019C155E4-0000000019C16294
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  _DWORD *v4; // r15
  boost::asio::detail::scheduler_operation::func_type p_task_result; // r12
  boost::asio::detail::operation *v6; // r13
  unsigned __int64 p_func; // rdi
  unsigned int *v8; // rax
  unsigned int *v9; // rdi
  __int64 (__fastcall **v10)(_QWORD, _QWORD, _QWORD, std::size_t); // rax
  unsigned __int64 v11; // rdi
  __m128i v12; // xmm0
  char v13; // al
  char v14; // dl
  char v15; // al
  unsigned __int64 next; // rdi
  boost::asio::detail::scheduler_operation::func_type func; // rax
  __int64 (**v18)(void); // rax
  boost::asio::detail::operation *v19; // rdi
  boost::asio::detail::scheduler_operation::func_type v20; // rax
  char v21; // al
  __int64 v22; // rbp
  unsigned __int64 v23; // rdx
  void *v24; // rdi
  __int64 v25; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // rbp
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  void *v35; // rdi
  struct _Unwind_Exception *v36; // rax
  struct _Unwind_Exception *v37; // rbp
  unsigned __int64 v38; // [rsp+8h] [rbp-260h]
  std::allocator<void> a; // [rsp+2Fh] [rbp-239h] BYREF
  char v41[568]; // [rsp+30h] [rbp-238h] BYREF

  v38 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v25 = __asan_stack_malloc_3(512LL);
    if ( v25 )
      v38 = v25;
  }
  *(_QWORD *)v38 = 1102416563LL;
  *(_QWORD *)(v38 + 8) = "3 48 24 4 p:52 112 24 4 w:53 176 272 10 handler:64";
  *(_QWORD *)(v38 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v4 = (_DWORD *)(v38 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  p_task_result = (boost::asio::detail::scheduler_operation::func_type)&base[1].task_result_;
  *(_QWORD *)(v38 + 48) = (char *)base + 40;
  *(_QWORD *)(v38 + 56) = base;
  *(_QWORD *)(v38 + 64) = base;
  v6 = (boost::asio::detail::operation *)((char *)base + 296);
  if ( *(_BYTE *)(((unsigned __int64)&base[12].func_ >> 3) + 0x7FFF8000) )
  {
    p_func = (unsigned __int64)&base[12].func_;
    __asan_report_load8(&base[12].func_);
LABEL_70:
    v8 = (unsigned int *)__asan_report_load8(p_func);
    goto LABEL_71;
  }
  p_func = (unsigned __int64)base[12].func_;
  if ( !p_func )
    goto LABEL_7;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v8 = *(unsigned int **)p_func;
  if ( *(_BYTE *)((*(_QWORD *)p_func >> 3) + 0x7FFF8000LL) )
  {
LABEL_71:
    v9 = v8;
    __asan_report_load8(v8);
    goto LABEL_72;
  }
  p_func = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD, std::size_t))v8)(
             p_func,
             boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete,
             *(_QWORD *)p_func >> 3,
             a4);
LABEL_7:
  *(_QWORD *)(v38 + 112) = p_func;
  v9 = &base[12].task_result_;
  if ( *(char *)(((unsigned __int64)&base[12].task_result_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_72:
    __asan_report_load1(v9);
    goto LABEL_73;
  }
  *(_BYTE *)(v38 + 120) = base[12].task_result_;
  v6 = (boost::asio::detail::operation *)((char *)base + 104);
  p_task_result = (boost::asio::detail::scheduler_operation::func_type)&base[9].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[9].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(p_task_result);
LABEL_74:
    v10 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, std::size_t))__asan_report_load8(p_task_result);
    goto LABEL_75;
  }
  p_task_result = base[9].func_;
  if ( !p_task_result )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v10 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, std::size_t))p_task_result;
  if ( *(_BYTE *)((*(_QWORD *)p_task_result >> 3) + 0x7FFF8000LL) )
  {
LABEL_75:
    __asan_report_load8(v10);
LABEL_76:
    v11 = (unsigned __int64)p_task_result;
    __asan_report_load8(p_task_result);
    goto LABEL_77;
  }
  p_task_result = (boost::asio::detail::scheduler_operation::func_type)(*v10)(
                                                                         base[9].func_,
                                                                         boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete,
                                                                         *(_QWORD *)p_task_result >> 3,
                                                                         a4);
LABEL_13:
  boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::asio::executor,std::allocator<void> > *const)&base[4].task_result_);
  if ( !p_task_result )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_76;
  v11 = *(_QWORD *)p_task_result + 8LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_load8(v11);
    goto LABEL_78;
  }
  (*(void (__fastcall **)(boost::asio::detail::scheduler_operation::func_type))(*(_QWORD *)p_task_result + 8LL))(p_task_result);
LABEL_17:
  v11 = (unsigned __int64)&base[1].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v11);
    goto LABEL_79;
  }
  *(_QWORD *)(v38 + 176) = *(_QWORD *)&base[1].task_result_;
  v11 = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_load8(v11);
    goto LABEL_80;
  }
  *(_QWORD *)(v38 + 184) = base[2].next_;
  v11 = (unsigned __int64)&base[2].func_;
  if ( *(_WORD *)(((unsigned __int64)&base[2].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_load16(v11);
LABEL_81:
    __asan_report_load4(v11);
LABEL_82:
    __asan_report_load4(v11);
    goto LABEL_83;
  }
  v12 = _mm_loadu_si128((const __m128i *)&base[2].func_);
  *(__m128i *)(v38 + 192) = v12;
  v11 = (unsigned __int64)&base[3];
  v13 = *(_BYTE *)(((unsigned __int64)&base[3] >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_81;
  *(_DWORD *)(v38 + 208) = base[3].next_;
  v11 = (unsigned __int64)&base[3].next_ + 4;
  v14 = *(_BYTE *)((((unsigned __int64)&base[3].next_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base + 76) & 7) + 3) >= v14 && v14 )
    goto LABEL_82;
  *(_DWORD *)(v38 + 212) = HIDWORD(base[3].next_);
  v11 = (unsigned __int64)&base[3].func_;
  if ( *(_WORD *)(((unsigned __int64)&base[3].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_load16(v11);
    goto LABEL_84;
  }
  *(__m128i *)(v38 + 216) = _mm_loadu_si128((const __m128i *)&base[3].func_);
  v11 = (unsigned __int64)&base[4];
  if ( *(_BYTE *)(((unsigned __int64)&base[4] >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(v11);
LABEL_85:
    __asan_report_load4(v11);
    goto LABEL_86;
  }
  *(_QWORD *)(v38 + 232) = base[4].next_;
  v11 = (unsigned __int64)&base[10];
  v15 = *(_BYTE *)(((unsigned __int64)&base[10] >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_85;
  *(_DWORD *)(v38 + 376) = base[10].next_;
  *(_QWORD *)(v38 + 240) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                         + 2;
  *(_QWORD *)(v38 + 248) = &`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                         + 2;
  v6 = base + 5;
  if ( *(_BYTE *)(((unsigned __int64)&base[5] >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    next = (unsigned __int64)v6;
    __asan_report_load8(v6);
    goto LABEL_87;
  }
  *(_QWORD *)(v38 + 256) = base[5].next_;
  *(_QWORD *)(v38 + 264) = 0LL;
  next = (unsigned __int64)&base[5].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[5].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_load8(next);
    goto LABEL_88;
  }
  func = base[5].func_;
  base[5].func_ = 0LL;
  *(_QWORD *)(v38 + 264) = func;
  base[5].next_ = 0LL;
  next = (unsigned __int64)&base[5].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[5].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    __asan_report_load8(next);
    goto LABEL_89;
  }
  *(_QWORD *)(v38 + 272) = *(_QWORD *)&base[5].task_result_;
  next = (unsigned __int64)&base[6];
  if ( *(_BYTE *)(((unsigned __int64)&base[6] >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_load8(next);
LABEL_90:
    v18 = (__int64 (**)(void))__asan_report_load8(next);
    goto LABEL_91;
  }
  next = (unsigned __int64)base[6].next_;
  if ( !next )
    goto LABEL_36;
  if ( *(_BYTE *)((next >> 3) + 0x7FFF8000) )
    goto LABEL_90;
  v18 = *(__int64 (***)(void))next;
  if ( *(_BYTE *)((*(_QWORD *)next >> 3) + 0x7FFF8000LL) )
  {
LABEL_91:
    v19 = (boost::asio::detail::operation *)v18;
    __asan_report_load8(v18);
    goto LABEL_92;
  }
  next = (*v18)();
LABEL_36:
  *(_QWORD *)(v38 + 280) = next;
  v19 = (boost::asio::detail::operation *)((char *)base + 152);
  if ( *(_BYTE *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_load8(v19);
    goto LABEL_93;
  }
  *(_QWORD *)(v38 + 288) = base[6].func_;
  v19 = (boost::asio::detail::operation *)((char *)base + 160);
  if ( *(_BYTE *)(((unsigned __int64)&base[6].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8(v19);
    goto LABEL_94;
  }
  *(_QWORD *)(v38 + 296) = *(_QWORD *)&base[6].task_result_;
  v19 = base + 7;
  if ( *(_BYTE *)(((unsigned __int64)&base[7] >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_load8(v19);
    goto LABEL_95;
  }
  *(_QWORD *)(v38 + 304) = base[7].next_;
  v19 = (boost::asio::detail::operation *)((char *)base + 176);
  if ( *(_BYTE *)(((unsigned __int64)&base[7].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_load8(v19);
    goto LABEL_96;
  }
  *(_QWORD *)(v38 + 312) = base[7].func_;
  v19 = (boost::asio::detail::operation *)((char *)base + 184);
  if ( *(_BYTE *)(((unsigned __int64)&base[7].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8(v19);
    goto LABEL_97;
  }
  *(_QWORD *)(v38 + 320) = *(_QWORD *)&base[7].task_result_;
  *(_QWORD *)&base[7].task_result_ = 0LL;
  v19 = base + 8;
  if ( *(char *)(((unsigned __int64)&base[8] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_97:
    __asan_report_load1(v19);
    goto LABEL_98;
  }
  *(_BYTE *)(v38 + 328) = base[8].next_;
  LOBYTE(base[8].next_) = 0;
  *(_QWORD *)(v38 + 248) = &`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                         + 2;
  v19 = (boost::asio::detail::operation *)((char *)base + 200);
  if ( *(_BYTE *)(((unsigned __int64)&base[8].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8(v19);
LABEL_99:
    __asan_report_load4(v19);
    goto LABEL_100;
  }
  v20 = base[8].func_;
  base[8].func_ = 0LL;
  *(_QWORD *)(v38 + 336) = v20;
  v19 = (boost::asio::detail::operation *)((char *)base + 208);
  v21 = *(_BYTE *)(((unsigned __int64)&base[8].task_result_ >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_99;
  *(_DWORD *)(v38 + 344) = base[8].task_result_;
  *(_QWORD *)(v38 + 248) = &`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>
                         + 2;
  v19 = base + 9;
  if ( *(_BYTE *)(((unsigned __int64)&base[9] >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(v19);
    goto LABEL_101;
  }
  *(_QWORD *)(v38 + 352) = base[9].next_;
  v19 = (boost::asio::detail::operation *)((char *)base + 224);
  if ( *(_BYTE *)(((unsigned __int64)&base[9].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8(v19);
    goto LABEL_102;
  }
  *(_QWORD *)(v38 + 360) = base[9].func_;
  base[9].func_ = 0LL;
  v19 = (boost::asio::detail::operation *)((char *)base + 232);
  if ( *(char *)(((unsigned __int64)&base[9].task_result_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_102:
    __asan_report_load1(v19);
    goto LABEL_103;
  }
  *(_BYTE *)(v38 + 368) = base[9].task_result_;
  LOBYTE(base[9].task_result_) = 0;
  *(_QWORD *)(v38 + 240) = &`vtable for'boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>
                         + 2;
  v19 = (boost::asio::detail::operation *)((char *)base + 248);
  if ( *(_BYTE *)(((unsigned __int64)&base[10].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    __asan_report_load8(v19);
    goto LABEL_104;
  }
  *(_QWORD *)(v38 + 384) = base[10].func_;
  v19 = (boost::asio::detail::operation *)((char *)base + 256);
  if ( *(_BYTE *)(((unsigned __int64)&base[10].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_load8(v19);
    goto LABEL_105;
  }
  *(_QWORD *)(v38 + 392) = *(_QWORD *)&base[10].task_result_;
  v19 = base + 11;
  if ( *(_BYTE *)(((unsigned __int64)&base[11] >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    __asan_report_load8(v19);
    goto LABEL_106;
  }
  *(_QWORD *)(v38 + 400) = base[11].next_;
  v19 = (boost::asio::detail::operation *)((char *)base + 272);
  if ( *(_WORD *)(((unsigned __int64)&base[11].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load16(v19);
    goto LABEL_107;
  }
  *(__m128i *)(v38 + 408) = _mm_loadu_si128((const __m128i *)&base[11].func_);
  v19 = base + 12;
  if ( *(_BYTE *)(((unsigned __int64)&base[12] >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_load8(v19);
    goto LABEL_108;
  }
  *(_QWORD *)(v38 + 424) = base[12].next_;
  v19 = base + 1;
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_load16(v19);
    goto LABEL_109;
  }
  *(__m128i *)(v38 + 432) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v38 + 48) = v38 + 176;
  v22 = *(_QWORD *)(v38 + 64);
  if ( v22 )
  {
    v19 = (boost::asio::detail::operation *)(v22 + 296);
    if ( !*(_BYTE *)(((unsigned __int64)(v22 + 296) >> 3) + 0x7FFF8000) )
    {
      v19 = *(boost::asio::detail::operation **)(v22 + 296);
      if ( !v19 )
        goto LABEL_60;
      if ( !*(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        v23 = (unsigned __int64)&v19->next_->func_;
        if ( !*(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        {
          ((void (*)(void))v19->next_->func_)();
LABEL_60:
          if ( !*(_BYTE *)(((unsigned __int64)(v22 + 104) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v22 + 104) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                                   + 2;
            boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v22 + 224));
            if ( !*(_BYTE *)(((unsigned __int64)(v22 + 112) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v22 + 112) = &`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>
                                     + 2;
              boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base((boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::asio::executor,std::allocator<void> > *const)(v22 + 112));
              *(_QWORD *)(v38 + 64) = 0LL;
              goto LABEL_63;
            }
LABEL_113:
            *(double *)v12.m128i_i64 = __asan_report_store8();
            goto LABEL_114;
          }
LABEL_112:
          __asan_report_store8();
          goto LABEL_113;
        }
LABEL_111:
        __asan_report_load8(v23);
        goto LABEL_112;
      }
LABEL_110:
      __asan_report_load8(v19);
      goto LABEL_111;
    }
LABEL_109:
    __asan_report_load8(v19);
    goto LABEL_110;
  }
LABEL_63:
  v24 = *(void **)(v38 + 56);
  if ( v24 )
  {
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>(
      v24,
      0x138uLL,
      (boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v38 + 48) + 64LL));
    *(_QWORD *)(v38 + 56) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v38 + 128),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > >,boost::system::error_code> *)(v38 + 176),
      &a);
LABEL_114:
  *(_QWORD *)(v38 + 240) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                         + 2;
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v38 + 360));
  *(_QWORD *)(v38 + 248) = &`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>
                         + 2;
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base((boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::asio::executor,std::allocator<void> > *const)(v38 + 248));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v38 + 112));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v38 + 128));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_138;
  }
  v27 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
LABEL_138:
    v28 = v27;
    __asan_report_load8(v27);
LABEL_139:
    __asan_report_load8(v28);
    goto LABEL_140;
  }
  (*((void (__fastcall **)(double))impl->_vptr_impl_base + 4))(*(double *)v12.m128i_i64);
  v28 = *(_QWORD *)(v38 + 128);
  if ( !v28 )
    goto LABEL_120;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    goto LABEL_139;
  v29 = *(_QWORD *)v28 + 8LL;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_140:
    v30 = v29;
    __asan_report_load8(v29);
LABEL_141:
    __asan_report_load8(v30);
    goto LABEL_142;
  }
  (*(void (**)(void))(*(_QWORD *)v28 + 8LL))();
LABEL_120:
  v30 = *(_QWORD *)(v38 + 112);
  if ( !v30 )
    goto LABEL_124;
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    goto LABEL_141;
  v31 = *(_QWORD *)v30 + 8LL;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
LABEL_142:
    v33 = v31;
    __asan_report_load8(v31);
LABEL_143:
    __asan_report_load8(v33);
LABEL_144:
    __asan_report_load8(v33);
    goto LABEL_145;
  }
  (*(void (**)(void))(*(_QWORD *)v30 + 8LL))();
LABEL_124:
  v32 = *(_QWORD *)(v38 + 64);
  if ( !v32 )
    goto LABEL_133;
  v33 = v32 + 296;
  if ( *(_BYTE *)(((unsigned __int64)(v32 + 296) >> 3) + 0x7FFF8000) )
    goto LABEL_143;
  v33 = *(_QWORD *)(v32 + 296);
  if ( !v33 )
    goto LABEL_130;
  if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
    goto LABEL_144;
  v34 = *(_QWORD *)v33 + 8LL;
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
  {
LABEL_145:
    __asan_report_load8(v34);
    goto LABEL_146;
  }
  (*(void (**)(void))(*(_QWORD *)v33 + 8LL))();
LABEL_130:
  if ( *(_BYTE *)(((unsigned __int64)(v32 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_146:
    __asan_report_store8();
LABEL_147:
    __asan_report_store8();
    v37 = v36;
    *(_QWORD *)(v38 + 240) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                           + 2;
    boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v38 + 360));
    *(_QWORD *)(v38 + 248) = &`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>
                           + 2;
    boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base((boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::asio::executor,std::allocator<void> > *const)(v38 + 248));
    boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v38 + 112));
    boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v38 + 48));
    __asan_handle_no_return(v38 + 48);
    _Unwind_Resume(v37);
  }
  *(_QWORD *)(v32 + 104) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                         + 2;
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v32 + 224));
  if ( *(_BYTE *)(((unsigned __int64)(v32 + 112) >> 3) + 0x7FFF8000) )
    goto LABEL_147;
  *(_QWORD *)(v32 + 112) = &`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>
                         + 2;
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base((boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::asio::executor,std::allocator<void> > *const)(v32 + 112));
  *(_QWORD *)(v38 + 64) = 0LL;
LABEL_133:
  v35 = *(void **)(v38 + 56);
  if ( v35 )
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>(
      v35,
      0x138uLL,
      (boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v38 + 48) + 64LL));
  if ( v41 == (char *)v38 )
  {
    *(_QWORD *)((v38 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v38 = 1172321806LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v38 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 0000000019BCDF0E-0000000019BCE6E2
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  boost::asio::detail::operation *v4; // rbp
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r12
  unsigned __int64 p_func; // rdi
  boost::asio::detail::scheduler_operation *v9; // rax
  unsigned __int64 p_task_result; // rdi
  boost::asio::detail::operation *v11; // rax
  boost::asio::detail::scheduler_operation::func_type func; // rdi
  char v13; // dl
  char v14; // al
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // dl
  char v20; // al
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  __int64 v27; // rbp
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  char v32; // dl
  char v33; // al
  struct _Unwind_Exception *v34; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-179h] BYREF
  char v37[376]; // [rsp+20h] [rbp-178h] BYREF

  v4 = base;
  v5 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_3(320LL);
    if ( v18 )
      v5 = v18;
  }
  v6 = v5 + 320;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 24 4 p:52 96 24 4 w:53 160 128 10 handler:64";
  *(_QWORD *)(v5 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234881024;
  v7[536862722] = -218959118;
  v7[536862723] = -234881024;
  v7[536862724] = -218959118;
  v7[536862729] = -202116109;
  *(_QWORD *)(v5 + 32) = (char *)base + 40;
  *(_QWORD *)(v5 + 40) = base;
  *(_QWORD *)(v5 + 48) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
    p_func = (unsigned __int64)&base[6].func_;
    __asan_report_load8(&base[6].func_);
LABEL_43:
    v9 = (boost::asio::detail::scheduler_operation *)__asan_report_load8(p_func);
    goto LABEL_44;
  }
  p_func = (unsigned __int64)base[6].func_;
  if ( !p_func )
    goto LABEL_7;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
    goto LABEL_43;
  v9 = *(boost::asio::detail::scheduler_operation **)p_func;
  if ( *(_BYTE *)((*(_QWORD *)p_func >> 3) + 0x7FFF8000LL) )
  {
LABEL_44:
    p_task_result = (unsigned __int64)v9;
    __asan_report_load8(v9);
    goto LABEL_45;
  }
  p_func = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v9->next_)(
             p_func,
             base,
             *(_QWORD *)p_func >> 3,
             a4);
LABEL_7:
  *(_QWORD *)(v5 + 96) = p_func;
  p_task_result = (unsigned __int64)&base[6].task_result_;
  if ( *(char *)(((unsigned __int64)&base[6].task_result_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_45:
    __asan_report_load1(p_task_result);
    goto LABEL_46;
  }
  *(_BYTE *)(v5 + 104) = base[6].task_result_;
  p_task_result = (unsigned __int64)&base[5];
  if ( *(_BYTE *)(((unsigned __int64)&base[5] >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(p_task_result);
LABEL_47:
    v11 = (boost::asio::detail::operation *)__asan_report_load8(p_task_result);
    goto LABEL_48;
  }
  p_task_result = (unsigned __int64)base[5].next_;
  if ( !p_task_result )
    goto LABEL_13;
  if ( *(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_47;
  v11 = *(boost::asio::detail::operation **)p_task_result;
  if ( *(_BYTE *)((*(_QWORD *)p_task_result >> 3) + 0x7FFF8000LL) )
  {
LABEL_48:
    func = (boost::asio::detail::scheduler_operation::func_type)v11;
    __asan_report_load8(v11);
    goto LABEL_49;
  }
  p_task_result = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v11->next_)(
                    p_task_result,
                    base,
                    *(_QWORD *)p_task_result >> 3,
                    a4);
LABEL_13:
  *(_QWORD *)(v5 + 112) = p_task_result;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[1].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(func);
    goto LABEL_50;
  }
  *(_QWORD *)(v5 + 160) = *(_QWORD *)&base[1].task_result_;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(func);
LABEL_51:
    __asan_report_load4(func);
LABEL_52:
    __asan_report_load4(func);
    goto LABEL_53;
  }
  *(_QWORD *)(v5 + 168) = base[2].next_;
  func = (boost::asio::detail::scheduler_operation::func_type)((char *)&base[2].func_ + 4);
  v13 = *(_BYTE *)((((unsigned __int64)&base[2].func_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base + 60) & 7) + 3) >= v13 && v13 )
    goto LABEL_51;
  *(_DWORD *)(v5 + 180) = HIDWORD(base[2].func_);
  func = (boost::asio::detail::scheduler_operation::func_type)&base[2].task_result_;
  v14 = *(_BYTE *)(((unsigned __int64)&base[2].task_result_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_52;
  *(_DWORD *)(v5 + 184) = base[2].task_result_;
  func = (boost::asio::detail::scheduler_operation::func_type)&base[3];
  if ( *(_WORD *)(((unsigned __int64)&base[3] >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load16(func);
    goto LABEL_54;
  }
  *(__m128i *)(v5 + 192) = _mm_loadu_si128((const __m128i *)&base[3]);
  func = (boost::asio::detail::scheduler_operation::func_type)&base[3].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[3].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(func);
    goto LABEL_55;
  }
  *(_QWORD *)(v5 + 208) = *(_QWORD *)&base[3].task_result_;
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_handler(
    (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v5 + 216),
    (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)&base[4]);
  func = (boost::asio::detail::scheduler_operation::func_type)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load16(func);
LABEL_56:
    __asan_report_load8(func);
    goto LABEL_57;
  }
  *(__m128i *)(v5 + 272) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v5 + 32) = v5 + 160;
  v4 = *(boost::asio::detail::operation **)(v5 + 48);
  if ( !v4 )
    goto LABEL_29;
  func = (boost::asio::detail::scheduler_operation::func_type)&v4[6].func_;
  if ( *(_BYTE *)(((unsigned __int64)&v4[6].func_ >> 3) + 0x7FFF8000) )
    goto LABEL_56;
  func = v4[6].func_;
  if ( func )
  {
    if ( !*(_BYTE *)(((unsigned __int64)func >> 3) + 0x7FFF8000) )
    {
      v15 = *(_QWORD *)func + 8LL;
      if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)func + 8LL))();
        goto LABEL_28;
      }
LABEL_58:
      v17 = __asan_report_load8(v15);
      goto LABEL_59;
    }
LABEL_57:
    __asan_report_load8(func);
    goto LABEL_58;
  }
LABEL_28:
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)&v4[4]);
  *(_QWORD *)(v5 + 48) = 0LL;
LABEL_29:
  v4 = *(boost::asio::detail::operation **)(v5 + 40);
  if ( !v4 )
    goto LABEL_38;
  v16 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v16 )
  {
    v17 = v16 + 8;
    if ( !*(_BYTE *)(((v16 + 8) >> 3) + 0x7FFF8000) )
    {
      v16 = *(_QWORD *)(v16 + 8);
      goto LABEL_33;
    }
LABEL_59:
    v16 = v17;
    __asan_report_load8(v17);
    goto LABEL_60;
  }
LABEL_33:
  if ( v16 )
  {
    if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)v16 )
        goto LABEL_36;
LABEL_61:
      v19 = *(_BYTE *)(((unsigned __int64)&v4[7] >> 3) + 0x7FFF8000);
      if ( v19 <= (((unsigned __int8)v4 - 88) & 7) && v19 )
      {
        __asan_report_load1(&v4[7]);
      }
      else
      {
        v20 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
        if ( v20 > ((unsigned __int8)v4 & 7) || !v20 )
        {
          LOBYTE(v4->next_) = v4[7].next_;
          *(_QWORD *)v16 = v4;
          goto LABEL_37;
        }
      }
      __asan_report_store1(v4);
      goto LABEL_68;
    }
LABEL_60:
    __asan_report_load8(v16);
    goto LABEL_61;
  }
LABEL_36:
  operator delete(*(void **)(v5 + 40));
LABEL_37:
  *(_QWORD *)(v5 + 40) = 0LL;
LABEL_38:
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v5 + 112),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::system::error_code> *)(v5 + 160),
      &a);
LABEL_68:
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v5 + 216));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v5 + 96));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v5 + 112));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_96;
  }
  v22 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    v23 = v22;
    __asan_report_load8(v22);
LABEL_97:
    __asan_report_load8(v23);
    goto LABEL_98;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v23 = *(_QWORD *)(v5 + 112);
  if ( !v23 )
    goto LABEL_74;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
    goto LABEL_97;
  v24 = *(_QWORD *)v23 + 8LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    v25 = v24;
    __asan_report_load8(v24);
LABEL_99:
    __asan_report_load8(v25);
    goto LABEL_100;
  }
  (*(void (**)(void))(*(_QWORD *)v23 + 8LL))();
LABEL_74:
  v25 = *(_QWORD *)(v5 + 96);
  if ( !v25 )
    goto LABEL_78;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    v28 = v26;
    __asan_report_load8(v26);
LABEL_101:
    __asan_report_load8(v28);
    goto LABEL_102;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_78:
  v27 = *(_QWORD *)(v5 + 48);
  if ( !v27 )
    goto LABEL_85;
  v28 = v27 + 152;
  if ( *(_BYTE *)(((unsigned __int64)(v27 + 152) >> 3) + 0x7FFF8000) )
    goto LABEL_101;
  v28 = *(_QWORD *)(v27 + 152);
  if ( v28 )
  {
    if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    {
      v29 = *(_QWORD *)v28 + 8LL;
      if ( !*(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v28 + 8LL))();
        goto LABEL_84;
      }
LABEL_103:
      v31 = __asan_report_load8(v29);
      goto LABEL_104;
    }
LABEL_102:
    __asan_report_load8(v28);
    goto LABEL_103;
  }
LABEL_84:
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v27 + 96));
  *(_QWORD *)(v5 + 48) = 0LL;
LABEL_85:
  v6 = *(_QWORD *)(v5 + 40);
  if ( !v6 )
    goto LABEL_93;
  v30 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v30 )
  {
    v31 = v30 + 8;
    if ( !*(_BYTE *)(((v30 + 8) >> 3) + 0x7FFF8000) )
    {
      v30 = *(_QWORD *)(v30 + 8);
      goto LABEL_89;
    }
LABEL_104:
    v30 = v31;
    __asan_report_load8(v31);
LABEL_105:
    __asan_report_load8(v30);
    goto LABEL_106;
  }
LABEL_89:
  if ( !v30 )
  {
LABEL_92:
    operator delete((void *)v6);
    goto LABEL_93;
  }
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    goto LABEL_105;
  if ( *(_QWORD *)v30 )
    goto LABEL_92;
LABEL_106:
  v32 = *(_BYTE *)(((v6 + 168) >> 3) + 0x7FFF8000);
  if ( v32 <= (char)((v6 - 88) & 7) && v32 )
  {
    __asan_report_load1(v6 + 168);
    goto LABEL_112;
  }
  v33 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
  if ( v33 <= (char)(v6 & 7) && v33 )
  {
LABEL_112:
    v34 = (struct _Unwind_Exception *)__asan_report_store1(v6);
    boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v6 - 104));
    boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v6 - 224));
    boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v6 - 288));
    __asan_handle_no_return(v6 - 288);
    _Unwind_Resume(v34);
  }
  *(_BYTE *)v6 = *(_BYTE *)(v6 + 168);
  *(_QWORD *)v30 = v6;
LABEL_93:
  if ( v37 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 0000000019C8BE49-0000000019C8C61C
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r12
  unsigned __int64 p_func; // rdi
  unsigned int *v7; // rax
  unsigned int *p_task_result; // rdi
  unsigned __int64 v9; // rdi
  __m128i v10; // xmm0
  char v11; // al
  char v12; // dl
  char v13; // al
  __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  void *v16; // rdi
  __int64 v17; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  void *v27; // rdi
  struct _Unwind_Exception *v28; // rax
  struct _Unwind_Exception *v29; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-259h] BYREF
  char v32[600]; // [rsp+20h] [rbp-258h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_4(544LL);
    if ( v17 )
      v4 = v17;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 24 4 p:52 96 24 4 w:53 160 320 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862735] = -202116109;
  v5[536862736] = -202116109;
  *(_QWORD *)(v4 + 32) = (char *)base + 40;
  *(_QWORD *)(v4 + 40) = base;
  *(_QWORD *)(v4 + 48) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[14].func_ >> 3) + 0x7FFF8000) )
  {
    p_func = (unsigned __int64)&base[14].func_;
    __asan_report_load8(&base[14].func_);
LABEL_36:
    v7 = (unsigned int *)__asan_report_load8(p_func);
    goto LABEL_37;
  }
  p_func = (unsigned __int64)base[14].func_;
  if ( !p_func )
    goto LABEL_7;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
    goto LABEL_36;
  v7 = *(unsigned int **)p_func;
  if ( *(_BYTE *)((*(_QWORD *)p_func >> 3) + 0x7FFF8000LL) )
  {
LABEL_37:
    p_task_result = v7;
    __asan_report_load8(v7);
    goto LABEL_38;
  }
  p_func = (*(__int64 (__fastcall **)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v7)(
             p_func,
             base,
             *(_QWORD *)p_func >> 3,
             a4);
LABEL_7:
  *(_QWORD *)(v4 + 96) = p_func;
  p_task_result = &base[14].task_result_;
  if ( *(char *)(((unsigned __int64)&base[14].task_result_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_38:
    __asan_report_load1(p_task_result);
    goto LABEL_39;
  }
  *(_BYTE *)(v4 + 104) = base[14].task_result_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&base[4].func_);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    v9 = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
    goto LABEL_40;
  }
  *(_QWORD *)(v4 + 160) = *(_QWORD *)&base[1].task_result_;
  v9 = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(v9);
    goto LABEL_41;
  }
  *(_QWORD *)(v4 + 168) = base[2].next_;
  v9 = (unsigned __int64)&base[2].func_;
  if ( *(_WORD *)(((unsigned __int64)&base[2].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load16(v9);
LABEL_42:
    __asan_report_load4(v9);
LABEL_43:
    __asan_report_load4(v9);
    goto LABEL_44;
  }
  v10 = _mm_loadu_si128((const __m128i *)&base[2].func_);
  *(__m128i *)(v4 + 176) = v10;
  v9 = (unsigned __int64)&base[3];
  v11 = *(_BYTE *)(((unsigned __int64)&base[3] >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_42;
  *(_DWORD *)(v4 + 192) = base[3].next_;
  v9 = (unsigned __int64)&base[3].next_ + 4;
  v12 = *(_BYTE *)((((unsigned __int64)&base[3].next_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base + 76) & 7) + 3) >= v12 && v12 )
    goto LABEL_43;
  *(_DWORD *)(v4 + 196) = HIDWORD(base[3].next_);
  v9 = (unsigned __int64)&base[3].func_;
  if ( *(_WORD *)(((unsigned __int64)&base[3].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load16(v9);
    goto LABEL_45;
  }
  *(__m128i *)(v4 + 200) = _mm_loadu_si128((const __m128i *)&base[3].func_);
  v9 = (unsigned __int64)&base[4];
  if ( *(_BYTE *)(((unsigned __int64)&base[4] >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_load8(v9);
LABEL_46:
    __asan_report_load4(v9);
    goto LABEL_47;
  }
  *(_QWORD *)(v4 + 216) = base[4].next_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 224),
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)&base[4].func_);
  v9 = (unsigned __int64)&base[14];
  v13 = *(_BYTE *)(((unsigned __int64)&base[14] >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_46;
  *(_DWORD *)(v4 + 456) = base[14].next_;
  *(_QWORD *)(v4 + 224) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  v9 = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load16(v9);
    goto LABEL_48;
  }
  *(__m128i *)(v4 + 464) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v4 + 32) = v4 + 160;
  v14 = *(_QWORD *)(v4 + 48);
  if ( v14 )
  {
    v9 = v14 + 344;
    if ( !*(_BYTE *)(((unsigned __int64)(v14 + 344) >> 3) + 0x7FFF8000) )
    {
      v9 = *(_QWORD *)(v14 + 344);
      if ( !v9 )
        goto LABEL_26;
      if ( !*(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        v15 = *(_QWORD *)v9 + 8LL;
        if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          (*(void (**)(void))(*(_QWORD *)v9 + 8LL))();
LABEL_26:
          if ( !*(_BYTE *)(((unsigned __int64)(v14 + 104) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v14 + 104) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                   + 2;
            boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v14 + 320));
            if ( !*(_BYTE *)(((unsigned __int64)(v14 + 112) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v14 + 112) = &`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                     + 2;
              boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base((boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v14 + 112));
              *(_QWORD *)(v4 + 48) = 0LL;
              goto LABEL_29;
            }
LABEL_52:
            *(double *)v10.m128i_i64 = __asan_report_store8();
            goto LABEL_53;
          }
LABEL_51:
          __asan_report_store8();
          goto LABEL_52;
        }
LABEL_50:
        __asan_report_load8(v15);
        goto LABEL_51;
      }
LABEL_49:
      __asan_report_load8(v9);
      goto LABEL_50;
    }
LABEL_48:
    __asan_report_load8(v9);
    goto LABEL_49;
  }
LABEL_29:
  v16 = *(void **)(v4 + 40);
  if ( v16 )
  {
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v16,
      0x168uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 32) + 64LL));
    *(_QWORD *)(v4 + 40) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v4 + 112),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::system::error_code> *)(v4 + 160),
      &a);
LABEL_53:
  *(_QWORD *)(v4 + 224) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                        + 2;
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v4 + 440));
  *(_QWORD *)(v4 + 232) = &`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                        + 2;
  boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base((boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 232));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 96));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v4 + 112));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_77;
  }
  v19 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    v20 = v19;
    __asan_report_load8(v19);
LABEL_78:
    __asan_report_load8(v20);
    goto LABEL_79;
  }
  (*((void (__fastcall **)(double))impl->_vptr_impl_base + 4))(*(double *)v10.m128i_i64);
  v20 = *(_QWORD *)(v4 + 112);
  if ( !v20 )
    goto LABEL_59;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_78;
  v21 = *(_QWORD *)v20 + 8LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    v22 = v21;
    __asan_report_load8(v21);
LABEL_80:
    __asan_report_load8(v22);
    goto LABEL_81;
  }
  (*(void (**)(void))(*(_QWORD *)v20 + 8LL))();
LABEL_59:
  v22 = *(_QWORD *)(v4 + 96);
  if ( !v22 )
    goto LABEL_63;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  v23 = *(_QWORD *)v22 + 8LL;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    v25 = v23;
    __asan_report_load8(v23);
LABEL_82:
    __asan_report_load8(v25);
LABEL_83:
    __asan_report_load8(v25);
    goto LABEL_84;
  }
  (*(void (**)(void))(*(_QWORD *)v22 + 8LL))();
LABEL_63:
  v24 = *(_QWORD *)(v4 + 48);
  if ( !v24 )
    goto LABEL_72;
  v25 = v24 + 344;
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 344) >> 3) + 0x7FFF8000) )
    goto LABEL_82;
  v25 = *(_QWORD *)(v24 + 344);
  if ( !v25 )
    goto LABEL_69;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_83;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(v26);
    goto LABEL_85;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_69:
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_store8();
LABEL_86:
    __asan_report_store8();
    v29 = v28;
    *(_QWORD *)(v4 + 224) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                          + 2;
    boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v4 + 440));
    *(_QWORD *)(v4 + 232) = &`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                          + 2;
    boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base((boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 232));
    boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 96));
    boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 32));
    __asan_handle_no_return(v4 + 32);
    _Unwind_Resume(v29);
  }
  *(_QWORD *)(v24 + 104) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                         + 2;
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v24 + 320));
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 112) >> 3) + 0x7FFF8000) )
    goto LABEL_86;
  *(_QWORD *)(v24 + 112) = &`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                         + 2;
  boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base((boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v24 + 112));
  *(_QWORD *)(v4 + 48) = 0LL;
LABEL_72:
  v27 = *(void **)(v4 + 40);
  if ( v27 )
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v27,
      0x168uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 32) + 64LL));
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF803C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 46: range 0000000019C9E68E-0000000019C9EE98
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r12
  unsigned __int64 next; // rdi
  boost::asio::detail::scheduler_operation *v7; // rax
  boost::asio::detail::scheduler_operation::func_type *p_func; // rdi
  unsigned __int64 p_task_result; // rdi
  char v10; // al
  char v11; // dl
  __m128i v12; // xmm0
  char v13; // al
  __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  void *v16; // rdi
  __int64 v17; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  void *v27; // rdi
  struct _Unwind_Exception *v28; // rax
  struct _Unwind_Exception *v29; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-299h] BYREF
  char v32[664]; // [rsp+20h] [rbp-298h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_4(608LL);
    if ( v17 )
      v4 = v17;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 24 4 p:52 112 24 4 w:53 176 360 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  *(_QWORD *)(v4 + 48) = (char *)base + 40;
  *(_QWORD *)(v4 + 56) = base;
  *(_QWORD *)(v4 + 64) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[16] >> 3) + 0x7FFF8000) )
  {
    next = (unsigned __int64)&base[16];
    __asan_report_load8(&base[16]);
LABEL_35:
    v7 = (boost::asio::detail::scheduler_operation *)__asan_report_load8(next);
    goto LABEL_36;
  }
  next = (unsigned __int64)base[16].next_;
  if ( !next )
    goto LABEL_7;
  if ( *(_BYTE *)((next >> 3) + 0x7FFF8000) )
    goto LABEL_35;
  v7 = *(boost::asio::detail::scheduler_operation **)next;
  if ( *(_BYTE *)((*(_QWORD *)next >> 3) + 0x7FFF8000LL) )
  {
LABEL_36:
    p_func = (boost::asio::detail::scheduler_operation::func_type *)v7;
    __asan_report_load8(v7);
    goto LABEL_37;
  }
  next = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v7->next_)(
           next,
           base,
           *(_QWORD *)next >> 3,
           a4);
LABEL_7:
  *(_QWORD *)(v4 + 112) = next;
  p_func = &base[16].func_;
  if ( *(char *)(((unsigned __int64)&base[16].func_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_37:
    __asan_report_load1(p_func);
    goto LABEL_38;
  }
  *(_BYTE *)(v4 + 120) = base[16].func_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&base[6]);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    p_task_result = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
    goto LABEL_39;
  }
  *(_QWORD *)(v4 + 176) = *(_QWORD *)&base[1].task_result_;
  p_task_result = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(p_task_result);
LABEL_40:
    __asan_report_load4(p_task_result);
LABEL_41:
    __asan_report_load4(p_task_result);
    goto LABEL_42;
  }
  *(_QWORD *)(v4 + 184) = base[2].next_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *const)(v4 + 192),
    (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *)&base[2].func_);
  p_task_result = (unsigned __int64)&base[4].task_result_;
  v10 = *(_BYTE *)(((unsigned __int64)&base[4].task_result_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_40;
  *(_DWORD *)(v4 + 248) = base[4].task_result_;
  p_task_result = (unsigned __int64)(&base[4].task_result_ + 1);
  v11 = *(_BYTE *)(((unsigned __int64)(&base[4].task_result_ + 1) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base + 116) & 7) + 3) >= v11 && v11 )
    goto LABEL_41;
  *(_DWORD *)(v4 + 252) = *(&base[4].task_result_ + 1);
  p_task_result = (unsigned __int64)&base[5];
  if ( *(_WORD *)(((unsigned __int64)&base[5] >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load16(p_task_result);
    goto LABEL_43;
  }
  v12 = _mm_loadu_si128((const __m128i *)&base[5]);
  *(__m128i *)(v4 + 256) = v12;
  p_task_result = (unsigned __int64)&base[5].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[5].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_task_result);
LABEL_44:
    __asan_report_load4(p_task_result);
    goto LABEL_45;
  }
  *(_QWORD *)(v4 + 272) = *(_QWORD *)&base[5].task_result_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 280),
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)&base[6]);
  p_task_result = (unsigned __int64)&base[15].task_result_;
  v13 = *(_BYTE *)(((unsigned __int64)&base[15].task_result_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_44;
  *(_DWORD *)(v4 + 512) = base[15].task_result_;
  *(_QWORD *)(v4 + 280) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  p_task_result = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_load16(p_task_result);
    goto LABEL_46;
  }
  *(__m128i *)(v4 + 520) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v4 + 48) = v4 + 176;
  v14 = *(_QWORD *)(v4 + 64);
  if ( v14 )
  {
    p_task_result = v14 + 384;
    if ( !*(_BYTE *)(((unsigned __int64)(v14 + 384) >> 3) + 0x7FFF8000) )
    {
      p_task_result = *(_QWORD *)(v14 + 384);
      if ( !p_task_result )
        goto LABEL_25;
      if ( !*(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
      {
        v15 = *(_QWORD *)p_task_result + 8LL;
        if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          (*(void (**)(void))(*(_QWORD *)p_task_result + 8LL))();
LABEL_25:
          if ( !*(_BYTE *)(((unsigned __int64)(v14 + 144) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v14 + 144) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                   + 2;
            boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v14 + 360));
            if ( !*(_BYTE *)(((unsigned __int64)(v14 + 152) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v14 + 152) = &`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                     + 2;
              boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base((boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v14 + 152));
              *(_QWORD *)(v4 + 64) = 0LL;
              goto LABEL_28;
            }
LABEL_50:
            *(double *)v12.m128i_i64 = __asan_report_store8();
            goto LABEL_51;
          }
LABEL_49:
          __asan_report_store8();
          goto LABEL_50;
        }
LABEL_48:
        __asan_report_load8(v15);
        goto LABEL_49;
      }
LABEL_47:
      __asan_report_load8(p_task_result);
      goto LABEL_48;
    }
LABEL_46:
    __asan_report_load8(p_task_result);
    goto LABEL_47;
  }
LABEL_28:
  v16 = *(void **)(v4 + 56);
  if ( v16 )
  {
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v16,
      0x190uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 48) + 104LL));
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v4 + 128),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::system::error_code> *)(v4 + 176),
      &a);
LABEL_51:
  *(_QWORD *)(v4 + 280) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                        + 2;
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v4 + 496));
  *(_QWORD *)(v4 + 288) = &`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                        + 2;
  boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base((boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 288));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 112));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v4 + 128));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_75;
  }
  v19 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    v20 = v19;
    __asan_report_load8(v19);
LABEL_76:
    __asan_report_load8(v20);
    goto LABEL_77;
  }
  (*((void (__fastcall **)(double))impl->_vptr_impl_base + 4))(*(double *)v12.m128i_i64);
  v20 = *(_QWORD *)(v4 + 128);
  if ( !v20 )
    goto LABEL_57;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_76;
  v21 = *(_QWORD *)v20 + 8LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    v22 = v21;
    __asan_report_load8(v21);
LABEL_78:
    __asan_report_load8(v22);
    goto LABEL_79;
  }
  (*(void (**)(void))(*(_QWORD *)v20 + 8LL))();
LABEL_57:
  v22 = *(_QWORD *)(v4 + 112);
  if ( !v22 )
    goto LABEL_61;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    goto LABEL_78;
  v23 = *(_QWORD *)v22 + 8LL;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    v25 = v23;
    __asan_report_load8(v23);
LABEL_80:
    __asan_report_load8(v25);
LABEL_81:
    __asan_report_load8(v25);
    goto LABEL_82;
  }
  (*(void (**)(void))(*(_QWORD *)v22 + 8LL))();
LABEL_61:
  v24 = *(_QWORD *)(v4 + 64);
  if ( !v24 )
    goto LABEL_70;
  v25 = v24 + 384;
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 384) >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  v25 = *(_QWORD *)(v24 + 384);
  if ( !v25 )
    goto LABEL_67;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_81;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_load8(v26);
    goto LABEL_83;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_67:
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 144) >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_store8();
LABEL_84:
    __asan_report_store8();
    v29 = v28;
    *(_QWORD *)(v4 + 280) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                          + 2;
    boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v4 + 496));
    *(_QWORD *)(v4 + 288) = &`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                          + 2;
    boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base((boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 288));
    boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 112));
    boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
    __asan_handle_no_return(v4 + 48);
    _Unwind_Resume(v29);
  }
  *(_QWORD *)(v24 + 144) = &`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                         + 2;
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard((boost::asio::executor_work_guard<boost::asio::executor> *const)(v24 + 360));
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 152) >> 3) + 0x7FFF8000) )
    goto LABEL_84;
  *(_QWORD *)(v24 + 152) = &`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                         + 2;
  boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base((boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v24 + 152));
  *(_QWORD *)(v4 + 64) = 0LL;
LABEL_70:
  v27 = *(void **)(v4 + 56);
  if ( v27 )
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v27,
      0x190uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 48) + 104LL));
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 46: range 0000000019CD2F40-0000000019CD35F6
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r12
  unsigned __int64 p_task_result; // rdi
  boost::asio::detail::operation *v7; // rax
  boost::asio::detail::operation *v8; // rdi
  unsigned __int64 p_func; // rdi
  char v10; // al
  char v11; // dl
  char v12; // al
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  void *v15; // rdi
  __int64 v16; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  void *v26; // rdi
  struct _Unwind_Exception *v27; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-299h] BYREF
  char v30[664]; // [rsp+20h] [rbp-298h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_4(608LL);
    if ( v16 )
      v4 = v16;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 24 4 p:52 96 24 4 w:53 160 376 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  *(_QWORD *)(v4 + 32) = (char *)base + 40;
  *(_QWORD *)(v4 + 40) = base;
  *(_QWORD *)(v4 + 48) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[16].task_result_ >> 3) + 0x7FFF8000) )
  {
    p_task_result = (unsigned __int64)&base[16].task_result_;
    __asan_report_load8(&base[16].task_result_);
LABEL_33:
    v7 = (boost::asio::detail::operation *)__asan_report_load8(p_task_result);
    goto LABEL_34;
  }
  p_task_result = *(_QWORD *)&base[16].task_result_;
  if ( !p_task_result )
    goto LABEL_7;
  if ( *(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v7 = *(boost::asio::detail::operation **)p_task_result;
  if ( *(_BYTE *)((*(_QWORD *)p_task_result >> 3) + 0x7FFF8000LL) )
  {
LABEL_34:
    v8 = v7;
    __asan_report_load8(v7);
    goto LABEL_35;
  }
  p_task_result = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v7->next_)(
                    p_task_result,
                    base,
                    *(_QWORD *)p_task_result >> 3,
                    a4);
LABEL_7:
  *(_QWORD *)(v4 + 96) = p_task_result;
  v8 = base + 17;
  if ( *(char *)(((unsigned __int64)&base[17] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_35:
    __asan_report_load1(v8);
    goto LABEL_36;
  }
  *(_BYTE *)(v4 + 104) = base[17].next_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&base[6].task_result_);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    p_func = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
    goto LABEL_37;
  }
  *(_QWORD *)(v4 + 160) = *(_QWORD *)&base[1].task_result_;
  p_func = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_func);
LABEL_38:
    __asan_report_load4(p_func);
LABEL_39:
    __asan_report_load4(p_func);
    goto LABEL_40;
  }
  *(_QWORD *)(v4 + 168) = base[2].next_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)(v4 + 176),
    (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)&base[2].func_);
  p_func = (unsigned __int64)&base[5].func_;
  v10 = *(_BYTE *)(((unsigned __int64)&base[5].func_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_38;
  *(_DWORD *)(v4 + 248) = base[5].func_;
  p_func = (unsigned __int64)&base[5].func_ + 4;
  v11 = *(_BYTE *)((((unsigned __int64)&base[5].func_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base - 124) & 7) + 3) >= v11 && v11 )
    goto LABEL_39;
  *(_DWORD *)(v4 + 252) = HIDWORD(base[5].func_);
  p_func = (unsigned __int64)&base[5].task_result_;
  if ( *(_WORD *)(((unsigned __int64)&base[5].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load16(p_func);
    goto LABEL_41;
  }
  *(__m128i *)(v4 + 256) = _mm_loadu_si128((const __m128i *)&base[5].task_result_);
  p_func = (unsigned __int64)&base[6].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_func);
LABEL_42:
    __asan_report_load4(p_func);
    goto LABEL_43;
  }
  *(_QWORD *)(v4 + 272) = base[6].func_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 280),
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)&base[6].task_result_);
  p_func = (unsigned __int64)&base[16].func_;
  v12 = *(_BYTE *)(((unsigned __int64)&base[16].func_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_42;
  *(_DWORD *)(v4 + 512) = base[16].func_;
  *(_QWORD *)(v4 + 280) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  p_func = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load16(p_func);
    goto LABEL_44;
  }
  *(__m128i *)(v4 + 520) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v4 + 32) = v4 + 160;
  v13 = *(_QWORD *)(v4 + 48);
  if ( v13 )
  {
    p_func = v13 + 400;
    if ( !*(_BYTE *)(((unsigned __int64)(v13 + 400) >> 3) + 0x7FFF8000) )
    {
      p_func = *(_QWORD *)(v13 + 400);
      if ( !p_func )
      {
LABEL_25:
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v13 + 40));
        *(_QWORD *)(v4 + 48) = 0LL;
        goto LABEL_26;
      }
      if ( !*(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)p_func + 8LL;
        if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          (*(void (**)(void))(*(_QWORD *)p_func + 8LL))();
          goto LABEL_25;
        }
LABEL_46:
        __asan_report_load8(v14);
        goto LABEL_47;
      }
LABEL_45:
      __asan_report_load8(p_func);
      goto LABEL_46;
    }
LABEL_44:
    __asan_report_load8(p_func);
    goto LABEL_45;
  }
LABEL_26:
  v15 = *(void **)(v4 + 40);
  if ( v15 )
  {
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v15,
      0x1A0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 32) + 120LL));
    *(_QWORD *)(v4 + 40) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v4 + 112),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::system::error_code> *)(v4 + 160),
      &a);
LABEL_47:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 160));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 96));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v4 + 112));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_69;
  }
  v18 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    v19 = v18;
    __asan_report_load8(v18);
LABEL_70:
    __asan_report_load8(v19);
    goto LABEL_71;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v19 = *(_QWORD *)(v4 + 112);
  if ( !v19 )
    goto LABEL_53;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v20 = *(_QWORD *)v19 + 8LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    v21 = v20;
    __asan_report_load8(v20);
LABEL_72:
    __asan_report_load8(v21);
    goto LABEL_73;
  }
  (*(void (**)(void))(*(_QWORD *)v19 + 8LL))();
LABEL_53:
  v21 = *(_QWORD *)(v4 + 96);
  if ( !v21 )
    goto LABEL_57;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v22 = *(_QWORD *)v21 + 8LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    v24 = v22;
    __asan_report_load8(v22);
LABEL_74:
    __asan_report_load8(v24);
    goto LABEL_75;
  }
  (*(void (**)(void))(*(_QWORD *)v21 + 8LL))();
LABEL_57:
  v23 = *(_QWORD *)(v4 + 48);
  if ( !v23 )
    goto LABEL_64;
  v24 = v23 + 400;
  if ( *(_BYTE *)(((unsigned __int64)(v23 + 400) >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v24 = *(_QWORD *)(v23 + 400);
  if ( v24 )
  {
    if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    {
      v25 = *(_QWORD *)v24 + 8LL;
      if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v24 + 8LL))();
        goto LABEL_63;
      }
LABEL_76:
      v27 = (struct _Unwind_Exception *)__asan_report_load8(v25);
      boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 160));
      boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 96));
      boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 32));
      __asan_handle_no_return(v4 + 32);
      _Unwind_Resume(v27);
    }
LABEL_75:
    __asan_report_load8(v24);
    goto LABEL_76;
  }
LABEL_63:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v23 + 40));
  *(_QWORD *)(v4 + 48) = 0LL;
LABEL_64:
  v26 = *(void **)(v4 + 40);
  if ( v26 )
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v26,
      0x1A0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 32) + 120LL));
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 46: range 0000000019C95496-0000000019C95B5C
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r12
  unsigned __int64 p_func; // rdi
  unsigned int *v7; // rax
  unsigned int *p_task_result; // rdi
  unsigned __int64 v9; // rdi
  char v10; // al
  char v11; // dl
  char v12; // al
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  void *v15; // rdi
  __int64 v16; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  void *v26; // rdi
  struct _Unwind_Exception *v27; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-2B9h] BYREF
  char v30[696]; // [rsp+20h] [rbp-2B8h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_4(640LL);
    if ( v16 )
      v4 = v16;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 24 4 p:52 112 24 4 w:53 176 392 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862737] = -218103808;
  v5[536862738] = -202116109;
  v5[536862739] = -202116109;
  *(_QWORD *)(v4 + 48) = (char *)base + 40;
  *(_QWORD *)(v4 + 56) = base;
  *(_QWORD *)(v4 + 64) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[17].func_ >> 3) + 0x7FFF8000) )
  {
    p_func = (unsigned __int64)&base[17].func_;
    __asan_report_load8(&base[17].func_);
LABEL_33:
    v7 = (unsigned int *)__asan_report_load8(p_func);
    goto LABEL_34;
  }
  p_func = (unsigned __int64)base[17].func_;
  if ( !p_func )
    goto LABEL_7;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v7 = *(unsigned int **)p_func;
  if ( *(_BYTE *)((*(_QWORD *)p_func >> 3) + 0x7FFF8000LL) )
  {
LABEL_34:
    p_task_result = v7;
    __asan_report_load8(v7);
    goto LABEL_35;
  }
  p_func = (*(__int64 (__fastcall **)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v7)(
             p_func,
             base,
             *(_QWORD *)p_func >> 3,
             a4);
LABEL_7:
  *(_QWORD *)(v4 + 112) = p_func;
  p_task_result = &base[17].task_result_;
  if ( *(char *)(((unsigned __int64)&base[17].task_result_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_35:
    __asan_report_load1(p_task_result);
    goto LABEL_36;
  }
  *(_BYTE *)(v4 + 120) = base[17].task_result_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&base[7].func_);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    v9 = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
    goto LABEL_37;
  }
  *(_QWORD *)(v4 + 176) = *(_QWORD *)&base[1].task_result_;
  v9 = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(v9);
LABEL_38:
    __asan_report_load4(v9);
LABEL_39:
    __asan_report_load4(v9);
    goto LABEL_40;
  }
  *(_QWORD *)(v4 + 184) = base[2].next_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *const)(v4 + 192),
    (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *)&base[2].func_);
  v9 = (unsigned __int64)&base[6];
  v10 = *(_BYTE *)(((unsigned __int64)&base[6] >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_38;
  *(_DWORD *)(v4 + 280) = base[6].next_;
  v9 = (unsigned __int64)&base[6].next_ + 4;
  v11 = *(_BYTE *)((((unsigned __int64)&base[6].next_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base - 108) & 7) + 3) >= v11 && v11 )
    goto LABEL_39;
  *(_DWORD *)(v4 + 284) = HIDWORD(base[6].next_);
  v9 = (unsigned __int64)&base[6].func_;
  if ( *(_WORD *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load16(v9);
    goto LABEL_41;
  }
  *(__m128i *)(v4 + 288) = _mm_loadu_si128((const __m128i *)&base[6].func_);
  v9 = (unsigned __int64)&base[7];
  if ( *(_BYTE *)(((unsigned __int64)&base[7] >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(v9);
LABEL_42:
    __asan_report_load4(v9);
    goto LABEL_43;
  }
  *(_QWORD *)(v4 + 304) = base[7].next_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 312),
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)&base[7].func_);
  v9 = (unsigned __int64)&base[17];
  v12 = *(_BYTE *)(((unsigned __int64)&base[17] >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_42;
  *(_DWORD *)(v4 + 544) = base[17].next_;
  *(_QWORD *)(v4 + 312) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  v9 = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load16(v9);
    goto LABEL_44;
  }
  *(__m128i *)(v4 + 552) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v4 + 48) = v4 + 176;
  v13 = *(_QWORD *)(v4 + 64);
  if ( v13 )
  {
    v9 = v13 + 416;
    if ( !*(_BYTE *)(((unsigned __int64)(v13 + 416) >> 3) + 0x7FFF8000) )
    {
      v9 = *(_QWORD *)(v13 + 416);
      if ( !v9 )
      {
LABEL_25:
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v13 + 40));
        *(_QWORD *)(v4 + 64) = 0LL;
        goto LABEL_26;
      }
      if ( !*(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)v9 + 8LL;
        if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          (*(void (**)(void))(*(_QWORD *)v9 + 8LL))();
          goto LABEL_25;
        }
LABEL_46:
        __asan_report_load8(v14);
        goto LABEL_47;
      }
LABEL_45:
      __asan_report_load8(v9);
      goto LABEL_46;
    }
LABEL_44:
    __asan_report_load8(v9);
    goto LABEL_45;
  }
LABEL_26:
  v15 = *(void **)(v4 + 56);
  if ( v15 )
  {
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v15,
      0x1B0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 48) + 136LL));
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v4 + 128),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::system::error_code> *)(v4 + 176),
      &a);
LABEL_47:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 176));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 112));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v4 + 128));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_69;
  }
  v18 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    v19 = v18;
    __asan_report_load8(v18);
LABEL_70:
    __asan_report_load8(v19);
    goto LABEL_71;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v19 = *(_QWORD *)(v4 + 128);
  if ( !v19 )
    goto LABEL_53;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v20 = *(_QWORD *)v19 + 8LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    v21 = v20;
    __asan_report_load8(v20);
LABEL_72:
    __asan_report_load8(v21);
    goto LABEL_73;
  }
  (*(void (**)(void))(*(_QWORD *)v19 + 8LL))();
LABEL_53:
  v21 = *(_QWORD *)(v4 + 112);
  if ( !v21 )
    goto LABEL_57;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v22 = *(_QWORD *)v21 + 8LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    v24 = v22;
    __asan_report_load8(v22);
LABEL_74:
    __asan_report_load8(v24);
    goto LABEL_75;
  }
  (*(void (**)(void))(*(_QWORD *)v21 + 8LL))();
LABEL_57:
  v23 = *(_QWORD *)(v4 + 64);
  if ( !v23 )
    goto LABEL_64;
  v24 = v23 + 416;
  if ( *(_BYTE *)(((unsigned __int64)(v23 + 416) >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v24 = *(_QWORD *)(v23 + 416);
  if ( v24 )
  {
    if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    {
      v25 = *(_QWORD *)v24 + 8LL;
      if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v24 + 8LL))();
        goto LABEL_63;
      }
LABEL_76:
      v27 = (struct _Unwind_Exception *)__asan_report_load8(v25);
      boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 176));
      boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 112));
      boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
      __asan_handle_no_return(v4 + 48);
      _Unwind_Resume(v27);
    }
LABEL_75:
    __asan_report_load8(v24);
    goto LABEL_76;
  }
LABEL_63:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v23 + 40));
  *(_QWORD *)(v4 + 64) = 0LL;
LABEL_64:
  v26 = *(void **)(v4 + 56);
  if ( v26 )
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v26,
      0x1B0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 48) + 136LL));
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 0000000019CCBDE8-0000000019CCC4AE
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r12
  unsigned __int64 p_func; // rdi
  unsigned int *v7; // rax
  unsigned int *p_task_result; // rdi
  unsigned __int64 v9; // rdi
  char v10; // al
  char v11; // dl
  char v12; // al
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  void *v15; // rdi
  __int64 v16; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  void *v26; // rdi
  struct _Unwind_Exception *v27; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-2B9h] BYREF
  char v30[696]; // [rsp+20h] [rbp-2B8h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_4(640LL);
    if ( v16 )
      v4 = v16;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 24 4 p:52 112 24 4 w:53 176 392 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862737] = -218103808;
  v5[536862738] = -202116109;
  v5[536862739] = -202116109;
  *(_QWORD *)(v4 + 48) = (char *)base + 40;
  *(_QWORD *)(v4 + 56) = base;
  *(_QWORD *)(v4 + 64) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[17].func_ >> 3) + 0x7FFF8000) )
  {
    p_func = (unsigned __int64)&base[17].func_;
    __asan_report_load8(&base[17].func_);
LABEL_33:
    v7 = (unsigned int *)__asan_report_load8(p_func);
    goto LABEL_34;
  }
  p_func = (unsigned __int64)base[17].func_;
  if ( !p_func )
    goto LABEL_7;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v7 = *(unsigned int **)p_func;
  if ( *(_BYTE *)((*(_QWORD *)p_func >> 3) + 0x7FFF8000LL) )
  {
LABEL_34:
    p_task_result = v7;
    __asan_report_load8(v7);
    goto LABEL_35;
  }
  p_func = (*(__int64 (__fastcall **)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v7)(
             p_func,
             base,
             *(_QWORD *)p_func >> 3,
             a4);
LABEL_7:
  *(_QWORD *)(v4 + 112) = p_func;
  p_task_result = &base[17].task_result_;
  if ( *(char *)(((unsigned __int64)&base[17].task_result_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_35:
    __asan_report_load1(p_task_result);
    goto LABEL_36;
  }
  *(_BYTE *)(v4 + 120) = base[17].task_result_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&base[7].func_);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    v9 = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
    goto LABEL_37;
  }
  *(_QWORD *)(v4 + 176) = *(_QWORD *)&base[1].task_result_;
  v9 = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(v9);
LABEL_38:
    __asan_report_load4(v9);
LABEL_39:
    __asan_report_load4(v9);
    goto LABEL_40;
  }
  *(_QWORD *)(v4 + 184) = base[2].next_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)(v4 + 192),
    (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)&base[2].func_);
  v9 = (unsigned __int64)&base[6];
  v10 = *(_BYTE *)(((unsigned __int64)&base[6] >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_38;
  *(_DWORD *)(v4 + 280) = base[6].next_;
  v9 = (unsigned __int64)&base[6].next_ + 4;
  v11 = *(_BYTE *)((((unsigned __int64)&base[6].next_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base - 108) & 7) + 3) >= v11 && v11 )
    goto LABEL_39;
  *(_DWORD *)(v4 + 284) = HIDWORD(base[6].next_);
  v9 = (unsigned __int64)&base[6].func_;
  if ( *(_WORD *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load16(v9);
    goto LABEL_41;
  }
  *(__m128i *)(v4 + 288) = _mm_loadu_si128((const __m128i *)&base[6].func_);
  v9 = (unsigned __int64)&base[7];
  if ( *(_BYTE *)(((unsigned __int64)&base[7] >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(v9);
LABEL_42:
    __asan_report_load4(v9);
    goto LABEL_43;
  }
  *(_QWORD *)(v4 + 304) = base[7].next_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 312),
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)&base[7].func_);
  v9 = (unsigned __int64)&base[17];
  v12 = *(_BYTE *)(((unsigned __int64)&base[17] >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_42;
  *(_DWORD *)(v4 + 544) = base[17].next_;
  *(_QWORD *)(v4 + 312) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  v9 = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load16(v9);
    goto LABEL_44;
  }
  *(__m128i *)(v4 + 552) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v4 + 48) = v4 + 176;
  v13 = *(_QWORD *)(v4 + 64);
  if ( v13 )
  {
    v9 = v13 + 416;
    if ( !*(_BYTE *)(((unsigned __int64)(v13 + 416) >> 3) + 0x7FFF8000) )
    {
      v9 = *(_QWORD *)(v13 + 416);
      if ( !v9 )
      {
LABEL_25:
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v13 + 40));
        *(_QWORD *)(v4 + 64) = 0LL;
        goto LABEL_26;
      }
      if ( !*(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)v9 + 8LL;
        if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          (*(void (**)(void))(*(_QWORD *)v9 + 8LL))();
          goto LABEL_25;
        }
LABEL_46:
        __asan_report_load8(v14);
        goto LABEL_47;
      }
LABEL_45:
      __asan_report_load8(v9);
      goto LABEL_46;
    }
LABEL_44:
    __asan_report_load8(v9);
    goto LABEL_45;
  }
LABEL_26:
  v15 = *(void **)(v4 + 56);
  if ( v15 )
  {
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v15,
      0x1B0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 48) + 136LL));
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v4 + 128),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::system::error_code> *)(v4 + 176),
      &a);
LABEL_47:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 176));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 112));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v4 + 128));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_69;
  }
  v18 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    v19 = v18;
    __asan_report_load8(v18);
LABEL_70:
    __asan_report_load8(v19);
    goto LABEL_71;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v19 = *(_QWORD *)(v4 + 128);
  if ( !v19 )
    goto LABEL_53;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v20 = *(_QWORD *)v19 + 8LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    v21 = v20;
    __asan_report_load8(v20);
LABEL_72:
    __asan_report_load8(v21);
    goto LABEL_73;
  }
  (*(void (**)(void))(*(_QWORD *)v19 + 8LL))();
LABEL_53:
  v21 = *(_QWORD *)(v4 + 112);
  if ( !v21 )
    goto LABEL_57;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v22 = *(_QWORD *)v21 + 8LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    v24 = v22;
    __asan_report_load8(v22);
LABEL_74:
    __asan_report_load8(v24);
    goto LABEL_75;
  }
  (*(void (**)(void))(*(_QWORD *)v21 + 8LL))();
LABEL_57:
  v23 = *(_QWORD *)(v4 + 64);
  if ( !v23 )
    goto LABEL_64;
  v24 = v23 + 416;
  if ( *(_BYTE *)(((unsigned __int64)(v23 + 416) >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v24 = *(_QWORD *)(v23 + 416);
  if ( v24 )
  {
    if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    {
      v25 = *(_QWORD *)v24 + 8LL;
      if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v24 + 8LL))();
        goto LABEL_63;
      }
LABEL_76:
      v27 = (struct _Unwind_Exception *)__asan_report_load8(v25);
      boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 176));
      boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 112));
      boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
      __asan_handle_no_return(v4 + 48);
      _Unwind_Resume(v27);
    }
LABEL_75:
    __asan_report_load8(v24);
    goto LABEL_76;
  }
LABEL_63:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v23 + 40));
  *(_QWORD *)(v4 + 64) = 0LL;
LABEL_64:
  v26 = *(void **)(v4 + 56);
  if ( v26 )
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v26,
      0x1B0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 48) + 136LL));
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 0000000019CA7CA6-0000000019CA836C
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r12
  unsigned __int64 p_func; // rdi
  unsigned int *v7; // rax
  unsigned int *p_task_result; // rdi
  unsigned __int64 v9; // rdi
  char v10; // al
  char v11; // dl
  char v12; // al
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  void *v15; // rdi
  __int64 v16; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  void *v26; // rdi
  struct _Unwind_Exception *v27; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-2B9h] BYREF
  char v30[696]; // [rsp+20h] [rbp-2B8h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_4(640LL);
    if ( v16 )
      v4 = v16;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 24 4 p:52 112 24 4 w:53 176 392 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862737] = -218103808;
  v5[536862738] = -202116109;
  v5[536862739] = -202116109;
  *(_QWORD *)(v4 + 48) = (char *)base + 40;
  *(_QWORD *)(v4 + 56) = base;
  *(_QWORD *)(v4 + 64) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[17].func_ >> 3) + 0x7FFF8000) )
  {
    p_func = (unsigned __int64)&base[17].func_;
    __asan_report_load8(&base[17].func_);
LABEL_33:
    v7 = (unsigned int *)__asan_report_load8(p_func);
    goto LABEL_34;
  }
  p_func = (unsigned __int64)base[17].func_;
  if ( !p_func )
    goto LABEL_7;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v7 = *(unsigned int **)p_func;
  if ( *(_BYTE *)((*(_QWORD *)p_func >> 3) + 0x7FFF8000LL) )
  {
LABEL_34:
    p_task_result = v7;
    __asan_report_load8(v7);
    goto LABEL_35;
  }
  p_func = (*(__int64 (__fastcall **)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v7)(
             p_func,
             base,
             *(_QWORD *)p_func >> 3,
             a4);
LABEL_7:
  *(_QWORD *)(v4 + 112) = p_func;
  p_task_result = &base[17].task_result_;
  if ( *(char *)(((unsigned __int64)&base[17].task_result_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_35:
    __asan_report_load1(p_task_result);
    goto LABEL_36;
  }
  *(_BYTE *)(v4 + 120) = base[17].task_result_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&base[7].func_);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    v9 = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
    goto LABEL_37;
  }
  *(_QWORD *)(v4 + 176) = *(_QWORD *)&base[1].task_result_;
  v9 = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(v9);
LABEL_38:
    __asan_report_load4(v9);
LABEL_39:
    __asan_report_load4(v9);
    goto LABEL_40;
  }
  *(_QWORD *)(v4 + 184) = base[2].next_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)(v4 + 192),
    (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)&base[2].func_);
  v9 = (unsigned __int64)&base[6];
  v10 = *(_BYTE *)(((unsigned __int64)&base[6] >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_38;
  *(_DWORD *)(v4 + 280) = base[6].next_;
  v9 = (unsigned __int64)&base[6].next_ + 4;
  v11 = *(_BYTE *)((((unsigned __int64)&base[6].next_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base - 108) & 7) + 3) >= v11 && v11 )
    goto LABEL_39;
  *(_DWORD *)(v4 + 284) = HIDWORD(base[6].next_);
  v9 = (unsigned __int64)&base[6].func_;
  if ( *(_WORD *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load16(v9);
    goto LABEL_41;
  }
  *(__m128i *)(v4 + 288) = _mm_loadu_si128((const __m128i *)&base[6].func_);
  v9 = (unsigned __int64)&base[7];
  if ( *(_BYTE *)(((unsigned __int64)&base[7] >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(v9);
LABEL_42:
    __asan_report_load4(v9);
    goto LABEL_43;
  }
  *(_QWORD *)(v4 + 304) = base[7].next_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 312),
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)&base[7].func_);
  v9 = (unsigned __int64)&base[17];
  v12 = *(_BYTE *)(((unsigned __int64)&base[17] >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_42;
  *(_DWORD *)(v4 + 544) = base[17].next_;
  *(_QWORD *)(v4 + 312) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  v9 = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load16(v9);
    goto LABEL_44;
  }
  *(__m128i *)(v4 + 552) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v4 + 48) = v4 + 176;
  v13 = *(_QWORD *)(v4 + 64);
  if ( v13 )
  {
    v9 = v13 + 416;
    if ( !*(_BYTE *)(((unsigned __int64)(v13 + 416) >> 3) + 0x7FFF8000) )
    {
      v9 = *(_QWORD *)(v13 + 416);
      if ( !v9 )
      {
LABEL_25:
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v13 + 40));
        *(_QWORD *)(v4 + 64) = 0LL;
        goto LABEL_26;
      }
      if ( !*(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)v9 + 8LL;
        if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          (*(void (**)(void))(*(_QWORD *)v9 + 8LL))();
          goto LABEL_25;
        }
LABEL_46:
        __asan_report_load8(v14);
        goto LABEL_47;
      }
LABEL_45:
      __asan_report_load8(v9);
      goto LABEL_46;
    }
LABEL_44:
    __asan_report_load8(v9);
    goto LABEL_45;
  }
LABEL_26:
  v15 = *(void **)(v4 + 56);
  if ( v15 )
  {
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v15,
      0x1B0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 48) + 136LL));
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v4 + 128),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::system::error_code> *)(v4 + 176),
      &a);
LABEL_47:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 176));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 112));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v4 + 128));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_69;
  }
  v18 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    v19 = v18;
    __asan_report_load8(v18);
LABEL_70:
    __asan_report_load8(v19);
    goto LABEL_71;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v19 = *(_QWORD *)(v4 + 128);
  if ( !v19 )
    goto LABEL_53;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v20 = *(_QWORD *)v19 + 8LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    v21 = v20;
    __asan_report_load8(v20);
LABEL_72:
    __asan_report_load8(v21);
    goto LABEL_73;
  }
  (*(void (**)(void))(*(_QWORD *)v19 + 8LL))();
LABEL_53:
  v21 = *(_QWORD *)(v4 + 112);
  if ( !v21 )
    goto LABEL_57;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v22 = *(_QWORD *)v21 + 8LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    v24 = v22;
    __asan_report_load8(v22);
LABEL_74:
    __asan_report_load8(v24);
    goto LABEL_75;
  }
  (*(void (**)(void))(*(_QWORD *)v21 + 8LL))();
LABEL_57:
  v23 = *(_QWORD *)(v4 + 64);
  if ( !v23 )
    goto LABEL_64;
  v24 = v23 + 416;
  if ( *(_BYTE *)(((unsigned __int64)(v23 + 416) >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v24 = *(_QWORD *)(v23 + 416);
  if ( v24 )
  {
    if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    {
      v25 = *(_QWORD *)v24 + 8LL;
      if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v24 + 8LL))();
        goto LABEL_63;
      }
LABEL_76:
      v27 = (struct _Unwind_Exception *)__asan_report_load8(v25);
      boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 176));
      boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 112));
      boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
      __asan_handle_no_return(v4 + 48);
      _Unwind_Resume(v27);
    }
LABEL_75:
    __asan_report_load8(v24);
    goto LABEL_76;
  }
LABEL_63:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v23 + 40));
  *(_QWORD *)(v4 + 64) = 0LL;
LABEL_64:
  v26 = *(void **)(v4 + 56);
  if ( v26 )
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v26,
      0x1B0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 48) + 136LL));
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 0000000019CC2A72-0000000019CC3128
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r12
  unsigned __int64 p_task_result; // rdi
  boost::asio::detail::operation *v7; // rax
  boost::asio::detail::operation *v8; // rdi
  unsigned __int64 p_func; // rdi
  char v10; // al
  char v11; // dl
  char v12; // al
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  void *v15; // rdi
  __int64 v16; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  void *v26; // rdi
  struct _Unwind_Exception *v27; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-299h] BYREF
  char v30[664]; // [rsp+20h] [rbp-298h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_4(608LL);
    if ( v16 )
      v4 = v16;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 24 4 p:52 96 24 4 w:53 160 376 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  *(_QWORD *)(v4 + 32) = (char *)base + 40;
  *(_QWORD *)(v4 + 40) = base;
  *(_QWORD *)(v4 + 48) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[16].task_result_ >> 3) + 0x7FFF8000) )
  {
    p_task_result = (unsigned __int64)&base[16].task_result_;
    __asan_report_load8(&base[16].task_result_);
LABEL_33:
    v7 = (boost::asio::detail::operation *)__asan_report_load8(p_task_result);
    goto LABEL_34;
  }
  p_task_result = *(_QWORD *)&base[16].task_result_;
  if ( !p_task_result )
    goto LABEL_7;
  if ( *(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v7 = *(boost::asio::detail::operation **)p_task_result;
  if ( *(_BYTE *)((*(_QWORD *)p_task_result >> 3) + 0x7FFF8000LL) )
  {
LABEL_34:
    v8 = v7;
    __asan_report_load8(v7);
    goto LABEL_35;
  }
  p_task_result = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v7->next_)(
                    p_task_result,
                    base,
                    *(_QWORD *)p_task_result >> 3,
                    a4);
LABEL_7:
  *(_QWORD *)(v4 + 96) = p_task_result;
  v8 = base + 17;
  if ( *(char *)(((unsigned __int64)&base[17] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_35:
    __asan_report_load1(v8);
    goto LABEL_36;
  }
  *(_BYTE *)(v4 + 104) = base[17].next_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&base[6].task_result_);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    p_func = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
    goto LABEL_37;
  }
  *(_QWORD *)(v4 + 160) = *(_QWORD *)&base[1].task_result_;
  p_func = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_func);
LABEL_38:
    __asan_report_load4(p_func);
LABEL_39:
    __asan_report_load4(p_func);
    goto LABEL_40;
  }
  *(_QWORD *)(v4 + 168) = base[2].next_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)(v4 + 176),
    (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)&base[2].func_);
  p_func = (unsigned __int64)&base[5].func_;
  v10 = *(_BYTE *)(((unsigned __int64)&base[5].func_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_38;
  *(_DWORD *)(v4 + 248) = base[5].func_;
  p_func = (unsigned __int64)&base[5].func_ + 4;
  v11 = *(_BYTE *)((((unsigned __int64)&base[5].func_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base - 124) & 7) + 3) >= v11 && v11 )
    goto LABEL_39;
  *(_DWORD *)(v4 + 252) = HIDWORD(base[5].func_);
  p_func = (unsigned __int64)&base[5].task_result_;
  if ( *(_WORD *)(((unsigned __int64)&base[5].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load16(p_func);
    goto LABEL_41;
  }
  *(__m128i *)(v4 + 256) = _mm_loadu_si128((const __m128i *)&base[5].task_result_);
  p_func = (unsigned __int64)&base[6].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_func);
LABEL_42:
    __asan_report_load4(p_func);
    goto LABEL_43;
  }
  *(_QWORD *)(v4 + 272) = base[6].func_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 280),
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)&base[6].task_result_);
  p_func = (unsigned __int64)&base[16].func_;
  v12 = *(_BYTE *)(((unsigned __int64)&base[16].func_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_42;
  *(_DWORD *)(v4 + 512) = base[16].func_;
  *(_QWORD *)(v4 + 280) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  p_func = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load16(p_func);
    goto LABEL_44;
  }
  *(__m128i *)(v4 + 520) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v4 + 32) = v4 + 160;
  v13 = *(_QWORD *)(v4 + 48);
  if ( v13 )
  {
    p_func = v13 + 400;
    if ( !*(_BYTE *)(((unsigned __int64)(v13 + 400) >> 3) + 0x7FFF8000) )
    {
      p_func = *(_QWORD *)(v13 + 400);
      if ( !p_func )
      {
LABEL_25:
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v13 + 40));
        *(_QWORD *)(v4 + 48) = 0LL;
        goto LABEL_26;
      }
      if ( !*(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)p_func + 8LL;
        if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          (*(void (**)(void))(*(_QWORD *)p_func + 8LL))();
          goto LABEL_25;
        }
LABEL_46:
        __asan_report_load8(v14);
        goto LABEL_47;
      }
LABEL_45:
      __asan_report_load8(p_func);
      goto LABEL_46;
    }
LABEL_44:
    __asan_report_load8(p_func);
    goto LABEL_45;
  }
LABEL_26:
  v15 = *(void **)(v4 + 40);
  if ( v15 )
  {
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v15,
      0x1A0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 32) + 120LL));
    *(_QWORD *)(v4 + 40) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v4 + 112),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::system::error_code> *)(v4 + 160),
      &a);
LABEL_47:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 160));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 96));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v4 + 112));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_69;
  }
  v18 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    v19 = v18;
    __asan_report_load8(v18);
LABEL_70:
    __asan_report_load8(v19);
    goto LABEL_71;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v19 = *(_QWORD *)(v4 + 112);
  if ( !v19 )
    goto LABEL_53;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v20 = *(_QWORD *)v19 + 8LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    v21 = v20;
    __asan_report_load8(v20);
LABEL_72:
    __asan_report_load8(v21);
    goto LABEL_73;
  }
  (*(void (**)(void))(*(_QWORD *)v19 + 8LL))();
LABEL_53:
  v21 = *(_QWORD *)(v4 + 96);
  if ( !v21 )
    goto LABEL_57;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v22 = *(_QWORD *)v21 + 8LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    v24 = v22;
    __asan_report_load8(v22);
LABEL_74:
    __asan_report_load8(v24);
    goto LABEL_75;
  }
  (*(void (**)(void))(*(_QWORD *)v21 + 8LL))();
LABEL_57:
  v23 = *(_QWORD *)(v4 + 48);
  if ( !v23 )
    goto LABEL_64;
  v24 = v23 + 400;
  if ( *(_BYTE *)(((unsigned __int64)(v23 + 400) >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v24 = *(_QWORD *)(v23 + 400);
  if ( v24 )
  {
    if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    {
      v25 = *(_QWORD *)v24 + 8LL;
      if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v24 + 8LL))();
        goto LABEL_63;
      }
LABEL_76:
      v27 = (struct _Unwind_Exception *)__asan_report_load8(v25);
      boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 160));
      boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 96));
      boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 32));
      __asan_handle_no_return(v4 + 32);
      _Unwind_Resume(v27);
    }
LABEL_75:
    __asan_report_load8(v24);
    goto LABEL_76;
  }
LABEL_63:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v23 + 40));
  *(_QWORD *)(v4 + 48) = 0LL;
LABEL_64:
  v26 = *(void **)(v4 + 40);
  if ( v26 )
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v26,
      0x1A0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 32) + 120LL));
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 46: range 0000000019CB9BC0-0000000019CBA276
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r12
  unsigned __int64 p_task_result; // rdi
  boost::asio::detail::operation *v7; // rax
  boost::asio::detail::operation *v8; // rdi
  unsigned __int64 p_func; // rdi
  char v10; // al
  char v11; // dl
  char v12; // al
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  void *v15; // rdi
  __int64 v16; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  void *v26; // rdi
  struct _Unwind_Exception *v27; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-299h] BYREF
  char v30[664]; // [rsp+20h] [rbp-298h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_4(608LL);
    if ( v16 )
      v4 = v16;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 24 4 p:52 96 24 4 w:53 160 376 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  *(_QWORD *)(v4 + 32) = (char *)base + 40;
  *(_QWORD *)(v4 + 40) = base;
  *(_QWORD *)(v4 + 48) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[16].task_result_ >> 3) + 0x7FFF8000) )
  {
    p_task_result = (unsigned __int64)&base[16].task_result_;
    __asan_report_load8(&base[16].task_result_);
LABEL_33:
    v7 = (boost::asio::detail::operation *)__asan_report_load8(p_task_result);
    goto LABEL_34;
  }
  p_task_result = *(_QWORD *)&base[16].task_result_;
  if ( !p_task_result )
    goto LABEL_7;
  if ( *(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v7 = *(boost::asio::detail::operation **)p_task_result;
  if ( *(_BYTE *)((*(_QWORD *)p_task_result >> 3) + 0x7FFF8000LL) )
  {
LABEL_34:
    v8 = v7;
    __asan_report_load8(v7);
    goto LABEL_35;
  }
  p_task_result = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v7->next_)(
                    p_task_result,
                    base,
                    *(_QWORD *)p_task_result >> 3,
                    a4);
LABEL_7:
  *(_QWORD *)(v4 + 96) = p_task_result;
  v8 = base + 17;
  if ( *(char *)(((unsigned __int64)&base[17] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_35:
    __asan_report_load1(v8);
    goto LABEL_36;
  }
  *(_BYTE *)(v4 + 104) = base[17].next_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&base[6].task_result_);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    p_func = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
    goto LABEL_37;
  }
  *(_QWORD *)(v4 + 160) = *(_QWORD *)&base[1].task_result_;
  p_func = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_func);
LABEL_38:
    __asan_report_load4(p_func);
LABEL_39:
    __asan_report_load4(p_func);
    goto LABEL_40;
  }
  *(_QWORD *)(v4 + 168) = base[2].next_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)(v4 + 176),
    (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)&base[2].func_);
  p_func = (unsigned __int64)&base[5].func_;
  v10 = *(_BYTE *)(((unsigned __int64)&base[5].func_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_38;
  *(_DWORD *)(v4 + 248) = base[5].func_;
  p_func = (unsigned __int64)&base[5].func_ + 4;
  v11 = *(_BYTE *)((((unsigned __int64)&base[5].func_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base - 124) & 7) + 3) >= v11 && v11 )
    goto LABEL_39;
  *(_DWORD *)(v4 + 252) = HIDWORD(base[5].func_);
  p_func = (unsigned __int64)&base[5].task_result_;
  if ( *(_WORD *)(((unsigned __int64)&base[5].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load16(p_func);
    goto LABEL_41;
  }
  *(__m128i *)(v4 + 256) = _mm_loadu_si128((const __m128i *)&base[5].task_result_);
  p_func = (unsigned __int64)&base[6].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_func);
LABEL_42:
    __asan_report_load4(p_func);
    goto LABEL_43;
  }
  *(_QWORD *)(v4 + 272) = base[6].func_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 280),
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)&base[6].task_result_);
  p_func = (unsigned __int64)&base[16].func_;
  v12 = *(_BYTE *)(((unsigned __int64)&base[16].func_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_42;
  *(_DWORD *)(v4 + 512) = base[16].func_;
  *(_QWORD *)(v4 + 280) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  p_func = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load16(p_func);
    goto LABEL_44;
  }
  *(__m128i *)(v4 + 520) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v4 + 32) = v4 + 160;
  v13 = *(_QWORD *)(v4 + 48);
  if ( v13 )
  {
    p_func = v13 + 400;
    if ( !*(_BYTE *)(((unsigned __int64)(v13 + 400) >> 3) + 0x7FFF8000) )
    {
      p_func = *(_QWORD *)(v13 + 400);
      if ( !p_func )
      {
LABEL_25:
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v13 + 40));
        *(_QWORD *)(v4 + 48) = 0LL;
        goto LABEL_26;
      }
      if ( !*(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)p_func + 8LL;
        if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          (*(void (**)(void))(*(_QWORD *)p_func + 8LL))();
          goto LABEL_25;
        }
LABEL_46:
        __asan_report_load8(v14);
        goto LABEL_47;
      }
LABEL_45:
      __asan_report_load8(p_func);
      goto LABEL_46;
    }
LABEL_44:
    __asan_report_load8(p_func);
    goto LABEL_45;
  }
LABEL_26:
  v15 = *(void **)(v4 + 40);
  if ( v15 )
  {
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v15,
      0x1A0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 32) + 120LL));
    *(_QWORD *)(v4 + 40) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v4 + 112),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::system::error_code> *)(v4 + 160),
      &a);
LABEL_47:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 160));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 96));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v4 + 112));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_69;
  }
  v18 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    v19 = v18;
    __asan_report_load8(v18);
LABEL_70:
    __asan_report_load8(v19);
    goto LABEL_71;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v19 = *(_QWORD *)(v4 + 112);
  if ( !v19 )
    goto LABEL_53;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v20 = *(_QWORD *)v19 + 8LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    v21 = v20;
    __asan_report_load8(v20);
LABEL_72:
    __asan_report_load8(v21);
    goto LABEL_73;
  }
  (*(void (**)(void))(*(_QWORD *)v19 + 8LL))();
LABEL_53:
  v21 = *(_QWORD *)(v4 + 96);
  if ( !v21 )
    goto LABEL_57;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v22 = *(_QWORD *)v21 + 8LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    v24 = v22;
    __asan_report_load8(v22);
LABEL_74:
    __asan_report_load8(v24);
    goto LABEL_75;
  }
  (*(void (**)(void))(*(_QWORD *)v21 + 8LL))();
LABEL_57:
  v23 = *(_QWORD *)(v4 + 48);
  if ( !v23 )
    goto LABEL_64;
  v24 = v23 + 400;
  if ( *(_BYTE *)(((unsigned __int64)(v23 + 400) >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v24 = *(_QWORD *)(v23 + 400);
  if ( v24 )
  {
    if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    {
      v25 = *(_QWORD *)v24 + 8LL;
      if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v24 + 8LL))();
        goto LABEL_63;
      }
LABEL_76:
      v27 = (struct _Unwind_Exception *)__asan_report_load8(v25);
      boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 160));
      boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 96));
      boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 32));
      __asan_handle_no_return(v4 + 32);
      _Unwind_Resume(v27);
    }
LABEL_75:
    __asan_report_load8(v24);
    goto LABEL_76;
  }
LABEL_63:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v23 + 40));
  *(_QWORD *)(v4 + 48) = 0LL;
LABEL_64:
  v26 = *(void **)(v4 + 40);
  if ( v26 )
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v26,
      0x1A0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 32) + 120LL));
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 46: range 0000000019CB0D8E-0000000019CB1444
void __fastcall boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r12
  unsigned __int64 p_task_result; // rdi
  boost::asio::detail::operation *v7; // rax
  boost::asio::detail::operation *v8; // rdi
  unsigned __int64 p_func; // rdi
  char v10; // al
  char v11; // dl
  char v12; // al
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  void *v15; // rdi
  __int64 v16; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  void *v26; // rdi
  struct _Unwind_Exception *v27; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-299h] BYREF
  char v30[664]; // [rsp+20h] [rbp-298h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_4(608LL);
    if ( v16 )
      v4 = v16;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 24 4 p:52 96 24 4 w:53 160 376 10 handler:64";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  *(_QWORD *)(v4 + 32) = (char *)base + 40;
  *(_QWORD *)(v4 + 40) = base;
  *(_QWORD *)(v4 + 48) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[16].task_result_ >> 3) + 0x7FFF8000) )
  {
    p_task_result = (unsigned __int64)&base[16].task_result_;
    __asan_report_load8(&base[16].task_result_);
LABEL_33:
    v7 = (boost::asio::detail::operation *)__asan_report_load8(p_task_result);
    goto LABEL_34;
  }
  p_task_result = *(_QWORD *)&base[16].task_result_;
  if ( !p_task_result )
    goto LABEL_7;
  if ( *(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v7 = *(boost::asio::detail::operation **)p_task_result;
  if ( *(_BYTE *)((*(_QWORD *)p_task_result >> 3) + 0x7FFF8000LL) )
  {
LABEL_34:
    v8 = v7;
    __asan_report_load8(v7);
    goto LABEL_35;
  }
  p_task_result = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v7->next_)(
                    p_task_result,
                    base,
                    *(_QWORD *)p_task_result >> 3,
                    a4);
LABEL_7:
  *(_QWORD *)(v4 + 96) = p_task_result;
  v8 = base + 17;
  if ( *(char *)(((unsigned __int64)&base[17] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_35:
    __asan_report_load1(v8);
    goto LABEL_36;
  }
  *(_BYTE *)(v4 + 104) = base[17].next_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&base[6].task_result_);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    p_func = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
    goto LABEL_37;
  }
  *(_QWORD *)(v4 + 160) = *(_QWORD *)&base[1].task_result_;
  p_func = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_func);
LABEL_38:
    __asan_report_load4(p_func);
LABEL_39:
    __asan_report_load4(p_func);
    goto LABEL_40;
  }
  *(_QWORD *)(v4 + 168) = base[2].next_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *const)(v4 + 176),
    (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *)&base[2].func_);
  p_func = (unsigned __int64)&base[5].func_;
  v10 = *(_BYTE *)(((unsigned __int64)&base[5].func_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_38;
  *(_DWORD *)(v4 + 248) = base[5].func_;
  p_func = (unsigned __int64)&base[5].func_ + 4;
  v11 = *(_BYTE *)((((unsigned __int64)&base[5].func_ + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)base - 124) & 7) + 3) >= v11 && v11 )
    goto LABEL_39;
  *(_DWORD *)(v4 + 252) = HIDWORD(base[5].func_);
  p_func = (unsigned __int64)&base[5].task_result_;
  if ( *(_WORD *)(((unsigned __int64)&base[5].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load16(p_func);
    goto LABEL_41;
  }
  *(__m128i *)(v4 + 256) = _mm_loadu_si128((const __m128i *)&base[5].task_result_);
  p_func = (unsigned __int64)&base[6].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_func);
LABEL_42:
    __asan_report_load4(p_func);
    goto LABEL_43;
  }
  *(_QWORD *)(v4 + 272) = base[6].func_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v4 + 280),
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)&base[6].task_result_);
  p_func = (unsigned __int64)&base[16].func_;
  v12 = *(_BYTE *)(((unsigned __int64)&base[16].func_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_42;
  *(_DWORD *)(v4 + 512) = base[16].func_;
  *(_QWORD *)(v4 + 280) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  p_func = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load16(p_func);
    goto LABEL_44;
  }
  *(__m128i *)(v4 + 520) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v4 + 32) = v4 + 160;
  v13 = *(_QWORD *)(v4 + 48);
  if ( v13 )
  {
    p_func = v13 + 400;
    if ( !*(_BYTE *)(((unsigned __int64)(v13 + 400) >> 3) + 0x7FFF8000) )
    {
      p_func = *(_QWORD *)(v13 + 400);
      if ( !p_func )
      {
LABEL_25:
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v13 + 40));
        *(_QWORD *)(v4 + 48) = 0LL;
        goto LABEL_26;
      }
      if ( !*(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)p_func + 8LL;
        if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          (*(void (**)(void))(*(_QWORD *)p_func + 8LL))();
          goto LABEL_25;
        }
LABEL_46:
        __asan_report_load8(v14);
        goto LABEL_47;
      }
LABEL_45:
      __asan_report_load8(p_func);
      goto LABEL_46;
    }
LABEL_44:
    __asan_report_load8(p_func);
    goto LABEL_45;
  }
LABEL_26:
  v15 = *(void **)(v4 + 40);
  if ( v15 )
  {
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v15,
      0x1A0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 32) + 120LL));
    *(_QWORD *)(v4 + 40) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v4 + 112),
      (boost::asio::detail::binder1<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::system::error_code> *)(v4 + 160),
      &a);
LABEL_47:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 160));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 96));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v4 + 112));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_69;
  }
  v18 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    v19 = v18;
    __asan_report_load8(v18);
LABEL_70:
    __asan_report_load8(v19);
    goto LABEL_71;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v19 = *(_QWORD *)(v4 + 112);
  if ( !v19 )
    goto LABEL_53;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v20 = *(_QWORD *)v19 + 8LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    v21 = v20;
    __asan_report_load8(v20);
LABEL_72:
    __asan_report_load8(v21);
    goto LABEL_73;
  }
  (*(void (**)(void))(*(_QWORD *)v19 + 8LL))();
LABEL_53:
  v21 = *(_QWORD *)(v4 + 96);
  if ( !v21 )
    goto LABEL_57;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v22 = *(_QWORD *)v21 + 8LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    v24 = v22;
    __asan_report_load8(v22);
LABEL_74:
    __asan_report_load8(v24);
    goto LABEL_75;
  }
  (*(void (**)(void))(*(_QWORD *)v21 + 8LL))();
LABEL_57:
  v23 = *(_QWORD *)(v4 + 48);
  if ( !v23 )
    goto LABEL_64;
  v24 = v23 + 400;
  if ( *(_BYTE *)(((unsigned __int64)(v23 + 400) >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v24 = *(_QWORD *)(v23 + 400);
  if ( v24 )
  {
    if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    {
      v25 = *(_QWORD *)v24 + 8LL;
      if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v24 + 8LL))();
        goto LABEL_63;
      }
LABEL_76:
      v27 = (struct _Unwind_Exception *)__asan_report_load8(v25);
      boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v4 + 160));
      boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 96));
      boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 32));
      __asan_handle_no_return(v4 + 32);
      _Unwind_Resume(v27);
    }
LABEL_75:
    __asan_report_load8(v24);
    goto LABEL_76;
  }
LABEL_63:
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op((boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)(v23 + 40));
  *(_QWORD *)(v4 + 48) = 0LL;
LABEL_64:
  v26 = *(void **)(v4 + 40);
  if ( v26 )
    boost::beast::asio_handler_deallocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
      v26,
      0x1A0uLL,
      (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 32) + 120LL));
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 46: range 0000000019BB21A1-0000000019BB28C7
void __fastcall boost::asio::detail::wait_handler<void boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>(boost::asio::executor const&)::handler,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  boost::asio::detail::operation *v4; // rbp
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r12
  unsigned __int64 p_task_result; // rdi
  boost::asio::detail::operation *v9; // rax
  boost::asio::detail::operation *v10; // rdi
  unsigned __int64 v11; // rdi
  boost::asio::detail::operation *v12; // rax
  unsigned __int64 p_func; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // dl
  char v19; // al
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 v26; // rbp
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  char v31; // dl
  char v32; // al
  struct _Unwind_Exception *v33; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-139h] BYREF
  char v36[312]; // [rsp+20h] [rbp-138h] BYREF

  v4 = base;
  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_2(256LL);
    if ( v17 )
      v5 = v17;
  }
  v6 = v5 + 256;
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 24 4 p:52 112 24 4 w:53 176 40 10 handler:64";
  *(_QWORD *)(v5 + 16) = boost::asio::detail::wait_handler<void boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>(boost::asio::executor const&)::handler,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = -218959360;
  v7[536862723] = 62194;
  v7[536862724] = -218959360;
  v7[536862725] = 62194;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  *(_QWORD *)(v5 + 48) = (char *)base + 40;
  *(_QWORD *)(v5 + 56) = base;
  *(_QWORD *)(v5 + 64) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[2].task_result_ >> 3) + 0x7FFF8000) )
  {
    p_task_result = (unsigned __int64)&base[2].task_result_;
    __asan_report_load8(&base[2].task_result_);
LABEL_38:
    v9 = (boost::asio::detail::operation *)__asan_report_load8(p_task_result);
    goto LABEL_39;
  }
  p_task_result = *(_QWORD *)&base[2].task_result_;
  if ( !p_task_result )
    goto LABEL_7;
  if ( *(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_38;
  v9 = *(boost::asio::detail::operation **)p_task_result;
  if ( *(_BYTE *)((*(_QWORD *)p_task_result >> 3) + 0x7FFF8000LL) )
  {
LABEL_39:
    v10 = v9;
    __asan_report_load8(v9);
    goto LABEL_40;
  }
  p_task_result = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v9->next_)(
                    p_task_result,
                    base,
                    *(_QWORD *)p_task_result >> 3,
                    a4);
LABEL_7:
  *(_QWORD *)(v5 + 112) = p_task_result;
  v10 = base + 3;
  if ( *(char *)(((unsigned __int64)&base[3] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_40:
    __asan_report_load1(v10);
    goto LABEL_41;
  }
  *(_BYTE *)(v5 + 120) = base[3].next_;
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    v11 = (unsigned __int64)&base[1].task_result_;
    __asan_report_load8(&base[1].task_result_);
LABEL_42:
    v12 = (boost::asio::detail::operation *)__asan_report_load8(v11);
    goto LABEL_43;
  }
  v11 = *(_QWORD *)&base[1].task_result_;
  if ( !v11 )
    goto LABEL_13;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    goto LABEL_42;
  v12 = *(boost::asio::detail::operation **)v11;
  if ( *(_BYTE *)((*(_QWORD *)v11 >> 3) + 0x7FFF8000LL) )
  {
LABEL_43:
    p_func = (unsigned __int64)v12;
    __asan_report_load8(v12);
    goto LABEL_44;
  }
  v11 = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v12->next_)(
          v11,
          base,
          *(_QWORD *)v11 >> 3,
          a4);
LABEL_13:
  *(_QWORD *)(v5 + 128) = v11;
  p_func = (unsigned __int64)&base[1].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(p_func);
    goto LABEL_45;
  }
  *(_QWORD *)(v5 + 176) = *(_QWORD *)&base[1].task_result_;
  *(_QWORD *)&base[1].task_result_ = 0LL;
  p_func = (unsigned __int64)&base[2];
  if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_load8(p_func);
    goto LABEL_46;
  }
  *(_QWORD *)(v5 + 184) = base[2].next_;
  p_func = (unsigned __int64)&base[2].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[2].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(p_func);
    goto LABEL_47;
  }
  *(_QWORD *)(v5 + 192) = base[2].func_;
  base[2].func_ = 0LL;
  base[2].next_ = 0LL;
  p_func = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load16(p_func);
LABEL_48:
    __asan_report_load8(p_func);
    goto LABEL_49;
  }
  *(__m128i *)(v5 + 200) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v5 + 48) = v5 + 176;
  v4 = *(boost::asio::detail::operation **)(v5 + 64);
  if ( !v4 )
    goto LABEL_24;
  p_func = (unsigned __int64)&v4[2].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&v4[2].task_result_ >> 3) + 0x7FFF8000) )
    goto LABEL_48;
  p_func = *(_QWORD *)&v4[2].task_result_;
  if ( p_func )
  {
    if ( !*(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
    {
      v14 = *(_QWORD *)p_func + 8LL;
      if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)p_func + 8LL))();
        goto LABEL_23;
      }
LABEL_50:
      v16 = __asan_report_load8(v14);
      goto LABEL_51;
    }
LABEL_49:
    __asan_report_load8(p_func);
    goto LABEL_50;
  }
LABEL_23:
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>(boost::asio::executor const&)::handler::~handler((boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>::handler *const)&v4[1].task_result_);
  *(_QWORD *)(v5 + 64) = 0LL;
LABEL_24:
  v4 = *(boost::asio::detail::operation **)(v5 + 56);
  if ( !v4 )
    goto LABEL_33;
  v15 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v15 )
  {
    v16 = v15 + 8;
    if ( !*(_BYTE *)(((v15 + 8) >> 3) + 0x7FFF8000) )
    {
      v15 = *(_QWORD *)(v15 + 8);
      goto LABEL_28;
    }
LABEL_51:
    v15 = v16;
    __asan_report_load8(v16);
    goto LABEL_52;
  }
LABEL_28:
  if ( v15 )
  {
    if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)v15 )
        goto LABEL_31;
LABEL_53:
      v18 = *(_BYTE *)(((unsigned __int64)&v4[3].func_ >> 3) + 0x7FFF8000);
      if ( v18 <= (((unsigned __int8)v4 + 80) & 7) && v18 )
      {
        __asan_report_load1(&v4[3].func_);
      }
      else
      {
        v19 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
        if ( v19 > ((unsigned __int8)v4 & 7) || !v19 )
        {
          LOBYTE(v4->next_) = v4[3].func_;
          *(_QWORD *)v15 = v4;
          goto LABEL_32;
        }
      }
      __asan_report_store1(v4);
      goto LABEL_60;
    }
LABEL_52:
    __asan_report_load8(v15);
    goto LABEL_53;
  }
LABEL_31:
  operator delete(*(void **)(v5 + 56));
LABEL_32:
  *(_QWORD *)(v5 + 56) = 0LL;
LABEL_33:
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<void boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>(boost::asio::executor const&)::handler,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v5 + 128),
      (boost::asio::detail::binder1<boost::beast::basic_stream< <template-parameter-1-1>,<template-parameter-1-2>,<template-parameter-1-3> >::impl_type::on_timer(const Executor2&) [with Executor2 _ boost::asio::executor_ Protocol _ boost::asio::ip::tcp_ Executor _ boost::asio::executor_ RatePolicy _ boost::beast::unlimited_rate_policy]::handler,boost::system::error_code> *)(v5 + 176),
      &a);
LABEL_60:
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>(boost::asio::executor const&)::handler::~handler((boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>::handler *const)(v5 + 176));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v5 + 112));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v5 + 128));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_88;
  }
  v21 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    v22 = v21;
    __asan_report_load8(v21);
LABEL_89:
    __asan_report_load8(v22);
    goto LABEL_90;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v22 = *(_QWORD *)(v5 + 128);
  if ( !v22 )
    goto LABEL_66;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    goto LABEL_89;
  v23 = *(_QWORD *)v22 + 8LL;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    v24 = v23;
    __asan_report_load8(v23);
LABEL_91:
    __asan_report_load8(v24);
    goto LABEL_92;
  }
  (*(void (**)(void))(*(_QWORD *)v22 + 8LL))();
LABEL_66:
  v24 = *(_QWORD *)(v5 + 112);
  if ( !v24 )
    goto LABEL_70;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    goto LABEL_91;
  v25 = *(_QWORD *)v24 + 8LL;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    v27 = v25;
    __asan_report_load8(v25);
LABEL_93:
    __asan_report_load8(v27);
    goto LABEL_94;
  }
  (*(void (**)(void))(*(_QWORD *)v24 + 8LL))();
LABEL_70:
  v26 = *(_QWORD *)(v5 + 64);
  if ( !v26 )
    goto LABEL_77;
  v27 = v26 + 64;
  if ( *(_BYTE *)(((unsigned __int64)(v26 + 64) >> 3) + 0x7FFF8000) )
    goto LABEL_93;
  v27 = *(_QWORD *)(v26 + 64);
  if ( v27 )
  {
    if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
    {
      v28 = *(_QWORD *)v27 + 8LL;
      if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v27 + 8LL))();
        goto LABEL_76;
      }
LABEL_95:
      v30 = __asan_report_load8(v28);
      goto LABEL_96;
    }
LABEL_94:
    __asan_report_load8(v27);
    goto LABEL_95;
  }
LABEL_76:
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>(boost::asio::executor const&)::handler::~handler((boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>::handler *const)(v26 + 40));
  *(_QWORD *)(v5 + 64) = 0LL;
LABEL_77:
  v6 = *(_QWORD *)(v5 + 56);
  if ( !v6 )
    goto LABEL_85;
  v29 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v29 )
  {
    v30 = v29 + 8;
    if ( !*(_BYTE *)(((v29 + 8) >> 3) + 0x7FFF8000) )
    {
      v29 = *(_QWORD *)(v29 + 8);
      goto LABEL_81;
    }
LABEL_96:
    v29 = v30;
    __asan_report_load8(v30);
LABEL_97:
    __asan_report_load8(v29);
    goto LABEL_98;
  }
LABEL_81:
  if ( !v29 )
  {
LABEL_84:
    operator delete((void *)v6);
    goto LABEL_85;
  }
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
    goto LABEL_97;
  if ( *(_QWORD *)v29 )
    goto LABEL_84;
LABEL_98:
  v31 = *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000);
  if ( v31 <= (char)((v6 + 80) & 7) && v31 )
  {
    __asan_report_load1(v6 + 80);
    goto LABEL_104;
  }
  v32 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
  if ( v32 <= (char)(v6 & 7) && v32 )
  {
LABEL_104:
    v33 = (struct _Unwind_Exception *)__asan_report_store1(v6);
    boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>(boost::asio::executor const&)::handler::~handler((boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>::handler *const)(v6 - 80));
    boost::asio::detail::handler_work<void boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>(boost::asio::executor const&)::handler,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::beast::basic_stream< <template-parameter-1-1>,<template-parameter-1-2>,<template-parameter-1-3> >::impl_type::on_timer(const Executor2&) [with Executor2 _ boost::asio::executor_ Protocol _ boost::asio::ip::tcp_ Executor _ boost::asio::executor_ RatePolicy _ boost::beast::unlimited_rate_policy]::handler,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v6 - 144));
    boost::asio::detail::wait_handler<void boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::on_timer<boost::asio::executor>(boost::asio::executor const&)::handler,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::wait_handler<boost::beast::basic_stream< <template-parameter-1-1>,<template-parameter-1-2>,<template-parameter-1-3> >::impl_type::on_timer(const Executor2&) [with Executor2 _ boost::asio::executor_ Protocol _ boost::asio::ip::tcp_ Executor _ boost::asio::executor_ RatePolicy _ boost::beast::unlimited_rate_policy]::handler,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v6 - 208));
    __asan_handle_no_return(v6 - 208);
    _Unwind_Resume(v33);
  }
  *(_BYTE *)v6 = *(_BYTE *)(v6 + 80);
  *(_QWORD *)v29 = v6;
LABEL_85:
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
