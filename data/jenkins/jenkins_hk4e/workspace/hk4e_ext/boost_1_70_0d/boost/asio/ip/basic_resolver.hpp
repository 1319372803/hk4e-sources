// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/basic_resolver.hpp

// Line 731: range 000000000CC4F41C-000000000CC4FE46
boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >::return_type *__fastcall boost::asio::ip::basic_resolver<boost::asio::ip::tcp,boost::asio::executor>::async_resolve<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
        boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >::return_type *retstr,
        boost::asio::ip::basic_resolver<boost::asio::ip::tcp,boost::asio::executor> *const this,
        std::string_view host,
        std::string_view service,
        boost::asio::ip::resolver_base::flags resolve_flags,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *handler)
{
  std::runtime_error *exception; // rbp
  unsigned __int64 v8; // r14
  _DWORD *v9; // r12
  std::forward_iterator_tag v10; // cl
  __int64 v11; // rax
  std::forward_iterator_tag v12; // cl
  std::forward_iterator_tag v13; // cl
  unsigned __int64 p_M_refcount; // rdi
  __int64 (**v15)(void); // rax
  boost::system::error_code **p_target; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v18; // cl
  signed __int32 v19; // eax
  signed __int32 v20; // eax
  int v21; // ett
  bool v22; // dl
  std::__weak_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  unsigned __int64 v24; // rdi
  char v25; // dl
  std::string::pointer M_p; // rdi
  boost::asio::executor::impl_base *impl; // rdi
  int (**vptr_impl_base)(...); // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v32; // rax
  char *v33; // rdi
  signed __int8 v34; // dl
  __int64 v35; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v36; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v37; // rdi
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v40; // rdi
  char *v41; // rdi
  char *v42; // rdi
  boost::coroutines2::detail::pull_coroutine<void>::control_block *const *v44; // rdi
  __int64 v45; // rax
  char *v46; // rdi
  char v47; // al
  struct _Unwind_Exception *v48; // rax
  struct _Unwind_Exception *v49; // rbx
  std::string v52; // [rsp+30h] [rbp-248h] BYREF
  std::string v53; // [rsp+50h] [rbp-228h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v54; // [rsp+70h] [rbp-208h] BYREF
  char v55[472]; // [rsp+A0h] [rbp-1D8h] BYREF

  exception = (std::runtime_error *)handler;
  v8 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_3(416LL);
    if ( v11 )
      v8 = v11;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "3 48 4 7 __count 64 112 5 q:736 208 136 10 completion";
  *(_QWORD *)(v8 + 16) = boost::asio::ip::basic_resolver<boost::asio::ip::tcp,boost::asio::executor>::async_resolve<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>;
  v9 = (_DWORD *)(v8 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862725] = -219021312;
  v9[536862726] = 62194;
  v9[536862730] = -218103808;
  v9[536862731] = -202116109;
  v9[536862732] = -202116109;
  v53._M_dataplus._M_p = v53._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(
    &v53,
    service._M_str,
    &service._M_str[service._M_len],
    (std::forward_iterator_tag)host._M_str);
  v52._M_dataplus._M_p = v52._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v52, host._M_str, &host._M_str[host._M_len], v10);
  *(_QWORD *)(v8 + 64) = 0LL;
  *(_QWORD *)(v8 + 72) = 0LL;
  *(_QWORD *)(v8 + 80) = 0LL;
  *(_QWORD *)(v8 + 88) = 0LL;
  *(_QWORD *)(v8 + 96) = 0LL;
  *(_QWORD *)(v8 + 104) = 0LL;
  *(_QWORD *)(v8 + 112) = v8 + 128;
  std::string::_M_construct<char *>(
    (std::string *const)(v8 + 112),
    v52._M_dataplus._M_p,
    &v52._M_dataplus._M_p[v52._M_string_length],
    v12);
  *(_QWORD *)(v8 + 144) = v8 + 160;
  std::string::_M_construct<char *>(
    (std::string *const)(v8 + 144),
    v53._M_dataplus._M_p,
    &v53._M_dataplus._M_p[v53._M_string_length],
    v13);
  *(_DWORD *)(v8 + 64) = resolve_flags;
  *(_DWORD *)(v8 + 68) = 0;
  *(_DWORD *)(v8 + 72) = 1;
  *(_DWORD *)(v8 + 76) = 6;
  *(_DWORD *)(v8 + 80) = 0;
  *(_QWORD *)(v8 + 96) = 0LL;
  *(_QWORD *)(v8 + 88) = 0LL;
  *(_QWORD *)(v8 + 104) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v52._M_dataplus._M_p != &v52._anon_0 )
    operator delete(v52._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53._M_dataplus._M_p != &v53._anon_0 )
    operator delete(v53._M_dataplus._M_p);
  if ( *(_BYTE *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = (unsigned __int64)handler;
    __asan_report_load8(handler);
    goto LABEL_40;
  }
  v54.coro_._M_ptr = handler->coro_._M_ptr;
  p_M_refcount = (unsigned __int64)&handler->coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&handler->coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(p_M_refcount);
    goto LABEL_41;
  }
  v54.coro_._M_refcount._M_pi = handler->coro_._M_refcount._M_pi;
  handler->coro_._M_refcount._M_pi = 0LL;
  handler->coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&handler->ca_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_M_refcount);
    goto LABEL_42;
  }
  v54.ca_ = handler->ca_;
  p_M_refcount = (unsigned __int64)&handler->handler_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_M_refcount);
