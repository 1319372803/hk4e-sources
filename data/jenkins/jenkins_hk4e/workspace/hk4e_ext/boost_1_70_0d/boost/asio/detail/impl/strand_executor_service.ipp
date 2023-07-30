// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/strand_executor_service.ipp

// Line 36: range 0000000014ED4AAA-0000000014ED4E1A
void __fastcall boost::asio::detail::strand_executor_service::shutdown(
        boost::asio::detail::strand_executor_service *const this)
{
  boost::asio::detail::strand_executor_service::strand_impl **i; // rbx
  unsigned __int64 v2; // r12
  _DWORD *v3; // r13
  boost::asio::detail::strand_executor_service::strand_impl **p_impl_list; // rdi
  __int64 v5; // rax
  const boost::asio::execution_context::id *v6; // rdx
  unsigned __int64 v7; // rax
  boost::asio::execution_context::service *v8; // rdx
  boost::asio::detail::mutex *v9; // rdi
  char v10; // al
  unsigned __int64 v11; // rax
  void *v12; // rdi
  void (__fastcall *v13)(_QWORD, unsigned __int64, int *, _QWORD); // rax
  unsigned __int64 v14; // rsi
  int v15; // [rsp+0h] [rbp-A8h] BYREF
  char v16; // [rsp+4h] [rbp-A4h]
  const boost::system::detail::system_error_category *v17; // [rsp+8h] [rbp-A0h]
  char v18[152]; // [rsp+10h] [rbp-98h] BYREF

  i = (boost::asio::detail::strand_executor_service::strand_impl **)this;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 6 ops:37 64 16 7 lock:39";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::strand_executor_service::shutdown;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 64) = &this->mutex_;
  pthread_mutex_lock(&this->mutex_.mutex_);
  *(_BYTE *)(v2 + 72) = 1;
  p_impl_list = &this->impl_list_;
  if ( *(_BYTE *)(((unsigned __int64)(i + 204) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_impl_list);
    goto LABEL_7;
  }
  for ( i = (boost::asio::detail::strand_executor_service::strand_impl **)i[204];
        i;
        i = (boost::asio::detail::strand_executor_service::strand_impl **)i[6] )
  {
    p_impl_list = i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(p_impl_list);
LABEL_8:
      __asan_report_store1(p_impl_list);
LABEL_9:
      __asan_report_load8(p_impl_list);
      goto LABEL_10;
    }
    pthread_mutex_lock((pthread_mutex_t *)*i);
    p_impl_list = (boost::asio::detail::strand_executor_service::strand_impl **)((char *)i + 9);
    v10 = *(_BYTE *)((((unsigned __int64)i + 9) >> 3) + 0x7FFF8000);
    if ( v10 <= (((unsigned __int8)i + 9) & 7) && v10 )
      goto LABEL_8;
    *((_BYTE *)i + 9) = 1;
    p_impl_list = i + 2;
    if ( *(_BYTE *)(((unsigned __int64)(i + 2) >> 3) + 0x7FFF8000) )
      goto LABEL_9;
    v6 = (const boost::asio::execution_context::id *)i[2];
    if ( !v6 )
      goto LABEL_31;
    v11 = *(_QWORD *)(v2 + 40);
    if ( !v11 )
      goto LABEL_11;
    if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)v11 = v6;
      goto LABEL_29;
    }
LABEL_10:
    __asan_report_store8();
LABEL_11:
    *(_QWORD *)(v2 + 32) = v6;
