// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/coroutine/src/coroutine_exec.cpp

// Line 20: range 0000000000B24A92-0000000000B25886
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::TimeoutCoroExec::TimeoutCoroExec(
        common::minet::TimeoutCoroExec *const this,
        common::minet::CoroutinePtr coro_ptr,
        common::tools::TimerMgrPtr time_mgr_ptr,
        uint32_t time_out)
{
  common::tools::MiTimer *p_timeout_timer; // rbx
  unsigned __int64 M_pi; // r12
  std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // r13
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v7; // r14
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // r15
  __int64 *v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // dl
  volatile signed __int32 *p_timer_mgr_wtr; // rdi
  char v15; // dl
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  char v18; // cl
  signed __int32 v19; // eax
  std::function<void(long unsigned int)> *p_x; // rsi
  char v21; // cl
  char v22; // dl
  char v23; // cl
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  std::_Any_data M_functor; // rax
  std::_Function_base::_Manager_type M_manager; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rdi
  std::function<void(long unsigned int)>::_Invoker_type M_invoker; // rax
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  signed __int32 v32; // eax
  __int64 v33; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v34; // rax
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *v35; // rdx
  volatile signed __int32 *p_M_weak_count; // rdi
  char v37; // dl
  void *p_is_time_out; // rdi
  char v39; // dl
  char v40; // al
  __int64 v41; // rsi
  struct _Unwind_Exception *v42; // rbp
  void (__fastcall *v43)(common::tools::TimeoutFunc *, common::tools::TimeoutFunc *, __int64); // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v44; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // rdi
  std::function<void(long unsigned int)> *v46; // rdi
  char v47; // dl
  unsigned __int64 v48; // rdi
  char v49; // dl
  signed __int32 v50; // eax
  unsigned __int64 v51; // rdi
  char v52; // dl
  char v53; // cl
  std::_Bind<void (common::minet::TimeoutCoroExec::*(common::minet::TimeoutCoroExec*))()> v54; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v55; // [rsp+18h] [rbp-A0h]
  __int64 v56[4]; // [rsp+20h] [rbp-98h] BYREF
  std::function<void(long unsigned int)> __x; // [rsp+40h] [rbp-78h] BYREF
  std::function<void(long unsigned int)> v58; // [rsp+60h] [rbp-58h] BYREF

  *(_DWORD *)&v54.gap8[4] = time_mgr_ptr._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_30;
  }
  M_ptr = coro_ptr._M_ptr;
  M_pi = (unsigned __int64)coro_ptr._M_refcount._M_pi;
  this->_vptr_TimeoutCoroExec = (int (**)(...))(&`vtable for'common::minet::TimeoutCoroExec + 2);
  p_timeout_timer = &this->timeout_timer_;
  v56[0] = (__int64)common::minet::TimeoutCoroExec::onTimer;
  v56[1] = 0LL;
  v56[2] = (__int64)this;
  v10 = v56;
  std::function<void ()(unsigned long)>::function<std::_Bind<void (common::minet::TimeoutCoroExec::*)(void) ()(common::minet::TimeoutCoroExec*)>,void,void>(
    &__x,
    v54);
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    v11 = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_31;
  }
  v54._M_bound_args._M_head_impl = *(common::minet::TimeoutCoroExec **)M_pi;
  v11 = M_pi + 8;
  if ( *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(v11);
    goto LABEL_32;
  }
  v12 = *(_QWORD *)(M_pi + 8);
  v55 = v12;
  if ( !v12 )
    goto LABEL_9;
  v11 = v12 + 8;
  if ( !&_pthread_key_create )
    goto LABEL_33;
  v13 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
  if ( (char)((v11 & 7) + 3) < v13 || !v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)v11, 1u);
    goto LABEL_9;
  }
LABEL_32:
  v12 = __asan_report_store4(v11);
LABEL_33:
  v21 = *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v12 + 8) & 7) + 3) >= v21 && v21 )
  {
    __asan_report_load4(v12 + 8);
    goto LABEL_37;
  }
  ++*(_DWORD *)(v12 + 8);
LABEL_9:
  if ( *(_BYTE *)(((unsigned __int64)p_timeout_timer >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    p_timer_mgr_wtr = (volatile signed __int32 *)p_timeout_timer;
    __asan_report_store8();
    goto LABEL_38;
  }
  this->timeout_timer_._vptr_MiTimer = (int (**)(...))(&`vtable for'common::tools::MiTimer + 2);
  p_timer_mgr_wtr = (volatile signed __int32 *)&p_timeout_timer->timer_mgr_wtr_;
  if ( *(_BYTE *)(((unsigned __int64)&p_timeout_timer->timer_mgr_wtr_ >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_store8();
    goto LABEL_39;
  }
  p_timeout_timer->timer_mgr_wtr_._M_ptr = 0LL;
  p_timer_mgr_wtr = (volatile signed __int32 *)&p_timeout_timer->timer_mgr_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&p_timeout_timer->timer_mgr_wtr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8();
    goto LABEL_40;
  }
  p_timeout_timer->timer_mgr_wtr_._M_refcount._M_pi = 0LL;
  p_timer_mgr_wtr = (volatile signed __int32 *)&p_timeout_timer->timer_proxy_wtr_;
  if ( *(_BYTE *)(((unsigned __int64)&p_timeout_timer->timer_proxy_wtr_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_store8();
    goto LABEL_41;
  }
  p_timeout_timer->timer_proxy_wtr_._M_ptr = 0LL;
  p_timer_mgr_wtr = (volatile signed __int32 *)&p_timeout_timer->timer_proxy_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&p_timeout_timer->timer_proxy_wtr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
    goto LABEL_42;
  }
  p_timeout_timer->timer_proxy_wtr_._M_refcount._M_pi = 0LL;
  M_pi = (unsigned __int64)&p_timeout_timer->timeout_callback_;
  p_timer_mgr_wtr = (volatile signed __int32 *)&p_timeout_timer->timeout_callback_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&p_timeout_timer->timeout_callback_._M_manager >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  p_timeout_timer->timeout_callback_._M_manager = 0LL;
  p_timeout_timer->timer_mgr_wtr_._M_ptr = (std::__weak_ptr<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)v54._M_bound_args._M_head_impl;
  p_M_refcount = &p_timeout_timer->timer_mgr_wtr_._M_refcount;
  v7 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v55;
  if ( !v55 )
    goto LABEL_20;
  p_timer_mgr_wtr = (volatile signed __int32 *)(v55 + 12);
  if ( !&_pthread_key_create )
    goto LABEL_44;
  v15 = *(_BYTE *)(((unsigned __int64)p_timer_mgr_wtr >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_timer_mgr_wtr & 7) + 3) < v15 || !v15 )
  {
    _InterlockedAdd(p_timer_mgr_wtr, 1u);
    goto LABEL_20;
  }
LABEL_43:
  __asan_report_store4(p_timer_mgr_wtr);
LABEL_44:
  v22 = *(_BYTE *)(((unsigned __int64)&v7->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v7 + 12) & 7) + 3) >= v22 && v22 )
  {
    __asan_report_load4(&v7->_M_weak_count);
    goto LABEL_48;
  }
  ++v7->_M_weak_count;