LABEL_43:
    __asan_report_load8(p_M_refcount);
    goto LABEL_44;
  }
  p_M_refcount = (unsigned __int64)handler->handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_17;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_43;
  v15 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_44:
    p_target = (boost::system::error_code **)v15;
    __asan_report_load8(v15);
    goto LABEL_45;
  }
  p_M_refcount = (*v15)();
LABEL_17:
  v54.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = (boost::system::error_code **)&handler->handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_load8(p_target);
    goto LABEL_46;
  }
  v54.handler_.target_ = handler->handler_.target_;
  p_target = &handler->ec_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(p_target);
    goto LABEL_47;
  }
  v54.ec_ = handler->ec_;
  M_pi = v54.coro_._M_refcount._M_pi;
  *(_QWORD *)(v8 + 216) = v54.coro_._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_29;
  p_target = (boost::system::error_code **)&M_pi->_M_use_count;
  v18 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v18 || !v18 )
  {
    *(_DWORD *)(v8 + 48) = M_pi->_M_use_count;
    while ( 1 )
    {
      v19 = *(_DWORD *)(v8 + 48);
      if ( !v19 )
        goto LABEL_48;
      v21 = *(_DWORD *)(v8 + 48);
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)p_target, v19 + 1, v19);
      v22 = v21 == v20;
      if ( v21 != v20 )
        *(_DWORD *)(v8 + 48) = v20;
      if ( v22 )
        goto LABEL_27;
    }
  }
LABEL_47:
  __asan_report_load4(p_target);
LABEL_48:
  v22 = 0;
LABEL_27:
  if ( !v22 )
    *(_QWORD *)(v8 + 216) = 0LL;
LABEL_29:
  M_ptr = *(std::__weak_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::element_type **)(v8 + 216);
  if ( !M_ptr )
    goto LABEL_51;
  v24 = (unsigned __int64)&M_ptr[1];
  v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
  if ( (char)((v24 & 7) + 3) >= v25 && v25 )
  {
    __asan_report_load4(v24);
  }
  else if ( *(_DWORD *)v24 )
  {
    M_ptr = v54.coro_._M_ptr;
    goto LABEL_51;
  }
  M_ptr = 0LL;
LABEL_51:
  *(_QWORD *)(v8 + 208) = M_ptr;
  *(_QWORD *)(v8 + 224) = v54.ca_;
  impl = v54.handler_.executor_.impl_;
  if ( !v54.handler_.executor_.impl_ )
    goto LABEL_55;
  if ( *(_BYTE *)(((unsigned __int64)v54.handler_.executor_.impl_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v54.handler_.executor_.impl_);
  }
  else
  {
    vptr_impl_base = v54.handler_.executor_.impl_->_vptr_impl_base;
    if ( !*(_BYTE *)(((unsigned __int64)v54.handler_.executor_.impl_->_vptr_impl_base >> 3) + 0x7FFF8000) )
    {
      impl = (boost::asio::executor::impl_base *)((__int64 (*)(void))*vptr_impl_base)();
LABEL_55:
      *(_QWORD *)(v8 + 232) = impl;
      *(_QWORD *)(v8 + 240) = v54.handler_.target_;
      *(_QWORD *)(v8 + 248) = 0LL;
      *(_QWORD *)(v8 + 256) = v54.ec_;
      *(_QWORD *)(v8 + 264) = 0LL;
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v54);
      *(_QWORD *)(v8 + 272) = v8 + 208;
      *(_QWORD *)(v8 + 280) = *(_QWORD *)(v8 + 224);
      *(_QWORD *)(v8 + 288) = 2LL;
      *(_DWORD *)(v8 + 304) = 0;
      *(_BYTE *)(v8 + 308) = 0;
      *(_QWORD *)(v8 + 312) = &boost::system::detail::cat_holder<void>::system_category_instance;
      *(_QWORD *)(v8 + 320) = 0LL;
      *(_QWORD *)(v8 + 328) = 0LL;
      *(_QWORD *)(v8 + 336) = 0LL;
      *(_QWORD *)(v8 + 248) = v8 + 288;
      v29 = *(_QWORD *)(v8 + 256);
      *(_QWORD *)(v8 + 296) = v29;
      if ( v29 )
        goto LABEL_56;
      goto LABEL_60;
    }
  }
  __asan_report_load8(vptr_impl_base);
LABEL_60:
  *(_QWORD *)(v8 + 256) = v8 + 304;
