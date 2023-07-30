// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/handler_work.hpp

// Line 43: range 000000000C6E94BE-000000000C6E952A
void __cdecl boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::handler_work(
        boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *v3; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::io_object_executor(&this->io_executor_, io_ex);
  v3 = this;
  if ( *(_WORD *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->executor_);
  boost::asio::get_associated_executor<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    (const boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&this->executor_,
    (const boost::asio::detail::io_object_executor<boost::asio::executor> *)handler,
    v3);
};

// Line 43: range 000000000C6EACF2-000000000C6EAD5E
void __cdecl boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::handler_work(
        boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *v3; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::io_object_executor(&this->io_executor_, io_ex);
  v3 = this;
  if ( *(_WORD *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->executor_);
  boost::asio::get_associated_executor<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    (const boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)&this->executor_,
    (const boost::asio::detail::io_object_executor<boost::asio::executor> *)handler,
    v3);
};

// Line 43: range 000000000C6E213C-000000000C6E21A7
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::handler_work(
        boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this,
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *v3; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::io_object_executor(&this->io_executor_, io_ex);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::asio::get_associated_executor<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    (const boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)&this->executor_,
    (const boost::asio::detail::io_object_executor<boost::asio::executor> *)handler,
    v3);
};

// Line 55: range 000000000C6E31DC-000000000C6E32D1
void __cdecl boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::start(
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ex:58";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::start;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::get_associated_executor<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    (const boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)(v2 + 32),
    (const boost::asio::detail::io_object_executor<boost::asio::executor> *)handler,
    (std::enable_if<true,void>::type *)io_ex);
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v2 + 32));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started(io_ex);
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor((boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 55: range 000000000C6E496E-000000000C6E4A63
void __cdecl boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::start(
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ex:58";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::start;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::get_associated_executor<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    (const boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *)(v2 + 32),
    (const boost::asio::detail::io_object_executor<boost::asio::executor> *)handler,
    (std::enable_if<true,void>::type *)io_ex);
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v2 + 32));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started(io_ex);
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor((boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 55: range 000000000C6DC096-000000000C6DC18B
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::start(
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 ex:58";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::start;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::asio::get_associated_executor<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    (const boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)(v2 + 32),
    (const boost::asio::detail::io_object_executor<boost::asio::executor> *)handler,
    (std::enable_if<true,void>::type *)io_ex);
  boost::asio::executor::on_work_started((const boost::asio::executor *const)(v2 + 32));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started(io_ex);
  boost::asio::executor::~executor((boost::asio::executor *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 63: range 000000000C6E952C-000000000C6E9572
void __cdecl boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~handler_work(
        boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this)
{
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->executor_);
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(&this->executor_);
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(&this->io_executor_);
};

// Line 63: range 000000000C6EAD60-000000000C6EADA6
void __cdecl boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~handler_work(
        boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this)
{
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->executor_);
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(&this->executor_);
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(&this->io_executor_);
};

// Line 63: range 000000000C6E21A8-000000000C6E21EE
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  boost::asio::executor::on_work_finished(&this->executor_);
  boost::asio::executor::~executor(&this->executor_);
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(&this->io_executor_);
};

// Line 63: range 0000000014EDAD82-0000000014EDB165
void __fastcall boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // r12
  boost::asio::executor *p_executor; // rdi
  boost::asio::executor::impl_base *v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v12; // rdx
  boost::wrapexcept<boost::asio::bad_executor> *exception; // rbx
  boost::wrapexcept<boost::asio::bad_executor> *v14; // rbx
  __int64 vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  boost::asio::bad_executor _20[4]; // [rsp+20h] [rbp+20h] BYREF

  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_0(64LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 32 8 2 ex";
  vars0[2] = (__int64)boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work;
  v3 = (unsigned __int64)vars0 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(char *)(((unsigned __int64)&this->io_executor_.has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&this->io_executor_.has_native_impl_);
  }
  else if ( this->io_executor_.has_native_impl_ )
  {
    goto LABEL_5;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_27;
  }
  impl = this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
  {
LABEL_27:
    _20[0] = (boost::asio::bad_executor)(&`vtable for'boost::asio::bad_executor + 2);
    exception = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
    if ( *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) <= (((unsigned __int8)exception + 55) & 7)
      || *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_store_n(exception, 56LL);
    }
    boost::exception_detail::enable_both<boost::asio::bad_executor>(exception, _20);
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>,
      (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
  }
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_32;
  }
  v12 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    p_executor = (boost::asio::executor *)v12;
    __asan_report_load8(v12);
    goto LABEL_33;
  }
  (*((void (__fastcall **)(boost::asio::executor::impl_base *, __int64, unsigned __int64))impl->_vptr_impl_base + 4))(
    impl,
    v1,
    v12);
LABEL_5:
  p_executor = &this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_executor);
    goto LABEL_34;
  }
  v5 = this->executor_.impl_;
  if ( !v5 )
  {
LABEL_34:
    _20[0] = (boost::asio::bad_executor)(&`vtable for'boost::asio::bad_executor + 2);
    v14 = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
    if ( *(_BYTE *)(((unsigned __int64)&v14->gap30[7] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v14->gap30[7] >> 3) + 0x7FFF8000) <= (((unsigned __int8)v14 + 55) & 7)
      || *(char *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_store_n(v14, 56LL);
    }
    boost::exception_detail::enable_both<boost::asio::bad_executor>(v14, _20);
    __asan_handle_no_return(v14);
    _cxa_throw(
      v14,
      (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>,
      (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
  }
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v5);
    goto LABEL_39;
  }
  v6 = (unsigned __int64)(v5->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    v7 = v6;
    __asan_report_load8(v6);
    goto LABEL_40;
  }
  (*((void (__fastcall **)(boost::asio::executor::impl_base *, __int64, unsigned __int64))v5->_vptr_impl_base + 4))(
    v5,
    v1,
    v6);
  v7 = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(v7);
LABEL_41:
    __asan_report_load8(v7);
    goto LABEL_42;
  }
  v7 = (unsigned __int64)this->executor_.impl_;
  if ( !v7 )
    goto LABEL_14;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    goto LABEL_41;
  v8 = *(_QWORD *)v7 + 8LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(v8);
    goto LABEL_43;
  }
  (*(void (__fastcall **)(unsigned __int64, __int64, unsigned __int64))(*(_QWORD *)v7 + 8LL))(v7, v1, v8);
LABEL_14:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    v9 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_44:
    __asan_report_load8(v9);
    goto LABEL_45;
  }
  v9 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
  {
LABEL_19:
    *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    goto LABEL_44;
  v10 = *(_QWORD *)v9 + 8LL;
  if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64, __int64, unsigned __int64))(*(_QWORD *)v9 + 8LL))(v9, v1, v10);
    goto LABEL_19;
  }