LABEL_20:
  if ( *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    v17 = __asan_report_load8(p_M_refcount);
    goto LABEL_49;
  }
  v16 = (unsigned __int64)p_timeout_timer->timer_mgr_wtr_._M_refcount._M_pi;
  if ( !v16 )
    goto LABEL_27;
  v17 = v16 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_50;
  v18 = *(_BYTE *)((v17 >> 3) + 0x7FFF8000);
  if ( (char)((v17 & 7) + 3) < v18 || !v18 )
  {
    v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v17, 0xFFFFFFFF);
    goto LABEL_26;
  }
LABEL_49:
  v16 = v17;
  __asan_report_store4(v17);
LABEL_50:
  v23 = *(_BYTE *)(((v16 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 12) & 7) + 3) >= v23 && v23 )
  {
    v16 += 12LL;
    __asan_report_load4(v16);
    goto LABEL_54;
  }
  v19 = *(_DWORD *)(v16 + 12);
  *(_DWORD *)(v16 + 12) = v19 - 1;
LABEL_26:
  if ( v19 != 1 )
    goto LABEL_27;
LABEL_54:
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v16);
    goto LABEL_58;
  }
  v24 = *(_QWORD *)v16 + 24LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v24);
    goto LABEL_59;
  }
  (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v25);
LABEL_27:
  if ( !*(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
  {
    p_timeout_timer->timer_mgr_wtr_._M_refcount._M_pi = v7;
    p_x = &__x;
    std::function<void ()(unsigned long)>::function(&v58, &__x);
    goto LABEL_60;
  }
LABEL_59:
  __asan_report_store8();
LABEL_60:
  M_functor = v58._M_functor;
  if ( *(_WORD *)((M_pi >> 3) + 0x7FFF8000) )
  {
    v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)M_pi;
    __asan_report_load16(M_pi, v41, *(_QWORD *)&v58._M_functor._M_pod_data[8]);
    goto LABEL_89;
  }
  v58._M_functor = (std::_Any_data)_mm_loadu_si128((const __m128i *)&p_timeout_timer->timeout_callback_);
  p_timeout_timer->timeout_callback_._M_functor = M_functor;
  M_manager = v58._M_manager;
  v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(M_pi + 16);
  if ( *(_BYTE *)(((M_pi + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_load8(v28);
LABEL_90:
    v42 = (struct _Unwind_Exception *)__asan_report_load8(v28);
    if ( *(_BYTE *)(((unsigned __int64)&p_timeout_timer->timeout_callback_._M_manager >> 3) + 0x7FFF8000) )
      __asan_report_load8(&p_timeout_timer->timeout_callback_._M_manager);
    v43 = (void (__fastcall *)(common::tools::TimeoutFunc *, common::tools::TimeoutFunc *, __int64))p_timeout_timer->timeout_callback_._M_manager;
    if ( v43 )
      v43(&p_timeout_timer->timeout_callback_, &p_timeout_timer->timeout_callback_, 3LL);
    if ( *(_BYTE *)(((unsigned __int64)&p_timeout_timer->timer_proxy_wtr_._M_refcount >> 3) + 0x7FFF8000) )
      __asan_report_load8(&p_timeout_timer->timer_proxy_wtr_._M_refcount);
    v44 = p_timeout_timer->timer_proxy_wtr_._M_refcount._M_pi;
    if ( v44 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v44);
    if ( *(_BYTE *)(((unsigned __int64)&p_timeout_timer->timer_mgr_wtr_._M_refcount >> 3) + 0x7FFF8000) )
      __asan_report_load8(&p_timeout_timer->timer_mgr_wtr_._M_refcount);
    v45 = p_timeout_timer->timer_mgr_wtr_._M_refcount._M_pi;
    if ( v45 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v45);
    v46 = (std::function<void(long unsigned int)> *)v55;
    if ( v55 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release((std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const)v55);
    if ( __x._M_manager )
    {
      v46 = &__x;
      __x._M_manager((std::_Any_data *)&__x, (const std::_Any_data *)&__x, __destroy_functor);
    }
    __asan_handle_no_return(v46);
    _Unwind_Resume(v42);
  }
  v58._M_manager = *(std::_Function_base::_Manager_type *)(M_pi + 16);
  *(_QWORD *)(M_pi + 16) = M_manager;
  M_invoker = v58._M_invoker;
  v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(M_pi + 24);
  if ( *(_BYTE *)(((M_pi + 24) >> 3) + 0x7FFF8000) )
    goto LABEL_90;
  v58._M_invoker = *(std::function<void(long unsigned int)>::_Invoker_type *)(M_pi + 24);
  *(_QWORD *)(M_pi + 24) = M_invoker;
  if ( v58._M_manager )
    v58._M_manager((std::_Any_data *)&v58, (const std::_Any_data *)&v58, __destroy_functor);
  if ( v55 )
  {
    v30 = (volatile signed __int32 *)(v55 + 8);
    if ( &_pthread_key_create )
    {
      v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
      {
        v32 = _InterlockedExchangeAdd(v30, 0xFFFFFFFF);
        goto LABEL_70;
      }
      __asan_report_store4(v30);
    }
    v47 = *(_BYTE *)(((v55 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v55 + 8) & 7) + 3) >= v47 && v47 )
    {
      __asan_report_load4(v55 + 8);
      goto LABEL_112;
    }
    v32 = *(_DWORD *)(v55 + 8);
    *(_DWORD *)(v55 + 8) = v32 - 1;
LABEL_70:
    if ( v32 != 1 )
      goto LABEL_71;
LABEL_112:
    if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
    {
      v48 = v55;
      __asan_report_load8(v55);
    }
    else
    {
      v48 = *(_QWORD *)v55 + 16LL;
      if ( !*(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v55 + 16LL))(v55);
        v48 = v55 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_125;
        v49 = *(_BYTE *)((v48 >> 3) + 0x7FFF8000);
        if ( (char)((v48 & 7) + 3) < v49 || !v49 )
        {
          v50 = _InterlockedExchangeAdd((volatile signed __int32 *)v48, 0xFFFFFFFF);
          goto LABEL_118;
        }
LABEL_124:
        __asan_report_store4(v48);
LABEL_125:
        v52 = *(_BYTE *)(((v55 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v55 + 12) & 7) + 3) >= v52 && v52 )
        {
          __asan_report_load4(v55 + 12);
          goto LABEL_129;
        }
        v50 = *(_DWORD *)(v55 + 12);
        *(_DWORD *)(v55 + 12) = v50 - 1;
LABEL_118:
        if ( v50 != 1 )
          goto LABEL_71;
        if ( !*(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
        {
          v51 = *(_QWORD *)v55 + 24LL;
          if ( !*(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v55 + 24LL))(v55);
            goto LABEL_71;
          }
LABEL_130:
          __asan_report_load8(v51);
LABEL_131:
          __asan_report_load8(M_ptr);
          goto LABEL_132;
        }
LABEL_129:
        v51 = v55;
        __asan_report_load8(v55);
        goto LABEL_130;
      }
    }
    __asan_report_load8(v48);
    goto LABEL_124;
  }
LABEL_71:
  if ( __x._M_manager )
    __x._M_manager((std::_Any_data *)&__x, (const std::_Any_data *)&__x, __destroy_functor);
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_131;
  if ( *(_BYTE *)(((unsigned __int64)&this->coro_wtr_ >> 3) + 0x7FFF8000) )
  {
LABEL_132:
    v33 = __asan_report_store8();
    goto LABEL_133;
  }
  this->coro_wtr_._M_ptr = (std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *)M_ptr->_vptr_Coroutine;
  v33 = (__int64)&M_ptr->std::enable_shared_from_this<common::minet::Coroutine>;
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr->std::enable_shared_from_this<common::minet::Coroutine> >> 3) + 0x7FFF8000) )
  {
LABEL_133:
    __asan_report_load8(v33);
    goto LABEL_134;
  }
  v34 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)M_ptr->_M_weak_this._M_ptr;
  v35 = &this->coro_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->coro_wtr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_134:
    p_M_weak_count = (volatile signed __int32 *)v35;
    __asan_report_store8();
    goto LABEL_135;
  }
  this->coro_wtr_._M_refcount._M_pi = v34;
  if ( !v34 )
    goto LABEL_82;
  p_M_weak_count = &v34->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_136;
  v37 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v37 || !v37 )
  {
    _InterlockedAdd(p_M_weak_count, 1u);
    goto LABEL_82;
  }
