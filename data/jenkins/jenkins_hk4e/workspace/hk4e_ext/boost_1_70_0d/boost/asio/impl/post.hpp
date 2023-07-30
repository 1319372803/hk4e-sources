// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/post.hpp

// Line 70: range 0000000019B98B08-0000000019B99381
void __fastcall boost::asio::post<boost::asio::executor,boost::asio::detail::binder1<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>,boost::system::error_code>>(
        const boost::asio::executor *ex,
        boost::asio::detail::binder1<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > >,boost::system::error_code> *token,
        std::enable_if<true,void>::type *a3)
{
  boost::asio::executor::impl_base *impl; // rbx
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > *p_h; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  boost::asio::executor::impl_base *p_handler; // r12
  boost::asio::executor::impl_base *vptr_impl_base; // rax
  unsigned __int64 v9; // rdi
  __int64 (**v10)(void); // rax
  boost::asio::executor::impl_base *v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 p_socket; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v17; // dl
  void *p_index; // rdi
  char v19; // al
  unsigned __int64 p_ca; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v21; // rax
  __int64 (**v22)(void); // rax
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *v23; // rax
  void *p_target; // rdi
  boost::detail::sp_counted_base *pi; // rax
  char v26; // al
  bool clear; // al
  char v28; // al
  bool v29; // al
  __int64 v30; // rax
  char v31; // cl
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+28h] [rbp-160h] BYREF
  boost::asio::detail::work_dispatcher<boost::asio::detail::binder1<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > >,boost::system::error_code> > v34; // [rsp+30h] [rbp-158h] BYREF
  char v35[120]; // [rsp+110h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v30 = __asan_stack_malloc_0(64LL);
    if ( v30 )
      v5 = v30;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 1 8 alloc:51";
  *(_QWORD *)(v5 + 16) = boost::asio::post<boost::asio::executor,boost::asio::detail::binder1<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>,boost::system::error_code>>;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  p_handler = (boost::asio::executor::impl_base *)&token->handler_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.wg1_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&token->handler_.handler_.wg1_);
LABEL_67:
    vptr_impl_base = (boost::asio::executor::impl_base *)__asan_report_load8(impl);
    goto LABEL_68;
  }
  impl = token->handler_.handler_.wg1_.executor_.impl_;
  if ( !impl )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    goto LABEL_67;
  vptr_impl_base = (boost::asio::executor::impl_base *)impl->_vptr_impl_base;
  if ( *(_BYTE *)(((unsigned __int64)impl->_vptr_impl_base >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    v9 = (unsigned __int64)vptr_impl_base;
    __asan_report_load8(vptr_impl_base);
    goto LABEL_69;
  }
  impl = (boost::asio::executor::impl_base *)((__int64 (__fastcall *)(boost::asio::executor::impl_base *))vptr_impl_base->_vptr_impl_base)(token->handler_.handler_.wg1_.executor_.impl_);
LABEL_7:
  v9 = (unsigned __int64)&token->handler_.handler_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(v9);
LABEL_70:
    v10 = (__int64 (**)(void))__asan_report_load8(v9);
    goto LABEL_71;
  }
  v9 = (unsigned __int64)token->handler_.handler_.h_.handler_.executor_.impl_;
  if ( !v9 )
    goto LABEL_12;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    goto LABEL_70;
  v10 = *(__int64 (***)(void))v9;
  if ( *(_BYTE *)((*(_QWORD *)v9 >> 3) + 0x7FFF8000LL) )
  {
LABEL_71:
    __asan_report_load8(v10);
LABEL_72:
    v11 = impl;
    __asan_report_load8(impl);
    goto LABEL_73;
  }
  v9 = (*v10)();
LABEL_12:
  e.impl_ = (boost::asio::executor::impl_base *)v9;
  if ( !impl )
    goto LABEL_16;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v11 = (boost::asio::executor::impl_base *)(impl->_vptr_impl_base + 1);
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v11);
LABEL_74:
    __asan_report_load8(v11);
    goto LABEL_75;
  }
  (*((void (__fastcall **)(boost::asio::executor::impl_base *))impl->_vptr_impl_base + 1))(impl);
LABEL_16:
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v34.work_, &e);
  v11 = e.impl_;
  if ( !e.impl_ )
    goto LABEL_20;
  if ( *(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_74;
  v12 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    p_socket = v12;
    __asan_report_load8(v12);
    goto LABEL_76;
  }
  (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
LABEL_20:
  p_socket = (unsigned __int64)&token->handler_.socket_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.socket_ >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_load8(p_socket);
    goto LABEL_77;
  }
  v34.handler_.handler_.socket_ = token->handler_.socket_;
  p_socket = (unsigned __int64)&token->handler_.endpoints_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.endpoints_ >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_socket);
    goto LABEL_78;
  }
  v34.handler_.handler_.endpoints_.values_._M_ptr = token->handler_.endpoints_.values_._M_ptr;
  p_M_refcount = &token->handler_.endpoints_.values_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.endpoints_.values_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    p_M_use_count = (volatile signed __int32 *)p_M_refcount;
    __asan_report_load8(p_M_refcount);
    goto LABEL_79;
  }
  M_pi = token->handler_.endpoints_.values_._M_refcount._M_pi;
  v34.handler_.handler_.endpoints_.values_._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_28;
  p_M_use_count = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_80;
  v17 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v17 || !v17 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_28;
  }
LABEL_79:
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_80:
  p_index = &M_pi->_M_use_count;
  v31 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(p_index);
    goto LABEL_84;
  }
  ++M_pi->_M_use_count;
LABEL_28:
  p_index = &token->handler_.endpoints_.index_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.endpoints_.index_ >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(p_index);
    goto LABEL_85;
  }
  v34.handler_.handler_.endpoints_.index_ = token->handler_.endpoints_.index_;
  p_index = &token->handler_.index_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.index_ >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8(p_index);
LABEL_86:
    __asan_report_load4(p_index);
    goto LABEL_87;
  }
  v34.handler_.handler_.index_ = token->handler_.index_;
  p_index = &token->handler_.start_;
  v19 = *(_BYTE *)(((unsigned __int64)&token->handler_.start_ >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_86;
  v34.handler_.handler_.start_ = token->handler_.start_;
  v34.handler_.handler_.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>,boost::asio::executor,std::allocator<void>>
                                                                  + 2);
  p_handler = (boost::asio::executor::impl_base *)&v34.handler_.handler_.handler_.h_;
  p_h = &token->handler_.handler_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_load8(p_h);
    goto LABEL_88;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v34.handler_.handler_.handler_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    p_ca = (unsigned __int64)p_handler;
    __asan_report_store8();
    goto LABEL_89;
  }
  v34.handler_.handler_.handler_.h_.coro_._M_ptr = token->handler_.handler_.h_.coro_._M_ptr;
  p_ca = (unsigned __int64)&v34.handler_.handler_.handler_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v34.handler_.handler_.handler_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_store8();
    goto LABEL_90;
  }
  v34.handler_.handler_.handler_.h_.coro_._M_refcount._M_pi = 0LL;
  p_ca = (unsigned __int64)&token->handler_.handler_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_load8(p_ca);
    goto LABEL_91;
  }
  v21 = token->handler_.handler_.h_.coro_._M_refcount._M_pi;
  token->handler_.handler_.h_.coro_._M_refcount._M_pi = 0LL;
  v34.handler_.handler_.handler_.h_.coro_._M_refcount._M_pi = v21;
  token->handler_.handler_.h_.coro_._M_ptr = 0LL;
  p_ca = (unsigned __int64)&token->handler_.handler_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(p_ca);
    goto LABEL_92;
  }
  p_ca = (unsigned __int64)&v34.handler_.handler_.handler_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&v34.handler_.handler_.handler_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_store8();
    goto LABEL_93;
  }
  v34.handler_.handler_.handler_.h_.ca_ = token->handler_.handler_.h_.ca_;
  p_ca = (unsigned __int64)&token->handler_.handler_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8(p_ca);
