// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/strand_executor_service.hpp

// Line 31: range 0000000014ED908A-0000000014ED9430
void __fastcall boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker(
        boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> *const this)
{
  boost::asio::io_context::impl_type *impl; // r15
  unsigned __int64 v3; // rbx
  _DWORD *v4; // r12
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_state; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  __int64 v7; // rax
  boost::asio::executor_work_guard<const boost::asio::io_context::executor_type> *p_work; // rdi
  boost::asio::io_context *io_context; // rax
  bool *p_stopped; // rdi
  __int64 v11; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *task; // rax
  char v13; // cl
  char v14; // dl
  pthread_cond_t *p_cond; // rdi
  _BYTE v16[152]; // [rsp+0h] [rbp-98h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v3 = v7;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 2 ev 64 16 4 lock";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->work_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&this->work_.owns_);
  }
  else if ( !this->work_.owns_ )
  {
    goto LABEL_4;
  }
  p_work = &this->work_;
  if ( *(_BYTE *)(((unsigned __int64)&this->work_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_work);
    goto LABEL_34;
  }
  io_context = this->work_.executor_.io_context_;
  p_work = (boost::asio::executor_work_guard<const boost::asio::io_context::executor_type> *)&io_context->impl_;
  if ( *(_BYTE *)(((unsigned __int64)&io_context->impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_work);
    goto LABEL_35;
  }
  impl = io_context->impl_;
  p_work = (boost::asio::executor_work_guard<const boost::asio::io_context::executor_type> *)&impl->outstanding_work_;
  if ( *(_BYTE *)(((unsigned __int64)&impl->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
LABEL_36:
    __asan_report_load1(p_work);
    goto LABEL_37;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)p_work, 0xFFFFFFFFFFFFFFFFLL) != 1 )
    goto LABEL_4;
  *(_QWORD *)(v3 + 64) = &impl->mutex_;
  p_work = (boost::asio::executor_work_guard<const boost::asio::io_context::executor_type> *)&impl->mutex_.enabled_;
  if ( *(char *)(((unsigned __int64)&impl->mutex_.enabled_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_36;
  if ( !impl->mutex_.enabled_ )
  {
    *(_BYTE *)(v3 + 72) = 0;
    goto LABEL_19;
  }
LABEL_37:
  pthread_mutex_lock(&impl->mutex_.mutex_.mutex_);
  *(_BYTE *)(v3 + 72) = 1;
LABEL_19:
  p_stopped = &impl->stopped_;
  if ( *(char *)(((unsigned __int64)&impl->stopped_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(p_stopped);
  }
  else
  {
    impl->stopped_ = 1;
    v11 = *(_QWORD *)(v3 + 64);
    p_stopped = (bool *)(v11 + 48);
    if ( *(char *)(((unsigned __int64)(v11 + 48) >> 3) + 0x7FFF8000) >= 0 )
    {
      if ( !*(_BYTE *)(v11 + 48) )
        goto LABEL_22;
      goto LABEL_40;
    }
  }
  __asan_report_load1(p_stopped);
LABEL_40:
  p_cond = &impl->wakeup_event_.event_.cond_;
  if ( !*(_BYTE *)(v3 + 72) )
  {
    __asan_handle_no_return(p_cond);
    __assert_fail(
      "lock.locked()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/asio/detail/posix_event.hpp",
      0x38u,
      "void boost::asio::detail::posix_event::signal_all(Lock&) [with Lock = boost::asio::detail::conditionally_enabled_m"
      "utex::scoped_lock]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&impl->wakeup_event_.event_.state_ >> 3) + 0x7FFF8000) )
  {
    p_state = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&impl->wakeup_event_.event_.state_;
    __asan_report_load8(&impl->wakeup_event_.event_.state_);
    goto LABEL_45;
  }
  impl->wakeup_event_.event_.state_ |= 1uLL;
  pthread_cond_broadcast(p_cond);
LABEL_22:
  p_state = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&impl->task_interrupted_;
  if ( *(char *)(((unsigned __int64)&impl->task_interrupted_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_45:
    __asan_report_load1(p_state);
LABEL_46:
    __asan_report_load8(p_state);
LABEL_47:
    __asan_report_load4(p_state);
LABEL_48:
    __asan_report_load4(p_state);
    goto LABEL_49;
  }
  if ( impl->task_interrupted_ )
    goto LABEL_31;
  p_state = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&impl->task_;
  if ( *(_BYTE *)(((unsigned __int64)&impl->task_ >> 3) + 0x7FFF8000) )
    goto LABEL_46;
  task = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)impl->task_;
  if ( !task )
    goto LABEL_31;
  impl->task_interrupted_ = 1;
  *(_DWORD *)(v3 + 32) = -2147483639;
  p_state = task + 13;
  *(_QWORD *)(v3 + 36) = task + 13;
  v13 = *(_BYTE *)(((unsigned __int64)&task[13] >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)task + 104) & 7) + 3) >= v13 && v13 )
    goto LABEL_47;
  p_state = task + 14;
  v14 = *(_BYTE *)(((unsigned __int64)&task[14] >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_48;
  epoll_ctl((int)task[14]._M_pi, 3, (int)task[13]._M_pi, (struct epoll_event *)(v3 + 32));
LABEL_31:
  if ( *(_BYTE *)(v3 + 72) )
    pthread_mutex_unlock((pthread_mutex_t *)(*(_QWORD *)(v3 + 64) + 8LL));
LABEL_4:
  p_state = &this->impl_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(p_state);
    goto LABEL_50;
  }
  M_pi = this->impl_._M_refcount._M_pi;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  if ( v16 == (_BYTE *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_50:
  *(_QWORD *)v3 = 1172321806LL;
  *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 58: range 0000000014EE0540-0000000014EE0883
void __fastcall boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::on_invoker_exit::~on_invoker_exit(
        boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type>::on_invoker_exit *const this)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // r12
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  pthread_mutex_t *v8; // rax
  bool v9; // r15
  unsigned __int64 v10; // rdi
  __int64 vars0[6]; // [rsp+0h] [rbp+0h] BYREF
  boost::asio::detail::recycling_allocator<void,boost::asio::detail::thread_info_base::default_tag> anonymous0; // [rsp+30h] [rbp+30h] BYREF
  boost::asio::io_context::executor_type anonymous1; // [rsp+40h] [rbp+40h] BYREF

  v1 = (unsigned __int64)this;
  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_1(96LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"2 48 1 12 allocator:69 64 8 5 ex:68";
  vars0[2] = (__int64)boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::on_invoker_exit::~on_invoker_exit;
  v2 = (_DWORD *)((unsigned __int64)vars0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_24;
  }
  this = (boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type>::on_invoker_exit *const)this->this_;
  if ( *(_BYTE *)((*(_QWORD *)v1 >> 3) + 0x7FFF8000LL) )
  {
LABEL_24:
    __asan_report_load8(this);
    goto LABEL_25;
  }
  this = (boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type>::on_invoker_exit *const)this->this_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(this);
    goto LABEL_26;
  }
  pthread_mutex_lock((pthread_mutex_t *)this->this_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v3 = v1;
    __asan_report_load8(v1);
    goto LABEL_27;
  }
  v3 = *(_QWORD *)v1;
  if ( *(_BYTE *)((*(_QWORD *)v1 >> 3) + 0x7FFF8000LL) )
  {
LABEL_27:
    __asan_report_load8(v3);
    goto LABEL_28;
  }
  v4 = *(_QWORD **)v3;
  v3 = *(_QWORD *)v3 + 16LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(v3);
LABEL_29:
    __asan_report_load8(v3);
LABEL_30:
    __asan_report_store8();
    goto LABEL_31;
  }
  v5 = v4[2];
  if ( !v5 )
    goto LABEL_16;
  v3 = (unsigned __int64)(v4 + 5);
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 5) >> 3) + 0x7FFF8000) )
    goto LABEL_29;
  v6 = v4[5];
  if ( v6 )
  {
    if ( !*(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)v6 = v5;
      goto LABEL_14;
    }
    goto LABEL_30;
  }
LABEL_31:
  v7 = (unsigned __int64)(v4 + 4);
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_34;
  }
  v4[4] = v5;
LABEL_14:
  v7 = (unsigned __int64)(v4 + 3);
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 3) >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(v7);
    goto LABEL_35;
  }
  v4[5] = v4[3];
  v4[2] = 0LL;
  v4[3] = 0LL;
LABEL_16:
  v7 = *(_QWORD *)v1;
  if ( *(_BYTE *)((*(_QWORD *)v1 >> 3) + 0x7FFF8000LL) )
  {
LABEL_35:
    __asan_report_load8(v7);
    goto LABEL_36;
  }
  v8 = *(pthread_mutex_t **)v7;
  v7 = *(_QWORD *)v7 + 32LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(v7);
    goto LABEL_37;
  }
  v9 = v8->__data.__list.__next != 0LL;
  v7 = (unsigned __int64)(&v8->__align + 1);
  if ( *(char *)(((unsigned __int64)(&v8->__align + 1) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_37:
    __asan_report_store1(v7);
    goto LABEL_38;
  }
  v8->__size[8] = v9;
  v7 = *(_QWORD *)v1;
  if ( *(_BYTE *)((*(_QWORD *)v1 >> 3) + 0x7FFF8000LL) )
  {
LABEL_38:
    __asan_report_load8(v7);
    goto LABEL_39;
  }
  v7 = *(_QWORD *)v7;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(v7);
    goto LABEL_40;
  }
  pthread_mutex_unlock(*(pthread_mutex_t **)v7);
  if ( !v9 )
  {
LABEL_22:
    *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_40:
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
    v10 = v1;
    __asan_report_load8(v1);
  }
  else
  {
    v10 = *(_QWORD *)v1 + 16LL;
    if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    {
      anonymous1.io_context_ = *(boost::asio::io_context **)(*(_QWORD *)v1 + 16LL);
      boost::asio::io_context::executor_type::post<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,boost::asio::detail::recycling_allocator<void,boost::asio::detail::thread_info_base::default_tag>>(
        &anonymous1,
        *(boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> **)v1,
        &anonymous0);
      goto LABEL_22;
    }
  }
  __asan_report_load8(v10);
  vars0[0] = 1172321806LL;
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 75: range 0000000014EE0888-0000000014EE0D67
void __fastcall boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::operator()(
        boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> *const this)
{
  boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> **v1; // rbx
  unsigned __int64 v2; // r14
  _DWORD *v3; // r12
  _QWORD *v4; // r15
  boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> *v5; // rdx
  unsigned __int64 M_ptr; // rax
  std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rcx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  __int64 v9; // rax
  pthread_mutex_t **v10; // rdi
  pthread_mutex_t *v11; // rax
  __pthread_internal_list *v12; // rdx
  unsigned __int64 align; // rdi
  pthread_mutex_t **p_next; // rdi
  pthread_mutex_t *v15; // rax
  bool v16; // bl
  __int64 v17; // rax
  struct _Unwind_Exception *v18; // rbx
  char v19[280]; // [rsp+10h] [rbp-118h] BYREF

  v1 = (boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> **)this;
  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(224LL);
    if ( v9 )
      v2 = v9;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 12 allocator:69 64 8 10 on_exit:81 96 8 5 ex:68 128 16 5 ec:86 160 24 6 ctx:78";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::operator();
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -219021312;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_13;
  }
  *(_QWORD *)(v2 + 160) = this->impl_._M_ptr;
  v4 = (boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context **)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::value_ + __readfsqword(0));
  *(_QWORD *)(v2 + 176) = *v4;
  *(_QWORD *)(v2 + 168) = v2 + 160;
  *v4 = v2 + 160;
  *(_QWORD *)(v2 + 64) = this;
  *(_DWORD *)(v2 + 128) = 0;
  *(_BYTE *)(v2 + 132) = 0;
  *(_QWORD *)(v2 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  while ( 1 )
  {
    v5 = *v1;
    this = *v1 + 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
LABEL_13:
      __asan_report_load8(this);
LABEL_14:
      M_ptr = __asan_report_load8(this);
      goto LABEL_15;
    }
    M_ptr = (unsigned __int64)v5[1].impl_._M_ptr;
    if ( !M_ptr )
      goto LABEL_19;
    this = (boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> *const)v5[1].impl_._M_ptr;
    if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
      goto LABEL_14;
    v7 = *(std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type **)M_ptr;
    v5[1].impl_._M_ptr = *(std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type **)M_ptr;
    if ( v7 )
      goto LABEL_8;
LABEL_15:
    p_M_refcount = &v5[1].impl_._M_refcount;
    if ( *(_BYTE *)(((unsigned __int64)&v5[1].impl_._M_refcount >> 3) + 0x7FFF8000) )
      break;
    v5[1].impl_._M_refcount._M_pi = 0LL;
LABEL_8:
    *(_QWORD *)M_ptr = 0LL;
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(M_ptr + 8);
    if ( *(_BYTE *)(((M_ptr + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_18;
    (*(void (__fastcall **)(boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> *, unsigned __int64, unsigned __int64, _QWORD))(M_ptr + 8))(
      *v1,
      M_ptr,
      v2 + 128,
      0LL);
  }
  __asan_report_store8();
LABEL_18:
  __asan_report_load8(p_M_refcount);
LABEL_19:
  v10 = *(pthread_mutex_t ***)(v2 + 64);
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v10);
    goto LABEL_39;
  }
  v10 = (pthread_mutex_t **)*v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(v10);
    goto LABEL_40;
  }
  pthread_mutex_lock(*v10);
  v10 = *(pthread_mutex_t ***)(v2 + 64);
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(v10);
    goto LABEL_41;
  }
  v11 = *v10;
  v10 = (pthread_mutex_t **)(&(*v10)->__align + 2);
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(v10);
    goto LABEL_42;
  }
  v12 = (__pthread_internal_list *)*(&v11->__align + 2);
  if ( !v12 )
    goto LABEL_30;
  v10 = (pthread_mutex_t **)&v11[1];
  if ( *(_BYTE *)(((unsigned __int64)&v11[1] >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(v10);
    goto LABEL_43;
  }
  align = v11[1].__align;
  if ( align )
  {
    if ( !*(_BYTE *)((align >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)align = v12;
      goto LABEL_28;
    }
LABEL_43:
    __asan_report_store8();
  }
  p_next = (pthread_mutex_t **)&v11->__data.__list.__next;
  if ( *(_BYTE *)(((unsigned __int64)&v11->__data.__list.__next >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_47:
    __asan_report_load8(p_next);
LABEL_48:
    __asan_report_load8(p_next);
    goto LABEL_49;
  }
  v11->__data.__list.__next = v12;
LABEL_28:
  p_next = (pthread_mutex_t **)&v11->__data.__list;
  if ( *(_BYTE *)(((unsigned __int64)&v11->__data.__list >> 3) + 0x7FFF8000) )
    goto LABEL_47;
  v11[1].__align = (__int64)v11->__data.__list.__prev;
  *(&v11->__align + 2) = 0LL;
  v11->__data.__list.__prev = 0LL;
LABEL_30:
  p_next = *(pthread_mutex_t ***)(v2 + 64);
  if ( *(_BYTE *)(((unsigned __int64)p_next >> 3) + 0x7FFF8000) )
    goto LABEL_48;
  v15 = *p_next;
  p_next = (pthread_mutex_t **)&(*p_next)->__data.__list.__next;
  if ( *(_BYTE *)(((unsigned __int64)p_next >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(p_next);
    goto LABEL_50;
  }
  v16 = v15->__data.__list.__next != 0LL;
  p_next = (pthread_mutex_t **)(&v15->__align + 1);
  if ( *(char *)(((unsigned __int64)(&v15->__align + 1) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_50:
    __asan_report_store1(p_next);
    goto LABEL_51;
  }
  v15->__size[8] = v16;
  p_next = *(pthread_mutex_t ***)(v2 + 64);
  if ( *(_BYTE *)(((unsigned __int64)p_next >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_load8(p_next);
    goto LABEL_52;
  }
  p_next = (pthread_mutex_t **)*p_next;
  if ( !*(_BYTE *)(((unsigned __int64)p_next >> 3) + 0x7FFF8000) )
  {
    pthread_mutex_unlock(*p_next);
    if ( !v16 )
      goto LABEL_36;
    goto LABEL_53;
  }
LABEL_52:
  __asan_report_load8(p_next);
LABEL_53:
  v17 = *(_QWORD *)(v2 + 64);
  if ( *(_BYTE *)(((unsigned __int64)(v17 + 16) >> 3) + 0x7FFF8000) )
  {
    v18 = (struct _Unwind_Exception *)__asan_report_load8(v17 + 16);
    boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::on_invoker_exit::~on_invoker_exit((boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type>::on_invoker_exit *const)(v2 + 64));
    *(boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context **)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::value_ + __readfsqword(0)) = *(boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context **)(v2 + 176);
    __asan_handle_no_return(v2 + 64);
    _Unwind_Resume(v18);
  }
  *(_QWORD *)(v2 + 96) = *(_QWORD *)(v17 + 16);
  boost::asio::io_context::executor_type::post<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,boost::asio::detail::recycling_allocator<void,boost::asio::detail::thread_info_base::default_tag>>(
    (const boost::asio::io_context::executor_type *const)(v2 + 96),
    *(boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> **)(v2 + 64),
    (const boost::asio::detail::recycling_allocator<void,boost::asio::detail::thread_info_base::default_tag> *)(v2 + 48));
LABEL_36:
  *(boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context **)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::value_ + __readfsqword(0)) = *(boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context **)(v2 + 176);
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 100: range 0000000014EE94FA-0000000014EE9C6E
void __fastcall boost::asio::detail::strand_executor_service::dispatch<boost::asio::io_context::executor_type const,boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>(
        const boost::asio::detail::strand_executor_service::implementation_type *impl,
        const boost::asio::io_context::executor_type *ex,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *function,
        const std::allocator<void> *a)
{
  std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rbx
  const boost::asio::detail::strand_executor_service::implementation_type *v5; // r14
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v6; // rbp
  unsigned __int64 v7; // r13
  _DWORD *v8; // r15
  unsigned __int64 i; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  const boost::asio::io_context::executor_type *v12; // rdi
  char v13; // al
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  __int64 v15; // rax
  const boost::asio::io_context::executor_type *v16; // rdx
  boost::asio::io_context::executor_type *v17; // rdi
  char v18; // dl
  const boost::asio::io_context::executor_type *v19; // rdi
  char v20; // al
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v21; // rdi
  __int64 M_pi; // rax
  char v23; // dl
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v24; // rdi
  char v25; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rdi
  char v27; // cl
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v29; // rax
  char v30; // dl
  boost::asio::io_context *io_context; // rax
  boost::asio::io_context::impl_type **p_impl; // rdi
  char v33; // cl
  __int64 v34; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  char v38; // dl
  char v39; // al
  struct _Unwind_Exception *v40; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v41; // rdi
  boost::asio::io_context::executor_type *exa; // [rsp+10h] [rbp-C8h]
  boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> f; // [rsp+20h] [rbp-B8h] BYREF
  char v45[152]; // [rsp+40h] [rbp-98h] BYREF

  v5 = impl;
  exa = (boost::asio::io_context::executor_type *)ex;
  v6 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)function;
  v7 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v7 = v10;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 24 5 p:118";
  *(_QWORD *)(v7 + 16) = boost::asio::detail::strand_executor_service::dispatch<boost::asio::io_context::executor_type const,boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218103808;
  v8[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_7;
  }
  M_ptr = impl->_M_ptr;
  for ( i = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::value_
                                + __readfsqword(0)); ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      goto LABEL_10;
    impl = (const boost::asio::detail::strand_executor_service::implementation_type *)i;
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
      break;
    if ( *(std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type **)i == M_ptr )
      goto LABEL_8;
    function = (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)((i + 16) >> 3);
    if ( LOBYTE(function[89477120].data_._M_ptr) )
    {
      __asan_report_load8(i + 16);
      goto LABEL_37;
    }
LABEL_31:
    ;
  }
LABEL_7:
  i = __asan_report_load8(impl);
LABEL_8:
  function = (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)((i + 8) >> 3);
  if ( LOBYTE(function[89477120].data_._M_ptr) )
  {
    i = __asan_report_load8(i + 8);
    goto LABEL_31;
  }
  i = *(_QWORD *)(i + 8);
LABEL_10:
  if ( i )
  {
LABEL_37:
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      v21 = v6;
      __asan_report_load8(v6);
    }
    else
    {
      *(std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v7 + 32) = (std::__shared_count<(__gnu_cxx::_Lock_policy)2>)v6->_M_pi;
      v21 = v6 + 1;
      if ( !*(_BYTE *)(((unsigned __int64)&v6[1] >> 3) + 0x7FFF8000) )
      {
        M_pi = (__int64)v6[1]._M_pi;
        *(_QWORD *)(v7 + 40) = M_pi;
        if ( !M_pi )
          goto LABEL_44;
        v21 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(M_pi + 8);
        if ( !&_pthread_key_create )
          goto LABEL_49;
        v23 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v21 & 7) + 3) < v23 || !v23 )
        {
          _InterlockedAdd((volatile signed __int32 *)v21, 1u);
          goto LABEL_44;
        }
LABEL_48:
        M_pi = __asan_report_store4(v21);
LABEL_49:
        v24 = (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)(M_pi + 8);
        v25 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((M_pi + 8) & 7) + 3) >= v25 && v25 )
        {
          __asan_report_load4(v24);
          goto LABEL_53;
        }
        ++*(_DWORD *)(M_pi + 8);
LABEL_44:
        v24 = (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)&v6[2];
        if ( !*(_BYTE *)(((unsigned __int64)&v6[2] >> 3) + 0x7FFF8000) )
        {
          *(std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v7 + 48) = v6[2];
          boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::operator()((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v7 + 32));
          goto LABEL_54;
        }
LABEL_53:
        __asan_report_load8(v24);
LABEL_54:
        v26 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 40);
        if ( v26 )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v26);
        goto LABEL_107;
      }
    }
    __asan_report_load8(v21);
    goto LABEL_48;
  }
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 32) = a;
  v11 = *(__int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                   + __readfsqword(0));
  if ( !v11 )
    goto LABEL_14;
  function = (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)((unsigned __int64)(v11 + 8) >> 3);
  if ( LOBYTE(function[89477120].data_._M_ptr) )
  {
    __asan_report_load8(v11 + 8);
LABEL_57:
    v12 = ex;
    __asan_report_store8();
    goto LABEL_58;
  }
  v11 = *(_QWORD *)(v11 + 8);
