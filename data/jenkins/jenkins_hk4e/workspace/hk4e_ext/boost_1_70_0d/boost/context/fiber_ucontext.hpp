// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/context/fiber_ucontext.hpp

// Line 64: range 000000000BEDE263-000000000BEDE2A9
void __cdecl __noreturn boost::context::detail::fiber_entry_func<boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>>(
        void *data)
{
  if ( !data )
  {
    __asan_handle_no_return(0LL);
    __assert_fail(
      "nullptr != record",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/fi"
      "ber_ucontext.hpp",
      0x42u,
      "void boost::context::detail::fiber_entry_func(void*) [with Record = boost::context::detail::fiber_capture_record<b"
      "oost::context::fiber, boost::context::basic_fixedsize_stack<boost::context::stack_traits>&, boost::coroutines2::de"
      "tail::push_coroutine<void>::control_block::control_block(boost::context::preallocated, StackAllocator&&, Fn&&) [wi"
      "th StackAllocator = boost::context::basic_fixedsize_stack<boost::context::stack_traits>&; Fn = boost::asio::detail"
      "::coro_entry_point<boost::asio::executor_binder<void (*)(), boost::asio::io_context::strand>, boost::_bi::bind_t<i"
      "nt, boost::_mfi::mf1<int, common::minet::AServerMgr<GateserverSession>, boost::asio::basic_yield_context<boost::as"
      "io::executor_binder<void (*)(), boost::asio::executor> > >, boost::_bi::list2<boost::_bi::value<common::minet::ASe"
      "rverMgr<GateserverSession>*>, boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> >]");
  }
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::run((boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const)data);
};

// Line 64: range 000000000BEDE2B1-000000000BEDE2F7
void __cdecl __noreturn boost::context::detail::fiber_entry_func<boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>>(
        void *data)
{
  if ( !data )
  {
    __asan_handle_no_return(0LL);
    __assert_fail(
      "nullptr != record",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/fi"
      "ber_ucontext.hpp",
      0x42u,
      "void boost::context::detail::fiber_entry_func(void*) [with Record = boost::context::detail::fiber_capture_record<b"
      "oost::context::fiber, boost::context::basic_fixedsize_stack<boost::context::stack_traits>&, boost::coroutines2::de"
      "tail::push_coroutine<void>::control_block::control_block(boost::context::preallocated, StackAllocator&&, Fn&&) [wi"
      "th StackAllocator = boost::context::basic_fixedsize_stack<boost::context::stack_traits>&; Fn = boost::asio::detail"
      "::coro_entry_point<boost::asio::executor_binder<void (*)(), boost::asio::io_context::strand>, boost::_bi::bind_t<i"
      "nt, boost::_mfi::mf1<int, common::minet::AServerMgr<HttpSession>, boost::asio::basic_yield_context<boost::asio::ex"
      "ecutor_binder<void (*)(), boost::asio::executor> > >, boost::_bi::list2<boost::_bi::value<common::minet::AServerMg"
      "r<HttpSession>*>, boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> >]");
  }
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::run((boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const)data);
};