LABEL_94:
    v22 = (__int64 (**)(void))__asan_report_load8(p_ca);
    goto LABEL_95;
  }
  p_ca = (unsigned __int64)token->handler_.handler_.h_.handler_.executor_.impl_;
  if ( !p_ca )
    goto LABEL_43;
  if ( *(_BYTE *)((p_ca >> 3) + 0x7FFF8000) )
    goto LABEL_94;
  v22 = *(__int64 (***)(void))p_ca;
  if ( *(_BYTE *)((*(_QWORD *)p_ca >> 3) + 0x7FFF8000LL) )
  {
LABEL_95:
    v23 = (boost::asio::executor_binder<void (*)(),boost::asio::executor> *)__asan_report_load8(v22);
    goto LABEL_96;
  }
  p_ca = (*v22)();
LABEL_43:
  v23 = &v34.handler_.handler_.handler_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&v34.handler_.handler_.handler_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    p_target = v23;
    __asan_report_store8();
    goto LABEL_97;
  }
  v34.handler_.handler_.handler_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_ca;
  p_target = &token->handler_.handler_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_load8(p_target);
    goto LABEL_98;
  }
  p_target = &v34.handler_.handler_.handler_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&v34.handler_.handler_.handler_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_store8();
    goto LABEL_99;
  }
  v34.handler_.handler_.handler_.h_.handler_.target_ = token->handler_.handler_.h_.handler_.target_;
  p_target = &token->handler_.handler_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_load8(p_target);
    goto LABEL_100;
  }
  p_target = &v34.handler_.handler_.handler_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&v34.handler_.handler_.handler_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_store8();
    goto LABEL_101;
  }
  v34.handler_.handler_.handler_.h_.ready_ = token->handler_.handler_.h_.ready_;
  p_target = &token->handler_.handler_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8(p_target);
    goto LABEL_102;
  }
  p_target = &v34.handler_.handler_.handler_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&v34.handler_.handler_.handler_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    __asan_report_store8();
    goto LABEL_103;
  }
  v34.handler_.handler_.handler_.h_.ec_ = token->handler_.handler_.h_.ec_;
  p_target = &token->handler_.handler_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    __asan_report_load8(p_target);
    goto LABEL_104;
  }
  p_target = &v34.handler_.handler_.handler_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v34.handler_.handler_.handler_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_store8();
    goto LABEL_105;
  }
  v34.handler_.handler_.handler_.h_.value_ = token->handler_.handler_.h_.value_;
  p_target = &token->handler_.handler_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    __asan_report_load8(p_target);
    goto LABEL_106;
  }
  v34.handler_.handler_.handler_.wg1_.executor_.impl_ = token->handler_.handler_.wg1_.executor_.impl_;
  token->handler_.handler_.wg1_.executor_.impl_ = 0LL;
  p_target = &token->handler_.handler_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->handler_.handler_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_106:
    __asan_report_load1(p_target);
    goto LABEL_107;
  }
  v34.handler_.handler_.handler_.wg1_.owns_ = token->handler_.handler_.wg1_.owns_;
  token->handler_.handler_.wg1_.owns_ = 0;
  v34.handler_.handler_.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>
                                                                  + 2);
  p_target = &token->handler_.handler_.impl_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_load8(p_target);
    goto LABEL_108;
  }
  v34.handler_.handler_.handler_.impl_.px = token->handler_.handler_.impl_.px;
  v34.handler_.handler_.handler_.impl_.pn.pi_ = 0LL;
  p_target = &token->handler_.handler_.impl_.pn;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.impl_.pn >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_load8(p_target);
    goto LABEL_109;
  }
  pi = token->handler_.handler_.impl_.pn.pi_;
  token->handler_.handler_.impl_.pn.pi_ = 0LL;
  v34.handler_.handler_.handler_.impl_.pn.pi_ = pi;
  token->handler_.handler_.impl_.px = 0LL;
  p_target = &token->handler_.handler_.pg0_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.pg0_ >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    __asan_report_load8(p_target);
LABEL_110:
    __asan_report_load1(p_target);
    goto LABEL_111;
  }
  v34.handler_.handler_.handler_.pg0_.b_ = token->handler_.handler_.pg0_.b_;
  p_target = &token->handler_.handler_.pg0_.clear_;
  v26 = *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.pg0_.clear_ >> 3) + 0x7FFF8000);
  if ( v26 <= (((unsigned __int8)token - 88) & 7) && v26 )
    goto LABEL_110;
  clear = token->handler_.handler_.pg0_.clear_;
  token->handler_.handler_.pg0_.clear_ = 0;
  v34.handler_.handler_.handler_.pg0_.clear_ = clear;
  p_target = &token->handler_.handler_.pg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.pg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_load8(p_target);
LABEL_112:
    __asan_report_load1(p_target);
    goto LABEL_113;
  }
  v34.handler_.handler_.handler_.pg1_.b_ = token->handler_.handler_.pg1_.b_;
  p_target = &token->handler_.handler_.pg1_.clear_;
  v28 = *(_BYTE *)(((unsigned __int64)&token->handler_.handler_.pg1_.clear_ >> 3) + 0x7FFF8000);
  if ( v28 <= (((unsigned __int8)token - 72) & 7) && v28 )
    goto LABEL_112;
  v29 = token->handler_.handler_.pg1_.clear_;
  token->handler_.handler_.pg1_.clear_ = 0;
  v34.handler_.handler_.handler_.pg1_.clear_ = v29;
  p_target = &token->arg1_;
  if ( !*(_WORD *)(((unsigned __int64)&token->arg1_ >> 3) + 0x7FFF8000) )
  {
    v34.handler_.arg1_ = (boost::system::error_code)_mm_loadu_si128((const __m128i *)&token->arg1_);
    boost::asio::executor::post<boost::asio::detail::work_dispatcher<boost::asio::detail::binder1<boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>,boost::system::error_code>>,std::allocator<void>>(
      ex,
      &v34,
      (const std::allocator<void> *)(v5 + 32));
    goto LABEL_114;
  }
LABEL_113:
  __asan_report_load16(p_target);
LABEL_114:
  boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::~range_connect_op(&v34.handler_.handler_);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v34.work_);
  if ( v35 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 70: range 0000000019BB02CE-0000000019BB0E8D
void __fastcall boost::asio::post<boost::asio::executor,boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code,int>>(
        const boost::asio::executor *ex,
        boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::system::error_code,int> *token,
        std::enable_if<true,void>::type *a3)
{
  unsigned __int64 impl; // rbp
  unsigned __int64 v4; // r12
  unsigned __int64 p_h; // r13
  __int64 (__fastcall **v6)(boost::asio::executor::impl_base *); // rax
  boost::asio::executor_work_guard<boost::asio::executor> *p_wg1; // rdi
  __int64 (__fastcall **v8)(boost::asio::executor::impl_base *); // rax
  __int64 (__fastcall **v9)(boost::asio::executor::impl_base *); // rax
  unsigned __int64 p_handler; // rdi
  __int64 (**v11)(void); // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v18)(void); // rax
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *v19; // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base **p_list; // rdi
  boost::beast::detail::stable_base *list; // rax
  unsigned __int64 p_s; // rdi
  char v24; // al
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+8h] [rbp-1B0h]
  unsigned __int64 v27; // [rsp+20h] [rbp-198h]
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+38h] [rbp-180h] BYREF
  boost::asio::detail::work_dispatcher<boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::system::error_code,int> > v30; // [rsp+40h] [rbp-178h] BYREF
  char v31[120]; // [rsp+140h] [rbp-78h] BYREF

  v26 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v25 = __asan_stack_malloc_0(64LL);
    if ( v25 )
      v26 = v25;
  }
  *(_QWORD *)v26 = 1102416563LL;
  *(_QWORD *)(v26 + 8) = "1 32 1 8 alloc:51";
  *(_QWORD *)(v26 + 16) = boost::asio::post<boost::asio::executor,boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code,int>>;
  v27 = v26 >> 3;
  *(_DWORD *)(v27 + 2147450880) = -235802127;
  *(_DWORD *)(v27 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&token->h_.wg1_);
LABEL_88:
    v6 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(impl);
    goto LABEL_89;
  }
  impl = (unsigned __int64)token->h_.wg1_.executor_.impl_;
  if ( !impl )
    goto LABEL_7;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_88;
  v6 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))impl;
  if ( *(_BYTE *)((*(_QWORD *)impl >> 3) + 0x7FFF8000LL) )
  {
LABEL_89:
    p_wg1 = (boost::asio::executor_work_guard<boost::asio::executor> *)v6;
    __asan_report_load8(v6);
    goto LABEL_90;
  }
  impl = (*v6)(token->h_.wg1_.executor_.impl_);
