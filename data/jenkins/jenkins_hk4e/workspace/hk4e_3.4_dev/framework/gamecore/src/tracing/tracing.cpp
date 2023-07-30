// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/tracing/tracing.cpp

// Line 32: range 0000000014E7631A-0000000014E763F2
void __fastcall SpanContextGuard::SpanContextGuard(
        SpanContextGuard *const this,
        const jaegertracing::SpanContext *span_ctx_ptr)
{
  std::_Deque_base<const jaegertracing::SpanContext*> *v2; // rbx

  if ( !`guard variable for'SpanContextGuardMgr::instance(void)::instance[__readfsqword(0)] )
  {
    v2 = (std::_Deque_base<const jaegertracing::SpanContext*> *)((char *)&SpanContextGuardMgr::instance(void)::instance
                                                               + __readfsqword(0));
    v2->_M_impl._M_map = 0LL;
    v2->_M_impl._M_map_size = 0LL;
    v2->_M_impl._M_start._M_cur = 0LL;
    v2->_M_impl._M_start._M_first = 0LL;
    v2->_M_impl._M_start._M_last = 0LL;
    v2->_M_impl._M_start._M_node = 0LL;
    v2->_M_impl._M_finish._M_cur = 0LL;
    v2->_M_impl._M_finish._M_first = 0LL;
    v2->_M_impl._M_finish._M_last = 0LL;
    v2->_M_impl._M_finish._M_node = 0LL;
    std::_Deque_base<jaegertracing::SpanContext const*>::_M_initialize_map(v2, 0LL);
    `guard variable for'SpanContextGuardMgr::instance(void)::instance[__readfsqword(0)] = 1;
    __cxa_thread_atexit((void (__fastcall *)(void *))SpanContextGuardMgr::~SpanContextGuardMgr, v2, &_dso_handle);
  }
  SpanContextGuardMgr::push(
    (SpanContextGuardMgr *const)((char *)&SpanContextGuardMgr::instance(void)::instance + __readfsqword(0)),
    span_ctx_ptr);
};

// Line 37: range 0000000014E75FA0-0000000014E76068
void __fastcall SpanContextGuard::~SpanContextGuard(SpanContextGuard *const this)
{
  std::_Deque_base<const jaegertracing::SpanContext*> *v1; // rbx

  if ( !`guard variable for'SpanContextGuardMgr::instance(void)::instance[__readfsqword(0)] )
  {
    v1 = (std::_Deque_base<const jaegertracing::SpanContext*> *)((char *)&SpanContextGuardMgr::instance(void)::instance
                                                               + __readfsqword(0));
    v1->_M_impl._M_map = 0LL;
    v1->_M_impl._M_map_size = 0LL;
    v1->_M_impl._M_start._M_cur = 0LL;
    v1->_M_impl._M_start._M_first = 0LL;
    v1->_M_impl._M_start._M_last = 0LL;
    v1->_M_impl._M_start._M_node = 0LL;
    v1->_M_impl._M_finish._M_cur = 0LL;
    v1->_M_impl._M_finish._M_first = 0LL;
    v1->_M_impl._M_finish._M_last = 0LL;
    v1->_M_impl._M_finish._M_node = 0LL;
    std::_Deque_base<jaegertracing::SpanContext const*>::_M_initialize_map(v1, 0LL);
    `guard variable for'SpanContextGuardMgr::instance(void)::instance[__readfsqword(0)] = 1;
    __cxa_thread_atexit((void (__fastcall *)(void *))SpanContextGuardMgr::~SpanContextGuardMgr, v1, &_dso_handle);
  }
  SpanContextGuardMgr::pop((SpanContextGuardMgr *const)((char *)&SpanContextGuardMgr::instance(void)::instance
                                                      + __readfsqword(0)));
};

// Line 69: range 0000000014E74D22-0000000014E74ED6
const jaegertracing::SpanContext *__fastcall SpanContextGuardMgr::back(const SpanContextGuardMgr *const this)
{
  char *v2; // rcx
  unsigned __int64 v3; // rax
  _QWORD *p_M_cur; // rdi
  const jaegertracing::SpanContext **M_cur; // rdx
  __int64 v6; // rdx
  char *v7; // rdi
  const jaegertracing::SpanContext *v8; // rdx
  __int64 vars0[12]; // [rsp+0h] [rbp+0h] BYREF
  char vars60; // [rsp+60h] [rbp+60h] BYREF

  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_1(96LL);
  v2 = &vars60;
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 32 32 5 __tmp";
  vars0[2] = (__int64)SpanContextGuardMgr::back;
  v3 = (unsigned __int64)vars0 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  p_M_cur = &this->span_ctx_ptr_deque_._M_impl._M_finish._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&this->span_ctx_ptr_deque_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_cur);
    goto LABEL_13;
  }
  M_cur = this->span_ctx_ptr_deque_._M_impl._M_finish._M_cur;
  p_M_cur = &this->span_ctx_ptr_deque_._M_impl._M_start._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&this->span_ctx_ptr_deque_._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_M_cur);
LABEL_14:
    __asan_report_load8(p_M_cur);
    goto LABEL_15;
  }
  if ( M_cur == this->span_ctx_ptr_deque_._M_impl._M_start._M_cur )
  {
LABEL_20:
    v8 = 0LL;
    goto LABEL_11;
  }
  vars0[4] = (__int64)this->span_ctx_ptr_deque_._M_impl._M_finish._M_cur;
  p_M_cur = &this->span_ctx_ptr_deque_._M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->span_ctx_ptr_deque_._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
    goto LABEL_14;
  p_M_cur = &this->span_ctx_ptr_deque_._M_impl._M_finish._M_node;
  if ( !*(_BYTE *)(((unsigned __int64)&this->span_ctx_ptr_deque_._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    p_M_cur = this->span_ctx_ptr_deque_._M_impl._M_finish._M_node;
    if ( M_cur != this->span_ctx_ptr_deque_._M_impl._M_finish._M_first )
      goto LABEL_9;
    goto LABEL_16;
  }
LABEL_15:
  v3 = __asan_report_load8(p_M_cur);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)(p_M_cur - 1) >> 3) + 0x7FFF8000) )
  {
    v7 = (char *)(p_M_cur - 1);
    __asan_report_load8(v7);
    goto LABEL_19;
  }
  *((_QWORD *)v2 - 8) = *(p_M_cur - 1) + 512LL;
LABEL_9:
  v6 = *((_QWORD *)v2 - 8);
  v7 = (char *)(v6 - 8);
  if ( *(_BYTE *)(((unsigned __int64)(v6 - 8) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v3 = __asan_report_load8(v7);
    goto LABEL_20;
  }
  v8 = *(const jaegertracing::SpanContext **)(v6 - 8);
LABEL_11:
  *(_DWORD *)(v3 + 2147450880) = 0;
  *(_DWORD *)(v3 + 2147450888) = 0;
  return v8;
};

// Line 79: range 0000000014E7B18A-0000000014E7B46F
void __fastcall SpanProxy::SpanProxy(
        SpanProxy *const this,
        TracingMgr *tracing_mgr,
        opentracing::v3::string_view operation_name,
        const jaegertracing::SpanContext *span_ctx_ptr,
        uint32_t expired_seconds,
        const int *retcode)
{
  std::function<void(std::shared_ptr<jaegertracing::Span>&)> *p_fini_func; // r12
  TracingMgr *v7; // r14
  SpanProxy *v8; // rbx
  SpanPtr *p_span_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::_Any_data M_functor; // rax
  std::_Function_base::_Manager_type M_manager; // rax
  std::function<void(std::shared_ptr<jaegertracing::Span>&)> *p_M_manager; // rdi
  std::function<void(std::shared_ptr<jaegertracing::Span>&)>::_Invoker_type M_invoker; // rax
  SpanContextGuardMgr *v15; // rax
  SpanContextGuardMgr *v16; // r14
  unsigned __int64 M_ptr; // rdi
  unsigned __int64 v18; // rdx
  const jaegertracing::SpanContext *v19; // rax
  struct _Unwind_Exception *v20; // r14
  void (__fastcall *v21)(std::function<void(std::shared_ptr<jaegertracing::Span>&)> *, std::function<void(std::shared_ptr<jaegertracing::Span>&)> *, __int64); // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  std::__shared_ptr<jaegertracing::Span,(__gnu_cxx::_Lock_policy)2>::element_type *v23; // [rsp+0h] [rbp-50h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // [rsp+8h] [rbp-48h]
  std::function<void(std::shared_ptr<jaegertracing::Span>&)> v25; // [rsp+10h] [rbp-40h] BYREF

  v8 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this);
    goto LABEL_9;
  }
  v7 = tracing_mgr;
  this->tracing_mgr_ = tracing_mgr;
  this = (SpanProxy *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8(this);
    goto LABEL_10;
  }
  v8->span_ptr_._M_ptr = 0LL;
  this = (SpanProxy *const)&v8->span_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v8->span_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8(this);
    goto LABEL_11;
  }
  v8->span_ptr_._M_refcount._M_pi = 0LL;
  p_fini_func = &v8->fini_func_;
  this = (SpanProxy *const)&v8->fini_func_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&v8->fini_func_._M_manager >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8(this);
    goto LABEL_12;
  }
  v8->fini_func_._M_manager = 0LL;
  if ( *(char *)(((unsigned __int64)tracing_mgr >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_12:
    __asan_report_load1(tracing_mgr);
    goto LABEL_13;
  }
  if ( !tracing_mgr->is_enabled_ )
    return;
LABEL_13:
  TracingMgr::startSpan(tracing_mgr, operation_name, span_ctx_ptr, 1, expired_seconds);
  p_span_ptr = &v8->span_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&v8->span_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_span_ptr);
LABEL_25:
    __asan_report_load8(p_span_ptr);
    goto LABEL_26;
  }
  v8->span_ptr_._M_ptr = v23;
  M_pi = v8->span_ptr_._M_refcount._M_pi;
  v8->span_ptr_._M_refcount._M_pi = v24;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  p_span_ptr = &v8->span_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&v8->span_ptr_ >> 3) + 0x7FFF8000) )
    goto LABEL_25;
  if ( v8->span_ptr_._M_ptr )
  {
    tracing_mgr = v7;
    std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function<SpanProxy::SpanProxy(TracingMgr *,opentracing::v3::string_view,jaegertracing::SpanContext const*,unsigned int,int const&)::{lambda(std::shared_ptr<jaegertracing::Span> &)#1},void,void>(
      &v25,
      (SpanProxy::SpanProxy::<lambda(SpanPtr&)>)__PAIR128__((unsigned __int64)retcode, (unsigned __int64)v7));
    M_functor = v25._M_functor;
    if ( !*(_WORD *)(((unsigned __int64)p_fini_func >> 3) + 0x7FFF8000) )
    {
      v25._M_functor = (std::_Any_data)_mm_loadu_si128((const __m128i *)&v8->fini_func_);
      v8->fini_func_._M_functor = M_functor;
      M_manager = v25._M_manager;
      p_M_manager = (std::function<void(std::shared_ptr<jaegertracing::Span>&)> *)&p_fini_func->_M_manager;
      if ( !*(_BYTE *)(((unsigned __int64)&p_fini_func->_M_manager >> 3) + 0x7FFF8000) )
      {
        v25._M_manager = p_fini_func->_M_manager;
        p_fini_func->_M_manager = M_manager;
        M_invoker = v25._M_invoker;
        p_M_manager = (std::function<void(std::shared_ptr<jaegertracing::Span>&)> *)&p_fini_func->_M_invoker;
        if ( !*(_BYTE *)(((unsigned __int64)&p_fini_func->_M_invoker >> 3) + 0x7FFF8000) )
        {
          v25._M_invoker = p_fini_func->_M_invoker;
          p_fini_func->_M_invoker = M_invoker;
          if ( v25._M_manager )
            v25._M_manager((std::_Any_data *)&v25, (const std::_Any_data *)&v25, __destroy_functor);
          v15 = SpanContextGuardMgr::instance();
LABEL_29:
          v16 = v15;
          M_ptr = (unsigned __int64)&v8->span_ptr_;
          if ( *(_BYTE *)(((unsigned __int64)&v8->span_ptr_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(M_ptr);
          }
          else
          {
            M_ptr = (unsigned __int64)v8->span_ptr_._M_ptr;
            if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
            {
              v18 = *(_QWORD *)M_ptr + 80LL;
              if ( !*(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              {
                v19 = (const jaegertracing::SpanContext *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)M_ptr + 80LL))(M_ptr);
                SpanContextGuardMgr::push(v16, v19);
                return;
              }
LABEL_35:
              v20 = (struct _Unwind_Exception *)__asan_report_load8(v18);
              if ( *(_BYTE *)(((unsigned __int64)&v8->fini_func_._M_manager >> 3) + 0x7FFF8000) )
                __asan_report_load8(&v8->fini_func_._M_manager);
              v21 = (void (__fastcall *)(std::function<void(std::shared_ptr<jaegertracing::Span>&)> *, std::function<void(std::shared_ptr<jaegertracing::Span>&)> *, __int64))v8->fini_func_._M_manager;
              if ( v21 )
                v21(&v8->fini_func_, &v8->fini_func_, 3LL);
              if ( *(_BYTE *)(((unsigned __int64)&v8->span_ptr_._M_refcount >> 3) + 0x7FFF8000) )
                __asan_report_load8(&v8->span_ptr_._M_refcount);
              v22 = v8->span_ptr_._M_refcount._M_pi;
              if ( v22 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
              __asan_handle_no_return(v22);
              _Unwind_Resume(v20);
            }
          }
          __asan_report_load8(M_ptr);
          goto LABEL_35;
        }
LABEL_28:
        v15 = (SpanContextGuardMgr *)__asan_report_load8(p_M_manager);
        goto LABEL_29;
      }
LABEL_27:
      __asan_report_load8(p_M_manager);
      goto LABEL_28;
    }
LABEL_26:
    p_M_manager = p_fini_func;
    __asan_report_load16(p_fini_func, tracing_mgr, *(_QWORD *)&M_functor._M_pod_data[8]);
    goto LABEL_27;
  }
};

// Line 101: range 0000000014E7B474-0000000014E7B6D1
void __fastcall SpanProxy::SpanProxy(
        SpanProxy *const this,
        TracingMgr *tracing_mgr,
        opentracing::v3::string_view operation_name,
        const jaegertracing::SpanContext *span_ctx_ptr,
        uint32_t expired_seconds,
        std::function<void(std::shared_ptr<jaegertracing::Span>&)> *p_fini_func)
{
  const char *data; // r12
  size_t length; // r13
  uint32_t v8; // r14d
  const jaegertracing::SpanContext *v9; // r15
  SpanProxy *v10; // rbx
  void *p_span_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rdi
  SpanContextGuardMgr *v13; // rax
  SpanContextGuardMgr *v14; // r14
  unsigned __int64 M_ptr; // rdi
  unsigned __int64 v16; // rdx
  const jaegertracing::SpanContext *v17; // rax
  struct _Unwind_Exception *v18; // r15
  void (__fastcall *M_manager)(std::function<void(std::shared_ptr<jaegertracing::Span>&)> *, std::function<void(std::shared_ptr<jaegertracing::Span>&)> *, __int64); // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::__shared_ptr<jaegertracing::Span,(__gnu_cxx::_Lock_policy)2>::element_type *v21; // [rsp+0h] [rbp-40h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // [rsp+8h] [rbp-38h]
  opentracing::v3::string_view v23; // 0:rdx.16

  v10 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this);
    goto LABEL_6;
  }
  data = operation_name.data_;
  length = operation_name.length_;
  v9 = span_ctx_ptr;
  v8 = expired_seconds;
  this->tracing_mgr_ = tracing_mgr;
  this = (SpanProxy *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_store8(this);
    goto LABEL_7;
  }
  v10->span_ptr_._M_ptr = 0LL;
  this = (SpanProxy *const)&v10->span_ptr_._M_refcount;
  if ( !*(_BYTE *)(((unsigned __int64)&v10->span_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
    v10->span_ptr_._M_refcount._M_pi = 0LL;
    tracing_mgr = (TracingMgr *)p_fini_func;
    std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function(&v10->fini_func_, p_fini_func);
    goto LABEL_8;
  }
LABEL_7:
  __asan_report_store8(this);
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v10);
    goto LABEL_13;
  }
  tracing_mgr = v10->tracing_mgr_;
  if ( *(char *)(((unsigned __int64)v10->tracing_mgr_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_13:
    __asan_report_load1(tracing_mgr);
    goto LABEL_14;
  }
  if ( !tracing_mgr->is_enabled_ )
    return;
LABEL_14:
  v23.data_ = data;
  v23.length_ = length;
  TracingMgr::startSpan(tracing_mgr, v23, v9, 1, v8);
  p_span_ptr = &v10->span_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&v10->span_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_span_ptr);
    goto LABEL_22;
  }
  v10->span_ptr_._M_ptr = v21;
  p_span_ptr = &v10->span_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v10->span_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_span_ptr);
LABEL_23:
    v13 = (SpanContextGuardMgr *)__asan_report_load8(p_span_ptr);
LABEL_24:
    v14 = v13;
    M_ptr = (unsigned __int64)&v10->span_ptr_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->span_ptr_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_ptr);
    }
    else
    {
      M_ptr = (unsigned __int64)v10->span_ptr_._M_ptr;
      if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
      {
        v16 = *(_QWORD *)M_ptr + 80LL;
        if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          v17 = (const jaegertracing::SpanContext *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)M_ptr + 80LL))(M_ptr);
          SpanContextGuardMgr::push(v14, v17);
          return;
        }
LABEL_30:
        v18 = (struct _Unwind_Exception *)__asan_report_load8(v16);
        if ( *(_BYTE *)(((unsigned __int64)&v10->fini_func_._M_manager >> 3) + 0x7FFF8000) )
          __asan_report_load8(&v10->fini_func_._M_manager);
        M_manager = (void (__fastcall *)(std::function<void(std::shared_ptr<jaegertracing::Span>&)> *, std::function<void(std::shared_ptr<jaegertracing::Span>&)> *, __int64))v10->fini_func_._M_manager;
        if ( M_manager )
          M_manager(&v10->fini_func_, &v10->fini_func_, 3LL);
        while ( *(_BYTE *)(((unsigned __int64)&v10->span_ptr_._M_refcount >> 3) + 0x7FFF8000) )
          v18 = (struct _Unwind_Exception *)__asan_report_load8(&v10->span_ptr_._M_refcount);
        M_pi = v10->span_ptr_._M_refcount._M_pi;
        if ( M_pi )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
        __asan_handle_no_return(M_pi);
        _Unwind_Resume(v18);
      }
    }
    __asan_report_load8(M_ptr);
    goto LABEL_30;
  }
  v12 = v10->span_ptr_._M_refcount._M_pi;
  v10->span_ptr_._M_refcount._M_pi = v22;
  if ( v12 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v12);
  p_span_ptr = &v10->span_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&v10->span_ptr_ >> 3) + 0x7FFF8000) )
    goto LABEL_23;
  if ( v10->span_ptr_._M_ptr )
  {
    v13 = SpanContextGuardMgr::instance();
    goto LABEL_24;
  }
};

// Line 118: range 0000000014E7606E-0000000014E76318
void __fastcall SpanProxy::~SpanProxy(SpanProxy *const this)
{
  const jaegertracing::SpanContext *p_fini_func; // rsi
  SpanPtr *p_span_ptr; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_manager; // rdi
  std::_Function_base::_Manager_type M_manager; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::_Deque_base<const jaegertracing::SpanContext*> *v7; // rbp

  p_span_ptr = &this->span_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)p_span_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_span_ptr);
LABEL_13:
    v7 = (std::_Deque_base<const jaegertracing::SpanContext*> *)((char *)&SpanContextGuardMgr::instance(void)::instance
                                                               + __readfsqword(0));
    v7->_M_impl._M_map = 0LL;
    v7->_M_impl._M_map_size = 0LL;
    v7->_M_impl._M_start._M_cur = 0LL;
    v7->_M_impl._M_start._M_first = 0LL;
    v7->_M_impl._M_start._M_last = 0LL;
    v7->_M_impl._M_start._M_node = 0LL;
    v7->_M_impl._M_finish._M_cur = 0LL;
    v7->_M_impl._M_finish._M_first = 0LL;
    v7->_M_impl._M_finish._M_last = 0LL;
    v7->_M_impl._M_finish._M_node = 0LL;
    std::_Deque_base<jaegertracing::SpanContext const*>::_M_initialize_map(v7, 0LL);
    `guard variable for'SpanContextGuardMgr::instance(void)::instance[__readfsqword(0)] = 1;
    p_fini_func = (const jaegertracing::SpanContext *)v7;
    __cxa_thread_atexit((void (__fastcall *)(void *))SpanContextGuardMgr::~SpanContextGuardMgr, v7, &_dso_handle);
    goto LABEL_4;
  }
  if ( !this->span_ptr_._M_ptr )
    goto LABEL_5;
  p_fini_func = (const jaegertracing::SpanContext *)&this->span_ptr_;
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::operator()(&this->fini_func_, &this->span_ptr_);
  if ( !`guard variable for'SpanContextGuardMgr::instance(void)::instance[__readfsqword(0)] )
    goto LABEL_13;
LABEL_4:
  SpanContextGuardMgr::pop((SpanContextGuardMgr *const)((char *)&SpanContextGuardMgr::instance(void)::instance
                                                      + __readfsqword(0)));
LABEL_5:
  p_M_manager = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&this->fini_func_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&this->fini_func_._M_manager >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_manager);
LABEL_15:
    __asan_report_load8(p_M_manager);
    SpanContextGuardMgr::push((SpanContextGuardMgr *const)p_M_manager, p_fini_func);
    return;
  }
  M_manager = this->fini_func_._M_manager;
  if ( M_manager )
  {
    p_fini_func = (const jaegertracing::SpanContext *)&this->fini_func_;
    M_manager(&this->fini_func_._M_functor, &this->fini_func_._M_functor, __destroy_functor);
  }
  p_M_manager = &this->span_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->span_ptr_._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_15;
  M_pi = this->span_ptr_._M_refcount._M_pi;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
};

