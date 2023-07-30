// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/deadline_timer_service.hpp

// Line 58: range 000000000C6C28C4-000000000C6C291D
void __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::implementation_type::implementation_type(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *const this)
{
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  boost::posix_time::ptime::ptime(&this->expiry);
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data::per_timer_data(&this->timer_data);
};

// Line 58: range 000000000C66D9A0-000000000C66D9CA
void __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::implementation_type::~implementation_type(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *const this)
{
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data::~per_timer_data(&this->timer_data);
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 67: range 000000000C6DC9F4-000000000C6DCB18
void __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::deadline_timer_service(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::execution_context *context)
{
  int (**v2)(...); // rdx
  boost::asio::detail::epoll_reactor *v3; // rax

  boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::execution_context_service_base(
    this,
    context);
  v2 = (int (**)(...))(&`vtable for'boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v2;
  boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::timer_queue(&this->timer_queue_);
  v3 = boost::asio::use_service<boost::asio::detail::epoll_reactor>(context);
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->scheduler_ = v3;
  boost::asio::detail::epoll_reactor::init_task(this->scheduler_);
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  boost::asio::detail::epoll_reactor::add_timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>(
    this->scheduler_,
    &this->timer_queue_);
};

// Line 77: range 000000000C706CDA-000000000C706D77
void __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::~deadline_timer_service(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  boost::asio::detail::epoll_reactor::remove_timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>(
    this->scheduler_,
    &this->timer_queue_);
  boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::~timer_queue(&this->timer_queue_);
  boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~execution_context_service_base(this);
};

// Line 77: range 000000000C706D78-000000000C706DA2
void __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::~deadline_timer_service(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this)
{
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::~deadline_timer_service(this);
  operator delete(this, 0x70uLL);
};

// Line 77: range 0000000019CFE7E6-0000000019CFEB5E
void __fastcall boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::~deadline_timer_service(
        boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *const this)
{
  boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *p_timer_queue; // rbp
  boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *v2; // rbx
  boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *p_heap; // rdi
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer M_start; // rdi

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  this->_vptr_service = (int (**)(...))(&`vtable for'boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>
                                      + 2);
  this = (boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *const)((char *)this + 88);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(this);
    goto LABEL_10;
  }
  p_timer_queue = (boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)&v2->timer_queue_;
  boost::asio::detail::epoll_reactor::remove_timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>(
    v2->scheduler_,
    &v2->timer_queue_);
  if ( *(_BYTE *)(((unsigned __int64)&v2->timer_queue_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    p_heap = p_timer_queue;
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->timer_queue_._vptr_timer_queue_base = (int (**)(...))(&`vtable for'boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>
                                                          + 2);
  p_heap = (boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)&v2->timer_queue_.heap_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->timer_queue_.heap_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(p_heap);
    boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::~deadline_timer_service(p_heap);
    return;
  }
  M_start = v2->timer_queue_.heap_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
};

// Line 83: range 000000000C706DA4-000000000C706DAE
void __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::shutdown(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this)
{
  ;
};

// Line 88: range 000000000C6CA5C8-000000000C6CA64D
void __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::construct(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl)
{
  boost::posix_time::ptime v2; // [rsp+18h] [rbp-8h] BYREF

  boost::posix_time::ptime::ptime(&v2);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  impl->expiry = v2;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&impl->might_have_pending_waits);
  impl->might_have_pending_waits = 0;
};

// Line 95: range 000000000C67A382-000000000C67A460
void __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::destroy(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl)
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
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ec:97";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::destroy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    this,
    impl,
    (boost::system::error_code *)(v2 + 32));
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

// Line 134: range 000000000C683200-000000000C68337C
std::size_t __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::system::error_code *ec)
{
  const boost::system::error_category *cat; // rdx
  boost::asio::detail::epoll_reactor *scheduler; // rbx
  unsigned __int64 v6; // rax
  const boost::system::error_category *v7; // rdx
  std::size_t count; // [rsp+28h] [rbp-28h]
  boost::system::error_code v10; // [rsp+30h] [rbp-20h] BYREF

  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&impl->might_have_pending_waits);
  if ( !impl->might_have_pending_waits )
  {
    boost::system::error_code::error_code(&v10);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_store16(ec);
    cat = v10.cat_;
    *(_QWORD *)&ec->val_ = *(_QWORD *)&v10.val_;
    ec->cat_ = cat;
    return 0LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->scheduler_);
    scheduler = this->scheduler_;
    v6 = std::numeric_limits<unsigned long>::max();
    count = boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
              scheduler,
              &this->timer_queue_,
              &impl->timer_data,
              v6);
    if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&impl->might_have_pending_waits);
    impl->might_have_pending_waits = 0;
    boost::system::error_code::error_code(&v10);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_store16(ec);
    v7 = v10.cat_;
    *(_QWORD *)&ec->val_ = *(_QWORD *)&v10.val_;
    ec->cat_ = v7;
    return count;
  }
};

// Line 179: range 000000000C6CA760-000000000C6CA799
boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::time_type __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_at(
        const boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        const boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl)
{
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_load8(impl);
  return (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::time_type)impl->expiry.time_.time_count_.value_;
};

// Line 191: range 000000000C6CA64E-000000000C6CA717
std::size_t __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_at(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        const boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::time_type *expiry_time,
        boost::system::error_code *ec)
{
  const boost::system::error_category *cat; // rdx
  std::size_t count; // [rsp+28h] [rbp-18h]
  boost::system::error_code v9; // [rsp+30h] [rbp-10h] BYREF

  count = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
            this,
            impl,
            ec);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)expiry_time >> 3) + 0x7FFF8000) )
    __asan_report_load8(expiry_time);
  impl->expiry = (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::time_type)expiry_time->time_.time_count_.value_;
  boost::system::error_code::error_code(&v9);
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_store16(ec);
  cat = v9.cat_;
  *(_QWORD *)&ec->val_ = *(_QWORD *)&v9.val_;
  ec->cat_ = cat;
  return count;
};

// Line 209: range 000000000C6C2A7E-000000000C6C2ACF
std::size_t __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_from_now(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        const boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::duration_type *expiry_time,
        boost::system::error_code *ec)
{
  boost::asio::time_traits<boost::posix_time::ptime>::time_type t; // [rsp+20h] [rbp-10h] BYREF
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::time_type v8; // [rsp+28h] [rbp-8h] BYREF

  t.time_.time_count_.value_ = boost::asio::time_traits<boost::posix_time::ptime>::now().time_.time_count_.value_;
  v8.time_.time_count_.value_ = boost::asio::time_traits<boost::posix_time::ptime>::add(&t, expiry_time).time_.time_count_.value_;
  return boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::expires_at(
           this,
           impl,
           &v8,
           ec);
};

// Line 231: range 000000000C6D6296-000000000C6D64DD
void __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *v7; // r14
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 5 p:236";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 32) = std::addressof<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>(handler);
  *(_QWORD *)(v4 + 40) = boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::allocate(handler);
  v7 = (boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *)operator new(0x58uLL, *(void **)(v4 + 40));
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::wait_handler(
    v7,
    handler,
    io_ex);
  *(_QWORD *)(v4 + 48) = v7;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&impl->might_have_pending_waits);
  impl->might_have_pending_waits = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
    this->scheduler_,
    &this->timer_queue_,
    &impl->expiry,
    &impl->timer_data,
    *(boost::asio::detail::wait_op **)(v4 + 48));
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 48);
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::~ptr((boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 32));
  if ( v10 == (char *)v4 )
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

// Line 231: range 000000000C6D86C4-000000000C6D890B
void __cdecl boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *v7; // r14
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 5 p:236";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 32) = std::addressof<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>(handler);
  *(_QWORD *)(v4 + 40) = boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::allocate(handler);
  v7 = (boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> > *)operator new(0x58uLL, *(void **)(v4 + 40));
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::wait_handler(
    v7,
    handler,
    io_ex);
  *(_QWORD *)(v4 + 48) = v7;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&impl->might_have_pending_waits);
  impl->might_have_pending_waits = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
    this->scheduler_,
    &this->timer_queue_,
    &impl->expiry,
    &impl->timer_data,
    *(boost::asio::detail::wait_op **)(v4 + 48));
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 48);
  boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::~ptr((boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 32));
  if ( v10 == (char *)v4 )
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

// Line 231: range 0000000019B93B84-0000000019B942A2
void __fastcall boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::async_wait<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::implementation_type *impl,
        boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor> *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // r13
  _DWORD *v8; // r15
  __int64 v9; // rdi
  const boost::asio::detail::io_object_executor<boost::asio::executor> *v10; // rdi
  char v11; // al
  char v12; // al
  char v13; // al
  unsigned __int64 v14; // rdi
  __int64 (**v15)(void); // rax
  __int64 v16; // rax
  const boost::asio::detail::io_object_executor<boost::asio::executor> *v17; // rdi
  unsigned __int64 v18; // rdi
  __int64 (**v19)(void); // rax
  __int64 v20; // rax
  const bool *p_has_native_impl; // rdi
  unsigned __int64 v22; // rdi
  __int64 (**v23)(void); // rax
  boost::asio::executor::impl_base *v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  unsigned __int64 p_might_have_pending_waits; // rdi
  __int64 v29; // rax
  unsigned __int64 v31; // [rsp+10h] [rbp-C8h]
  char v32[184]; // [rsp+20h] [rbp-B8h] BYREF

  v5 = (unsigned __int64)handler;
  v7 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v29 = __asan_stack_malloc_1(128LL);
    if ( v29 )
      v7 = v29;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 8 2 ex 64 24 5 p:236";
  *(_QWORD *)(v7 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::async_wait<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218103808;
  v8[536862723] = -202116109;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 64) = v5;
  v9 = *(__int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                  + __readfsqword(0));
  if ( v9 )
  {
    handler = (boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor> *)((unsigned __int64)(v9 + 8) >> 3);
    if ( LOBYTE(handler[53686272].executor_.impl_) )
    {
      __asan_report_load8(v9 + 8);
      goto LABEL_53;
    }
    v9 = *(_QWORD *)(v9 + 8);
  }
  v4 = (unsigned __int64)boost::asio::detail::thread_info_base::allocate<boost::asio::detail::thread_info_base::default_tag>(
                           (boost::asio::detail::thread_info_base::default_tag)v9,
                           (boost::asio::detail::thread_info_base *)0x60,
                           (std::size_t)handler);
  *(_QWORD *)(v7 + 72) = v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    v10 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)v4;
    __asan_report_store8();
    goto LABEL_54;
  }
  *(_QWORD *)v4 = 0LL;
  v10 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v4 + 8);
  if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
LABEL_55:
    __asan_report_store4(v10);
LABEL_56:
    __asan_report_store4(v10);
LABEL_57:
    __asan_report_store1(v10);
    goto LABEL_58;
  }
  *(_QWORD *)(v4 + 8) = boost::asio::detail::wait_handler<boost::asio::executor_binder<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::timeout_handler,boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v10 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v4 + 16);
  v11 = *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_55;
  *(_DWORD *)(v4 + 16) = 0;
  v10 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v4 + 24);
  v12 = *(_BYTE *)(((v4 + 24) >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_56;
  *(_DWORD *)(v4 + 24) = 0;
  v10 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v4 + 28);
  v13 = *(_BYTE *)(((v4 + 28) >> 3) + 0x7FFF8000);
  if ( v13 <= (char)((v4 + 28) & 7) && v13 )
    goto LABEL_57;
  *(_BYTE *)(v4 + 28) = 0;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)(v4 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v31 = v4 + 40;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    v14 = v5;
    __asan_report_load8(v5);
LABEL_60:
    v15 = (__int64 (**)(void))__asan_report_load8(v14);
    goto LABEL_61;
  }
  v14 = *(_QWORD *)v5;
  if ( !*(_QWORD *)v5 )
    goto LABEL_19;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    goto LABEL_60;
  v15 = *(__int64 (***)(void))v14;
  if ( *(_BYTE *)((*(_QWORD *)v14 >> 3) + 0x7FFF8000LL) )
  {
LABEL_61:
    v16 = __asan_report_load8(v15);
    goto LABEL_62;
  }
  v14 = (*v15)();
LABEL_19:
  v16 = v4 + 40;
  if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    v17 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)v16;
    __asan_report_store8();
    goto LABEL_63;
  }
  *(_QWORD *)(v4 + 40) = v14;
  v17 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v5 + 8);
  if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(v17);
    goto LABEL_64;
  }
  v17 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v4 + 48);
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_store8();
    goto LABEL_65;
  }
  *(_QWORD *)(v4 + 48) = *(_QWORD *)(v5 + 8);
  v17 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v5 + 16);
  if ( *(_BYTE *)(((v5 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(v17);
    goto LABEL_66;
  }
  v17 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v4 + 56);
  if ( *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_store8();
    goto LABEL_67;
  }
  *(_QWORD *)(v4 + 56) = *(_QWORD *)(v5 + 16);
  v17 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v5 + 24);
  if ( *(_BYTE *)(((v5 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(v17);
    goto LABEL_68;
  }
  v17 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v4 + 64);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
    goto LABEL_69;
  }
  *(_QWORD *)(v4 + 64) = *(_QWORD *)(v5 + 24);
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_QWORD *)(v5 + 16) = 0LL;
  v17 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)(v5 + 32);
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(v17);
    goto LABEL_70;
  }
  if ( *(_BYTE *)(((v4 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_store8();
    goto LABEL_71;
  }
  *(_QWORD *)(v4 + 72) = *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(((unsigned __int64)io_ex >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    v18 = (unsigned __int64)io_ex;
    __asan_report_load8(io_ex);
LABEL_72:
    v19 = (__int64 (**)(void))__asan_report_load8(v18);
    goto LABEL_73;
  }
  v18 = (unsigned __int64)io_ex->executor_.impl_;
  if ( !io_ex->executor_.impl_ )
    goto LABEL_33;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v19 = *(__int64 (***)(void))v18;
  if ( *(_BYTE *)((*(_QWORD *)v18 >> 3) + 0x7FFF8000LL) )
  {
LABEL_73:
    v20 = __asan_report_load8(v19);
    goto LABEL_74;
  }
  v18 = (*v19)();
LABEL_33:
  v20 = v4 + 80;
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    p_has_native_impl = (const bool *)v20;
    __asan_report_store8();
    goto LABEL_75;
  }
  *(_QWORD *)(v4 + 80) = v18;
  p_has_native_impl = &io_ex->has_native_impl_;
  if ( *(char *)(((unsigned __int64)&io_ex->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_75:
    __asan_report_load1(p_has_native_impl);
    goto LABEL_76;
  }
  p_has_native_impl = (const bool *)(v4 + 88);
  if ( *(char *)(((v4 + 88) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_76:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_77;
  }
  *(_BYTE *)(v4 + 88) = io_ex->has_native_impl_;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    v22 = v31;
    __asan_report_load8(v31);
LABEL_78:
    v23 = (__int64 (**)(void))__asan_report_load8(v22);
    goto LABEL_79;
  }
  v22 = *(_QWORD *)(v4 + 40);
  if ( !v22 )
    goto LABEL_41;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    goto LABEL_78;
  v23 = *(__int64 (***)(void))v22;
  if ( *(_BYTE *)((*(_QWORD *)v22 >> 3) + 0x7FFF8000LL) )
  {
LABEL_79:
    v24 = (boost::asio::executor::impl_base *)v23;
    __asan_report_load8(v23);
    goto LABEL_80;
  }
  v22 = (*v23)();
LABEL_41:
  *(_QWORD *)(v7 + 32) = v22;
  v24 = boost::asio::executor::get_impl((const boost::asio::executor *const)(v7 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_load8(v24);
    goto LABEL_81;
  }
  v25 = (unsigned __int64)(v24->_vptr_impl_base + 3);
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    v26 = v25;
    __asan_report_load8(v25);
LABEL_82:
    __asan_report_load8(v26);
    goto LABEL_83;
  }
  (*((void (**)(void))v24->_vptr_impl_base + 3))();
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 80));
  v26 = *(_QWORD *)(v7 + 32);
  if ( !v26 )
    goto LABEL_47;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
    goto LABEL_82;
  v27 = *(_QWORD *)v26 + 8LL;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    p_might_have_pending_waits = v27;
    __asan_report_load8(v27);
    goto LABEL_84;
  }
  (*(void (**)(void))(*(_QWORD *)v26 + 8LL))();
LABEL_47:
  *(_QWORD *)(v7 + 80) = v4;
  p_might_have_pending_waits = (unsigned __int64)&impl->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_84:
    __asan_report_store1(p_might_have_pending_waits);
    goto LABEL_85;
  }
  impl->might_have_pending_waits = 1;
  p_might_have_pending_waits = (unsigned __int64)&this->scheduler_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
  {
    boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>(
      this->scheduler_,
      &this->timer_queue_,
      &impl->expiry,
      &impl->timer_data,
      *(boost::asio::detail::wait_op **)(v7 + 80));
    goto LABEL_86;
  }
LABEL_85:
  __asan_report_load8(p_might_have_pending_waits);
LABEL_86:
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  if ( v32 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 231: range 0000000019C6560C-0000000019C65D25
void __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r14
  _DWORD *v7; // r15
  unsigned __int64 v8; // rbx
  char *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // al
  unsigned __int64 p_core; // rdi
  char v14; // al
  char v15; // al
  char v16; // dl
  char v17; // dl
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rdi
  __int64 (**v21)(void); // rax
  __int64 v22; // rax
  unsigned __int64 p_has_native_impl; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 p_might_have_pending_waits; // rdi
  __int64 v28; // rax
  char v31[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v28 = __asan_stack_malloc_1(128LL);
    if ( v28 )
      v6 = v28;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 2 ex 64 24 5 p:236";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 64) = handler;
  v8 = (unsigned __int64)boost::beast::asio_handler_allocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
                           0x168uLL,
                           &handler->handler_);
  *(_QWORD *)(v6 + 72) = v8;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v9 = (char *)v8;
    __asan_report_store8();
    goto LABEL_54;
  }
  *(_QWORD *)v8 = 0LL;
  v9 = (char *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
LABEL_55:
    __asan_report_store4(v9);
LABEL_56:
    __asan_report_store4(v9);
LABEL_57:
    __asan_report_store1(v9);
    goto LABEL_58;
  }
  *(_QWORD *)(v8 + 8) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v9 = (char *)(v8 + 16);
  v10 = *(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_55;
  *(_DWORD *)(v8 + 16) = 0;
  v9 = (char *)(v8 + 24);
  v11 = *(_BYTE *)(((v8 + 24) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_56;
  *(_DWORD *)(v8 + 24) = 0;
  v9 = (char *)(v8 + 28);
  v12 = *(_BYTE *)(((v8 + 28) >> 3) + 0x7FFF8000);
  if ( v12 <= (char)((v8 + 28) & 7) && v12 )
    goto LABEL_57;
  *(_BYTE *)(v8 + 28) = 0;
  if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)(v8 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v4 = v8 + 40;
  if ( *(_BYTE *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(handler);
    goto LABEL_60;
  }
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    p_core = v4;
    __asan_report_store8();
    goto LABEL_61;
  }
  *(_QWORD *)(v8 + 40) = handler->next_layer_;
  p_core = (unsigned __int64)&handler->core_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_load8(p_core);
    goto LABEL_62;
  }
  p_core = v8 + 48;
  if ( *(_BYTE *)(((v8 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_store8();
    goto LABEL_63;
  }
  *(_QWORD *)(v8 + 48) = handler->core_;
  p_core = v8 + 56;
  if ( *(_WORD *)(((v8 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_store16(p_core);
    goto LABEL_64;
  }
  p_core = (unsigned __int64)&handler->op_;
  if ( *(_WORD *)(((unsigned __int64)&handler->op_ >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load16(p_core);
LABEL_65:
    __asan_report_load4(p_core);
LABEL_66:
    __asan_report_store4(p_core);
LABEL_67:
    __asan_report_load4(p_core);
LABEL_68:
    __asan_report_store4(p_core);
    goto LABEL_69;
  }
  *(__m128i *)(v8 + 56) = _mm_loadu_si128((const __m128i *)&handler->op_);
  p_core = (unsigned __int64)&handler->start_;
  v14 = *(_BYTE *)(((unsigned __int64)&handler->start_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_65;
  p_core = v8 + 72;
  v15 = *(_BYTE *)(((v8 + 72) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_66;
  *(_DWORD *)(v8 + 72) = handler->start_;
  p_core = (unsigned __int64)&handler->want_;
  v16 = *(_BYTE *)(((unsigned __int64)&handler->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)handler + 36) & 7) + 3) >= v16 && v16 )
    goto LABEL_67;
  p_core = v8 + 76;
  v17 = *(_BYTE *)(((v8 + 76) >> 3) + 0x7FFF8000);
  if ( (char)(((v8 + 76) & 7) + 3) >= v17 && v17 )
    goto LABEL_68;
  *(_DWORD *)(v8 + 76) = handler->want_;
  p_core = v8 + 80;
  if ( *(_WORD *)(((v8 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_store16(p_core);
    goto LABEL_70;
  }
  p_core = (unsigned __int64)&handler->ec_;
  if ( *(_WORD *)(((unsigned __int64)&handler->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load16(p_core);
    goto LABEL_71;
  }
  *(__m128i *)(v8 + 80) = _mm_loadu_si128((const __m128i *)&handler->ec_);
  p_core = (unsigned __int64)&handler->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(p_core);
    goto LABEL_72;
  }
  p_core = v8 + 96;
  if ( *(_BYTE *)(((v8 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_store8();
LABEL_73:
    __asan_report_store4(p_core);
LABEL_74:
    __asan_report_load4(p_core);
    goto LABEL_75;
  }
  *(_QWORD *)(v8 + 96) = handler->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 104),
    &handler->handler_);
  p_core = v8 + 336;
  v18 = *(_BYTE *)(((v8 + 336) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_73;
  p_core = (unsigned __int64)&handler->handler_.boost::asio::coroutine;
  v19 = *(_BYTE *)(((unsigned __int64)&handler->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_74;
  *(_DWORD *)(v8 + 336) = handler->handler_.value_;
  if ( *(_BYTE *)(((v8 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_store8();
    goto LABEL_76;
  }
  *(_QWORD *)(v8 + 104) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  if ( *(_BYTE *)(((unsigned __int64)io_ex >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    v20 = (unsigned __int64)io_ex;
    __asan_report_load8(io_ex);
LABEL_77:
    v21 = (__int64 (**)(void))__asan_report_load8(v20);
    goto LABEL_78;
  }
  v20 = (unsigned __int64)io_ex->executor_.impl_;
  if ( !io_ex->executor_.impl_ )
    goto LABEL_39;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v21 = *(__int64 (***)(void))v20;
  if ( *(_BYTE *)((*(_QWORD *)v20 >> 3) + 0x7FFF8000LL) )
  {
LABEL_78:
    v22 = __asan_report_load8(v21);
    goto LABEL_79;
  }
  v20 = (*v21)();
LABEL_39:
  v22 = v8 + 344;
  if ( *(_BYTE *)(((v8 + 344) >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    p_has_native_impl = v22;
    __asan_report_store8();
    goto LABEL_80;
  }
  *(_QWORD *)(v8 + 344) = v20;
  p_has_native_impl = (unsigned __int64)&io_ex->has_native_impl_;
  if ( *(char *)(((unsigned __int64)&io_ex->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_80:
    __asan_report_load1(p_has_native_impl);
    goto LABEL_81;
  }
  p_has_native_impl = v8 + 352;
  if ( *(char *)(((v8 + 352) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_81:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_82;
  }
  *(_BYTE *)(v8 + 352) = io_ex->has_native_impl_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 104));
  p_has_native_impl = (unsigned __int64)boost::asio::executor::get_impl((const boost::asio::executor *const)(v6 + 32));
  if ( *(_BYTE *)((p_has_native_impl >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_83;
  }
  v24 = *(_QWORD *)p_has_native_impl + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    v25 = v24;
    __asan_report_load8(v24);
LABEL_84:
    __asan_report_load8(v25);
    goto LABEL_85;
  }
  (*(void (**)(void))(*(_QWORD *)p_has_native_impl + 24LL))();
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v8 + 344));
  v25 = *(_QWORD *)(v6 + 32);
  if ( !v25 )
    goto LABEL_48;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_84;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    p_might_have_pending_waits = v26;
    __asan_report_load8(v26);
    goto LABEL_86;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_48:
  *(_QWORD *)(v6 + 80) = v8;
  p_might_have_pending_waits = (unsigned __int64)&impl->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_86:
    __asan_report_store1(p_might_have_pending_waits);
    goto LABEL_87;
  }
  impl->might_have_pending_waits = 1;
  p_might_have_pending_waits = (unsigned __int64)&this->scheduler_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
  {
    boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
      this->scheduler_,
      &this->timer_queue_,
      &impl->expiry,
      &impl->timer_data,
      *(boost::asio::detail::wait_op **)(v6 + 80));
    goto LABEL_88;
  }
LABEL_87:
  __asan_report_load8(p_might_have_pending_waits);
LABEL_88:
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 231: range 0000000019C64848-0000000019C64F27
void __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r14
  _DWORD *v7; // r15
  unsigned __int64 v8; // rbx
  char *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // al
  unsigned __int64 p_core; // rdi
  char v14; // al
  char v15; // al
  char v16; // dl
  char v17; // dl
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rdi
  __int64 (**v21)(void); // rax
  __int64 v22; // rax
  unsigned __int64 p_has_native_impl; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 p_might_have_pending_waits; // rdi
  __int64 v28; // rax
  char v31[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v28 = __asan_stack_malloc_1(128LL);
    if ( v28 )
      v6 = v28;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 2 ex 64 24 5 p:236";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 64) = handler;
  v8 = (unsigned __int64)boost::beast::asio_handler_allocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
                           0x190uLL,
                           &handler->handler_);
  *(_QWORD *)(v6 + 72) = v8;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v9 = (char *)v8;
    __asan_report_store8();
    goto LABEL_52;
  }
  *(_QWORD *)v8 = 0LL;
  v9 = (char *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8();
LABEL_53:
    __asan_report_store4(v9);
LABEL_54:
    __asan_report_store4(v9);
LABEL_55:
    __asan_report_store1(v9);
    goto LABEL_56;
  }
  *(_QWORD *)(v8 + 8) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v9 = (char *)(v8 + 16);
  v10 = *(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_53;
  *(_DWORD *)(v8 + 16) = 0;
  v9 = (char *)(v8 + 24);
  v11 = *(_BYTE *)(((v8 + 24) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_54;
  *(_DWORD *)(v8 + 24) = 0;
  v9 = (char *)(v8 + 28);
  v12 = *(_BYTE *)(((v8 + 28) >> 3) + 0x7FFF8000);
  if ( v12 <= (char)((v8 + 28) & 7) && v12 )
    goto LABEL_55;
  *(_BYTE *)(v8 + 28) = 0;
  if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  *(_QWORD *)(v8 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v4 = v8 + 40;
  if ( *(_BYTE *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(handler);
    goto LABEL_58;
  }
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    p_core = v4;
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)(v8 + 40) = handler->next_layer_;
  p_core = (unsigned __int64)&handler->core_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(p_core);
    goto LABEL_60;
  }
  p_core = v8 + 48;
  if ( *(_BYTE *)(((v8 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
LABEL_61:
    __asan_report_load4(p_core);
LABEL_62:
    __asan_report_store4(p_core);
LABEL_63:
    __asan_report_load4(p_core);
LABEL_64:
    __asan_report_store4(p_core);
    goto LABEL_65;
  }
  *(_QWORD *)(v8 + 48) = handler->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *const)(v8 + 56),
    &handler->op_.buffers_);
  p_core = (unsigned __int64)&handler->start_;
  v14 = *(_BYTE *)(((unsigned __int64)&handler->start_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_61;
  p_core = v8 + 112;
  v15 = *(_BYTE *)(((v8 + 112) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_62;
  *(_DWORD *)(v8 + 112) = handler->start_;
  p_core = (unsigned __int64)&handler->want_;
  v16 = *(_BYTE *)(((unsigned __int64)&handler->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)handler + 76) & 7) + 3) >= v16 && v16 )
    goto LABEL_63;
  p_core = v8 + 116;
  v17 = *(_BYTE *)(((v8 + 116) >> 3) + 0x7FFF8000);
  if ( (char)(((v8 + 116) & 7) + 3) >= v17 && v17 )
    goto LABEL_64;
  *(_DWORD *)(v8 + 116) = handler->want_;
  p_core = v8 + 120;
  if ( *(_WORD *)(((v8 + 120) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store16(p_core);
    goto LABEL_66;
  }
  p_core = (unsigned __int64)&handler->ec_;
  if ( *(_WORD *)(((unsigned __int64)&handler->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load16(p_core);
    goto LABEL_67;
  }
  *(__m128i *)(v8 + 120) = _mm_loadu_si128((const __m128i *)&handler->ec_);
  p_core = (unsigned __int64)&handler->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_core);
    goto LABEL_68;
  }
  p_core = v8 + 136;
  if ( *(_BYTE *)(((v8 + 136) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
LABEL_69:
    __asan_report_store4(p_core);
LABEL_70:
    __asan_report_load4(p_core);
    goto LABEL_71;
  }
  *(_QWORD *)(v8 + 136) = handler->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 144),
    &handler->handler_);
  p_core = v8 + 376;
  v18 = *(_BYTE *)(((v8 + 376) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_69;
  p_core = (unsigned __int64)&handler->handler_.boost::asio::coroutine;
  v19 = *(_BYTE *)(((unsigned __int64)&handler->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_70;
  *(_DWORD *)(v8 + 376) = handler->handler_.value_;
  if ( *(_BYTE *)(((v8 + 144) >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  *(_QWORD *)(v8 + 144) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  if ( *(_BYTE *)(((unsigned __int64)io_ex >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    v20 = (unsigned __int64)io_ex;
    __asan_report_load8(io_ex);
LABEL_73:
    v21 = (__int64 (**)(void))__asan_report_load8(v20);
    goto LABEL_74;
  }
  v20 = (unsigned __int64)io_ex->executor_.impl_;
  if ( !io_ex->executor_.impl_ )
    goto LABEL_37;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v21 = *(__int64 (***)(void))v20;
  if ( *(_BYTE *)((*(_QWORD *)v20 >> 3) + 0x7FFF8000LL) )
  {
LABEL_74:
    v22 = __asan_report_load8(v21);
    goto LABEL_75;
  }
  v20 = (*v21)();
LABEL_37:
  v22 = v8 + 384;
  if ( *(_BYTE *)(((v8 + 384) >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    p_has_native_impl = v22;
    __asan_report_store8();
    goto LABEL_76;
  }
  *(_QWORD *)(v8 + 384) = v20;
  p_has_native_impl = (unsigned __int64)&io_ex->has_native_impl_;
  if ( *(char *)(((unsigned __int64)&io_ex->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_76:
    __asan_report_load1(p_has_native_impl);
    goto LABEL_77;
  }
  p_has_native_impl = v8 + 392;
  if ( *(char *)(((v8 + 392) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_77:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_78;
  }
  *(_BYTE *)(v8 + 392) = io_ex->has_native_impl_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 144));
  p_has_native_impl = (unsigned __int64)boost::asio::executor::get_impl((const boost::asio::executor *const)(v6 + 32));
  if ( *(_BYTE *)((p_has_native_impl >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_79;
  }
  v24 = *(_QWORD *)p_has_native_impl + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    v25 = v24;
    __asan_report_load8(v24);
LABEL_80:
    __asan_report_load8(v25);
    goto LABEL_81;
  }
  (*(void (**)(void))(*(_QWORD *)p_has_native_impl + 24LL))();
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v8 + 384));
  v25 = *(_QWORD *)(v6 + 32);
  if ( !v25 )
    goto LABEL_46;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    p_might_have_pending_waits = v26;
    __asan_report_load8(v26);
    goto LABEL_82;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_46:
  *(_QWORD *)(v6 + 80) = v8;
  p_might_have_pending_waits = (unsigned __int64)&impl->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_82:
    __asan_report_store1(p_might_have_pending_waits);
    goto LABEL_83;
  }
  impl->might_have_pending_waits = 1;
  p_might_have_pending_waits = (unsigned __int64)&this->scheduler_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
  {
    boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
      this->scheduler_,
      &this->timer_queue_,
      &impl->expiry,
      &impl->timer_data,
      *(boost::asio::detail::wait_op **)(v6 + 80));
    goto LABEL_84;
  }
LABEL_83:
  __asan_report_load8(p_might_have_pending_waits);
LABEL_84:
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 231: range 0000000019C63382-0000000019C63A61
void __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r14
  _DWORD *v7; // r15
  unsigned __int64 v8; // rbx
  char *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // al
  unsigned __int64 p_core; // rdi
  char v14; // al
  char v15; // al
  char v16; // dl
  char v17; // dl
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rdi
  __int64 (**v21)(void); // rax
  __int64 v22; // rax
  unsigned __int64 p_has_native_impl; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 p_might_have_pending_waits; // rdi
  __int64 v28; // rax
  char v31[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v28 = __asan_stack_malloc_1(128LL);
    if ( v28 )
      v6 = v28;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 2 ex 64 24 5 p:236";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 64) = handler;
  v8 = (unsigned __int64)boost::beast::asio_handler_allocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
                           0x1A0uLL,
                           &handler->handler_);
  *(_QWORD *)(v6 + 72) = v8;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v9 = (char *)v8;
    __asan_report_store8();
    goto LABEL_52;
  }
  *(_QWORD *)v8 = 0LL;
  v9 = (char *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8();
LABEL_53:
    __asan_report_store4(v9);
LABEL_54:
    __asan_report_store4(v9);
LABEL_55:
    __asan_report_store1(v9);
    goto LABEL_56;
  }
  *(_QWORD *)(v8 + 8) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v9 = (char *)(v8 + 16);
  v10 = *(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_53;
  *(_DWORD *)(v8 + 16) = 0;
  v9 = (char *)(v8 + 24);
  v11 = *(_BYTE *)(((v8 + 24) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_54;
  *(_DWORD *)(v8 + 24) = 0;
  v9 = (char *)(v8 + 28);
  v12 = *(_BYTE *)(((v8 + 28) >> 3) + 0x7FFF8000);
  if ( v12 <= (char)((v8 + 28) & 7) && v12 )
    goto LABEL_55;
  *(_BYTE *)(v8 + 28) = 0;
  if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  *(_QWORD *)(v8 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v4 = v8 + 40;
  if ( *(_BYTE *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(handler);
    goto LABEL_58;
  }
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    p_core = v4;
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)(v8 + 40) = handler->next_layer_;
  p_core = (unsigned __int64)&handler->core_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(p_core);
    goto LABEL_60;
  }
  p_core = v8 + 48;
  if ( *(_BYTE *)(((v8 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
LABEL_61:
    __asan_report_load4(p_core);
LABEL_62:
    __asan_report_store4(p_core);
LABEL_63:
    __asan_report_load4(p_core);
LABEL_64:
    __asan_report_store4(p_core);
    goto LABEL_65;
  }
  *(_QWORD *)(v8 + 48) = handler->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)(v8 + 56),
    &handler->op_.buffers_);
  p_core = (unsigned __int64)&handler->start_;
  v14 = *(_BYTE *)(((unsigned __int64)&handler->start_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_61;
  p_core = v8 + 128;
  v15 = *(_BYTE *)(((v8 + 128) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_62;
  *(_DWORD *)(v8 + 128) = handler->start_;
  p_core = (unsigned __int64)&handler->want_;
  v16 = *(_BYTE *)(((unsigned __int64)&handler->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)handler + 92) & 7) + 3) >= v16 && v16 )
    goto LABEL_63;
  p_core = v8 + 132;
  v17 = *(_BYTE *)(((v8 + 132) >> 3) + 0x7FFF8000);
  if ( (char)(((v8 - 124) & 7) + 3) >= v17 && v17 )
    goto LABEL_64;
  *(_DWORD *)(v8 + 132) = handler->want_;
  p_core = v8 + 136;
  if ( *(_WORD *)(((v8 + 136) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store16(p_core);
    goto LABEL_66;
  }
  p_core = (unsigned __int64)&handler->ec_;
  if ( *(_WORD *)(((unsigned __int64)&handler->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load16(p_core);
    goto LABEL_67;
  }
  *(__m128i *)(v8 + 136) = _mm_loadu_si128((const __m128i *)&handler->ec_);
  p_core = (unsigned __int64)&handler->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_core);
    goto LABEL_68;
  }
  p_core = v8 + 152;
  if ( *(_BYTE *)(((v8 + 152) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
LABEL_69:
    __asan_report_store4(p_core);
LABEL_70:
    __asan_report_load4(p_core);
    goto LABEL_71;
  }
  *(_QWORD *)(v8 + 152) = handler->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 160),
    &handler->handler_);
  p_core = v8 + 392;
  v18 = *(_BYTE *)(((v8 + 392) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_69;
  p_core = (unsigned __int64)&handler->handler_.boost::asio::coroutine;
  v19 = *(_BYTE *)(((unsigned __int64)&handler->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_70;
  *(_DWORD *)(v8 + 392) = handler->handler_.value_;
  if ( *(_BYTE *)(((v8 + 160) >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  *(_QWORD *)(v8 + 160) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  if ( *(_BYTE *)(((unsigned __int64)io_ex >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    v20 = (unsigned __int64)io_ex;
    __asan_report_load8(io_ex);
LABEL_73:
    v21 = (__int64 (**)(void))__asan_report_load8(v20);
    goto LABEL_74;
  }
  v20 = (unsigned __int64)io_ex->executor_.impl_;
  if ( !io_ex->executor_.impl_ )
    goto LABEL_37;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v21 = *(__int64 (***)(void))v20;
  if ( *(_BYTE *)((*(_QWORD *)v20 >> 3) + 0x7FFF8000LL) )
  {
LABEL_74:
    v22 = __asan_report_load8(v21);
    goto LABEL_75;
  }
  v20 = (*v21)();
LABEL_37:
  v22 = v8 + 400;
  if ( *(_BYTE *)(((v8 + 400) >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    p_has_native_impl = v22;
    __asan_report_store8();
    goto LABEL_76;
  }
  *(_QWORD *)(v8 + 400) = v20;
  p_has_native_impl = (unsigned __int64)&io_ex->has_native_impl_;
  if ( *(char *)(((unsigned __int64)&io_ex->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_76:
    __asan_report_load1(p_has_native_impl);
    goto LABEL_77;
  }
  p_has_native_impl = v8 + 408;
  if ( *(char *)(((v8 + 408) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_77:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_78;
  }
  *(_BYTE *)(v8 + 408) = io_ex->has_native_impl_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 160));
  p_has_native_impl = (unsigned __int64)boost::asio::executor::get_impl((const boost::asio::executor *const)(v6 + 32));
  if ( *(_BYTE *)((p_has_native_impl >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_79;
  }
  v24 = *(_QWORD *)p_has_native_impl + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    v25 = v24;
    __asan_report_load8(v24);
LABEL_80:
    __asan_report_load8(v25);
    goto LABEL_81;
  }
  (*(void (**)(void))(*(_QWORD *)p_has_native_impl + 24LL))();
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v8 + 400));
  v25 = *(_QWORD *)(v6 + 32);
  if ( !v25 )
    goto LABEL_46;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    p_might_have_pending_waits = v26;
    __asan_report_load8(v26);
    goto LABEL_82;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_46:
  *(_QWORD *)(v6 + 80) = v8;
  p_might_have_pending_waits = (unsigned __int64)&impl->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_82:
    __asan_report_store1(p_might_have_pending_waits);
    goto LABEL_83;
  }
  impl->might_have_pending_waits = 1;
  p_might_have_pending_waits = (unsigned __int64)&this->scheduler_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
  {
    boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
      this->scheduler_,
      &this->timer_queue_,
      &impl->expiry,
      &impl->timer_data,
      *(boost::asio::detail::wait_op **)(v6 + 80));
    goto LABEL_84;
  }
LABEL_83:
  __asan_report_load8(p_might_have_pending_waits);
LABEL_84:
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 231: range 0000000019C6642A-0000000019C66B2A
void __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r14
  _DWORD *v7; // r15
  unsigned __int64 v8; // rbx
  char *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // al
  unsigned __int64 p_core; // rdi
  char v14; // al
  char v15; // al
  char v16; // dl
  char v17; // dl
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rdi
  __int64 (**v21)(void); // rax
  __int64 v22; // rax
  unsigned __int64 p_has_native_impl; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 p_might_have_pending_waits; // rdi
  __int64 v28; // rax
  char v31[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v28 = __asan_stack_malloc_1(128LL);
    if ( v28 )
      v6 = v28;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 2 ex 64 24 5 p:236";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 64) = handler;
  v8 = (unsigned __int64)boost::beast::asio_handler_allocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
                           0x1B0uLL,
                           &handler->handler_);
  *(_QWORD *)(v6 + 72) = v8;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v9 = (char *)v8;
    __asan_report_store8();
    goto LABEL_52;
  }
  *(_QWORD *)v8 = 0LL;
  v9 = (char *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8();
LABEL_53:
    __asan_report_store4(v9);
LABEL_54:
    __asan_report_store4(v9);
LABEL_55:
    __asan_report_store1(v9);
    goto LABEL_56;
  }
  *(_QWORD *)(v8 + 8) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v9 = (char *)(v8 + 16);
  v10 = *(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_53;
  *(_DWORD *)(v8 + 16) = 0;
  v9 = (char *)(v8 + 24);
  v11 = *(_BYTE *)(((v8 + 24) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_54;
  *(_DWORD *)(v8 + 24) = 0;
  v9 = (char *)(v8 + 28);
  v12 = *(_BYTE *)(((v8 + 28) >> 3) + 0x7FFF8000);
  if ( v12 <= (char)((v8 + 28) & 7) && v12 )
    goto LABEL_55;
  *(_BYTE *)(v8 + 28) = 0;
  if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  *(_QWORD *)(v8 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v4 = v8 + 40;
  if ( *(_BYTE *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(handler);
    goto LABEL_58;
  }
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    p_core = v4;
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)(v8 + 40) = handler->next_layer_;
  p_core = (unsigned __int64)&handler->core_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(p_core);
    goto LABEL_60;
  }
  p_core = v8 + 48;
  if ( *(_BYTE *)(((v8 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
LABEL_61:
    __asan_report_load4(p_core);
LABEL_62:
    __asan_report_store4(p_core);
LABEL_63:
    __asan_report_load4(p_core);
LABEL_64:
    __asan_report_store4(p_core);
    goto LABEL_65;
  }
  *(_QWORD *)(v8 + 48) = handler->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *const)(v8 + 56),
    &handler->op_.buffers_);
  p_core = (unsigned __int64)&handler->start_;
  v14 = *(_BYTE *)(((unsigned __int64)&handler->start_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_61;
  p_core = v8 + 144;
  v15 = *(_BYTE *)(((v8 + 144) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_62;
  *(_DWORD *)(v8 + 144) = handler->start_;
  p_core = (unsigned __int64)&handler->want_;
  v16 = *(_BYTE *)(((unsigned __int64)&handler->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)handler + 108) & 7) + 3) >= v16 && v16 )
    goto LABEL_63;
  p_core = v8 + 148;
  v17 = *(_BYTE *)(((v8 + 148) >> 3) + 0x7FFF8000);
  if ( (char)(((v8 - 108) & 7) + 3) >= v17 && v17 )
    goto LABEL_64;
  *(_DWORD *)(v8 + 148) = handler->want_;
  p_core = v8 + 152;
  if ( *(_WORD *)(((v8 + 152) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store16(p_core);
    goto LABEL_66;
  }
  p_core = (unsigned __int64)&handler->ec_;
  if ( *(_WORD *)(((unsigned __int64)&handler->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load16(p_core);
    goto LABEL_67;
  }
  *(__m128i *)(v8 + 152) = _mm_loadu_si128((const __m128i *)&handler->ec_);
  p_core = (unsigned __int64)&handler->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_core);
    goto LABEL_68;
  }
  p_core = v8 + 168;
  if ( *(_BYTE *)(((v8 + 168) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
LABEL_69:
    __asan_report_store4(p_core);
LABEL_70:
    __asan_report_load4(p_core);
    goto LABEL_71;
  }
  *(_QWORD *)(v8 + 168) = handler->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 176),
    &handler->handler_);
  p_core = v8 + 408;
  v18 = *(_BYTE *)(((v8 + 408) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_69;
  p_core = (unsigned __int64)&handler->handler_.boost::asio::coroutine;
  v19 = *(_BYTE *)(((unsigned __int64)&handler->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_70;
  *(_DWORD *)(v8 + 408) = handler->handler_.value_;
  if ( *(_BYTE *)(((v8 + 176) >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  *(_QWORD *)(v8 + 176) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  if ( *(_BYTE *)(((unsigned __int64)io_ex >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    v20 = (unsigned __int64)io_ex;
    __asan_report_load8(io_ex);
LABEL_73:
    v21 = (__int64 (**)(void))__asan_report_load8(v20);
    goto LABEL_74;
  }
  v20 = (unsigned __int64)io_ex->executor_.impl_;
  if ( !io_ex->executor_.impl_ )
    goto LABEL_37;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v21 = *(__int64 (***)(void))v20;
  if ( *(_BYTE *)((*(_QWORD *)v20 >> 3) + 0x7FFF8000LL) )
  {
LABEL_74:
    v22 = __asan_report_load8(v21);
    goto LABEL_75;
  }
  v20 = (*v21)();
LABEL_37:
  v22 = v8 + 416;
  if ( *(_BYTE *)(((v8 + 416) >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    p_has_native_impl = v22;
    __asan_report_store8();
    goto LABEL_76;
  }
  *(_QWORD *)(v8 + 416) = v20;
  p_has_native_impl = (unsigned __int64)&io_ex->has_native_impl_;
  if ( *(char *)(((unsigned __int64)&io_ex->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_76:
    __asan_report_load1(p_has_native_impl);
    goto LABEL_77;
  }
  p_has_native_impl = v8 + 424;
  if ( *(char *)(((v8 + 424) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_77:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_78;
  }
  *(_BYTE *)(v8 + 424) = io_ex->has_native_impl_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 176));
  p_has_native_impl = (unsigned __int64)boost::asio::executor::get_impl((const boost::asio::executor *const)(v6 + 32));
  if ( *(_BYTE *)((p_has_native_impl >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_79;
  }
  v24 = *(_QWORD *)p_has_native_impl + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    v25 = v24;
    __asan_report_load8(v24);
LABEL_80:
    __asan_report_load8(v25);
    goto LABEL_81;
  }
  (*(void (**)(void))(*(_QWORD *)p_has_native_impl + 24LL))();
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v8 + 416));
  v25 = *(_QWORD *)(v6 + 32);
  if ( !v25 )
    goto LABEL_46;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    p_might_have_pending_waits = v26;
    __asan_report_load8(v26);
    goto LABEL_82;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_46:
  *(_QWORD *)(v6 + 80) = v8;
  p_might_have_pending_waits = (unsigned __int64)&impl->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_82:
    __asan_report_store1(p_might_have_pending_waits);
    goto LABEL_83;
  }
  impl->might_have_pending_waits = 1;
  p_might_have_pending_waits = (unsigned __int64)&this->scheduler_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
  {
    boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
      this->scheduler_,
      &this->timer_queue_,
      &impl->expiry,
      &impl->timer_data,
      *(boost::asio::detail::wait_op **)(v6 + 80));
    goto LABEL_84;
  }
LABEL_83:
  __asan_report_load8(p_might_have_pending_waits);
LABEL_84:
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 231: range 0000000019C65D28-0000000019C66428
void __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r14
  _DWORD *v7; // r15
  unsigned __int64 v8; // rbx
  char *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // al
  unsigned __int64 p_core; // rdi
  char v14; // al
  char v15; // al
  char v16; // dl
  char v17; // dl
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rdi
  __int64 (**v21)(void); // rax
  __int64 v22; // rax
  unsigned __int64 p_has_native_impl; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 p_might_have_pending_waits; // rdi
  __int64 v28; // rax
  char v31[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v28 = __asan_stack_malloc_1(128LL);
    if ( v28 )
      v6 = v28;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 2 ex 64 24 5 p:236";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 64) = handler;
  v8 = (unsigned __int64)boost::beast::asio_handler_allocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
                           0x1B0uLL,
                           &handler->handler_);
  *(_QWORD *)(v6 + 72) = v8;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v9 = (char *)v8;
    __asan_report_store8();
    goto LABEL_52;
  }
  *(_QWORD *)v8 = 0LL;
  v9 = (char *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8();
LABEL_53:
    __asan_report_store4(v9);
LABEL_54:
    __asan_report_store4(v9);
LABEL_55:
    __asan_report_store1(v9);
    goto LABEL_56;
  }
  *(_QWORD *)(v8 + 8) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v9 = (char *)(v8 + 16);
  v10 = *(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_53;
  *(_DWORD *)(v8 + 16) = 0;
  v9 = (char *)(v8 + 24);
  v11 = *(_BYTE *)(((v8 + 24) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_54;
  *(_DWORD *)(v8 + 24) = 0;
  v9 = (char *)(v8 + 28);
  v12 = *(_BYTE *)(((v8 + 28) >> 3) + 0x7FFF8000);
  if ( v12 <= (char)((v8 + 28) & 7) && v12 )
    goto LABEL_55;
  *(_BYTE *)(v8 + 28) = 0;
  if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  *(_QWORD *)(v8 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v4 = v8 + 40;
  if ( *(_BYTE *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(handler);
    goto LABEL_58;
  }
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    p_core = v4;
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)(v8 + 40) = handler->next_layer_;
  p_core = (unsigned __int64)&handler->core_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(p_core);
    goto LABEL_60;
  }
  p_core = v8 + 48;
  if ( *(_BYTE *)(((v8 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
LABEL_61:
    __asan_report_load4(p_core);
LABEL_62:
    __asan_report_store4(p_core);
LABEL_63:
    __asan_report_load4(p_core);
LABEL_64:
    __asan_report_store4(p_core);
    goto LABEL_65;
  }
  *(_QWORD *)(v8 + 48) = handler->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)(v8 + 56),
    &handler->op_.buffers_);
  p_core = (unsigned __int64)&handler->start_;
  v14 = *(_BYTE *)(((unsigned __int64)&handler->start_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_61;
  p_core = v8 + 144;
  v15 = *(_BYTE *)(((v8 + 144) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_62;
  *(_DWORD *)(v8 + 144) = handler->start_;
  p_core = (unsigned __int64)&handler->want_;
  v16 = *(_BYTE *)(((unsigned __int64)&handler->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)handler + 108) & 7) + 3) >= v16 && v16 )
    goto LABEL_63;
  p_core = v8 + 148;
  v17 = *(_BYTE *)(((v8 + 148) >> 3) + 0x7FFF8000);
  if ( (char)(((v8 - 108) & 7) + 3) >= v17 && v17 )
    goto LABEL_64;
  *(_DWORD *)(v8 + 148) = handler->want_;
  p_core = v8 + 152;
  if ( *(_WORD *)(((v8 + 152) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store16(p_core);
    goto LABEL_66;
  }
  p_core = (unsigned __int64)&handler->ec_;
  if ( *(_WORD *)(((unsigned __int64)&handler->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load16(p_core);
    goto LABEL_67;
  }
  *(__m128i *)(v8 + 152) = _mm_loadu_si128((const __m128i *)&handler->ec_);
  p_core = (unsigned __int64)&handler->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_core);
    goto LABEL_68;
  }
  p_core = v8 + 168;
  if ( *(_BYTE *)(((v8 + 168) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
LABEL_69:
    __asan_report_store4(p_core);
LABEL_70:
    __asan_report_load4(p_core);
    goto LABEL_71;
  }
  *(_QWORD *)(v8 + 168) = handler->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 176),
    &handler->handler_);
  p_core = v8 + 408;
  v18 = *(_BYTE *)(((v8 + 408) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_69;
  p_core = (unsigned __int64)&handler->handler_.boost::asio::coroutine;
  v19 = *(_BYTE *)(((unsigned __int64)&handler->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_70;
  *(_DWORD *)(v8 + 408) = handler->handler_.value_;
  if ( *(_BYTE *)(((v8 + 176) >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  *(_QWORD *)(v8 + 176) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  if ( *(_BYTE *)(((unsigned __int64)io_ex >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    v20 = (unsigned __int64)io_ex;
    __asan_report_load8(io_ex);
LABEL_73:
    v21 = (__int64 (**)(void))__asan_report_load8(v20);
    goto LABEL_74;
  }
  v20 = (unsigned __int64)io_ex->executor_.impl_;
  if ( !io_ex->executor_.impl_ )
    goto LABEL_37;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v21 = *(__int64 (***)(void))v20;
  if ( *(_BYTE *)((*(_QWORD *)v20 >> 3) + 0x7FFF8000LL) )
  {
LABEL_74:
    v22 = __asan_report_load8(v21);
    goto LABEL_75;
  }
  v20 = (*v21)();
LABEL_37:
  v22 = v8 + 416;
  if ( *(_BYTE *)(((v8 + 416) >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    p_has_native_impl = v22;
    __asan_report_store8();
    goto LABEL_76;
  }
  *(_QWORD *)(v8 + 416) = v20;
  p_has_native_impl = (unsigned __int64)&io_ex->has_native_impl_;
  if ( *(char *)(((unsigned __int64)&io_ex->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_76:
    __asan_report_load1(p_has_native_impl);
    goto LABEL_77;
  }
  p_has_native_impl = v8 + 424;
  if ( *(char *)(((v8 + 424) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_77:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_78;
  }
  *(_BYTE *)(v8 + 424) = io_ex->has_native_impl_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 176));
  p_has_native_impl = (unsigned __int64)boost::asio::executor::get_impl((const boost::asio::executor *const)(v6 + 32));
  if ( *(_BYTE *)((p_has_native_impl >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_79;
  }
  v24 = *(_QWORD *)p_has_native_impl + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    v25 = v24;
    __asan_report_load8(v24);
LABEL_80:
    __asan_report_load8(v25);
    goto LABEL_81;
  }
  (*(void (**)(void))(*(_QWORD *)p_has_native_impl + 24LL))();
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v8 + 416));
  v25 = *(_QWORD *)(v6 + 32);
  if ( !v25 )
    goto LABEL_46;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    p_might_have_pending_waits = v26;
    __asan_report_load8(v26);
    goto LABEL_82;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_46:
  *(_QWORD *)(v6 + 80) = v8;
  p_might_have_pending_waits = (unsigned __int64)&impl->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_82:
    __asan_report_store1(p_might_have_pending_waits);
    goto LABEL_83;
  }
  impl->might_have_pending_waits = 1;
  p_might_have_pending_waits = (unsigned __int64)&this->scheduler_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
  {
    boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
      this->scheduler_,
      &this->timer_queue_,
      &impl->expiry,
      &impl->timer_data,
      *(boost::asio::detail::wait_op **)(v6 + 80));
    goto LABEL_84;
  }
LABEL_83:
  __asan_report_load8(p_might_have_pending_waits);
LABEL_84:
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 231: range 0000000019C64146-0000000019C64846
void __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r14
  _DWORD *v7; // r15
  unsigned __int64 v8; // rbx
  char *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // al
  unsigned __int64 p_core; // rdi
  char v14; // al
  char v15; // al
  char v16; // dl
  char v17; // dl
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rdi
  __int64 (**v21)(void); // rax
  __int64 v22; // rax
  unsigned __int64 p_has_native_impl; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 p_might_have_pending_waits; // rdi
  __int64 v28; // rax
  char v31[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v28 = __asan_stack_malloc_1(128LL);
    if ( v28 )
      v6 = v28;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 2 ex 64 24 5 p:236";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 64) = handler;
  v8 = (unsigned __int64)boost::beast::asio_handler_allocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
                           0x1B0uLL,
                           &handler->handler_);
  *(_QWORD *)(v6 + 72) = v8;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v9 = (char *)v8;
    __asan_report_store8();
    goto LABEL_52;
  }
  *(_QWORD *)v8 = 0LL;
  v9 = (char *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8();
LABEL_53:
    __asan_report_store4(v9);
LABEL_54:
    __asan_report_store4(v9);
LABEL_55:
    __asan_report_store1(v9);
    goto LABEL_56;
  }
  *(_QWORD *)(v8 + 8) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v9 = (char *)(v8 + 16);
  v10 = *(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_53;
  *(_DWORD *)(v8 + 16) = 0;
  v9 = (char *)(v8 + 24);
  v11 = *(_BYTE *)(((v8 + 24) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_54;
  *(_DWORD *)(v8 + 24) = 0;
  v9 = (char *)(v8 + 28);
  v12 = *(_BYTE *)(((v8 + 28) >> 3) + 0x7FFF8000);
  if ( v12 <= (char)((v8 + 28) & 7) && v12 )
    goto LABEL_55;
  *(_BYTE *)(v8 + 28) = 0;
  if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  *(_QWORD *)(v8 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v4 = v8 + 40;
  if ( *(_BYTE *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(handler);
    goto LABEL_58;
  }
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    p_core = v4;
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)(v8 + 40) = handler->next_layer_;
  p_core = (unsigned __int64)&handler->core_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(p_core);
    goto LABEL_60;
  }
  p_core = v8 + 48;
  if ( *(_BYTE *)(((v8 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
LABEL_61:
    __asan_report_load4(p_core);
LABEL_62:
    __asan_report_store4(p_core);
LABEL_63:
    __asan_report_load4(p_core);
LABEL_64:
    __asan_report_store4(p_core);
    goto LABEL_65;
  }
  *(_QWORD *)(v8 + 48) = handler->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)(v8 + 56),
    &handler->op_.buffers_);
  p_core = (unsigned __int64)&handler->start_;
  v14 = *(_BYTE *)(((unsigned __int64)&handler->start_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_61;
  p_core = v8 + 144;
  v15 = *(_BYTE *)(((v8 + 144) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_62;
  *(_DWORD *)(v8 + 144) = handler->start_;
  p_core = (unsigned __int64)&handler->want_;
  v16 = *(_BYTE *)(((unsigned __int64)&handler->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)handler + 108) & 7) + 3) >= v16 && v16 )
    goto LABEL_63;
  p_core = v8 + 148;
  v17 = *(_BYTE *)(((v8 + 148) >> 3) + 0x7FFF8000);
  if ( (char)(((v8 - 108) & 7) + 3) >= v17 && v17 )
    goto LABEL_64;
  *(_DWORD *)(v8 + 148) = handler->want_;
  p_core = v8 + 152;
  if ( *(_WORD *)(((v8 + 152) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store16(p_core);
    goto LABEL_66;
  }
  p_core = (unsigned __int64)&handler->ec_;
  if ( *(_WORD *)(((unsigned __int64)&handler->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load16(p_core);
    goto LABEL_67;
  }
  *(__m128i *)(v8 + 152) = _mm_loadu_si128((const __m128i *)&handler->ec_);
  p_core = (unsigned __int64)&handler->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_core);
    goto LABEL_68;
  }
  p_core = v8 + 168;
  if ( *(_BYTE *)(((v8 + 168) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
LABEL_69:
    __asan_report_store4(p_core);
LABEL_70:
    __asan_report_load4(p_core);
    goto LABEL_71;
  }
  *(_QWORD *)(v8 + 168) = handler->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 176),
    &handler->handler_);
  p_core = v8 + 408;
  v18 = *(_BYTE *)(((v8 + 408) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_69;
  p_core = (unsigned __int64)&handler->handler_.boost::asio::coroutine;
  v19 = *(_BYTE *)(((unsigned __int64)&handler->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_70;
  *(_DWORD *)(v8 + 408) = handler->handler_.value_;
  if ( *(_BYTE *)(((v8 + 176) >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  *(_QWORD *)(v8 + 176) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  if ( *(_BYTE *)(((unsigned __int64)io_ex >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    v20 = (unsigned __int64)io_ex;
    __asan_report_load8(io_ex);
LABEL_73:
    v21 = (__int64 (**)(void))__asan_report_load8(v20);
    goto LABEL_74;
  }
  v20 = (unsigned __int64)io_ex->executor_.impl_;
  if ( !io_ex->executor_.impl_ )
    goto LABEL_37;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v21 = *(__int64 (***)(void))v20;
  if ( *(_BYTE *)((*(_QWORD *)v20 >> 3) + 0x7FFF8000LL) )
  {
LABEL_74:
    v22 = __asan_report_load8(v21);
    goto LABEL_75;
  }
  v20 = (*v21)();
LABEL_37:
  v22 = v8 + 416;
  if ( *(_BYTE *)(((v8 + 416) >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    p_has_native_impl = v22;
    __asan_report_store8();
    goto LABEL_76;
  }
  *(_QWORD *)(v8 + 416) = v20;
  p_has_native_impl = (unsigned __int64)&io_ex->has_native_impl_;
  if ( *(char *)(((unsigned __int64)&io_ex->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_76:
    __asan_report_load1(p_has_native_impl);
    goto LABEL_77;
  }
  p_has_native_impl = v8 + 424;
  if ( *(char *)(((v8 + 424) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_77:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_78;
  }
  *(_BYTE *)(v8 + 424) = io_ex->has_native_impl_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 176));
  p_has_native_impl = (unsigned __int64)boost::asio::executor::get_impl((const boost::asio::executor *const)(v6 + 32));
  if ( *(_BYTE *)((p_has_native_impl >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_79;
  }
  v24 = *(_QWORD *)p_has_native_impl + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    v25 = v24;
    __asan_report_load8(v24);
LABEL_80:
    __asan_report_load8(v25);
    goto LABEL_81;
  }
  (*(void (**)(void))(*(_QWORD *)p_has_native_impl + 24LL))();
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v8 + 416));
  v25 = *(_QWORD *)(v6 + 32);
  if ( !v25 )
    goto LABEL_46;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    p_might_have_pending_waits = v26;
    __asan_report_load8(v26);
    goto LABEL_82;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_46:
  *(_QWORD *)(v6 + 80) = v8;
  p_might_have_pending_waits = (unsigned __int64)&impl->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_82:
    __asan_report_store1(p_might_have_pending_waits);
    goto LABEL_83;
  }
  impl->might_have_pending_waits = 1;
  p_might_have_pending_waits = (unsigned __int64)&this->scheduler_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
  {
    boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
      this->scheduler_,
      &this->timer_queue_,
      &impl->expiry,
      &impl->timer_data,
      *(boost::asio::detail::wait_op **)(v6 + 80));
    goto LABEL_84;
  }
LABEL_83:
  __asan_report_load8(p_might_have_pending_waits);
LABEL_84:
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 231: range 0000000019C63A64-0000000019C64143
void __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r14
  _DWORD *v7; // r15
  unsigned __int64 v8; // rbx
  char *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // al
  unsigned __int64 p_core; // rdi
  char v14; // al
  char v15; // al
  char v16; // dl
  char v17; // dl
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rdi
  __int64 (**v21)(void); // rax
  __int64 v22; // rax
  unsigned __int64 p_has_native_impl; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 p_might_have_pending_waits; // rdi
  __int64 v28; // rax
  char v31[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v28 = __asan_stack_malloc_1(128LL);
    if ( v28 )
      v6 = v28;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 2 ex 64 24 5 p:236";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 64) = handler;
  v8 = (unsigned __int64)boost::beast::asio_handler_allocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
                           0x1A0uLL,
                           &handler->handler_);
  *(_QWORD *)(v6 + 72) = v8;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v9 = (char *)v8;
    __asan_report_store8();
    goto LABEL_52;
  }
  *(_QWORD *)v8 = 0LL;
  v9 = (char *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8();
LABEL_53:
    __asan_report_store4(v9);
LABEL_54:
    __asan_report_store4(v9);
LABEL_55:
    __asan_report_store1(v9);
    goto LABEL_56;
  }
  *(_QWORD *)(v8 + 8) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v9 = (char *)(v8 + 16);
  v10 = *(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_53;
  *(_DWORD *)(v8 + 16) = 0;
  v9 = (char *)(v8 + 24);
  v11 = *(_BYTE *)(((v8 + 24) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_54;
  *(_DWORD *)(v8 + 24) = 0;
  v9 = (char *)(v8 + 28);
  v12 = *(_BYTE *)(((v8 + 28) >> 3) + 0x7FFF8000);
  if ( v12 <= (char)((v8 + 28) & 7) && v12 )
    goto LABEL_55;
  *(_BYTE *)(v8 + 28) = 0;
  if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  *(_QWORD *)(v8 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v4 = v8 + 40;
  if ( *(_BYTE *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(handler);
    goto LABEL_58;
  }
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    p_core = v4;
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)(v8 + 40) = handler->next_layer_;
  p_core = (unsigned __int64)&handler->core_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(p_core);
    goto LABEL_60;
  }
  p_core = v8 + 48;
  if ( *(_BYTE *)(((v8 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
LABEL_61:
    __asan_report_load4(p_core);
LABEL_62:
    __asan_report_store4(p_core);
LABEL_63:
    __asan_report_load4(p_core);
LABEL_64:
    __asan_report_store4(p_core);
    goto LABEL_65;
  }
  *(_QWORD *)(v8 + 48) = handler->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)(v8 + 56),
    &handler->op_.buffers_);
  p_core = (unsigned __int64)&handler->start_;
  v14 = *(_BYTE *)(((unsigned __int64)&handler->start_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_61;
  p_core = v8 + 128;
  v15 = *(_BYTE *)(((v8 + 128) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_62;
  *(_DWORD *)(v8 + 128) = handler->start_;
  p_core = (unsigned __int64)&handler->want_;
  v16 = *(_BYTE *)(((unsigned __int64)&handler->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)handler + 92) & 7) + 3) >= v16 && v16 )
    goto LABEL_63;
  p_core = v8 + 132;
  v17 = *(_BYTE *)(((v8 + 132) >> 3) + 0x7FFF8000);
  if ( (char)(((v8 - 124) & 7) + 3) >= v17 && v17 )
    goto LABEL_64;
  *(_DWORD *)(v8 + 132) = handler->want_;
  p_core = v8 + 136;
  if ( *(_WORD *)(((v8 + 136) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store16(p_core);
    goto LABEL_66;
  }
  p_core = (unsigned __int64)&handler->ec_;
  if ( *(_WORD *)(((unsigned __int64)&handler->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load16(p_core);
    goto LABEL_67;
  }
  *(__m128i *)(v8 + 136) = _mm_loadu_si128((const __m128i *)&handler->ec_);
  p_core = (unsigned __int64)&handler->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_core);
    goto LABEL_68;
  }
  p_core = v8 + 152;
  if ( *(_BYTE *)(((v8 + 152) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
LABEL_69:
    __asan_report_store4(p_core);
LABEL_70:
    __asan_report_load4(p_core);
    goto LABEL_71;
  }
  *(_QWORD *)(v8 + 152) = handler->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 160),
    &handler->handler_);
  p_core = v8 + 392;
  v18 = *(_BYTE *)(((v8 + 392) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_69;
  p_core = (unsigned __int64)&handler->handler_.boost::asio::coroutine;
  v19 = *(_BYTE *)(((unsigned __int64)&handler->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_70;
  *(_DWORD *)(v8 + 392) = handler->handler_.value_;
  if ( *(_BYTE *)(((v8 + 160) >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  *(_QWORD *)(v8 + 160) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  if ( *(_BYTE *)(((unsigned __int64)io_ex >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    v20 = (unsigned __int64)io_ex;
    __asan_report_load8(io_ex);
LABEL_73:
    v21 = (__int64 (**)(void))__asan_report_load8(v20);
    goto LABEL_74;
  }
  v20 = (unsigned __int64)io_ex->executor_.impl_;
  if ( !io_ex->executor_.impl_ )
    goto LABEL_37;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v21 = *(__int64 (***)(void))v20;
  if ( *(_BYTE *)((*(_QWORD *)v20 >> 3) + 0x7FFF8000LL) )
  {
LABEL_74:
    v22 = __asan_report_load8(v21);
    goto LABEL_75;
  }
  v20 = (*v21)();
LABEL_37:
  v22 = v8 + 400;
  if ( *(_BYTE *)(((v8 + 400) >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    p_has_native_impl = v22;
    __asan_report_store8();
    goto LABEL_76;
  }
  *(_QWORD *)(v8 + 400) = v20;
  p_has_native_impl = (unsigned __int64)&io_ex->has_native_impl_;
  if ( *(char *)(((unsigned __int64)&io_ex->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_76:
    __asan_report_load1(p_has_native_impl);
    goto LABEL_77;
  }
  p_has_native_impl = v8 + 408;
  if ( *(char *)(((v8 + 408) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_77:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_78;
  }
  *(_BYTE *)(v8 + 408) = io_ex->has_native_impl_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 160));
  p_has_native_impl = (unsigned __int64)boost::asio::executor::get_impl((const boost::asio::executor *const)(v6 + 32));
  if ( *(_BYTE *)((p_has_native_impl >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_79;
  }
  v24 = *(_QWORD *)p_has_native_impl + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    v25 = v24;
    __asan_report_load8(v24);
LABEL_80:
    __asan_report_load8(v25);
    goto LABEL_81;
  }
  (*(void (**)(void))(*(_QWORD *)p_has_native_impl + 24LL))();
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v8 + 400));
  v25 = *(_QWORD *)(v6 + 32);
  if ( !v25 )
    goto LABEL_46;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    p_might_have_pending_waits = v26;
    __asan_report_load8(v26);
    goto LABEL_82;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_46:
  *(_QWORD *)(v6 + 80) = v8;
  p_might_have_pending_waits = (unsigned __int64)&impl->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_82:
    __asan_report_store1(p_might_have_pending_waits);
    goto LABEL_83;
  }
  impl->might_have_pending_waits = 1;
  p_might_have_pending_waits = (unsigned __int64)&this->scheduler_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
  {
    boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
      this->scheduler_,
      &this->timer_queue_,
      &impl->expiry,
      &impl->timer_data,
      *(boost::asio::detail::wait_op **)(v6 + 80));
    goto LABEL_84;
  }
LABEL_83:
  __asan_report_load8(p_might_have_pending_waits);
LABEL_84:
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 231: range 0000000019C64F2A-0000000019C65609
void __fastcall boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *impl,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r14
  _DWORD *v7; // r15
  unsigned __int64 v8; // rbx
  char *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // al
  unsigned __int64 p_core; // rdi
  char v14; // al
  char v15; // al
  char v16; // dl
  char v17; // dl
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rdi
  __int64 (**v21)(void); // rax
  __int64 v22; // rax
  unsigned __int64 p_has_native_impl; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 p_might_have_pending_waits; // rdi
  __int64 v28; // rax
  char v31[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v28 = __asan_stack_malloc_1(128LL);
    if ( v28 )
      v6 = v28;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 2 ex 64 24 5 p:236";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 64) = handler;
  v8 = (unsigned __int64)boost::beast::asio_handler_allocate<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>(
                           0x1A0uLL,
                           &handler->handler_);
  *(_QWORD *)(v6 + 72) = v8;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v9 = (char *)v8;
    __asan_report_store8();
    goto LABEL_52;
  }
  *(_QWORD *)v8 = 0LL;
  v9 = (char *)(v8 + 8);
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8();
LABEL_53:
    __asan_report_store4(v9);
LABEL_54:
    __asan_report_store4(v9);
LABEL_55:
    __asan_report_store1(v9);
    goto LABEL_56;
  }
  *(_QWORD *)(v8 + 8) = boost::asio::detail::wait_handler<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v9 = (char *)(v8 + 16);
  v10 = *(_BYTE *)(((v8 + 16) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_53;
  *(_DWORD *)(v8 + 16) = 0;
  v9 = (char *)(v8 + 24);
  v11 = *(_BYTE *)(((v8 + 24) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_54;
  *(_DWORD *)(v8 + 24) = 0;
  v9 = (char *)(v8 + 28);
  v12 = *(_BYTE *)(((v8 + 28) >> 3) + 0x7FFF8000);
  if ( v12 <= (char)((v8 + 28) & 7) && v12 )
    goto LABEL_55;
  *(_BYTE *)(v8 + 28) = 0;
  if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  *(_QWORD *)(v8 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v4 = v8 + 40;
  if ( *(_BYTE *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(handler);
    goto LABEL_58;
  }
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    p_core = v4;
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)(v8 + 40) = handler->next_layer_;
  p_core = (unsigned __int64)&handler->core_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(p_core);
    goto LABEL_60;
  }
  p_core = v8 + 48;
  if ( *(_BYTE *)(((v8 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
LABEL_61:
    __asan_report_load4(p_core);
LABEL_62:
    __asan_report_store4(p_core);
LABEL_63:
    __asan_report_load4(p_core);
LABEL_64:
    __asan_report_store4(p_core);
    goto LABEL_65;
  }
  *(_QWORD *)(v8 + 48) = handler->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::buffers_prefix_view(
    (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *const)(v8 + 56),
    &handler->op_.buffers_);
  p_core = (unsigned __int64)&handler->start_;
  v14 = *(_BYTE *)(((unsigned __int64)&handler->start_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_61;
  p_core = v8 + 128;
  v15 = *(_BYTE *)(((v8 + 128) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_62;
  *(_DWORD *)(v8 + 128) = handler->start_;
  p_core = (unsigned __int64)&handler->want_;
  v16 = *(_BYTE *)(((unsigned __int64)&handler->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)handler + 92) & 7) + 3) >= v16 && v16 )
    goto LABEL_63;
  p_core = v8 + 132;
  v17 = *(_BYTE *)(((v8 + 132) >> 3) + 0x7FFF8000);
  if ( (char)(((v8 - 124) & 7) + 3) >= v17 && v17 )
    goto LABEL_64;
  *(_DWORD *)(v8 + 132) = handler->want_;
  p_core = v8 + 136;
  if ( *(_WORD *)(((v8 + 136) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_store16(p_core);
    goto LABEL_66;
  }
  p_core = (unsigned __int64)&handler->ec_;
  if ( *(_WORD *)(((unsigned __int64)&handler->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load16(p_core);
    goto LABEL_67;
  }
  *(__m128i *)(v8 + 136) = _mm_loadu_si128((const __m128i *)&handler->ec_);
  p_core = (unsigned __int64)&handler->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_core);
    goto LABEL_68;
  }
  p_core = v8 + 152;
  if ( *(_BYTE *)(((v8 + 152) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
LABEL_69:
    __asan_report_store4(p_core);
LABEL_70:
    __asan_report_load4(p_core);
    goto LABEL_71;
  }
  *(_QWORD *)(v8 + 152) = handler->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 160),
    &handler->handler_);
  p_core = v8 + 392;
  v18 = *(_BYTE *)(((v8 + 392) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_69;
  p_core = (unsigned __int64)&handler->handler_.boost::asio::coroutine;
  v19 = *(_BYTE *)(((unsigned __int64)&handler->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_70;
  *(_DWORD *)(v8 + 392) = handler->handler_.value_;
  if ( *(_BYTE *)(((v8 + 160) >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  *(_QWORD *)(v8 + 160) = &`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                        + 2;
  if ( *(_BYTE *)(((unsigned __int64)io_ex >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    v20 = (unsigned __int64)io_ex;
    __asan_report_load8(io_ex);
LABEL_73:
    v21 = (__int64 (**)(void))__asan_report_load8(v20);
    goto LABEL_74;
  }
  v20 = (unsigned __int64)io_ex->executor_.impl_;
  if ( !io_ex->executor_.impl_ )
    goto LABEL_37;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v21 = *(__int64 (***)(void))v20;
  if ( *(_BYTE *)((*(_QWORD *)v20 >> 3) + 0x7FFF8000LL) )
  {
LABEL_74:
    v22 = __asan_report_load8(v21);
    goto LABEL_75;
  }
  v20 = (*v21)();
LABEL_37:
  v22 = v8 + 400;
  if ( *(_BYTE *)(((v8 + 400) >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    p_has_native_impl = v22;
    __asan_report_store8();
    goto LABEL_76;
  }
  *(_QWORD *)(v8 + 400) = v20;
  p_has_native_impl = (unsigned __int64)&io_ex->has_native_impl_;
  if ( *(char *)(((unsigned __int64)&io_ex->has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_76:
    __asan_report_load1(p_has_native_impl);
    goto LABEL_77;
  }
  p_has_native_impl = v8 + 408;
  if ( *(char *)(((v8 + 408) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_77:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_78;
  }
  *(_BYTE *)(v8 + 408) = io_ex->has_native_impl_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)(v8 + 160));
  p_has_native_impl = (unsigned __int64)boost::asio::executor::get_impl((const boost::asio::executor *const)(v6 + 32));
  if ( *(_BYTE *)((p_has_native_impl >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_79;
  }
  v24 = *(_QWORD *)p_has_native_impl + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    v25 = v24;
    __asan_report_load8(v24);
LABEL_80:
    __asan_report_load8(v25);
    goto LABEL_81;
  }
  (*(void (**)(void))(*(_QWORD *)p_has_native_impl + 24LL))();
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_started((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v8 + 400));
  v25 = *(_QWORD *)(v6 + 32);
  if ( !v25 )
    goto LABEL_46;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  v26 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    p_might_have_pending_waits = v26;
    __asan_report_load8(v26);
    goto LABEL_82;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_46:
  *(_QWORD *)(v6 + 80) = v8;
  p_might_have_pending_waits = (unsigned __int64)&impl->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&impl->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_82:
    __asan_report_store1(p_might_have_pending_waits);
    goto LABEL_83;
  }
  impl->might_have_pending_waits = 1;
  p_might_have_pending_waits = (unsigned __int64)&this->scheduler_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
  {
    boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
      this->scheduler_,
      &this->timer_queue_,
      &impl->expiry,
      &impl->timer_data,
      *(boost::asio::detail::wait_op **)(v6 + 80));
    goto LABEL_84;
  }
LABEL_83:
  __asan_report_load8(p_might_have_pending_waits);
LABEL_84:
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