LABEL_45:
  __asan_report_load8(v10);
  vars0[0] = 1172321806LL;
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 63: range 0000000019B9FCAE-0000000019BA0452
void __fastcall boost::asio::detail::handler_work<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v7);
    JUMPOUT(0x19B9FDB5LL);
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000014EC4074-0000000014EC4438
void __fastcall boost::asio::detail::handler_work<boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~handler_work(
        boost::asio::detail::handler_work<boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<const boost::asio::const_buffer*,std::vector<boost::asio::const_buffer> >,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString()::<lambda(const boost::system::error_code&,size_t)> >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const bool *p_has_native_impl; // rdi
  boost::asio::executor::impl_base *impl; // rdi
  boost::wrapexcept<boost::asio::bad_executor> *exception; // rbx
  __int64 vptr_impl_base; // rax
  unsigned __int64 p_executor; // rdi
  boost::asio::executor::impl_base *v10; // rdi
  boost::wrapexcept<boost::asio::bad_executor> *v11; // rbx
  __int64 v12; // rax
  boost::asio::executor::impl_base *v13; // rdi
  __int64 v14; // rax
  boost::asio::executor::impl_base *v15; // rdi
  __int64 v16; // rax
  _BYTE v17[104]; // [rsp+0h] [rbp-68h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 2 ex";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::handler_work<boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~handler_work;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  p_has_native_impl = &this->io_executor_.has_native_impl_;
  if ( *(char *)(((unsigned __int64)&this->io_executor_.has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_has_native_impl);
  if ( !this->io_executor_.has_native_impl_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    impl = this->io_executor_.executor_.impl_;
    if ( !this->io_executor_.executor_.impl_ )
    {
      *(_QWORD *)(v2 + 32) = &`vtable for'boost::asio::bad_executor + 2;
      exception = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
      if ( *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) <= (((unsigned __int8)exception + 55) & 7)
        || *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0 )
      {
        __asan_report_store_n(exception, 56LL);
      }
      boost::exception_detail::enable_both<boost::asio::bad_executor>(
        exception,
        (const boost::asio::bad_executor *)(v2 + 32));
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>,
        (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
    }
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
      __asan_report_load8(impl);
    vptr_impl_base = (__int64)impl->_vptr_impl_base;
    if ( *(_BYTE *)(((unsigned __int64)(impl->_vptr_impl_base + 4) >> 3) + 0x7FFF8000) )
      vptr_impl_base = __asan_report_load8(impl->_vptr_impl_base + 4);
    (*(void (**)(void))(vptr_impl_base + 32))();
  }
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(char *)(((unsigned __int64)&this->executor_.has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
    p_executor = (unsigned __int64)&this->executor_.has_native_impl_;
    __asan_report_load1(&this->executor_.has_native_impl_);
  }
  if ( !*(_BYTE *)(p_executor + 8) )
  {
    if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_executor);
    v10 = this->executor_.executor_.impl_;
    if ( !v10 )
    {
      *(_QWORD *)(v2 + 32) = &`vtable for'boost::asio::bad_executor + 2;
      v11 = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
      if ( *(_BYTE *)(((unsigned __int64)&v11->gap30[7] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->gap30[7] >> 3) + 0x7FFF8000) <= (((unsigned __int8)v11 + 55) & 7)
        || *(char *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) < 0 )
      {
        __asan_report_store_n(v11, 56LL);
      }
      boost::exception_detail::enable_both<boost::asio::bad_executor>(v11, (const boost::asio::bad_executor *)(v2 + 32));
      __asan_handle_no_return(v11);
      _cxa_throw(
        v11,
        (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>,
        (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
    }
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    v12 = (__int64)v10->_vptr_impl_base;
    if ( *(_BYTE *)(((unsigned __int64)(v10->_vptr_impl_base + 4) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v10->_vptr_impl_base + 4);
    (*(void (**)(void))(v12 + 32))();
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->executor_);
  v13 = this->executor_.executor_.impl_;
  if ( v13 )
  {
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v14 = (__int64)v13->_vptr_impl_base;
    if ( *(_BYTE *)(((unsigned __int64)(v13->_vptr_impl_base + 1) >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_impl_base + 1);
    (*(void (**)(void))(v14 + 8))();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v15 = this->io_executor_.executor_.impl_;
  if ( this->io_executor_.executor_.impl_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v15);
    v16 = (__int64)v15->_vptr_impl_base;
    if ( *(_BYTE *)(((unsigned __int64)(v15->_vptr_impl_base + 1) >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8(v15->_vptr_impl_base + 1);
    (*(void (**)(void))(v16 + 8))();
  }
  if ( v17 == (_BYTE *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 63: range 0000000019C0DEA8-0000000019C0E800
void __fastcall boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v7);
    JUMPOUT(0x19C0DFAFLL);
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019BBC5B2-0000000019BBCB2F
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v7);
    JUMPOUT(0x19BBC6B9LL);
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019C0CD12-0000000019C0DEA6
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v7);
    JUMPOUT(0x19C0CE19LL);
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019BBCB30-0000000019BBCD2F
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v7);
    JUMPOUT(0x19BBCC37LL);
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019C735D0-0000000019C7374E
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *v8; // rdi

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v8 = (boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *)v7;
    __asan_report_load8(v7);
    boost::beast::asio_handler_is_continuation<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>(v8);
    return;
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019C73A4A-0000000019C73BC8
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *v8; // rdi

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v8 = (boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *)v7;
    __asan_report_load8(v7);
    boost::beast::asio_handler_is_continuation<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>(v8);
    return;
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019C741CA-0000000019C742E2
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *v1; // rsi
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v4; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  std::size_t v9; // rdi

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v4 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v4;
    __asan_report_load8(v4);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v6 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v6);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v7 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v7);
    goto LABEL_21;
  }
  v7 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v8 = *(_QWORD *)v7 + 8LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v9 = v8;
    __asan_report_load8(v8);
    boost::beast::asio_handler_allocate<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>(
      v9,
      v1);
    return;
  }
  (*(void (**)(void))(*(_QWORD *)v7 + 8LL))();
};

// Line 63: range 0000000019C73750-0000000019C738CE
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *v8; // rdi

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v8 = (boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *)v7;
    __asan_report_load8(v7);
    boost::beast::asio_handler_is_continuation<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>(v8);
    return;
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019C7404A-0000000019C741C8
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *v8; // rdi

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v8 = (boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *)v7;
    __asan_report_load8(v7);
    boost::beast::asio_handler_is_continuation<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>(v8);
    return;
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019C73BCA-0000000019C73D48
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *v8; // rdi

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v8 = (boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *)v7;
    __asan_report_load8(v7);
    boost::beast::asio_handler_is_continuation<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>(v8);
    return;
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019C73ECA-0000000019C74048
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *v8; // rdi

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v8 = (boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *)v7;
    __asan_report_load8(v7);
    boost::beast::asio_handler_is_continuation<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>(v8);
    return;
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019C73D4A-0000000019C73EC8
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *v8; // rdi

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v8 = (boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *)v7;
    __asan_report_load8(v7);
    boost::beast::asio_handler_is_continuation<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>(v8);
    return;
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019C738D0-0000000019C73A48
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *v8; // rdi

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v8 = (boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *)v7;
    __asan_report_load8(v7);
    boost::beast::asio_handler_is_continuation<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>(v8);
    return;
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019C00618-0000000019C00E68
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>,boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> >,boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v7);
    JUMPOUT(0x19C0071FLL);
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019BA6770-0000000019BA7435
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<true,boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<true,boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v7);
    JUMPOUT(0x19BA6877LL);
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 63: range 0000000019BA7722-0000000019BA78A6
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<true,boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<true,boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> >,boost::asio::executor,std::allocator<void> > *v1; // rsi
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v4; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  std::size_t v9; // rdi

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v4 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v4;
    __asan_report_load8(v4);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v6 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v6);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v7 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v7);
    goto LABEL_21;
  }
  v7 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v8 = *(_QWORD *)v7 + 8LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    v9 = v8;
    __asan_report_load8(v8);
    boost::beast::asio_handler_allocate<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>,boost::asio::executor,std::allocator<void>>(
      v9,
      v1);
    return;
  }
  (*(void (**)(void))(*(_QWORD *)v7 + 8LL))();
};