LABEL_135:
  v34 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_weak_count);
LABEL_136:
  p_is_time_out = &v34->_M_weak_count;
  v53 = *(_BYTE *)(((unsigned __int64)&v34->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v34 + 12) & 7) + 3) >= v53 && v53 )
  {
    __asan_report_load4(p_is_time_out);
    goto LABEL_140;
  }
  ++v34->_M_weak_count;
LABEL_82:
  p_is_time_out = &this->is_time_out_;
  if ( *(char *)(((unsigned __int64)&this->is_time_out_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_140:
    __asan_report_store1(p_is_time_out);
LABEL_141:
    __asan_report_store4(p_is_time_out);
    goto LABEL_142;
  }
  this->is_time_out_ = 0;
  p_is_time_out = &this->yield_id_;
  v39 = *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 100) & 7) + 3) >= v39 && v39 )
    goto LABEL_141;
  this->yield_id_ = 0;
  p_is_time_out = &this->time_out_;
  v40 = *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000);
  if ( v40 && v40 <= 3 )
  {
LABEL_142:
    __asan_report_store4(p_is_time_out);
    JUMPOUT(0xB252E9LL);
  }
  this->time_out_ = *(_DWORD *)&v54.gap8[4];
};

// Line 35: range 0000000000B230BE-0000000000B23713
void __fastcall common::minet::TimeoutCoroExec::start(
        common::minet::TimeoutCoroExec *const this,
        const std::function<void()> *a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  _DWORD *v6; // r12
  common::minet::CoroutineWtr *p_coro_wtr; // rsi
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // eax
  int v13; // ett
  bool v14; // dl
  std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  std::enable_shared_from_this<common::minet::Coroutine> *v16; // rdi
  char v17; // dl
  __int64 v18; // rax
  size_t v19; // r13
  common::milog::MilogStringStream *ostr; // r14
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  char v23; // dl
  signed __int32 v24; // eax
  unsigned __int64 v25; // rdi
  char v26; // dl
  signed __int32 v27; // eax
  unsigned __int64 v28; // rdi
  char v29; // dl
  char v30; // dl
  unsigned __int64 v31; // rbp
  volatile signed __int32 *v32; // rdi
  char v33; // dl
  signed __int32 v34; // eax
  char v35; // dl
  unsigned __int64 v36; // rdi
  char v37; // dl
  signed __int32 v38; // eax
  unsigned __int64 v39; // rdi
  char v40; // dl
  struct _Unwind_Exception *v41; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v42; // rdi
  std::function<void()> v43; // [rsp+0h] [rbp-D8h] BYREF
  common::milog::MiLogStream v44; // [rsp+20h] [rbp-B8h] BYREF
  char v45[152]; // [rsp+40h] [rbp-98h] BYREF

  v4 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_1(96LL);
    if ( v18 )
      v4 = v18;
  }
  v5 = v4 + 96;
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 7 __count 64 16 11 coro_ptr:36";
  *(_QWORD *)(v4 + 16) = common::minet::TimeoutCoroExec::start;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  p_coro_wtr = &this->coro_wtr_;
  p_M_refcount = &this->coro_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->coro_wtr_._M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
  }
  else
  {
    M_pi = this->coro_wtr_._M_refcount._M_pi;
    *(_QWORD *)(v4 + 72) = M_pi;
    if ( !M_pi )
      goto LABEL_13;
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&M_pi->_M_use_count;
    v10 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v10 || !v10 )
    {
      *(_DWORD *)(v4 + 48) = M_pi->_M_use_count;
      while ( 1 )
      {
        v11 = *(_DWORD *)(v4 + 48);
        if ( !v11 )
          goto LABEL_23;
        v13 = *(_DWORD *)(v4 + 48);
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)p_M_refcount, v11 + 1, v11);
        v14 = v13 == v12;
        if ( v13 != v12 )
          *(_DWORD *)(v4 + 48) = v12;
        if ( v14 )
          goto LABEL_11;
      }
    }
  }
  __asan_report_load4(p_M_refcount);
LABEL_23:
  v14 = 0;
LABEL_11:
  if ( !v14 )
    *(_QWORD *)(v4 + 72) = 0LL;
LABEL_13:
  M_ptr = *(std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 72);
  if ( !M_ptr )
    goto LABEL_27;
  v16 = &M_ptr->std::enable_shared_from_this<common::minet::Coroutine>;
  v17 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v16 & 7) + 3) >= v17 && v17 )
  {
    __asan_report_load4(v16);
LABEL_25:
    __asan_report_load8(&this->coro_wtr_);
    goto LABEL_26;
  }
  if ( LODWORD(v16->_M_weak_this._M_ptr) )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_coro_wtr >> 3) + 0x7FFF8000) )
    {
      M_ptr = this->coro_wtr_._M_ptr;
      goto LABEL_27;
    }
    goto LABEL_25;
  }