LABEL_14:
  ex = (const boost::asio::io_context::executor_type *)boost::asio::detail::thread_info_base::allocate<boost::asio::detail::thread_info_base::default_tag>(
                                                         (boost::asio::detail::thread_info_base::default_tag)v11,
                                                         (boost::asio::detail::thread_info_base *)0x38,
                                                         (std::size_t)function);
  *(_QWORD *)(v7 + 40) = ex;
  if ( *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000) )
    goto LABEL_57;
  ex->io_context_ = 0LL;
  v12 = ex + 1;
  if ( *(_BYTE *)(((unsigned __int64)&ex[1] >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
LABEL_59:
    __asan_report_store4(v12);
    goto LABEL_60;
  }
  ex[1].io_context_ = (boost::asio::io_context *)boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v12 = ex + 2;
  v13 = *(_BYTE *)(((unsigned __int64)&ex[2] >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_59;
  LODWORD(ex[2].io_context_) = 0;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(v6);
    goto LABEL_61;
  }
  if ( *(_BYTE *)(((unsigned __int64)&ex[3] >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_store8();
    goto LABEL_62;
  }
  ex[3].io_context_ = (boost::asio::io_context *)v6->_M_pi;
  v14 = v6 + 1;
  if ( *(_BYTE *)(((unsigned __int64)&v6[1] >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(v14);
    goto LABEL_63;
  }
  v15 = (__int64)v6[1]._M_pi;
  v16 = ex + 4;
  if ( *(_BYTE *)(((unsigned __int64)&ex[4] >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    v17 = (boost::asio::io_context::executor_type *)v16;
    __asan_report_store8();
    goto LABEL_64;
  }
  ex[4].io_context_ = (boost::asio::io_context *)v15;
  if ( !v15 )
    goto LABEL_27;
  v17 = (boost::asio::io_context::executor_type *)(v15 + 8);
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
    {
      _InterlockedAdd((volatile signed __int32 *)v17, 1u);
      goto LABEL_27;
    }
LABEL_64:
    v15 = __asan_report_store4(v17);
  }
  v19 = (const boost::asio::io_context::executor_type *)(v15 + 8);
  v27 = *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v15 + 8) & 7) + 3) >= v27 && v27 )
  {
    __asan_report_load4(v19);
LABEL_69:
    __asan_report_store8();
    goto LABEL_70;
  }
  ++*(_DWORD *)(v15 + 8);
LABEL_27:
  v19 = ex + 5;
  if ( *(_BYTE *)(((unsigned __int64)&ex[5] >> 3) + 0x7FFF8000) )
    goto LABEL_69;
  v19 = (const boost::asio::io_context::executor_type *)&v6[2];
  if ( !*(_BYTE *)(((unsigned __int64)&v6[2] >> 3) + 0x7FFF8000) )
  {
    ex[5].io_context_ = (boost::asio::io_context *)v6[2]._M_pi;
    *(_QWORD *)(v7 + 48) = ex;
    v20 = boost::asio::detail::strand_executor_service::enqueue(v5, (boost::asio::detail::scheduler_operation *)ex);
    goto LABEL_71;
  }
LABEL_70:
  v20 = __asan_report_load8(v19);
LABEL_71:
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( !v20 )
    goto LABEL_94;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = (volatile signed __int32 *)v5;
    __asan_report_load8(v5);
    goto LABEL_84;
  }
  f.impl_._M_ptr = v5->_M_ptr;
  p_M_refcount = (volatile signed __int32 *)&v5->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v5->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(p_M_refcount);
    goto LABEL_85;
  }
  v29 = v5->_M_refcount._M_pi;
  f.impl_._M_refcount._M_pi = v29;
  if ( !v29 )
    goto LABEL_79;
  p_M_refcount = &v29->_M_use_count;
  if ( &_pthread_key_create )
  {
    v30 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v30 || !v30 )
    {
      _InterlockedAdd(p_M_refcount, 1u);
      goto LABEL_79;
    }
LABEL_85:
    v29 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
  }
  v33 = *(_BYTE *)(((unsigned __int64)&v29->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v29 + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(&v29->_M_use_count);
LABEL_90:
    p_impl = (boost::asio::io_context::impl_type **)exa;
    __asan_report_load8(exa);
    goto LABEL_91;
  }
  ++v29->_M_use_count;
LABEL_79:
  if ( *(_BYTE *)(((unsigned __int64)exa >> 3) + 0x7FFF8000) )
    goto LABEL_90;
  io_context = exa->io_context_;
  f.work_.executor_.io_context_ = io_context;
  f.work_.owns_ = 1;
  p_impl = &io_context->impl_;
  if ( *(_BYTE *)(((unsigned __int64)&io_context->impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(p_impl);
    goto LABEL_92;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&io_context->impl_->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
    _InterlockedAdd64(&io_context->impl_->outstanding_work_._M_i, 1uLL);
    boost::asio::io_context::executor_type::dispatch<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,std::allocator<void>>(
      exa,
      &f,
      a);
    goto LABEL_93;
  }
LABEL_92:
  __asan_report_store8();
LABEL_93:
  boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker(&f);
LABEL_94:
  v34 = *(_QWORD *)(v7 + 48);
  if ( v34 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)(v34 + 32) >> 3) + 0x7FFF8000) )
    {
      v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v34 + 32);
      if ( v35 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
      *(_QWORD *)(v7 + 48) = 0LL;
      goto LABEL_99;
    }
    v37 = __asan_report_load8(v34 + 32);
LABEL_110:
    v36 = v37;
    __asan_report_load8(v37);
LABEL_111:
    __asan_report_load8(v36);
    goto LABEL_112;
  }
