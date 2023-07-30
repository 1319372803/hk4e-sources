// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/io_object_executor.hpp

// Line 32: range 000000000C66D9CC-000000000C66D9E6
void __cdecl boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(
        boost::asio::detail::io_object_executor<boost::asio::executor> *const this)
{
  boost::asio::executor::~executor(&this->executor_);
};

// Line 35: range 000000000C6A1D3A-000000000C6A1DA2
void __cdecl boost::asio::detail::io_object_executor<boost::asio::executor>::io_object_executor(
        boost::asio::detail::io_object_executor<boost::asio::executor> *const this,
        const boost::asio::executor *ex,
        bool native_implementation)
{
  boost::asio::executor::executor(&this->executor_, ex);
  if ( *(char *)(((unsigned __int64)&this->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_native_impl_);
  this->has_native_impl_ = native_implementation;
};

// Line 42: range 000000000C6DBFFA-000000000C6DC095
void __cdecl boost::asio::detail::io_object_executor<boost::asio::executor>::io_object_executor(
        boost::asio::detail::io_object_executor<boost::asio::executor> *const this,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *other)
{
  bool has_native_impl; // cl

  boost::asio::executor::executor(&this->executor_, &other->executor_);
  if ( *(char *)(((unsigned __int64)&other->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&other->has_native_impl_);
  has_native_impl = other->has_native_impl_;
  if ( *(char *)(((unsigned __int64)&this->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_native_impl_);
  this->has_native_impl_ = has_native_impl;
};

// Line 79: range 000000000C6E2754-000000000C6E27AD
void __cdecl boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started(
        const boost::asio::detail::io_object_executor<boost::asio::executor> *const this)
{
  if ( *(char *)(((unsigned __int64)&this->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->has_native_impl_);
  if ( !this->has_native_impl_ )
    boost::asio::executor::on_work_started(&this->executor_);
};

// Line 93: range 000000000C6E8E06-000000000C6E8E5F
void __cdecl boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished(
        const boost::asio::detail::io_object_executor<boost::asio::executor> *const this)
{
  if ( *(char *)(((unsigned __int64)&this->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->has_native_impl_);
  if ( !this->has_native_impl_ )
    boost::asio::executor::on_work_finished(&this->executor_);
};

// Line 108: range 000000000C6EF736-000000000C6EF8C1
void __cdecl boost::asio::detail::io_object_executor<boost::asio::executor>::dispatch<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,std::allocator<void>>(
        const boost::asio::detail::io_object_executor<boost::asio::executor> *const this,
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *f,
        const std::allocator<void> *a)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 12 function:116";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::io_object_executor<boost::asio::executor>::dispatch<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,std::allocator<void>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->has_native_impl_);
  if ( this->has_native_impl_ )
  {
    boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>::binder1(
      (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *const)(v3 + 48),
      f);
    boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>>(
      (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *)(v3 + 48),
      (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *)(v3 + 48));
  }
  else
  {
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,std::allocator<void>>(
      &this->executor_,
      f,
      a);
  }
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 108: range 000000000C6F042A-000000000C6F05B5
void __cdecl boost::asio::detail::io_object_executor<boost::asio::executor>::dispatch<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,std::allocator<void>>(
        const boost::asio::detail::io_object_executor<boost::asio::executor> *const this,
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *f,
        const std::allocator<void> *a)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 12 function:116";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::io_object_executor<boost::asio::executor>::dispatch<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,std::allocator<void>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->has_native_impl_);
  if ( this->has_native_impl_ )
  {
    boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>::binder1(
      (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *const)(v3 + 48),
      f);
    boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>>(
      (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *)(v3 + 48),
      (boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *)(v3 + 48));
  }
  else
  {
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,std::allocator<void>>(
      &this->executor_,
      f,
      a);
  }
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
