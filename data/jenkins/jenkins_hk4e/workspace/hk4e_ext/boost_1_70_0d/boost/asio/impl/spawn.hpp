// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/spawn.hpp

// Line 78: range 000000000BF7F1E8-000000000BF7F336
void __cdecl boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_handler(
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const this,
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *a2)
{
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >::caller_type *ca; // rdx
  boost::asio::detail::atomic_count *ready; // rdx
  boost::system::error_code *ec; // rdx

  std::shared_ptr<boost::coroutines2::detail::push_coroutine<void>>::shared_ptr(&this->coro_, &a2->coro_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->ca_);
  ca = a2->ca_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ca_ = ca;
  boost::asio::executor_binder<void (*)(void),boost::asio::executor>::executor_binder(&this->handler_, &a2->handler_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->ready_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->ready_);
  ready = a2->ready_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ready_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ready_ = ready;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->ec_);
  ec = a2->ec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ec_ = ec;
};

// Line 78: range 000000000BF6BCE6-000000000BF6BD10
void __cdecl boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler(
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const this)
{
  boost::asio::executor_binder<void (*)(void),boost::asio::executor>::~executor_binder(&this->handler_);
  std::shared_ptr<boost::coroutines2::detail::push_coroutine<void>>::~shared_ptr(&this->coro_);
};