LABEL_99:
  M_ptr = *(std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type **)(v7 + 40);
  if ( M_ptr )
  {
    v36 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                              + __readfsqword(0));
    if ( v36 )
    {
      v37 = v36 + 8;
      if ( *(_BYTE *)(((v36 + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_110;
      v36 = *(_QWORD *)(v36 + 8);
    }
    if ( !v36 )
      goto LABEL_106;
    if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
      goto LABEL_111;
    if ( *(_QWORD *)v36 )
    {
LABEL_106:
      operator delete(*(void **)(v7 + 40));
      goto LABEL_107;
    }
LABEL_112:
    v38 = *(_BYTE *)(((unsigned __int64)&M_ptr->prev_ >> 3) + 0x7FFF8000);
    if ( v38 <= (((unsigned __int8)M_ptr + 56) & 7) && v38 )
    {
      __asan_report_load1(&M_ptr->prev_);
    }
    else
    {
      v39 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
      if ( v39 > ((unsigned __int8)M_ptr & 7) || !v39 )
      {
        LOBYTE(M_ptr->mutex_) = M_ptr->prev_;
        *(_QWORD *)v36 = M_ptr;
        goto LABEL_107;
      }
    }
    v40 = (struct _Unwind_Exception *)__asan_report_store1(M_ptr);
    v41 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 40);
    if ( v41 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v41);
    __asan_handle_no_return(v41);
    _Unwind_Resume(v40);
  }
LABEL_107:
  if ( v45 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 100: range 0000000019B6E0BC-0000000019B6E830
void __fastcall boost::asio::detail::strand_executor_service::dispatch<boost::asio::io_context::executor_type const,boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>(
        const boost::asio::detail::strand_executor_service::implementation_type *impl,
        const boost::asio::io_context::executor_type *ex,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *function,
        const std::allocator<void> *a)
{
  std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rbx
  const boost::asio::detail::strand_executor_service::implementation_type *v5; // r14
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v6; // rbp
  unsigned __int64 v7; // r13
  _DWORD *v8; // r15
  unsigned __int64 i; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  const boost::asio::io_context::executor_type *v12; // rdi
  char v13; // al
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  __int64 v15; // rax
  const boost::asio::io_context::executor_type *v16; // rdx
  boost::asio::io_context::executor_type *v17; // rdi
  char v18; // dl
  const boost::asio::io_context::executor_type *v19; // rdi
  char v20; // al
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v21; // rdi
  __int64 M_pi; // rax
  char v23; // dl
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v24; // rdi
  char v25; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rdi
  char v27; // cl
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v29; // rax
  char v30; // dl
  boost::asio::io_context *io_context; // rax
  boost::asio::io_context::impl_type **p_impl; // rdi
  char v33; // cl
  __int64 v34; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  char v38; // dl
  char v39; // al
  struct _Unwind_Exception *v40; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v41; // rdi
  boost::asio::io_context::executor_type *exa; // [rsp+10h] [rbp-C8h]
  boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> f; // [rsp+20h] [rbp-B8h] BYREF
  char v45[152]; // [rsp+40h] [rbp-98h] BYREF

  v5 = impl;
  exa = (boost::asio::io_context::executor_type *)ex;
  v6 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)function;
  v7 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v7 = v10;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 24 5 p:118";
  *(_QWORD *)(v7 + 16) = boost::asio::detail::strand_executor_service::dispatch<boost::asio::io_context::executor_type const,boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218103808;
  v8[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_7;
  }
  M_ptr = impl->_M_ptr;
  for ( i = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::value_
                                + __readfsqword(0)); ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      goto LABEL_10;
    impl = (const boost::asio::detail::strand_executor_service::implementation_type *)i;
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
      break;
    if ( *(std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type **)i == M_ptr )
      goto LABEL_8;
    function = (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)((i + 16) >> 3);
    if ( LOBYTE(function[89477120].data_._M_ptr) )
    {
      __asan_report_load8(i + 16);
      goto LABEL_37;
    }
LABEL_31:
    ;
  }
LABEL_7:
  i = __asan_report_load8(impl);
LABEL_8:
  function = (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)((i + 8) >> 3);
  if ( LOBYTE(function[89477120].data_._M_ptr) )
  {
    i = __asan_report_load8(i + 8);
    goto LABEL_31;
  }
  i = *(_QWORD *)(i + 8);
LABEL_10:
  if ( i )
  {
LABEL_37:
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      v21 = v6;
      __asan_report_load8(v6);
    }
    else
    {
      *(std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v7 + 32) = (std::__shared_count<(__gnu_cxx::_Lock_policy)2>)v6->_M_pi;
      v21 = v6 + 1;
      if ( !*(_BYTE *)(((unsigned __int64)&v6[1] >> 3) + 0x7FFF8000) )
      {
        M_pi = (__int64)v6[1]._M_pi;
        *(_QWORD *)(v7 + 40) = M_pi;
        if ( !M_pi )
          goto LABEL_44;
        v21 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(M_pi + 8);
        if ( !&_pthread_key_create )
          goto LABEL_49;
        v23 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v21 & 7) + 3) < v23 || !v23 )
        {
          _InterlockedAdd((volatile signed __int32 *)v21, 1u);
          goto LABEL_44;
        }
LABEL_48:
        M_pi = __asan_report_store4(v21);
LABEL_49:
        v24 = (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)(M_pi + 8);
        v25 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((M_pi + 8) & 7) + 3) >= v25 && v25 )
        {
          __asan_report_load4(v24);
          goto LABEL_53;
        }
        ++*(_DWORD *)(M_pi + 8);