// Line 63: range 0000000019C66B2C-0000000019C6737C
void __fastcall boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<true,boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(
        boost::asio::detail::handler_work<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<true,boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 p_executor; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(&this->io_executor_);
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_15;
  }
  v3 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    p_executor = v3;
    __asan_report_load8(v3);
    goto LABEL_16;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  p_executor = (unsigned __int64)&this->executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_executor);
LABEL_17:
    __asan_report_load8(p_executor);
    goto LABEL_18;
  }
  p_executor = (unsigned __int64)this->executor_.impl_;
  if ( !p_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_executor >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v5 = *(_QWORD *)p_executor + 8LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v5);
    goto LABEL_19;
  }
  (*(void (**)(void))(*(_QWORD *)p_executor + 8LL))();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v6 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_20:
    __asan_report_load8(v6);
    goto LABEL_21;
  }
  v6 = (unsigned __int64)this->io_executor_.executor_.impl_;
  if ( !this->io_executor_.executor_.impl_ )
    return;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  v7 = *(_QWORD *)v6 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v7);
    JUMPOUT(0x19C66C33LL);
  }
  (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
};

// Line 70: range 000000000C6E96D8-000000000C6E971B
void __cdecl boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::complete<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>>(
        boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this,
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *function,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler)
{
  std::allocator<void> a; // [rsp+2Fh] [rbp-11h] BYREF

  boost::asio::get_associated_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>(handler);
  boost::asio::detail::io_object_executor<boost::asio::executor>::dispatch<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,std::allocator<void>>(
    &this->executor_,
    function,
    &a);
};