LABEL_26:
  M_ptr = 0LL;
LABEL_27:
  *(_QWORD *)(v4 + 64) = M_ptr;
  v19 = (size_t)M_ptr;
  if ( M_ptr )
  {
    v44.ostr_ptr_._M_refcount._M_pi = 0LL;
    std::function<void ()(void)>::function(&v43, a2);
    goto LABEL_65;
  }
  common::milog::MiLogStream::MiLogStream(
    &v44,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/coroutine_exec.cpp",
    "start",
    39);
  ostr = v44.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v44.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v44.ostr_;
    __asan_report_load8(v44.ostr_);
    goto LABEL_50;
  }
  v19 = (size_t)(v44.ostr_->buffer_.data_ + 0x4000);
  p_cur = (common::milog::MilogStringStream *)&v44.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v44.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(p_cur);
    goto LABEL_51;
  }
  cur = v44.ostr_->buffer_.cur_;
  v19 = (int)v19 - (int)cur;
  if ( v19 > 0x11 )
    v19 = 18LL;
  memcpy(cur, "coroutine is empty", v19);
  ostr->buffer_.cur_ += v19;
  common::milog::MiLogStream::~MiLogStream(&v44);
  v5 = *(_QWORD *)(v4 + 72);
  if ( !v5 )
    goto LABEL_75;
  p_cur = (common::milog::MilogStringStream *)(v5 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_52;
  v23 = *(_BYTE *)(((unsigned __int64)p_cur >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_cur & 7) + 3) < v23 || !v23 )
  {
    v24 = _InterlockedExchangeAdd((volatile signed __int32 *)p_cur, 0xFFFFFFFF);
    goto LABEL_38;
  }
LABEL_51:
  __asan_report_store4(p_cur);
LABEL_52:
  v29 = *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v5 + 8) & 7) + 3) >= v29 && v29 )
  {
    __asan_report_load4(v5 + 8);
LABEL_56:
    v25 = v5;
    __asan_report_load8(v5);
    goto LABEL_57;
  }
  v24 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = v24 - 1;
LABEL_38:
  if ( v24 != 1 )
    goto LABEL_75;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    goto LABEL_56;
  v25 = *(_QWORD *)v5 + 16LL;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8(v25);
    goto LABEL_58;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
  v25 = v5 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_59;
  v26 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
  if ( (char)((v25 & 7) + 3) < v26 || !v26 )
  {
    v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v25, 0xFFFFFFFF);
    goto LABEL_45;
  }
LABEL_58:
  __asan_report_store4(v25);
LABEL_59:
  v30 = *(_BYTE *)(((v5 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v5 + 12) & 7) + 3) >= v30 && v30 )
  {
    __asan_report_load4(v5 + 12);
    goto LABEL_63;
  }
  v27 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = v27 - 1;
LABEL_45:
  if ( v27 != 1 )
    goto LABEL_75;
  if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    v28 = *(_QWORD *)v5 + 24LL;
    if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 24LL))(v5);
      goto LABEL_75;
    }
    goto LABEL_64;
  }
LABEL_63:
  v28 = v5;
  __asan_report_load8(v5);
LABEL_64:
  __asan_report_load8(v28);
LABEL_65:
  common::minet::Coroutine::start((common::minet::Coroutine *const)v19, &v43, &v44);
  if ( v43._M_manager )
    v43._M_manager((std::_Any_data *)&v43, (const std::_Any_data *)&v43, __destroy_functor);
  if ( v44.ostr_ptr_._M_refcount._M_pi )
    ((void (__fastcall *)(common::milog::MiLogStream *, common::milog::MiLogStream *, __int64))v44.ostr_ptr_._M_refcount._M_pi)(
      &v44,
      &v44,
      3LL);
  v31 = *(_QWORD *)(v5 - 24);
  if ( v31 )
  {
    v32 = (volatile signed __int32 *)(v31 + 8);
    if ( &_pthread_key_create )
    {
      v33 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v32 & 7) + 3) < v33 || !v33 )
      {
        v34 = _InterlockedExchangeAdd(v32, 0xFFFFFFFF);
        goto LABEL_74;
      }
      __asan_report_store4(v32);
    }
    v35 = *(_BYTE *)(((v31 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v31 + 8) & 7) + 3) >= v35 && v35 )
    {
      __asan_report_load4(v31 + 8);
      goto LABEL_82;
    }
    v34 = *(_DWORD *)(v31 + 8);
    *(_DWORD *)(v31 + 8) = v34 - 1;
LABEL_74:
    if ( v34 != 1 )
      goto LABEL_75;
LABEL_82:
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    {
      v36 = v31;
      __asan_report_load8(v31);
    }
    else
    {
      v36 = *(_QWORD *)v31 + 16LL;
      if ( !*(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v31 + 16LL))(v31);
        v36 = v31 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_95;
        v37 = *(_BYTE *)((v36 >> 3) + 0x7FFF8000);
        if ( (char)((v36 & 7) + 3) < v37 || !v37 )
        {
          v38 = _InterlockedExchangeAdd((volatile signed __int32 *)v36, 0xFFFFFFFF);
          goto LABEL_88;
        }
LABEL_94:
        __asan_report_store4(v36);
LABEL_95:
        v40 = *(_BYTE *)(((v31 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v31 + 12) & 7) + 3) >= v40 && v40 )
        {
          __asan_report_load4(v31 + 12);
          goto LABEL_99;
        }
        v38 = *(_DWORD *)(v31 + 12);
        *(_DWORD *)(v31 + 12) = v38 - 1;
LABEL_88:
        if ( v38 != 1 )
          goto LABEL_75;
        if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
        {
          v39 = *(_QWORD *)v31 + 24LL;
          if ( !*(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v31 + 24LL))(v31);
            goto LABEL_75;
          }
LABEL_100:
          v41 = (struct _Unwind_Exception *)__asan_report_load8(v39);
          if ( v43._M_manager )
            v43._M_manager((std::_Any_data *)&v43, (const std::_Any_data *)&v43, __destroy_functor);
          if ( v44.ostr_ptr_._M_refcount._M_pi )
            ((void (__fastcall *)(common::milog::MiLogStream *, common::milog::MiLogStream *, __int64))v44.ostr_ptr_._M_refcount._M_pi)(
              &v44,
              &v44,
              3LL);
          v42 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v31 - 24);
          if ( v42 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v42);
          __asan_handle_no_return(v42);
          _Unwind_Resume(v41);
        }
LABEL_99:
        v39 = v31;
        __asan_report_load8(v31);
        goto LABEL_100;
      }
    }
    __asan_report_load8(v36);
    goto LABEL_94;
  }
LABEL_75:
  if ( v45 == (char *)v4 )
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
};