LABEL_44:
        v24 = (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)&v6[2];
        if ( !*(_BYTE *)(((unsigned __int64)&v6[2] >> 3) + 0x7FFF8000) )
        {
          *(std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v7 + 48) = v6[2];
          boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::operator()((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v7 + 32));
          goto LABEL_54;
        }
LABEL_53:
        __asan_report_load8(v24);
LABEL_54:
        v26 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 40);
        if ( v26 )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v26);
        goto LABEL_107;
      }
    }
    __asan_report_load8(v21);
    goto LABEL_48;
  }
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 32) = a;
  v11 = *(__int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                   + __readfsqword(0));
  if ( !v11 )
    goto LABEL_14;
  function = (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)((unsigned __int64)(v11 + 8) >> 3);
  if ( LOBYTE(function[89477120].data_._M_ptr) )
  {
    __asan_report_load8(v11 + 8);
LABEL_57:
    v12 = ex;
    __asan_report_store8();
    goto LABEL_58;
  }
  v11 = *(_QWORD *)(v11 + 8);
LABEL_14:
  ex = (const boost::asio::io_context::executor_type *)boost::asio::detail::thread_info_base::allocate<boost::asio::detail::thread_info_base::default_tag>(
                                                         (boost::asio::detail::thread_info_base::default_tag)v11,
                                                         (boost::asio::detail::thread_info_base *)0x38,
                                                         (std::size_t)function);
  *(_QWORD *)(v7 + 40) = ex;
  if ( *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000) )
    goto LABEL_57;
  ex->io_context_ = 0LL;
  v12 = ex + 1;
  if ( *(_BYTE *)(((unsigned __int64)&ex[1] >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
LABEL_59:
    __asan_report_store4(v12);
    goto LABEL_60;
  }
  ex[1].io_context_ = (boost::asio::io_context *)boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v12 = ex + 2;
  v13 = *(_BYTE *)(((unsigned __int64)&ex[2] >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_59;
  LODWORD(ex[2].io_context_) = 0;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(v6);
    goto LABEL_61;
  }
  if ( *(_BYTE *)(((unsigned __int64)&ex[3] >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_store8();
    goto LABEL_62;
  }
  ex[3].io_context_ = (boost::asio::io_context *)v6->_M_pi;
  v14 = v6 + 1;
  if ( *(_BYTE *)(((unsigned __int64)&v6[1] >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(v14);
    goto LABEL_63;
  }
  v15 = (__int64)v6[1]._M_pi;
  v16 = ex + 4;
  if ( *(_BYTE *)(((unsigned __int64)&ex[4] >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    v17 = (boost::asio::io_context::executor_type *)v16;
    __asan_report_store8();
    goto LABEL_64;
  }
  ex[4].io_context_ = (boost::asio::io_context *)v15;
  if ( !v15 )
    goto LABEL_27;
  v17 = (boost::asio::io_context::executor_type *)(v15 + 8);
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
    {
      _InterlockedAdd((volatile signed __int32 *)v17, 1u);
      goto LABEL_27;
    }
LABEL_64:
    v15 = __asan_report_store4(v17);
  }
  v19 = (const boost::asio::io_context::executor_type *)(v15 + 8);
  v27 = *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v15 + 8) & 7) + 3) >= v27 && v27 )
  {
    __asan_report_load4(v19);
LABEL_69:
    __asan_report_store8();
    goto LABEL_70;
  }
  ++*(_DWORD *)(v15 + 8);
LABEL_27:
  v19 = ex + 5;
  if ( *(_BYTE *)(((unsigned __int64)&ex[5] >> 3) + 0x7FFF8000) )
    goto LABEL_69;
  v19 = (const boost::asio::io_context::executor_type *)&v6[2];
  if ( !*(_BYTE *)(((unsigned __int64)&v6[2] >> 3) + 0x7FFF8000) )
  {
    ex[5].io_context_ = (boost::asio::io_context *)v6[2]._M_pi;
    *(_QWORD *)(v7 + 48) = ex;
    v20 = boost::asio::detail::strand_executor_service::enqueue(v5, (boost::asio::detail::scheduler_operation *)ex);
    goto LABEL_71;
  }
LABEL_70:
  v20 = __asan_report_load8(v19);
LABEL_71:
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( !v20 )
    goto LABEL_94;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = (volatile signed __int32 *)v5;
    __asan_report_load8(v5);
    goto LABEL_84;
  }
  f.impl_._M_ptr = v5->_M_ptr;
  p_M_refcount = (volatile signed __int32 *)&v5->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v5->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(p_M_refcount);
    goto LABEL_85;
  }
  v29 = v5->_M_refcount._M_pi;
  f.impl_._M_refcount._M_pi = v29;
  if ( !v29 )
    goto LABEL_79;
  p_M_refcount = &v29->_M_use_count;
  if ( &_pthread_key_create )
  {
    v30 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v30 || !v30 )
    {
      _InterlockedAdd(p_M_refcount, 1u);
      goto LABEL_79;
    }
LABEL_85:
    v29 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
  }
  v33 = *(_BYTE *)(((unsigned __int64)&v29->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v29 + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(&v29->_M_use_count);
LABEL_90:
    p_impl = (boost::asio::io_context::impl_type **)exa;
    __asan_report_load8(exa);
    goto LABEL_91;
  }
  ++v29->_M_use_count;
LABEL_79:
  if ( *(_BYTE *)(((unsigned __int64)exa >> 3) + 0x7FFF8000) )
    goto LABEL_90;
  io_context = exa->io_context_;
  f.work_.executor_.io_context_ = io_context;
  f.work_.owns_ = 1;
  p_impl = &io_context->impl_;
  if ( *(_BYTE *)(((unsigned __int64)&io_context->impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(p_impl);
    goto LABEL_92;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&io_context->impl_->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
    _InterlockedAdd64(&io_context->impl_->outstanding_work_._M_i, 1uLL);
    boost::asio::io_context::executor_type::dispatch<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,std::allocator<void>>(
      exa,
      &f,
      a);
    goto LABEL_93;
  }
LABEL_92:
  __asan_report_store8();
LABEL_93:
  boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker(&f);
LABEL_94:
  v34 = *(_QWORD *)(v7 + 48);
  if ( v34 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)(v34 + 32) >> 3) + 0x7FFF8000) )
    {
      v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v34 + 32);
      if ( v35 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
      *(_QWORD *)(v7 + 48) = 0LL;
      goto LABEL_99;
    }
    v37 = __asan_report_load8(v34 + 32);
LABEL_110:
    v36 = v37;
    __asan_report_load8(v37);
LABEL_111:
    __asan_report_load8(v36);
    goto LABEL_112;
  }