LABEL_7:
  p_h = (unsigned __int64)&token->h_.h_;
  p_wg1 = &token->h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_load8(p_wg1);
LABEL_91:
    v8 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(v4);
    goto LABEL_92;
  }
  v4 = (unsigned __int64)token->h_.h_.wg1_.executor_.impl_;
  if ( !v4 )
    goto LABEL_12;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    goto LABEL_91;
  v8 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))v4;
  if ( *(_BYTE *)((*(_QWORD *)v4 >> 3) + 0x7FFF8000LL) )
  {
LABEL_92:
    __asan_report_load8(v8);
    goto LABEL_93;
  }
  v4 = (*v8)(token->h_.h_.wg1_.executor_.impl_);
LABEL_12:
  p_h = (unsigned __int64)&token->h_.h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8(p_h);
LABEL_94:
    v9 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(p_h);
    goto LABEL_95;
  }
  p_h = (unsigned __int64)token->h_.h_.h_.wg1_.executor_.impl_;
  if ( !p_h )
    goto LABEL_17;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_94;
  v9 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))p_h;
  if ( *(_BYTE *)((*(_QWORD *)p_h >> 3) + 0x7FFF8000LL) )
  {
LABEL_95:
    p_handler = (unsigned __int64)v9;
    __asan_report_load8(v9);
    goto LABEL_96;
  }
  p_h = (*v9)(token->h_.h_.h_.wg1_.executor_.impl_);
LABEL_17:
  p_handler = (unsigned __int64)&token->h_.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8(p_handler);
LABEL_97:
    v11 = (__int64 (**)(void))__asan_report_load8(p_handler);
    goto LABEL_98;
  }
  p_handler = (unsigned __int64)token->h_.h_.h_.h_.handler_.executor_.impl_;
  if ( !p_handler )
    goto LABEL_22;
  if ( *(_BYTE *)((p_handler >> 3) + 0x7FFF8000) )
    goto LABEL_97;
  v11 = *(__int64 (***)(void))p_handler;
  if ( *(_BYTE *)((*(_QWORD *)p_handler >> 3) + 0x7FFF8000LL) )
  {
LABEL_98:
    __asan_report_load8(v11);
LABEL_99:
    v12 = p_h;
    __asan_report_load8(p_h);
    goto LABEL_100;
  }
  p_handler = (*v11)();
LABEL_22:
  e.impl_ = (boost::asio::executor::impl_base *)p_handler;
  if ( !p_h )
    goto LABEL_26;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  v12 = *(_QWORD *)p_h + 8LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(v12);
LABEL_101:
    v13 = v4;
    __asan_report_load8(v4);
    goto LABEL_102;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_h + 8LL))(p_h);
LABEL_26:
  if ( !v4 )
    goto LABEL_30;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    goto LABEL_101;
  v13 = *(_QWORD *)v4 + 8LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    __asan_report_load8(v13);
LABEL_103:
    v14 = impl;
    __asan_report_load8(impl);
    goto LABEL_104;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 8LL))(v4);
LABEL_30:
  if ( !impl )
    goto LABEL_34;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_103;
  v14 = *(_QWORD *)impl + 8LL;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_load8(v14);
LABEL_105:
    __asan_report_load8(v14);
    goto LABEL_106;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)impl + 8LL))(impl);
LABEL_34:
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v30.work_, &e);
  v14 = (unsigned __int64)e.impl_;
  if ( !e.impl_ )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_105;
  v15 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load8(v15);
    goto LABEL_107;
  }
  (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
LABEL_38:
  v30.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                   + 2);
  v30.handler_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                      + 2);
  impl = (unsigned __int64)&v30.handler_.h_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_store8();
    goto LABEL_108;
  }
  v30.handler_.h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                         + 2);
  v4 = (unsigned __int64)&v30.handler_.h_.h_.h_.h_;
  p_h = (unsigned __int64)&token->h_.h_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_load8(p_h);
    goto LABEL_109;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    p_M_refcount = v4;
    __asan_report_store8();
    goto LABEL_110;
  }
  v30.handler_.h_.h_.h_.h_.coro_._M_ptr = token->h_.h_.h_.h_.coro_._M_ptr;
  p_M_refcount = (unsigned __int64)&v30.handler_.h_.h_.h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store8();
    goto LABEL_111;
  }
  v30.handler_.h_.h_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&token->h_.h_.h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_load8(p_M_refcount);
    goto LABEL_112;
  }
  M_pi = token->h_.h_.h_.h_.coro_._M_refcount._M_pi;
  token->h_.h_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  v30.handler_.h_.h_.h_.h_.coro_._M_refcount._M_pi = M_pi;
  token->h_.h_.h_.h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&token->h_.h_.h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_112:
    __asan_report_load8(p_M_refcount);
    goto LABEL_113;
  }
  p_M_refcount = (unsigned __int64)&v30.handler_.h_.h_.h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    __asan_report_store8();
    goto LABEL_114;
  }
  v30.handler_.h_.h_.h_.h_.ca_ = token->h_.h_.h_.h_.ca_;
  p_M_refcount = (unsigned __int64)&token->h_.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_114:
    __asan_report_load8(p_M_refcount);
LABEL_115:
    v18 = (__int64 (**)(void))__asan_report_load8(p_M_refcount);
    goto LABEL_116;
  }
  p_M_refcount = (unsigned __int64)token->h_.h_.h_.h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_50;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_115;
  v18 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_116:
    v19 = (boost::asio::executor_binder<void (*)(),boost::asio::executor> *)__asan_report_load8(v18);
    goto LABEL_117;
  }
  p_M_refcount = (*v18)();
LABEL_50:
  v19 = &v30.handler_.h_.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_117:
    p_target = v19;
    __asan_report_store8();
    goto LABEL_118;
  }
  v30.handler_.h_.h_.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &token->h_.h_.h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_118:
    __asan_report_load8(p_target);
    goto LABEL_119;
  }
  p_target = &v30.handler_.h_.h_.h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_119:
    __asan_report_store8();
    goto LABEL_120;
  }
  v30.handler_.h_.h_.h_.h_.handler_.target_ = token->h_.h_.h_.h_.handler_.target_;
  p_target = &token->h_.h_.h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_120:
    __asan_report_load8(p_target);
    goto LABEL_121;
  }
  p_target = &v30.handler_.h_.h_.h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_121:
    __asan_report_store8();
    goto LABEL_122;
  }
  v30.handler_.h_.h_.h_.h_.ready_ = token->h_.h_.h_.h_.ready_;
  p_target = &token->h_.h_.h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_122:
    __asan_report_load8(p_target);
    goto LABEL_123;
  }
  p_target = &v30.handler_.h_.h_.h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_123:
    __asan_report_store8();
    goto LABEL_124;
  }
  v30.handler_.h_.h_.h_.h_.ec_ = token->h_.h_.h_.h_.ec_;
  p_target = &token->h_.h_.h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_124:
    __asan_report_load8(p_target);
    goto LABEL_125;
  }
  p_target = &v30.handler_.h_.h_.h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_125:
    __asan_report_store8();
    goto LABEL_126;
  }
  v30.handler_.h_.h_.h_.h_.value_ = token->h_.h_.h_.h_.value_;
  p_target = &token->h_.h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_126:
    __asan_report_load8(p_target);
    goto LABEL_127;
  }
  p_target = &v30.handler_.h_.h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_127:
    __asan_report_store8();
    goto LABEL_128;
  }
  v30.handler_.h_.h_.h_.wg1_.executor_.impl_ = token->h_.h_.h_.wg1_.executor_.impl_;
  token->h_.h_.h_.wg1_.executor_.impl_ = 0LL;
  p_target = &token->h_.h_.h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->h_.h_.h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_128:
    __asan_report_load1(p_target);
    goto LABEL_129;
  }
  p_target = &v30.handler_.h_.h_.h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&v30.handler_.h_.h_.h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_129:
    __asan_report_store1(p_target);
    goto LABEL_130;
  }
  v30.handler_.h_.h_.h_.wg1_.owns_ = token->h_.h_.h_.wg1_.owns_;
  token->h_.h_.h_.wg1_.owns_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_130:
    p_list = (boost::beast::detail::stable_base **)impl;
    __asan_report_store8();
    goto LABEL_131;
  }
  v30.handler_.h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                         + 2);
  p_list = &token->h_.h_.h_.list_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_131:
    __asan_report_load8(p_list);
    goto LABEL_132;
  }
  list = token->h_.h_.h_.list_;
  token->h_.h_.h_.list_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_132:
    __asan_report_store8();
    goto LABEL_133;
  }
  v30.handler_.h_.h_.h_.list_ = list;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_133:
    p_s = impl;
    __asan_report_store8();
    goto LABEL_134;
  }
  v30.handler_.h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                         + 2);
  p_s = (unsigned __int64)&token->h_.h_.h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_134:
    __asan_report_load8(p_s);
    goto LABEL_135;
  }
  p_s = (unsigned __int64)&v30.handler_.h_.h_.h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_135:
    __asan_report_store8();
    goto LABEL_136;
  }
  v30.handler_.h_.h_.h_.s_ = token->h_.h_.h_.s_;
  p_s = (unsigned __int64)&token->h_.h_.h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_136:
    __asan_report_load8(p_s);
    goto LABEL_137;
  }
  p_s = (unsigned __int64)&v30.handler_.h_.h_.h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_137:
    __asan_report_store8();
    goto LABEL_138;
  }
  v30.handler_.h_.h_.h_.sr_ = token->h_.h_.h_.sr_;
  p_s = (unsigned __int64)&token->h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_138:
    __asan_report_load8(p_s);
    goto LABEL_139;
  }
  v30.handler_.h_.h_.wg1_.executor_.impl_ = token->h_.h_.wg1_.executor_.impl_;
  token->h_.h_.wg1_.executor_.impl_ = 0LL;
  p_s = (unsigned __int64)&token->h_.h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->h_.h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_139:
    __asan_report_load1(p_s);
