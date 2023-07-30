// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/coroutine2/detail/create_control_block.ipp

// Line 31: range 000000000BF9DC00-000000000BF9DE62
boost::coroutines2::detail::push_coroutine<void>::control_block *__cdecl boost::coroutines2::detail::create_control_block<boost::coroutines2::detail::push_coroutine<void>::control_block,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *fn)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v5; // r15
  boost::coroutines2::detail::push_coroutine<void>::control_block *v6; // rbx
  boost::coroutines2::detail::push_coroutine<void>::control_block *result; // rax
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > > *v8; // [rsp+8h] [rbp-108h]
  boost::context::preallocated palloc; // [rsp+40h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 5 sp:41 64 8 8 space:43 96 16 7 sctx:32";
  *(_QWORD *)(v2 + 16) = boost::coroutines2::detail::create_control_block<boost::coroutines2::detail::push_coroutine<void>::control_block,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(boost::context::stack_context *)(v2 + 96) = boost::context::basic_fixedsize_stack<boost::context::stack_traits>::allocate(salloc);
  *(_QWORD *)(v2 + 32) = *(_QWORD *)(v2 + 104) - 96LL;
  *(_QWORD *)(v2 + 64) = 96LL;
  *(_QWORD *)(v2 + 32) = std::align(0x40uLL, 0x20uLL, (void **)(v2 + 32), (std::size_t *)(v2 + 64));
  if ( !*(_QWORD *)(v2 + 32) )
  {
    __asan_handle_no_return(64LL);
    __assert_fail(
      "nullptr != sp",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/coroutine2"
      "/detail/create_control_block.ipp",
      0x2Du,
      "ControlBlock* boost::coroutines2::detail::create_control_block(StackAllocator&&, Fn&&) [with ControlBlock = boost:"
      ":coroutines2::detail::push_coroutine<void>::control_block; StackAllocator = boost::context::basic_fixedsize_stack<"
      "boost::context::stack_traits>&; Fn = boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)()"
      ", boost::asio::io_context::strand>, boost::_bi::bind_t<int, boost::_mfi::mf1<int, common::minet::AServerMgr<Gatese"
      "rverSession>, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(), boost::asio::executor> > >"
      ", boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>, boost::arg<1> > > >&]");
  }
  boost::context::preallocated::preallocated(
    &palloc,
    *(void **)(v2 + 32),
    *(_QWORD *)(v2 + 96) - (*(_QWORD *)(v2 + 104) - *(_QWORD *)(v2 + 32)),
    *(boost::context::stack_context *)(v2 + 96));
  v5 = std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(salloc);
  v8 = std::forward<boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(fn);
  v6 = (boost::coroutines2::detail::push_coroutine<void>::control_block *)operator new(0x20uLL, *(void **)(v2 + 32));
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>> &>(
    v6,
    palloc,
    v5,
    v8);
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 31: range 000000000BF9F296-000000000BF9F4F8
boost::coroutines2::detail::push_coroutine<void>::control_block *__cdecl boost::coroutines2::detail::create_control_block<boost::coroutines2::detail::push_coroutine<void>::control_block,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(
        boost::context::basic_fixedsize_stack<boost::context::stack_traits> *salloc,
        boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *fn)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v5; // r15
  boost::coroutines2::detail::push_coroutine<void>::control_block *v6; // rbx
  boost::coroutines2::detail::push_coroutine<void>::control_block *result; // rax
  boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > > *v8; // [rsp+8h] [rbp-108h]
  boost::context::preallocated palloc; // [rsp+40h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 5 sp:41 64 8 8 space:43 96 16 7 sctx:32";
  *(_QWORD *)(v2 + 16) = boost::coroutines2::detail::create_control_block<boost::coroutines2::detail::push_coroutine<void>::control_block,boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(boost::context::stack_context *)(v2 + 96) = boost::context::basic_fixedsize_stack<boost::context::stack_traits>::allocate(salloc);
  *(_QWORD *)(v2 + 32) = *(_QWORD *)(v2 + 104) - 96LL;
  *(_QWORD *)(v2 + 64) = 96LL;
  *(_QWORD *)(v2 + 32) = std::align(0x40uLL, 0x20uLL, (void **)(v2 + 32), (std::size_t *)(v2 + 64));
  if ( !*(_QWORD *)(v2 + 32) )
  {
    __asan_handle_no_return(64LL);
    __assert_fail(
      "nullptr != sp",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/coroutine2"
      "/detail/create_control_block.ipp",
      0x2Du,
      "ControlBlock* boost::coroutines2::detail::create_control_block(StackAllocator&&, Fn&&) [with ControlBlock = boost:"
      ":coroutines2::detail::push_coroutine<void>::control_block; StackAllocator = boost::context::basic_fixedsize_stack<"
      "boost::context::stack_traits>&; Fn = boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)()"
      ", boost::asio::io_context::strand>, boost::_bi::bind_t<int, boost::_mfi::mf1<int, common::minet::AServerMgr<HttpSe"
      "ssion>, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(), boost::asio::executor> > >, boos"
      "t::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>, boost::arg<1> > > >&]");
  }
  boost::context::preallocated::preallocated(
    &palloc,
    *(void **)(v2 + 32),
    *(_QWORD *)(v2 + 96) - (*(_QWORD *)(v2 + 104) - *(_QWORD *)(v2 + 32)),
    *(boost::context::stack_context *)(v2 + 96));
  v5 = std::forward<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &>(salloc);
  v8 = std::forward<boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(fn);
  v6 = (boost::coroutines2::detail::push_coroutine<void>::control_block *)operator new(0x20uLL, *(void **)(v2 + 32));
  boost::coroutines2::detail::push_coroutine<void>::control_block::control_block<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,boost::asio::detail::coro_entry_point<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>> &>(
    v6,
    palloc,
    v5,
    v8);
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