// Line 70: range 000000000C6EAF0C-000000000C6EAF4F
void __cdecl boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::complete<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>>(
        boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this,
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *function,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler)
{
  std::allocator<void> a; // [rsp+2Fh] [rbp-11h] BYREF

  boost::asio::get_associated_allocator<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>(handler);
  boost::asio::detail::io_object_executor<boost::asio::executor>::dispatch<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,std::allocator<void>>(
    &this->executor_,
    function,
    &a);
};

// Line 70: range 000000000C6E23AC-000000000C6E23EF
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::complete<boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>>(
        boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const this,
        boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *function,
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *handler)
{
  std::allocator<void> a; // [rsp+2Fh] [rbp-11h] BYREF

  boost::asio::get_associated_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>(handler);
  boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>,std::allocator<void>>(
    &this->executor_,
    function,
    &a);
};

// Line 93: range 000000000C6D6106-000000000C6D6114
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::system_executor,boost::asio::system_executor>::handler_work(
        boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,boost::asio::system_executor,boost::asio::system_executor> *const this,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *a2)
{
  ;
};

// Line 93: range 000000000C6D8616-000000000C6D8624
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::system_executor,boost::asio::system_executor>::handler_work(
        boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,boost::asio::system_executor,boost::asio::system_executor> *const this,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *a2)
{
  ;
};