LABEL_140:
    __asan_report_load4(p_s);
    goto LABEL_141;
  }
  v30.handler_.h_.h_.wg1_.owns_ = token->h_.h_.wg1_.owns_;
  token->h_.h_.wg1_.owns_ = 0;
  p_s = (unsigned __int64)&token->h_.h_.boost::asio::coroutine;
  v24 = *(_BYTE *)(((unsigned __int64)&token->h_.h_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
    goto LABEL_140;
  v30.handler_.h_.h_.value_ = token->h_.h_.value_;
  v30.handler_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                      + 2);
  p_s = (unsigned __int64)&token->h_.h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_141:
    __asan_report_load8(p_s);
    goto LABEL_142;
  }
  v30.handler_.h_.h_.s_ = token->h_.h_.s_;
  p_s = (unsigned __int64)&token->h_.h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_142:
    __asan_report_load8(p_s);
    goto LABEL_143;
  }
  v30.handler_.h_.h_.sr_ = token->h_.h_.sr_;
  p_s = (unsigned __int64)&token->h_.h_.bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_143:
    __asan_report_load8(p_s);
    goto LABEL_144;
  }
  v30.handler_.h_.h_.bytes_transferred_ = token->h_.h_.bytes_transferred_;
  p_s = (unsigned __int64)&token->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_144:
    __asan_report_load8(p_s);
    goto LABEL_145;
  }
  v30.handler_.h_.wg1_.executor_.impl_ = token->h_.wg1_.executor_.impl_;
  token->h_.wg1_.executor_.impl_ = 0LL;
  p_s = (unsigned __int64)&token->h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_145:
    __asan_report_load1(p_s);
    goto LABEL_146;
  }
  v30.handler_.h_.wg1_.owns_ = token->h_.wg1_.owns_;
  token->h_.wg1_.owns_ = 0;
  v30.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                   + 2);
  p_s = (unsigned __int64)&token->h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_146:
    __asan_report_load8(p_s);
    goto LABEL_147;
  }
  v30.handler_.h_.s_ = token->h_.s_;
  p_s = (unsigned __int64)&token->h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_147:
    __asan_report_load8(p_s);
    goto LABEL_148;
  }
  v30.handler_.h_.sr_ = token->h_.sr_;
  p_s = (unsigned __int64)&token->args_;
  if ( (*(_BYTE *)((((unsigned __int64)&token->args_.boost::beast::detail::tuple_element_impl<1,int> + 7) >> 3)
                 + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&token->args_.boost::beast::detail::tuple_element_impl<1,int> + 7) >> 3)
                 + 0x7FFF8000) > (((unsigned __int8)token - 25) & 7))
    && *(char *)(((unsigned __int64)&token->args_ >> 3) + 0x7FFF8000) >= 0 )
  {
    v30.handler_.args_.boost::beast::detail::tuple_element_impl<0,boost::system::error_code> = (boost::beast::detail::tuple_element_impl<0,boost::system::error_code>)_mm_loadu_si128((const __m128i *)&token->args_);
    *(_QWORD *)&v30.handler_.args_.t = *(_QWORD *)&token->args_.t;
    boost::asio::executor::post<boost::asio::detail::work_dispatcher<boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code,int>>,std::allocator<void>>(
      ex,
      &v30,
      (const std::allocator<void> *)(v26 + 32));
    goto LABEL_149;
  }
LABEL_148:
  __asan_report_load_n(p_s, 24LL);
LABEL_149:
  v30.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                   + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v30.handler_.h_.wg1_);
  v30.handler_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                      + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v30.handler_.h_.h_.wg1_);
  v30.handler_.h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                         + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v30.handler_.h_.h_.h_);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v30.work_);
  if ( v31 == (char *)v26 )
  {
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v26 = 1172321806LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 70: range 0000000019BB305A-0000000019BB3C19
void __fastcall boost::asio::post<boost::asio::executor,boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code,int>>(
        const boost::asio::executor *ex,
        boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::system::error_code,int> *token,
        std::enable_if<true,void>::type *a3)
{
  unsigned __int64 impl; // rbp
  unsigned __int64 v4; // r12
  unsigned __int64 p_h; // r13
  __int64 (__fastcall **v6)(boost::asio::executor::impl_base *); // rax
  boost::asio::executor_work_guard<boost::asio::executor> *p_wg1; // rdi
  __int64 (__fastcall **v8)(boost::asio::executor::impl_base *); // rax
  __int64 (__fastcall **v9)(boost::asio::executor::impl_base *); // rax
  unsigned __int64 p_handler; // rdi
  __int64 (**v11)(void); // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v18)(void); // rax
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *v19; // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base **p_list; // rdi
  boost::beast::detail::stable_base *list; // rax
  unsigned __int64 p_s; // rdi
  char v24; // al
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+8h] [rbp-1B0h]
  unsigned __int64 v27; // [rsp+20h] [rbp-198h]
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+38h] [rbp-180h] BYREF
  boost::asio::detail::work_dispatcher<boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::system::error_code,int> > v30; // [rsp+40h] [rbp-178h] BYREF
  char v31[120]; // [rsp+140h] [rbp-78h] BYREF

  v26 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v25 = __asan_stack_malloc_0(64LL);
    if ( v25 )
      v26 = v25;
  }
  *(_QWORD *)v26 = 1102416563LL;
  *(_QWORD *)(v26 + 8) = "1 32 1 8 alloc:51";
  *(_QWORD *)(v26 + 16) = boost::asio::post<boost::asio::executor,boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code,int>>;
  v27 = v26 >> 3;
  *(_DWORD *)(v27 + 2147450880) = -235802127;
  *(_DWORD *)(v27 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&token->h_.wg1_);
LABEL_88:
    v6 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(impl);
    goto LABEL_89;
  }
  impl = (unsigned __int64)token->h_.wg1_.executor_.impl_;
  if ( !impl )
    goto LABEL_7;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_88;
  v6 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))impl;
  if ( *(_BYTE *)((*(_QWORD *)impl >> 3) + 0x7FFF8000LL) )
  {
LABEL_89:
    p_wg1 = (boost::asio::executor_work_guard<boost::asio::executor> *)v6;
    __asan_report_load8(v6);
    goto LABEL_90;
  }
  impl = (*v6)(token->h_.wg1_.executor_.impl_);
LABEL_7:
  p_h = (unsigned __int64)&token->h_.h_;
  p_wg1 = &token->h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_load8(p_wg1);