LABEL_29:
    v12 = i + 3;
    if ( *(_BYTE *)(((unsigned __int64)(i + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v12);
LABEL_13:
      v7 = __asan_report_load8(v12);
      goto LABEL_14;
    }
    *(_QWORD *)(v2 + 40) = i[3];
    i[2] = 0LL;
    i[3] = 0LL;
LABEL_31:
    v12 = i + 4;
    if ( *(_BYTE *)(((unsigned __int64)(i + 4) >> 3) + 0x7FFF8000) )
      goto LABEL_13;
    v8 = (boost::asio::execution_context::service *)i[4];
    if ( !v8 )
      goto LABEL_17;
    v7 = *(_QWORD *)(v2 + 40);
    if ( !v7 )
      goto LABEL_36;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
LABEL_36:
      *(_QWORD *)(v2 + 32) = v8;
      goto LABEL_15;
    }
LABEL_14:
    *(_QWORD *)v7 = v8;
LABEL_15:
    v9 = (boost::asio::detail::mutex *)(i + 5);
    if ( *(_BYTE *)(((unsigned __int64)(i + 5) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v9);
LABEL_38:
      __asan_report_load8(v9);
LABEL_39:
      __asan_report_load8(v9);
      break;
    }
    *(_QWORD *)(v2 + 40) = i[5];
    i[4] = 0LL;
    i[5] = 0LL;
LABEL_17:
    v9 = (boost::asio::detail::mutex *)i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
      goto LABEL_38;
    pthread_mutex_unlock((pthread_mutex_t *)*i);
    v9 = (boost::asio::detail::mutex *)(i + 6);
    if ( *(_BYTE *)(((unsigned __int64)(i + 6) >> 3) + 0x7FFF8000) )
      goto LABEL_39;
  }
  if ( *(_BYTE *)(v2 + 72) )
    pthread_mutex_unlock(*(pthread_mutex_t **)(v2 + 64));
  while ( 1 )
  {
    v14 = *(_QWORD *)(v2 + 32);
    if ( !v14 )
      break;
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(*(_QWORD *)(v2 + 32));
    }
    else
    {
      *(_QWORD *)(v2 + 32) = *(_QWORD *)v14;
      *(_QWORD *)v14 = 0LL;
      if ( *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v14 + 8);
        break;
      }
    }
    v13 = *(void (__fastcall **)(_QWORD, unsigned __int64, int *, _QWORD))(v14 + 8);
    v15 = 0;
    v16 = 0;
    v17 = &boost::system::detail::cat_holder<void>::system_category_instance;
    v13(0LL, v14, &v15, 0LL);
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 98: range 0000000014ED5BB8-0000000014ED72A8
bool __fastcall boost::asio::detail::strand_executor_service::enqueue(
        const boost::asio::detail::strand_executor_service::implementation_type *impl,
        boost::asio::detail::scheduler_operation *op)
{
  boost::asio::detail::scheduler_operation *v2; // rbp
  char v3; // r12
  const boost::asio::detail::strand_executor_service::implementation_type *v4; // rbx
  unsigned __int64 M_ptr; // rdi
  unsigned __int64 p_shutdown; // rax
  char v7; // dl
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  bool result; // al
  pthread_mutex_t **v12; // rdi
  std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2> *v13; // rax
  boost::asio::detail::scheduler_operation *p_M_refcount; // rdi
  unsigned __int64 M_pi; // rdi
  std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2> *v16; // rdi
  int v17; // [rsp+0h] [rbp-28h] BYREF
  char v18; // [rsp+4h] [rbp-24h]
  const boost::system::detail::system_error_category *v19; // [rsp+8h] [rbp-20h]

  v4 = impl;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_18;
  }
  v2 = op;
  impl = (const boost::asio::detail::strand_executor_service::implementation_type *)impl->_M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(impl);
    goto LABEL_19;
  }
  pthread_mutex_lock((pthread_mutex_t *)impl->_M_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    p_shutdown = __asan_report_load8(v4);
LABEL_20:
    M_ptr = p_shutdown;
    __asan_report_load1(p_shutdown);
    goto LABEL_21;
  }
  M_ptr = (unsigned __int64)v4->_M_ptr;
  p_shutdown = (unsigned __int64)&v4->_M_ptr->shutdown_;
  v7 = *(_BYTE *)((p_shutdown >> 3) + 0x7FFF8000);
  if ( v7 <= ((LOBYTE(v4->_M_ptr) + 9) & 7) && v7 )
    goto LABEL_20;
  v3 = *(_BYTE *)(M_ptr + 9);
  if ( v3 )
  {
LABEL_21:
    if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_ptr);
    }
    else
    {
      pthread_mutex_unlock(*(pthread_mutex_t **)M_ptr);
      M_ptr = (unsigned __int64)&v2->func_;
      if ( !*(_BYTE *)(((unsigned __int64)&v2->func_ >> 3) + 0x7FFF8000) )
      {
        v17 = 0;
        v18 = 0;
        v19 = &boost::system::detail::cat_holder<void>::system_category_instance;
        v2->func_(0LL, v2, (const boost::system::error_code *)&v17, 0LL);
        return 0;
      }
    }
    __asan_report_load8(M_ptr);
    goto LABEL_26;
  }
  v8 = M_ptr + 8;
  if ( *(char *)(((M_ptr + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_26:
    __asan_report_load1(v8);
LABEL_27:
    __asan_report_store8();
    goto LABEL_28;
  }
  if ( !*(_BYTE *)(M_ptr + 8) )
    goto LABEL_34;
  if ( *(_BYTE *)(((unsigned __int64)op >> 3) + 0x7FFF8000) )
    goto LABEL_27;
  op->next_ = 0LL;
  v9 = M_ptr + 24;
  if ( *(_BYTE *)(((M_ptr + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    v10 = __asan_report_load8(v9);
    goto LABEL_29;
  }
  v10 = *(_QWORD *)(M_ptr + 24);
  if ( !v10 )
    goto LABEL_30;
  if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)v10 = op;
    *(_QWORD *)(M_ptr + 24) = op;
    goto LABEL_14;
  }
LABEL_29:
  M_ptr = v10;
  __asan_report_store8();
LABEL_30:
  *(_QWORD *)(M_ptr + 24) = v2;
  if ( !*(_BYTE *)(((M_ptr + 16) >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(M_ptr + 16) = v2;
LABEL_14:
    M_ptr = (unsigned __int64)v4->_M_ptr;
    if ( !*(_BYTE *)(((unsigned __int64)v4->_M_ptr >> 3) + 0x7FFF8000) )
    {
      pthread_mutex_unlock(*(pthread_mutex_t **)M_ptr);
      return v3;
    }
    goto LABEL_33;
  }
  M_ptr += 16LL;
  __asan_report_store8();
LABEL_33:
  __asan_report_load8(M_ptr);
LABEL_34:
  *(_BYTE *)(M_ptr + 8) = 1;
  v12 = (pthread_mutex_t **)v4->_M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)v4->_M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v12);
    goto LABEL_43;
  }
  pthread_mutex_unlock(*v12);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(v4);
    goto LABEL_44;
  }
  v13 = (std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2> *)v4->_M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    p_M_refcount = v2;
    __asan_report_store8();
    goto LABEL_45;
  }
  v2->next_ = 0LL;
  p_M_refcount = (boost::asio::detail::scheduler_operation *)&v13[2]._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v13[2]._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_load8(p_M_refcount);
    goto LABEL_46;
  }
  M_pi = (unsigned __int64)v13[2]._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_47;
  if ( !*(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)M_pi = v2;
    v13[2]._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v2;
    return 1;
  }
LABEL_46:
  __asan_report_store8();
LABEL_47:
  v13[2]._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v2;
  v16 = v13 + 2;
  if ( !*(_BYTE *)(((unsigned __int64)&v13[2] >> 3) + 0x7FFF8000) )
  {
    v13[2]._M_ptr = (std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2>::element_type *)v2;
    return 1;
  }
  __asan_report_store8();
  std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    v16,
    (const std::__shared_ptr<common::minet::AServerSession,(__gnu_cxx::_Lock_policy)2> *)op);
  return result;
};