LABEL_99:
  M_ptr = *(std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type **)(v7 + 40);
  if ( M_ptr )
  {
    v36 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                              + __readfsqword(0));
    if ( v36 )
    {
      v37 = v36 + 8;
      if ( *(_BYTE *)(((v36 + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_110;
      v36 = *(_QWORD *)(v36 + 8);
    }
    if ( !v36 )
      goto LABEL_106;
    if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
      goto LABEL_111;
    if ( *(_QWORD *)v36 )
    {
LABEL_106:
      operator delete(*(void **)(v7 + 40));
      goto LABEL_107;
    }
LABEL_112:
    v38 = *(_BYTE *)(((unsigned __int64)&M_ptr->prev_ >> 3) + 0x7FFF8000);
    if ( v38 <= (((unsigned __int8)M_ptr + 56) & 7) && v38 )
    {
      __asan_report_load1(&M_ptr->prev_);
    }
    else
    {
      v39 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
      if ( v39 > ((unsigned __int8)M_ptr & 7) || !v39 )
      {
        LOBYTE(M_ptr->mutex_) = M_ptr->prev_;
        *(_QWORD *)v36 = M_ptr;
        goto LABEL_107;
      }
    }
    v40 = (struct _Unwind_Exception *)__asan_report_store1(M_ptr);
    v41 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 40);
    if ( v41 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v41);
    __asan_handle_no_return(v41);
    _Unwind_Resume(v40);
  }
LABEL_107:
  if ( v45 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 100: range 0000000019B6EF46-0000000019B6F6BA
void __fastcall boost::asio::detail::strand_executor_service::dispatch<boost::asio::io_context::executor_type const,boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>(
        const boost::asio::detail::strand_executor_service::implementation_type *impl,
        const boost::asio::io_context::executor_type *ex,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *function,
        const std::allocator<void> *a)
{
  std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rbx
  const boost::asio::detail::strand_executor_service::implementation_type *v5; // r14
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v6; // rbp
  unsigned __int64 v7; // r13
  _DWORD *v8; // r15
  unsigned __int64 i; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  const boost::asio::io_context::executor_type *v12; // rdi
  char v13; // al
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v14; // rax
  __int64 v15; // rax
  const boost::asio::io_context::executor_type *v16; // rdx
  boost::asio::io_context::executor_type *v17; // rdi
  char v18; // dl
  const boost::asio::io_context::executor_type *v19; // rdi
  char v20; // al
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v21; // rdi
  __int64 M_pi; // rax
  char v23; // dl
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> *v24; // rdi
  char v25; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rdi
  char v27; // cl
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v29; // rax
  char v30; // dl
  boost::asio::io_context *io_context; // rax
  boost::asio::io_context::impl_type **p_impl; // rdi
  char v33; // cl
  __int64 v34; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  char v38; // dl
  char v39; // al
  struct _Unwind_Exception *v40; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v41; // rdi
  boost::asio::io_context::executor_type *exa; // [rsp+10h] [rbp-C8h]
  boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> f; // [rsp+20h] [rbp-B8h] BYREF
  char v45[152]; // [rsp+40h] [rbp-98h] BYREF

  v5 = impl;
  exa = (boost::asio::io_context::executor_type *)ex;
  v6 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)function;
  v7 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v7 = v10;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 24 5 p:118";
  *(_QWORD *)(v7 + 16) = boost::asio::detail::strand_executor_service::dispatch<boost::asio::io_context::executor_type const,boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218103808;
  v8[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_7;
  }
  M_ptr = impl->_M_ptr;
  for ( i = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::value_
                                + __readfsqword(0)); ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      goto LABEL_10;
    impl = (const boost::asio::detail::strand_executor_service::implementation_type *)i;
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
      break;
    if ( *(std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type **)i == M_ptr )
      goto LABEL_8;
    function = (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)((i + 16) >> 3);
    if ( LOBYTE(function[89477120].data_._M_ptr) )
    {
      __asan_report_load8(i + 16);
      goto LABEL_37;
    }
LABEL_31:
    ;
  }
LABEL_7:
  i = __asan_report_load8(impl);
LABEL_8:
  function = (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)((i + 8) >> 3);
  if ( LOBYTE(function[89477120].data_._M_ptr) )
  {
    i = __asan_report_load8(i + 8);
    goto LABEL_31;
  }
  i = *(_QWORD *)(i + 8);
LABEL_10:
  if ( i )
  {
LABEL_37:
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      v21 = v6;
      __asan_report_load8(v6);
    }
    else
    {
      *(std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v7 + 32) = (std::__shared_count<(__gnu_cxx::_Lock_policy)2>)v6->_M_pi;
      v21 = v6 + 1;
      if ( !*(_BYTE *)(((unsigned __int64)&v6[1] >> 3) + 0x7FFF8000) )
      {
        M_pi = (__int64)v6[1]._M_pi;
        *(_QWORD *)(v7 + 40) = M_pi;
        if ( !M_pi )
          goto LABEL_44;
        v21 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(M_pi + 8);
        if ( !&_pthread_key_create )
          goto LABEL_49;
        v23 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v21 & 7) + 3) < v23 || !v23 )
        {
          _InterlockedAdd((volatile signed __int32 *)v21, 1u);
          goto LABEL_44;
        }
LABEL_48:
        M_pi = __asan_report_store4(v21);
LABEL_49:
        v24 = (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)(M_pi + 8);
        v25 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((M_pi + 8) & 7) + 3) >= v25 && v25 )
        {
          __asan_report_load4(v24);
          goto LABEL_53;
        }
        ++*(_DWORD *)(M_pi + 8);
LABEL_44:
        v24 = (boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)&v6[2];
        if ( !*(_BYTE *)(((unsigned __int64)&v6[2] >> 3) + 0x7FFF8000) )
        {
          *(std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v7 + 48) = v6[2];
          boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::operator()((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v7 + 32));
          goto LABEL_54;
        }
