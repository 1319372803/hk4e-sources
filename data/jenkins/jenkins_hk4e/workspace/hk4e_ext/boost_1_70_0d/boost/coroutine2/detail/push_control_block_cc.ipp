// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/coroutine2/detail/push_control_block_cc.ipp

// Line 287: range 000000000BEFC14A-000000000BEFC249
void __cdecl boost::coroutines2::detail::push_coroutine<void>::control_block::destroy(
        boost::coroutines2::detail::push_coroutine<void>::control_block *cb)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::context::fiber *v4; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 c:288";
  *(_QWORD *)(v1 + 16) = boost::coroutines2::detail::push_coroutine<void>::control_block::destroy;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  v4 = std::move<boost::context::fiber &>(&cb->c);
  boost::context::fiber::fiber((boost::context::fiber *const)(v1 + 32), v4);
  boost::coroutines2::detail::push_coroutine<void>::control_block::~control_block(cb);
  boost::coroutines2::detail::operator|=(&cb->state, destroy);
  boost::context::fiber::~fiber((boost::context::fiber *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 296: range 000000000BFA3C8A-000000000BFA3F4D
void __fastcall boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(
        boost::coroutines2::detail::push_coroutine<void>::control_block *const this,
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *fn,
        boost::context::preallocated palloc)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v7; // r15
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *v8; // rax
  boost::context::fiber other; // [rsp+28h] [rbp-B8h] BYREF
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> v11; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 10 palloc:296";
  *(_QWORD *)(v4 + 16) = boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  *(boost::context::preallocated *)(v4 + 32) = palloc;
  v7 = std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(salloc);
  v11.__this = this;
  v8 = std::forward<boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(fn);
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::coro_entry_point(
    &v11.__fn_,
    v8);
  boost::context::fiber::fiber<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>(
    &this->c,
    v7,
    &v11,
    *(boost::context::preallocated *)(v4 + 32));
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::~fiber(&v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->other >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->other = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state);
  }
  this->state = unwind;
  std::__exception_ptr::exception_ptr::exception_ptr(&this->except);
  std::move<boost::context::fiber &>(&this->c);
  boost::context::fiber::resume(&other);
  boost::context::fiber::operator=(&this->c, &other);
  boost::context::fiber::~fiber(&other);
  if ( v12 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 296: range 000000000BFA61D8-000000000BFA649B
void __fastcall boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(
        boost::coroutines2::detail::push_coroutine<void>::control_block *const this,
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *fn,
        boost::context::preallocated palloc)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v7; // r15
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *v8; // rax
  boost::context::fiber other; // [rsp+28h] [rbp-B8h] BYREF
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> v11; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 10 palloc:296";
  *(_QWORD *)(v4 + 16) = boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  *(boost::context::preallocated *)(v4 + 32) = palloc;
  v7 = std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(salloc);
  v11.__this = this;
  v8 = std::forward<boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(fn);
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::coro_entry_point(
    &v11.__fn_,
    v8);
  boost::context::fiber::fiber<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>(
    &this->c,
    v7,
    &v11,
    *(boost::context::preallocated *)(v4 + 32));
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::~fiber(&v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->other >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->other = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state);
  }
  this->state = unwind;
  std::__exception_ptr::exception_ptr::exception_ptr(&this->except);
  std::move<boost::context::fiber &>(&this->c);
  boost::context::fiber::resume(&other);
  boost::context::fiber::operator=(&this->c, &other);
  boost::context::fiber::~fiber(&other);
  if ( v12 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 330: range 000000000BFA35FA-000000000BFA3C1D
boost::context::fiber __cdecl boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::operator()(
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *const this,
        boost::context::fiber *c)
{
  boost::context::fiber *v2; // rdx
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 ptr; // rax
  boost::context::detail::fiber_activation_record *v7; // rax
  boost::context::detail::fiber_activation_record *v8; // rax
  boost::context::detail::fiber_activation_record *v9; // rax
  char v10; // dl
  std::remove_reference<boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::type *v11; // rax
  boost::context::detail::fiber_activation_record *v12; // rax
  boost::context::detail::fiber_activation_record *v13; // rax
  boost::context::detail::fiber_activation_record *v14; // rax
  boost::context::fiber *v15; // rdx
  boost::context::fiber *ca; // [rsp+8h] [rbp-108h]
  boost::context::fiber other; // [rsp+20h] [rbp-F0h] BYREF
  boost::context::fiber v19; // [rsp+28h] [rbp-E8h] BYREF
  char v20[208]; // [rsp+40h] [rbp-D0h] BYREF

  ca = v2;
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 synthesized:333 64 16 6 fn:338 96 32 18 synthesized_cb:332";
  *(_QWORD *)(v3 + 16) = boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::coroutines2::detail::pull_coroutine<void>::control_block::control_block(
    (boost::coroutines2::detail::pull_coroutine<void>::control_block *const)(v3 + 96),
    (boost::coroutines2::detail::push_coroutine<void>::control_block *)c->ptr_,
    ca);
  boost::coroutines2::detail::pull_coroutine<void>::pull_coroutine(
    (boost::coroutines2::detail::pull_coroutine<void> *const)(v3 + 32),
    (boost::coroutines2::detail::pull_coroutine<void>::control_block *)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ptr = (__int64)c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    ptr = __asan_report_store8();
  *(_QWORD *)(ptr + 8) = v3 + 96;
  v7 = c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::move<boost::context::fiber &>((boost::context::fiber *)v7->uctx.uc_flags);
  boost::context::fiber::resume(&other);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::context::fiber::operator=((boost::context::fiber *const)v8->uctx.uc_flags, &other);
  boost::context::fiber::~fiber(&other);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = c->ptr_;
  v10 = *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx.uc_link >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
    __asan_report_load4(&c->ptr_->uctx.uc_link);
  if ( boost::coroutines2::detail::operator&((boost::coroutines2::detail::state_t)v9->uctx.uc_link, destroy) == none )
  {
    v11 = std::move<boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>((boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *)&c[1]);
    boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::coro_entry_point(
      (boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *const)(v3 + 64),
      v11);
    boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::operator()(
      (boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *const)(v3 + 64),
      (boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >::caller_type *)(v3 + 32));
    boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::~coro_entry_point((boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *const)(v3 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::coroutines2::detail::operator|=((boost::coroutines2::detail::state_t *)&c->ptr_->uctx.uc_link, complete);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::move<boost::context::fiber &>((boost::context::fiber *)v12->uctx.uc_flags);
  boost::context::fiber::resume(&v19);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::context::fiber::operator=((boost::context::fiber *const)v13->uctx.uc_flags, &v19);
  boost::context::fiber::~fiber(&v19);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = std::move<boost::context::fiber &>((boost::context::fiber *)v14->uctx.uc_flags);
  boost::context::fiber::fiber((boost::context::fiber *const)this, v15);
  boost::coroutines2::detail::pull_coroutine<void>::~pull_coroutine((boost::coroutines2::detail::pull_coroutine<void> *const)(v3 + 32));
  boost::coroutines2::detail::pull_coroutine<void>::control_block::~control_block((boost::coroutines2::detail::pull_coroutine<void>::control_block *const)(v3 + 96));
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return (boost::context::fiber)this;
};

// Line 330: range 000000000BFA5B48-000000000BFA616B
boost::context::fiber __cdecl boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::operator()(
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *const this,
        boost::context::fiber *c)
{
  boost::context::fiber *v2; // rdx
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 ptr; // rax
  boost::context::detail::fiber_activation_record *v7; // rax
  boost::context::detail::fiber_activation_record *v8; // rax
  boost::context::detail::fiber_activation_record *v9; // rax
  char v10; // dl
  std::remove_reference<boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::type *v11; // rax
  boost::context::detail::fiber_activation_record *v12; // rax
  boost::context::detail::fiber_activation_record *v13; // rax
  boost::context::detail::fiber_activation_record *v14; // rax
  boost::context::fiber *v15; // rdx
  boost::context::fiber *ca; // [rsp+8h] [rbp-108h]
  boost::context::fiber other; // [rsp+20h] [rbp-F0h] BYREF
  boost::context::fiber v19; // [rsp+28h] [rbp-E8h] BYREF
  char v20[208]; // [rsp+40h] [rbp-D0h] BYREF

  ca = v2;
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 synthesized:333 64 16 6 fn:338 96 32 18 synthesized_cb:332";
  *(_QWORD *)(v3 + 16) = boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::coroutines2::detail::pull_coroutine<void>::control_block::control_block(
    (boost::coroutines2::detail::pull_coroutine<void>::control_block *const)(v3 + 96),
    (boost::coroutines2::detail::push_coroutine<void>::control_block *)c->ptr_,
    ca);
  boost::coroutines2::detail::pull_coroutine<void>::pull_coroutine(
    (boost::coroutines2::detail::pull_coroutine<void> *const)(v3 + 32),
    (boost::coroutines2::detail::pull_coroutine<void>::control_block *)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ptr = (__int64)c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    ptr = __asan_report_store8();
  *(_QWORD *)(ptr + 8) = v3 + 96;
  v7 = c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::move<boost::context::fiber &>((boost::context::fiber *)v7->uctx.uc_flags);
  boost::context::fiber::resume(&other);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::context::fiber::operator=((boost::context::fiber *const)v8->uctx.uc_flags, &other);
  boost::context::fiber::~fiber(&other);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = c->ptr_;
  v10 = *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx.uc_link >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
    __asan_report_load4(&c->ptr_->uctx.uc_link);
  if ( boost::coroutines2::detail::operator&((boost::coroutines2::detail::state_t)v9->uctx.uc_link, destroy) == none )
  {
    v11 = std::move<boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>((boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *)&c[1]);
    boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::coro_entry_point(
      (boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *const)(v3 + 64),
      v11);
    boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::operator()(
      (boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *const)(v3 + 64),
      (boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >::caller_type *)(v3 + 32));
    boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::~coro_entry_point((boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *const)(v3 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::coroutines2::detail::operator|=((boost::coroutines2::detail::state_t *)&c->ptr_->uctx.uc_link, complete);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::move<boost::context::fiber &>((boost::context::fiber *)v12->uctx.uc_flags);
  boost::context::fiber::resume(&v19);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::context::fiber::operator=((boost::context::fiber *const)v13->uctx.uc_flags, &v19);
  boost::context::fiber::~fiber(&v19);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = c->ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&c->ptr_->uctx >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = std::move<boost::context::fiber &>((boost::context::fiber *)v14->uctx.uc_flags);
  boost::context::fiber::fiber((boost::context::fiber *const)this, v15);
  boost::coroutines2::detail::pull_coroutine<void>::~pull_coroutine((boost::coroutines2::detail::pull_coroutine<void> *const)(v3 + 32));
  boost::coroutines2::detail::pull_coroutine<void>::control_block::~control_block((boost::coroutines2::detail::pull_coroutine<void>::control_block *const)(v3 + 96));
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return (boost::context::fiber)this;
};

// Line 330: range 000000000BFAB7AA-000000000BFAB827
void __cdecl boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::fiber(
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *const this,
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *a2)
{
  boost::coroutines2::detail::push_coroutine<void>::control_block *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->__this = v2;
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::coro_entry_point(
    &this->__fn_,
    &a2->__fn_);
};

// Line 330: range 000000000BFA3C6A-000000000BFA3C88
void __cdecl boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::~fiber(
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *const this)
{
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>::~coro_entry_point(&this->__fn_);
};

// Line 330: range 000000000BFABCEA-000000000BFABD67
void __cdecl boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::fiber(
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *const this,
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *a2)
{
  boost::coroutines2::detail::push_coroutine<void>::control_block *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->__this = v2;
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::coro_entry_point(
    &this->__fn_,
    &a2->__fn_);
};

// Line 330: range 000000000BFA61B8-000000000BFA61D6
void __cdecl boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::~fiber(
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *const this)
{
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>::~coro_entry_point(&this->__fn_);
};

// Line 376: range 000000000BEFC24A-000000000BEFC2B3
void __cdecl boost::coroutines2::detail::push_coroutine<void>::control_block::deallocate(
        boost::coroutines2::detail::push_coroutine<void>::control_block *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state);
  }
  if ( boost::coroutines2::detail::operator&(this->state, unwind) )
    boost::coroutines2::detail::push_coroutine<void>::control_block::destroy(this);
};

// Line 384: range 000000000BEFC2B4-000000000BEFC35D
void __cdecl boost::coroutines2::detail::push_coroutine<void>::control_block::resume(
        boost::coroutines2::detail::push_coroutine<void>::control_block *const this)
{
  struct _Unwind_Exception *v1; // rbx
  boost::context::fiber other; // [rsp+18h] [rbp-18h] BYREF

  std::move<boost::context::fiber &>(&this->c);
  boost::context::fiber::resume(&other);
  boost::context::fiber::operator=(&this->c, &other);
  boost::context::fiber::~fiber(&other);
  if ( std::__exception_ptr::exception_ptr::operator bool(&this->except) )
  {
    std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)&other, &this->except);
    __asan_handle_no_return(&other);
    v1 = (struct _Unwind_Exception *)std::rethrow_exception((std::__exception_ptr::exception_ptr)&other);
    std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&other);
    __asan_handle_no_return(&other);
    _Unwind_Resume(v1);
  }
};
