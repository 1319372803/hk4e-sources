// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/reactive_socket_connect_op.hpp

// Line 41: range 0000000019B7500A-0000000019B75321
boost::asio::detail::reactor_op::status __fastcall boost::asio::detail::reactive_socket_connect_op_base::do_perform(
        boost::asio::detail::reactor_op *base)
{
  unsigned __int64 v1; // rsi
  int next; // r14d
  unsigned __int64 v4; // rbx
  _DWORD *v5; // r13
  boost::system::error_code *p_ec; // r15
  boost::asio::detail::reactor_op *v7; // rdi
  char v8; // al
  char v9; // al
  boost::asio::detail::reactor_op::status result; // eax
  __int64 v11; // rax
  char v12; // dl
  char v13; // dl
  unsigned int v14; // eax
  __int64 v15; // rax
  char v16[152]; // [rsp+10h] [rbp-98h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v4 = v11;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 13 connect_error 48 4 10 tmp_optlen 64 8 3 fds";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::reactive_socket_connect_op_base::do_perform;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  p_ec = &base->ec_;
  v7 = base + 1;
  v8 = *(_BYTE *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_load4(v7);
  }
  else
  {
    next = (int)base[1].next_;
    *(_DWORD *)(v4 + 64) = next;
    *(_WORD *)(v4 + 68) = 4;
    *(_WORD *)(v4 + 70) = 0;
    v1 = 1LL;
    if ( !poll((struct pollfd *)(v4 + 64), 1uLL, 0) )
    {
      v9 = 0;
      goto LABEL_6;
    }
  }
  *(_DWORD *)(v4 + 32) = 0;
  if ( next == -1 )
  {
    if ( !*(_WORD *)(((unsigned __int64)p_ec >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)&base->ec_.val_ = 0x100000009LL;
      base->ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
      goto LABEL_19;
    }
    __asan_report_store16(&base->ec_);
    goto LABEL_26;
  }
  v1 = (unsigned __int64)__errno_location();
  v12 = *(_BYTE *)((v1 >> 3) + 0x7FFF8000);
  if ( (char)((v1 & 7) + 3) >= v12 && v12 )
  {
LABEL_26:
    __asan_report_store4(v1);
LABEL_27:
    __asan_report_load4(v1);
    goto LABEL_28;
  }
  *(_DWORD *)v1 = 0;
  *(_DWORD *)(v4 + 48) = 4;
  next = getsockopt(next, 1, 4, (void *)(v4 + 32), (socklen_t *)(v4 + 48));
  v13 = *(_BYTE *)((v1 >> 3) + 0x7FFF8000);
  if ( (char)((v1 & 7) + 3) >= v13 && v13 )
    goto LABEL_27;
  if ( *(_WORD *)(((unsigned __int64)p_ec >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store16(&base->ec_);
LABEL_29:
    __asan_report_store16(&base->ec_);
    goto LABEL_30;
  }
  *(_QWORD *)&base->ec_.val_ = ((unsigned __int64)(*(_DWORD *)v1 != 0) << 32) | *(unsigned int *)v1;
  base->ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( !next )
  {
    *(_QWORD *)&base->ec_.val_ = 0LL;
    base->ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  }
LABEL_19:
  if ( next )
    goto LABEL_33;
  v14 = *(_DWORD *)(v4 + 32);
  if ( v14 )
  {
    v15 = v14 | 0x100000000LL;
    if ( !*(_WORD *)(((unsigned __int64)p_ec >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)&base->ec_.val_ = v15;
      base->ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
      v9 = 1;
      goto LABEL_6;
    }
    goto LABEL_29;
  }
LABEL_30:
  if ( !*(_WORD *)(((unsigned __int64)p_ec >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)&base->ec_.val_ = 0LL;
    base->ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
    v9 = 1;
    goto LABEL_6;
  }
  __asan_report_store16(&base->ec_);
LABEL_33:
  v9 = 1;
LABEL_6:
  result = v9 != 0;
  if ( v16 == (char *)v4 )
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
  return result;
};

// Line 74: range 0000000019BB86D4-0000000019BB8D27
void __fastcall boost::asio::detail::reactive_socket_connect_op<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // rbp
  unsigned __int64 p_task_result; // r12
  unsigned __int64 v7; // rdi
  boost::asio::detail::operation *v8; // rax
  boost::asio::detail::operation *v9; // rdi
  boost::asio::detail::scheduler_operation *v10; // rax
  unsigned __int64 p_func; // rdi
  __int64 (__fastcall **v12)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t); // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // r12
  unsigned __int64 v15; // rdx
  void *v16; // rdi
  __int64 v17; // rax
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  __int64 v24; // r12
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  void *v27; // rdi
  struct _Unwind_Exception *v28; // rbp
  std::allocator<void> a; // [rsp+2Fh] [rbp-1F9h] BYREF
  char v31[504]; // [rsp+30h] [rbp-1F8h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_3(448LL);
    if ( v17 )
      v4 = v17;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 24 4 p:81 112 24 4 w:82 176 208 10 handler:93";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::reactive_socket_connect_op<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862732] = -202116109;
  v5[536862733] = -202116109;
  *(_QWORD *)(v4 + 48) = (char *)base + 64;
  *(_QWORD *)(v4 + 56) = base;
  *(_QWORD *)(v4 + 64) = base;
  p_task_result = (unsigned __int64)&base[10].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[10].task_result_ >> 3) + 0x7FFF8000) )
  {
    v7 = (unsigned __int64)&base[10].task_result_;
    __asan_report_load8(&base[10].task_result_);
LABEL_37:
    v8 = (boost::asio::detail::operation *)__asan_report_load8(v7);
    goto LABEL_38;
  }
  v7 = *(_QWORD *)&base[10].task_result_;
  if ( !v7 )
    goto LABEL_7;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    goto LABEL_37;
  v8 = *(boost::asio::detail::operation **)v7;
  if ( *(_BYTE *)((*(_QWORD *)v7 >> 3) + 0x7FFF8000LL) )
  {
LABEL_38:
    v9 = v8;
    __asan_report_load8(v8);
    goto LABEL_39;
  }
  v7 = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v8->next_)(
         v7,
         base,
         *(_QWORD *)v7 >> 3,
         a4);