LABEL_56:
  *(_QWORD *)(v8 + 264) = v8 + 320;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  else
    boost::asio::detail::resolver_service<boost::asio::ip::tcp>::async_resolve<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
      this->impl_.service_,
      &this->impl_.implementation_,
      (const boost::asio::detail::resolver_service<boost::asio::ip::tcp>::query_type *)(v8 + 64),
      (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> > *)(v8 + 208),
      &this->impl_.implementation_executor_);
  v30 = *(_QWORD *)(v8 + 272);
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
  {
    v31 = __asan_report_store8();
    goto LABEL_89;
  }
  *(_QWORD *)v30 = 0LL;
  v31 = v30 + 8;
  if ( *(_BYTE *)(((v30 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    v33 = (char *)v31;
    __asan_report_load8(v31);
LABEL_90:
    v35 = 8LL;
    __asan_report_store_n(v33, 8LL);
    goto LABEL_91;
  }
  v32 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v30 + 8);
  *(_QWORD *)(v30 + 8) = 0LL;
  if ( v32 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v32);
  v33 = (char *)(v8 + 288);
  v34 = *(_BYTE *)(((v8 + 288) >> 3) + 0x7FFF8000);
  v35 = ((_BYTE)v8 - 96 + 0x80) & 7;
  LOBYTE(v35) = v34 <= (signed __int8)v35;
  if ( ((v34 != 0) & (unsigned __int8)v35) != 0
    || *(_BYTE *)(((v8 + 295) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v8 + 295) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v8 + 39) & 7) )
  {
    goto LABEL_90;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 288), 0xFFFFFFFFFFFFFFFFLL) == 1 )
    goto LABEL_69;
LABEL_91:
  v44 = *(boost::coroutines2::detail::pull_coroutine<void>::control_block *const **)(v8 + 280);
  if ( !*(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
  {
    boost::coroutines2::detail::pull_coroutine<void>::control_block::resume(*v44);
LABEL_69:
    if ( *(_QWORD *)(v8 + 296) )
      goto LABEL_70;
    goto LABEL_94;
  }
  __asan_report_load8(v44);
LABEL_94:
  if ( *(_DWORD *)(v8 + 304) )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x40uLL);
    v9 = *(_DWORD **)(v8 + 304);
    retstr = *(boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >::return_type **)(v8 + 312);
    v35 = (__int64)byte_1A20F4E0;
    std::runtime_error::runtime_error(exception, byte_1A20F4E0);
    goto LABEL_99;
  }
LABEL_70:
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_97;
  }
  retstr->values_._M_ptr = *(std::__shared_ptr<std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>,(__gnu_cxx::_Lock_policy)2>::element_type **)(v8 + 320);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->values_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_store8();
    goto LABEL_98;
  }
  retstr->values_._M_refcount._M_pi = 0LL;
  v36 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v8 + 328);
  *(_QWORD *)(v8 + 328) = 0LL;
  retstr->values_._M_refcount._M_pi = v36;
  *(_QWORD *)(v8 + 320) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->index_ >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_store8();
LABEL_99:
    if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)exception = &`vtable for'boost::system::system_error + 2;
    if ( *(_WORD *)((((unsigned __int64)exception + 16) >> 3) + 0x7FFF8000) )
      __asan_report_store16((char *)exception + 16, v35);
    *((_QWORD *)exception + 2) = v9;
    *((_QWORD *)exception + 3) = retstr;
    v45 = (__int64)exception + 48;
    if ( *(_BYTE *)((((unsigned __int64)exception + 32) >> 3) + 0x7FFF8000) )
      v45 = __asan_report_store8();
    *((_QWORD *)exception + 4) = v45;
    if ( *(_BYTE *)((((unsigned __int64)exception + 40) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *((_QWORD *)exception + 5) = 0LL;
    v46 = (char *)exception + 48;
    v47 = *(_BYTE *)((((unsigned __int64)exception + 48) >> 3) + 0x7FFF8000);
    if ( v47 <= (((unsigned __int8)exception + 48) & 7) && v47 )
      __asan_report_store1(v46);
    *((_BYTE *)exception + 48) = 0;
    __asan_handle_no_return(v46);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'boost::system::system_error,
      (void (__fastcall *)(void *))boost::system::system_error::~system_error);
  }
  retstr->index_ = *(_QWORD *)(v8 + 336);
  *(_QWORD *)(v8 + 336) = 0LL;
  v37 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v8 + 328);
  if ( v37 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v37);
  v38 = *(_QWORD *)(v8 + 232);
  if ( v38 )
  {
    if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v38);
    }
    else
    {
      v39 = *(_QWORD *)v38 + 8LL;
      if ( !*(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v38 + 8LL))();
        goto LABEL_79;
      }
    }
    __asan_report_load8(v39);
    v49 = v48;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v52._M_dataplus._M_p != &v52._anon_0 )
      operator delete(v52._M_dataplus._M_p);
    M_p = v53._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53._M_dataplus._M_p != &v53._anon_0 )
      operator delete(v53._M_dataplus._M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v49);
  }
LABEL_79:
  v40 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v8 + 216);
  if ( v40 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v40);
  v41 = *(char **)(v8 + 144);
  if ( v41 != (char *)(v8 + 160) )
    operator delete(v41);
  v42 = *(char **)(v8 + 112);
  if ( v42 != (char *)(v8 + 128) )
    operator delete(v42);
  if ( v55 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8030) = -168430091;
  }
  return retstr;
};