LABEL_91:
    v8 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(v4);
    goto LABEL_92;
  }
  v4 = (unsigned __int64)token->h_.h_.wg1_.executor_.impl_;
  if ( !v4 )
    goto LABEL_12;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    goto LABEL_91;
  v8 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))v4;
  if ( *(_BYTE *)((*(_QWORD *)v4 >> 3) + 0x7FFF8000LL) )
  {
LABEL_92:
    __asan_report_load8(v8);
    goto LABEL_93;
  }
  v4 = (*v8)(token->h_.h_.wg1_.executor_.impl_);
LABEL_12:
  p_h = (unsigned __int64)&token->h_.h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8(p_h);
LABEL_94:
    v9 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(p_h);
    goto LABEL_95;
  }
  p_h = (unsigned __int64)token->h_.h_.h_.wg1_.executor_.impl_;
  if ( !p_h )
    goto LABEL_17;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_94;
  v9 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))p_h;
  if ( *(_BYTE *)((*(_QWORD *)p_h >> 3) + 0x7FFF8000LL) )
  {
LABEL_95:
    p_handler = (unsigned __int64)v9;
    __asan_report_load8(v9);
    goto LABEL_96;
  }
  p_h = (*v9)(token->h_.h_.h_.wg1_.executor_.impl_);
LABEL_17:
  p_handler = (unsigned __int64)&token->h_.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8(p_handler);
LABEL_97:
    v11 = (__int64 (**)(void))__asan_report_load8(p_handler);
    goto LABEL_98;
  }
  p_handler = (unsigned __int64)token->h_.h_.h_.h_.handler_.executor_.impl_;
  if ( !p_handler )
    goto LABEL_22;
  if ( *(_BYTE *)((p_handler >> 3) + 0x7FFF8000) )
    goto LABEL_97;
  v11 = *(__int64 (***)(void))p_handler;
  if ( *(_BYTE *)((*(_QWORD *)p_handler >> 3) + 0x7FFF8000LL) )
  {
LABEL_98:
    __asan_report_load8(v11);
LABEL_99:
    v12 = p_h;
    __asan_report_load8(p_h);
    goto LABEL_100;
  }
  p_handler = (*v11)();
LABEL_22:
  e.impl_ = (boost::asio::executor::impl_base *)p_handler;
  if ( !p_h )
    goto LABEL_26;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  v12 = *(_QWORD *)p_h + 8LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(v12);
LABEL_101:
    v13 = v4;
    __asan_report_load8(v4);
    goto LABEL_102;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_h + 8LL))(p_h);
LABEL_26:
  if ( !v4 )
    goto LABEL_30;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    goto LABEL_101;
  v13 = *(_QWORD *)v4 + 8LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    __asan_report_load8(v13);
LABEL_103:
    v14 = impl;
    __asan_report_load8(impl);
    goto LABEL_104;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 8LL))(v4);
LABEL_30:
  if ( !impl )
    goto LABEL_34;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_103;
  v14 = *(_QWORD *)impl + 8LL;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_load8(v14);
LABEL_105:
    __asan_report_load8(v14);
    goto LABEL_106;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)impl + 8LL))(impl);
LABEL_34:
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v30.work_, &e);
  v14 = (unsigned __int64)e.impl_;
  if ( !e.impl_ )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_105;
  v15 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load8(v15);
    goto LABEL_107;
  }
  (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
LABEL_38:
  v30.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                   + 2);
  v30.handler_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                      + 2);
  impl = (unsigned __int64)&v30.handler_.h_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_store8();
    goto LABEL_108;
  }
  v30.handler_.h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                         + 2);
  v4 = (unsigned __int64)&v30.handler_.h_.h_.h_.h_;
  p_h = (unsigned __int64)&token->h_.h_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_load8(p_h);
    goto LABEL_109;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    p_M_refcount = v4;
    __asan_report_store8();
    goto LABEL_110;
  }
  v30.handler_.h_.h_.h_.h_.coro_._M_ptr = token->h_.h_.h_.h_.coro_._M_ptr;
  p_M_refcount = (unsigned __int64)&v30.handler_.h_.h_.h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store8();
    goto LABEL_111;
  }
  v30.handler_.h_.h_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&token->h_.h_.h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_load8(p_M_refcount);
    goto LABEL_112;
  }
  M_pi = token->h_.h_.h_.h_.coro_._M_refcount._M_pi;
  token->h_.h_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  v30.handler_.h_.h_.h_.h_.coro_._M_refcount._M_pi = M_pi;
  token->h_.h_.h_.h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&token->h_.h_.h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_112:
    __asan_report_load8(p_M_refcount);
    goto LABEL_113;
  }
  p_M_refcount = (unsigned __int64)&v30.handler_.h_.h_.h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    __asan_report_store8();
    goto LABEL_114;
  }
  v30.handler_.h_.h_.h_.h_.ca_ = token->h_.h_.h_.h_.ca_;
  p_M_refcount = (unsigned __int64)&token->h_.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_114:
    __asan_report_load8(p_M_refcount);
LABEL_115:
    v18 = (__int64 (**)(void))__asan_report_load8(p_M_refcount);
    goto LABEL_116;
  }
  p_M_refcount = (unsigned __int64)token->h_.h_.h_.h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_50;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_115;
  v18 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_116:
    v19 = (boost::asio::executor_binder<void (*)(),boost::asio::executor> *)__asan_report_load8(v18);
    goto LABEL_117;
  }
  p_M_refcount = (*v18)();
LABEL_50:
  v19 = &v30.handler_.h_.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_117:
    p_target = v19;
    __asan_report_store8();
    goto LABEL_118;
  }
  v30.handler_.h_.h_.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &token->h_.h_.h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_118:
    __asan_report_load8(p_target);
    goto LABEL_119;
  }
  p_target = &v30.handler_.h_.h_.h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_119:
    __asan_report_store8();
    goto LABEL_120;
  }
  v30.handler_.h_.h_.h_.h_.handler_.target_ = token->h_.h_.h_.h_.handler_.target_;
  p_target = &token->h_.h_.h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_120:
    __asan_report_load8(p_target);
    goto LABEL_121;
  }
  p_target = &v30.handler_.h_.h_.h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_121:
    __asan_report_store8();
    goto LABEL_122;
  }
  v30.handler_.h_.h_.h_.h_.ready_ = token->h_.h_.h_.h_.ready_;
  p_target = &token->h_.h_.h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_122:
    __asan_report_load8(p_target);
    goto LABEL_123;
  }
  p_target = &v30.handler_.h_.h_.h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_123:
    __asan_report_store8();
    goto LABEL_124;
  }
  v30.handler_.h_.h_.h_.h_.ec_ = token->h_.h_.h_.h_.ec_;
  p_target = &token->h_.h_.h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_124:
    __asan_report_load8(p_target);
    goto LABEL_125;
  }
  p_target = &v30.handler_.h_.h_.h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_125:
    __asan_report_store8();
    goto LABEL_126;
  }
  v30.handler_.h_.h_.h_.h_.value_ = token->h_.h_.h_.h_.value_;
  p_target = &token->h_.h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_126:
    __asan_report_load8(p_target);
    goto LABEL_127;
  }
  p_target = &v30.handler_.h_.h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_127:
    __asan_report_store8();
    goto LABEL_128;
  }
  v30.handler_.h_.h_.h_.wg1_.executor_.impl_ = token->h_.h_.h_.wg1_.executor_.impl_;
  token->h_.h_.h_.wg1_.executor_.impl_ = 0LL;
  p_target = &token->h_.h_.h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->h_.h_.h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_128:
    __asan_report_load1(p_target);
    goto LABEL_129;
  }
  p_target = &v30.handler_.h_.h_.h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&v30.handler_.h_.h_.h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_129:
    __asan_report_store1(p_target);
    goto LABEL_130;
  }
  v30.handler_.h_.h_.h_.wg1_.owns_ = token->h_.h_.h_.wg1_.owns_;
  token->h_.h_.h_.wg1_.owns_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_130:
    p_list = (boost::beast::detail::stable_base **)impl;
    __asan_report_store8();
    goto LABEL_131;
  }
  v30.handler_.h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                         + 2);
  p_list = &token->h_.h_.h_.list_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_131:
    __asan_report_load8(p_list);
    goto LABEL_132;
  }
  list = token->h_.h_.h_.list_;
  token->h_.h_.h_.list_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_132:
    __asan_report_store8();
    goto LABEL_133;
  }
  v30.handler_.h_.h_.h_.list_ = list;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_133:
    p_s = impl;
    __asan_report_store8();
    goto LABEL_134;
  }
  v30.handler_.h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                         + 2);
  p_s = (unsigned __int64)&token->h_.h_.h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_134:
    __asan_report_load8(p_s);
    goto LABEL_135;
  }
  p_s = (unsigned __int64)&v30.handler_.h_.h_.h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_135:
    __asan_report_store8();
    goto LABEL_136;
  }
  v30.handler_.h_.h_.h_.s_ = token->h_.h_.h_.s_;
  p_s = (unsigned __int64)&token->h_.h_.h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_136:
    __asan_report_load8(p_s);
    goto LABEL_137;
  }
  p_s = (unsigned __int64)&v30.handler_.h_.h_.h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&v30.handler_.h_.h_.h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_137:
    __asan_report_store8();
    goto LABEL_138;
  }
  v30.handler_.h_.h_.h_.sr_ = token->h_.h_.h_.sr_;
  p_s = (unsigned __int64)&token->h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_138:
    __asan_report_load8(p_s);
    goto LABEL_139;
  }
  v30.handler_.h_.h_.wg1_.executor_.impl_ = token->h_.h_.wg1_.executor_.impl_;
  token->h_.h_.wg1_.executor_.impl_ = 0LL;
  p_s = (unsigned __int64)&token->h_.h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->h_.h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_139:
    __asan_report_load1(p_s);