// Line 128: range 0000000014E74EDC-0000000014E751FF
// local variable allocation has failed, the output may be wrong!
void __fastcall SpanProxy::SetTag(
        SpanProxy *const this,
        opentracing::v3::string_view key,
        const opentracing::v3::Value *value)
{
  unsigned __int64 p_span_ptr; // rdi
  unsigned __int64 v4; // r8

  if ( *(_BYTE *)(((unsigned __int64)&this->span_ptr_ >> 3) + 0x7FFF8000) )
  {
    p_span_ptr = (unsigned __int64)&this->span_ptr_;
    __asan_report_load8(p_span_ptr);
LABEL_8:
    __asan_report_load8(p_span_ptr);
    goto LABEL_9;
  }
  p_span_ptr = (unsigned __int64)this->span_ptr_._M_ptr;
  if ( !p_span_ptr )
    return;
  if ( *(_BYTE *)((p_span_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_8;
  v4 = *(_QWORD *)p_span_ptr + 32LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(v4);
    JUMPOUT(0x14E74F43LL);
  }
  (*(void (__fastcall **)(unsigned __int64, const char *, size_t, const opentracing::v3::Value *))(*(_QWORD *)p_span_ptr
                                                                                                 + 32LL))(
    p_span_ptr,
    key.data_,
    key.length_,
    value);
};

// Line 153: range 0000000014E7B6D6-0000000014E7B800
void __fastcall PerfSpanProxy::PerfSpanProxy(
        PerfSpanProxy *const this,
        TracingMgr *tracing_mgr,
        opentracing::v3::string_view operation_name)
{
  PerfSpanProxy *v3; // rbx
  char v4; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v5; // rdi
  struct _Unwind_Exception *v6; // rax
  struct _Unwind_Exception *v7; // r14
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::__shared_ptr<jaegertracing::Span,(__gnu_cxx::_Lock_policy)2>::element_type *v9; // [rsp+0h] [rbp-20h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // [rsp+8h] [rbp-18h]

  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this);
    goto LABEL_8;
  }
  this->span_ptr_._M_ptr = 0LL;
  this = (PerfSpanProxy *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8(this);
    goto LABEL_9;
  }
  v3->span_ptr_._M_refcount._M_pi = 0LL;
  this = (PerfSpanProxy *const)&tracing_mgr->is_perf_span_enabled_;
  v4 = *(_BYTE *)(((unsigned __int64)&tracing_mgr->is_perf_span_enabled_ >> 3) + 0x7FFF8000);
  if ( v4 > (((unsigned __int8)tracing_mgr + 1) & 7) || !v4 )
  {
    if ( !tracing_mgr->is_perf_span_enabled_ )
      return;
    goto LABEL_10;
  }
LABEL_9:
  __asan_report_load1(this);
LABEL_10:
  TracingMgr::startSpan(tracing_mgr, operation_name, 0LL, 0, 0);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v3);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)&v3->span_ptr_._M_refcount >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v3->span_ptr_._M_refcount);
    M_pi = v3->span_ptr_._M_refcount._M_pi;
    if ( M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
    __asan_handle_no_return(M_pi);
    _Unwind_Resume(v7);
  }
  v3->span_ptr_._M_ptr = v9;
  v5 = v3->span_ptr_._M_refcount._M_pi;
  v3->span_ptr_._M_refcount._M_pi = v10;
  if ( v5 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v5);
};

// Line 165: range 0000000014E76CF6-0000000014E774FD
common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *__fastcall SpanHolder::create(
        unsigned __int64 a1,
        TracingMgr *tracing_mgr,
        SpanPtr *span_ptr)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r14
  std::string *p_type; // r15
  common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  _DWORD *v8; // r13
  char v9; // al
  std::forward_iterator_tag v10; // cl
  char v11; // al
  char v12; // dl
  __int64 v13; // rax
  std::forward_iterator_tag v14; // cl
  std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2> *v15; // rsi
  common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *v16; // rdi
  bool *v17; // rdi
  char v18; // al
  _QWORD *v19; // rdi
  __int64 v20; // rax
  char v21; // cl
  common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *v22; // rdi
  char v23; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rdi
  struct _Unwind_Exception *v26; // rbx
  char v27; // dl
  std::string::size_type *v28; // rdi
  char v29; // al
  char v30; // dl
  void *v31; // rdi
  unsigned __int64 v32; // r12
  _QWORD *v33; // rdi
  __int64 v34; // rax
  char v35; // cl
  common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *v36; // rdi
  char v37; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v38; // rdi
  struct _Unwind_Exception *v39; // rbx
  void *v40; // rdi
  char v41; // dl
  common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *v43; // [rsp+18h] [rbp-C0h]
  std::string type; // [rsp+20h] [rbp-B8h] BYREF
  char v45[152]; // [rsp+40h] [rbp-98h] BYREF

  v5 = (common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *)a1;
  v6 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v6 = v13;
  }
  v7 = v6 + 96;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v6 + 16) = SpanHolder::create;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -202178560;
  v9 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v9 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v9 )
  {
    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
LABEL_16:
    __asan_report_store8(a1);
LABEL_17:
    __asan_report_store4(a1);
LABEL_18:
    __asan_report_store4(a1);
    goto LABEL_19;
  }
  if ( !common::tools::perf::MemoryPerf::is_record )
    goto LABEL_72;
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  *(_QWORD *)a1 = 0LL;
  v43 = (common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *)(a1 + 8);
  std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *)(v6 + 48));
  p_anon_0 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)(v6 + 72);
  a1 = (unsigned __int64)(&p_anon_0->_M_allocated_capacity + 1);
  v11 = *(_BYTE *)(((unsigned __int64)(&p_anon_0->_M_allocated_capacity + 1) >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_17;
  *((_DWORD *)&p_anon_0->_M_allocated_capacity + 2) = 1;
  a1 = (unsigned __int64)&p_anon_0->_M_allocated_capacity + 12;
  v12 = *(_BYTE *)((((unsigned __int64)&p_anon_0->_M_allocated_capacity + 12) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)p_anon_0 + 12) & 7) + 3) >= v12 && v12 )
    goto LABEL_18;
  *((_DWORD *)&p_anon_0->_M_allocated_capacity + 3) = 1;
  if ( *(_BYTE *)(((unsigned __int64)p_anon_0 >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8(p_anon_0);
    goto LABEL_20;
  }
  p_anon_0->_M_allocated_capacity = (std::string::size_type)(&`vtable for'std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>
                                                           + 2);
  p_type = (std::string *)&p_anon_0[1];
  if ( !common::tools::perf::MemoryPerf::is_record )
    goto LABEL_22;
  type._M_dataplus._M_p = type._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&type, "10SpanHolder", "", v10);
LABEL_20:
  common::tools::perf::MemoryPerfRecorder::construct(&common::tools::perf::MemoryPerf::recorder, &type, 0x38uLL);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
    operator delete(type._M_dataplus._M_p);
LABEL_22:
  SpanHolder::SpanHolder((SpanHolder *const)p_type, tracing_mgr, span_ptr);
  *(_QWORD *)(v6 + 72) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v43);
    goto LABEL_56;
  }
  *(_QWORD *)v5[8].gap0 = p_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    v17 = (bool *)v5;
    __asan_report_store8(v5);
LABEL_57:
    __asan_report_load1(v17);
LABEL_58:
    p_type = &type;
    p_anon_0 = &type._anon_0;
    type._M_dataplus._M_p = type._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&type, "10SpanHolder", "", v14);
    common::tools::perf::MemoryPerfRecorder::deallocate(&common::tools::perf::MemoryPerf::recorder, &type);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
      operator delete(type._M_dataplus._M_p);
    goto LABEL_32;
  }
  *(_QWORD *)v5->gap0 = p_type;
  v7 = *(_QWORD *)(v6 + 72);
  if ( !v7 )
    goto LABEL_33;
  v17 = &common::tools::perf::MemoryPerf::is_record;
  v18 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v18 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v18 )
    goto LABEL_57;
  if ( common::tools::perf::MemoryPerf::is_record )
    goto LABEL_58;
LABEL_32:
  free((void *)v7);
LABEL_33:
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    v16 = v5;
    v26 = (struct _Unwind_Exception *)__asan_report_load8(v5);
    v15 = *(std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2> **)(v7 - 24);
    if ( v15 )
    {
      v16 = *(common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> **)(v7 - 32);
      common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder>::deallocate(
        v16,
        v15,
        1uLL);
    }
    __asan_handle_no_return(v16);
    _Unwind_Resume(v26);
  }
  v7 = *(_QWORD *)v5->gap0;
  if ( *(_QWORD *)v5->gap0 )
  {
    v19 = (_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(((v7 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v19);
    }
    else
    {
      v20 = *(_QWORD *)(v7 + 8);
      if ( !v20 )
        goto LABEL_40;
      v19 = (_QWORD *)(v20 + 8);
      v21 = *(_BYTE *)(((unsigned __int64)(v20 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v20 + 8) & 7) + 3) < v21 || !v21 )
      {
        if ( *(_DWORD *)(v20 + 8) )
          goto LABEL_52;
LABEL_40:
        if ( !*(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v7 = v7;
          p_type = (std::string *)(v7 + 8);
          if ( !*(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
          {
            p_anon_0 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)v5[8].gap0;
            if ( !p_anon_0 )
              goto LABEL_47;
            v22 = (common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *)&p_anon_0->_M_allocated_capacity
                + 12;
            if ( !&_pthread_key_create )
              goto LABEL_66;
            v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)v22 & 7) + 3) < v23 || !v23 )
            {
              _InterlockedAdd((volatile signed __int32 *)v22->gap0, 1u);
              goto LABEL_47;
            }
LABEL_65:
            __asan_report_store4(v22);
LABEL_66:
            v27 = *(_BYTE *)((((unsigned __int64)&p_anon_0->_M_allocated_capacity + 12) >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)p_anon_0 + 12) & 7) + 3) >= v27 && v27 )
            {
              __asan_report_load4((char *)&p_anon_0->_M_allocated_capacity + 12);
              goto LABEL_70;
            }
            ++*((_DWORD *)&p_anon_0->_M_allocated_capacity + 3);
LABEL_47:
            if ( !*(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
            {
              v24 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 8);
              if ( v24 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v24);
              if ( !*(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v7 + 8) = p_anon_0;
                goto LABEL_52;
              }
              goto LABEL_71;
            }
LABEL_70:
            __asan_report_load8(p_type);
LABEL_71:
            __asan_report_store8(p_type);
LABEL_72:
            if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
            {
              v28 = (std::string::size_type *)v5;
              __asan_report_store8(v5);
            }
            else
            {
              *(_QWORD *)v5->gap0 = 0LL;
              v43 = v5 + 8;
              std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,std::allocator<SpanHolder>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,std::allocator<SpanHolder>,(__gnu_cxx::_Lock_policy)2> > *)(v7 - 48));
              p_anon_0 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)(v7 - 24);
              v28 = &p_anon_0->_M_allocated_capacity + 1;
              v29 = *(_BYTE *)(((unsigned __int64)(&p_anon_0->_M_allocated_capacity + 1) >> 3) + 0x7FFF8000);
              if ( !v29 || v29 > 3 )
              {
                *((_DWORD *)&p_anon_0->_M_allocated_capacity + 2) = 1;
                v28 = (std::string::size_type *)((char *)&p_anon_0->_M_allocated_capacity + 12);
                v30 = *(_BYTE *)((((unsigned __int64)&p_anon_0->_M_allocated_capacity + 12) >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)p_anon_0 + 12) & 7) + 3) < v30 || !v30 )
                {
                  *((_DWORD *)&p_anon_0->_M_allocated_capacity + 3) = 1;
                  if ( !*(_BYTE *)(((unsigned __int64)p_anon_0 >> 3) + 0x7FFF8000) )
                  {
                    p_anon_0->_M_allocated_capacity = (std::string::size_type)(&`vtable for'std::_Sp_counted_ptr_inplace<SpanHolder,std::allocator<SpanHolder>,(__gnu_cxx::_Lock_policy)2>
                                                                             + 2);
                    p_type = (std::string *)&p_anon_0[1];
                    SpanHolder::SpanHolder((SpanHolder *const)&p_anon_0[1], tracing_mgr, span_ptr);
                    goto LABEL_83;
                  }
LABEL_82:
                  __asan_report_store8(p_anon_0);
LABEL_83:
                  *(_QWORD *)(v7 - 24) = 0LL;
                  if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store8(v43);
                  }
                  else
                  {
                    *(_QWORD *)v5[8].gap0 = p_anon_0;
                    if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)v5->gap0 = p_type;
                      v31 = *(void **)(v7 - 24);
                      if ( v31 )
                        operator delete(v31);
                      if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
                      {
                        v32 = *(_QWORD *)v5->gap0;
                        if ( !*(_QWORD *)v5->gap0 )
                          goto LABEL_52;
                        v33 = (_QWORD *)(v32 + 8);
                        if ( *(_BYTE *)(((v32 + 8) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(v33);
                        }
                        else
                        {
                          v34 = *(_QWORD *)(v32 + 8);
                          if ( !v34 )
                            goto LABEL_94;
                          v33 = (_QWORD *)(v34 + 8);
                          v35 = *(_BYTE *)(((unsigned __int64)(v34 + 8) >> 3) + 0x7FFF8000);
                          if ( (char)(((v34 + 8) & 7) + 3) < v35 || !v35 )
                          {
                            if ( *(_DWORD *)(v34 + 8) )
                              goto LABEL_52;
LABEL_94:
                            if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
                            {
                              *(_QWORD *)v32 = v32;
                              p_type = (std::string *)(v32 + 8);
                              if ( !*(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
                              {
                                p_anon_0 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)v5[8].gap0;
                                if ( !p_anon_0 )
                                  goto LABEL_101;
                                v36 = (common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<SpanHolder,common::tools::perf::allocator<SpanHolder,SpanHolder>,(__gnu_cxx::_Lock_policy)2>,SpanHolder> *)&p_anon_0->_M_allocated_capacity
                                    + 12;
                                if ( !&_pthread_key_create )
                                  goto LABEL_116;
                                v37 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
                                if ( (char)(((unsigned __int8)v36 & 7) + 3) < v37 || !v37 )
                                {
                                  _InterlockedAdd((volatile signed __int32 *)v36->gap0, 1u);
                                  goto LABEL_101;
                                }
LABEL_115:
                                __asan_report_store4(v36);
LABEL_116:
                                v41 = *(_BYTE *)((((unsigned __int64)&p_anon_0->_M_allocated_capacity + 12) >> 3)
                                               + 0x7FFF8000);
                                if ( (char)((((_BYTE)p_anon_0 + 12) & 7) + 3) >= v41 && v41 )
                                {
                                  __asan_report_load4((char *)&p_anon_0->_M_allocated_capacity + 12);
                                  goto LABEL_120;
                                }
                                ++*((_DWORD *)&p_anon_0->_M_allocated_capacity + 3);
LABEL_101:
                                if ( !*(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
                                {
                                  v38 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v32 + 8);
                                  if ( v38 )
                                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v38);
                                  if ( !*(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
                                  {
                                    *(_QWORD *)(v32 + 8) = p_anon_0;
                                    goto LABEL_52;
                                  }
LABEL_121:
                                  __asan_report_store8(p_type);
                                  goto LABEL_122;
                                }
LABEL_120:
                                __asan_report_load8(p_type);
                                goto LABEL_121;
                              }
LABEL_114:
                              v36 = v43;
                              __asan_report_load8(v43);
                              goto LABEL_115;
                            }
LABEL_113:
                            __asan_report_store8(v32);
                            goto LABEL_114;
                          }
                        }
                        __asan_report_load4(v33);
                        goto LABEL_113;
                      }
LABEL_108:
                      v39 = (struct _Unwind_Exception *)__asan_report_load8(v5);
                      v40 = *(void **)(v7 - 24);
                      if ( v40 )
                        operator delete(v40);
                      __asan_handle_no_return(v40);
                      _Unwind_Resume(v39);
                    }
                  }
                  __asan_report_store8(v5);
                  goto LABEL_108;
                }
LABEL_81:
                __asan_report_store4(v28);
                goto LABEL_82;
              }
            }
            __asan_report_store4(v28);
            goto LABEL_81;
          }
LABEL_64:
          v22 = v43;
          __asan_report_load8(v43);
          goto LABEL_65;
        }
LABEL_63:
        __asan_report_store8(v7);
        goto LABEL_64;
      }
    }
    __asan_report_load4(v19);
    goto LABEL_63;
  }
LABEL_52:
  if ( v45 != (char *)v6 )
  {
LABEL_122:
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
    return v5;
  }
  *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  return v5;
};

// Line 175: range 0000000014E75C7E-0000000014E75F9A
void __fastcall SpanHolder::~SpanHolder(SpanHolder *const this)
{
  unsigned __int64 p_timer_ptr; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v4; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v5; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v6; // rdi
  volatile signed __int32 *p_M_weak_count; // rax
  char v8; // cl
  signed __int32 M_weak_count; // eax
  char v10; // cl
  unsigned __int64 v11; // rdx

  p_timer_ptr = (unsigned __int64)&this->timer_ptr;
  if ( *(_BYTE *)((p_timer_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_timer_ptr);
    goto LABEL_20;
  }
  this->timer_ptr._M_ptr = 0LL;
  p_timer_ptr = (unsigned __int64)&this->timer_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(p_timer_ptr);
LABEL_21:
    __asan_report_load8(p_timer_ptr);
LABEL_22:
    __asan_report_load8(p_timer_ptr);
LABEL_23:
    p_M_weak_count = (volatile signed __int32 *)__asan_report_load8(p_timer_ptr);
    goto LABEL_24;
  }
  M_pi = this->timer_ptr._M_refcount._M_pi;
  this->timer_ptr._M_refcount._M_pi = 0LL;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  p_timer_ptr = (unsigned __int64)&this->timer_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_ptr._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_21;
  v4 = this->timer_ptr._M_refcount._M_pi;
  if ( v4 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v4);
  p_timer_ptr = (unsigned __int64)&this->span_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->span_ptr_._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_22;
  v5 = this->span_ptr_._M_refcount._M_pi;
  if ( v5 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v5);
  p_timer_ptr = (unsigned __int64)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_23;
  v6 = this->_M_weak_this._M_refcount._M_pi;
  if ( !v6 )
    return;
  p_M_weak_count = &v6->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_25;
  v8 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v8 || !v8 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_17;
  }
LABEL_24:
  v6 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)p_M_weak_count;
  __asan_report_store4(p_M_weak_count);
LABEL_25:
  v10 = *(_BYTE *)(((unsigned __int64)&v6->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v6 + 12) & 7) + 3) >= v10 && v10 )
  {
    v6 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v6 + 12);
    __asan_report_load4(v6);
LABEL_29:
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v6);
    }
    else
    {
      v11 = (unsigned __int64)(v6->_vptr__Sp_counted_base + 3);
      if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))v6->_vptr__Sp_counted_base + 3))();
        return;
      }
    }
    __asan_report_load8(v11);
    JUMPOUT(0x14E75E07LL);
  }
  M_weak_count = v6->_M_weak_count;
  v6->_M_weak_count = M_weak_count - 1;
LABEL_17:
  if ( M_weak_count == 1 )
    goto LABEL_29;
};