// Line 45: range 0000000000B22D5E-0000000000B230BD
void __fastcall common::minet::TimeoutCoroExec::onTimer(common::minet::TimeoutCoroExec *const this)
{
  int v1; // esi
  unsigned __int64 v2; // rdx
  int v3; // edi

  if ( *(char *)(((unsigned __int64)&this->is_time_out_ >> 3) + 0x7FFF8000) < 0 )
  {
    this = (common::minet::TimeoutCoroExec *const)((char *)this + 96);
    __asan_report_store1(this);
    goto LABEL_6;
  }
  this->is_time_out_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8(this);
    goto LABEL_7;
  }
  v2 = (unsigned __int64)(this->_vptr_TimeoutCoroExec + 2);
  if ( !*(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))this->_vptr_TimeoutCoroExec + 2))();
    return;
  }
LABEL_7:
  v3 = v2;
  __asan_report_load8(v2);
  __static_initialization_and_destruction_0(v3, v1);
};

// Line 51: range 0000000000B23B94-0000000000B23BA6
void __fastcall common::minet::TimeoutCoroExec::onTimeOut(common::minet::TimeoutCoroExec *const this)
{
  common::minet::TimeoutCoroExec::resume(this, 2);
};

// Line 57: range 0000000000B24300-0000000000B24911
int32_t __fastcall common::minet::TimeoutCoroExec::yield(common::minet::TimeoutCoroExec *const this, uint32_t time_out)
{
  uint32_t yield_id; // r15d
  common::minet::TimeoutCoroExec *v3; // rbx
  common::milog::MilogStringStream *v4; // r14
  common::minet::CoroutineWtr *p_coro_wtr; // rsi
  _DWORD *v6; // r13
  uint32_t *p_time_out; // rdi
  char v8; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // eax
  int v13; // ett
  bool v14; // dl
  std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  unsigned __int64 v16; // rdi
  char v17; // dl
  __int64 v18; // rax
  common::milog::MilogStringStream *p_yield_id; // rdi
  char v20; // dl
  uint32_t CoroId; // eax
  char *v22; // rdi
  size_t v23; // rbx
  int32_t v24; // r14d
  common::milog::MilogStringStream *p_is_time_out; // rdi
  uint32_t NextYieldId; // eax
  common::milog::MilogStringStream *ostr; // r14
  char *cur; // rdi
  size_t v29; // rbx
  char v30; // dl
  int32_t v31; // eax
  unsigned __int64 v32; // rbx
  volatile signed __int32 *v33; // rdi
  char v34; // dl
  signed __int32 v35; // eax
  char v37; // dl
  unsigned __int64 v38; // rdi
  char v39; // dl
  signed __int32 v40; // eax
  unsigned __int64 v41; // rdi
  char v42; // dl
  struct _Unwind_Exception *v43; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v44; // rdi
  common::tools::MiTimer *p_timeout_timer; // [rsp+8h] [rbp-E8h]
  unsigned __int64 v46; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v47; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v48; // [rsp+40h] [rbp-B0h] BYREF
  char v49[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = this;
  LODWORD(v4) = time_out;
  v46 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_1(96LL);
    if ( v18 )
      v46 = v18;
  }
  *(_QWORD *)v46 = 1102416563LL;
  *(_QWORD *)(v46 + 8) = "2 48 4 7 __count 64 16 11 coro_ptr:62";
  p_coro_wtr = (common::minet::CoroutineWtr *)common::minet::TimeoutCoroExec::yield;
  *(_QWORD *)(v46 + 16) = common::minet::TimeoutCoroExec::yield;
  v6 = (_DWORD *)(v46 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( !(_DWORD)v4 )
  {
    p_time_out = &this->time_out_;
    v8 = *(_BYTE *)(((unsigned __int64)&v3->time_out_ >> 3) + 0x7FFF8000);
    if ( v8 && v8 <= 3 )
    {
      __asan_report_load4(p_time_out);
      goto LABEL_26;
    }
    LODWORD(v4) = v3->time_out_;
  }
  p_coro_wtr = &v3->coro_wtr_;
  p_time_out = (uint32_t *)&v3->coro_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v3->coro_wtr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_time_out);
    goto LABEL_27;
  }
  M_pi = v3->coro_wtr_._M_refcount._M_pi;
  *(_QWORD *)(v46 + 72) = M_pi;
  if ( !M_pi )
    goto LABEL_17;
  p_time_out = (uint32_t *)&M_pi->_M_use_count;
  v10 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v10 || !v10 )
  {
    *(_DWORD *)(v46 + 48) = M_pi->_M_use_count;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v46 + 48);
      if ( !v11 )
        goto LABEL_28;
      v13 = *(_DWORD *)(v46 + 48);
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)p_time_out, v11 + 1, v11);
      v14 = v13 == v12;
      if ( v13 != v12 )
        *(_DWORD *)(v46 + 48) = v12;
      if ( v14 )
        goto LABEL_15;
    }
  }
LABEL_27:
  __asan_report_load4(p_time_out);
LABEL_28:
  v14 = 0;
LABEL_15:
  if ( !v14 )
    *(_QWORD *)(v46 + 72) = 0LL;
LABEL_17:
  M_ptr = *(std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type **)(v46 + 72);
  if ( !M_ptr )
    goto LABEL_32;
  v16 = (unsigned __int64)&M_ptr->std::enable_shared_from_this<common::minet::Coroutine>;
  v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
  if ( (char)((v16 & 7) + 3) >= v17 && v17 )
  {
    __asan_report_load4(v16);
LABEL_30:
    __asan_report_load8(p_coro_wtr);
    goto LABEL_31;
  }
  if ( *(_DWORD *)v16 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_coro_wtr >> 3) + 0x7FFF8000) )
    {
      M_ptr = v3->coro_wtr_._M_ptr;
      goto LABEL_32;
    }
    goto LABEL_30;
  }
LABEL_31:
  M_ptr = 0LL;
LABEL_32:
  *(_QWORD *)(v46 + 64) = M_ptr;
  if ( M_ptr )
  {
    p_timeout_timer = &v3->timeout_timer_;
    p_yield_id = (common::milog::MilogStringStream *)&v3->yield_id_;
    v20 = *(_BYTE *)(((unsigned __int64)&v3->yield_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v3 + 100) & 7) + 3) < v20 || !v20 )
    {
      yield_id = v3->yield_id_;
      CoroId = common::minet::TimeoutCoroExec::getCoroId(v3);
      goto LABEL_44;
    }
LABEL_43:
    CoroId = __asan_report_load4(p_yield_id);