LABEL_140:
    __asan_report_load4(p_s);
    goto LABEL_141;
  }
  v30.handler_.h_.h_.wg1_.owns_ = token->h_.h_.wg1_.owns_;
  token->h_.h_.wg1_.owns_ = 0;
  p_s = (unsigned __int64)&token->h_.h_.boost::asio::coroutine;
  v24 = *(_BYTE *)(((unsigned __int64)&token->h_.h_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
    goto LABEL_140;
  v30.handler_.h_.h_.value_ = token->h_.h_.value_;
  v30.handler_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                      + 2);
  p_s = (unsigned __int64)&token->h_.h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_141:
    __asan_report_load8(p_s);
    goto LABEL_142;
  }
  v30.handler_.h_.h_.s_ = token->h_.h_.s_;
  p_s = (unsigned __int64)&token->h_.h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_142:
    __asan_report_load8(p_s);
    goto LABEL_143;
  }
  v30.handler_.h_.h_.sr_ = token->h_.h_.sr_;
  p_s = (unsigned __int64)&token->h_.h_.bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_143:
    __asan_report_load8(p_s);
    goto LABEL_144;
  }
  v30.handler_.h_.h_.bytes_transferred_ = token->h_.h_.bytes_transferred_;
  p_s = (unsigned __int64)&token->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_144:
    __asan_report_load8(p_s);
    goto LABEL_145;
  }
  v30.handler_.h_.wg1_.executor_.impl_ = token->h_.wg1_.executor_.impl_;
  token->h_.wg1_.executor_.impl_ = 0LL;
  p_s = (unsigned __int64)&token->h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_145:
    __asan_report_load1(p_s);
    goto LABEL_146;
  }
  v30.handler_.h_.wg1_.owns_ = token->h_.wg1_.owns_;
  token->h_.wg1_.owns_ = 0;
  v30.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                   + 2);
  p_s = (unsigned __int64)&token->h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_146:
    __asan_report_load8(p_s);
    goto LABEL_147;
  }
  v30.handler_.h_.s_ = token->h_.s_;
  p_s = (unsigned __int64)&token->h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_147:
    __asan_report_load8(p_s);
    goto LABEL_148;
  }
  v30.handler_.h_.sr_ = token->h_.sr_;
  p_s = (unsigned __int64)&token->args_;
  if ( (*(_BYTE *)((((unsigned __int64)&token->args_.boost::beast::detail::tuple_element_impl<1,int> + 7) >> 3)
                 + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&token->args_.boost::beast::detail::tuple_element_impl<1,int> + 7) >> 3)
                 + 0x7FFF8000) > (((unsigned __int8)token - 25) & 7))
    && *(char *)(((unsigned __int64)&token->args_ >> 3) + 0x7FFF8000) >= 0 )
  {
    v30.handler_.args_.boost::beast::detail::tuple_element_impl<0,boost::system::error_code> = (boost::beast::detail::tuple_element_impl<0,boost::system::error_code>)_mm_loadu_si128((const __m128i *)&token->args_);
    *(_QWORD *)&v30.handler_.args_.t = *(_QWORD *)&token->args_.t;
    boost::asio::executor::post<boost::asio::detail::work_dispatcher<boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code,int>>,std::allocator<void>>(
      ex,
      &v30,
      (const std::allocator<void> *)(v26 + 32));
    goto LABEL_149;
  }
LABEL_148:
  __asan_report_load_n(p_s, 24LL);
LABEL_149:
  v30.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                   + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v30.handler_.h_.wg1_);
  v30.handler_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                      + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v30.handler_.h_.h_.wg1_);
  v30.handler_.h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                         + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v30.handler_.h_.h_.h_);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v30.work_);
  if ( v31 == (char *)v26 )
  {
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v26 = 1172321806LL;
    *(_QWORD *)((v26 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 70: range 0000000019B9AB61-0000000019B9B3BB
void __fastcall boost::asio::post<boost::asio::executor,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
        const boost::asio::executor *ex,
        boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *token,
        std::enable_if<true,void>::type *a3)
{
  unsigned __int64 impl; // rbp
  unsigned __int64 p_h; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 (__fastcall **v7)(boost::asio::executor::impl_base *); // rax
  boost::asio::executor_work_guard<boost::asio::executor> *p_wg1; // rdi
  __int64 (__fastcall **v9)(boost::asio::executor::impl_base *); // rax
  unsigned __int64 p_handler; // rdi
  __int64 (**v11)(void); // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v17)(void); // rax
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *v18; // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base *list; // rax
  char v21; // al
  __int64 v22; // rax
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+28h] [rbp-140h] BYREF
  boost::asio::detail::work_dispatcher<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > v25; // [rsp+30h] [rbp-138h] BYREF
  char v26[120]; // [rsp+F0h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v22 = __asan_stack_malloc_0(64LL);
    if ( v22 )
      v5 = v22;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 1 8 alloc:51";
  *(_QWORD *)(v5 + 16) = boost::asio::post<boost::asio::executor,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&token->wg1_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&token->wg1_);
LABEL_65:
    v7 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(impl);
    goto LABEL_66;
  }
  impl = (unsigned __int64)token->wg1_.executor_.impl_;
  if ( !impl )
    goto LABEL_7;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_65;
  v7 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))impl;
  if ( *(_BYTE *)((*(_QWORD *)impl >> 3) + 0x7FFF8000LL) )
  {
LABEL_66:
    p_wg1 = (boost::asio::executor_work_guard<boost::asio::executor> *)v7;
    __asan_report_load8(v7);
    goto LABEL_67;
  }
  impl = (*v7)(token->wg1_.executor_.impl_);
LABEL_7:
  p_wg1 = &token->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_wg1);
LABEL_68:
    v9 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(p_h);
    goto LABEL_69;
  }
  p_h = (unsigned __int64)token->h_.wg1_.executor_.impl_;
  if ( !p_h )
    goto LABEL_12;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_68;
  v9 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))p_h;
  if ( *(_BYTE *)((*(_QWORD *)p_h >> 3) + 0x7FFF8000LL) )
  {
LABEL_69:
    p_handler = (unsigned __int64)v9;
    __asan_report_load8(v9);
    goto LABEL_70;
  }
  p_h = (*v9)(token->h_.wg1_.executor_.impl_);
LABEL_12:
  p_handler = (unsigned __int64)&token->h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8(p_handler);
LABEL_71:
    v11 = (__int64 (**)(void))__asan_report_load8(p_handler);
    goto LABEL_72;
  }
  p_handler = (unsigned __int64)token->h_.h_.handler_.executor_.impl_;
  if ( !p_handler )
    goto LABEL_17;
  if ( *(_BYTE *)((p_handler >> 3) + 0x7FFF8000) )
    goto LABEL_71;
  v11 = *(__int64 (***)(void))p_handler;
  if ( *(_BYTE *)((*(_QWORD *)p_handler >> 3) + 0x7FFF8000LL) )
  {
LABEL_72:
    __asan_report_load8(v11);
LABEL_73:
    v12 = p_h;
    __asan_report_load8(p_h);
    goto LABEL_74;
  }
  p_handler = (*v11)();