// Line 81: range 000000000BF78094-000000000BF781DB
void __cdecl boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_handler(
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const this,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *p_ctx)
{
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >::caller_type *ca; // rdx
  boost::system::error_code *ec; // rdx

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::lock((const std::weak_ptr<boost::coroutines2::detail::push_coroutine<void> > *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&p_ctx->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&p_ctx->ca_);
  ca = p_ctx->ca_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ca_ = ca;
  boost::asio::executor_binder<void (*)(void),boost::asio::executor>::executor_binder(&this->handler_, &p_ctx->handler_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ready_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ready_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&p_ctx->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&p_ctx->ec_);
  ec = p_ctx->ec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ec_ = ec;
};

// Line 97: range 000000000BFA9F2E-000000000BFAA0B2
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::operator()(
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const this,
        boost::system::error_code ec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  boost::system::error_code *v6; // rcx
  const boost::system::error_category *v7; // rdx
  boost::coroutines2::detail::push_coroutine<void> *v8; // rax
  const boost::system::error_category *cat; // [rsp+8h] [rbp-78h]
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  cat = ec.cat_;
  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ec:97";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_QWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 40) = cat;
  if ( *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ec_);
  v6 = this->ec_;
  if ( *(_WORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  v7 = *(const boost::system::error_category **)(v2 + 40);
  *(_QWORD *)&v6->val_ = *(_QWORD *)(v2 + 32);
  v6->cat_ = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->ready_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ready_);
  if ( !std::__atomic_base<long>::operator--(this->ready_) )
  {
    v8 = std::__shared_ptr_access<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    boost::coroutines2::detail::push_coroutine<void>::operator()(v8);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 113: range 000000000BF92BB2-000000000BF92BDA
void *__cdecl boost::asio::detail::asio_handler_allocate<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>(
        std::size_t size,
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *this_handler)
{
  return boost_asio_handler_alloc_helpers::allocate<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>(
           size,
           &this_handler->handler_);
};

// Line 121: range 000000000BF98E7F-000000000BF98EB0
void __cdecl boost::asio::detail::asio_handler_deallocate<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>(
        void *pointer,
        std::size_t size,
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *this_handler)
{
  boost_asio_handler_alloc_helpers::deallocate<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>(
    pointer,
    size,
    &this_handler->handler_);
};

// Line 129: range 000000000BF8550A-000000000BF85518
bool __cdecl boost::asio::detail::asio_handler_is_continuation<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>(
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *a1)
{
  return 1;
};

// Line 135: range 000000000BFA9DFF-000000000BFA9E28
void __cdecl boost::asio::detail::asio_handler_invoke<boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>,boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>(
        boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *function,
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *this_handler)
{
  boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>,boost::asio::executor_binder<void (*)(void),boost::asio::executor>>(
    function,
    &this_handler->handler_);
};

// Line 195: range 000000000BF7EF18-000000000BF7F081
void __cdecl boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_async_result(
        boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const this,
        boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>::completion_handler_type *h)
{
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >::caller_type *ca; // rdx
  boost::asio::detail::atomic_count *p_ready; // rcx
  boost::system::error_code *ec; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->handler_ = h;
  if ( *(_BYTE *)(((unsigned __int64)&h->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&h->ca_);
  ca = h->ca_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ca_ = ca;
  std::atomic<long>::atomic(&this->ready_, 2LL);
  boost::system::error_code::error_code(&this->ec_);
  p_ready = &this->ready_;
  if ( *(_BYTE *)(((unsigned __int64)&h->ready_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  h->ready_ = p_ready;
  if ( *(_BYTE *)(((unsigned __int64)&h->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&h->ec_);
  ec = h->ec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->out_ec_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->out_ec_ = ec;
  if ( !this->out_ec_ )
    h->ec_ = &this->ec_;
};

// Line 205: range 000000000BF732F4-000000000BF7346E
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::get(
        boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const this)
{
  boost::system::system_error *exception; // rbx
  __int64 v3; // rsi OVERLAPPED
  const boost::system::error_category *cat; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  std::__shared_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::reset(&this->handler_->coro_);
  if ( std::__atomic_base<long>::operator--(&this->ready_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->ca_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->ca_);
    boost::coroutines2::detail::pull_coroutine<void>::operator()(this->ca_);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->out_ec_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->out_ec_);
  if ( !this->out_ec_ && boost::system::error_code::operator bool(&this->ec_) )
  {
    exception = (boost::system::system_error *)__cxa_allocate_exception(0x40uLL);
    if ( *(_WORD *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
      __asan_report_load16();
    v3 = *(_QWORD *)&this->ec_.val_;
    cat = this->ec_.cat_;
    boost::system::system_error::system_error(exception, *(boost::system::error_code *)&v3);
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'boost::system::system_error,
      (void (__fastcall *)(void *))boost::system::system_error::~system_error);
  }
};

// Line 259: range 000000000BF781DC-000000000BF78201
void __cdecl boost::asio::async_result<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,void ()(boost::system::error_code)>::async_result(
        boost::asio::async_result<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,void(boost::system::error_code)> *const this,
        boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>::completion_handler_type *h)
{
  boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_async_result(
    this,
    h);
};

// Line 286: range 000000000BF8BE7F-000000000BF8BEAF
boost::asio::associated_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,std::allocator<void> >::type __cdecl boost::asio::associated_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,std::allocator<void>>::get(
        const boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *h,
        const std::allocator<void> *a)
{
  boost::asio::associated_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,std::allocator<void> >::type v2; // bl

  boost::asio::associated_allocator<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,std::allocator<void>>::get(
    &h->handler_,
    a);
  return v2;
};

// Line 298: range 000000000BF92EAC-000000000BF92F01
boost::asio::associated_executor<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> >::type __cdecl boost::asio::associated_executor<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::get(
        const boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *h,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *ex)
{
  const boost::asio::detail::io_object_executor<boost::asio::executor> *v2; // rcx

  v2 = (const boost::asio::detail::io_object_executor<boost::asio::executor> *)((char *)ex + 24);
  if ( *(_BYTE *)(((unsigned __int64)h >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::asio::associated_executor<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::get(
    (const boost::asio::executor_binder<void (*)(),boost::asio::executor> *)h,
    v2);
  return (boost::asio::associated_executor<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> >::type)h;
};

// Line 308: range 000000000BF7FA14-000000000BF7FA4A
void __cdecl boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::~spawn_data(
        boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *const this)
{
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::~executor_binder(&this->handler_);
  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::~weak_ptr(&this->coro_);
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 308: range 000000000BF81F24-000000000BF81F5A
void __cdecl boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::~spawn_data(
        boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *const this)
{
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::~executor_binder(&this->handler_);
  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::~weak_ptr(&this->coro_);
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 311: range 000000000BF6C1F4-000000000BF6C396
void __cdecl boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
        boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *const this,
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *handler,
        bool call_handler,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *function)
{
  __int64 v4; // rdx

  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::weak_ptr(&this->coro_);
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::executor_binder(
    &this->handler_,
    handler);
  if ( *(char *)(((unsigned __int64)&this->call_handler_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->call_handler_, handler);
  this->call_handler_ = call_handler;
  if ( *(char *)(((unsigned __int64)&this->function_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->function_.l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&this->function_.l_.a1_.t_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->function_, 24LL);
  }
  if ( *(char *)(((unsigned __int64)function >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&function->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)function + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&function->l_.a1_.t_ + 7) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load_n(
      function,
      24LL,
      (*(char *)(((unsigned __int64)function >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&function->l_.a1_.t_
                                                                                                  + 7) >> 3)
                                                                                                + 0x7FFF8000) != 0
                                                                                    && (((unsigned __int8)function + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&function->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)function + 23) & 7);
  }
  v4 = *((_QWORD *)&function->f_.f_ + 1);
  this->function_.f_.f_ = function->f_.f_;
  *((_QWORD *)&this->function_.f_.f_ + 1) = v4;
  this->function_.l_.a1_.t_ = function->l_.a1_.t_;
};

// Line 311: range 000000000BF6FB40-000000000BF6FCE2
void __cdecl boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
        boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *const this,
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *handler,
        bool call_handler,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *function)
{
  __int64 v4; // rdx

  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::weak_ptr(&this->coro_);
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::executor_binder(
    &this->handler_,
    handler);
  if ( *(char *)(((unsigned __int64)&this->call_handler_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->call_handler_, handler);
  this->call_handler_ = call_handler;
  if ( *(char *)(((unsigned __int64)&this->function_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->function_.l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&this->function_.l_.a1_.t_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->function_, 24LL);
  }
  if ( *(char *)(((unsigned __int64)function >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&function->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)function + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&function->l_.a1_.t_ + 7) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load_n(
      function,
      24LL,
      (*(char *)(((unsigned __int64)function >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&function->l_.a1_.t_
                                                                                                  + 7) >> 3)
                                                                                                + 0x7FFF8000) != 0
                                                                                    && (((unsigned __int8)function + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&function->l_.a1_.t_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)function + 23) & 7);
  }
  v4 = *((_QWORD *)&function->f_.f_ + 1);
  this->function_.f_.f_ = function->f_.f_;
  *((_QWORD *)&this->function_.f_.f_ + 1) = v4;
  this->function_.l_.a1_.t_ = function->l_.a1_.t_;
};

// Line 326: range 000000000BFA3C1E-000000000BFA3C43
void __cdecl boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::coro_entry_point(
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *const this,
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *a2)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>::shared_ptr(
    &this->data_,
    &a2->data_);
};

// Line 326: range 000000000BFA3C44-000000000BFA3C69
void __cdecl boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::coro_entry_point(
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *const this,
        const boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *a2)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>::shared_ptr(
    &this->data_,
    &a2->data_);
};

// Line 326: range 000000000BF92FDC-000000000BF92FF6
void __cdecl boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::~coro_entry_point(
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *const this)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>::~shared_ptr(&this->data_);
};

// Line 326: range 000000000BFA616C-000000000BFA6191
void __cdecl boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::coro_entry_point(
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *const this,
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *a2)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>::shared_ptr(
    &this->data_,
    &a2->data_);
};

// Line 326: range 000000000BFA6192-000000000BFA61B7
void __cdecl boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::coro_entry_point(
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *const this,
        const boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *a2)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>::shared_ptr(
    &this->data_,
    &a2->data_);
};

// Line 326: range 000000000BF94810-000000000BF9482A
void __cdecl boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::~coro_entry_point(
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *const this)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>::~shared_ptr(&this->data_);
};

// Line 328: range 000000000BFA83DC-000000000BFA85F9
void __cdecl boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::operator()(
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *const this,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >::caller_type *ca)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *p_handler; // r14
  std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char v10[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 8 data:330 64 56 9 yield:334";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>::shared_ptr(
    (std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > > *const)(v2 + 32),
    &this->data_);
  p_handler = &std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->handler_;
  v6 = std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>::basic_yield_context(
    (boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *const)(v2 + 64),
    &v6->coro_,
    ca,
    p_handler);
  v7 = std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::operator()<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>(
    &v7->function_,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *)(v2 + 64));
  v8 = std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&v8->call_handler_ >> 3) + 0x7FFF8000) < 0 )
    v8 = (std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v8->call_handler_);
  if ( v8->call_handler_ )
  {
    v9 = std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::operator()<>(&v9->handler_);
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *const)(v2 + 64));
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>::~shared_ptr((std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > > *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 328: range 000000000BFA9084-000000000BFA92A1
void __cdecl boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::operator()(
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *const this,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >::caller_type *ca)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *p_handler; // r14
  std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char v10[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 8 data:330 64 56 9 yield:334";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>::shared_ptr(
    (std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > > *const)(v2 + 32),
    &this->data_);
  p_handler = &std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->handler_;
  v6 = std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>::basic_yield_context(
    (boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *const)(v2 + 64),
    &v6->coro_,
    ca,
    p_handler);
  v7 = std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::operator()<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>(
    &v7->function_,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *)(v2 + 64));
  v8 = std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&v8->call_handler_ >> 3) + 0x7FFF8000) < 0 )
    v8 = (std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v8->call_handler_);
  if ( v8->call_handler_ )
  {
    v9 = std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::operator()<>(&v9->handler_);
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *const)(v2 + 64));
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>::~shared_ptr((std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > > *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 350: range 000000000BF6485E-000000000BF64896
void __cdecl boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::spawn_helper(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const this)
{
  std::size_t v1; // rax

  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>::shared_ptr(&this->data_);
  v1 = boost::context::stack_traits::default_size((boost::context::stack_traits *)this);
  boost::context::basic_fixedsize_stack<boost::context::stack_traits>::basic_fixedsize_stack(&this->salloc_, v1);
};

// Line 350: range 000000000BF79052-000000000BF790D1
void __cdecl boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::spawn_helper(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const this,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *a2)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>::shared_ptr(
    &this->data_,
    &a2->data_);
  if ( *(_BYTE *)(((unsigned __int64)&this->salloc_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&a2->salloc_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->salloc_);
  this->salloc_.size_ = a2->salloc_.size_;
};

// Line 350: range 000000000BF6C482-000000000BF6C501
void __cdecl boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::spawn_helper(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const this,
        const boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *a2)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>::shared_ptr(
    &this->data_,
    &a2->data_);
  if ( *(_BYTE *)(((unsigned __int64)&this->salloc_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&a2->salloc_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->salloc_);
  this->salloc_.size_ = a2->salloc_.size_;
};

// Line 350: range 000000000BF64898-000000000BF648B2
void __cdecl boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::~spawn_helper(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const this)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>::~shared_ptr(&this->data_);
};

// Line 350: range 000000000BF66CB2-000000000BF66CEA
void __cdecl boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::spawn_helper(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const this)
{
  std::size_t v1; // rax

  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>::shared_ptr(&this->data_);
  v1 = boost::context::stack_traits::default_size((boost::context::stack_traits *)this);
  boost::context::basic_fixedsize_stack<boost::context::stack_traits>::basic_fixedsize_stack(&this->salloc_, v1);
};

// Line 350: range 000000000BF7B7EE-000000000BF7B86D
void __cdecl boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::spawn_helper(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const this,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *a2)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>::shared_ptr(
    &this->data_,
    &a2->data_);
  if ( *(_BYTE *)(((unsigned __int64)&this->salloc_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&a2->salloc_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->salloc_);
  this->salloc_.size_ = a2->salloc_.size_;
};

// Line 350: range 000000000BF6FDCE-000000000BF6FE4D
void __cdecl boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::spawn_helper(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const this,
        const boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *a2)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>::shared_ptr(
    &this->data_,
    &a2->data_);
  if ( *(_BYTE *)(((unsigned __int64)&this->salloc_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&a2->salloc_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->salloc_);
  this->salloc_.size_ = a2->salloc_.size_;
};

// Line 350: range 000000000BF66CEC-000000000BF66D06
void __cdecl boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::~spawn_helper(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const this)
{
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>::~shared_ptr(&this->data_);
};

// Line 352: range 000000000BF92FF8-000000000BF931BE
void __cdecl boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::operator()(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  boost::coroutines2::detail::push_coroutine<void> *v5; // rax
  boost::coroutines2::detail::push_coroutine<void> *__p; // [rsp+0h] [rbp-90h]
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 entry_point:355 64 16 8 coro:357";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::operator();
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>::shared_ptr(
    (std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > > *const)(v1 + 32),
    &this->data_);
  __p = (boost::coroutines2::detail::push_coroutine<void> *)operator new(8uLL);
  boost::coroutines2::detail::push_coroutine<void>::push_coroutine<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(
    __p,
    &this->salloc_,
    (boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *)(v1 + 32));
  std::shared_ptr<boost::coroutines2::detail::push_coroutine<void>>::shared_ptr<boost::coroutines2::detail::push_coroutine<void>,void>(
    (std::shared_ptr<boost::coroutines2::detail::push_coroutine<void> > *const)(v1 + 64),
    __p);
  v4 = std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::operator=<boost::coroutines2::detail::push_coroutine<void>>(
    &v4->coro_,
    (const std::shared_ptr<boost::coroutines2::detail::push_coroutine<void> > *)(v1 + 64));
  v5 = std::__shared_ptr_access<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  boost::coroutines2::detail::push_coroutine<void>::operator()(v5);
  std::shared_ptr<boost::coroutines2::detail::push_coroutine<void>>::~shared_ptr((std::shared_ptr<boost::coroutines2::detail::push_coroutine<void> > *const)(v1 + 64));
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::~coro_entry_point((boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 352: range 000000000BF9482C-000000000BF949F2
void __cdecl boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::operator()(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  boost::coroutines2::detail::push_coroutine<void> *v5; // rax
  boost::coroutines2::detail::push_coroutine<void> *__p; // [rsp+0h] [rbp-90h]
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 entry_point:355 64 16 8 coro:357";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::operator();
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>::shared_ptr(
    (std::shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > > *const)(v1 + 32),
    &this->data_);
  __p = (boost::coroutines2::detail::push_coroutine<void> *)operator new(8uLL);
  boost::coroutines2::detail::push_coroutine<void>::push_coroutine<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(
    __p,
    &this->salloc_,
    (boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *)(v1 + 32));
  std::shared_ptr<boost::coroutines2::detail::push_coroutine<void>>::shared_ptr<boost::coroutines2::detail::push_coroutine<void>,void>(
    (std::shared_ptr<boost::coroutines2::detail::push_coroutine<void> > *const)(v1 + 64),
    __p);
  v4 = std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::operator=<boost::coroutines2::detail::push_coroutine<void>>(
    &v4->coro_,
    (const std::shared_ptr<boost::coroutines2::detail::push_coroutine<void> > *)(v1 + 64));
  v5 = std::__shared_ptr_access<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  boost::coroutines2::detail::push_coroutine<void>::operator()(v5);
  std::shared_ptr<boost::coroutines2::detail::push_coroutine<void>>::~shared_ptr((std::shared_ptr<boost::coroutines2::detail::push_coroutine<void> > *const)(v1 + 64));
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::~coro_entry_point((boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 375: range 000000000BF7FB1B-000000000BF7FB4C
void __cdecl boost::asio::detail::asio_handler_invoke<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *function,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *this_handler)
{
  boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *p_handler; // rdx

  p_handler = &std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)this_handler)->handler_;
  boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>(
    function,
    p_handler);
};

// Line 375: range 000000000BF8202B-000000000BF8205C
void __cdecl boost::asio::detail::asio_handler_invoke<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *function,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *this_handler)
{
  boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *p_handler; // rdx

  p_handler = &std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2,false,false> *const)this_handler)->handler_;
  boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>(
    function,
    p_handler);
};

// Line 407: range 000000000BEFC35E-000000000BEFC364
void __cdecl boost::asio::detail::default_spawn_handler()
{
  ;
};

// Line 425: range 000000000BF648B3-000000000BF64B01
void __cdecl boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *handler,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *function,
        const boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        std::enable_if<true,void>::type *a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *__p; // [rsp+8h] [rbp-E8h]
  char v9[192]; // [rsp+30h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 5 a:437 64 16 6 ex:434 96 24 10 helper:440";
  *(_QWORD *)(v4 + 16) = boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  boost::asio::get_associated_executor<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>((const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *)(v4 + 64));
  boost::asio::get_associated_allocator<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>(handler);
  boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::spawn_helper((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v4 + 96));
  __p = (boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *)operator new(0x48uLL);
  boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
    __p,
    handler,
    1,
    function);
  std::__shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2>::reset<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>>(
    (std::__shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 96),
    __p);
  if ( *(_BYTE *)(((unsigned __int64)salloc >> 3) + 0x7FFF8000) )
    __asan_report_load8(salloc);
  *(boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)(v4 + 112) = (boost::context::basic_fixedsize_stack<boost::context::stack_traits>)salloc->size_;
  boost::asio::io_context::strand::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>(
    (const boost::asio::io_context::strand *const)(v4 + 64),
    (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)(v4 + 96),
    (const std::allocator<void> *)(v4 + 48));
  boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::~spawn_helper((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v4 + 96));
  boost::asio::io_context::strand::~strand((boost::asio::io_context::strand *const)(v4 + 64));
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 425: range 000000000BF66D07-000000000BF66F55
void __cdecl boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *handler,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *function,
        const boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        std::enable_if<true,void>::type *a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *__p; // [rsp+8h] [rbp-E8h]
  char v9[192]; // [rsp+30h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 5 a:437 64 16 6 ex:434 96 24 10 helper:440";
  *(_QWORD *)(v4 + 16) = boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  boost::asio::get_associated_executor<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>((const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *)(v4 + 64));
  boost::asio::get_associated_allocator<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>(handler);
  boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::spawn_helper((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v4 + 96));
  __p = (boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *)operator new(0x48uLL);
  boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
    __p,
    handler,
    1,
    function);
  std::__shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>,(__gnu_cxx::_Lock_policy)2>::reset<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>>(
    (std::__shared_ptr<boost::asio::detail::spawn_data<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 96),
    __p);
  if ( *(_BYTE *)(((unsigned __int64)salloc >> 3) + 0x7FFF8000) )
    __asan_report_load8(salloc);
  *(boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)(v4 + 112) = (boost::context::basic_fixedsize_stack<boost::context::stack_traits>)salloc->size_;
  boost::asio::io_context::strand::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>(
    (const boost::asio::io_context::strand *const)(v4 + 64),
    (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)(v4 + 96),
    (const std::allocator<void> *)(v4 + 48));
  boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::~spawn_helper((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v4 + 96));
  boost::asio::io_context::strand::~strand((boost::asio::io_context::strand *const)(v4 + 64));
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 496: range 000000000BF5CB5D-000000000BF5CBDF
void __cdecl boost::asio::spawn<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
        const boost::asio::io_context::strand *s,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *function,
        const boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc)
{
  void (*t)(void); // [rsp+28h] [rbp-38h] BYREF
  boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> handler; // [rsp+30h] [rbp-30h] BYREF

  t = boost::asio::detail::default_spawn_handler;
  boost::asio::bind_executor<boost::asio::io_context::strand,void (*)(void)>(&handler, s, &t, 0LL);
  boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
    &handler,
    function,
    salloc,
    0LL);
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::~executor_binder(&handler);
};

// Line 496: range 000000000BF5FE3B-000000000BF5FEBD
void __cdecl boost::asio::spawn<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
        const boost::asio::io_context::strand *s,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *function,
        const boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc)
{
  void (*t)(void); // [rsp+28h] [rbp-38h] BYREF
  boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> handler; // [rsp+30h] [rbp-30h] BYREF

  t = boost::asio::detail::default_spawn_handler;
  boost::asio::bind_executor<boost::asio::io_context::strand,void (*)(void)>(&handler, s, &t, 0LL);
  boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
    &handler,
    function,
    salloc,
    0LL);
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::~executor_binder(&handler);
};