LABEL_53:
        __asan_report_load8(v24);
LABEL_54:
        v26 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 40);
        if ( v26 )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v26);
        goto LABEL_107;
      }
    }
    __asan_report_load8(v21);
    goto LABEL_48;
  }
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 32) = a;
  v11 = *(__int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                   + __readfsqword(0));
  if ( !v11 )
    goto LABEL_14;
  function = (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)((unsigned __int64)(v11 + 8) >> 3);
  if ( LOBYTE(function[89477120].data_._M_ptr) )
  {
    __asan_report_load8(v11 + 8);
LABEL_57:
    v12 = ex;
    __asan_report_store8();
    goto LABEL_58;
  }
  v11 = *(_QWORD *)(v11 + 8);
LABEL_14:
  ex = (const boost::asio::io_context::executor_type *)boost::asio::detail::thread_info_base::allocate<boost::asio::detail::thread_info_base::default_tag>(
                                                         (boost::asio::detail::thread_info_base::default_tag)v11,
                                                         (boost::asio::detail::thread_info_base *)0x38,
                                                         (std::size_t)function);
  *(_QWORD *)(v7 + 40) = ex;
  if ( *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000) )
    goto LABEL_57;
  ex->io_context_ = 0LL;
  v12 = ex + 1;
  if ( *(_BYTE *)(((unsigned __int64)&ex[1] >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
LABEL_59:
    __asan_report_store4(v12);
    goto LABEL_60;
  }
  ex[1].io_context_ = (boost::asio::io_context *)boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v12 = ex + 2;
  v13 = *(_BYTE *)(((unsigned __int64)&ex[2] >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_59;
  LODWORD(ex[2].io_context_) = 0;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(v6);
    goto LABEL_61;
  }
  if ( *(_BYTE *)(((unsigned __int64)&ex[3] >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_store8();
    goto LABEL_62;
  }
  ex[3].io_context_ = (boost::asio::io_context *)v6->_M_pi;
  v14 = v6 + 1;
  if ( *(_BYTE *)(((unsigned __int64)&v6[1] >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(v14);
    goto LABEL_63;
  }
  v15 = (__int64)v6[1]._M_pi;
  v16 = ex + 4;
  if ( *(_BYTE *)(((unsigned __int64)&ex[4] >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    v17 = (boost::asio::io_context::executor_type *)v16;
    __asan_report_store8();
    goto LABEL_64;
  }
  ex[4].io_context_ = (boost::asio::io_context *)v15;
  if ( !v15 )
    goto LABEL_27;
  v17 = (boost::asio::io_context::executor_type *)(v15 + 8);
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
    {
      _InterlockedAdd((volatile signed __int32 *)v17, 1u);
      goto LABEL_27;
    }
LABEL_64:
    v15 = __asan_report_store4(v17);
  }
  v19 = (const boost::asio::io_context::executor_type *)(v15 + 8);
  v27 = *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v15 + 8) & 7) + 3) >= v27 && v27 )
  {
    __asan_report_load4(v19);
LABEL_69:
    __asan_report_store8();
    goto LABEL_70;
  }
  ++*(_DWORD *)(v15 + 8);
LABEL_27:
  v19 = ex + 5;
  if ( *(_BYTE *)(((unsigned __int64)&ex[5] >> 3) + 0x7FFF8000) )
    goto LABEL_69;
  v19 = (const boost::asio::io_context::executor_type *)&v6[2];
  if ( !*(_BYTE *)(((unsigned __int64)&v6[2] >> 3) + 0x7FFF8000) )
  {
    ex[5].io_context_ = (boost::asio::io_context *)v6[2]._M_pi;
    *(_QWORD *)(v7 + 48) = ex;
    v20 = boost::asio::detail::strand_executor_service::enqueue(v5, (boost::asio::detail::scheduler_operation *)ex);
    goto LABEL_71;
  }
LABEL_70:
  v20 = __asan_report_load8(v19);
LABEL_71:
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( !v20 )
    goto LABEL_94;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = (volatile signed __int32 *)v5;
    __asan_report_load8(v5);
    goto LABEL_84;
  }
  f.impl_._M_ptr = v5->_M_ptr;
  p_M_refcount = (volatile signed __int32 *)&v5->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v5->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(p_M_refcount);
    goto LABEL_85;
  }
  v29 = v5->_M_refcount._M_pi;
  f.impl_._M_refcount._M_pi = v29;
  if ( !v29 )
    goto LABEL_79;
  p_M_refcount = &v29->_M_use_count;
  if ( &_pthread_key_create )
  {
    v30 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v30 || !v30 )
    {
      _InterlockedAdd(p_M_refcount, 1u);
      goto LABEL_79;
    }
LABEL_85:
    v29 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
  }
  v33 = *(_BYTE *)(((unsigned __int64)&v29->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v29 + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(&v29->_M_use_count);
LABEL_90:
    p_impl = (boost::asio::io_context::impl_type **)exa;
    __asan_report_load8(exa);
    goto LABEL_91;
  }
  ++v29->_M_use_count;
LABEL_79:
  if ( *(_BYTE *)(((unsigned __int64)exa >> 3) + 0x7FFF8000) )
    goto LABEL_90;
  io_context = exa->io_context_;
  f.work_.executor_.io_context_ = io_context;
  f.work_.owns_ = 1;
  p_impl = &io_context->impl_;
  if ( *(_BYTE *)(((unsigned __int64)&io_context->impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(p_impl);
    goto LABEL_92;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&io_context->impl_->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
    _InterlockedAdd64(&io_context->impl_->outstanding_work_._M_i, 1uLL);
    boost::asio::io_context::executor_type::dispatch<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,std::allocator<void>>(
      exa,
      &f,
      a);
    goto LABEL_93;
  }
LABEL_92:
  __asan_report_store8();
LABEL_93:
  boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker(&f);
LABEL_94:
  v34 = *(_QWORD *)(v7 + 48);
  if ( v34 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)(v34 + 32) >> 3) + 0x7FFF8000) )
    {
      v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v34 + 32);
      if ( v35 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
      *(_QWORD *)(v7 + 48) = 0LL;
      goto LABEL_99;
    }
    v37 = __asan_report_load8(v34 + 32);
LABEL_110:
    v36 = v37;
    __asan_report_load8(v37);
LABEL_111:
    __asan_report_load8(v36);
    goto LABEL_112;
  }
LABEL_99:
  M_ptr = *(std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type **)(v7 + 40);
  if ( M_ptr )
  {
    v36 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                              + __readfsqword(0));
    if ( v36 )
    {
      v37 = v36 + 8;
      if ( *(_BYTE *)(((v36 + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_110;
      v36 = *(_QWORD *)(v36 + 8);
    }
    if ( !v36 )
      goto LABEL_106;
    if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
      goto LABEL_111;
    if ( *(_QWORD *)v36 )
    {
LABEL_106:
      operator delete(*(void **)(v7 + 40));
      goto LABEL_107;
    }
LABEL_112:
    v38 = *(_BYTE *)(((unsigned __int64)&M_ptr->prev_ >> 3) + 0x7FFF8000);
    if ( v38 <= (((unsigned __int8)M_ptr + 56) & 7) && v38 )
    {
      __asan_report_load1(&M_ptr->prev_);
    }
    else
    {
      v39 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
      if ( v39 > ((unsigned __int8)M_ptr & 7) || !v39 )
      {
        LOBYTE(M_ptr->mutex_) = M_ptr->prev_;
        *(_QWORD *)v36 = M_ptr;
        goto LABEL_107;
      }
    }
    v40 = (struct _Unwind_Exception *)__asan_report_store1(M_ptr);
    v41 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 40);
    if ( v41 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v41);
    __asan_handle_no_return(v41);
    _Unwind_Resume(v40);
  }
LABEL_107:
  if ( v45 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 100: range 0000000014EEF850-0000000014EEFD42
void __fastcall boost::asio::detail::strand_executor_service::dispatch<boost::asio::io_context::executor_type const,boost::asio::executor::function,std::allocator<void>>(
        const boost::asio::detail::strand_executor_service::implementation_type *impl,
        const boost::asio::io_context::executor_type *ex,
        boost::asio::executor::function *function,
        const std::allocator<void> *a)
{
  std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rbx
  const boost::asio::detail::strand_executor_service::implementation_type *v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbp
  _DWORD *v8; // r14
  unsigned __int64 i; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rdi
  const boost::asio::io_context::executor_type *v14; // rdi
  char v15; // al
  bool v16; // al
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v19; // dl
  boost::asio::io_context *io_context; // rax
  boost::asio::io_context::impl_type **p_impl; // rdi
  char v22; // cl
  boost::asio::io_context::executor_type *exa; // [rsp+10h] [rbp-E8h]
  boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> f; // [rsp+20h] [rbp-D8h] BYREF
  char v26[184]; // [rsp+40h] [rbp-B8h] BYREF

  v5 = impl;
  exa = (boost::asio::io_context::executor_type *)ex;
  v6 = (unsigned __int64)function;
  v7 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(128LL);
    if ( v10 )
      v7 = v10;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 8 7 tmp:109 64 24 5 p:118";
  *(_QWORD *)(v7 + 16) = boost::asio::detail::strand_executor_service::dispatch<boost::asio::io_context::executor_type const,boost::asio::executor::function,std::allocator<void>>;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218103808;
  v8[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_7;
  }
  M_ptr = impl->_M_ptr;
  for ( i = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::value_
                                + __readfsqword(0)); ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      goto LABEL_10;
    impl = (const boost::asio::detail::strand_executor_service::implementation_type *)i;
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
      break;
    if ( *(std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type **)i == M_ptr )
      goto LABEL_8;
    function = (boost::asio::executor::function *)((i + 16) >> 3);
    if ( LOBYTE(function[268431360].func_) )
    {
      __asan_report_load8(i + 16);
      goto LABEL_22;
    }
LABEL_16:
    ;
  }
LABEL_7:
  i = __asan_report_load8(impl);
LABEL_8:
  function = (boost::asio::executor::function *)((i + 8) >> 3);
  if ( LOBYTE(function[268431360].func_) )
  {
    i = __asan_report_load8(i + 8);
    goto LABEL_16;
  }
  i = *(_QWORD *)(i + 8);
LABEL_10:
  if ( !i )
    goto LABEL_28;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    v11 = v6;
    __asan_report_load8(v6);
    goto LABEL_23;
  }
  v11 = *(_QWORD *)v6;
  *(_QWORD *)(v7 + 32) = *(_QWORD *)v6;
  *(_QWORD *)v6 = 0LL;
  if ( !v11 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 32) = 0LL;
  if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
    ex = (const boost::asio::io_context::executor_type *)1;
    (*(void (__fastcall **)(unsigned __int64, __int64))v11)(v11, 1LL);
    goto LABEL_24;
  }
LABEL_23:
  __asan_report_load8(v11);
LABEL_24:
  v12 = *(_QWORD *)(v7 + 32);
  if ( !v12 )
    goto LABEL_68;
  if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64, _QWORD))v12)(v12, 0LL);
    goto LABEL_68;
  }
  __asan_report_load8(v12);