LABEL_44:
    if ( !common::tools::MiTimer::startMS(
            p_timeout_timer,
            (uint32_t)v4,
            0,
            "src/coroutine_exec.cpp",
            "yield",
            68,
            CoroId,
            yield_id) )
    {
      p_is_time_out = (common::milog::MilogStringStream *)&v3->is_time_out_;
      if ( *(char *)(((unsigned __int64)&v3->is_time_out_ >> 3) + 0x7FFF8000) >= 0 )
      {
        v3->is_time_out_ = 0;
        NextYieldId = common::minet::Coroutine::getNextYieldId(*(common::minet::Coroutine *const *)(v46 + 64));
        goto LABEL_55;
      }
LABEL_54:
      NextYieldId = __asan_report_store1(p_is_time_out);
LABEL_55:
      v30 = *(_BYTE *)(((unsigned __int64)&v3->yield_id_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v3 + 100) & 7) + 3) >= v30 && v30 )
      {
        v31 = __asan_report_store4(&v3->yield_id_);
      }
      else
      {
        v3->yield_id_ = NextYieldId;
        v31 = common::minet::Coroutine::yield(*(common::minet::Coroutine *const *)(v46 + 64), NextYieldId);
      }
      v24 = v31;
      goto LABEL_60;
    }
    common::milog::MiLogStream::MiLogStream(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/coroutine_exec.cpp",
      "yield",
      70);
    ostr = v48.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v48.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_is_time_out = v48.ostr_;
      __asan_report_load8(v48.ostr_);
    }
    else
    {
      v3 = (common::minet::TimeoutCoroExec *)(v48.ostr_->buffer_.data_ + 0x4000);
      p_is_time_out = (common::milog::MilogStringStream *)&v48.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v48.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v48.ostr_->buffer_.cur_;
        v29 = (int)v3 - (int)cur;
        if ( v29 > 0xD )
          v29 = 14LL;
        memcpy(cur, "addTimer fails", v29);
        ostr->buffer_.cur_ += v29;
        common::milog::MiLogStream::~MiLogStream(&v48);
        v24 = 1;
        goto LABEL_60;
      }
    }
    __asan_report_load8(p_is_time_out);
    goto LABEL_54;
  }
  common::milog::MiLogStream::MiLogStream(
    &v47,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/coroutine_exec.cpp",
    "yield",
    65);
  v4 = v47.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v47.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_yield_id = v47.ostr_;
    __asan_report_load8(v47.ostr_);
    goto LABEL_42;
  }
  v3 = (common::minet::TimeoutCoroExec *)(v47.ostr_->buffer_.data_ + 0x4000);
  p_yield_id = (common::milog::MilogStringStream *)&v47.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v47.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_yield_id);
    goto LABEL_43;
  }
  v22 = v47.ostr_->buffer_.cur_;
  v23 = (int)v3 - (int)v22;
  if ( v23 > 0x11 )
    v23 = 18LL;
  memcpy(v22, "coroutine is empty", v23);
  v4->buffer_.cur_ += v23;
  common::milog::MiLogStream::~MiLogStream(&v47);
  v24 = 1;
LABEL_60:
  v32 = *(_QWORD *)(v46 + 72);
  if ( !v32 )
    goto LABEL_66;
  v33 = (volatile signed __int32 *)(v32 + 8);
  if ( &_pthread_key_create )
  {
    v34 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v33 & 7) + 3) < v34 || !v34 )
    {
      v35 = _InterlockedExchangeAdd(v33, 0xFFFFFFFF);
      goto LABEL_65;
    }
    __asan_report_store4(v33);
  }
  v37 = *(_BYTE *)(((v32 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v32 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v32 + 8);
    goto LABEL_74;
  }
  v35 = *(_DWORD *)(v32 + 8);
  *(_DWORD *)(v32 + 8) = v35 - 1;
LABEL_65:
  if ( v35 != 1 )
    goto LABEL_66;
LABEL_74:
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
    v38 = v32;
    __asan_report_load8(v32);
    goto LABEL_85;
  }
  v38 = *(_QWORD *)v32 + 16LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8(v38);
    goto LABEL_86;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v32 + 16LL))(v32);
  v38 = v32 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_87;
  v39 = *(_BYTE *)((v38 >> 3) + 0x7FFF8000);
  if ( (char)((v38 & 7) + 3) < v39 || !v39 )
  {
    v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v38, 0xFFFFFFFF);
    goto LABEL_80;
  }
LABEL_86:
  __asan_report_store4(v38);
LABEL_87:
  v42 = *(_BYTE *)(((v32 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v32 + 12) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(v32 + 12);
LABEL_91:
    v41 = v32;
    __asan_report_load8(v32);
LABEL_92:
    v43 = (struct _Unwind_Exception *)__asan_report_load8(v41);
    v44 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v46 + 72);
    if ( v44 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v44);
    __asan_handle_no_return(v44);
    _Unwind_Resume(v43);
  }
  v40 = *(_DWORD *)(v32 + 12);
  *(_DWORD *)(v32 + 12) = v40 - 1;
LABEL_80:
  if ( v40 != 1 )
    goto LABEL_66;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
    goto LABEL_91;
  v41 = *(_QWORD *)v32 + 24LL;
  if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
    goto LABEL_92;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v32 + 24LL))(v32);
LABEL_66:
  if ( v49 == (char *)v46 )
  {
    *(_QWORD *)((v46 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v46 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v46 = 1172321806LL;
    *(_QWORD *)((v46 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v46 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v24;
};

// Line 80: range 0000000000B23718-0000000000B23B8F
int32_t __fastcall common::minet::TimeoutCoroExec::resume(common::minet::TimeoutCoroExec *const this, int32_t ret)
{
  common::minet::TimeoutCoroExec *v2; // rbp
  common::milog::MilogStringStream *ostr; // r14
  unsigned __int64 v4; // rbx
  char *v5; // r12
  _DWORD *v6; // r13
  common::minet::CoroutineWtr *p_coro_wtr; // rsi
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // eax
  int v13; // ett
  bool v14; // dl
  std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  unsigned __int64 v16; // rdi
  char v17; // dl
  __int64 v18; // rax
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v21; // rbp
  int32_t v22; // r14d
  char v23; // dl
  int32_t v24; // eax
  unsigned __int64 v25; // rbp
  volatile signed __int32 *v26; // rdi
  char v27; // dl
  signed __int32 v28; // eax
  char v30; // dl
  unsigned __int64 v31; // rdi
  char v32; // dl
  signed __int32 v33; // eax
  unsigned __int64 v34; // rdi
  char v35; // dl
  struct _Unwind_Exception *v36; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v37; // rdi
  common::milog::MiLogStream v38; // [rsp+0h] [rbp-B8h] BYREF
  char v39[152]; // [rsp+20h] [rbp-98h] BYREF

  v2 = this;
  LODWORD(ostr) = ret;
  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_1(96LL);
    if ( v18 )
      v4 = v18;
  }
  v5 = (char *)(v4 + 96);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 7 __count 64 16 11 coro_ptr:81";
  *(_QWORD *)(v4 + 16) = common::minet::TimeoutCoroExec::resume;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  p_coro_wtr = &this->coro_wtr_;
  p_M_refcount = &this->coro_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v2->coro_wtr_._M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
  }
  else
  {
    M_pi = v2->coro_wtr_._M_refcount._M_pi;
    *(_QWORD *)(v4 + 72) = M_pi;
    if ( !M_pi )
      goto LABEL_13;
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&M_pi->_M_use_count;
    v10 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v10 || !v10 )
    {
      *(_DWORD *)(v4 + 48) = M_pi->_M_use_count;
      while ( 1 )
      {
        v11 = *(_DWORD *)(v4 + 48);
        if ( !v11 )
          goto LABEL_23;
        v13 = *(_DWORD *)(v4 + 48);
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)p_M_refcount, v11 + 1, v11);
        v14 = v13 == v12;
        if ( v13 != v12 )
          *(_DWORD *)(v4 + 48) = v12;
        if ( v14 )
          goto LABEL_11;
      }
    }
  }
  __asan_report_load4(p_M_refcount);
