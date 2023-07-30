// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/strand_service.hpp

// Line 31: range 000000000C64E4C2-000000000C64E574
void __cdecl boost::asio::detail::strand_service::strand_impl::strand_impl(
        boost::asio::detail::strand_service::strand_impl *const this)
{
  boost::asio::detail::scheduler_operation::scheduler_operation(
    this,
    (boost::asio::detail::scheduler_operation::func_type)boost::asio::detail::strand_service::do_complete);
  boost::asio::detail::posix_mutex::posix_mutex(&this->mutex_);
  if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->locked_);
  this->locked_ = 0;
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue(&this->waiting_queue_);
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue(&this->ready_queue_);
};

// Line 42: range 000000000C64E576-000000000C64E72D
void __cdecl boost::asio::detail::strand_service::on_dispatch_exit::~on_dispatch_exit(
        boost::asio::detail::strand_service::on_dispatch_exit *const this)
{
  bool v1; // cl
  boost::asio::detail::strand_service::strand_impl *impl; // rax
  char v3; // di
  boost::asio::detail::io_context_impl *io_context; // rax
  bool more_handlers; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->impl_);
  boost::asio::detail::posix_mutex::lock(&this->impl_->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->impl_);
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::scheduler_operation>(
    &this->impl_->ready_queue_,
    &this->impl_->waiting_queue_);
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->impl_);
  v1 = boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::empty(&this->impl_->ready_queue_);
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->impl_);
  impl = this->impl_;
  v3 = !v1;
  if ( *(char *)(((unsigned __int64)&impl->locked_ >> 3) + 0x7FFF8000) < 0 )
  {
    v3 = (_BYTE)impl + 64;
    impl = (boost::asio::detail::strand_service::strand_impl *)__asan_report_store1(&impl->locked_);
  }
  impl->locked_ = v3;
  more_handlers = impl->locked_;
  boost::asio::detail::posix_mutex::unlock(&this->impl_->mutex_);
  if ( more_handlers )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    io_context = this->io_context_;
    if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
      io_context = (boost::asio::detail::io_context_impl *)__asan_report_load8(&this->impl_);
    boost::asio::detail::scheduler::post_immediate_completion(io_context, this->impl_, 0);
  }
};