// Line 181: range 0000000014E77502-0000000014E78546
// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SpanHolder::start(SpanHolder *const this, uint32_t expired_seconds)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v2; // r12
  _Atomic_word *v3; // r15
  unsigned __int64 v5; // rbp
  _DWORD *v6; // r13
  std::shared_ptr<common::tools::MiTimer> *p_timer_ptr; // rdi
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v10; // dl
  __int64 v11; // rax
  int32_t result; // eax
  char v13; // cl
  char v14; // al
  _Atomic_word *p_M_use_count; // rdi
  char v16; // al
  char v17; // dl
  void **p_vptr__Sp_counted_base; // rdi
  char v19; // al
  _Atomic_word *v20; // r15
  __int64 v21; // rax
  volatile signed __int32 *v22; // rdi
  char v23; // dl
  char v24; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_M_weak_count; // rdi
  char v26; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *vptr__Sp_counted_base; // rdi
  char v28; // dl
  common::milog::MiLog *log; // rax
  std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *v30; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v31; // rax
  _Atomic_word *v32; // rdi
  common::milog::MilogStringStream *ostr; // rax
  unsigned __int64 v34; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  unsigned __int64 v36; // rdx
  struct _Unwind_Exception *v37; // rbx
  void (__fastcall *v38)(_Atomic_word *, _Atomic_word *, __int64); // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v39; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v40; // rdi
  std::_Sp_counted_ptr_inplace<common::tools::MiTimer,common::tools::perf::allocator<common::tools::MiTimer,common::tools::MiTimer>,(__gnu_cxx::_Lock_policy)2> *v41; // rsi
  std::function<void(long unsigned int)> *p_x; // rsi
  unsigned __int64 v43; // rdi
  char v44; // al
  char v45; // dl
  __int64 v46; // rax
  unsigned __int64 v47; // rdi
  char v48; // dl
  char v49; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rdi
  char v51; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v52; // rdi
  char v53; // dl
  common::milog::MiLog *v54; // rax
  std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *v55; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v56; // rax
  _Atomic_word *v57; // rdi
  common::milog::MilogStringStream *v58; // rax
  void (__fastcall *v59)(_Atomic_word *, _Atomic_word *, __int64); // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v60; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v61; // rdi
  void *v62; // rdi
  std::_Bind<void (*(std::weak_ptr<SpanHolder>,std::_Placeholder<1>))(const std::weak_ptr<SpanHolder>&,long unsigned int)> v63; // [rsp+0h] [rbp-168h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v64; // [rsp+18h] [rbp-150h]
  unsigned __int64 v65; // [rsp+18h] [rbp-150h]
  unsigned __int64 v66; // [rsp+20h] [rbp-148h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v67; // [rsp+28h] [rbp-140h]
  std::__weak_ptr<SpanHolder,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+30h] [rbp-138h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v69; // [rsp+38h] [rbp-130h]
  __int64 v70; // [rsp+40h] [rbp-128h]
  __int64 v71; // [rsp+40h] [rbp-128h]
  std::__shared_ptr<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2>::element_type *v72; // [rsp+40h] [rbp-128h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v73; // [rsp+48h] [rbp-120h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v74; // [rsp+48h] [rbp-120h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v75; // [rsp+48h] [rbp-120h]
  void (__fastcall *v76)(const SpanHolderWtr *, uint64_t); // [rsp+50h] [rbp-118h]
  __int64 v77; // [rsp+58h] [rbp-110h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v78; // [rsp+60h] [rbp-108h]
  void (__fastcall *v79)(const SpanHolderWtr *, uint64_t); // [rsp+70h] [rbp-F8h] BYREF
  __int64 v80; // [rsp+78h] [rbp-F0h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v81; // [rsp+80h] [rbp-E8h]
  std::function<void(long unsigned int)> __x; // [rsp+90h] [rbp-D8h] BYREF
  common::milog::MiLogStream v83; // [rsp+B0h] [rbp-B8h] BYREF
  char v84[152]; // [rsp+D0h] [rbp-98h] BYREF

  HIDWORD(v63._M_bound_args._M_head_impl._M_ptr) = expired_seconds;
  v5 = (unsigned __int64)v84;
  v63._M_bound_args._M_head_impl._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v84;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v5 = v11;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 1 4 __a2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v5 + 16) = SpanHolder::start;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -202178560;
  if ( expired_seconds )
  {
    p_timer_ptr = &this->timer_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&this->timer_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_timer_ptr);
    }
    else if ( !this->timer_ptr._M_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        p_M_refcount = (volatile signed __int32 *)this;
        __asan_report_load8(this);
      }
      else
      {
        M_ptr = this->_M_weak_this._M_ptr;
        p_M_refcount = (volatile signed __int32 *)&this->_M_weak_this._M_refcount;
        if ( !*(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
        {
          M_pi = this->_M_weak_this._M_refcount._M_pi;
          v69 = M_pi;
          if ( !M_pi )
            goto LABEL_12;
          p_M_refcount = &M_pi->_M_weak_count;
          if ( !&_pthread_key_create )
          {
LABEL_20:
            v13 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v13 && v13 )
            {
              __asan_report_load4(&M_pi->_M_weak_count);
              goto LABEL_24;
            }
            ++M_pi->_M_weak_count;
LABEL_12:
            v76 = SpanHolder::onTimer;
            v77 = (__int64)M_ptr;
            v78 = v69;
            v69 = 0LL;
            _tls_init_2();
LABEL_24:
            v14 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
            if ( v14 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v14 )
            {
              __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
              goto LABEL_29;
            }
            if ( common::tools::perf::MemoryPerf::is_record )
            {
              *(_QWORD *)&expired_seconds = v5 + 32;
              std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::MiTimer,common::tools::perf::allocator<common::tools::MiTimer,common::tools::MiTimer>,(__gnu_cxx::_Lock_policy)2>,common::tools::MiTimer>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::MiTimer,common::tools::perf::allocator<common::tools::MiTimer,common::tools::MiTimer>,(__gnu_cxx::_Lock_policy)2>,common::tools::MiTimer> *)(v5 + 32));
LABEL_29:
              v64 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 72);
              p_M_use_count = &v64->_M_use_count;
              v16 = *(_BYTE *)(((unsigned __int64)&v64->_M_use_count >> 3) + 0x7FFF8000);
              if ( v16 && v16 <= 3 )
              {
                __asan_report_store4(p_M_use_count);
              }
              else
              {
                v64->_M_use_count = 1;
                p_M_use_count = &v64->_M_weak_count;
                v17 = *(_BYTE *)(((unsigned __int64)&v64->_M_weak_count >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)v64 + 12) & 7) + 3) < v17 || !v17 )
                {
                  v64->_M_weak_count = 1;
                  if ( !*(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
                  {
                    v64->_vptr__Sp_counted_base = (int (**)(...))(&`vtable for'std::_Sp_counted_ptr_inplace<common::tools::MiTimer,common::tools::perf::allocator<common::tools::MiTimer,common::tools::MiTimer>,(__gnu_cxx::_Lock_policy)2>
                                                                + 2);
                    v2 = v64 + 1;
                    if ( !common::tools::perf::MemoryPerf::is_record )
                      goto LABEL_48;
                    p_vptr__Sp_counted_base = &`typeinfo for'common::tools::MiTimer + 1;
                    if ( !*(_BYTE *)(((unsigned __int64)(&`typeinfo for'common::tools::MiTimer + 1) >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)&expired_seconds = *(&`typeinfo for'common::tools::MiTimer + 1);
                      p_vptr__Sp_counted_base = *(void ***)&expired_seconds;
                      v19 = *(_BYTE *)((*(_QWORD *)&expired_seconds >> 3) + 0x7FFF8000LL);
                      if ( v19 > (*(_BYTE *)(&`typeinfo for'common::tools::MiTimer + 1) & 7) || !v19 )
                      {
                        if ( **(_BYTE **)&expired_seconds != 42 )
                        {
LABEL_39:
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)&v83,
                            *(const char **)&expired_seconds,
                            (const std::allocator<char> *)(v5 + 48));
                          *(_QWORD *)&expired_seconds = &v83;
                          common::tools::perf::MemoryPerfRecorder::construct(
                            &common::tools::perf::MemoryPerf::recorder,
                            (const std::string *)&v83,
                            0x48uLL);
                          if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v83.log_ != &v83.ostr_ptr_._M_refcount )
                            operator delete(v83.log_);
LABEL_48:
                          v20 = (_Atomic_word *)((char *)&ThreadLocal::timer_mgr_ptr + __readfsqword(0));
                          v71 = *(_QWORD *)v20;
                          v21 = *((_QWORD *)v20 + 1);
                          v74 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v21;
                          if ( v21 )
                          {
                            v22 = (volatile signed __int32 *)(v21 + 8);
                            if ( &_pthread_key_create )
                            {
                              v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
                              if ( (char)(((unsigned __int8)v22 & 7) + 3) < v23 || !v23 )
                              {
                                _InterlockedAdd(v22, 1u);
                                goto LABEL_53;
                              }
                              v21 = __asan_report_store4(v22);
                            }
                            v24 = *(_BYTE *)(((unsigned __int64)(v21 + 8) >> 3) + 0x7FFF8000);
                            if ( (char)(((v21 + 8) & 7) + 3) >= v24 && v24 )
                            {
                              __asan_report_load4(v21 + 8);
LABEL_59:
                              if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
                              {
                                p_M_weak_count = v2;
                                __asan_report_store8(v2);
                              }
                              else
                              {
                                *(_QWORD *)&expired_seconds = v64;
                                v64[1]._vptr__Sp_counted_base = (int (**)(...))(&`vtable for'common::tools::MiTimer + 2);
                                p_M_weak_count = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&v2->_M_use_count;
                                if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_use_count >> 3) + 0x7FFF8000) )
                                {
                                  *(_QWORD *)&v2->_M_use_count = 0LL;
                                  p_M_weak_count = v2 + 1;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) )
                                  {
                                    v2[1]._vptr__Sp_counted_base = 0LL;
                                    p_M_weak_count = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v2 + 24);
                                    if ( !*(_BYTE *)(((unsigned __int64)&v2[1]._M_use_count >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)&v2[1]._M_use_count = 0LL;
                                      p_M_weak_count = v2 + 2;
                                      if ( !*(_BYTE *)(((unsigned __int64)&v2[2] >> 3) + 0x7FFF8000) )
                                      {
                                        v2[2]._vptr__Sp_counted_base = 0LL;
                                        v20 = &v2[2]._M_use_count;
                                        p_M_weak_count = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v2 + 56);
                                        if ( !*(_BYTE *)(((unsigned __int64)&v2[3]._M_use_count >> 3) + 0x7FFF8000) )
                                        {
                                          *(_QWORD *)&v2[3]._M_use_count = 0LL;
                                          *(_QWORD *)&v2->_M_use_count = v71;
                                          v66 = (unsigned __int64)&v2[1];
                                          v67 = v74;
                                          if ( !v74 )
                                            goto LABEL_70;
                                          p_M_weak_count = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&v74->_M_weak_count;
                                          if ( !&_pthread_key_create )
                                            goto LABEL_82;
                                          v26 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
                                          if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v26 || !v26 )
                                          {
                                            _InterlockedAdd((volatile signed __int32 *)p_M_weak_count, 1u);
                                            goto LABEL_70;
                                          }
LABEL_81:
                                          __asan_report_store4(p_M_weak_count);
LABEL_82:
                                          v28 = *(_BYTE *)(((unsigned __int64)&v67->_M_weak_count >> 3) + 0x7FFF8000);
                                          if ( (char)((((_BYTE)v67 + 12) & 7) + 3) >= v28 && v28 )
                                          {
                                            __asan_report_load4(&v67->_M_weak_count);
                                            goto LABEL_86;
                                          }
                                          ++v67->_M_weak_count;
LABEL_70:
                                          if ( !*(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
                                          {
                                            vptr__Sp_counted_base = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v2[1]._vptr__Sp_counted_base;
                                            if ( vptr__Sp_counted_base )
                                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(vptr__Sp_counted_base);
                                            if ( !*(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
                                            {
                                              v2[1]._vptr__Sp_counted_base = (int (**)(...))v67;
                                              *(_QWORD *)&expired_seconds = &__x;
                                              std::function<void ()(unsigned long)>::function(
                                                (std::function<void(long unsigned int)> *const)&v83,
                                                &__x);
                                              goto LABEL_88;
                                            }
LABEL_87:
                                            __asan_report_store8(v66);
LABEL_88:
                                            log = v83.log_;
                                            v30 = v83.ostr_ptr_._M_ptr;
                                            if ( *(_WORD *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                                            {
                                              v32 = v20;
                                              __asan_report_load16(
                                                v20,
                                                *(_QWORD *)&expired_seconds,
                                                v83.ostr_ptr_._M_ptr);
                                            }
                                            else
                                            {
                                              *(__m128i *)&v83.log_ = _mm_loadu_si128((const __m128i *)&v2[2]._M_use_count);
                                              *(_QWORD *)&v2[2]._M_use_count = log;
                                              v2[3]._vptr__Sp_counted_base = (int (**)(...))v30;
                                              v31 = v83.ostr_ptr_._M_refcount._M_pi;
                                              v32 = v20 + 4;
                                              if ( !*(_BYTE *)(((unsigned __int64)(v20 + 4) >> 3) + 0x7FFF8000) )
                                              {
                                                v83.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v20 + 2);
                                                *((_QWORD *)v20 + 2) = v31;
                                                ostr = v83.ostr_;
                                                v32 = v20 + 6;
                                                if ( !*(_BYTE *)(((unsigned __int64)(v20 + 6) >> 3) + 0x7FFF8000) )
                                                {
                                                  v83.ostr_ = (common::milog::MilogStringStream *)*((_QWORD *)v20 + 3);
                                                  *((_QWORD *)v20 + 3) = ostr;
                                                  if ( v83.ostr_ptr_._M_refcount._M_pi )
                                                    ((void (__fastcall *)(common::milog::MiLogStream *, common::milog::MiLogStream *, __int64))v83.ostr_ptr_._M_refcount._M_pi)(
                                                      &v83,
                                                      &v83,
                                                      3LL);
                                                  if ( __x._M_manager )
                                                    __x._M_manager(
                                                      (std::_Any_data *)&__x,
                                                      (const std::_Any_data *)&__x,
                                                      __destroy_functor);
                                                  if ( v81 )
                                                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v81);
                                                  if ( v74 )
                                                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v74);
                                                  *(_QWORD *)(v5 + 72) = 0LL;
                                                  v75 = v64;
                                                  v72 = (std::__shared_ptr<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2>::element_type *)v2;
                                                  goto LABEL_100;
                                                }
                                                goto LABEL_116;
                                              }
                                            }
                                            __asan_report_load8(v32);
LABEL_116:
                                            v37 = (struct _Unwind_Exception *)__asan_report_load8(v32);
                                            if ( *(_BYTE *)(((unsigned __int64)&v2[3]._M_use_count >> 3) + 0x7FFF8000) )
                                              __asan_report_load8(&v2[3]._M_use_count);
                                            v38 = *(void (__fastcall **)(_Atomic_word *, _Atomic_word *, __int64))&v2[3]._M_use_count;
                                            if ( v38 )
                                              v38(&v2[2]._M_use_count, &v2[2]._M_use_count, 3LL);
                                            if ( *(_BYTE *)(((unsigned __int64)&v2[2] >> 3) + 0x7FFF8000) )
                                              __asan_report_load8(&v2[2]);
                                            v39 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v2[2]._vptr__Sp_counted_base;
                                            if ( v39 )
                                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v39);
                                            if ( *(_BYTE *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) )
                                              __asan_report_load8(&v2[1]);
                                            v40 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v2[1]._vptr__Sp_counted_base;
                                            if ( v40 )
                                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v40);
                                            if ( __x._M_manager )
                                              __x._M_manager(
                                                (std::_Any_data *)&__x,
                                                (const std::_Any_data *)&__x,
                                                __destroy_functor);
                                            if ( v81 )
                                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v81);
                                            if ( v74 )
                                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v74);
                                            v41 = *(std::_Sp_counted_ptr_inplace<common::tools::MiTimer,common::tools::perf::allocator<common::tools::MiTimer,common::tools::MiTimer>,(__gnu_cxx::_Lock_policy)2> **)(v5 + 72);
                                            if ( v41 )
                                              common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::MiTimer,common::tools::perf::allocator<common::tools::MiTimer,common::tools::MiTimer>,(__gnu_cxx::_Lock_policy)2>,common::tools::MiTimer>::deallocate(
                                                *(common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::MiTimer,common::tools::perf::allocator<common::tools::MiTimer,common::tools::MiTimer>,(__gnu_cxx::_Lock_policy)2>,common::tools::MiTimer> *const *)(v5 + 64),
                                                v41,
                                                1uLL);
                                            goto LABEL_136;
                                          }
LABEL_86:
                                          __asan_report_load8(v66);
                                          goto LABEL_87;
                                        }
LABEL_80:
                                        __asan_report_store8(p_M_weak_count);
                                        goto LABEL_81;
                                      }
LABEL_79:
                                      __asan_report_store8(p_M_weak_count);
                                      goto LABEL_80;
                                    }
LABEL_78:
                                    __asan_report_store8(p_M_weak_count);
                                    goto LABEL_79;
                                  }
LABEL_77:
                                  __asan_report_store8(p_M_weak_count);
                                  goto LABEL_78;
                                }
                              }
                              __asan_report_store8(p_M_weak_count);
                              goto LABEL_77;
                            }
                            ++*(_DWORD *)(v21 + 8);
                          }
LABEL_53:
                          v79 = v76;
                          v80 = v77;
                          v81 = v78;
                          v78 = 0LL;
                          *(_QWORD *)&expired_seconds = &v79;
                          std::function<void ()(unsigned long)>::function<std::_Bind<void (*)(std::weak_ptr<SpanHolder> const&,unsigned long) ()(std::weak_ptr<SpanHolder>,std::_Placeholder<1>)>,void,void>(
                            &__x,
                            v63);
                          goto LABEL_59;
                        }
LABEL_45:
                        ++*(_QWORD *)&expired_seconds;
                        goto LABEL_39;
                      }
LABEL_44:
                      __asan_report_load1(p_vptr__Sp_counted_base);
                      goto LABEL_45;
                    }
LABEL_43:
                    __asan_report_load8(p_vptr__Sp_counted_base);
                    goto LABEL_44;
                  }
LABEL_42:
                  p_vptr__Sp_counted_base = (void **)&v64->_vptr__Sp_counted_base;
                  __asan_report_store8(v64);
                  goto LABEL_43;
                }
              }
              __asan_report_store4(p_M_use_count);
              goto LABEL_42;
            }
            p_x = (std::function<void(long unsigned int)> *)(v5 + 48);
            std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::tools::MiTimer,std::allocator<common::tools::MiTimer>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::tools::MiTimer,std::allocator<common::tools::MiTimer>,(__gnu_cxx::_Lock_policy)2> > *)(v5 + 48));
            v65 = *(_QWORD *)(v5 + 72);
            v43 = v65 + 8;
            v44 = *(_BYTE *)(((v65 + 8) >> 3) + 0x7FFF8000);
            if ( v44 && v44 <= 3 )
            {
              __asan_report_store4(v43);
            }
            else
            {
              *(_DWORD *)(v65 + 8) = 1;
              v43 = v65 + 12;
              v45 = *(_BYTE *)(((v65 + 12) >> 3) + 0x7FFF8000);
              if ( (char)(((v65 + 12) & 7) + 3) < v45 || !v45 )
              {
                *(_DWORD *)(v65 + 12) = 1;
                if ( !*(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
                {
                  p_x = (std::function<void(long unsigned int)> *)v65;
                  *(_QWORD *)v65 = &`vtable for'std::_Sp_counted_ptr_inplace<common::tools::MiTimer,std::allocator<common::tools::MiTimer>,(__gnu_cxx::_Lock_policy)2>
                                 + 2;
                  v2 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v65 + 16);
                  v3 = (_Atomic_word *)((char *)&ThreadLocal::timer_mgr_ptr + __readfsqword(0));
                  v70 = *(_QWORD *)v3;
                  v46 = *((_QWORD *)v3 + 1);
                  v73 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v46;
                  if ( !v46 )
                    goto LABEL_151;
                  v47 = v46 + 8;
                  if ( !&_pthread_key_create )
                  {
LABEL_156:
                    v49 = *(_BYTE *)(((unsigned __int64)(v46 + 8) >> 3) + 0x7FFF8000);
                    if ( (char)(((v46 + 8) & 7) + 3) >= v49 && v49 )
                    {
                      __asan_report_load4(v46 + 8);
LABEL_160:
                      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
                      {
                        v50 = v2;
                        __asan_report_store8(v2);
                      }
                      else
                      {
                        p_x = (std::function<void(long unsigned int)> *)v65;
                        *(_QWORD *)(v65 + 16) = &`vtable for'common::tools::MiTimer + 2;
                        v50 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&v2->_M_use_count;
                        if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_use_count >> 3) + 0x7FFF8000) )
                        {
                          *(_QWORD *)&v2->_M_use_count = 0LL;
                          v50 = v2 + 1;
                          if ( !*(_BYTE *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) )
                          {
                            v2[1]._vptr__Sp_counted_base = 0LL;
                            v50 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v2 + 24);
                            if ( !*(_BYTE *)(((unsigned __int64)&v2[1]._M_use_count >> 3) + 0x7FFF8000) )
                            {
                              *(_QWORD *)&v2[1]._M_use_count = 0LL;
                              v50 = v2 + 2;
                              if ( !*(_BYTE *)(((unsigned __int64)&v2[2] >> 3) + 0x7FFF8000) )
                              {
                                v2[2]._vptr__Sp_counted_base = 0LL;
                                v3 = &v2[2]._M_use_count;
                                v50 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v2 + 56);
                                if ( !*(_BYTE *)(((unsigned __int64)&v2[3]._M_use_count >> 3) + 0x7FFF8000) )
                                {
                                  *(_QWORD *)&v2[3]._M_use_count = 0LL;
                                  *(_QWORD *)&v2->_M_use_count = v70;
                                  v66 = (unsigned __int64)&v2[1];
                                  v67 = v73;
                                  if ( !v73 )
                                    goto LABEL_171;
                                  v50 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&v73->_M_weak_count;
                                  if ( !&_pthread_key_create )
                                    goto LABEL_183;
                                  v51 = *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000);
                                  if ( (char)(((unsigned __int8)v50 & 7) + 3) < v51 || !v51 )
                                  {
                                    _InterlockedAdd((volatile signed __int32 *)v50, 1u);
                                    goto LABEL_171;
                                  }
LABEL_182:
                                  __asan_report_store4(v50);
LABEL_183:
                                  v53 = *(_BYTE *)(((unsigned __int64)&v67->_M_weak_count >> 3) + 0x7FFF8000);
                                  if ( (char)((((_BYTE)v67 + 12) & 7) + 3) >= v53 && v53 )
                                  {
                                    __asan_report_load4(&v67->_M_weak_count);
                                    goto LABEL_187;
                                  }
                                  ++v67->_M_weak_count;
LABEL_171:
                                  if ( !*(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
                                  {
                                    v52 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v2[1]._vptr__Sp_counted_base;
                                    if ( v52 )
                                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v52);
                                    if ( !*(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
                                    {
                                      v2[1]._vptr__Sp_counted_base = (int (**)(...))v67;
                                      p_x = &__x;
                                      std::function<void ()(unsigned long)>::function(
                                        (std::function<void(long unsigned int)> *const)&v83,
                                        &__x);
                                      goto LABEL_189;
                                    }
LABEL_188:
                                    __asan_report_store8(v66);
LABEL_189:
                                    v54 = v83.log_;
                                    v55 = v83.ostr_ptr_._M_ptr;
                                    if ( *(_WORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
                                    {
                                      v57 = v3;
                                      __asan_report_load16(v3, p_x, v83.ostr_ptr_._M_ptr);
                                    }
                                    else
                                    {
                                      *(__m128i *)&v83.log_ = _mm_loadu_si128((const __m128i *)&v2[2]._M_use_count);
                                      *(_QWORD *)&v2[2]._M_use_count = v54;
                                      v2[3]._vptr__Sp_counted_base = (int (**)(...))v55;
                                      v56 = v83.ostr_ptr_._M_refcount._M_pi;
                                      v57 = v3 + 4;
                                      if ( !*(_BYTE *)(((unsigned __int64)(v3 + 4) >> 3) + 0x7FFF8000) )
                                      {
                                        v83.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v3 + 2);
                                        *((_QWORD *)v3 + 2) = v56;
                                        v58 = v83.ostr_;
                                        v57 = v3 + 6;
                                        if ( !*(_BYTE *)(((unsigned __int64)(v3 + 6) >> 3) + 0x7FFF8000) )
                                        {
                                          v83.ostr_ = (common::milog::MilogStringStream *)*((_QWORD *)v3 + 3);
                                          *((_QWORD *)v3 + 3) = v58;
                                          if ( v83.ostr_ptr_._M_refcount._M_pi )
                                            ((void (__fastcall *)(common::milog::MiLogStream *, common::milog::MiLogStream *, __int64))v83.ostr_ptr_._M_refcount._M_pi)(
                                              &v83,
                                              &v83,
                                              3LL);
                                          if ( __x._M_manager )
                                            __x._M_manager(
                                              (std::_Any_data *)&__x,
                                              (const std::_Any_data *)&__x,
                                              __destroy_functor);
                                          if ( v81 )
                                            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v81);
                                          if ( v73 )
                                            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v73);
                                          *(_QWORD *)(v5 + 72) = 0LL;
                                          v75 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v65;
                                          v72 = (std::__shared_ptr<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2>::element_type *)v2;
LABEL_100:
                                          v34 = (unsigned __int64)&this->timer_ptr;
                                          if ( *(_BYTE *)(((unsigned __int64)&this->timer_ptr >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store8(v34);
                                          }
                                          else
                                          {
                                            this->timer_ptr._M_ptr = v72;
                                            v34 = (unsigned __int64)&this->timer_ptr._M_refcount;
                                            if ( !*(_BYTE *)(((unsigned __int64)&this->timer_ptr._M_refcount >> 3)
                                                           + 0x7FFF8000) )
                                            {
                                              v35 = this->timer_ptr._M_refcount._M_pi;
                                              this->timer_ptr._M_refcount._M_pi = v75;
                                              if ( v35 )
                                                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
                                              if ( v78 )
                                                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v78);
                                              if ( v69 )
                                                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v69);
                                              v34 = (unsigned __int64)&this->timer_ptr;
                                              if ( !*(_BYTE *)(((unsigned __int64)&this->timer_ptr >> 3) + 0x7FFF8000) )
                                              {
                                                v34 = (unsigned __int64)this->timer_ptr._M_ptr;
                                                if ( !*(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                                                {
                                                  v36 = *(_QWORD *)v34 + 16LL;
                                                  if ( !*(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                                                  {
                                                    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, const char *, const char *, __int64, _QWORD, _QWORD))(*(_QWORD *)v34 + 16LL))(
                                                               v34,
                                                               HIDWORD(v63._M_bound_args._M_head_impl._M_ptr),
                                                               1LL,
                                                               "src/tracing/tracing.cpp",
                                                               "start",
                                                               193LL,
                                                               0LL,
                                                               0LL);
                                                    if ( !result )
                                                      goto LABEL_112;
                                                    goto LABEL_228;
                                                  }
LABEL_227:
                                                  __asan_report_load8(v36);
LABEL_228:
                                                  common::milog::MiLogStream::MiLogStream(
                                                    &v83,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "src/tracing/tracing.cpp",
                                                    "start",
                                                    195);
                                                  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                                    v83.ostr_,
                                                    "timer_ptr startS fail");
                                                  common::milog::MiLogStream::~MiLogStream(&v83);
                                                  result = -1;
                                                  goto LABEL_112;
                                                }
LABEL_226:
                                                __asan_report_load8(v34);
                                                goto LABEL_227;
                                              }
LABEL_225:
                                              __asan_report_load8(v34);
                                              goto LABEL_226;
                                            }
                                          }
                                          __asan_report_load8(v34);
                                          goto LABEL_225;
                                        }
                                        goto LABEL_203;
                                      }
                                    }
                                    __asan_report_load8(v57);
LABEL_203:
                                    v37 = (struct _Unwind_Exception *)__asan_report_load8(v57);
                                    if ( *(_BYTE *)(((unsigned __int64)&v2[3]._M_use_count >> 3) + 0x7FFF8000) )
                                      __asan_report_load8(&v2[3]._M_use_count);
                                    v59 = *(void (__fastcall **)(_Atomic_word *, _Atomic_word *, __int64))&v2[3]._M_use_count;
                                    if ( v59 )
                                      v59(&v2[2]._M_use_count, &v2[2]._M_use_count, 3LL);
                                    if ( *(_BYTE *)(((unsigned __int64)&v2[2] >> 3) + 0x7FFF8000) )
                                      __asan_report_load8(&v2[2]);
                                    v60 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v2[2]._vptr__Sp_counted_base;
                                    if ( v60 )
                                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v60);
                                    if ( *(_BYTE *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) )
                                      __asan_report_load8(&v2[1]);
                                    v61 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v2[1]._vptr__Sp_counted_base;
                                    if ( v61 )
                                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v61);
                                    if ( __x._M_manager )
                                      __x._M_manager(
                                        (std::_Any_data *)&__x,
                                        (const std::_Any_data *)&__x,
                                        __destroy_functor);
                                    if ( v81 )
                                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v81);
                                    if ( v73 )
                                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v73);
                                    v62 = *(void **)(v5 + 72);
                                    if ( v62 )
                                      operator delete(v62);
LABEL_136:
                                    if ( v78 )
                                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v78);
                                    if ( v69 )
                                      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v69);
                                    __asan_handle_no_return(v69);
                                    _Unwind_Resume(v37);
                                  }