LABEL_7:
  *(_QWORD *)(v4 + 112) = v7;
  v9 = base + 11;
  if ( *(char *)(((unsigned __int64)&base[11] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_39:
    __asan_report_load1(v9);
    goto LABEL_40;
  }
  *(_BYTE *)(v4 + 120) = base[11].next_;
  v9 = base + 8;
  if ( *(_BYTE *)(((unsigned __int64)&base[8] >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(v9);
LABEL_41:
    v10 = (boost::asio::detail::scheduler_operation *)__asan_report_load8(p_task_result);
    goto LABEL_42;
  }
  p_task_result = (unsigned __int64)base[8].next_;
  if ( !p_task_result )
    goto LABEL_13;
  if ( *(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_41;
  v10 = *(boost::asio::detail::scheduler_operation **)p_task_result;
  if ( *(_BYTE *)((*(_QWORD *)p_task_result >> 3) + 0x7FFF8000LL) )
  {
LABEL_42:
    p_func = (unsigned __int64)v10;
    __asan_report_load8(v10);
    goto LABEL_43;
  }
  p_task_result = ((__int64 (__fastcall *)(boost::asio::detail::scheduler_operation *, boost::asio::detail::operation *, _QWORD, std::size_t))v10->next_)(
                    base[8].next_,
                    base,
                    *(_QWORD *)p_task_result >> 3,
                    a4);
LABEL_13:
  p_func = (unsigned __int64)&base[6].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[6].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_func);
LABEL_44:
    v12 = (__int64 (__fastcall **)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))__asan_report_load8(p_func);
    goto LABEL_45;
  }
  p_func = (unsigned __int64)base[6].func_;
  if ( !p_func )
    goto LABEL_18;
  if ( *(_BYTE *)((p_func >> 3) + 0x7FFF8000) )
    goto LABEL_44;
  v12 = *(__int64 (__fastcall ***)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))p_func;
  if ( *(_BYTE *)((*(_QWORD *)p_func >> 3) + 0x7FFF8000LL) )
  {
LABEL_45:
    __asan_report_load8(v12);
LABEL_46:
    v13 = p_task_result;
    __asan_report_load8(p_task_result);
    goto LABEL_47;
  }
  p_func = (*v12)(p_func, base, *(_QWORD *)p_func >> 3, a4);
LABEL_18:
  *(_QWORD *)(v4 + 128) = p_func;
  if ( !p_task_result )
    goto LABEL_22;
  if ( *(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
    goto LABEL_46;
  v13 = *(_QWORD *)p_task_result + 8LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(v13);
    goto LABEL_48;
  }
  (*(void (__fastcall **)(unsigned __int64, boost::asio::detail::operation *, unsigned __int64, std::size_t))(*(_QWORD *)p_task_result + 8LL))(
    p_task_result,
    base,
    (unsigned __int64)(*(_QWORD *)p_task_result + 8LL) >> 3,
    a4);
LABEL_22:
  boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::range_connect_op(
    (boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > > *const)(v4 + 176),
    (boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > > *)&base[2].task_result_);
  v13 = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load16(v13);
    goto LABEL_49;
  }
  *(__m128i *)(v4 + 368) = _mm_loadu_si128((const __m128i *)&base[1]);
  *(_QWORD *)(v4 + 48) = v4 + 176;
  v14 = *(_QWORD *)(v4 + 64);
  if ( v14 )
  {
    v13 = v14 + 256;
    if ( !*(_BYTE *)(((unsigned __int64)(v14 + 256) >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)(v14 + 256);
      if ( !v13 )
      {
LABEL_29:
        boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::~range_connect_op((boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > > *const)(v14 + 64));
        *(_QWORD *)(v4 + 64) = 0LL;
        goto LABEL_30;
      }
      if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        v15 = *(_QWORD *)v13 + 8LL;
        if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          (*(void (**)(void))(*(_QWORD *)v13 + 8LL))();
          goto LABEL_29;
        }
LABEL_51:
        __asan_report_load8(v15);
        goto LABEL_52;
      }
LABEL_50:
      __asan_report_load8(v13);
      goto LABEL_51;
    }
LABEL_49:
    __asan_report_load8(v13);
    goto LABEL_50;
  }
LABEL_30:
  v16 = *(void **)(v4 + 56);
  if ( v16 )
  {
    boost::beast::asio_handler_deallocate<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>,boost::asio::executor,std::allocator<void>>(
      v16,
      0x110uLL,
      (boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 48) + 56LL));
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder1<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>,boost::system::error_code>,std::allocator<void>>(
      (const boost::asio::executor *const)(v4 + 128),
      (boost::asio::detail::binder1<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > >,boost::system::error_code> *)(v4 + 176),
      &a);
LABEL_52:
  boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::~range_connect_op((boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > > *const)(v4 + 176));
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v4 + 112));
  impl = boost::asio::executor::get_impl((const boost::asio::executor *const)(v4 + 128));
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_74;
  }
  v19 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    v20 = v19;
    __asan_report_load8(v19);