// Line 97: range 000000000BEFACA4-000000000BEFB01E
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::context::detail::fiber_activation_record::fiber_activation_record(
        boost::context::detail::fiber_activation_record *const this,
        boost::context::stack_context sctx_)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  void *v7; // rdx
  __int64 v8; // rsi
  std::size_t size; // [rsp+0h] [rbp-80h]
  void *sp; // [rsp+8h] [rbp-78h]
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  size = sctx_.size;
  sp = sctx_.sp;
  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 sctx_:97";
  *(_QWORD *)(v2 + 16) = boost::context::detail::fiber_activation_record::fiber_activation_record;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v2 + 32) = size;
  *(_QWORD *)(v2 + 40) = sp;
  v6 = (int (**)(...))(&`vtable for'boost::context::detail::fiber_activation_record + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_fiber_activation_record = v6;
  if ( *(char *)(((unsigned __int64)&this->uctx >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->uctx.__fpregs_mem.padding[23] + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 81) & 7) >= *(_BYTE *)((((unsigned __int64)&this->uctx.__fpregs_mem.padding[23] + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    v4 = 936LL;
    __asan_report_store_n(&this->uctx, 936LL);
  }
  memset(&this->uctx, 0, sizeof(this->uctx));
  if ( *(_WORD *)(((unsigned __int64)&this->sctx >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  v7 = *(void **)(v4 - 24);
  this->sctx.size = *(_QWORD *)(v4 - 32);
  this->sctx.sp = v7;
  if ( *(char *)(((unsigned __int64)&this->main_ctx >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->main_ctx, v4);
  this->main_ctx = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->from = 0LL;
  std::function<boost::context::detail::fiber_activation_record * ()(boost::context::detail::fiber_activation_record *&)>::function(&this->ontop);
  if ( *(char *)(((unsigned __int64)&this->terminated >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->terminated, v4);
  this->terminated = 0;
  v8 = ((_BYTE)this - 15) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_unwind >> 3) + 0x7FFF8000) != 0
    && (char)v8 >= *(_BYTE *)(((unsigned __int64)&this->force_unwind >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->force_unwind, v8);
  }
  this->force_unwind = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fake_stack >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->fake_stack = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_bottom >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->stack_bottom = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_size >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->stack_size = 0LL;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 102: range 000000000BEFB020-000000000BEFB073
void __cdecl boost::context::detail::fiber_activation_record::~fiber_activation_record(
        boost::context::detail::fiber_activation_record *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::context::detail::fiber_activation_record + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_fiber_activation_record = v1;
  std::function<boost::context::detail::fiber_activation_record * ()(boost::context::detail::fiber_activation_record *&)>::~function(&this->ontop);
};

// Line 102: range 000000000BEFB074-000000000BEFB09E
void __cdecl boost::context::detail::fiber_activation_record::~fiber_activation_record(
        boost::context::detail::fiber_activation_record *const this)
{
  boost::context::detail::fiber_activation_record::~fiber_activation_record(this);
  operator delete(this, 0x410uLL);
};

// Line 112: range 000000000BEFB0A0-000000000BEFB445
boost::context::detail::fiber_activation_record *__cdecl boost::context::detail::fiber_activation_record::resume(
        boost::context::detail::fiber_activation_record *const this)
{
  unsigned __int64 v1; // rax
  int (**v2)(...); // rdx
  unsigned __int64 v3; // rax
  std::size_t stack_size; // rdx
  std::size_t v5; // rdx
  void *stack_bottom; // rax
  const ucontext_t *p_uctx; // rdx
  ucontext_t *v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  boost::context::detail::fiber_activation_record *v17; // rdi
  unsigned __int64 v18; // rax
  boost::context::detail::fiber_activation_record *thisa; // [rsp+8h] [rbp-28h]
  __int64 __new_val[3]; // [rsp+18h] [rbp-18h] BYREF

  thisa = this;
  v1 = boost::context::detail::fiber_activation_record::current(this);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
    this = (boost::context::detail::fiber_activation_record *const)v1;
    __asan_report_load8();
  }
  v2 = *(int (***)(...))v1;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->from >> 3) + 0x7FFF8000) )
  {
    this = (boost::context::detail::fiber_activation_record *const)&thisa->from;
    __asan_report_store8();
  }
  thisa->from = (boost::context::detail::fiber_activation_record *)v2;
  v3 = boost::context::detail::fiber_activation_record::current(this);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_store8();
  *(_QWORD *)v3 = thisa;
  if ( *(char *)(((unsigned __int64)&thisa->terminated >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->terminated);
  if ( thisa->terminated )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->stack_size >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    stack_size = thisa->stack_size;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->stack_bottom >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __sanitizer_start_switch_fiber(0LL, thisa->stack_bottom, stack_size);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->stack_size >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = thisa->stack_size;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->stack_bottom >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    stack_bottom = thisa->stack_bottom;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->from >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __sanitizer_start_switch_fiber(&thisa->from->fake_stack, stack_bottom, v5);
  }
  p_uctx = &thisa->uctx;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->from >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = &thisa->from->uctx;
  swapcontext(v8, p_uctx);
  v9 = boost::context::detail::fiber_activation_record::current((boost::context::detail::fiber_activation_record *)v8);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
    v8 = (ucontext_t *)v9;
    __asan_report_load8();
  }
  v10 = *(_QWORD *)v9;
  if ( *(_BYTE *)(((unsigned __int64)(v10 + 968) >> 3) + 0x7FFF8000) )
  {
    v8 = (ucontext_t *)(v10 + 968);
    __asan_report_load8();
  }
  v11 = *(_QWORD *)(v10 + 968) + 1032LL;
  v12 = boost::context::detail::fiber_activation_record::current((boost::context::detail::fiber_activation_record *)v8);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
    v8 = (ucontext_t *)v12;
    __asan_report_load8();
  }
  v13 = *(_QWORD *)v12;
  if ( *(_BYTE *)(((unsigned __int64)(v13 + 968) >> 3) + 0x7FFF8000) )
  {
    v8 = (ucontext_t *)(v13 + 968);
    __asan_report_load8();
  }
  v14 = *(_QWORD *)(v13 + 968) + 1024LL;
  v15 = boost::context::detail::fiber_activation_record::current((boost::context::detail::fiber_activation_record *)v8);
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v16 = *(_QWORD *)v15;
  if ( *(_BYTE *)(((unsigned __int64)(v16 + 1016) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v17 = *(boost::context::detail::fiber_activation_record **)(v16 + 1016);
  __sanitizer_finish_switch_fiber(v17, v14, v11);
  __new_val[0] = 0LL;
  v18 = boost::context::detail::fiber_activation_record::current(v17);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return std::exchange<boost::context::detail::fiber_activation_record *,decltype(nullptr)>(
           (boost::context::detail::fiber_activation_record **)(*(_QWORD *)v18 + 968LL),
           __new_val);
};

// Line 202: range 000000000BEFB446-000000000BEFB450
void __cdecl boost::context::detail::fiber_activation_record::deallocate(
        boost::context::detail::fiber_activation_record *const this)
{
  ;
};

// Line 217: range 000000000BEFB452-000000000BEFB4CB
void __cdecl boost::context::detail::forced_unwind::forced_unwind(
        boost::context::detail::forced_unwind *const this,
        boost::context::detail::fiber_activation_record *from_)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->from = from_;
  if ( *(char *)(((unsigned __int64)&this->caught >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->caught, from_);
  this->caught = 0;
};

// Line 222: range 000000000BEFB4CC-000000000BEFB53D
void __cdecl boost::context::detail::forced_unwind::~forced_unwind(boost::context::detail::forced_unwind *const this)
{
  boost::context::detail::forced_unwind *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  if ( *(char *)(((unsigned __int64)&this->caught >> 3) + 0x7FFF8000) < 0 )
  {
    this = (boost::context::detail::forced_unwind *const)((char *)this + 8);
    __asan_report_load1(this);
  }
  if ( !thisa->caught )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "caught",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/fi"
      "ber_ucontext.hpp",
      0xDFu,
      "boost::context::detail::forced_unwind::~forced_unwind()");
  }
};

// Line 229: range 000000000BFAA2B2-000000000BFAA311
void __cdecl boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::~fiber_capture_record(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_fiber_activation_record = v1;
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::~fiber(&this->fn_);
  boost::context::detail::fiber_activation_record::~fiber_activation_record(this);
};

// Line 229: range 000000000BFAA312-000000000BFAA33C
void __cdecl boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::~fiber_capture_record(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const this)
{
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::~fiber_capture_record(this);
  operator delete(this, 0x430uLL);
};

// Line 229: range 000000000BFAAA9C-000000000BFAAAFB
void __cdecl boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::~fiber_capture_record(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_fiber_activation_record = v1;
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::~fiber(&this->fn_);
  boost::context::detail::fiber_activation_record::~fiber_activation_record(this);
};

// Line 229: range 000000000BFAAAFC-000000000BFAAB26
void __cdecl boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::~fiber_capture_record(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const this)
{
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::~fiber_capture_record(this);
  operator delete(this, 0x430uLL);
};

// Line 234: range 000000000BFB1148-000000000BFB1317
void __cdecl boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::destroy(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *p)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::remove_reference<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&>::type *v4; // rax
  void *sp; // rdx
  int (**vptr_fiber_activation_record)(...); // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 10 salloc:235 64 16 8 sctx:236";
  *(_QWORD *)(v1 + 16) = boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::destroy;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  v4 = std::move<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(&p->salloc_);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(std::remove_reference<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&>::type *)(v1 + 32) = (std::remove_reference<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&>::type)v4->size_;
  if ( *(_WORD *)(((unsigned __int64)&p->sctx >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  sp = p->sctx.sp;
  *(_QWORD *)(v1 + 64) = p->sctx.size;
  *(_QWORD *)(v1 + 72) = sp;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  vptr_fiber_activation_record = p->_vptr_fiber_activation_record;
  if ( *(_BYTE *)(((unsigned __int64)p->_vptr_fiber_activation_record >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  (*vptr_fiber_activation_record)(p);
  boost::context::basic_fixedsize_stack<boost::context::stack_traits>::deallocate(
    (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *const)(v1 + 32),
    (boost::context::stack_context *)(v1 + 64));
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

// Line 234: range 000000000BFB0F78-000000000BFB1147
void __cdecl boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::destroy(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *p)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::remove_reference<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&>::type *v4; // rax
  void *sp; // rdx
  int (**vptr_fiber_activation_record)(...); // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 10 salloc:235 64 16 8 sctx:236";
  *(_QWORD *)(v1 + 16) = boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::destroy;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  v4 = std::move<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(&p->salloc_);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(std::remove_reference<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&>::type *)(v1 + 32) = (std::remove_reference<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&>::type)v4->size_;
  if ( *(_WORD *)(((unsigned __int64)&p->sctx >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  sp = p->sctx.sp;
  *(_QWORD *)(v1 + 64) = p->sctx.size;
  *(_QWORD *)(v1 + 72) = sp;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  vptr_fiber_activation_record = p->_vptr_fiber_activation_record;
  if ( *(_BYTE *)(((unsigned __int64)p->_vptr_fiber_activation_record >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  (*vptr_fiber_activation_record)(p);
  boost::context::basic_fixedsize_stack<boost::context::stack_traits>::deallocate(
    (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *const)(v1 + 32),
    (boost::context::stack_context *)(v1 + 64));
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

// Line 244: range 000000000BFAB828-000000000BFAB9D9
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::fiber_capture_record(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const this,
        boost::context::stack_context sctx,
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *fn)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::size_t v7; // rsi
  int (**v8)(...); // rdx
  unsigned __int64 v9; // rax
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *v10; // rax
  void *sp; // [rsp+18h] [rbp-78h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  sp = sctx.sp;
  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 8 sctx:244";
  *(_QWORD *)(v4 + 16) = boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::fiber_capture_record;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v7;
  *(_QWORD *)(v4 + 40) = sp;
  boost::context::detail::fiber_activation_record::fiber_activation_record(
    this,
    *(boost::context::stack_context *)(v4 + 32));
  v8 = (int (**)(...))(&`vtable for'boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_fiber_activation_record = v8;
  v9 = (unsigned __int64)std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(salloc);
  if ( *(_BYTE *)(((unsigned __int64)&this->salloc_ >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8();
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->salloc_.size_ = *(_QWORD *)v9;
  v10 = std::forward<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}>(fn);
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::fiber(
    &this->fn_,
    v10);
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 244: range 000000000BFABD68-000000000BFABF19
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::fiber_capture_record(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const this,
        boost::context::stack_context sctx,
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *fn)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::size_t v7; // rsi
  int (**v8)(...); // rdx
  unsigned __int64 v9; // rax
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *v10; // rax
  void *sp; // [rsp+18h] [rbp-78h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  sp = sctx.sp;
  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 8 sctx:244";
  *(_QWORD *)(v4 + 16) = boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::fiber_capture_record;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = v7;
  *(_QWORD *)(v4 + 40) = sp;
  boost::context::detail::fiber_activation_record::fiber_activation_record(
    this,
    *(boost::context::stack_context *)(v4 + 32));
  v8 = (int (**)(...))(&`vtable for'boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_fiber_activation_record = v8;
  v9 = (unsigned __int64)std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(salloc);
  if ( *(_BYTE *)(((unsigned __int64)&this->salloc_ >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8();
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->salloc_.size_ = *(_QWORD *)v9;
  v10 = std::forward<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}>(fn);
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}::fiber(
    &this->fn_,
    v10);
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 250: range 000000000BFAF314-000000000BFAF3EC
void __cdecl boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::deallocate(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const this)
{
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  if ( *(char *)(((unsigned __int64)&this->main_ctx >> 3) + 0x7FFF8000) < 0 )
  {
    this = (boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const)((char *)this + 960);
    __asan_report_load1(this);
  }
  if ( !thisa->main_ctx )
  {
    if ( thisa->main_ctx )
      goto LABEL_8;
    if ( *(char *)(((unsigned __int64)&thisa->terminated >> 3) + 0x7FFF8000) < 0 )
    {
      this = (boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const)&thisa->terminated;
      __asan_report_load1(&thisa->terminated);
    }
    if ( !thisa->terminated )
    {
LABEL_8:
      __asan_handle_no_return(this);
      __assert_fail(
        "main_ctx || ( ! main_ctx && terminated)",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/"
        "fiber_ucontext.hpp",
        0xFBu,
        "void boost::context::detail::fiber_capture_record<Ctx, StackAlloc, Fn>::deallocate() [with Ctx = boost::context:"
        ":fiber; StackAlloc = boost::context::basic_fixedsize_stack<boost::context::stack_traits>&; Fn = boost::coroutine"
        "s2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated, StackAllocator&&, F"
        "n&&) [with StackAllocator = boost::context::basic_fixedsize_stack<boost::context::stack_traits>&; Fn = boost::as"
        "io::detail::coro_entry_point<boost::asio::executor_binder<void (*)(), boost::asio::io_context::strand>, boost::_"
        "bi::bind_t<int, boost::_mfi::mf1<int, common::minet::AServerMgr<GateserverSession>, boost::asio::basic_yield_con"
        "text<boost::asio::executor_binder<void (*)(), boost::asio::executor> > >, boost::_bi::list2<boost::_bi::value<co"
        "mmon::minet::AServerMgr<GateserverSession>*>, boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)>]");
    }
  }
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::destroy(thisa);
};

// Line 250: range 000000000BFAF23A-000000000BFAF312
void __cdecl boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::deallocate(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const this)
{
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  if ( *(char *)(((unsigned __int64)&this->main_ctx >> 3) + 0x7FFF8000) < 0 )
  {
    this = (boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const)((char *)this + 960);
    __asan_report_load1(this);
  }
  if ( !thisa->main_ctx )
  {
    if ( thisa->main_ctx )
      goto LABEL_8;
    if ( *(char *)(((unsigned __int64)&thisa->terminated >> 3) + 0x7FFF8000) < 0 )
    {
      this = (boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const)&thisa->terminated;
      __asan_report_load1(&thisa->terminated);
    }
    if ( !thisa->terminated )
    {
LABEL_8:
      __asan_handle_no_return(this);
      __assert_fail(
        "main_ctx || ( ! main_ctx && terminated)",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/"
        "fiber_ucontext.hpp",
        0xFBu,
        "void boost::context::detail::fiber_capture_record<Ctx, StackAlloc, Fn>::deallocate() [with Ctx = boost::context:"
        ":fiber; StackAlloc = boost::context::basic_fixedsize_stack<boost::context::stack_traits>&; Fn = boost::coroutine"
        "s2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated, StackAllocator&&, F"
        "n&&) [with StackAllocator = boost::context::basic_fixedsize_stack<boost::context::stack_traits>&; Fn = boost::as"
        "io::detail::coro_entry_point<boost::asio::executor_binder<void (*)(), boost::asio::io_context::strand>, boost::_"
        "bi::bind_t<int, boost::_mfi::mf1<int, common::minet::AServerMgr<HttpSession>, boost::asio::basic_yield_context<b"
        "oost::asio::executor_binder<void (*)(), boost::asio::executor> > >, boost::_bi::list2<boost::_bi::value<common::"
        "minet::AServerMgr<HttpSession>*>, boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)>]");
    }
  }
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::destroy(thisa);
};

// Line 255: range 000000000BFAC72C-000000000BFACAA0
void __cdecl __noreturn boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::run(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  std::size_t *p_stack_size; // rdx
  void **p_stack_bottom; // rcx
  boost::context::fiber *v6; // rdx
  __int64 v7; // rsi
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> __fn; // [rsp+18h] [rbp-68h] BYREF
  char v9; // [rsp+30h] [rbp-50h] BYREF

  v1 = (unsigned __int64)&v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 c:261";
  *(_QWORD *)(v1 + 16) = boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::run;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_stack_size = &this->from->stack_size;
  p_stack_bottom = &this->from->stack_bottom;
  if ( *(_BYTE *)(((unsigned __int64)&this->fake_stack >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __sanitizer_finish_switch_fiber(this->fake_stack, p_stack_bottom, p_stack_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::context::fiber::fiber((boost::context::fiber *const)(v1 + 32), this->from);
  v6 = std::move<boost::context::fiber &>((boost::context::fiber *)(v1 + 32));
  std::invoke<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1} &,boost::context::fiber &&>(
    &__fn,
    (boost::context::fiber *)&this->fn_,
    v6);
  boost::context::fiber::operator=((boost::context::fiber *const)(v1 + 32), (boost::context::fiber *)&__fn);
  boost::context::fiber::~fiber((boost::context::fiber *const)&__fn);
  if ( *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->from = 0LL;
  std::function<boost::context::detail::fiber_activation_record * ()(boost::context::detail::fiber_activation_record *&)>::operator=(
    &this->ontop,
    0LL);
  if ( *(char *)(((unsigned __int64)&this->terminated >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->terminated, 0LL);
  this->terminated = 1;
  v7 = ((_BYTE)this - 15) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_unwind >> 3) + 0x7FFF8000) != 0
    && (char)v7 >= *(_BYTE *)(((unsigned __int64)&this->force_unwind >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->force_unwind, v7);
  }
  this->force_unwind = 0;
  std::move<boost::context::fiber &>((boost::context::fiber *)(v1 + 32));
  boost::context::fiber::resume((boost::context::fiber *const)&__fn.__fn_);
  boost::context::fiber::~fiber((boost::context::fiber *const)&__fn.__fn_);
  __asan_handle_no_return(&__fn.__fn_);
  __assert_fail(
    "(false)&&(\"fiber already terminated\")",
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/fiber_ucontext.hpp",
    0x119u,
    "void boost::context::detail::fiber_capture_record<Ctx, StackAlloc, Fn>::run() [with Ctx = boost::context::fiber; Sta"
    "ckAlloc = boost::context::basic_fixedsize_stack<boost::context::stack_traits>&; Fn = boost::coroutines2::detail::pus"
    "h_coroutine<void>::control_block::control_block(boost::context::preallocated, StackAllocator&&, Fn&&) [with StackAll"
    "ocator = boost::context::basic_fixedsize_stack<boost::context::stack_traits>&; Fn = boost::asio::detail::coro_entry_"
    "point<boost::asio::executor_binder<void (*)(), boost::asio::io_context::strand>, boost::_bi::bind_t<int, boost::_mfi"
    "::mf1<int, common::minet::AServerMgr<GateserverSession>, boost::asio::basic_yield_context<boost::asio::executor_bind"
    "er<void (*)(), boost::asio::executor> > >, boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverS"
    "ession>*>, boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)>]");
};

// Line 255: range 000000000BFACDFC-000000000BFAD170
void __cdecl __noreturn boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::run(
        boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  std::size_t *p_stack_size; // rdx
  void **p_stack_bottom; // rcx
  boost::context::fiber *v6; // rdx
  __int64 v7; // rsi
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> __fn; // [rsp+18h] [rbp-68h] BYREF
  char v9; // [rsp+30h] [rbp-50h] BYREF

  v1 = (unsigned __int64)&v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 c:261";
  *(_QWORD *)(v1 + 16) = boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::run;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_stack_size = &this->from->stack_size;
  p_stack_bottom = &this->from->stack_bottom;
  if ( *(_BYTE *)(((unsigned __int64)&this->fake_stack >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __sanitizer_finish_switch_fiber(this->fake_stack, p_stack_bottom, p_stack_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::context::fiber::fiber((boost::context::fiber *const)(v1 + 32), this->from);
  v6 = std::move<boost::context::fiber &>((boost::context::fiber *)(v1 + 32));
  std::invoke<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1} &,boost::context::fiber &&>(
    &__fn,
    (boost::context::fiber *)&this->fn_,
    v6);
  boost::context::fiber::operator=((boost::context::fiber *const)(v1 + 32), (boost::context::fiber *)&__fn);
  boost::context::fiber::~fiber((boost::context::fiber *const)&__fn);
  if ( *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->from = 0LL;
  std::function<boost::context::detail::fiber_activation_record * ()(boost::context::detail::fiber_activation_record *&)>::operator=(
    &this->ontop,
    0LL);
  if ( *(char *)(((unsigned __int64)&this->terminated >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->terminated, 0LL);
  this->terminated = 1;
  v7 = ((_BYTE)this - 15) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_unwind >> 3) + 0x7FFF8000) != 0
    && (char)v7 >= *(_BYTE *)(((unsigned __int64)&this->force_unwind >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->force_unwind, v7);
  }
  this->force_unwind = 0;
  std::move<boost::context::fiber &>((boost::context::fiber *)(v1 + 32));
  boost::context::fiber::resume((boost::context::fiber *const)&__fn.__fn_);
  boost::context::fiber::~fiber((boost::context::fiber *const)&__fn.__fn_);
  __asan_handle_no_return(&__fn.__fn_);
  __assert_fail(
    "(false)&&(\"fiber already terminated\")",
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/fiber_ucontext.hpp",
    0x119u,
    "void boost::context::detail::fiber_capture_record<Ctx, StackAlloc, Fn>::run() [with Ctx = boost::context::fiber; Sta"
    "ckAlloc = boost::context::basic_fixedsize_stack<boost::context::stack_traits>&; Fn = boost::coroutines2::detail::pus"
    "h_coroutine<void>::control_block::control_block(boost::context::preallocated, StackAllocator&&, Fn&&) [with StackAll"
    "ocator = boost::context::basic_fixedsize_stack<boost::context::stack_traits>&; Fn = boost::asio::detail::coro_entry_"
    "point<boost::asio::executor_binder<void (*)(), boost::asio::io_context::strand>, boost::_bi::bind_t<int, boost::_mfi"
    "::mf1<int, common::minet::AServerMgr<HttpSession>, boost::asio::basic_yield_context<boost::asio::executor_binder<voi"
    "d (*)(), boost::asio::executor> > >, boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>, b"
    "oost::arg<1> > > >&]::<lambda(boost::context::fiber&&)>]");
};

// Line 322: range 000000000BEDDCAB-000000000BEDE262
// local variable allocation has failed, the output may be wrong!
boost::context::detail::fiber_activation_record *__fastcall boost::context::detail::create_fiber2<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>(
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *fn,
        boost::context::preallocated palloc)
{
  __int64 v3; // rax
  __int64 v4; // rax
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v5; // r12
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *v6; // r13
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *v7; // rbx
  char *v8; // rcx
  void (__fastcall **vptr_fiber_activation_record)(boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *); // rax
  std::system_error *exception; // rbx
  const std::_V2::error_category *v11; // r12
  int *v12; // rax
  int *v13; // rdx
  __int64 M_value; // rsi OVERLAPPED
  const std::_V2::error_category *M_cat; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *ss_sp; // rdx
  std::size_t ss_size; // rdx
  boost::context::detail::fiber_activation_record *result; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-E8h]
  unsigned __int64 v22; // [rsp+10h] [rbp-E0h]
  char *stack_bottom; // [rsp+40h] [rbp-B0h]
  void *storage; // [rsp+48h] [rbp-A8h]
  boost::context::stack_context sctx; // [rsp+50h] [rbp-A0h]
  std::error_code __ec; // [rsp+60h] [rbp-90h] BYREF
  char v27[128]; // [rsp+70h] [rbp-80h] BYREF

  v22 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v22 = v3;
  }
  *(_QWORD *)v22 = 1102416563LL;
  *(_QWORD *)(v22 + 8) = "1 32 32 10 palloc:322";
  *(_QWORD *)(v22 + 16) = boost::context::detail::create_fiber2<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>;
  v21 = v22 >> 3;
  *(_DWORD *)(v21 + 2147450880) = -235802127;
  *(_DWORD *)(v21 + 2147450888) = -202116109;
  *(boost::context::preallocated *)(v22 + 32) = palloc;
  if ( *(_BYTE *)(((v22 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v22 + 32);
  v4 = *(_QWORD *)(v22 + 32) - 1072LL;
  LOBYTE(v4) = 0;
  storage = (void *)v4;
  if ( *(_WORD *)(((v22 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v22 + 48);
  sctx = *(boost::context::stack_context *)(v22 + 48);
  v5 = std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(salloc);
  v6 = std::forward<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}>(fn);
  v7 = (boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *)operator new(0x430uLL, storage);
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::fiber_capture_record(
    v7,
    sctx,
    v5,
    v6);
  if ( *(_BYTE *)(((v22 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v22 + 56);
  v8 = *(char **)(v22 + 56);
  if ( *(_BYTE *)(((v22 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v22 + 48);
  stack_bottom = &v8[-*(_QWORD *)(v22 + 48)];
  if ( getcontext(&v7->uctx) )
  {
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    vptr_fiber_activation_record = (void (__fastcall **)(boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *))v7->_vptr_fiber_activation_record;
    if ( *(_BYTE *)(((unsigned __int64)v7->_vptr_fiber_activation_record >> 3) + 0x7FFF8000) )
      vptr_fiber_activation_record = (void (__fastcall **)(boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *))__asan_report_load8(v7->_vptr_fiber_activation_record);
    (*vptr_fiber_activation_record)(v7);
    boost::context::basic_fixedsize_stack<boost::context::stack_traits>::deallocate(
      salloc,
      (boost::context::stack_context *)(v22 + 48));
    exception = (std::system_error *)__cxa_allocate_exception(0x20uLL);
    v11 = (const std::_V2::error_category *)std::_V2::system_category((std::_V2 *)0x20);
    v12 = __errno_location();
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    std::error_code::error_code(&__ec, *v13, v11);
    M_value = (unsigned int)__ec._M_value;
    M_cat = __ec._M_cat;
    std::system_error::system_error(exception, *(std::error_code *)&M_value, "getcontext() failed");
    __asan_handle_no_return(exception, M_value, v16);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::system_error,
      (void (__fastcall *)(void *))&std::system_error::~system_error);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v7->uctx.uc_stack >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v7->uctx.uc_stack);
  v7->uctx.uc_stack.ss_sp = stack_bottom;
  v17 = (_BYTE *)storage - stack_bottom - 64;
  if ( *(_BYTE *)(((unsigned __int64)&v7->uctx.uc_stack.ss_size >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v7->uctx.uc_stack.ss_size);
  v7->uctx.uc_stack.ss_size = v17;
  if ( *(_BYTE *)(((unsigned __int64)&v7->uctx.uc_link >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v7->uctx.uc_link);
  v7->uctx.uc_link = 0LL;
  makecontext(
    &v7->uctx,
    (void (*)(void))boost::context::detail::fiber_entry_func<boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>>,
    1,
    v7);
  if ( *(_BYTE *)(((unsigned __int64)&v7->uctx.uc_stack >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v7->uctx.uc_stack);
  ss_sp = v7->uctx.uc_stack.ss_sp;
  if ( *(_BYTE *)(((unsigned __int64)&v7->stack_bottom >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v7->stack_bottom);
  v7->stack_bottom = ss_sp;
  if ( *(_BYTE *)(((unsigned __int64)&v7->uctx.uc_stack.ss_size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v7->uctx.uc_stack.ss_size);
  ss_size = v7->uctx.uc_stack.ss_size;
  if ( *(_BYTE *)(((unsigned __int64)&v7->stack_size >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v7->stack_size);
  v7->stack_size = ss_size;
  result = v7;
  if ( v27 == (char *)v22 )
  {
    *(_DWORD *)((v22 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v22 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v22 = 1172321806LL;
    *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v22 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 322: range 000000000BEDD6F3-000000000BEDDCAA
boost::context::detail::fiber_activation_record *__fastcall boost::context::detail::create_fiber2<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>(
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *fn,
        boost::context::preallocated palloc)
{
  __int64 v3; // rax
  __int64 v4; // rax
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v5; // r12
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *v6; // r13
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *v7; // rbx
  char *v8; // rcx
  void (__fastcall **vptr_fiber_activation_record)(boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *); // rax
  std::system_error *exception; // rbx
  const std::_V2::error_category *v11; // r12
  int *v12; // rax
  int *v13; // rdx
  __int64 v14; // rcx
  void *ss_sp; // rdx
  std::size_t ss_size; // rdx
  boost::context::detail::fiber_activation_record *result; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-E8h]
  unsigned __int64 v19; // [rsp+10h] [rbp-E0h]
  char *stack_bottom; // [rsp+40h] [rbp-B0h]
  void *storage; // [rsp+48h] [rbp-A8h]
  boost::context::stack_context sctx; // [rsp+50h] [rbp-A0h]
  std::error_code __ec; // [rsp+60h] [rbp-90h] BYREF
  char v24[128]; // [rsp+70h] [rbp-80h] BYREF
  std::error_code v25; // 0:esi.4,8:rdx.8

  v19 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v19 = v3;
  }
  *(_QWORD *)v19 = 1102416563LL;
  *(_QWORD *)(v19 + 8) = "1 32 32 10 palloc:322";
  *(_QWORD *)(v19 + 16) = boost::context::detail::create_fiber2<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>;
  v18 = v19 >> 3;
  *(_DWORD *)(v18 + 2147450880) = -235802127;
  *(_DWORD *)(v18 + 2147450888) = -202116109;
  *(boost::context::preallocated *)(v19 + 32) = palloc;
  if ( *(_BYTE *)(((v19 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *(_QWORD *)(v19 + 32) - 1072LL;
  LOBYTE(v4) = 0;
  storage = (void *)v4;
  if ( *(_WORD *)(((v19 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  sctx = *(boost::context::stack_context *)(v19 + 48);
  v5 = std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(salloc);
  v6 = std::forward<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}>(fn);
  v7 = (boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *)operator new(0x430uLL, storage);
  boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>::fiber_capture_record(
    v7,
    sctx,
    v5,
    v6);
  if ( *(_BYTE *)(((v19 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = *(char **)(v19 + 56);
  if ( *(_BYTE *)(((v19 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  stack_bottom = &v8[-*(_QWORD *)(v19 + 48)];
  if ( getcontext(&v7->uctx) )
  {
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    vptr_fiber_activation_record = (void (__fastcall **)(boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> > *))v7->_vptr_fiber_activation_record;
    if ( *(_BYTE *)(((unsigned __int64)v7->_vptr_fiber_activation_record >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*vptr_fiber_activation_record)(v7);
    boost::context::basic_fixedsize_stack<boost::context::stack_traits>::deallocate(
      salloc,
      (boost::context::stack_context *)(v19 + 48));
    exception = (std::system_error *)__cxa_allocate_exception(0x20uLL);
    v11 = (const std::_V2::error_category *)std::_V2::system_category((std::_V2 *)0x20);
    v12 = __errno_location();
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    std::error_code::error_code(&__ec, *v13, v11);
    v25._M_value = __ec._M_value;
    v25._M_cat = __ec._M_cat;
    std::system_error::system_error(exception, v25, "getcontext() failed");
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::system_error,
      (void (__fastcall *)(void *))&std::system_error::~system_error);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v7->uctx.uc_stack >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v7->uctx.uc_stack.ss_sp = stack_bottom;
  v14 = (_BYTE *)storage - stack_bottom - 64;
  if ( *(_BYTE *)(((unsigned __int64)&v7->uctx.uc_stack.ss_size >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v7->uctx.uc_stack.ss_size = v14;
  if ( *(_BYTE *)(((unsigned __int64)&v7->uctx.uc_link >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v7->uctx.uc_link = 0LL;
  makecontext(
    &v7->uctx,
    (void (*)(void))boost::context::detail::fiber_entry_func<boost::context::detail::fiber_capture_record<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>>,
    1,
    v7);
  if ( *(_BYTE *)(((unsigned __int64)&v7->uctx.uc_stack >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ss_sp = v7->uctx.uc_stack.ss_sp;
  if ( *(_BYTE *)(((unsigned __int64)&v7->stack_bottom >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v7->stack_bottom = ss_sp;
  if ( *(_BYTE *)(((unsigned __int64)&v7->uctx.uc_stack.ss_size >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ss_size = v7->uctx.uc_stack.ss_size;
  if ( *(_BYTE *)(((unsigned __int64)&v7->stack_size >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v7->stack_size = ss_size;
  result = v7;
  if ( v24 == (char *)v19 )
  {
    *(_DWORD *)((v19 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v19 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v19 = 1172321806LL;
    *(_QWORD *)((v19 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v19 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 381: range 000000000BEFB53E-000000000BEFB57C
void __cdecl boost::context::fiber::fiber(
        boost::context::fiber *const this,
        boost::context::detail::fiber_activation_record *ptr)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ptr_ = ptr;
};

// Line 407: range 000000000BFA85FA-000000000BFA876F
void __fastcall boost::context::fiber::fiber<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>(
        boost::context::fiber *const this,
        std::remove_reference<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&>::type *a2,
        std::remove_reference<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> >::type *salloc,
        boost::context::preallocated palloc)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *v8; // r14
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v9; // rax
  boost::context::detail::fiber_activation_record *v10; // rax
  char v12[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 32 10 palloc:407";
  *(_QWORD *)(v5 + 16) = boost::context::fiber::fiber<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450888) = -202116109;
  *(boost::context::preallocated *)(v5 + 32) = palloc;
  v8 = std::forward<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}>(salloc);
  v9 = std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(a2);
  v10 = boost::context::detail::create_fiber2<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>(
          v9,
          v8,
          *(boost::context::preallocated *)(v5 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v10 = (boost::context::detail::fiber_activation_record *)__asan_report_store8();
  this->ptr_ = v10;
  if ( v12 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 407: range 000000000BFA92A2-000000000BFA9417
void __fastcall boost::context::fiber::fiber<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>(
        boost::context::fiber *const this,
        std::remove_reference<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&>::type *a2,
        std::remove_reference<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block(boost::context::preallocated,StackAllocator&&,Fn&&) [with StackAllocator _ boost::context::basic_fixedsize_stack<boost::context::stack_traits>&_ Fn _ boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&]::<lambda(boost::context::fiber&&)> >::type *salloc,
        boost::context::preallocated palloc)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits>&,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > >&>::<lambda(boost::context::fiber&&)> *v8; // r14
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v9; // rax
  boost::context::detail::fiber_activation_record *v10; // rax
  char v12[144]; // [rsp+20h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 32 10 palloc:407";
  *(_QWORD *)(v5 + 16) = boost::context::fiber::fiber<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450888) = -202116109;
  *(boost::context::preallocated *)(v5 + 32) = palloc;
  v8 = std::forward<boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber &&)#1}>(salloc);
  v9 = std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(a2);
  v10 = boost::context::detail::create_fiber2<boost::context::fiber,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(boost::context::preallocated,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &)::{lambda(boost::context::fiber&&)#1}>(
          v9,
          v8,
          *(boost::context::preallocated *)(v5 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v10 = (boost::context::detail::fiber_activation_record *)__asan_report_store8();
  this->ptr_ = v10;
  if ( v12 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 412: range 000000000BEFB57E-000000000BEFB7C4
void __cdecl boost::context::fiber::~fiber(boost::context::fiber *const this)
{
  __int64 v1; // rsi
  boost::context::detail::fiber_activation_record *ptr; // rax
  boost::context::detail::fiber_activation_record *v3; // rax
  boost::context::detail::fiber_activation_record *v4; // rdx
  char v5; // cl
  void *p_terminated; // rdi
  boost::context::detail::fiber_activation_record *v7; // rax
  boost::context::detail::fiber_activation_record *v8; // rdx
  boost::context::detail::fiber_activation_record *v9; // rax
  unsigned __int64 v10; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->ptr_ )
  {
    ptr = this->ptr_;
    if ( *(char *)(((unsigned __int64)&this->ptr_->main_ctx >> 3) + 0x7FFF8000) < 0 )
      ptr = (boost::context::detail::fiber_activation_record *)__asan_report_load1(&this->ptr_->main_ctx);
    if ( !ptr->main_ctx )
    {
      v3 = this->ptr_;
      if ( *(char *)(((unsigned __int64)&this->ptr_->terminated >> 3) + 0x7FFF8000) < 0 )
        v3 = (boost::context::detail::fiber_activation_record *)__asan_report_load1(&this->ptr_->terminated);
      if ( !v3->terminated )
      {
        v4 = this->ptr_;
        v5 = *(_BYTE *)(((unsigned __int64)&this->ptr_->force_unwind >> 3) + 0x7FFF8000);
        if ( v5 != 0 && ((LOBYTE(this->ptr_) - 15) & 7) >= v5 )
        {
          LOBYTE(v1) = v5 != 0;
          __asan_report_store1(&this->ptr_->force_unwind, v1);
        }
        v4->force_unwind = 1;
        p_terminated = this->ptr_;
        boost::context::detail::fiber_activation_record::resume(this->ptr_);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          p_terminated = this;
          __asan_report_load8();
        }
        v7 = this->ptr_;
        if ( *(char *)(((unsigned __int64)&this->ptr_->terminated >> 3) + 0x7FFF8000) < 0 )
        {
          p_terminated = &this->ptr_->terminated;
          v7 = (boost::context::detail::fiber_activation_record *)__asan_report_load1(p_terminated);
        }
        if ( !v7->terminated )
        {
          __asan_handle_no_return(p_terminated);
          __assert_fail(
            "ptr_->terminated",
            "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/cont"
            "ext/fiber_ucontext.hpp",
            0x1A1u,
            "boost::context::fiber::~fiber()");
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = this->ptr_;
      v9 = this->ptr_;
      if ( *(_BYTE *)(((unsigned __int64)this->ptr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = (unsigned __int64)(v9->_vptr_fiber_activation_record + 2);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      (*(void (__fastcall **)(boost::context::detail::fiber_activation_record *))v10)(v8);
    }
  }
};

// Line 426: range 000000000BEFB7C6-000000000BEFB817
void __cdecl boost::context::fiber::fiber(boost::context::fiber *const this, boost::context::fiber *other)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ptr_ = 0LL;
  boost::context::fiber::swap(this, other);
};

// Line 430: range 000000000BEFB818-000000000BEFB923
boost::context::fiber *__cdecl boost::context::fiber::operator=(
        boost::context::fiber *const this,
        boost::context::fiber *other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::context::fiber *v5; // rax
  boost::context::fiber *result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 tmp:432";
  *(_QWORD *)(v2 + 16) = boost::context::fiber::operator=;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( this != other )
  {
    v5 = std::move<boost::context::fiber &>(other);
    boost::context::fiber::fiber((boost::context::fiber *const)(v2 + 32), v5);
    boost::context::fiber::swap(this, (boost::context::fiber *)(v2 + 32));
    boost::context::fiber::~fiber((boost::context::fiber *const)(v2 + 32));
  }
  result = this;
  if ( v7 == (char *)v2 )
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

// Line 438: range 000000000BEFB924-000000000BEFBBE1
boost::context::fiber __cdecl boost::context::fiber::resume(boost::context::fiber *const this)
{
  boost::context::fiber *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::context::detail::fiber_activation_record *v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  boost::context::detail::fiber_activation_record *v9; // rdi
  boost::context::detail::forced_unwind *exception; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  std::function<boost::context::detail::fiber_activation_record*(boost::context::detail::fiber_activation_record*&)> *v13; // rdi
  unsigned __int64 v14; // rax
  boost::context::fiber *v16; // [rsp+8h] [rbp-78h]
  __int64 __new_val; // [rsp+18h] [rbp-68h] BYREF
  char v18[96]; // [rsp+20h] [rbp-60h] BYREF

  v16 = this;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (boost::context::fiber *const)64;
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 ptr:443";
  *(_QWORD *)(v2 + 16) = boost::context::fiber::resume;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    this = v1;
    __asan_report_load8();
  }
  if ( !v1->ptr_ )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "nullptr != ptr_",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/fi"
      "ber_ucontext.hpp",
      0x1B7u,
      "boost::context::fiber boost::context::fiber::resume() &&");
  }
  __new_val = 0LL;
  v5 = std::exchange<boost::context::detail::fiber_activation_record *,decltype(nullptr)>(&v1->ptr_, &__new_val);
  *(_QWORD *)(v2 + 32) = boost::context::detail::fiber_activation_record::resume(v5);
  v6 = boost::context::detail::fiber_activation_record::current(v5);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)v6 + 1009LL;
  v9 = (boost::context::detail::fiber_activation_record *)(v8 & 7);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)v9 >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v9 = (boost::context::detail::fiber_activation_record *)v8;
    __asan_report_load1(v8);
  }
  if ( *(_BYTE *)(v7 + 1009) )
  {
    exception = (boost::context::detail::forced_unwind *)__cxa_allocate_exception(0x10uLL);
    boost::context::detail::forced_unwind::forced_unwind(
      exception,
      *(boost::context::detail::fiber_activation_record **)(v2 + 32));
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'boost::context::detail::forced_unwind,
      (void (__fastcall *)(void *))boost::context::detail::forced_unwind::~forced_unwind);
  }
  v11 = boost::context::detail::fiber_activation_record::current(v9);
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( std::operator!=<boost::context::detail::fiber_activation_record *,boost::context::detail::fiber_activation_record *&>(
         0LL,
         (const std::function<boost::context::detail::fiber_activation_record*(boost::context::detail::fiber_activation_record*&)> *)(*(_QWORD *)v11 + 976LL)) )
  {
    v12 = boost::context::detail::fiber_activation_record::current(0LL);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (std::function<boost::context::detail::fiber_activation_record*(boost::context::detail::fiber_activation_record*&)> *)(*(_QWORD *)v12 + 976LL);
    *(_QWORD *)(v2 + 32) = std::function<boost::context::detail::fiber_activation_record * ()(boost::context::detail::fiber_activation_record *&)>::operator()(
                             v13,
                             (boost::context::detail::fiber_activation_record **)(v2 + 32));
    v14 = boost::context::detail::fiber_activation_record::current((boost::context::detail::fiber_activation_record *)v13);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::function<boost::context::detail::fiber_activation_record * ()(boost::context::detail::fiber_activation_record *&)>::operator=(
      (std::function<boost::context::detail::fiber_activation_record*(boost::context::detail::fiber_activation_record*&)> *const)(*(_QWORD *)v14 + 976LL),
      0LL);
  }
  boost::context::fiber::fiber(v16, *(boost::context::detail::fiber_activation_record **)(v2 + 32));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (boost::context::fiber)v16;
};

// Line 495: range 000000000BEFBBE2-000000000BEFBC07
void __cdecl boost::context::fiber::swap(boost::context::fiber *const this, boost::context::fiber *other)
{
  std::swap<boost::context::detail::fiber_activation_record *>(&this->ptr_, &other->ptr_);
};