LABEL_187:
                                  __asan_report_load8(v66);
                                  goto LABEL_188;
                                }
LABEL_181:
                                __asan_report_store8(v50);
                                goto LABEL_182;
                              }
LABEL_180:
                              __asan_report_store8(v50);
                              goto LABEL_181;
                            }
LABEL_179:
                            __asan_report_store8(v50);
                            goto LABEL_180;
                          }
LABEL_178:
                          __asan_report_store8(v50);
                          goto LABEL_179;
                        }
                      }
                      __asan_report_store8(v50);
                      goto LABEL_178;
                    }
                    ++*(_DWORD *)(v46 + 8);
LABEL_151:
                    v79 = v76;
                    v80 = v77;
                    v81 = v78;
                    v78 = 0LL;
                    p_x = (std::function<void(long unsigned int)> *)&v79;
                    std::function<void ()(unsigned long)>::function<std::_Bind<void (*)(std::weak_ptr<SpanHolder> const&,unsigned long) ()(std::weak_ptr<SpanHolder>,std::_Placeholder<1>)>,void,void>(
                      &__x,
                      v63);
                    goto LABEL_160;
                  }
                  v48 = *(_BYTE *)((v47 >> 3) + 0x7FFF8000);
                  if ( (char)((v47 & 7) + 3) < v48 || !v48 )
                  {
                    _InterlockedAdd((volatile signed __int32 *)v47, 1u);
                    goto LABEL_151;
                  }
LABEL_155:
                  v46 = __asan_report_store4(v47);
                  goto LABEL_156;
                }
LABEL_154:
                v47 = v65;
                __asan_report_store8(v65);
                goto LABEL_155;
              }
            }
            __asan_report_store4(v43);
            goto LABEL_154;
          }
          v10 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v10 || !v10 )
          {
            _InterlockedAdd(p_M_refcount, 1u);
            goto LABEL_12;
          }
LABEL_19:
          M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
          goto LABEL_20;
        }
      }
      __asan_report_load8(p_M_refcount);
      goto LABEL_19;
    }
    common::milog::MiLogStream::MiLogStream(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "start",
      188);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v83.ostr_, "timer_ptr is not null");
    common::milog::MiLogStream::~MiLogStream(&v83);
    result = -1;
    goto LABEL_112;
  }
  result = 0;
LABEL_112:
  if ( v63._M_bound_args._M_head_impl._M_refcount._M_pi == (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 215: range 0000000014E7CED6-0000000014E7D14E
void __fastcall SpanHolder::onTimer(const SpanHolderWtr *self_wtr, uint64_t now_ms)
{
  unsigned __int64 v4; // rbx
  _DWORD *v5; // r12
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v8; // si
  signed __int32 v9; // eax
  signed __int32 v10; // eax
  int v11; // ett
  bool v12; // dl
  SpanHolder *M_ptr; // rdi
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *v14; // rdi
  char v15; // dl
  __int64 v16; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rdi
  common::milog::MiLogStream v19; // [rsp+0h] [rbp-B8h] BYREF
  char v20[152]; // [rsp+20h] [rbp-98h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_1(96LL);
    if ( v16 )
      v4 = v16;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 7 __count 64 16 12 self_ptr:216";
  *(_QWORD *)(v4 + 16) = SpanHolder::onTimer;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  p_M_refcount = &self_wtr->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&self_wtr->_M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
  }
  else
  {
    M_pi = self_wtr->_M_refcount._M_pi;
    *(_QWORD *)(v4 + 72) = M_pi;
    if ( !M_pi )
      goto LABEL_13;
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&M_pi->_M_use_count;
    v8 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v8 || !v8 )
    {
      *(_DWORD *)(v4 + 48) = M_pi->_M_use_count;
      while ( 1 )
      {
        v9 = *(_DWORD *)(v4 + 48);
        if ( !v9 )
          goto LABEL_23;
        v11 = *(_DWORD *)(v4 + 48);
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)p_M_refcount, v9 + 1, v9);
        v12 = v11 == v10;
        if ( v11 != v10 )
          *(_DWORD *)(v4 + 48) = v10;
        if ( v12 )
          goto LABEL_11;
      }
    }
  }
  __asan_report_load4(p_M_refcount);
LABEL_23:
  v12 = 0;
LABEL_11:
  if ( !v12 )
    *(_QWORD *)(v4 + 72) = 0LL;
LABEL_13:
  M_ptr = *(SpanHolder **)(v4 + 72);
  if ( !M_ptr )
    goto LABEL_27;
  v14 = &M_ptr->_M_weak_this._M_refcount;
  v15 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v14 & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(v14);
LABEL_25:
    __asan_report_load8(self_wtr);
    goto LABEL_26;
  }
  if ( LODWORD(v14->_M_pi) )
  {
    if ( !*(_BYTE *)(((unsigned __int64)self_wtr >> 3) + 0x7FFF8000) )
    {
      M_ptr = self_wtr->_M_ptr;
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
    SpanHolder::_onTimer(M_ptr, now_ms);
    v18 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 72);
    if ( v18 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v18);
  }
  else
  {
    common::milog::MiLogStream::MiLogStream(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "onTimer",
      219);
    common::milog::MiLogStream::operator()(&v19, "*this not exist");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 72);
    if ( v17 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v17);
  }
  if ( v20 == (char *)v4 )
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

// Line 227: range 0000000014E7A5A5-0000000014E7A62F
void __cdecl _tls_init_3()
{
  char *v0; // rbx

  if ( !*(_BYTE *)(__readfsqword(0) - 544) )
  {
    *(_BYTE *)(__readfsqword(0) - 544) = 1;
    v0 = (char *)&TracingMgr::holder_map_ + __readfsqword(0);
    *(_QWORD *)v0 = v0 + 48;
    *((_QWORD *)v0 + 1) = 1LL;
    *((_QWORD *)v0 + 2) = 0LL;
    *((_QWORD *)v0 + 3) = 0LL;
    *((_DWORD *)v0 + 8) = 1065353216;
    *((_QWORD *)v0 + 5) = 0LL;
    *((_QWORD *)v0 + 6) = 0LL;
    __cxa_thread_atexit(
      (void (__fastcall *)(void *))std::unordered_map<unsigned long,std::shared_ptr<SpanHolder>>::~unordered_map,
      v0,
      &_dso_handle);
  }
};

// Line 230: range 0000000014E7854C-0000000014E7A5A0
int32_t __fastcall TracingMgr::init(TracingMgr *const this, const common::tools::PTree *root, uint32_t self_app_id)
{
  double v3; // xmm0_8
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  _DWORD *v6; // rbp
  bool *p_is_init; // rdi
  char v8; // al
  __int64 v9; // rax
  bool v10; // al
  bool *v11; // rdi
  char v12; // al
  char v13; // al
  std::list<std::pair<std::string,common::tools::PTree>> *i; // rax
  char *v15; // rdi
  int32_t v16; // r12d
  size_t v17; // rdx
  char *v18; // rdi
  std::list<std::pair<std::string,common::tools::PTree>> **v19; // r15
  char *v20; // rdi
  char v21; // al
  char *v22; // rdi
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdi
  char v25; // al
  unsigned int v26; // eax
  YAML::BadInsert *exception; // rdi
  YAML::detail::node *v28; // r15
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rdi
  char v31; // al
  unsigned int v32; // eax
  YAML::BadInsert *v33; // rdi
  std::forward_iterator_tag v34; // cl
  YAML::detail::node *v35; // r15
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rdi
  char v38; // al
  unsigned int v39; // eax
  YAML::BadInsert *v40; // rdi
  YAML::detail::node *v41; // r15
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rdi
  char v44; // al
  unsigned int v45; // eax
  YAML::BadInsert *v46; // rdi
  YAML::detail::node *v47; // r15
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // rdi
  char v50; // al
  unsigned int v51; // eax
  YAML::BadInsert *v52; // rdi
  std::forward_iterator_tag v53; // cl
  YAML::detail::node *v54; // r15
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v55; // rax
  unsigned __int64 v56; // rax
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v57; // rsi
  unsigned __int64 v58; // rdi
  char v59; // dl
  char v60; // cl
  unsigned __int64 v61; // rdi
  char v62; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v63; // rdi
  char v64; // dl
  TracingMgr *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r14
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  unsigned __int64 v69; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v70; // rax
  _Atomic_word *p_M_use_count; // rdi
  char v72; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v73; // rax
  _Atomic_word *v74; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v75; // rdi
  __int64 v76; // rdx
  __int64 M_ptr; // rax
  char v78; // cl
  char v79; // al
  char *v80; // rdi
  char *v81; // rdi
  char *v82; // rdi
  char *v83; // rdi
  char *v84; // rdi
  char *v85; // rdi
  char *v86; // rdi
  char *v87; // rdi
  char *v88; // rdi
  __int64 v89; // r14
  unsigned __int64 j; // r12
  void *v91; // rdi
  void *v92; // rdi
  char *v93; // rdi
  char *v94; // rdi
  __int64 *v96; // rbx
  char *v97; // rdi
  __int64 v98; // rax
  const char *v99; // rax
  bool app_pta; // [rsp+8h] [rbp-740h]
  std::tuple_element<1,std::pair<std::string,common::tools::PTree> >::type *app_ptb; // [rsp+8h] [rbp-740h]
  YAML::detail::node *app_ptc; // [rsp+8h] [rbp-740h]
  YAML::detail::node *app_ptd; // [rsp+8h] [rbp-740h]
  YAML::detail::node *app_pte; // [rsp+8h] [rbp-740h]
  YAML::detail::node *app_ptf; // [rsp+8h] [rbp-740h]
  YAML::detail::node *app_ptg; // [rsp+8h] [rbp-740h]
  bool is_contains_self_app_id; // [rsp+16h] [rbp-732h]
  bool v109; // [rsp+17h] [rbp-731h]
  std::tuple_element<0,std::pair<std::string,common::tools::PTree> >::type *name; // [rsp+18h] [rbp-730h]
  std::allocator<char> __a; // [rsp+23h] [rbp-725h] BYREF
  int rhs; // [rsp+24h] [rbp-724h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v113; // [rsp+28h] [rbp-720h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v114; // [rsp+30h] [rbp-718h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v115; // [rsp+40h] [rbp-708h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v116; // [rsp+50h] [rbp-6F8h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v117; // [rsp+60h] [rbp-6E8h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> v118; // [rsp+70h] [rbp-6D8h] BYREF
  std::string child_name; // [rsp+90h] [rbp-6B8h] BYREF
  char v120[1688]; // [rsp+B0h] [rbp-698h] BYREF

  v4 = (unsigned __int64)this;
  v5 = (unsigned __int64)v120;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_5(1632LL);
    if ( v9 )
      v5 = v9;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "11 48 8 6 pt:235 80 8 15 app_list_pt:247 112 32 16 service_name:236 176 32 19 self_app_id_str:24"
                        "8 240 32 14 app_id_str:257 304 64 14 configYAML:273 400 64 16 reporterNode:276 496 64 15 sampler"
                        "Node:279 592 64 5 value 688 392 6 stream 1152 416 10 config:284";
  *(_QWORD *)(v5 + 16) = TracingMgr::init;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = -219021312;
  v6[536862725] = 62194;
  v6[536862726] = -219021312;
  v6[536862727] = 62194;
  v6[536862728] = -219021312;
  v6[536862729] = 62194;
  v6[536862731] = -219021312;
  v6[536862732] = 62194;
  v6[536862734] = -219021312;
  v6[536862735] = 62194;
  v6[536862737] = -219021312;
  v6[536862738] = 62194;
  v6[536862740] = -219021312;
  v6[536862741] = 62194;
  v6[536862753] = -234881024;
  v6[536862754] = -218959118;
  v6[536862755] = -218959118;
  v6[536862769] = -202116109;
  v6[536862770] = -202116109;
  p_is_init = &this->is_init_;
  v8 = *(_BYTE *)(((v4 + 2) >> 3) + 0x7FFF8000);
  if ( v8 <= (char)((v4 + 2) & 7) && v8 )
  {
    __asan_report_store1(p_is_init);
  }
  else
  {
    *(_BYTE *)(v4 + 2) = 1;
    std::string::basic_string<std::allocator<char>>(&child_name, "Root.Tracing", &__a);
  }
  common::tools::PTree::getChild(root, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.service_name", &__a);
  common::tools::PTree::get<std::string>(
    (std::string *)(v5 + 112),
    (const common::tools::PTree *const)(v5 + 48),
    &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.enabled", &__a);
  v10 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v5 + 48), &child_name);
  if ( *(char *)((v4 >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(v4);
LABEL_22:
    __asan_report_load1(v4);
LABEL_23:
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.force_enable_perf_span", &__a);
    is_contains_self_app_id = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v5 + 48), &child_name);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    if ( is_contains_self_app_id )
    {
      v13 = *(_BYTE *)(((v4 + 1) >> 3) + 0x7FFF8000);
      if ( v13 > (char)((v4 + 1) & 7) || !v13 )
      {
        *(_BYTE *)(v4 + 1) = 1;
        goto LABEL_20;
      }
      __asan_report_store1(v4 + 1);
    }
    std::string::basic_string<std::allocator<char>>(&child_name, "PerfSpanAppList", &__a);
    common::tools::PTree::getChild((const common::tools::PTree *const)(v5 + 48), &child_name);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v5 + 176), self_app_id);
    common::tools::PTree::getAllChild[abi:cxx11](&v118, (const common::tools::PTree *const)(v5 + 80));
    for ( i = (std::list<std::pair<std::string,common::tools::PTree>> *)v118._M_impl._M_node._M_next; ; i = *v19 )
    {
      v19 = (std::list<std::pair<std::string,common::tools::PTree>> **)i;
      if ( i == &v118 )
        goto LABEL_56;
      name = (std::tuple_element<0,std::pair<std::string,common::tools::PTree> >::type *)&i->_M_impl._M_node._M_size;
      app_ptb = (std::tuple_element<1,std::pair<std::string,common::tools::PTree> >::type *)&i[2];
      if ( (unsigned int)std::string::compare(&i->_M_impl._M_node._M_size, &off_1AE43D60) )
      {
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)(v5 + 240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/tracing/tracing.cpp",
          "init",
          254);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v5 + 264),
          "invalid pt name:");
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v5 + 264),
          name);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 240));
        std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v118);
        v15 = *(char **)(v5 + 176);
        if ( v15 != (char *)(v5 + 192) )
          operator delete(v15);
        common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 80));
        v16 = -1;
LABEL_292:
        v94 = *(char **)(v5 + 112);
        if ( v94 != (char *)(v5 + 128) )
          operator delete(v94);
        common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 48));
        goto LABEL_295;
      }
      std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.app_id", &__a);
      common::tools::PTree::get<std::string>((std::string *)(v5 + 240), app_ptb, &child_name);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
        operator delete(child_name._M_dataplus._M_p);
      v17 = *(_QWORD *)(v5 + 184);
      if ( v17 == *(_QWORD *)(v5 + 248) )
      {
        if ( v17 )
          app_pta = !memcmp(*(const void **)(v5 + 176), *(const void **)(v5 + 240), v17)
                  ? v109
                  : is_contains_self_app_id;
        else
          app_pta = v109;
      }
      else
      {
        app_pta = is_contains_self_app_id;
      }
      if ( app_pta )
        break;
      v18 = *(char **)(v5 + 240);
      if ( v18 != (char *)(v5 + 256) )
        operator delete(v18);
      v11 = (bool *)v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v19);
        goto LABEL_62;
      }
    }
    v20 = *(char **)(v5 + 240);
    if ( v20 != (char *)(v5 + 256) )
      operator delete(v20);
    is_contains_self_app_id = app_pta;
LABEL_56:
    std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v118);
    v11 = (bool *)(v4 + 1);
    v21 = *(_BYTE *)(((v4 + 1) >> 3) + 0x7FFF8000);
    if ( v21 <= (char)((v4 + 1) & 7) && v21 )
    {
LABEL_62:
      __asan_report_store1(v11);
      goto LABEL_63;
    }
    *(_BYTE *)(v4 + 1) = is_contains_self_app_id;
    v22 = *(char **)(v5 + 176);
    if ( v22 != (char *)(v5 + 192) )
      operator delete(v22);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 80));
    goto LABEL_20;
  }
  *(_BYTE *)v4 = v10;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  if ( *(char *)((v4 >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_22;
  v109 = *(_BYTE *)v4;
  if ( *(_BYTE *)v4 )
    goto LABEL_23;
  v11 = (bool *)(v4 + 1);
  v12 = *(_BYTE *)(((v4 + 1) >> 3) + 0x7FFF8000);
  if ( v12 > (char)((v4 + 1) & 7) || !v12 )
  {
    *(_BYTE *)(v4 + 1) = 0;
LABEL_20:
    *(_BYTE *)(v5 + 304) = 1;
    *(_QWORD *)(v5 + 312) = v5 + 328;
    *(_QWORD *)(v5 + 320) = 0LL;
    *(_BYTE *)(v5 + 328) = 0;
    *(_QWORD *)(v5 + 344) = 0LL;
    *(_QWORD *)(v5 + 352) = 0LL;
    *(_QWORD *)(v5 + 360) = 0LL;
    YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 304));
    goto LABEL_64;
  }
LABEL_63:
  __asan_report_store1(v11);
LABEL_64:
  v23 = *(_QWORD *)(v5 + 360);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    &v114,
    (const std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *)(v5 + 344));
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v23);
    goto LABEL_73;
  }
  v23 = *(_QWORD *)v23;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v115, &v114);
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    v24 = v23;
    __asan_report_load8(v23);
LABEL_74:
    v3 = __asan_report_load4(v24);
LABEL_75:
    if ( v26 == 2 )
    {
      exception = (YAML::BadInsert *)__cxa_allocate_exception(0x40uLL);
      YAML::BadInsert::BadInsert(exception);
      __asan_handle_no_return(exception);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadInsert, YAML::BadInsert::~BadInsert);
    }
    goto LABEL_76;
  }
  v23 = *(_QWORD *)v23;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v116, &v115);
  v24 = v23 + 16;
  v25 = *(_BYTE *)(((v23 + 16) >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
    goto LABEL_74;
  v26 = *(_DWORD *)(v23 + 16);
  if ( v26 == 3 )
  {
LABEL_71:
    YAML::detail::node_data::convert_to_map(v23, &v116);
    goto LABEL_76;
  }
  if ( v26 <= 3 )
  {
    if ( v26 <= 1 )
      goto LABEL_71;
    goto LABEL_75;
  }
LABEL_76:
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v117, &v116);
  *(_QWORD *)(v5 + 80) = "service_name";
  YAML::Node::Node<char const*>((YAML::Node *const)(v5 + 592), (const char *const *)(v5 + 80));
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 592));
  YAML::detail::memory_holder::merge(v117._M_ptr, *(YAML::detail::memory_holder **)(v5 + 632));
  app_ptc = *(YAML::detail::node **)(v5 + 648);
  YAML::Node::~Node((YAML::Node *const)(v5 + 592));
  if ( v117._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v117, &v116);
  YAML::Node::Node<std::string>((YAML::Node *const)(v5 + 592), (const std::string *)(v5 + 112));
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 592));
  YAML::detail::memory_holder::merge(v117._M_ptr, *(YAML::detail::memory_holder **)(v5 + 632));
  v28 = *(YAML::detail::node **)(v5 + 648);
  YAML::Node::~Node((YAML::Node *const)(v5 + 592));
  if ( v117._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
  YAML::detail::node_data::insert_map_pair((YAML::detail::node_data *)v23, app_ptc, v28);
  if ( v116._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v116._M_refcount._M_pi);
  if ( v115._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v115._M_refcount._M_pi);
  if ( v114._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v114._M_refcount._M_pi);
  __a.gap0[0] = 0;
  YAML::Node::force_insert<char [9],bool>(
    (YAML::Node *const)(v5 + 304),
    (const char (*)[9])"disabled",
    (const bool *)__a.gap0);
  *(_BYTE *)(v5 + 400) = 1;
  *(_QWORD *)(v5 + 408) = v5 + 424;
  *(_QWORD *)(v5 + 416) = 0LL;
  *(_BYTE *)(v5 + 424) = 0;
  *(_QWORD *)(v5 + 440) = 0LL;
  *(_QWORD *)(v5 + 448) = 0LL;
  *(_QWORD *)(v5 + 456) = 0LL;
  __a.gap0[0] = 1;
  YAML::Node::force_insert<char [9],bool>(
    (YAML::Node *const)(v5 + 400),
    (const char (*)[9])"logSpans",
    (const bool *)__a.gap0);
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 304));
  v29 = *(_QWORD *)(v5 + 360);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    &v114,
    (const std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *)(v5 + 344));
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v29);
    goto LABEL_97;
  }
  v29 = *(_QWORD *)v29;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v115, &v114);
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    v30 = v29;
    __asan_report_load8(v29);
LABEL_98:
    v3 = __asan_report_load4(v30);