// Line 93: range 000000000C7099DC-000000000C7099EA
void __cdecl boost::asio::detail::handler_work<boost::asio::executor::function,boost::asio::system_executor,boost::asio::system_executor>::handler_work(
        boost::asio::detail::handler_work<boost::asio::executor::function,boost::asio::system_executor,boost::asio::system_executor> *const this,
        boost::asio::executor::function *a2)
{
  ;
};

// Line 94: range 000000000C6D60FA-000000000C6D6104
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::system_executor,boost::asio::system_executor>::start(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *a1)
{
  ;
};

// Line 94: range 000000000C6D860A-000000000C6D8614
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::system_executor,boost::asio::system_executor>::start(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *a1)
{
  ;
};

// Line 94: range 000000000C7099D0-000000000C7099DA
void __cdecl boost::asio::detail::handler_work<boost::asio::executor::function,boost::asio::system_executor,boost::asio::system_executor>::start(
        boost::asio::executor::function *a1)
{
  ;
};

// Line 95: range 000000000C6D6116-000000000C6D6120
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::system_executor,boost::asio::system_executor>::~handler_work(
        boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,boost::asio::system_executor,boost::asio::system_executor> *const this)
{
  ;
};

// Line 95: range 000000000C6D8626-000000000C6D8630
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::system_executor,boost::asio::system_executor>::~handler_work(
        boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,boost::asio::system_executor,boost::asio::system_executor> *const this)
{
  ;
};

// Line 95: range 000000000C7099EC-000000000C7099F6
void __cdecl boost::asio::detail::handler_work<boost::asio::executor::function,boost::asio::system_executor,boost::asio::system_executor>::~handler_work(
        boost::asio::detail::handler_work<boost::asio::executor::function,boost::asio::system_executor,boost::asio::system_executor> *const this)
{
  ;
};

// Line 98: range 000000000C6D6122-000000000C6D614B
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::system_executor,boost::asio::system_executor>::complete<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(
        boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,boost::asio::system_executor,boost::asio::system_executor> *const this,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *function,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *handler)
{
  boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(
    function,
    handler);
};

// Line 98: range 000000000C6D8632-000000000C6D865B
void __cdecl boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::system_executor,boost::asio::system_executor>::complete<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(
        boost::asio::detail::handler_work<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,boost::asio::system_executor,boost::asio::system_executor> *const this,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *function,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *handler)
{
  boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(
    function,
    handler);
};

// Line 98: range 000000000C7099F8-000000000C709A21
void __cdecl boost::asio::detail::handler_work<boost::asio::executor::function,boost::asio::system_executor,boost::asio::system_executor>::complete<boost::asio::executor::function>(
        boost::asio::detail::handler_work<boost::asio::executor::function,boost::asio::system_executor,boost::asio::system_executor> *const this,
        boost::asio::executor::function *function,
        boost::asio::executor::function *handler)
{
  boost_asio_handler_invoke_helpers::invoke<boost::asio::executor::function,boost::asio::executor::function>(
    function,
    handler);
};