LABEL_75:
    __asan_report_load8(v20);
    goto LABEL_76;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
  v20 = *(_QWORD *)(v4 + 128);
  if ( !v20 )
    goto LABEL_58;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_75;
  v21 = *(_QWORD *)v20 + 8LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    v22 = v21;
    __asan_report_load8(v21);
LABEL_77:
    __asan_report_load8(v22);
    goto LABEL_78;
  }
  (*(void (**)(void))(*(_QWORD *)v20 + 8LL))();
LABEL_58:
  v22 = *(_QWORD *)(v4 + 112);
  if ( !v22 )
    goto LABEL_62;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v23 = *(_QWORD *)v22 + 8LL;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    v25 = v23;
    __asan_report_load8(v23);
LABEL_79:
    __asan_report_load8(v25);
    goto LABEL_80;
  }
  (*(void (**)(void))(*(_QWORD *)v22 + 8LL))();
LABEL_62:
  v24 = *(_QWORD *)(v4 + 64);
  if ( !v24 )
    goto LABEL_69;
  v25 = v24 + 256;
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 256) >> 3) + 0x7FFF8000) )
    goto LABEL_79;
  v25 = *(_QWORD *)(v24 + 256);
  if ( v25 )
  {
    if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    {
      v26 = *(_QWORD *)v25 + 8LL;
      if ( !*(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
        goto LABEL_68;
      }
LABEL_81:
      v28 = (struct _Unwind_Exception *)__asan_report_load8(v26);
      boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::~range_connect_op((boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > > *const)(v4 + 176));
      boost::asio::detail::handler_work<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 112));
      boost::asio::detail::reactive_socket_connect_op<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::reactive_socket_connect_op<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
      __asan_handle_no_return(v4 + 48);
      _Unwind_Resume(v28);
    }
LABEL_80:
    __asan_report_load8(v25);
    goto LABEL_81;
  }
LABEL_68:
  boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::~range_connect_op((boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > > *const)(v24 + 64));
  *(_QWORD *)(v4 + 64) = 0LL;
LABEL_69:
  v27 = *(void **)(v4 + 56);
  if ( v27 )
    boost::beast::asio_handler_deallocate<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>,boost::asio::executor,std::allocator<void>>(
      v27,
      0x110uLL,
      (boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> >,boost::asio::executor,std::allocator<void> > *)(*(_QWORD *)(v4 + 48) + 56LL));
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
