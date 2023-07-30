// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/coroutine2/detail/push_coroutine.ipp

// Line 157: range 000000000BF9A180-000000000BF9A1EA
void __cdecl boost::coroutines2::detail::push_coroutine<void>::push_coroutine<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(
        boost::coroutines2::detail::push_coroutine<void> *const this,
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *fn)
{
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *v3; // rbx
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v4; // rax
  boost::coroutines2::detail::push_coroutine<void>::control_block *v5; // rax

  v3 = std::forward<boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(fn);
  v4 = std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(salloc);
  v5 = boost::coroutines2::detail::create_control_block<boost::coroutines2::detail::push_coroutine<void>::control_block,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(
         v4,
         v3);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = (boost::coroutines2::detail::push_coroutine<void>::control_block *)__asan_report_store8();
  this->cb_ = v5;
};

// Line 162: range 000000000BEFBD98-000000000BEFBDE2
void __cdecl boost::coroutines2::detail::push_coroutine<void>::~push_coroutine(
        boost::coroutines2::detail::push_coroutine<void> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->cb_ )
    boost::coroutines2::detail::push_coroutine<void>::control_block::deallocate(this->cb_);
};

// Line 176: range 000000000BEFBDE4-000000000BEFBE25
boost::coroutines2::detail::push_coroutine<void> *__cdecl boost::coroutines2::detail::push_coroutine<void>::operator()(
        boost::coroutines2::detail::push_coroutine<void> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::coroutines2::detail::push_coroutine<void>::control_block::resume(this->cb_);
  return this;
};

// Line 1310: range 000000000BF99422-000000000BF9948C
void __cdecl boost::coroutines2::detail::push_coroutine<void>::push_coroutine<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(
        boost::coroutines2::detail::push_coroutine<void> *const this,
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *fn)
{
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *v3; // rbx
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v4; // rax
  boost::coroutines2::detail::push_coroutine<void>::control_block *v5; // rax

  v3 = std::forward<boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(fn);
  v4 = std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(salloc);
  v5 = boost::coroutines2::detail::create_control_block<boost::coroutines2::detail::push_coroutine<void>::control_block,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(
         v4,
         v3);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = (boost::coroutines2::detail::push_coroutine<void>::control_block *)__asan_report_store8();
  this->cb_ = v5;
};