LABEL_99:
    if ( v32 == 2 )
    {
      v33 = (YAML::BadInsert *)__cxa_allocate_exception(0x40uLL);
      YAML::BadInsert::BadInsert(v33);
      __asan_handle_no_return(v33);
      _cxa_throw(v33, (struct type_info *)&`typeinfo for'YAML::BadInsert, YAML::BadInsert::~BadInsert);
    }
    goto LABEL_100;
  }
  v29 = *(_QWORD *)v29;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v116, &v115);
  v30 = v29 + 16;
  v31 = *(_BYTE *)(((v29 + 16) >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
    goto LABEL_98;
  v32 = *(_DWORD *)(v29 + 16);
  if ( v32 == 3 )
  {
LABEL_95:
    YAML::detail::node_data::convert_to_map(v29, &v116);
    goto LABEL_100;
  }
  if ( v32 <= 3 )
  {
    if ( v32 <= 1 )
      goto LABEL_95;
    goto LABEL_99;
  }
LABEL_100:
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v117, &v116);
  *(_QWORD *)(v5 + 80) = "reporter";
  YAML::Node::Node<char const*>((YAML::Node *const)(v5 + 592), (const char *const *)(v5 + 80));
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 592));
  YAML::detail::memory_holder::merge(v117._M_ptr, *(YAML::detail::memory_holder **)(v5 + 632));
  app_ptd = *(YAML::detail::node **)(v5 + 648);
  YAML::Node::~Node((YAML::Node *const)(v5 + 592));
  if ( v117._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v117, &v116);
  *(_BYTE *)(v5 + 592) = *(_BYTE *)(v5 + 400);
  *(_QWORD *)(v5 + 600) = v5 + 616;
  std::string::_M_construct<char *>(
    (std::string *const)(v5 + 600),
    *(char **)(v5 + 408),
    (char *)(*(_QWORD *)(v5 + 416) + *(_QWORD *)(v5 + 408)),
    v34);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *const)(v5 + 632),
    (const std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *)(v5 + 440));
  *(_QWORD *)(v5 + 648) = *(_QWORD *)(v5 + 456);
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 592));
  YAML::detail::memory_holder::merge(v117._M_ptr, *(YAML::detail::memory_holder **)(v5 + 632));
  v35 = *(YAML::detail::node **)(v5 + 648);
  YAML::Node::~Node((YAML::Node *const)(v5 + 592));
  if ( v117._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
  YAML::detail::node_data::insert_map_pair((YAML::detail::node_data *)v29, app_ptd, v35);
  if ( v116._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v116._M_refcount._M_pi);
  if ( v115._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v115._M_refcount._M_pi);
  if ( v114._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v114._M_refcount._M_pi);
  *(_BYTE *)(v5 + 496) = 1;
  *(_QWORD *)(v5 + 504) = v5 + 520;
  *(_QWORD *)(v5 + 512) = 0LL;
  *(_BYTE *)(v5 + 520) = 0;
  *(_QWORD *)(v5 + 536) = 0LL;
  *(_QWORD *)(v5 + 544) = 0LL;
  *(_QWORD *)(v5 + 552) = 0LL;
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 496));
  v36 = *(_QWORD *)(v5 + 552);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    &v114,
    (const std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *)(v5 + 536));
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v36);
    goto LABEL_121;
  }
  v36 = *(_QWORD *)v36;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v115, &v114);
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
  {
LABEL_121:
    v37 = v36;
    __asan_report_load8(v36);
LABEL_122:
    v3 = __asan_report_load4(v37);
LABEL_123:
    if ( v39 == 2 )
    {
      v40 = (YAML::BadInsert *)__cxa_allocate_exception(0x40uLL);
      YAML::BadInsert::BadInsert(v40);
      __asan_handle_no_return(v40);
      _cxa_throw(v40, (struct type_info *)&`typeinfo for'YAML::BadInsert, YAML::BadInsert::~BadInsert);
    }
    goto LABEL_124;
  }
  v36 = *(_QWORD *)v36;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v116, &v115);
  v37 = v36 + 16;
  v38 = *(_BYTE *)(((v36 + 16) >> 3) + 0x7FFF8000);
  if ( v38 && v38 <= 3 )
    goto LABEL_122;
  v39 = *(_DWORD *)(v36 + 16);
  if ( v39 == 3 )
  {
LABEL_119:
    YAML::detail::node_data::convert_to_map(v36, &v116);
    goto LABEL_124;
  }
  if ( v39 <= 3 )
  {
    if ( v39 <= 1 )
      goto LABEL_119;
    goto LABEL_123;
  }
LABEL_124:
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v117, &v116);
  *(_QWORD *)(v5 + 80) = "type";
  YAML::Node::Node<char const*>((YAML::Node *const)(v5 + 592), (const char *const *)(v5 + 80));
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 592));
  YAML::detail::memory_holder::merge(v117._M_ptr, *(YAML::detail::memory_holder **)(v5 + 632));
  app_pte = *(YAML::detail::node **)(v5 + 648);
  YAML::Node::~Node((YAML::Node *const)(v5 + 592));
  if ( v117._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v117, &v116);
  *(_QWORD *)(v5 + 80) = "const";
  YAML::Node::Node<char const*>((YAML::Node *const)(v5 + 592), (const char *const *)(v5 + 80));
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 592));
  YAML::detail::memory_holder::merge(v117._M_ptr, *(YAML::detail::memory_holder **)(v5 + 632));
  v41 = *(YAML::detail::node **)(v5 + 648);
  YAML::Node::~Node((YAML::Node *const)(v5 + 592));
  if ( v117._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
  YAML::detail::node_data::insert_map_pair((YAML::detail::node_data *)v36, app_pte, v41);
  if ( v116._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v116._M_refcount._M_pi);
  if ( v115._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v115._M_refcount._M_pi);
  if ( v114._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v114._M_refcount._M_pi);
  rhs = 1;
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 496));
  v42 = *(_QWORD *)(v5 + 552);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    &v114,
    (const std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *)(v5 + 536));
  if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v42);
    goto LABEL_145;
  }
  v42 = *(_QWORD *)v42;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v115, &v114);
  if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
  {
LABEL_145:
    v43 = v42;
    __asan_report_load8(v42);
LABEL_146:
    v3 = __asan_report_load4(v43);
LABEL_147:
    if ( v45 == 2 )
    {
      v46 = (YAML::BadInsert *)__cxa_allocate_exception(0x40uLL);
      YAML::BadInsert::BadInsert(v46);
      __asan_handle_no_return(v46);
      _cxa_throw(v46, (struct type_info *)&`typeinfo for'YAML::BadInsert, YAML::BadInsert::~BadInsert);
    }
    goto LABEL_148;
  }
  v42 = *(_QWORD *)v42;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v116, &v115);
  v43 = v42 + 16;
  v44 = *(_BYTE *)(((v42 + 16) >> 3) + 0x7FFF8000);
  if ( v44 && v44 <= 3 )
    goto LABEL_146;
  v45 = *(_DWORD *)(v42 + 16);
  if ( v45 == 3 )
  {
LABEL_143:
    YAML::detail::node_data::convert_to_map(v42, &v116);
    goto LABEL_148;
  }
  if ( v45 <= 3 )
  {
    if ( v45 <= 1 )
      goto LABEL_143;
    goto LABEL_147;
  }
LABEL_148:
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v117, &v116);
  *(_QWORD *)(v5 + 80) = "param";
  YAML::Node::Node<char const*>((YAML::Node *const)(v5 + 592), (const char *const *)(v5 + 80));
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 592));
  YAML::detail::memory_holder::merge(v117._M_ptr, *(YAML::detail::memory_holder **)(v5 + 632));
  app_ptf = *(YAML::detail::node **)(v5 + 648);
  YAML::Node::~Node((YAML::Node *const)(v5 + 592));
  if ( v117._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v117, &v116);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v5 + 688);
  *(_QWORD *)(v5 + 824) = 0LL;
  YAML::conversion::inner_encode<int>(&rhs, (std::stringstream *)(v5 + 688));
  std::stringbuf::str(&child_name, v5 + 712);
  YAML::Node::Node<std::string>((YAML::Node *const)(v5 + 592), &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v5 + 688);
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 592));
  YAML::detail::memory_holder::merge(v117._M_ptr, *(YAML::detail::memory_holder **)(v5 + 632));
  v47 = *(YAML::detail::node **)(v5 + 648);
  YAML::Node::~Node((YAML::Node *const)(v5 + 592));
  if ( v117._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
  YAML::detail::node_data::insert_map_pair((YAML::detail::node_data *)v42, app_ptf, v47);
  if ( v116._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v116._M_refcount._M_pi);
  if ( v115._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v115._M_refcount._M_pi);
  if ( v114._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v114._M_refcount._M_pi);
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 304));
  v48 = *(_QWORD *)(v5 + 360);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    &v114,
    (const std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *)(v5 + 344));
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v48);
    goto LABEL_171;
  }
  v48 = *(_QWORD *)v48;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v115, &v114);
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
  {
LABEL_171:
    v49 = v48;
    __asan_report_load8(v48);
LABEL_172:
    v3 = __asan_report_load4(v49);
LABEL_173:
    if ( v51 == 2 )
    {
      v52 = (YAML::BadInsert *)__cxa_allocate_exception(0x40uLL);
      YAML::BadInsert::BadInsert(v52);
      __asan_handle_no_return(v52);
      _cxa_throw(v52, (struct type_info *)&`typeinfo for'YAML::BadInsert, YAML::BadInsert::~BadInsert);
    }
    goto LABEL_174;
  }
  v48 = *(_QWORD *)v48;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v116, &v115);
  v49 = v48 + 16;
  v50 = *(_BYTE *)(((v48 + 16) >> 3) + 0x7FFF8000);
  if ( v50 && v50 <= 3 )
    goto LABEL_172;
  v51 = *(_DWORD *)(v48 + 16);
  if ( v51 == 3 )
  {
LABEL_169:
    YAML::detail::node_data::convert_to_map(v48, &v116);
    goto LABEL_174;
  }
  if ( v51 <= 3 )
  {
    if ( v51 <= 1 )
      goto LABEL_169;
    goto LABEL_173;
  }
LABEL_174:
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v117, &v116);
  *(_QWORD *)(v5 + 80) = "sampler";
  YAML::Node::Node<char const*>((YAML::Node *const)(v5 + 592), (const char *const *)(v5 + 80));
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 592));
  YAML::detail::memory_holder::merge(v117._M_ptr, *(YAML::detail::memory_holder **)(v5 + 632));
  app_ptg = *(YAML::detail::node **)(v5 + 648);
  YAML::Node::~Node((YAML::Node *const)(v5 + 592));
  if ( v117._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v117, &v116);
  *(_BYTE *)(v5 + 592) = *(_BYTE *)(v5 + 496);
  *(_QWORD *)(v5 + 600) = v5 + 616;
  std::string::_M_construct<char *>(
    (std::string *const)(v5 + 600),
    *(char **)(v5 + 504),
    (char *)(*(_QWORD *)(v5 + 512) + *(_QWORD *)(v5 + 504)),
    v53);
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *const)(v5 + 632),
    (const std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *)(v5 + 536));
  *(_QWORD *)(v5 + 648) = *(_QWORD *)(v5 + 552);
  YAML::Node::EnsureNodeExists((const YAML::Node *const)(v5 + 592));
  YAML::detail::memory_holder::merge(v117._M_ptr, *(YAML::detail::memory_holder **)(v5 + 632));
  v54 = *(YAML::detail::node **)(v5 + 648);
  YAML::Node::~Node((YAML::Node *const)(v5 + 592));
  if ( v117._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
  YAML::detail::node_data::insert_map_pair((YAML::detail::node_data *)v48, app_ptg, v54);
  if ( v116._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v116._M_refcount._M_pi);
  if ( v115._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v115._M_refcount._M_pi);
  if ( v114._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v114._M_refcount._M_pi);
  jaegertracing::Config::parse((jaegertracing::Config *)(v5 + 1152), (const YAML::Node *)(v5 + 304));
  jaegertracing::logging::nullLogger((jaegertracing::logging *)&v113);
  v55 = v113;
  v117._M_ptr = v113;
  v117._M_refcount._M_pi = 0LL;
  *(_QWORD *)(v5 + 80) = 0LL;
  if ( v55 )
  {
    v56 = operator new(0x18uLL);
    v57 = v113;
    v113 = 0LL;
    v58 = v56 + 8;
    v59 = *(_BYTE *)(((v56 + 8) >> 3) + 0x7FFF8000);
    if ( v59 && v59 <= 3 )
    {
      __asan_report_store4(v58);
    }
    else
    {
      *(_DWORD *)(v56 + 8) = 1;
      v58 = v56 + 12;
      v60 = *(_BYTE *)(((v56 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v56 + 12) & 7) + 3) < v60 || !v60 )
      {
        *(_DWORD *)(v56 + 12) = 1;
        if ( !*(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v56 = &`vtable for'std::_Sp_counted_deleter<jaegertracing::logging::Logger *,std::default_delete<jaegertracing::logging::Logger>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                         + 2;
          v61 = v56 + 16;
          if ( !*(_BYTE *)(((v56 + 16) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v56 + 16) = v57;
            *(_QWORD *)(v5 + 80) = v56;
            goto LABEL_194;
          }
LABEL_209:
          v3 = __asan_report_store8(v61);
          goto LABEL_210;
        }
LABEL_208:
        v61 = v56;
        __asan_report_store8(v56);
        goto LABEL_209;
      }
    }
    v56 = __asan_report_store4(v58);
    goto LABEL_208;
  }
LABEL_194:
  v48 = *(_QWORD *)(v5 + 80);
  if ( (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v48 != v117._M_refcount._M_pi )
  {
    if ( !v48 )
    {
LABEL_200:
      if ( v117._M_refcount._M_pi )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
      v117._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v48;
      goto LABEL_203;
    }
    v61 = v48 + 8;
    if ( !&_pthread_key_create )
    {
LABEL_211:
      v64 = *(_BYTE *)(((v48 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v48 + 8) & 7) + 3) >= v64 && v64 )
      {
        v3 = __asan_report_load4(v48 + 8);
        v4 = (unsigned __int64)v65;
        v67 = v66;
        M_pi = v117._M_refcount._M_pi;
        if ( !v117._M_refcount._M_pi )
          goto LABEL_216;
        goto LABEL_215;
      }
      ++*(_DWORD *)(v48 + 8);
      goto LABEL_200;
    }
    v62 = *(_BYTE *)((v61 >> 3) + 0x7FFF8000);
    if ( (char)((v61 & 7) + 3) < v62 || !v62 )
    {
      _InterlockedAdd((volatile signed __int32 *)v61, 1u);
      goto LABEL_200;
    }
LABEL_210:
    __asan_report_store4(v61);
    goto LABEL_211;
  }
LABEL_203:
  v63 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 80);
  if ( v63 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v63);
  *(_QWORD *)(v5 + 80) = &`vtable for'jaegertracing::metrics::NullStatsFactory + 2;
  jaegertracing::Tracer::make(&v116, v5 + 1160, v5 + 1152, &v117, v5 + 80, 0LL);
  while ( 1 )
  {
    if ( v117._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
    if ( !v113 )
      goto LABEL_225;
    if ( *(_BYTE *)(((unsigned __int64)v113 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v113);
    }
    else
    {
      v69 = (unsigned __int64)&v113->m_pMemory._M_ptr->m_nodes._M_t._M_impl.std::_Rb_tree_header;
      if ( !*(_BYTE *)((v69 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))&v113->m_pMemory._M_ptr->m_nodes._M_t._M_impl._M_header._M_color)();
LABEL_225:
        v117 = v116;
        v70 = v116._M_refcount._M_pi;
        if ( v116._M_refcount._M_pi )
        {
          p_M_use_count = &v116._M_refcount._M_pi->_M_use_count;
          if ( &_pthread_key_create )
          {
            v72 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v72 || !v72 )
            {
              _InterlockedAdd(p_M_use_count, 1u);
              goto LABEL_230;
            }
            v70 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
          }
          v74 = &v70->_M_use_count;
          v78 = *(_BYTE *)(((unsigned __int64)&v70->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v70 + 8) & 7) + 3) >= v78 && v78 )
          {
            __asan_report_load4(v74);
            goto LABEL_251;
          }
          ++v70->_M_use_count;
        }
LABEL_230:
        v73 = v117._M_refcount._M_pi;
        v117._M_refcount._M_pi = 0LL;
        v74 = (_Atomic_word *)(v4 + 8);
        if ( !*(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v4 + 8) = v117._M_ptr;
          v74 = (_Atomic_word *)(v4 + 16);
          if ( !*(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
          {
            v75 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 16);
            *(_QWORD *)(v4 + 16) = v73;
            if ( v75 )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v75);
            if ( v117._M_refcount._M_pi )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v117._M_refcount._M_pi);
            if ( v116._M_refcount._M_pi )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v116._M_refcount._M_pi);
            common::milog::MiLogStream::MiLogStream(
              (common::milog::MiLogStream *const)&child_name,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "src/tracing/tracing.cpp",
              "init",
              287);
LABEL_253:
            v79 = *(_BYTE *)(((v4 + 1) >> 3) + 0x7FFF8000);
            if ( v79 <= (char)((v4 + 1) & 7) && v79 )
            {
              __asan_report_load1(v4 + 1);
            }
            else if ( *(char *)((v4 >> 3) + 0x7FFF8000) >= 0 )
            {
              common::milog::MiLogStream::operator()(
                (common::milog::MiLogStream *const)&child_name,
                "[TracingMgr] init. service_name:%s is_enabled_:%d is_perf_span_enabled_:%d",
                *(const char **)(v5 + 112),
                *(unsigned __int8 *)v4,
                *(unsigned __int8 *)(v4 + 1));
LABEL_259:
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
              v80 = *(char **)(v5 + 1528);
              if ( v80 != (char *)(v5 + 1544) )
                operator delete(v80);
              v81 = *(char **)(v5 + 1488);
              if ( v81 != (char *)(v5 + 1504) )
                operator delete(v81);
              v82 = *(char **)(v5 + 1456);
              if ( v82 != (char *)(v5 + 1472) )
                operator delete(v82);
              v83 = *(char **)(v5 + 1424);
              if ( v83 != (char *)(v5 + 1440) )
                operator delete(v83);
              v84 = *(char **)(v5 + 1392);
              if ( v84 != (char *)(v5 + 1408) )
                operator delete(v84);
              v85 = *(char **)(v5 + 1360);
              if ( v85 != (char *)(v5 + 1376) )
                operator delete(v85);
              v86 = *(char **)(v5 + 1328);
              if ( v86 != (char *)(v5 + 1344) )
                operator delete(v86);
              v87 = *(char **)(v5 + 1256);
              if ( v87 != (char *)(v5 + 1272) )
                operator delete(v87);
              v88 = *(char **)(v5 + 1216);
              if ( v88 != (char *)(v5 + 1232) )
                operator delete(v88);
              v89 = *(_QWORD *)(v5 + 1200);
              for ( j = *(_QWORD *)(v5 + 1192); ; j += 72LL )
              {
                if ( v89 == j )
                {
                  v92 = *(void **)(v5 + 1192);
                  if ( v92 )
                    operator delete(v92);
                  v93 = *(char **)(v5 + 1160);
                  if ( v93 != (char *)(v5 + 1176) )
                    operator delete(v93);
                  YAML::Node::~Node((YAML::Node *const)(v5 + 496));
                  YAML::Node::~Node((YAML::Node *const)(v5 + 400));
                  YAML::Node::~Node((YAML::Node *const)(v5 + 304));
                  v16 = 0;
                  goto LABEL_292;
                }
                v91 = (void *)(j + 32);
                if ( *(_BYTE *)(((j + 32) >> 3) + 0x7FFF8000) )
                  break;
                opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
                  *(_QWORD *)(j + 32),
                  (void *)(j + 40));
                v91 = (void *)j;
                if ( *(_BYTE *)((j >> 3) + 0x7FFF8000) )
                  goto LABEL_279;
                v91 = *(void **)j;
                if ( *(_QWORD *)j != j + 16 )
                  goto LABEL_280;
LABEL_281:
                ;
              }
              __asan_report_load8(v91);
LABEL_279:
              __asan_report_load8(v91);
LABEL_280:
              operator delete(v91);
              goto LABEL_281;
            }
            __asan_report_load1(v4);
            goto LABEL_259;
          }
LABEL_252:
          __asan_report_load8(v74);
          goto LABEL_253;
        }
LABEL_251:
        __asan_report_store8(v74);
        goto LABEL_252;
      }
    }
    v4 = __asan_report_load8(v69);
    v67 = v76;
    M_pi = v117._M_refcount._M_pi;
    if ( v117._M_refcount._M_pi )
LABEL_215:
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
LABEL_216:
    if ( !v113 )
      goto LABEL_245;
    if ( !*(_BYTE *)(((unsigned __int64)v113 >> 3) + 0x7FFF8000) )
      break;
    __asan_report_load8(v113);
  }
  M_ptr = (__int64)v113->m_pMemory._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&v113->m_pMemory._M_ptr->m_nodes._M_t._M_impl.std::_Rb_tree_header >> 3)
                + 0x7FFF8000) )
    M_ptr = __asan_report_load8(&v113->m_pMemory._M_ptr->m_nodes._M_t._M_impl.std::_Rb_tree_header);
  (*(void (__fastcall **)(double))(M_ptr + 8))(v3);
LABEL_245:
  jaegertracing::Config::~Config((jaegertracing::Config *const)(v5 + 1152));
  YAML::Node::~Node((YAML::Node *const)(v5 + 496));
  YAML::Node::~Node((YAML::Node *const)(v5 + 400));
  YAML::Node::~Node((YAML::Node *const)(v5 + 304));
  v97 = *(char **)(v5 + 112);
  if ( v97 != (char *)(v5 + 128) )
    operator delete(v97);
  common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 48));
  if ( v67 == 1 )
  {
    v96 = (__int64 *)__cxa_begin_catch((void *)v4);
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "init",
      290);
    if ( *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v96);
    v98 = *v96;
    if ( *(_BYTE *)(((unsigned __int64)(*v96 + 16) >> 3) + 0x7FFF8000) )
      v98 = __asan_report_load8(*v96 + 16);
    v99 = (const char *)(*(__int64 (__fastcall **)(__int64 *, double))(v98 + 16))(v96, v3);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "catch exception %s", v99);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    __cxa_end_catch();
    v16 = -1;
  }
  else
  {
    __cxa_begin_catch((void *)v4);
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "init",
      290);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "unknown exception", v3);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    __cxa_end_catch();
    v16 = -1;
  }
LABEL_295:
  if ( v120 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8084) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF808C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF80C4) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_5(v5, 1632LL, v120);
  }
  return v16;
};