LABEL_28:
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 64) = a;
  v13 = *(__int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                   + __readfsqword(0));
  if ( v13 )
  {
    function = (boost::asio::executor::function *)((unsigned __int64)(v13 + 8) >> 3);
    if ( !LOBYTE(function[268431360].func_) )
    {
      v13 = *(_QWORD *)(v13 + 8);
      goto LABEL_31;
    }
    __asan_report_load8(v13 + 8);
LABEL_39:
    v14 = ex;
    __asan_report_store8();
    goto LABEL_40;
  }
LABEL_31:
  ex = (const boost::asio::io_context::executor_type *)boost::asio::detail::thread_info_base::allocate<boost::asio::detail::thread_info_base::default_tag>(
                                                         (boost::asio::detail::thread_info_base::default_tag)v13,
                                                         (boost::asio::detail::thread_info_base *)0x28,
                                                         (std::size_t)function);
  *(_QWORD *)(v7 + 72) = ex;
  if ( *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000) )
    goto LABEL_39;
  ex->io_context_ = 0LL;
  v14 = ex + 1;
  if ( *(_BYTE *)(((unsigned __int64)&ex[1] >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_store8();
LABEL_41:
    __asan_report_store4(v14);
    goto LABEL_42;
  }
  ex[1].io_context_ = (boost::asio::io_context *)boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v14 = ex + 2;
  v15 = *(_BYTE *)(((unsigned __int64)&ex[2] >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_41;
  LODWORD(ex[2].io_context_) = 0;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(v6);
    goto LABEL_43;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&ex[3] >> 3) + 0x7FFF8000) )
  {
    ex[3].io_context_ = *(boost::asio::io_context **)v6;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v7 + 80) = ex;
    v16 = boost::asio::detail::strand_executor_service::enqueue(v5, (boost::asio::detail::scheduler_operation *)ex);
    goto LABEL_44;
  }
LABEL_43:
  __asan_report_store8();
LABEL_44:
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  if ( !v16 )
    goto LABEL_67;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = (volatile signed __int32 *)v5;
    __asan_report_load8(v5);
    goto LABEL_57;
  }
  f.impl_._M_ptr = v5->_M_ptr;
  p_M_refcount = (volatile signed __int32 *)&v5->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v5->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(p_M_refcount);
    goto LABEL_58;
  }
  M_pi = v5->_M_refcount._M_pi;
  f.impl_._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_52;
  p_M_refcount = &M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v19 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v19 || !v19 )
    {
      _InterlockedAdd(p_M_refcount, 1u);
      goto LABEL_52;
    }
LABEL_58:
    M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
  }
  v22 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v22 && v22 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
LABEL_63:
    p_impl = (boost::asio::io_context::impl_type **)exa;
    __asan_report_load8(exa);
    goto LABEL_64;
  }
  ++M_pi->_M_use_count;