LABEL_23:
  v14 = 0;
LABEL_11:
  if ( !v14 )
    *(_QWORD *)(v4 + 72) = 0LL;
LABEL_13:
  M_ptr = *(std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 72);
  if ( !M_ptr )
    goto LABEL_27;
  v16 = (unsigned __int64)&M_ptr->std::enable_shared_from_this<common::minet::Coroutine>;
  v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
  if ( (char)((v16 & 7) + 3) >= v17 && v17 )
  {
    __asan_report_load4(v16);
LABEL_25:
    __asan_report_load8(&v2->coro_wtr_);
    goto LABEL_26;
  }
  if ( *(_DWORD *)v16 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_coro_wtr >> 3) + 0x7FFF8000) )
    {
      M_ptr = v2->coro_wtr_._M_ptr;
      goto LABEL_27;
    }
    goto LABEL_25;
  }
LABEL_26:
  M_ptr = 0LL;
LABEL_27:
  *(_QWORD *)(v4 + 64) = M_ptr;
  if ( M_ptr )
  {
    common::tools::MiTimer::cancel(&v2->timeout_timer_);
    goto LABEL_36;
  }
  common::milog::MiLogStream::MiLogStream(
    &v38,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/coroutine_exec.cpp",
    "resume",
    84);
  ostr = v38.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v38.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v38.ostr_;
    __asan_report_load8(v38.ostr_);
    goto LABEL_35;
  }
  v2 = (common::minet::TimeoutCoroExec *)(v38.ostr_->buffer_.data_ + 0x4000);
  p_cur = (common::milog::MilogStringStream *)&v38.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v38.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_cur);
LABEL_36:
    v23 = *(_BYTE *)(((unsigned __int64)&v2->yield_id_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v2 + 100) & 7) + 3) >= v23 && v23 )
      v24 = __asan_report_load4(&v2->yield_id_);
    else
      v24 = common::minet::Coroutine::resume(
              *(common::minet::Coroutine *const *)(v4 + 64),
              v2->yield_id_,
              (int32_t)ostr);
    v22 = v24;
    goto LABEL_41;
  }
  cur = v38.ostr_->buffer_.cur_;
  v21 = (int)v2 - (int)cur;
  if ( v21 > 0x11 )
    v21 = 18LL;
  memcpy(cur, "coroutine is empty", v21);
  ostr->buffer_.cur_ += v21;
  common::milog::MiLogStream::~MiLogStream(&v38);
  v22 = 1;
LABEL_41:
  v25 = *(_QWORD *)(v4 + 72);
  if ( !v25 )
    goto LABEL_47;
  v26 = (volatile signed __int32 *)(v25 + 8);
  if ( &_pthread_key_create )
  {
    v27 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v26 & 7) + 3) < v27 || !v27 )
    {
      v28 = _InterlockedExchangeAdd(v26, 0xFFFFFFFF);
      goto LABEL_46;
    }
    __asan_report_store4(v26);
  }
  v30 = *(_BYTE *)(((v25 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v25 + 8) & 7) + 3) >= v30 && v30 )
  {
    __asan_report_load4(v25 + 8);
    goto LABEL_55;
  }
  v28 = *(_DWORD *)(v25 + 8);
  *(_DWORD *)(v25 + 8) = v28 - 1;
LABEL_46:
  if ( v28 != 1 )
    goto LABEL_47;
LABEL_55:
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
  {
    v31 = v25;
    __asan_report_load8(v25);
    goto LABEL_66;
  }
  v31 = *(_QWORD *)v25 + 16LL;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v31);
    goto LABEL_67;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v25 + 16LL))(v25);
  v31 = v25 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_68;
  v32 = *(_BYTE *)((v31 >> 3) + 0x7FFF8000);
  if ( (char)((v31 & 7) + 3) < v32 || !v32 )
  {
    v33 = _InterlockedExchangeAdd((volatile signed __int32 *)v31, 0xFFFFFFFF);
    goto LABEL_61;
  }
LABEL_67:
  __asan_report_store4(v31);
LABEL_68:
  v35 = *(_BYTE *)(((v25 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v25 + 12) & 7) + 3) >= v35 && v35 )
  {
    __asan_report_load4(v25 + 12);
LABEL_72:
    v34 = v25;
    __asan_report_load8(v25);
LABEL_73:
    v36 = (struct _Unwind_Exception *)__asan_report_load8(v34);
    v37 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v5 - 3);
    if ( v37 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v37);
    __asan_handle_no_return(v37);
    _Unwind_Resume(v36);
  }
  v33 = *(_DWORD *)(v25 + 12);
  *(_DWORD *)(v25 + 12) = v33 - 1;
LABEL_61:
  if ( v33 != 1 )
    goto LABEL_47;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  v34 = *(_QWORD *)v25 + 24LL;
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v25 + 24LL))(v25);
LABEL_47:
  if ( v39 == (char *)v4 )
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
  return v22;
};

// Line 93: range 0000000000B24916-0000000000B24923
int32_t __fastcall common::minet::TimeoutCoroExec::asyncSleep(common::minet::TimeoutCoroExec *const this, uint32_t ms)
{
  return common::minet::TimeoutCoroExec::yield(this, ms);
};