// Line 295: range 0000000014E763F8-0000000014E76CF0
int32_t __fastcall TracingMgr::reload(TracingMgr *const this, const common::tools::PTree *root, uint32_t self_app_id)
{
  bool is_enabled; // r15
  TracingMgr *v4; // rbx
  unsigned __int64 v5; // r13
  _DWORD *v6; // rbp
  char v7; // al
  __int64 v8; // rax
  bool v9; // al
  bool *p_is_perf_span_enabled; // rdi
  char v11; // al
  TracingMgr *v12; // rdi
  char v13; // al
  char v14; // al
  std::list<std::pair<std::string,common::tools::PTree>> *i; // rax
  char *v16; // rdi
  int32_t v17; // ebx
  size_t v18; // rdx
  char *v19; // rdi
  char *v20; // rdi
  char v21; // al
  char *v22; // rdi
  char v23; // al
  std::list<std::pair<std::string,common::tools::PTree>> *roota; // [rsp+8h] [rbp-190h]
  bool app_pta; // [rsp+18h] [rbp-180h]
  std::tuple_element<1,std::pair<std::string,common::tools::PTree> >::type *app_ptb; // [rsp+18h] [rbp-180h]
  bool is_perf_span_enabled_old; // [rsp+25h] [rbp-173h]
  bool is_contains_self_app_id; // [rsp+26h] [rbp-172h]
  bool v31; // [rsp+27h] [rbp-171h]
  std::tuple_element<0,std::pair<std::string,common::tools::PTree> >::type *name; // [rsp+28h] [rbp-170h]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-159h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> v34; // [rsp+40h] [rbp-158h] BYREF
  std::string child_name; // [rsp+60h] [rbp-138h] BYREF
  char v36[280]; // [rsp+80h] [rbp-118h] BYREF

  v4 = this;
  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(224LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 8 6 pt:301 64 8 15 app_list_pt:312 96 32 19 self_app_id_str:313 160 32 14 app_id_str:322";
  *(_QWORD *)(v5 + 16) = TracingMgr::reload;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
  }
  else
  {
    is_enabled = this->is_enabled_;
    this = (TracingMgr *const)((char *)this + 1);
    v7 = *(_BYTE *)(((unsigned __int64)&v4->is_perf_span_enabled_ >> 3) + 0x7FFF8000);
    if ( v7 > (((unsigned __int8)v4 + 1) & 7) || !v7 )
    {
      is_perf_span_enabled_old = v4->is_perf_span_enabled_;
      std::string::basic_string<std::allocator<char>>(&child_name, "Root.Tracing", &__a);
      goto LABEL_10;
    }
  }
  __asan_report_load1(this);
LABEL_10:
  common::tools::PTree::getChild(root, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.enabled", &__a);
  v9 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v5 + 32), &child_name);
  if ( *(char *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(v4);
LABEL_27:
    __asan_report_load1(v4);
    goto LABEL_28;
  }
  v4->is_enabled_ = v9;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  if ( *(char *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_27;
  v31 = v4->is_enabled_;
  if ( !v4->is_enabled_ )
  {
    p_is_perf_span_enabled = &v4->is_perf_span_enabled_;
    v11 = *(_BYTE *)(((unsigned __int64)&v4->is_perf_span_enabled_ >> 3) + 0x7FFF8000);
    if ( v11 > (((unsigned __int8)v4 + 1) & 7) || !v11 )
    {
      v4->is_perf_span_enabled_ = 0;
      goto LABEL_20;
    }
LABEL_68:
    __asan_report_store1(p_is_perf_span_enabled);
LABEL_69:
    v12 = v4;
    __asan_report_load1(v4);
LABEL_70:
    __asan_report_load1(v12);
    goto LABEL_71;
  }
LABEL_28:
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.force_enable_perf_span", &__a);
  is_contains_self_app_id = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v5 + 32), &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  if ( is_contains_self_app_id )
  {
    v14 = *(_BYTE *)(((unsigned __int64)&v4->is_perf_span_enabled_ >> 3) + 0x7FFF8000);
    if ( v14 > (((unsigned __int8)v4 + 1) & 7) || !v14 )
    {
      v4->is_perf_span_enabled_ = 1;
      goto LABEL_20;
    }
    __asan_report_store1(&v4->is_perf_span_enabled_);
  }
  std::string::basic_string<std::allocator<char>>(&child_name, "PerfSpanAppList", &__a);
  common::tools::PTree::getChild((const common::tools::PTree *const)(v5 + 32), &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v5 + 96), self_app_id);
  common::tools::PTree::getAllChild[abi:cxx11](&v34, (const common::tools::PTree *const)(v5 + 64));
  for ( i = (std::list<std::pair<std::string,common::tools::PTree>> *)v34._M_impl._M_node._M_next;
        ;
        i = (std::list<std::pair<std::string,common::tools::PTree>> *)roota->_M_impl._M_node._M_next )
  {
    roota = i;
    if ( i == &v34 )
      goto LABEL_61;
    name = (std::tuple_element<0,std::pair<std::string,common::tools::PTree> >::type *)&i->_M_impl._M_node._M_size;
    app_ptb = (std::tuple_element<1,std::pair<std::string,common::tools::PTree> >::type *)&i[2];
    if ( (unsigned int)std::string::compare(&i->_M_impl._M_node._M_size, &off_1AE43D60) )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)(v5 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/tracing/tracing.cpp",
        "reload",
        319);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v5 + 184),
        "invalid pt name:");
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v5 + 184),
        name);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 160));
      std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v34);
      v16 = *(char **)(v5 + 96);
      if ( v16 != (char *)(v5 + 112) )
        operator delete(v16);
      common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 64));
      v17 = -1;
      goto LABEL_78;
    }
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.app_id", &__a);
    common::tools::PTree::get<std::string>((std::string *)(v5 + 160), app_ptb, &child_name);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    v18 = *(_QWORD *)(v5 + 104);
    if ( v18 == *(_QWORD *)(v5 + 168) )
    {
      if ( v18 )
        app_pta = !memcmp(*(const void **)(v5 + 96), *(const void **)(v5 + 160), v18) ? v31 : is_contains_self_app_id;
      else
        app_pta = v31;
    }
    else
    {
      app_pta = is_contains_self_app_id;
    }
    if ( app_pta )
      break;
    v19 = *(char **)(v5 + 160);
    if ( v19 != (char *)(v5 + 176) )
      operator delete(v19);
    p_is_perf_span_enabled = (bool *)roota;
    if ( *(_BYTE *)(((unsigned __int64)roota >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(roota);
      goto LABEL_67;
    }
  }
  v20 = *(char **)(v5 + 160);
  if ( v20 != (char *)(v5 + 176) )
    operator delete(v20);
  is_contains_self_app_id = app_pta;
LABEL_61:
  std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v34);
  p_is_perf_span_enabled = &v4->is_perf_span_enabled_;
  v21 = *(_BYTE *)(((unsigned __int64)&v4->is_perf_span_enabled_ >> 3) + 0x7FFF8000);
  if ( v21 <= (((unsigned __int8)v4 + 1) & 7) && v21 )
  {
LABEL_67:
    __asan_report_store1(p_is_perf_span_enabled);
    goto LABEL_68;
  }
  v4->is_perf_span_enabled_ = is_contains_self_app_id;
  v22 = *(char **)(v5 + 96);
  if ( v22 != (char *)(v5 + 112) )
    operator delete(v22);
  common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 64));
LABEL_20:
  if ( *(char *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_69;
  if ( v4->is_enabled_ != is_enabled )
    goto LABEL_25;
  v12 = (TracingMgr *)&v4->is_perf_span_enabled_;
  v13 = *(_BYTE *)(((unsigned __int64)&v4->is_perf_span_enabled_ >> 3) + 0x7FFF8000);
  if ( v13 <= (((unsigned __int8)v4 + 1) & 7) && v13 )
    goto LABEL_70;
  if ( v4->is_perf_span_enabled_ == is_perf_span_enabled_old )
  {
    v17 = 0;
  }
  else
  {
LABEL_25:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/tracing/tracing.cpp",
      "reload",
      340);
LABEL_71:
    v23 = *(_BYTE *)(((unsigned __int64)&v4->is_perf_span_enabled_ >> 3) + 0x7FFF8000);
    if ( v23 <= (((unsigned __int8)v4 + 1) & 7) && v23 )
    {
      __asan_report_load1(&v4->is_perf_span_enabled_);
    }
    else if ( *(char *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) >= 0 )
    {
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&child_name,
        "[TracingMgr] reload. is_enabled_:%d->%d is_perf_span_enabled_:%d->%d",
        is_enabled,
        v4->is_enabled_,
        is_perf_span_enabled_old,
        v4->is_perf_span_enabled_);
      goto LABEL_77;
    }
    __asan_report_load1(v4);
LABEL_77:
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v17 = 0;
  }
LABEL_78:
  common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 32));
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v17;
};

// Line 357: range 0000000014E7A632-0000000014E7B184
unsigned __int64 __fastcall TracingMgr::startSpan(
        unsigned __int64 a1,
        TracingMgr *const this,
        opentracing::v3::string_view operation_name,
        jaegertracing::SpanContext *span_ctx_ptr,
        bool is_need_holder,
        uint32_t expired_seconds)
{
  unsigned __int64 v6; // r13
  TracingMgr *v7; // r15
  unsigned __int64 v9; // r14
  _DWORD *v10; // r12
  __int64 v12; // rax
  std::shared_ptr<opentracing::v3::Tracer> *p_tracer; // rdi
  SpanContextGuardMgr *v14; // rax
  __int64 v15; // rax
  uint64_t *p_parentID; // rdi
  void *v17; // rdi
  void *v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  char v23; // dl
  char v24; // cl
  unsigned __int64 p_traceID; // rdi
  char v26; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v27; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rdi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  const void *v31; // rdi
  void *v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  char v35; // dl
  char v36; // dl
  double v37; // xmm0_8
  void *v38; // rax
  void *v39; // rbp
  TracingMgr *v40; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v41; // rdi
  char v42; // cl
  _QWORD *v43; // rdi
  __int64 v44; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v46; // rdi
  _QWORD *v47; // rdi
  _QWORD *v48; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v49; // rdi
  std::shared_ptr<SpanHolder> *v50; // rcx
  unsigned __int64 *v51; // r8
  std::shared_ptr<SpanHolder> *v52; // r9
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v53; // rdi
  __int64 v54; // rax
  void *v55; // rdi
  __int64 *v56; // rbx
  __int64 v57; // rax
  const char *v58; // rax
  std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+8h] [rbp-1C0h]
  const jaegertracing::SpanContext *v61; // [rsp+30h] [rbp-198h]
  __int64 **v63; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v64; // [rsp+48h] [rbp-180h] BYREF
  __int64 *v65; // [rsp+50h] [rbp-178h] BYREF
  int v66; // [rsp+58h] [rbp-170h]
  const jaegertracing::SpanContext *span_ctx_ptra; // [rsp+60h] [rbp-168h]
  common::milog::MiLogStream v68; // [rsp+70h] [rbp-158h] BYREF
  char v69[312]; // [rsp+90h] [rbp-138h] BYREF

  v6 = a1;
  v7 = this;
  v9 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(256LL);
    if ( v12 )
      v9 = v12;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "5 32 8 11 span_id:387 64 16 24 opentracing_span_ptr:370 96 16 12 span_ptr:371 128 16 14 holder_p"
                        "tr:380 160 64 7 options";
  *(_QWORD *)(v9 + 16) = TracingMgr::startSpan;
  v10 = (_DWORD *)(v9 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -218959360;
  v10[536862722] = -219021312;
  v10[536862723] = -219021312;
  v10[536862724] = -219021312;
  v10[536862727] = -202116109;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
    goto LABEL_13;
  }
  if ( !this->is_enabled_ )
  {
    if ( !*(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)a1 = 0LL;
      a1 += 8LL;
      if ( !*(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v6 + 8) = 0LL;
        goto LABEL_7;
      }
      goto LABEL_14;
    }
LABEL_13:
    __asan_report_store8(a1);
LABEL_14:
    __asan_report_store8(a1);
  }
  if ( !span_ctx_ptr )
  {
    v14 = SpanContextGuardMgr::instance();
    span_ctx_ptr = (jaegertracing::SpanContext *)SpanContextGuardMgr::back(v14);
  }
  p_tracer = &this->tracer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->tracer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_tracer);
    goto LABEL_20;
  }
  M_ptr = this->tracer_._M_ptr;
  v65 = &`vtable for'opentracing::v3::SpanReference + 2;
  v66 = 1;
  span_ctx_ptra = span_ctx_ptr;
  v63 = &v65;
  *(_QWORD *)(v9 + 160) = 0LL;
  *(_QWORD *)(v9 + 168) = 0LL;
  *(_QWORD *)(v9 + 176) = 0LL;
  *(_QWORD *)(v9 + 184) = 0LL;
  *(_QWORD *)(v9 + 192) = 0LL;
  *(_QWORD *)(v9 + 200) = 0LL;
  *(_QWORD *)(v9 + 208) = 0LL;
  *(_QWORD *)(v9 + 216) = 0LL;
  span_ctx_ptr = (jaegertracing::SpanContext *)&v63;
  v61 = (const jaegertracing::SpanContext *)&v64;
  while ( v61 != span_ctx_ptr )
  {
    p_tracer = (std::shared_ptr<opentracing::v3::Tracer> *)span_ctx_ptr;
    if ( *(_BYTE *)(((unsigned __int64)span_ctx_ptr >> 3) + 0x7FFF8000) )
    {
LABEL_20:
      __asan_report_load8(p_tracer);
LABEL_21:
      v15 = __asan_report_load8(p_tracer);
      goto LABEL_22;
    }
    p_tracer = (std::shared_ptr<opentracing::v3::Tracer> *)span_ctx_ptr->_vptr_SpanContext;
    if ( *(_BYTE *)(((unsigned __int64)span_ctx_ptr->_vptr_SpanContext >> 3) + 0x7FFF8000) )
      goto LABEL_21;
    v15 = (__int64)p_tracer->_M_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&p_tracer->_M_ptr[2] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&p_tracer->_M_ptr[2]);
      break;
    }
LABEL_22:
    (*(void (__fastcall **)(std::shared_ptr<opentracing::v3::Tracer> *, unsigned __int64))(v15 + 16))(
      p_tracer,
      v9 + 160);
    span_ctx_ptr = (jaegertracing::SpanContext *)((char *)span_ctx_ptr + 8);
  }
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
    p_parentID = (uint64_t *)M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_32;
  }
  p_parentID = (uint64_t *)(M_ptr->_vptr_Tracer + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_parentID >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_parentID);
    goto LABEL_33;
  }
  (*((void (__fastcall **)(unsigned __int64 *, std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *, const char *, size_t, unsigned __int64))M_ptr->_vptr_Tracer
   + 2))(
    &v64,
    M_ptr,
    operation_name.data_,
    operation_name.length_,
    v9 + 160);
  M_ptr = *(std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type **)(v9 + 208);
  for ( span_ctx_ptr = *(jaegertracing::SpanContext **)(v9 + 200);
        M_ptr != (std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *)span_ctx_ptr;
        span_ctx_ptr = (jaegertracing::SpanContext *)((char *)span_ctx_ptr + 72) )
  {
    p_parentID = &span_ctx_ptr->_parentID;
    if ( *(_BYTE *)(((unsigned __int64)&span_ctx_ptr->_parentID >> 3) + 0x7FFF8000) )
    {
LABEL_33:
      __asan_report_load8(p_parentID);
LABEL_34:
      __asan_report_load8(p_parentID);
LABEL_35:
      operator delete(p_parentID);
      continue;
    }
    opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      span_ctx_ptr->_parentID,
      &span_ctx_ptr->_flags);
    p_parentID = (uint64_t *)span_ctx_ptr;
    if ( *(_BYTE *)(((unsigned __int64)span_ctx_ptr >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    p_parentID = (uint64_t *)span_ctx_ptr->_vptr_SpanContext;
    if ( (uint64_t *)span_ctx_ptr->_vptr_SpanContext != &span_ctx_ptr->_traceID._low )
      goto LABEL_35;
  }
  v17 = *(void **)(v9 + 200);
  if ( v17 )
    operator delete(v17);
  v18 = *(void **)(v9 + 176);
  if ( v18 )
    operator delete(v18);
  v19 = v64;
  *(_QWORD *)(v9 + 64) = v64;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  if ( !v19 )
  {
LABEL_54:
    span_ctx_ptr = *(jaegertracing::SpanContext **)(v9 + 32);
    if ( span_ctx_ptr != *(jaegertracing::SpanContext **)(v9 + 72) )
    {
      if ( span_ctx_ptr )
      {
        p_traceID = (unsigned __int64)&span_ctx_ptr->_traceID;
        if ( !&_pthread_key_create )
          goto LABEL_81;
        v26 = *(_BYTE *)((p_traceID >> 3) + 0x7FFF8000);
        if ( (char)((p_traceID & 7) + 3) >= v26 && v26 )
          goto LABEL_80;
        _InterlockedAdd((volatile signed __int32 *)p_traceID, 1u);
      }
LABEL_60:
      v27 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v9 + 72);
      if ( v27 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v27);
      *(_QWORD *)(v9 + 72) = span_ctx_ptr;
    }
    v28 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v9 + 32);
    if ( v28 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v28);
    v29 = v64;
    if ( v64 )
    {
      if ( *(_BYTE *)((v64 >> 3) + 0x7FFF8000) )
        goto LABEL_89;
      v30 = *(_QWORD *)v64 + 8LL;
      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
      {
LABEL_90:
        v34 = v30;
        __asan_report_load8(v30);
        goto LABEL_91;
      }
      (*(void (**)(void))(*(_QWORD *)v64 + 8LL))();
    }
    v31 = *(const void **)(v9 + 64);
    if ( !v31 )
      goto LABEL_96;
    v32 = __dynamic_cast(
            v31,
            (const struct __class_type_info *)&`typeinfo for'opentracing::v3::Span,
            (const struct __class_type_info *)&`typeinfo for'jaegertracing::Span,
            0LL);
    if ( !v32 )
      goto LABEL_96;
    *(_QWORD *)(v9 + 96) = v32;
    v33 = *(_QWORD *)(v9 + 72);
    *(_QWORD *)(v9 + 104) = v33;
    if ( !v33 )
      goto LABEL_97;
    v34 = v33 + 8;
    if ( !&_pthread_key_create )
    {
LABEL_92:
      v42 = *(_BYTE *)(((unsigned __int64)(v33 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v33 + 8) & 7) + 3) < v42 || !v42 )
      {
        ++*(_DWORD *)(v33 + 8);
        goto LABEL_97;
      }
      __asan_report_load4(v33 + 8);
LABEL_96:
      *(_QWORD *)(v9 + 96) = 0LL;
      *(_QWORD *)(v9 + 104) = 0LL;
LABEL_97:
      if ( *(_QWORD *)(v9 + 96) )
      {
        if ( !is_need_holder )
          goto LABEL_99;
      }
      else
      {
        common::milog::MiLogStream::MiLogStream(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/tracing/tracing.cpp",
          "startSpan",
          374);
        common::milog::MiLogStream::operator()(&v68, "StartSpan failed");
        common::milog::MiLogStream::~MiLogStream(&v68);
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        {
          v47 = (_QWORD *)v6;
          __asan_report_store8(v6);
        }
        else
        {
          *(_QWORD *)v6 = 0LL;
          v47 = (_QWORD *)(v6 + 8);
          if ( !*(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v6 + 8) = 0LL;
            goto LABEL_102;
          }
        }
        __asan_report_store8(v47);
      }
      SpanHolder::create(v9 + 128, v7, (SpanPtr *)(v9 + 96));
      if ( SpanHolder::start(*(SpanHolder *const *)(v9 + 128), expired_seconds) )
      {
        common::milog::MiLogStream::MiLogStream(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/tracing/tracing.cpp",
          "startSpan",
          383);
        common::milog::MiLogStream::operator()(&v68, "span_holder start failed");
        common::milog::MiLogStream::~MiLogStream(&v68);
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        {
          v48 = (_QWORD *)v6;
          __asan_report_store8(v6);
        }
        else
        {
          *(_QWORD *)v6 = 0LL;
          v48 = (_QWORD *)(v6 + 8);
          if ( !*(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v6 + 8) = 0LL;
            v49 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v9 + 136);
            if ( v49 )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v49);
            goto LABEL_102;
          }
        }
        __asan_report_store8(v48);
      }
      *(_QWORD *)(v9 + 32) = TracingMgr::getSpanID((const SpanPtr *)(v9 + 96));
      _tls_init_3();
      std::_Hashtable<unsigned long,std::pair<unsigned long const,std::shared_ptr<SpanHolder>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpanHolder>>>,std::__detail::_Select1st,std::equal_to<unsigned long>,std::hash<unsigned long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<unsigned long &,std::shared_ptr<SpanHolder>>(
        (std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > *const)((char *)&TracingMgr::holder_map_._M_h + __readfsqword(0)),
        (std::true_type)(v9 + 32),
        (unsigned __int64 *)(v9 + 128),
        v50,
        v51,
        v52);
      v53 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v9 + 136);
      if ( v53 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v53);
LABEL_99:
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      {
        v43 = (_QWORD *)v6;
        __asan_report_store8(v6);
      }
      else
      {
        *(_QWORD *)v6 = *(_QWORD *)(v9 + 96);
        v43 = (_QWORD *)(v6 + 8);
        if ( !*(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v6 + 8) = 0LL;
          v44 = *(_QWORD *)(v9 + 104);
          *(_QWORD *)(v9 + 104) = 0LL;
          *(_QWORD *)(v6 + 8) = v44;
          *(_QWORD *)(v9 + 96) = 0LL;
LABEL_102:
          v45 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v9 + 104);
          if ( v45 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v45);
          v46 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v9 + 72);
          if ( v46 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v46);
          goto LABEL_7;
        }
      }
      __asan_report_store8(v43);
      goto LABEL_122;
    }
    v35 = *(_BYTE *)((v34 >> 3) + 0x7FFF8000);
    if ( (char)((v34 & 7) + 3) < v35 || !v35 )
    {
      _InterlockedAdd((volatile signed __int32 *)v34, 1u);
      goto LABEL_97;
    }
LABEL_91:
    v33 = __asan_report_store4(v34);
    goto LABEL_92;
  }
  v20 = operator new(0x18uLL);
  v21 = v64;
  v64 = 0LL;
  v22 = v20 + 8;
  v23 = *(_BYTE *)(((v20 + 8) >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
  {
    __asan_report_store4(v22);
LABEL_77:
    v20 = __asan_report_store4(v22);
    goto LABEL_78;
  }
  *(_DWORD *)(v20 + 8) = 1;
  v22 = v20 + 12;
  v24 = *(_BYTE *)(((v20 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v20 + 12) & 7) + 3) >= v24 && v24 )
    goto LABEL_77;
  *(_DWORD *)(v20 + 12) = 1;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    p_traceID = v20;
    __asan_report_store8(v20);
    goto LABEL_79;
  }
  *(_QWORD *)v20 = &`vtable for'std::_Sp_counted_deleter<opentracing::v3::Span *,std::default_delete<opentracing::v3::Span>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  p_traceID = v20 + 16;
  if ( !*(_BYTE *)(((v20 + 16) >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v20 + 16) = v21;
    *(_QWORD *)(v9 + 32) = v20;
    goto LABEL_54;
  }
LABEL_79:
  __asan_report_store8(p_traceID);
LABEL_80:
  __asan_report_store4(p_traceID);
LABEL_81:
  v36 = *(_BYTE *)(((unsigned __int64)&span_ctx_ptr->_traceID >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)span_ctx_ptr + 8) & 7) + 3) < v36 || !v36 )
  {
    ++LODWORD(span_ctx_ptr->_traceID._high);
    goto LABEL_60;
  }
  v37 = __asan_report_load4(&span_ctx_ptr->_traceID);
  v39 = v38;
  v7 = v40;
  v41 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v9 + 72);
  if ( v41 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v41);
  v29 = v64;
  if ( v64 )
  {
    if ( *(_BYTE *)((v64 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v64);
LABEL_89:
      __asan_report_load8(v29);
      goto LABEL_90;
    }
    v54 = *(_QWORD *)v64;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v64 + 8LL) >> 3) + 0x7FFF8000) )
      v54 = __asan_report_load8(*(_QWORD *)v64 + 8LL);
    (*(void (__fastcall **)(double))(v54 + 8))(v37);
  }
  v55 = v39;
  if ( v7 != (TracingMgr *)1 )
    goto LABEL_136;
  v56 = (__int64 *)__cxa_begin_catch(v39);
  common::milog::MiLogStream::MiLogStream(
    &v68,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/tracing/tracing.cpp",
    "startSpan",
    392);
  if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v56);
  v57 = *v56;
  if ( *(_BYTE *)(((unsigned __int64)(*v56 + 16) >> 3) + 0x7FFF8000) )
    v57 = __asan_report_load8(*v56 + 16);
  v58 = (const char *)(*(__int64 (__fastcall **)(__int64 *, double))(v57 + 16))(v56, v37);
  common::milog::MiLogStream::operator()(&v68, "catch exception %s", v58);
  common::milog::MiLogStream::~MiLogStream(&v68);
  __cxa_end_catch();
  while ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    v55 = (void *)v6;
    v37 = __asan_report_store8(v6);