LABEL_52:
  if ( *(_BYTE *)(((unsigned __int64)exa >> 3) + 0x7FFF8000) )
    goto LABEL_63;
  io_context = exa->io_context_;
  f.work_.executor_.io_context_ = io_context;
  f.work_.owns_ = 1;
  p_impl = &io_context->impl_;
  if ( *(_BYTE *)(((unsigned __int64)&io_context->impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(p_impl);
    goto LABEL_65;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&io_context->impl_->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
    _InterlockedAdd64(&io_context->impl_->outstanding_work_._M_i, 1uLL);
    boost::asio::io_context::executor_type::dispatch<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,std::allocator<void>>(
      exa,
      &f,
      a);
    goto LABEL_66;
  }
LABEL_65:
  __asan_report_store8();
LABEL_66:
  boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker(&f);
LABEL_67:
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset((boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v7 + 64));
LABEL_68:
  if ( v26 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 133: range 0000000014EEF3D6-0000000014EEF830
void __fastcall boost::asio::detail::strand_executor_service::post<boost::asio::io_context::executor_type const,boost::asio::executor::function,std::allocator<void>>(
        const boost::asio::detail::strand_executor_service::implementation_type *impl,
        const boost::asio::io_context::executor_type *ex,
        boost::asio::executor::function *function,
        const std::allocator<void> *a)
{
  unsigned __int64 v7; // rbp
  _DWORD *v8; // r14
  unsigned __int64 v9; // rdi
  boost::asio::io_context::executor_type *v10; // rax
  char v11; // al
  char v12; // dl
  __int64 v13; // rax
  boost::asio::io_context::executor_type *v14; // rdi
  char v15; // al
  const boost::asio::io_context::executor_type *v16; // rdi
  char v17; // al
  bool v18; // al
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v21; // dl
  boost::asio::io_context *io_context; // rax
  boost::asio::io_context::impl_type **p_impl; // rdi
  char v24; // cl
  boost::asio::io_context::executor_type *v25; // [rsp+0h] [rbp-C8h]
  boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> f; // [rsp+10h] [rbp-B8h] BYREF
  char v27[152]; // [rsp+30h] [rbp-98h] BYREF

  v25 = (boost::asio::io_context::executor_type *)ex;
  v7 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v7 = v13;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 24 5 p:140";
  *(_QWORD *)(v7 + 16) = boost::asio::detail::strand_executor_service::post<boost::asio::io_context::executor_type const,boost::asio::executor::function,std::allocator<void>>;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218103808;
  v8[536862722] = -202116109;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 32) = a;
  v9 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                           + __readfsqword(0));
  if ( v9 )
  {
    v10 = (boost::asio::io_context::executor_type *)(v9 + 8);
    if ( *(_BYTE *)(((v9 + 8) >> 3) + 0x7FFF8000) )
    {
      v9 += 8LL;
      __asan_report_load8(v10);
LABEL_17:
      __asan_report_load8(v9);
LABEL_18:
      __asan_report_load1(v9);
LABEL_19:
      __asan_report_store1(v9);
      goto LABEL_20;
    }
    v9 = *(_QWORD *)(v9 + 8);
  }
  if ( !v9 )
    goto LABEL_21;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  ex = *(const boost::asio::io_context::executor_type **)v9;
  if ( !*(_QWORD *)v9 )
    goto LABEL_21;
  *(_QWORD *)v9 = 0LL;
  v9 = (unsigned __int64)ex;
  v11 = *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000);
  if ( v11 <= ((unsigned __int8)ex & 7) && v11 )
    goto LABEL_18;
  if ( LOBYTE(ex->io_context_) > 9u )
  {
    v9 = (unsigned __int64)&ex[5];
    v12 = *(_BYTE *)(((unsigned __int64)&ex[5] >> 3) + 0x7FFF8000);
    if ( v12 > (((unsigned __int8)ex + 40) & 7) || !v12 )
    {
      *(_BYTE *)v9 = ex->io_context_;
      goto LABEL_24;
    }
    goto LABEL_19;
  }
LABEL_20:
  operator delete((void *)ex);
LABEL_21:
  ex = (const boost::asio::io_context::executor_type *)operator new(0x29uLL);
  v14 = (boost::asio::io_context::executor_type *)&ex[5];
  v15 = *(_BYTE *)(((unsigned __int64)&ex[5] >> 3) + 0x7FFF8000);
  if ( v15 <= (((unsigned __int8)ex + 40) & 7) && v15 )
  {
    __asan_report_store1(v14);
    goto LABEL_32;
  }
  LOBYTE(v14->io_context_) = 10;
LABEL_24:
  *(_QWORD *)(v7 + 40) = ex;
  if ( *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v16 = ex;
    __asan_report_store8();
    goto LABEL_33;
  }
  ex->io_context_ = 0LL;
  v16 = ex + 1;
  if ( *(_BYTE *)(((unsigned __int64)&ex[1] >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8();
LABEL_34:
    __asan_report_store4(v16);
    goto LABEL_35;
  }
  ex[1].io_context_ = (boost::asio::io_context *)boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v16 = ex + 2;
  v17 = *(_BYTE *)(((unsigned __int64)&ex[2] >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
    goto LABEL_34;
  LODWORD(ex[2].io_context_) = 0;
  if ( *(_BYTE *)(((unsigned __int64)function >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(function);
    goto LABEL_36;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&ex[3] >> 3) + 0x7FFF8000) )
  {
    ex[3].io_context_ = (boost::asio::io_context *)function->func_;
    function->func_ = 0LL;
    *(_QWORD *)(v7 + 48) = ex;
    v18 = boost::asio::detail::strand_executor_service::enqueue(impl, (boost::asio::detail::scheduler_operation *)ex);
    goto LABEL_37;
  }
LABEL_36:
  __asan_report_store8();
LABEL_37:
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( !v18 )
    goto LABEL_60;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = (volatile signed __int32 *)impl;
    __asan_report_load8(impl);
    goto LABEL_50;
  }
  f.impl_._M_ptr = impl->_M_ptr;
  p_M_refcount = (volatile signed __int32 *)&impl->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&impl->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(p_M_refcount);
    goto LABEL_51;
  }
  M_pi = impl->_M_refcount._M_pi;
  f.impl_._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_45;
  p_M_refcount = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_52;
  v21 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v21 || !v21 )
  {
    _InterlockedAdd(p_M_refcount, 1u);
    goto LABEL_45;
  }
LABEL_51:
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
LABEL_52:
  v24 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v24 && v24 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_56;
  }
  ++M_pi->_M_use_count;
LABEL_45:
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    p_impl = (boost::asio::io_context::impl_type **)v25;
    __asan_report_load8(v25);
    goto LABEL_57;
  }
  io_context = v25->io_context_;
  f.work_.executor_.io_context_ = io_context;
  f.work_.owns_ = 1;
  p_impl = &io_context->impl_;
  if ( *(_BYTE *)(((unsigned __int64)&io_context->impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(p_impl);
    goto LABEL_58;
  }
  if ( *(_BYTE *)(((unsigned __int64)&io_context->impl_->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
    goto LABEL_59;
  }
  _InterlockedAdd64(&io_context->impl_->outstanding_work_._M_i, 1uLL);
  boost::asio::io_context::executor_type::post<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,std::allocator<void>>(
    v25,
    &f,
    a);
LABEL_59:
  boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker(&f);
LABEL_60:
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset((boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v7 + 32));
  if ( v27 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 155: range 0000000014EEEF5C-0000000014EEF3B6
void __fastcall boost::asio::detail::strand_executor_service::defer<boost::asio::io_context::executor_type const,boost::asio::executor::function,std::allocator<void>>(
        const boost::asio::detail::strand_executor_service::implementation_type *impl,
        const boost::asio::io_context::executor_type *ex,
        boost::asio::executor::function *function,
        const std::allocator<void> *a)
{
  unsigned __int64 v7; // rbp
  _DWORD *v8; // r14
  unsigned __int64 v9; // rdi
  boost::asio::io_context::executor_type *v10; // rax
  char v11; // al
  char v12; // dl
  __int64 v13; // rax
  boost::asio::io_context::executor_type *v14; // rdi
  char v15; // al
  const boost::asio::io_context::executor_type *v16; // rdi
  char v17; // al
  bool v18; // al
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v21; // dl
  boost::asio::io_context *io_context; // rax
  boost::asio::io_context::impl_type **p_impl; // rdi
  char v24; // cl
  boost::asio::io_context::executor_type *v25; // [rsp+0h] [rbp-C8h]
  boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> f; // [rsp+10h] [rbp-B8h] BYREF
  char v27[152]; // [rsp+30h] [rbp-98h] BYREF

  v25 = (boost::asio::io_context::executor_type *)ex;
  v7 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v7 = v13;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 24 5 p:162";
  *(_QWORD *)(v7 + 16) = boost::asio::detail::strand_executor_service::defer<boost::asio::io_context::executor_type const,boost::asio::executor::function,std::allocator<void>>;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218103808;
  v8[536862722] = -202116109;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 32) = a;
  v9 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                           + __readfsqword(0));
  if ( v9 )
  {
    v10 = (boost::asio::io_context::executor_type *)(v9 + 8);
    if ( *(_BYTE *)(((v9 + 8) >> 3) + 0x7FFF8000) )
    {
      v9 += 8LL;
      __asan_report_load8(v10);
LABEL_17:
      __asan_report_load8(v9);
LABEL_18:
      __asan_report_load1(v9);
LABEL_19:
      __asan_report_store1(v9);
      goto LABEL_20;
    }
    v9 = *(_QWORD *)(v9 + 8);
  }
  if ( !v9 )
    goto LABEL_21;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  ex = *(const boost::asio::io_context::executor_type **)v9;
  if ( !*(_QWORD *)v9 )
    goto LABEL_21;
  *(_QWORD *)v9 = 0LL;
  v9 = (unsigned __int64)ex;
  v11 = *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000);
  if ( v11 <= ((unsigned __int8)ex & 7) && v11 )
    goto LABEL_18;
  if ( LOBYTE(ex->io_context_) > 9u )
  {
    v9 = (unsigned __int64)&ex[5];
    v12 = *(_BYTE *)(((unsigned __int64)&ex[5] >> 3) + 0x7FFF8000);
    if ( v12 > (((unsigned __int8)ex + 40) & 7) || !v12 )
    {
      *(_BYTE *)v9 = ex->io_context_;
      goto LABEL_24;
    }
    goto LABEL_19;
  }
LABEL_20:
  operator delete((void *)ex);
LABEL_21:
  ex = (const boost::asio::io_context::executor_type *)operator new(0x29uLL);
  v14 = (boost::asio::io_context::executor_type *)&ex[5];
  v15 = *(_BYTE *)(((unsigned __int64)&ex[5] >> 3) + 0x7FFF8000);
  if ( v15 <= (((unsigned __int8)ex + 40) & 7) && v15 )
  {
    __asan_report_store1(v14);
    goto LABEL_32;
  }
  LOBYTE(v14->io_context_) = 10;
LABEL_24:
  *(_QWORD *)(v7 + 40) = ex;
  if ( *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v16 = ex;
    __asan_report_store8();
    goto LABEL_33;
  }
  ex->io_context_ = 0LL;
  v16 = ex + 1;
  if ( *(_BYTE *)(((unsigned __int64)&ex[1] >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8();
LABEL_34:
    __asan_report_store4(v16);
    goto LABEL_35;
  }
  ex[1].io_context_ = (boost::asio::io_context *)boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v16 = ex + 2;
  v17 = *(_BYTE *)(((unsigned __int64)&ex[2] >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
    goto LABEL_34;
  LODWORD(ex[2].io_context_) = 0;
  if ( *(_BYTE *)(((unsigned __int64)function >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(function);
    goto LABEL_36;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&ex[3] >> 3) + 0x7FFF8000) )
  {
    ex[3].io_context_ = (boost::asio::io_context *)function->func_;
    function->func_ = 0LL;
    *(_QWORD *)(v7 + 48) = ex;
    v18 = boost::asio::detail::strand_executor_service::enqueue(impl, (boost::asio::detail::scheduler_operation *)ex);
    goto LABEL_37;
  }
LABEL_36:
  __asan_report_store8();
LABEL_37:
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( !v18 )
    goto LABEL_60;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = (volatile signed __int32 *)impl;
    __asan_report_load8(impl);
    goto LABEL_50;
  }
  f.impl_._M_ptr = impl->_M_ptr;
  p_M_refcount = (volatile signed __int32 *)&impl->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&impl->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(p_M_refcount);
    goto LABEL_51;
  }
  M_pi = impl->_M_refcount._M_pi;
  f.impl_._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_45;
  p_M_refcount = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_52;
  v21 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v21 || !v21 )
  {
    _InterlockedAdd(p_M_refcount, 1u);
    goto LABEL_45;
  }
LABEL_51:
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
LABEL_52:
  v24 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v24 && v24 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_56;
  }
  ++M_pi->_M_use_count;
LABEL_45:
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    p_impl = (boost::asio::io_context::impl_type **)v25;
    __asan_report_load8(v25);
    goto LABEL_57;
  }
  io_context = v25->io_context_;
  f.work_.executor_.io_context_ = io_context;
  f.work_.owns_ = 1;
  p_impl = &io_context->impl_;
  if ( *(_BYTE *)(((unsigned __int64)&io_context->impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(p_impl);
    goto LABEL_58;
  }
  if ( *(_BYTE *)(((unsigned __int64)&io_context->impl_->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
    goto LABEL_59;
  }
  _InterlockedAdd64(&io_context->impl_->outstanding_work_._M_i, 1uLL);
  boost::asio::io_context::executor_type::defer<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,std::allocator<void>>(
    v25,
    &f,
    a);
LABEL_59:
  boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker(&f);
LABEL_60:
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset((boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v7 + 32));
  if ( v27 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};