LABEL_17:
  e.impl_ = (boost::asio::executor::impl_base *)p_handler;
  if ( !p_h )
    goto LABEL_21;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v12 = *(_QWORD *)p_h + 8LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8(v12);
LABEL_75:
    v13 = impl;
    __asan_report_load8(impl);
    goto LABEL_76;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_h + 8LL))(p_h);
LABEL_21:
  if ( !impl )
    goto LABEL_25;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_75;
  v13 = *(_QWORD *)impl + 8LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_load8(v13);
LABEL_77:
    __asan_report_load8(v13);
    goto LABEL_78;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)impl + 8LL))(impl);
LABEL_25:
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v25.work_, &e);
  v13 = (unsigned __int64)e.impl_;
  if ( !e.impl_ )
    goto LABEL_29;
  if ( *(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v14 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v14);
    goto LABEL_79;
  }
  (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
LABEL_29:
  v25.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                + 2);
  v25.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                   + 2);
  impl = (unsigned __int64)&v25.handler_.h_.h_;
  p_h = (unsigned __int64)&token->h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_load8(p_h);
    goto LABEL_80;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    p_M_refcount = impl;
    __asan_report_store8();
    goto LABEL_81;
  }
  v25.handler_.h_.h_.coro_._M_ptr = token->h_.h_.coro_._M_ptr;
  p_M_refcount = (unsigned __int64)&v25.handler_.h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_store8();
    goto LABEL_82;
  }
  v25.handler_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&token->h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_load8(p_M_refcount);
    goto LABEL_83;
  }
  M_pi = token->h_.h_.coro_._M_refcount._M_pi;
  token->h_.h_.coro_._M_refcount._M_pi = 0LL;
  v25.handler_.h_.h_.coro_._M_refcount._M_pi = M_pi;
  token->h_.h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&token->h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_load8(p_M_refcount);
    goto LABEL_84;
  }
  p_M_refcount = (unsigned __int64)&v25.handler_.h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_store8();
    goto LABEL_85;
  }
  v25.handler_.h_.h_.ca_ = token->h_.h_.ca_;
  p_M_refcount = (unsigned __int64)&token->h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8(p_M_refcount);
LABEL_86:
    v17 = (__int64 (**)(void))__asan_report_load8(p_M_refcount);
    goto LABEL_87;
  }
  p_M_refcount = (unsigned __int64)token->h_.h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_40;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_86;
  v17 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_87:
    v18 = (boost::asio::executor_binder<void (*)(),boost::asio::executor> *)__asan_report_load8(v17);
    goto LABEL_88;
  }
  p_M_refcount = (*v17)();
LABEL_40:
  v18 = &v25.handler_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    p_target = v18;
    __asan_report_store8();
    goto LABEL_89;
  }
  v25.handler_.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &token->h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_load8(p_target);
    goto LABEL_90;
  }
  p_target = &v25.handler_.h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_store8();
    goto LABEL_91;
  }
  v25.handler_.h_.h_.handler_.target_ = token->h_.h_.handler_.target_;
  p_target = &token->h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(p_target);
    goto LABEL_92;
  }
  p_target = &v25.handler_.h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_store8();
    goto LABEL_93;
  }
  v25.handler_.h_.h_.ready_ = token->h_.h_.ready_;
  p_target = &token->h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8(p_target);
    goto LABEL_94;
  }
  p_target = &v25.handler_.h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_store8();
    goto LABEL_95;
  }
  v25.handler_.h_.h_.ec_ = token->h_.h_.ec_;
  p_target = &token->h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_load8(p_target);
    goto LABEL_96;
  }
  p_target = &v25.handler_.h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_store8();
    goto LABEL_97;
  }
  v25.handler_.h_.h_.value_ = token->h_.h_.value_;
  p_target = &token->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_load8(p_target);
    goto LABEL_98;
  }
  v25.handler_.h_.wg1_.executor_.impl_ = token->h_.wg1_.executor_.impl_;
  token->h_.wg1_.executor_.impl_ = 0LL;
  p_target = &token->h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_98:
    __asan_report_load1(p_target);
    goto LABEL_99;
  }
  v25.handler_.h_.wg1_.owns_ = token->h_.wg1_.owns_;
  token->h_.wg1_.owns_ = 0;
  v25.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                   + 2);
  p_target = &token->h_.list_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_load8(p_target);
    goto LABEL_100;
  }
  list = token->h_.list_;
  token->h_.list_ = 0LL;
  v25.handler_.h_.list_ = list;
  v25.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                   + 2);
  p_target = &token->h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(p_target);
    goto LABEL_101;
  }
  v25.handler_.h_.s_ = token->h_.s_;
  p_target = &token->h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8(p_target);
    goto LABEL_102;
  }
  v25.handler_.h_.sr_ = token->h_.sr_;
  p_target = &token->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    __asan_report_load8(p_target);
    goto LABEL_103;
  }
  v25.handler_.wg1_.executor_.impl_ = token->wg1_.executor_.impl_;
  token->wg1_.executor_.impl_ = 0LL;
  p_target = &token->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_103:
    __asan_report_load1(p_target);
LABEL_104:
    __asan_report_load4(p_target);
    goto LABEL_105;
  }
  v25.handler_.wg1_.owns_ = token->wg1_.owns_;
  token->wg1_.owns_ = 0;
  p_target = &token->boost::asio::coroutine;
  v21 = *(_BYTE *)(((unsigned __int64)&token->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_104;
  v25.handler_.value_ = token->value_;
  v25.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                + 2);
  p_target = &token->s_;
  if ( *(_BYTE *)(((unsigned __int64)&token->s_ >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    __asan_report_load8(p_target);
    goto LABEL_106;
  }
  v25.handler_.s_ = token->s_;
  p_target = &token->sr_;
  if ( *(_BYTE *)(((unsigned __int64)&token->sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load8(p_target);
    goto LABEL_107;
  }
  v25.handler_.sr_ = token->sr_;
  p_target = &token->bytes_transferred_;
  if ( !*(_BYTE *)(((unsigned __int64)&token->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
    v25.handler_.bytes_transferred_ = token->bytes_transferred_;
    boost::asio::executor::post<boost::asio::detail::work_dispatcher<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>,std::allocator<void>>(
      ex,
      &v25,
      (const std::allocator<void> *)(v5 + 32));
    goto LABEL_108;
  }
LABEL_107:
  __asan_report_load8(p_target);
LABEL_108:
  v25.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v25.handler_.wg1_);
  v25.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                   + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v25.handler_.h_);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v25.work_);
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 70: range 0000000019B9D813-0000000019B9E06D
void __fastcall boost::asio::post<boost::asio::executor,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
        const boost::asio::executor *ex,
        boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *token,
        std::enable_if<true,void>::type *a3)
{
  unsigned __int64 impl; // rbp
  unsigned __int64 p_h; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 (__fastcall **v7)(boost::asio::executor::impl_base *); // rax
  boost::asio::executor_work_guard<boost::asio::executor> *p_wg1; // rdi
  __int64 (__fastcall **v9)(boost::asio::executor::impl_base *); // rax
  unsigned __int64 p_handler; // rdi
  __int64 (**v11)(void); // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v17)(void); // rax
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *v18; // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base *list; // rax
  char v21; // al
  __int64 v22; // rax
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+28h] [rbp-140h] BYREF
  boost::asio::detail::work_dispatcher<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > v25; // [rsp+30h] [rbp-138h] BYREF
  char v26[120]; // [rsp+F0h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v22 = __asan_stack_malloc_0(64LL);
    if ( v22 )
      v5 = v22;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 1 8 alloc:51";
  *(_QWORD *)(v5 + 16) = boost::asio::post<boost::asio::executor,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&token->wg1_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&token->wg1_);
LABEL_65:
    v7 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(impl);
    goto LABEL_66;
  }
  impl = (unsigned __int64)token->wg1_.executor_.impl_;
  if ( !impl )
    goto LABEL_7;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_65;
  v7 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))impl;
  if ( *(_BYTE *)((*(_QWORD *)impl >> 3) + 0x7FFF8000LL) )
  {
LABEL_66:
    p_wg1 = (boost::asio::executor_work_guard<boost::asio::executor> *)v7;
    __asan_report_load8(v7);
    goto LABEL_67;
  }
  impl = (*v7)(token->wg1_.executor_.impl_);