LABEL_136:
    __cxa_begin_catch(v55);
    common::milog::MiLogStream::MiLogStream(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "startSpan",
      392);
    common::milog::MiLogStream::operator()(&v68, "unknown exception", v37);
    common::milog::MiLogStream::~MiLogStream(&v68);
    __cxa_end_catch();
  }
LABEL_122:
  *(_QWORD *)v6 = 0LL;
  if ( *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v6 + 8);
  *(_QWORD *)(v6 + 8) = 0LL;
LABEL_7:
  if ( v69 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v9 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v6;
};

// Line 397: range 0000000014E7B806-0000000014E7BC45
void __fastcall TracingMgr::finishSpan(TracingMgr *const this, SpanPtr *span_ptr, int retcode, bool is_error)
{
  void *M_ptr; // r13
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r12
  uint64_t SpanID; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  void *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  void *v14; // rdi
  __int64 v15; // rdx
  __int64 *v16; // rbp
  __int64 v17; // rax
  const char *v18; // rax
  std::true_type v19; // [rsp+0h] [rbp-108h]
  void (__fastcall *v21)(void *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *); // [rsp+10h] [rbp-F8h]
  void (__fastcall *v22)(void *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *); // [rsp+10h] [rbp-F8h]
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-E8h] BYREF
  opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > data; // [rsp+40h] [rbp-C8h] BYREF
  char v25[152]; // [rsp+70h] [rbp-98h] BYREF

  M_ptr = this;
  v6 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(96LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 5 x:396 64 8 11 span_id:414";
  *(_QWORD *)(v6 + 16) = TracingMgr::finishSpan;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116352;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
    goto LABEL_10;
  }
  if ( !this->is_enabled_ )
    goto LABEL_28;
  if ( is_error )
  {
LABEL_10:
    if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(span_ptr);
    }
    else
    {
      M_ptr = span_ptr->_M_ptr;
      if ( !*(_BYTE *)(((unsigned __int64)span_ptr->_M_ptr >> 3) + 0x7FFF8000) )
      {
        v10 = *(_QWORD *)M_ptr + 32LL;
        if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          v21 = *(void (__fastcall **)(void *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *))(*(_QWORD *)M_ptr + 32LL);
          *(_BYTE *)(v6 + 48) = 1;
          opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<bool &,opentracing::v3::util::detail::value_traits<bool &,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
            &data,
            (bool *)(v6 + 48));
          v21(M_ptr, "error", 5LL, &data);
          opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
            data.type_index,
            &data.data);
          goto LABEL_5;
        }
LABEL_16:
        __asan_report_load8(v10);
        goto LABEL_17;
      }
    }
    v10 = (unsigned __int64)M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_16;
  }
LABEL_5:
  if ( !retcode )
  {
LABEL_6:
    SpanID = TracingMgr::getSpanID(span_ptr);
    goto LABEL_24;
  }
LABEL_17:
  if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(span_ptr);
    goto LABEL_22;
  }
  M_ptr = span_ptr->_M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)span_ptr->_M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    v11 = (unsigned __int64)M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_23;
  }
  v11 = *(_QWORD *)M_ptr + 32LL;
  if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
    v22 = *(void (__fastcall **)(void *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *))(*(_QWORD *)M_ptr + 32LL);
    *(_QWORD *)(v6 + 64) = retcode;
    opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<long,opentracing::v3::util::detail::value_traits<long,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
      &data,
      (__int64 *)(v6 + 64));
    v22(M_ptr, "retcode", 7LL, &data);
    opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      data.type_index,
      &data.data);
    goto LABEL_6;
  }
LABEL_23:
  SpanID = __asan_report_load8(v11);
LABEL_24:
  *(_QWORD *)(v6 + 64) = SpanID;
  _tls_init_3();
  std::_Hashtable<unsigned long,std::pair<unsigned long const,std::shared_ptr<SpanHolder>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpanHolder>>>,std::__detail::_Select1st,std::equal_to<unsigned long>,std::hash<unsigned long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
    (std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > *const)((char *)&TracingMgr::holder_map_._M_h + __readfsqword(0)),
    v19,
    (const std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = span_ptr;
    __asan_report_store8(span_ptr);
  }
  else
  {
    span_ptr->_M_ptr = 0LL;
    p_M_refcount = &span_ptr->_M_refcount;
    if ( !*(_BYTE *)(((unsigned __int64)&span_ptr->_M_refcount >> 3) + 0x7FFF8000) )
    {
      M_pi = span_ptr->_M_refcount._M_pi;
      span_ptr->_M_refcount._M_pi = 0LL;
      if ( M_pi )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
      goto LABEL_28;
    }
  }
  v14 = (void *)__asan_report_load8(p_M_refcount);
  if ( v15 == 1 )
  {
    v16 = (__int64 *)__cxa_begin_catch(v14);
    common::milog::MiLogStream::MiLogStream(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "finishSpan",
      418);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v16);
    v17 = *v16;
    if ( *(_BYTE *)(((unsigned __int64)(*v16 + 16) >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(*v16 + 16);
    v18 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(v17 + 16))(v16);
    common::milog::MiLogStream::operator()(&v23, "catch exception %s", v18);
    common::milog::MiLogStream::~MiLogStream(&v23);
    __cxa_end_catch();
  }
  else
  {
    __cxa_begin_catch(v14);
    common::milog::MiLogStream::MiLogStream(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "finishSpan",
      418);
    common::milog::MiLogStream::operator()(&v23, "unknown exception");
    common::milog::MiLogStream::~MiLogStream(&v23);
    __cxa_end_catch();
  }
LABEL_28:
  if ( v25 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 422: range 0000000014E7D480-0000000014E7DC01
void __fastcall TracingMgr::finishSpanToParent(TracingMgr *const this, SpanPtr *span_ptr, int retcode, bool is_error)
{
  void *p_data; // rbp
  std::__shared_ptr<jaegertracing::Span,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // r15
  unsigned __int64 v6; // r14
  _DWORD *v7; // r13
  uint64_t SpanID; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  const unsigned __int64 *v12; // rbp
  uint64_t SpanParentID; // rax
  char *i; // rax
  __int64 *v15; // rbx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  char *v21; // rbp
  char *v22; // rax
  void *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rdi
  __int64 v29; // rax
  const char *v30; // rax
  std::true_type v31; // [rsp+0h] [rbp-198h]
  TracingMgr *thisb; // [rsp+10h] [rbp-188h]
  TracingMgr *thisc; // [rsp+10h] [rbp-188h]
  void (__fastcall *v37)(std::__shared_ptr<jaegertracing::Span,(__gnu_cxx::_Lock_policy)2>::element_type *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *); // [rsp+28h] [rbp-170h]
  void (__fastcall *v38)(void *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *); // [rsp+28h] [rbp-170h]
  common::milog::MiLogStream v39; // [rsp+30h] [rbp-168h] BYREF
  opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > data; // [rsp+50h] [rbp-148h] BYREF
  char v41[280]; // [rsp+80h] [rbp-118h] BYREF

  v6 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(224LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 1 5 x:421 48 8 13 parent_id:440 80 8 4 __an 112 16 14 parent_ptr:443 144 48 10 id_set:439";
  *(_QWORD *)(v6 + 16) = TracingMgr::finishSpanToParent;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234881024;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862726] = -202116109;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
    goto LABEL_10;
  }
  if ( !this->is_enabled_ )
    goto LABEL_57;
  if ( is_error )
  {
LABEL_10:
    if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(span_ptr);
    }
    else
    {
      M_ptr = span_ptr->_M_ptr;
      if ( !*(_BYTE *)(((unsigned __int64)span_ptr->_M_ptr >> 3) + 0x7FFF8000) )
      {
        v10 = *(_QWORD *)M_ptr + 32LL;
        if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          v37 = *(void (__fastcall **)(std::__shared_ptr<jaegertracing::Span,(__gnu_cxx::_Lock_policy)2>::element_type *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *))(*(_QWORD *)M_ptr + 32LL);
          *(_BYTE *)(v6 + 32) = 1;
          p_data = &data;
          opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<bool &,opentracing::v3::util::detail::value_traits<bool &,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
            &data,
            (bool *)(v6 + 32));
          v37(M_ptr, "error", 5LL, &data);
          opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
            data.type_index,
            &data.data);
          goto LABEL_5;
        }
LABEL_16:
        __asan_report_load8(v10);
LABEL_17:
        if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(span_ptr);
        }
        else
        {
          p_data = span_ptr->_M_ptr;
          if ( !*(_BYTE *)(((unsigned __int64)span_ptr->_M_ptr >> 3) + 0x7FFF8000) )
          {
            v11 = *(_QWORD *)p_data + 32LL;
            if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            {
              v38 = *(void (__fastcall **)(void *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *))(*(_QWORD *)p_data + 32LL);
              *(_QWORD *)(v6 + 80) = retcode;
              opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<long,opentracing::v3::util::detail::value_traits<long,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
                &data,
                (__int64 *)(v6 + 80));
              v38(p_data, "retcode", 7LL, &data);
              opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
                data.type_index,
                &data.data);
              goto LABEL_6;
            }
LABEL_23:
            SpanID = __asan_report_load8(v11);
            goto LABEL_24;
          }
        }
        v11 = (unsigned __int64)p_data;
        __asan_report_load8(p_data);
        goto LABEL_23;
      }
    }
    v10 = (unsigned __int64)M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_16;
  }
LABEL_5:
  if ( retcode )
    goto LABEL_17;
LABEL_6:
  SpanID = TracingMgr::getSpanID(span_ptr);
LABEL_24:
  *(_QWORD *)(v6 + 48) = SpanID;
  *(_DWORD *)(v6 + 152) = 0;
  *(_QWORD *)(v6 + 160) = 0LL;
  *(_QWORD *)(v6 + 168) = v6 + 152;
  *(_QWORD *)(v6 + 176) = v6 + 152;
  *(_QWORD *)(v6 + 184) = 0LL;
  v12 = (const unsigned __int64 *)(v6 + 48);
  *(_QWORD *)(v6 + 80) = v6 + 144;
  while ( (const unsigned __int64 *)(v6 + 56) != v12 )
    std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_M_insert_unique_<unsigned long const&,std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_Alloc_node>(
      (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> > *const)(v6 + 144),
      (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::const_iterator)(v6 + 152),
      v12++,
      (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::_Alloc_node *)(v6 + 80));
  SpanParentID = TracingMgr::getSpanParentID(span_ptr);
  *(_QWORD *)(v6 + 48) = SpanParentID;
  if ( !SpanParentID )
    goto LABEL_28;
  TracingMgr::getSpanByID(this, SpanParentID);
  v16 = *(_QWORD *)(v6 + 112);
  if ( !v16 )
    goto LABEL_34;
  if ( is_error )
  {
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    {
      v17 = *(_QWORD *)(v6 + 112);
      __asan_report_load8(v17);
    }
    else
    {
      v17 = *(_QWORD *)v16 + 32LL;
      if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      {
        thisb = *(TracingMgr **)(*(_QWORD *)v16 + 32LL);
        *(_BYTE *)(v6 + 32) = 1;
        opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<bool &,opentracing::v3::util::detail::value_traits<bool &,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
          &data,
          (bool *)(v6 + 32));
        ((void (__fastcall *)(unsigned __int64, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *))thisb)(
          v16,
          "error",
          5LL,
          &data);
        opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
          data.type_index,
          &data.data);
        goto LABEL_33;
      }
    }
    __asan_report_load8(v17);
    goto LABEL_40;
  }
LABEL_33:
  if ( !retcode )
  {
LABEL_34:
    std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_M_insert_unique<unsigned long const&>(
      (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> > *const)(v6 + 144),
      (const unsigned __int64 *)(v6 + 48));
    goto LABEL_45;
  }
LABEL_40:
  v18 = *(_QWORD *)(v6 + 112);
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
    v19 = *(_QWORD *)(v6 + 112);
    __asan_report_load8(v19);
  }
  else
  {
    v19 = *(_QWORD *)v18 + 32LL;
    if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    {
      thisc = *(TracingMgr **)(*(_QWORD *)v18 + 32LL);
      *(_QWORD *)(v6 + 80) = retcode;
      opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<long,opentracing::v3::util::detail::value_traits<long,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
        &data,
        (__int64 *)(v6 + 80));
      ((void (__fastcall *)(unsigned __int64, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *))thisc)(
        v18,
        "retcode",
        7LL,
        &data);
      opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        data.type_index,
        &data.data);
      goto LABEL_34;
    }
  }
  __asan_report_load8(v19);
LABEL_45:
  v20 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 120);
  if ( v20 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
LABEL_28:
  for ( i = *(char **)(v6 + 168); ; i = (char *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v21) )
  {
    v21 = i;
    if ( i == (char *)(v6 + 152) )
      break;
    v22 = i + 32;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v22);
    }
    else
    {
      *(_QWORD *)(v6 + 80) = *((_QWORD *)v21 + 4);
      _tls_init_3();
    }
    std::_Hashtable<unsigned long,std::pair<unsigned long const,std::shared_ptr<SpanHolder>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpanHolder>>>,std::__detail::_Select1st,std::equal_to<unsigned long>,std::hash<unsigned long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
      (std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > *const)((char *)&TracingMgr::holder_map_._M_h + __readfsqword(0)),
      v31,
      (const std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)(v6 + 80));
  }
  if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = span_ptr;
    __asan_report_store8(span_ptr);
  }
  else
  {
    span_ptr->_M_ptr = 0LL;
    p_M_refcount = &span_ptr->_M_refcount;
    if ( !*(_BYTE *)(((unsigned __int64)&span_ptr->_M_refcount >> 3) + 0x7FFF8000) )
    {
      M_pi = span_ptr->_M_refcount._M_pi;
      span_ptr->_M_refcount._M_pi = 0LL;
      if ( M_pi )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
      std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_M_erase(
        (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> > *const)(v6 + 144),
        *(std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::_Link_type *)(v6 + 160));
      goto LABEL_57;
    }
  }
  v25 = (void *)__asan_report_load8(p_M_refcount);
  v27 = v26;
  v28 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 120);
  if ( v28 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v28);
  std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_M_erase(
    (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> > *const)(v6 + 144),
    *(std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::_Link_type *)(v6 + 160));
  if ( v27 == 1 )
  {
    v15 = (__int64 *)__cxa_begin_catch(v25);
    common::milog::MiLogStream::MiLogStream(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "finishSpanToParent",
      465);
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v15);
    v29 = *v15;
    if ( *(_BYTE *)(((unsigned __int64)(*v15 + 16) >> 3) + 0x7FFF8000) )
      v29 = __asan_report_load8(*v15 + 16);
    v30 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(v29 + 16))(v15);
    common::milog::MiLogStream::operator()(&v39, "catch exception %s", v30);
    common::milog::MiLogStream::~MiLogStream(&v39);
    __cxa_end_catch();
  }
  else
  {
    __cxa_begin_catch(v25);
    common::milog::MiLogStream::MiLogStream(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "finishSpanToParent",
      465);
    common::milog::MiLogStream::operator()(&v39, "unknown exception");
    common::milog::MiLogStream::~MiLogStream(&v39);
    __cxa_end_catch();
  }
LABEL_57:
  if ( v41 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 469: range 0000000014E7DC06-0000000014E7E6F6
void __fastcall TracingMgr::finishSpanToRoot(TracingMgr *const this, SpanPtr *span_ptr, int retcode, bool is_error)
{
  std::__shared_ptr<jaegertracing::Span,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // r15
  void *p_data; // r14
  _DWORD *v7; // r13
  uint64_t SpanID; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  const unsigned __int64 *v12; // r14
  __int64 *v13; // rbx
  std::pair<std::_Rb_tree_iterator<long unsigned int>,bool> inserted; // rax
  uint64_t SpanParentID; // rax
  const std::_Rb_tree_node_base *i; // r15
  std::forward_iterator_tag v17; // cl
  common::milog::MilogStringStream *ostr; // r14
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v21; // r12
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rdi
  common::milog::MilogStringStream *v25; // r14
  common::milog::MilogStringStream *v26; // rdi
  char *v27; // rdi
  size_t M_string_length; // r12
  void *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r12
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v32; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v33; // rdi
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v38; // rdi
  uint64_t v39; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v40; // rdi
  char *j; // rax
  char *v42; // r12
  char *v43; // rax
  void *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  __int64 v46; // rdx
  __int64 v47; // rax
  const char *v48; // rax
  TracingMgr *v49; // [rsp+0h] [rbp-218h]
  void (__fastcall *v51)(std::__shared_ptr<jaegertracing::Span,(__gnu_cxx::_Lock_policy)2>::element_type *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *); // [rsp+18h] [rbp-200h]
  void (__fastcall *v52)(void *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *); // [rsp+18h] [rbp-200h]
  int v53; // [rsp+18h] [rbp-200h]
  void (__fastcall *v54)(unsigned __int64, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *); // [rsp+18h] [rbp-200h]
  void (__fastcall *v55)(unsigned __int64, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *); // [rsp+18h] [rbp-200h]
  unsigned __int64 v56; // [rsp+20h] [rbp-1F8h]
  common::milog::MiLogStream v57; // [rsp+30h] [rbp-1E8h] BYREF
  common::milog::MiLogStream v58; // [rsp+50h] [rbp-1C8h] BYREF
  std::string v59; // [rsp+70h] [rbp-1A8h] BYREF
  common::milog::MiLogStream v60; // [rsp+90h] [rbp-188h] BYREF
  opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > data; // [rsp+B0h] [rbp-168h] BYREF
  char v62[312]; // [rsp+E0h] [rbp-138h] BYREF

  v49 = this;
  p_data = (void *)is_error;
  v56 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(256LL);
    if ( v9 )
      v56 = v9;
  }
  *(_QWORD *)v56 = 1102416563LL;
  *(_QWORD *)(v56 + 8) = "6 32 1 5 x:468 48 8 13 parent_id:487 80 8 4 __an 112 16 11 tmp_ptr:506 144 16 11 tmp_ptr:516 17"
                         "6 48 10 id_set:486";
  *(_QWORD *)(v56 + 16) = TracingMgr::finishSpanToRoot;
  v7 = (_DWORD *)(v56 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234881024;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862725] = 62194;
  v7[536862727] = -202116109;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
    goto LABEL_10;
  }
  if ( !this->is_enabled_ )
    goto LABEL_103;
  if ( (_BYTE)p_data )
  {
LABEL_10:
    if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(span_ptr);
    }
    else
    {
      M_ptr = span_ptr->_M_ptr;
      if ( !*(_BYTE *)(((unsigned __int64)span_ptr->_M_ptr >> 3) + 0x7FFF8000) )
      {
        v10 = *(_QWORD *)M_ptr + 32LL;
        if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          v51 = *(void (__fastcall **)(std::__shared_ptr<jaegertracing::Span,(__gnu_cxx::_Lock_policy)2>::element_type *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *))(*(_QWORD *)M_ptr + 32LL);
          *(_BYTE *)(v56 + 32) = 1;
          p_data = &data;
          opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<bool &,opentracing::v3::util::detail::value_traits<bool &,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
            &data,
            (bool *)(v56 + 32));
          v51(M_ptr, "error", 5LL, &data);
          opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
            data.type_index,
            &data.data);
          goto LABEL_5;
        }
LABEL_16:
        __asan_report_load8(v10);
        goto LABEL_17;
      }
    }
    v10 = (unsigned __int64)M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_16;
  }
LABEL_5:
  if ( !retcode )
  {
LABEL_6:
    SpanID = TracingMgr::getSpanID(span_ptr);
    goto LABEL_24;
  }
LABEL_17:
  if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(span_ptr);
    goto LABEL_22;
  }
  p_data = span_ptr->_M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)span_ptr->_M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    v11 = (unsigned __int64)p_data;
    __asan_report_load8(p_data);
    goto LABEL_23;
  }
  v11 = *(_QWORD *)p_data + 32LL;
  if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
    v52 = *(void (__fastcall **)(void *, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *))(*(_QWORD *)p_data + 32LL);
    *(_QWORD *)(v56 + 80) = retcode;
    opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<long,opentracing::v3::util::detail::value_traits<long,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
      &data,
      (__int64 *)(v56 + 80));
    v52(p_data, "retcode", 7LL, &data);
    opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      data.type_index,
      &data.data);
    goto LABEL_6;
  }
LABEL_23:
  SpanID = __asan_report_load8(v11);
