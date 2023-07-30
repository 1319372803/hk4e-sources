// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/spawn.hpp

// Line 59: range 000000000BF6417E-000000000BF64295
void __cdecl boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const this,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *a2)
{
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >::caller_type *ca; // rdx
  boost::system::error_code *ec; // rdx

  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::weak_ptr(&this->coro_, &a2->coro_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->ca_);
  ca = a2->ca_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ca_ = ca;
  boost::asio::executor_binder<void (*)(void),boost::asio::executor>::executor_binder(&this->handler_, &a2->handler_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->ec_);
  ec = a2->ec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ec_ = ec;
};

// Line 59: range 000000000BEFC7E2-000000000BEFC8F9
void __cdecl boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const this,
        const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *a2)
{
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >::caller_type *ca; // rdx
  boost::system::error_code *ec; // rdx

  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::weak_ptr(&this->coro_, &a2->coro_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->ca_);
  ca = a2->ca_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ca_ = ca;
  boost::asio::executor_binder<void (*)(void),boost::asio::executor>::executor_binder(&this->handler_, &a2->handler_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->ec_);
  ec = a2->ec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ec_ = ec;
};

// Line 59: range 000000000BEFC8FA-000000000BEFC924
void __cdecl boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const this)
{
  boost::asio::executor_binder<void (*)(void),boost::asio::executor>::~executor_binder(&this->handler_);
  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::~weak_ptr(&this->coro_);
};

// Line 59: range 000000000BFA83B0-000000000BFA83DA
void __cdecl boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>::~basic_yield_context(
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *const this)
{
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::~executor_binder(&this->handler_);
  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::~weak_ptr(&this->coro_);
};

// Line 102: range 000000000BFAA0B4-000000000BFAA17D
void __cdecl boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>::basic_yield_context(
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *const this,
        const std::weak_ptr<boost::coroutines2::detail::push_coroutine<void> > *coro,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >::caller_type *ca,
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *handler)
{
  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::weak_ptr(&this->coro_, coro);
  if ( *(_BYTE *)(((unsigned __int64)&this->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ca_ = ca;
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::executor_binder(
    &this->handler_,
    handler);
  if ( *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ec_ = 0LL;
};

// Line 117: range 000000000BFAC4AE-000000000BFAC5C5
void __cdecl boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>(
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const this,
        const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *other)
{
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >::caller_type *ca; // rdx
  boost::system::error_code *ec; // rdx

  std::weak_ptr<boost::coroutines2::detail::push_coroutine<void>>::weak_ptr(&this->coro_, &other->coro_);
  if ( *(_BYTE *)(((unsigned __int64)&other->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&other->ca_);
  ca = other->ca_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ca_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ca_ = ca;
  boost::asio::executor_binder<void (*)(void),boost::asio::executor>::executor_binder<void (*)(void),boost::asio::io_context::strand>(
    &this->handler_,
    &other->handler_);
  if ( *(_BYTE *)(((unsigned __int64)&other->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&other->ec_);
  ec = other->ec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ec_ = ec;
};

// Line 144: range 000000000BF64296-000000000BF642F4
boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *__cdecl boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::operator[](
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *retstr,
        const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const this,
        boost::system::error_code *ec)
{
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    retstr,
    this);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->ec_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  retstr->ec_ = ec;
  return retstr;
};