LABEL_7:
  p_wg1 = &token->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_wg1);
LABEL_68:
    v9 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(p_h);
    goto LABEL_69;
  }
  p_h = (unsigned __int64)token->h_.wg1_.executor_.impl_;
  if ( !p_h )
    goto LABEL_12;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_68;
  v9 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))p_h;
  if ( *(_BYTE *)((*(_QWORD *)p_h >> 3) + 0x7FFF8000LL) )
  {
LABEL_69:
    p_handler = (unsigned __int64)v9;
    __asan_report_load8(v9);
    goto LABEL_70;
  }
  p_h = (*v9)(token->h_.wg1_.executor_.impl_);
LABEL_12:
  p_handler = (unsigned __int64)&token->h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8(p_handler);
LABEL_71:
    v11 = (__int64 (**)(void))__asan_report_load8(p_handler);
    goto LABEL_72;
  }
  p_handler = (unsigned __int64)token->h_.h_.handler_.executor_.impl_;
  if ( !p_handler )
    goto LABEL_17;
  if ( *(_BYTE *)((p_handler >> 3) + 0x7FFF8000) )
    goto LABEL_71;
  v11 = *(__int64 (***)(void))p_handler;
  if ( *(_BYTE *)((*(_QWORD *)p_handler >> 3) + 0x7FFF8000LL) )
  {
LABEL_72:
    __asan_report_load8(v11);
LABEL_73:
    v12 = p_h;
    __asan_report_load8(p_h);
    goto LABEL_74;
  }
  p_handler = (*v11)();
LABEL_17:
  e.impl_ = (boost::asio::executor::impl_base *)p_handler;
  if ( !p_h )
    goto LABEL_21;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  v12 = *(_QWORD *)p_h + 8LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8(v12);
LABEL_75:
    v13 = impl;
    __asan_report_load8(impl);
    goto LABEL_76;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_h + 8LL))(p_h);
LABEL_21:
  if ( !impl )
    goto LABEL_25;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_75;
  v13 = *(_QWORD *)impl + 8LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_load8(v13);
LABEL_77:
    __asan_report_load8(v13);
    goto LABEL_78;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)impl + 8LL))(impl);
LABEL_25:
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v25.work_, &e);
  v13 = (unsigned __int64)e.impl_;
  if ( !e.impl_ )
    goto LABEL_29;
  if ( *(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v14 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_load8(v14);
    goto LABEL_79;
  }
  (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
LABEL_29:
  v25.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                + 2);
  v25.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                   + 2);
  impl = (unsigned __int64)&v25.handler_.h_.h_;
  p_h = (unsigned __int64)&token->h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_load8(p_h);
    goto LABEL_80;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    p_M_refcount = impl;
    __asan_report_store8();
    goto LABEL_81;
  }
  v25.handler_.h_.h_.coro_._M_ptr = token->h_.h_.coro_._M_ptr;
  p_M_refcount = (unsigned __int64)&v25.handler_.h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_store8();
    goto LABEL_82;
  }
  v25.handler_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&token->h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_load8(p_M_refcount);
    goto LABEL_83;
  }
  M_pi = token->h_.h_.coro_._M_refcount._M_pi;
  token->h_.h_.coro_._M_refcount._M_pi = 0LL;
  v25.handler_.h_.h_.coro_._M_refcount._M_pi = M_pi;
  token->h_.h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&token->h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_load8(p_M_refcount);
    goto LABEL_84;
  }
  p_M_refcount = (unsigned __int64)&v25.handler_.h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_store8();
    goto LABEL_85;
  }
  v25.handler_.h_.h_.ca_ = token->h_.h_.ca_;
  p_M_refcount = (unsigned __int64)&token->h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8(p_M_refcount);
LABEL_86:
    v17 = (__int64 (**)(void))__asan_report_load8(p_M_refcount);
    goto LABEL_87;
  }
  p_M_refcount = (unsigned __int64)token->h_.h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_40;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_86;
  v17 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_87:
    v18 = (boost::asio::executor_binder<void (*)(),boost::asio::executor> *)__asan_report_load8(v17);
    goto LABEL_88;
  }
  p_M_refcount = (*v17)();
LABEL_40:
  v18 = &v25.handler_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    p_target = v18;
    __asan_report_store8();
    goto LABEL_89;
  }
  v25.handler_.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &token->h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_load8(p_target);
    goto LABEL_90;
  }
  p_target = &v25.handler_.h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_store8();
    goto LABEL_91;
  }
  v25.handler_.h_.h_.handler_.target_ = token->h_.h_.handler_.target_;
  p_target = &token->h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(p_target);
    goto LABEL_92;
  }
  p_target = &v25.handler_.h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_store8();
    goto LABEL_93;
  }
  v25.handler_.h_.h_.ready_ = token->h_.h_.ready_;
  p_target = &token->h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8(p_target);
    goto LABEL_94;
  }
  p_target = &v25.handler_.h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_store8();
    goto LABEL_95;
  }
  v25.handler_.h_.h_.ec_ = token->h_.h_.ec_;
  p_target = &token->h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_load8(p_target);
    goto LABEL_96;
  }
  p_target = &v25.handler_.h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v25.handler_.h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_store8();
    goto LABEL_97;
  }
  v25.handler_.h_.h_.value_ = token->h_.h_.value_;
  p_target = &token->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_load8(p_target);
    goto LABEL_98;
  }
  v25.handler_.h_.wg1_.executor_.impl_ = token->h_.wg1_.executor_.impl_;
  token->h_.wg1_.executor_.impl_ = 0LL;
  p_target = &token->h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_98:
    __asan_report_load1(p_target);
    goto LABEL_99;
  }
  v25.handler_.h_.wg1_.owns_ = token->h_.wg1_.owns_;
  token->h_.wg1_.owns_ = 0;
  v25.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                   + 2);
  p_target = &token->h_.list_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_load8(p_target);
    goto LABEL_100;
  }
  list = token->h_.list_;
  token->h_.list_ = 0LL;
  v25.handler_.h_.list_ = list;
  v25.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                   + 2);
  p_target = &token->h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(p_target);
    goto LABEL_101;
  }
  v25.handler_.h_.s_ = token->h_.s_;
  p_target = &token->h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&token->h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8(p_target);
    goto LABEL_102;
  }
  v25.handler_.h_.sr_ = token->h_.sr_;
  p_target = &token->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&token->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    __asan_report_load8(p_target);
    goto LABEL_103;
  }
  v25.handler_.wg1_.executor_.impl_ = token->wg1_.executor_.impl_;
  token->wg1_.executor_.impl_ = 0LL;
  p_target = &token->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&token->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_103:
    __asan_report_load1(p_target);
LABEL_104:
    __asan_report_load4(p_target);
    goto LABEL_105;
  }
  v25.handler_.wg1_.owns_ = token->wg1_.owns_;
  token->wg1_.owns_ = 0;
  p_target = &token->boost::asio::coroutine;
  v21 = *(_BYTE *)(((unsigned __int64)&token->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_104;
  v25.handler_.value_ = token->value_;
  v25.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                + 2);
  p_target = &token->s_;
  if ( *(_BYTE *)(((unsigned __int64)&token->s_ >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    __asan_report_load8(p_target);
    goto LABEL_106;
  }
  v25.handler_.s_ = token->s_;
  p_target = &token->sr_;
  if ( *(_BYTE *)(((unsigned __int64)&token->sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load8(p_target);
    goto LABEL_107;
  }
  v25.handler_.sr_ = token->sr_;
  p_target = &token->bytes_transferred_;
  if ( !*(_BYTE *)(((unsigned __int64)&token->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
    v25.handler_.bytes_transferred_ = token->bytes_transferred_;
    boost::asio::executor::post<boost::asio::detail::work_dispatcher<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>,std::allocator<void>>(
      ex,
      &v25,
      (const std::allocator<void> *)(v5 + 32));
    goto LABEL_108;
  }
LABEL_107:
  __asan_report_load8(p_target);
LABEL_108:
  v25.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v25.handler_.wg1_);
  v25.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                   + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v25.handler_.h_);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v25.work_);
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
