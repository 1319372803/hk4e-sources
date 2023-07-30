// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/basic_deadline_timer.hpp

// Line 85: range 0000000014ED7E3E-0000000014ED81AB
std::size_t __fastcall boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::expires_from_now(
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const this,
        const boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::duration_type *expiry_time)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *p_implementation; // r13
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r15
  boost::posix_time::ptime v6; // rax
  boost::date_time::int_adapter<long int>::int_type v7; // r14
  __int64 v8; // rax
  std::size_t result; // rax
  void *p_scheduler; // rdi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *service; // [rsp+8h] [rbp-90h]
  boost::date_time::int_adapter<long int>::int_type value; // [rsp+18h] [rbp-80h]
  char v13[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v4 = v8;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 ec:538";
  *(_QWORD *)(v4 + 16) = boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::expires_from_now;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_DWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 36) = 0;
  *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_12;
  }
  service = this->impl_.service_;
  p_implementation = &this->impl_.implementation_;
  v6.time_.time_count_.value_ = boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time((boost::date_time::microsec_clock<boost::posix_time::ptime>::time_converter)boost::date_time::c_time::gmtime).time_.time_count_.value_;
  if ( *(_BYTE *)(((unsigned __int64)expiry_time >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    v6.time_.time_count_.value_ = __asan_report_load8(expiry_time);
    goto LABEL_13;
  }
  value = expiry_time->ticks_.value_;
  if ( v6.time_.time_count_.value_ != 0x8000000000000000LL
    && v6.time_.time_count_.value_ <= 0x7FFFFFFFFFFFFFFDLL
    && value != 0x8000000000000000LL
    && value <= 0x7FFFFFFFFFFFFFFDLL )
  {
    v7 = v6.time_.time_count_.value_ + value;
    goto LABEL_28;
  }
LABEL_13:
  if ( v6.time_.time_count_.value_ != 0x8000000000000000LL
    && v6.time_.time_count_.value_ <= 0x7FFFFFFFFFFFFFFDLL
    && value != 0x8000000000000000LL
    && value <= 0x7FFFFFFFFFFFFFFDLL )
  {
    goto LABEL_17;
  }
  if ( v6.time_.time_count_.value_ == 0x7FFFFFFFFFFFFFFELL || value == 0x7FFFFFFFFFFFFFFELL )
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
  }
  else if ( v6.time_.time_count_.value_ == 0x7FFFFFFFFFFFFFFFLL && value == 0x8000000000000000LL
         || v6.time_.time_count_.value_ == 0x8000000000000000LL && value == 0x7FFFFFFFFFFFFFFFLL )
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
  }
  else if ( v6.time_.time_count_.value_ == 0x8000000000000000LL || v6.time_.time_count_.value_ == 0x7FFFFFFFFFFFFFFFLL )
  {
    v7 = v6.time_.time_count_.value_;
  }
  else if ( value == 0x7FFFFFFFFFFFFFFFLL )
  {
    v7 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    if ( value != 0x8000000000000000LL )
    {
LABEL_17:
      v7 = v6.time_.time_count_.value_ + value;
      goto LABEL_28;
    }
    v7 = 0x8000000000000000LL;
  }
LABEL_28:
  if ( *(char *)(((unsigned __int64)&p_implementation->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&p_implementation->might_have_pending_waits);
  }
  else if ( !p_implementation->might_have_pending_waits )
  {
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    result = 0LL;
    goto LABEL_31;
  }
  p_scheduler = &service->scheduler_;
  if ( *(_BYTE *)(((unsigned __int64)&service->scheduler_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_scheduler);
    goto LABEL_45;
  }
  result = boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
             service->scheduler_,
             &service->timer_queue_,
             &p_implementation->timer_data,
             0xFFFFFFFFFFFFFFFFLL);
  p_scheduler = &p_implementation->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&p_implementation->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_45:
    __asan_report_store1(p_scheduler);
    goto LABEL_46;
  }
  p_implementation->might_have_pending_waits = 0;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_31:
  if ( *(_BYTE *)(((unsigned __int64)p_implementation >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_store8();
    goto LABEL_47;
  }
  this->impl_.implementation_.expiry.time_.time_count_.value_ = v7;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    return result;
  }
LABEL_47:
  *(_QWORD *)v4 = 1172321806LL;
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  return result;
};