LABEL_24:
  *(_QWORD *)(v56 + 48) = SpanID;
  *(_DWORD *)(v56 + 184) = 0;
  *(_QWORD *)(v56 + 192) = 0LL;
  *(_QWORD *)(v56 + 200) = v56 + 184;
  *(_QWORD *)(v56 + 208) = v56 + 184;
  *(_QWORD *)(v56 + 216) = 0LL;
  v12 = (const unsigned __int64 *)(v56 + 48);
  *(_QWORD *)(v56 + 80) = v56 + 176;
  while ( (const unsigned __int64 *)(v56 + 56) != v12 )
    std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_M_insert_unique_<unsigned long const&,std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_Alloc_node>(
      (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> > *const)(v56 + 176),
      (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::const_iterator)(v56 + 184),
      v12++,
      (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::_Alloc_node *)(v56 + 80));
  *(_QWORD *)(v56 + 48) = TracingMgr::getSpanParentID(span_ptr);
  while ( 1 )
  {
    v39 = *(_QWORD *)(v56 + 48);
    if ( !v39 )
      goto LABEL_92;
    TracingMgr::getSpanByID(v49, v39);
    if ( !*(_QWORD *)(v56 + 112) )
      break;
    inserted = std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_M_insert_unique<unsigned long const&>(
                 (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> > *const)(v56 + 176),
                 (const unsigned __int64 *)(v56 + 48));
    if ( !inserted.second )
    {
      common::milog::MiLogStream::MiLogStream(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/tracing/tracing.cpp",
        "finishSpanToRoot",
        513);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        v57.ostr_,
        "span parent-child relation has a loop. dump:");
      common::milog::MiLogStream::~MiLogStream(&v57);
      for ( i = *(const std::_Rb_tree_node_base **)(v56 + 200);
            ;
            i = (const std::_Rb_tree_node_base *)std::_Rb_tree_increment(i) )
      {
        if ( i == (const std::_Rb_tree_node_base *)(v56 + 184) )
          goto LABEL_90;
        TracingMgr::getSpanByID(v49, *(_QWORD *)(v56 + 48));
        if ( *(_QWORD *)(v56 + 144) )
        {
          common::milog::MiLogStream::MiLogStream(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/tracing/tracing.cpp",
            "finishSpanToRoot",
            522);
        }
        else
        {
          common::milog::MiLogStream::MiLogStream(
            &v58,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/tracing/tracing.cpp",
            "finishSpanToRoot",
            519);
          ostr = v58.ostr_;
          p_cur = v58.ostr_;
          if ( *(_BYTE *)(((unsigned __int64)v58.ostr_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v58.ostr_);
          }
          else
          {
            p_cur = (common::milog::MilogStringStream *)&v58.ostr_->buffer_.cur_;
            if ( !*(_BYTE *)(((unsigned __int64)&v58.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
            {
              cur = v58.ostr_->buffer_.cur_;
              v21 = (size_t)&v58.ostr_->buffer_.data_[-(int)cur + 0x4000];
              if ( v21 > 0x20 )
                v21 = 33LL;
              memcpy(cur, "not known. this should not happen", v21);
              ostr->buffer_.cur_ += v21;
              common::milog::MiLogStream::~MiLogStream(&v58);
              v22 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v56 + 152);
              if ( v22 )
                goto LABEL_63;
              continue;
            }
          }
          __asan_report_load8(p_cur);
        }
        v23 = *(_QWORD *)(v56 + 144);
        if ( &_pthread_key_create )
        {
          v53 = pthread_mutex_lock((pthread_mutex_t *)(v23 + 328));
          if ( v53 )
          {
            __asan_handle_no_return(v23 + 328);
            std::__throw_system_error(v53);
          }
        }
        v59._M_dataplus._M_p = v59._anon_0._M_local_buf;
        v24 = v23 + 200;
        if ( *(_BYTE *)(((unsigned __int64)(v23 + 200) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v24);
        }
        else
        {
          v24 = v23 + 208;
          if ( !*(_BYTE *)(((unsigned __int64)(v23 + 208) >> 3) + 0x7FFF8000) )
          {
            std::string::_M_construct<char *>(
              &v59,
              *(char **)(v23 + 200),
              (char *)(*(_QWORD *)(v23 + 208) + *(_QWORD *)(v23 + 200)),
              v17);
            goto LABEL_54;
          }
        }
        __asan_report_load8(v24);
LABEL_54:
        if ( &_pthread_key_create )
          pthread_mutex_unlock((pthread_mutex_t *)(v23 + 328));
        v25 = v60.ostr_;
        v26 = v60.ostr_;
        if ( *(_BYTE *)(((unsigned __int64)v60.ostr_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v60.ostr_);
LABEL_68:
          v29 = (void *)__asan_report_load8(v26);
          v31 = v30;
          if ( &_pthread_key_create )
            pthread_mutex_unlock((pthread_mutex_t *)v25);
          common::milog::MiLogStream::~MiLogStream(&v60);
          goto LABEL_71;
        }
        v26 = (common::milog::MilogStringStream *)&v60.ostr_->buffer_.cur_;
        if ( *(_BYTE *)(((unsigned __int64)&v60.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          goto LABEL_68;
        v27 = v60.ostr_->buffer_.cur_;
        M_string_length = (size_t)&v60.ostr_->buffer_.data_[-(int)v27 + 0x4000];
        if ( v59._M_string_length <= M_string_length )
          M_string_length = v59._M_string_length;
        memcpy(v27, v59._M_dataplus._M_p, M_string_length);
        v25->buffer_.cur_ += M_string_length;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v59._M_dataplus._M_p != &v59._anon_0 )
          operator delete(v59._M_dataplus._M_p);
        common::milog::MiLogStream::~MiLogStream(&v60);
        v22 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v56 + 152);
        if ( v22 )
        {
LABEL_63:
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
          continue;
        }
      }
    }
    if ( !is_error )
      goto LABEL_33;
    v34 = *(_QWORD *)(v56 + 112);
    v35 = v34;
    if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v34);
    }
    else
    {
      v35 = *(_QWORD *)v34 + 32LL;
      if ( !*(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
      {
        v54 = *(void (__fastcall **)(unsigned __int64, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *))(*(_QWORD *)v34 + 32LL);
        *(_BYTE *)(v56 + 32) = 1;
        opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<bool &,opentracing::v3::util::detail::value_traits<bool &,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
          &data,
          (bool *)(v56 + 32));
        v54(v34, "error", 5LL, &data);
        opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
          data.type_index,
          &data.data);
LABEL_33:
        if ( !retcode )
          goto LABEL_34;
        goto LABEL_81;
      }
    }
    __asan_report_load8(v35);
LABEL_81:
    v36 = *(_QWORD *)(v56 + 112);
    v37 = v36;
    if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v36);
LABEL_85:
      SpanParentID = __asan_report_load8(v37);
      goto LABEL_86;
    }
    v37 = *(_QWORD *)v36 + 32LL;
    if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
      goto LABEL_85;
    v55 = *(void (__fastcall **)(unsigned __int64, const char *, __int64, opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *))(*(_QWORD *)v36 + 32LL);
    *(_QWORD *)(v56 + 80) = retcode;
    opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant<long,opentracing::v3::util::detail::value_traits<long,bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>,void>(
      &data,
      (__int64 *)(v56 + 80));
    v55(v36, "retcode", 7LL, &data);
    opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      data.type_index,
      &data.data);
LABEL_34:
    SpanParentID = TracingMgr::getSpanParentID((const SpanPtr *)(v56 + 112));
LABEL_86:
    *(_QWORD *)(v56 + 48) = SpanParentID;
    v38 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v56 + 120);
    if ( v38 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v38);
  }
LABEL_90:
  v40 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v56 + 120);
  if ( v40 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v40);
LABEL_92:
  for ( j = *(char **)(v56 + 200); ; j = (char *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v42) )
  {
    v42 = j;
    if ( j == (char *)(v56 + 184) )
      break;
    v43 = j + 32;
    if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v43);
    }
    else
    {
      *(_QWORD *)(v56 + 80) = *((_QWORD *)v42 + 4);
      _tls_init_3();
    }
    std::_Hashtable<unsigned long,std::pair<unsigned long const,std::shared_ptr<SpanHolder>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpanHolder>>>,std::__detail::_Select1st,std::equal_to<unsigned long>,std::hash<unsigned long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
      (std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > *const)((char *)&TracingMgr::holder_map_._M_h + __readfsqword(0)),
      (std::true_type)v49,
      (const std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)(v56 + 80));
  }
  if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = span_ptr;
    __asan_report_store8(span_ptr);
  }
  else
  {
    span_ptr->_M_ptr = 0LL;
    p_M_refcount = &span_ptr->_M_refcount;
    if ( !*(_BYTE *)(((unsigned __int64)&span_ptr->_M_refcount >> 3) + 0x7FFF8000) )
    {
      M_pi = span_ptr->_M_refcount._M_pi;
      span_ptr->_M_refcount._M_pi = 0LL;
      if ( M_pi )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
      std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_M_erase(
        (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> > *const)(v56 + 176),
        *(std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::_Link_type *)(v56 + 192));
      goto LABEL_103;
    }
  }
  v29 = (void *)__asan_report_load8(p_M_refcount);
  v31 = v46;
LABEL_71:
  v32 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v56 + 152);
  if ( v32 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v32);
  v33 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v56 + 120);
  if ( v33 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v33);
  std::_Rb_tree<unsigned long,unsigned long,std::_Identity<unsigned long>,std::less<unsigned long>,std::allocator<unsigned long>>::_M_erase(
    (std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> > *const)(v56 + 176),
    *(std::_Rb_tree<long unsigned int,long unsigned int,std::_Identity<long unsigned int>,std::less<long unsigned int>,std::allocator<long unsigned int> >::_Link_type *)(v56 + 192));
  if ( v31 == 1 )
  {
    v13 = (__int64 *)__cxa_begin_catch(v29);
    common::milog::MiLogStream::MiLogStream(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "finishSpanToRoot",
      546);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v47 = *v13;
    if ( *(_BYTE *)(((unsigned __int64)(*v13 + 16) >> 3) + 0x7FFF8000) )
      v47 = __asan_report_load8(*v13 + 16);
    v48 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(v47 + 16))(v13);
    common::milog::MiLogStream::operator()(&v60, "catch exception %s", v48);
    common::milog::MiLogStream::~MiLogStream(&v60);
    __cxa_end_catch();
  }
  else
  {
    __cxa_begin_catch(v29);
    common::milog::MiLogStream::MiLogStream(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/tracing/tracing.cpp",
      "finishSpanToRoot",
      546);
    common::milog::MiLogStream::operator()(&v60, "unknown exception");
    common::milog::MiLogStream::~MiLogStream(&v60);
    __cxa_end_catch();
  }
LABEL_103:
  if ( v62 == (char *)v56 )
  {
    *(_QWORD *)((v56 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v56 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v56 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v56 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v56 = 1172321806LL;
    *(_QWORD *)((v56 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v56 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v56 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v56 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 550: range 0000000014E7572A-0000000014E75C79
void __fastcall TracingMgr::inject(TracingMgr *const this, const jaegertracing::SpanContext *sc, std::string *out_str)
{
  const jaegertracing::SpanContext *v4; // r14
  unsigned __int64 v6; // rbp
  _DWORD *v7; // rbx
  __int64 v8; // rax
  std::shared_ptr<opentracing::v3::Tracer> *p_tracer; // rdi
  const jaegertracing::SpanContext *v10; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v11; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v14; // rax
  char v15; // al
  size_t v16; // rdi
  std::string::size_type *p_M_string_length; // rax
  std::string::size_type *v18; // rdi
  char v19; // al
  char v20; // al
  char v21; // al
  void *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 *v25; // r12
  __int64 v26; // rax
  const char *v27; // rax
  std::string::size_type M_allocated_capacity; // [rsp+8h] [rbp-2A0h]
  char v29[32]; // [rsp+10h] [rbp-298h] BYREF
  void *v30; // [rsp+30h] [rbp-278h] BYREF
  size_t n; // [rsp+38h] [rbp-270h]
  __int64 v32[2]; // [rsp+40h] [rbp-268h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-258h] BYREF
  char v34[568]; // [rsp+70h] [rbp-238h] BYREF

  v4 = sc;
  v6 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(512LL);
    if ( v8 )
      v6 = v8;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 48 392 6 ss:558";
  *(_QWORD *)(v6 + 16) = TracingMgr::inject;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862733] = -218103808;
  v7[536862734] = -202116109;
  v7[536862735] = -202116109;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
  }
  else
  {
    if ( !this->is_enabled_ || !sc )
      goto LABEL_30;
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v6 + 48);
  }
  p_tracer = &this->tracer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->tracer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_tracer);
    goto LABEL_14;
  }
  sc = (const jaegertracing::SpanContext *)this->tracer_._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)sc >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    v10 = sc;
    __asan_report_load8(sc);
    goto LABEL_15;
  }
  v10 = (const jaegertracing::SpanContext *)(sc->_vptr_SpanContext + 3);
  if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(char *, const jaegertracing::SpanContext *, const jaegertracing::SpanContext *, unsigned __int64))sc->_vptr_SpanContext
     + 3))(
      v29,
      sc,
      v4,
      v6 + 64);
    goto LABEL_16;
  }
LABEL_15:
  __asan_report_load8(v10);
LABEL_16:
  v11 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(v6 + 72);
  std::stringbuf::str(&v30, v6 + 72);
  if ( *(_BYTE *)(((unsigned __int64)out_str >> 3) + 0x7FFF8000) )
  {
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)out_str;
    __asan_report_load8(out_str);
LABEL_33:
    if ( !n )
      goto LABEL_36;
    if ( n != 1 )
    {
      memcpy(M_p, v11, n);
      goto LABEL_36;
    }
    v20 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v20 <= ((unsigned __int8)v11 & 7) && v20 )
    {
      M_p = v11;
      __asan_report_load1(v11);
    }
    else
    {
      v21 = *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000);
      if ( v21 > ((unsigned __int8)M_p & 7) || !v21 )
      {
        M_p->_M_local_buf[0] = v11->_M_local_buf[0];
LABEL_36:
        v16 = n;
        p_M_string_length = &out_str->_M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&out_str->_M_string_length >> 3) + 0x7FFF8000) )
        {
          out_str->_M_string_length = n;
          v18 = (std::string::size_type *)&out_str->_M_dataplus._M_p[v16];
          v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
          if ( v19 > ((unsigned __int8)v18 & 7) || !v19 )
          {
            *(_BYTE *)v18 = 0;
            goto LABEL_25;
          }
          goto LABEL_48;
        }
LABEL_47:
        v18 = p_M_string_length;
        __asan_report_store8(p_M_string_length);
LABEL_48:
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v18);
LABEL_49:
        __asan_report_load8(p_anon_0);
        goto LABEL_50;
      }
    }
    p_M_string_length = (std::string::size_type *)__asan_report_store1(M_p);
    goto LABEL_47;
  }
  M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)out_str->_M_dataplus._M_p;
  v11 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v30;
  if ( v30 == v32 )
    goto LABEL_33;
  if ( M_p != &out_str->_anon_0 )
  {
    p_anon_0 = &out_str->_anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&out_str->_anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = out_str->_anon_0._M_allocated_capacity;
      goto LABEL_21;
    }
    goto LABEL_49;
  }
LABEL_50:
  M_p = 0LL;
LABEL_21:
  out_str->_M_dataplus._M_p = (std::string::pointer)v11;
  if ( *(_BYTE *)(((unsigned __int64)&out_str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&out_str->_M_string_length);
    goto LABEL_52;
  }
  out_str->_M_string_length = n;
  v14 = &out_str->_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&out_str->_anon_0 >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8(v14);
    goto LABEL_53;
  }
  out_str->_anon_0._M_allocated_capacity = v32[0];
  if ( !M_p )
  {
LABEL_53:
    v30 = v32;
    goto LABEL_25;
  }
  v30 = M_p;
  v32[0] = M_allocated_capacity;
LABEL_25:
  n = 0LL;
  v15 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
  if ( v15 <= ((unsigned __int8)v30 & 7) && v15 )
  {
    v22 = (void *)__asan_report_store1(v30);
    v24 = v23;
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v6 + 48);
    if ( v24 == 1 )
    {
      v25 = (__int64 *)__cxa_begin_catch(v22);
      common::milog::MiLogStream::MiLogStream(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/tracing/tracing.cpp",
        "inject",
        562);
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v25);
      v26 = *v25;
      if ( *(_BYTE *)(((unsigned __int64)(*v25 + 16) >> 3) + 0x7FFF8000) )
        v26 = __asan_report_load8(*v25 + 16);
      v27 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(v26 + 16))(v25);
      common::milog::MiLogStream::operator()(&v33, "catch exception %s", v27);
      common::milog::MiLogStream::~MiLogStream(&v33);
      __cxa_end_catch();
    }
    else
    {
      __cxa_begin_catch(v22);
      common::milog::MiLogStream::MiLogStream(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/tracing/tracing.cpp",
        "inject",
        562);
      common::milog::MiLogStream::operator()(&v33, "unknown exception");
      common::milog::MiLogStream::~MiLogStream(&v33);
      __cxa_end_catch();
    }
  }
  else
  {
    *(_BYTE *)v30 = 0;
    if ( v30 != v32 )
      operator delete(v30);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v6 + 48);
  }
LABEL_30:
  if ( v34 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 566: range 0000000014E75290-0000000014E75725
std::unique_ptr<jaegertracing::SpanContext> __fastcall TracingMgr::extract(
        unsigned __int64 a1,
        TracingMgr *const this,
        std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *in_str)
{
  unsigned __int64 v5; // rbp
  _DWORD *v6; // rbx
  __int64 v8; // rax
  unsigned __int64 M_ptr; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  void *v13; // rdi
  char v15[632]; // [rsp+30h] [rbp-278h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_4(576LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 24 7 ctx:575 112 392 6 ss:574";
  *(_QWORD *)(v5 + 16) = TracingMgr::extract;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218959360;
  v6[536862723] = 62194;
  v6[536862735] = -218103808;
  v6[536862736] = -202116109;
  v6[536862737] = -202116109;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
  }
  else
  {
    if ( this->is_enabled_ )
      goto LABEL_13;
    if ( !*(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)a1 = 0LL;
      goto LABEL_6;
    }
  }
  __asan_report_store8(a1);
LABEL_13:
  M_ptr = (unsigned __int64)in_str;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v5 + 112, in_str, 24LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->tracer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->tracer_);
    goto LABEL_18;
  }
  M_ptr = (unsigned __int64)this->tracer_._M_ptr;
  if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    v10 = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_19;
  }
  v10 = *(_QWORD *)M_ptr + 56LL;
  if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)M_ptr + 56LL))(
      v5 + 48,
      M_ptr,
      v5 + 112);
    goto LABEL_20;
  }
LABEL_19:
  __asan_report_load8(v10);
LABEL_20:
  if ( !*(_BYTE *)(v5 + 48) )
  {
    if ( !*(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)a1 = 0LL;
      goto LABEL_23;
    }
    __asan_report_store8(a1);
  }
  v13 = *(void **)(v5 + 56);
  *(_QWORD *)(v5 + 56) = 0LL;
  if ( v13 )
    v13 = __dynamic_cast(
            v13,
            (const struct __class_type_info *)&`typeinfo for'opentracing::v3::SpanContext,
            (const struct __class_type_info *)&`typeinfo for'jaegertracing::SpanContext,
            0LL);
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
  {
    v11 = a1;
    __asan_report_store8(a1);
LABEL_35:
    __asan_report_load8(v11);
    goto LABEL_36;
  }
  *(_QWORD *)a1 = v13;
LABEL_23:
  if ( !*(_BYTE *)(v5 + 48) )
    goto LABEL_28;
  v11 = *(_QWORD *)(v5 + 56);
  if ( !v11 )
    goto LABEL_28;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    goto LABEL_35;
  v12 = *(_QWORD *)v11 + 8LL;
  if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v11 + 8LL))();
LABEL_28:
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v5 + 112);
    goto LABEL_6;
  }
LABEL_36:
  __asan_report_load8(v12);
  *(_QWORD *)a1 = 0LL;
LABEL_6:
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (std::unique_ptr<jaegertracing::SpanContext>)a1;
};

// Line 589: range 0000000014E7D150-0000000014E7D47A
unsigned __int64 __fastcall TracingMgr::getSpanByID(unsigned __int64 a1, TracingMgr *const this, uint64_t span_id)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v8; // rax
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,false>::__node_type *M_cur; // r12
  std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rax
  volatile signed __int32 *v14; // rax
  __int64 v15; // rax
  volatile signed __int32 *v16; // rdi
  char v17; // dl
  char v18; // cl
  char v19[120]; // [rsp+10h] [rbp-78h] BYREF

  v3 = a1;
  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 11 span_id:588";
  *(_QWORD *)(v5 + 16) = TracingMgr::getSpanByID;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v5 + 32) = span_id;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
  }
  else
  {
    if ( this->is_enabled_ )
      goto LABEL_15;
    if ( !*(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)a1 = 0LL;
      a1 += 8LL;
      if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v3 + 8) = 0LL;
        goto LABEL_7;
      }
      goto LABEL_14;
    }
  }
  __asan_report_store8(a1);
LABEL_14:
  __asan_report_store8(a1);
LABEL_15:
  _tls_init_3();
  M_cur = std::_Hashtable<unsigned long,std::pair<unsigned long const,std::shared_ptr<SpanHolder>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpanHolder>>>,std::__detail::_Select1st,std::equal_to<unsigned long>,std::hash<unsigned long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(
            (std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > *const)((char *)&TracingMgr::holder_map_._M_h + __readfsqword(0)),
            (const std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SpanHolder> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SpanHolder> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)(v5 + 32))._M_cur;
  _tls_init_3();
  if ( !M_cur )
  {
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      v10 = (std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *)v3;
      __asan_report_store8(v3);
    }
    else
    {
      *(_QWORD *)v3 = 0LL;
      v10 = (std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *)(v3 + 8);
      if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v3 + 8) = 0LL;
        goto LABEL_7;
      }
    }
    __asan_report_store8(v10);
    goto LABEL_32;
  }
  v10 = &M_cur->_M_storage._M_storage.1 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(&M_cur->_M_storage._M_storage.1 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(v10);
    goto LABEL_33;
  }
  v11 = *((_QWORD *)&M_cur->_M_storage._M_storage.1 + 1);
  if ( !v11 )
  {
LABEL_33:
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      v12 = (_QWORD *)v3;
      __asan_report_store8(v3);
    }
    else
    {
      *(_QWORD *)v3 = 0LL;
      v12 = (_QWORD *)(v3 + 8);
      if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(v3 + 8) = 0LL;
        goto LABEL_7;
      }
    }
    __asan_report_store8(v12);
    goto LABEL_38;
  }
  v12 = (_QWORD *)(v11 + 24);
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(v12);
    goto LABEL_39;
  }
  v13 = *(_QWORD *)(v11 + 24);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8(v3);
    goto LABEL_40;
  }
  *(_QWORD *)v3 = v13;
  v14 = (volatile signed __int32 *)(v12 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    v16 = v14;
    __asan_report_load8(v14);
    goto LABEL_41;
  }
  v15 = v12[1];
  v16 = (volatile signed __int32 *)(v3 + 8);
  if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8(v16);
    goto LABEL_42;
  }
  *(_QWORD *)(v3 + 8) = v15;
  if ( !v15 )
    goto LABEL_7;
  v16 = (volatile signed __int32 *)(v15 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_43;
  v17 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v16 & 7) + 3) < v17 || !v17 )
  {
    _InterlockedAdd(v16, 1u);
    goto LABEL_7;
  }
LABEL_42:
  v15 = __asan_report_store4(v16);
LABEL_43:
  v18 = *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v15 + 8) & 7) + 3) >= v18 && v18 )
  {
    __asan_report_load4(v15 + 8);
    goto LABEL_47;
  }
  ++*(_DWORD *)(v15 + 8);
LABEL_7:
  if ( v19 != (char *)v5 )
  {
LABEL_47:
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return v3;
  }
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  return v3;
};

// Line 632: range 0000000014E75202-0000000014E7528D
uint64_t __fastcall TracingMgr::getSpanParentID(const SpanPtr *span_ptr)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdi

  if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(span_ptr);
LABEL_9:
    __asan_report_load8(span_ptr);
    goto LABEL_10;
  }
  span_ptr = (const SpanPtr *)span_ptr->_M_ptr;
  if ( !span_ptr )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)span_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_9;
  v1 = (unsigned __int64)span_ptr->_M_ptr + 80;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    v3 = v1;
    __asan_report_load8(v1);
LABEL_11:
    __asan_report_load8(v3);
    return 0LL;
  }
  v2 = (*((__int64 (**)(void))span_ptr->_M_ptr + 10))();
  if ( v2 )
  {
    v3 = v2 + 32;
    if ( !*(_BYTE *)(((unsigned __int64)(v2 + 32) >> 3) + 0x7FFF8000) )
      return *(_QWORD *)(v2 + 32);
    goto LABEL_11;
  }
  return 0LL;
};

// Line 650: range 0000000014E7E6FB-0000000014E7E712
void __cdecl GLOBAL__sub_I_tracing_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