// Line 117: range 0000000000B24924-0000000000B24A8D
// local variable allocation has failed, the output may be wrong!
int32_t __fastcall common::minet::PacketSenderCoroExec::sendPacket(
        common::minet::PacketSenderCoroExec *const this,
        common::minet::PacketPtr packet_ptr)
{
  common::minet::PacketSenderCoroExec *v2; // rbx
  std::_Function_base::_Manager_type *p_M_manager; // rdi
  int (**vptr_Packet)(...); // r12
  uint32_t CoroId; // eax
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  char v7; // cl
  common::milog::MilogStringStream *ostr; // rbp
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v12; // rbx
  common::milog::MiLogStream v13; // [rsp+0h] [rbp-38h] BYREF

  v2 = this;
  p_M_manager = &this->packet_sender_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)p_M_manager >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_manager);
  }
  else if ( v2->packet_sender_._M_manager )
  {
    if ( !*(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      vptr_Packet = packet_ptr._M_ptr->_vptr_Packet;
      CoroId = common::minet::TimeoutCoroExec::getCoroId(v2);
      M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)((char *)vptr_Packet
                                                                                                  + 188);
      v7 = *(_BYTE *)((((unsigned __int64)vptr_Packet + 188) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)vptr_Packet - 68) & 7) + 3) < v7 || !v7 )
      {
        *((_DWORD *)vptr_Packet + 47) = CoroId;
        if ( std::function<int ()(std::shared_ptr<common::minet::Packet> &)>::operator()(
               &v2->packet_sender_,
               (std::shared_ptr<common::minet::Packet> *)packet_ptr._M_ptr) )
        {
          return 1;
        }
        return common::minet::TimeoutCoroExec::yield(v2, 0);
      }
LABEL_17:
      __asan_report_store4(M_ptr);
      return common::minet::TimeoutCoroExec::yield(v2, 0);
    }
LABEL_16:
    M_ptr = packet_ptr._M_ptr;
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_17;
  }
  packet_ptr._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/coroutine_exec.cpp",
    "sendPacket",
    120);
  ostr = v13.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v13.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v13.ostr_;
    __asan_report_load8(v13.ostr_);
    goto LABEL_15;
  }
  v2 = (common::minet::PacketSenderCoroExec *)(v13.ostr_->buffer_.data_ + 0x4000);
  p_cur = (common::milog::MilogStringStream *)&v13.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v13.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(p_cur);
    goto LABEL_16;
  }
  cur = v13.ostr_->buffer_.cur_;
  v12 = (int)v2 - (int)cur;
  if ( v12 > 0x16 )
    v12 = 23LL;
  memcpy(cur, "packet_sender_ is null!", v12);
  ostr->buffer_.cur_ += v12;
  common::milog::MiLogStream::~MiLogStream(&v13);
  return 1;
};

// Line 133: range 0000000000B23BA8-0000000000B242FA
// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall common::minet::PacketSenderCoroExec::onRecvPacket(
        common::minet::PacketSenderCoroExec *const this,
        common::minet::PacketPtr packet_ptr)
{
  common::minet::PacketSenderCoroExec *v2; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v3; // rbp
  unsigned __int64 M_pi; // r12
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // r13
  unsigned __int64 M_ptr; // rdi
  volatile signed __int32 *p_M_use_count; // rdi
  char v8; // dl
  volatile signed __int32 *v9; // rdi
  char v10; // dl
  signed __int32 v11; // eax
  char v13; // dl
  char v14; // dl
  unsigned __int64 v15; // rdi
  char v16; // dl
  signed __int32 v17; // eax
  unsigned __int64 v18; // rdi
  char v19; // dl

  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    M_ptr = (unsigned __int64)packet_ptr._M_ptr;
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_21;
  }
  v2 = this;
  M_ptr = (unsigned __int64)&this->rsp_packet_ptr_;
  if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  v2->rsp_packet_ptr_._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)packet_ptr._M_ptr->_vptr_Packet;
  M_ptr = (unsigned __int64)&packet_ptr._M_ptr->cmd_id_;
  p_M_refcount = &v2->rsp_packet_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&packet_ptr._M_ptr->cmd_id_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(M_ptr);
    goto LABEL_23;
  }
  v3 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&packet_ptr._M_ptr->cmd_id_;
  if ( *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    p_M_use_count = (volatile signed __int32 *)p_M_refcount;
    __asan_report_load8(p_M_refcount);
    goto LABEL_24;
  }
  if ( v3 == v2->rsp_packet_ptr_._M_refcount._M_pi )
    return common::minet::TimeoutCoroExec::resume(v2, 0);
  if ( !v3 )
    goto LABEL_11;
  p_M_use_count = &v3->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_25;
  v8 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v8 || !v8 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_11;
  }
LABEL_24:
  __asan_report_store4(p_M_use_count);
LABEL_25:
  v9 = &v3->_M_use_count;
  v13 = *(_BYTE *)(((unsigned __int64)&v3->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 8) & 7) + 3) >= v13 && v13 )
  {
    __asan_report_load4(v9);
    goto LABEL_29;
  }
  ++v3->_M_use_count;
LABEL_11:
  M_pi = (unsigned __int64)v2->rsp_packet_ptr_._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_17;
  v9 = (volatile signed __int32 *)(M_pi + 8);
  if ( !&_pthread_key_create )
    goto LABEL_30;
  v10 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v9 & 7) + 3) < v10 || !v10 )
  {
    v11 = _InterlockedExchangeAdd(v9, 0xFFFFFFFF);
    goto LABEL_16;
  }
LABEL_29:
  __asan_report_store4(v9);
LABEL_30:
  v14 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) >= v14 && v14 )
  {
    __asan_report_load4(M_pi + 8);
    goto LABEL_34;
  }
  v11 = *(_DWORD *)(M_pi + 8);
  *(_DWORD *)(M_pi + 8) = v11 - 1;
LABEL_16:
  if ( v11 != 1 )
    goto LABEL_17;
LABEL_34:
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
    v15 = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_45;
  }
  v15 = *(_QWORD *)M_pi + 16LL;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_load8(v15);
    goto LABEL_46;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
  v15 = M_pi + 12;
  if ( !&_pthread_key_create )
    goto LABEL_47;
  v16 = *(_BYTE *)((v15 >> 3) + 0x7FFF8000);
  if ( (char)((v15 & 7) + 3) < v16 || !v16 )
  {
    v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF);
    goto LABEL_40;
  }
LABEL_46:
  __asan_report_store4(v15);
LABEL_47:
  v19 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 12) & 7) + 3) >= v19 && v19 )
  {
    __asan_report_load4(M_pi + 12);
LABEL_51:
    v18 = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_52;
  }
  v17 = *(_DWORD *)(M_pi + 12);
  *(_DWORD *)(M_pi + 12) = v17 - 1;
LABEL_40:
  if ( v17 != 1 )
    goto LABEL_17;
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_51;
  v18 = *(_QWORD *)M_pi + 24LL;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(v18);
    goto LABEL_53;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
LABEL_17:
  if ( !*(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
  {
    v2->rsp_packet_ptr_._M_refcount._M_pi = v3;
    return common::minet::TimeoutCoroExec::resume(v2, 0);
  }
LABEL_53:
  __asan_report_store8();
  return common::minet::TimeoutCoroExec::getCoroId((common::minet::TimeoutCoroExec *const)p_M_refcount);
};

// Line 138: range 0000000000B2588B-0000000000B258A2
void __cdecl GLOBAL__sub_I_coroutine_exec_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