// Line 251: range 000000000C6BAE66-000000000C6BAFC8
void __cdecl boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::basic_deadline_timer<boost::asio::io_context>(
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const this,
        boost::asio::io_context *context,
        const boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::duration_type *expiry_time,
        std::enable_if<true,void>::type *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *service; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *implementation; // rsi
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 ec:258";
  *(_QWORD *)(v4 + 16) = boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::basic_deadline_timer<boost::asio::io_context>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::io_object_impl<boost::asio::io_context>(
    &this->impl_,
    context,
    0LL);
  *(_DWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 36) = 0;
  *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  service = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_from_now(
    service,
    implementation,
    expiry_time,
    (boost::system::error_code *)(v4 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v4 + 32), "expires_from_now");
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 305: range 000000000C66061C-000000000C660636
void __cdecl boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::~basic_deadline_timer(
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const this)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::~io_object_impl(&this->impl_);
};

// Line 439: range 000000000C6C2AD0-000000000C6C2B09
boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::time_type __cdecl boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::expires_at(
        const boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const this)
{
  const boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *service; // rbx
  const boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *implementation; // rax

  service = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_implementation(&this->impl_);
  return boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_at(
           service,
           implementation);
};

// Line 466: range 000000000C6C2B0A-000000000C6C2C3C
std::size_t __cdecl boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::expires_at(
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const this,
        const boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::time_type *expiry_time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *service; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *implementation; // rsi
  std::size_t result; // rax
  std::size_t s; // [rsp+18h] [rbp-78h]
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:468";
  *(_QWORD *)(v2 + 16) = boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::expires_at;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  service = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_implementation(&this->impl_);
  s = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_at(
        service,
        implementation,
        expiry_time,
        (boost::system::error_code *)(v2 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32), "expires_at");
  result = s;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 627: range 000000000C6BB290-000000000C6BB2C1
void __cdecl boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>>>>(
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler)
{
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::initiate_async_wait initiation; // [rsp+17h] [rbp-9h] BYREF
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *v3; // [rsp+18h] [rbp-8h] BYREF

  v3 = this;
  boost::asio::async_initiate<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,void ()(boost::system::error_code),boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::initiate_async_wait,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
    &initiation,
    handler,
    &v3,
    (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> **)handler);
};

// Line 627: range 000000000C6BD40E-000000000C6BD43F
void __cdecl boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>>>>(
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler)
{
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::initiate_async_wait initiation; // [rsp+17h] [rbp-9h] BYREF
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *v3; // [rsp+18h] [rbp-8h] BYREF

  v3 = this;
  boost::asio::async_initiate<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,void ()(boost::system::error_code),boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::initiate_async_wait,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
    &initiation,
    handler,
    &v3,
    (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> **)handler);
};

// Line 642: range 000000000C6CF9F4-000000000C6CFB1A
void __cdecl boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::initiate_async_wait::operator()<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>>>>(
        const boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::initiate_async_wait *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler,
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *self)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *service; // r14
  const boost::asio::detail::io_object_executor<boost::asio::executor> *implementation_executor; // r15
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *v8; // r13
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *implementation; // rax
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 12 handler2:649";
  *(_QWORD *)(v3 + 16) = boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::initiate_async_wait::operator()<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>>>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  boost::asio::detail::non_const_lvalue<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>::non_const_lvalue(
    (boost::asio::detail::non_const_lvalue<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > > *const)(v3 + 32),
    handler);
  service = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_service(&self->impl_);
  implementation_executor = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_implementation_executor(&self->impl_);
  v8 = *(boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > **)(v3 + 32);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_implementation(&self->impl_);
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    service,
    implementation,
    v8,
    implementation_executor);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 642: range 000000000C6D1E1C-000000000C6D1F42
void __cdecl boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::initiate_async_wait::operator()<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>>>>(
        const boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::initiate_async_wait *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler,
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *self)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *service; // r14
  const boost::asio::detail::io_object_executor<boost::asio::executor> *implementation_executor; // r15
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *v8; // r13
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *implementation; // rax
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 12 handler2:649";
  *(_QWORD *)(v3 + 16) = boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::initiate_async_wait::operator()<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>>>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  boost::asio::detail::non_const_lvalue<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>::non_const_lvalue(
    (boost::asio::detail::non_const_lvalue<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > > *const)(v3 + 32),
    handler);
  service = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_service(&self->impl_);
  implementation_executor = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_implementation_executor(&self->impl_);
  v8 = *(boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > **)(v3 + 32);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_implementation(&self->impl_);
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    service,
    implementation,
    v8,
    implementation_executor);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