// Line 55: range 000000000C6CA006-000000000C6CA433
void __cdecl boost::asio::detail::strand_service::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(
        boost::asio::detail::strand_service *const this,
        boost::asio::detail::strand_service::implementation_type *impl,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *handler)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > > *v6; // r14
  bool dispatch_immediately; // [rsp+27h] [rbp-129h]
  boost::asio::detail::operation *o; // [rsp+28h] [rbp-128h]
  boost::system::error_code v10; // [rsp+30h] [rbp-120h] BYREF
  char v11[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 4 b:61 64 16 10 on_exit:85 96 24 4 p:68 160 24 6 ctx:82";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::strand_service::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_load8(impl);
  if ( boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::contains(*impl) )
  {
    boost::asio::detail::std_fenced_block::std_fenced_block(
      (boost::asio::detail::std_fenced_block *const)(v3 + 48),
      full);
    boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(
      handler,
      handler);
    boost::asio::detail::std_fenced_block::~std_fenced_block((boost::asio::detail::std_fenced_block *const)(v3 + 48));
  }
  else
  {
    *(_QWORD *)(v3 + 96) = 0LL;
    *(_QWORD *)(v3 + 104) = 0LL;
    *(_QWORD *)(v3 + 112) = 0LL;
    *(_QWORD *)(v3 + 96) = std::addressof<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(handler);
    *(_QWORD *)(v3 + 104) = boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>::ptr::allocate(handler);
    v6 = (boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > > *)operator new(0x30uLL, *(void **)(v3 + 104));
    boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>::completion_handler(
      v6,
      handler);
    *(_QWORD *)(v3 + 112) = v6;
    dispatch_immediately = boost::asio::detail::strand_service::do_dispatch(
                             this,
                             impl,
                             *(boost::asio::detail::operation **)(v3 + 112));
    o = *(boost::asio::detail::operation **)(v3 + 112);
    *(_QWORD *)(v3 + 112) = 0LL;
    *(_QWORD *)(v3 + 104) = *(_QWORD *)(v3 + 112);
    if ( dispatch_immediately )
    {
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
        __asan_report_load8(impl);
      boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context::context(
        (boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *const)(v3 + 160),
        *impl);
      if ( *(_BYTE *)(((unsigned __int64)&this->io_context_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->io_context_);
      *(_QWORD *)(v3 + 64) = this->io_context_;
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
        __asan_report_load8(impl);
      *(_QWORD *)(v3 + 72) = *impl;
      boost::system::error_code::error_code(&v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->io_context_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->io_context_);
      boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>::do_complete(
        this->io_context_,
        o,
        &v10,
        0LL);
      boost::asio::detail::strand_service::on_dispatch_exit::~on_dispatch_exit((boost::asio::detail::strand_service::on_dispatch_exit *const)(v3 + 64));
      boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context::~context((boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *const)(v3 + 160));
    }
    boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>::ptr::~ptr((boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > >::ptr *const)(v3 + 96));
  }
  if ( v11 == (char *)v3 )
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

// Line 55: range 000000000C6CC060-000000000C6CC48D
void __cdecl boost::asio::detail::strand_service::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(
        boost::asio::detail::strand_service *const this,
        boost::asio::detail::strand_service::implementation_type *impl,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *handler)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > > *v6; // r14
  bool dispatch_immediately; // [rsp+27h] [rbp-129h]
  boost::asio::detail::operation *o; // [rsp+28h] [rbp-128h]
  boost::system::error_code v10; // [rsp+30h] [rbp-120h] BYREF
  char v11[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 4 b:61 64 16 10 on_exit:85 96 24 4 p:68 160 24 6 ctx:82";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::strand_service::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_load8(impl);
  if ( boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::contains(*impl) )
  {
    boost::asio::detail::std_fenced_block::std_fenced_block(
      (boost::asio::detail::std_fenced_block *const)(v3 + 48),
      full);
    boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(
      handler,
      handler);
    boost::asio::detail::std_fenced_block::~std_fenced_block((boost::asio::detail::std_fenced_block *const)(v3 + 48));
  }
  else
  {
    *(_QWORD *)(v3 + 96) = 0LL;
    *(_QWORD *)(v3 + 104) = 0LL;
    *(_QWORD *)(v3 + 112) = 0LL;
    *(_QWORD *)(v3 + 96) = std::addressof<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(handler);
    *(_QWORD *)(v3 + 104) = boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>::ptr::allocate(handler);
    v6 = (boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > > *)operator new(0x30uLL, *(void **)(v3 + 104));
    boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>::completion_handler(
      v6,
      handler);
    *(_QWORD *)(v3 + 112) = v6;
    dispatch_immediately = boost::asio::detail::strand_service::do_dispatch(
                             this,
                             impl,
                             *(boost::asio::detail::operation **)(v3 + 112));
    o = *(boost::asio::detail::operation **)(v3 + 112);
    *(_QWORD *)(v3 + 112) = 0LL;
    *(_QWORD *)(v3 + 104) = *(_QWORD *)(v3 + 112);
    if ( dispatch_immediately )
    {
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
        __asan_report_load8(impl);
      boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context::context(
        (boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *const)(v3 + 160),
        *impl);
      if ( *(_BYTE *)(((unsigned __int64)&this->io_context_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->io_context_);
      *(_QWORD *)(v3 + 64) = this->io_context_;
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
        __asan_report_load8(impl);
      *(_QWORD *)(v3 + 72) = *impl;
      boost::system::error_code::error_code(&v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->io_context_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->io_context_);
      boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>::do_complete(
        this->io_context_,
        o,
        &v10,
        0LL);
      boost::asio::detail::strand_service::on_dispatch_exit::~on_dispatch_exit((boost::asio::detail::strand_service::on_dispatch_exit *const)(v3 + 64));
      boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context::~context((boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *const)(v3 + 160));
    }
    boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>::ptr::~ptr((boost::asio::detail::completion_handler<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > >::ptr *const)(v3 + 96));
  }
  if ( v11 == (char *)v3 )
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

// Line 55: range 000000000C708088-000000000C7084B5
void __cdecl boost::asio::detail::strand_service::dispatch<boost::asio::executor::function>(
        boost::asio::detail::strand_service *const this,
        boost::asio::detail::strand_service::implementation_type *impl,
        boost::asio::executor::function *handler)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::asio::detail::completion_handler<boost::asio::executor::function> *v6; // r14
  bool dispatch_immediately; // [rsp+27h] [rbp-129h]
  boost::asio::detail::operation *o; // [rsp+28h] [rbp-128h]
  boost::system::error_code v10; // [rsp+30h] [rbp-120h] BYREF
  char v11[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 4 b:61 64 16 10 on_exit:85 96 24 4 p:68 160 24 6 ctx:82";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::strand_service::dispatch<boost::asio::executor::function>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_load8(impl);
  if ( boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::contains(*impl) )
  {
    boost::asio::detail::std_fenced_block::std_fenced_block(
      (boost::asio::detail::std_fenced_block *const)(v3 + 48),
      full);
    boost_asio_handler_invoke_helpers::invoke<boost::asio::executor::function,boost::asio::executor::function>(
      handler,
      handler);
    boost::asio::detail::std_fenced_block::~std_fenced_block((boost::asio::detail::std_fenced_block *const)(v3 + 48));
  }
  else
  {
    *(_QWORD *)(v3 + 96) = 0LL;
    *(_QWORD *)(v3 + 104) = 0LL;
    *(_QWORD *)(v3 + 112) = 0LL;
    *(_QWORD *)(v3 + 96) = std::addressof<boost::asio::executor::function>(handler);
    *(_QWORD *)(v3 + 104) = boost::asio::detail::completion_handler<boost::asio::executor::function>::ptr::allocate(handler);
    v6 = (boost::asio::detail::completion_handler<boost::asio::executor::function> *)operator new(
                                                                                       0x20uLL,
                                                                                       *(void **)(v3 + 104));
    boost::asio::detail::completion_handler<boost::asio::executor::function>::completion_handler(v6, handler);
    *(_QWORD *)(v3 + 112) = v6;
    dispatch_immediately = boost::asio::detail::strand_service::do_dispatch(
                             this,
                             impl,
                             *(boost::asio::detail::operation **)(v3 + 112));
    o = *(boost::asio::detail::operation **)(v3 + 112);
    *(_QWORD *)(v3 + 112) = 0LL;
    *(_QWORD *)(v3 + 104) = *(_QWORD *)(v3 + 112);
    if ( dispatch_immediately )
    {
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
        __asan_report_load8(impl);
      boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context::context(
        (boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *const)(v3 + 160),
        *impl);
      if ( *(_BYTE *)(((unsigned __int64)&this->io_context_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->io_context_);
      *(_QWORD *)(v3 + 64) = this->io_context_;
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
        __asan_report_load8(impl);
      *(_QWORD *)(v3 + 72) = *impl;
      boost::system::error_code::error_code(&v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->io_context_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->io_context_);
      boost::asio::detail::completion_handler<boost::asio::executor::function>::do_complete(
        this->io_context_,
        o,
        &v10,
        0LL);
      boost::asio::detail::strand_service::on_dispatch_exit::~on_dispatch_exit((boost::asio::detail::strand_service::on_dispatch_exit *const)(v3 + 64));
      boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context::~context((boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *const)(v3 + 160));
    }
    boost::asio::detail::completion_handler<boost::asio::executor::function>::ptr::~ptr((boost::asio::detail::completion_handler<boost::asio::executor::function>::ptr *const)(v3 + 96));
  }
  if ( v11 == (char *)v3 )
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

// Line 95: range 000000000C7084B6-000000000C708685
void __cdecl boost::asio::detail::strand_service::post<boost::asio::executor::function>(
        boost::asio::detail::strand_service *const this,
        boost::asio::detail::strand_service::implementation_type *impl,
        boost::asio::executor::function *handler)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  boost::asio::detail::completion_handler<boost::asio::executor::function> *v6; // r14
  bool is_continuation; // [rsp+2Fh] [rbp-91h]
  char v9[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 5 p:103";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::strand_service::post<boost::asio::executor::function>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  is_continuation = boost_asio_handler_cont_helpers::is_continuation<boost::asio::executor::function>(handler);
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 32) = std::addressof<boost::asio::executor::function>(handler);
  *(_QWORD *)(v3 + 40) = boost::asio::detail::completion_handler<boost::asio::executor::function>::ptr::allocate(handler);
  v6 = (boost::asio::detail::completion_handler<boost::asio::executor::function> *)operator new(
                                                                                     0x20uLL,
                                                                                     *(void **)(v3 + 40));
  boost::asio::detail::completion_handler<boost::asio::executor::function>::completion_handler(v6, handler);
  *(_QWORD *)(v3 + 48) = v6;
  boost::asio::detail::strand_service::do_post(
    this,
    impl,
    *(boost::asio::detail::operation **)(v3 + 48),
    is_continuation);
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 48);
  boost::asio::detail::completion_handler<boost::asio::executor::function>::ptr::~ptr((boost::asio::detail::completion_handler<boost::asio::executor::function>::ptr *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};
