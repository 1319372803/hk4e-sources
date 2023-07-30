// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/executor_op.hpp

// Line 32: range 000000000C6BE5E0-000000000C6BE60A
void __cdecl boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::~executor_op(
        boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *const this)
{
  boost::asio::executor::function::~function(&this->handler_);
  boost::asio::detail::scheduler_operation::~scheduler_operation(this);
};

// Line 35: range 000000000C6B8434-000000000C6B8517
boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *__cdecl boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::allocate(
        const std::allocator<void> *a)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *result; // rax
  boost::asio::detail::recycling_allocator<void,boost::asio::detail::thread_info_base::default_tag> v5; // [rsp+1Fh] [rbp-61h] BYREF
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 5 a1:35";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::allocate;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  boost::asio::detail::get_recycling_allocator<std::allocator<void>,boost::asio::detail::thread_info_base::default_tag>::get(a);
  boost::asio::detail::recycling_allocator<boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>,boost::asio::detail::thread_info_base::default_tag>::recycling_allocator<void>(
    (boost::asio::detail::recycling_allocator<boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>,boost::asio::detail::thread_info_base::default_tag> *const)(v1 + 32),
    &v5);
  result = boost::asio::detail::recycling_allocator<boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>,boost::asio::detail::thread_info_base::default_tag>::allocate(
             (boost::asio::detail::recycling_allocator<boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>,boost::asio::detail::thread_info_base::default_tag> *const)(v1 + 32),
             1uLL);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 35: range 000000000C6BE60C-000000000C6BE81E
void __cdecl boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset(
        boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::recycling_allocator<void,boost::asio::detail::thread_info_base::default_tag> v4; // [rsp+1Fh] [rbp-61h] BYREF
  char v5[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 5 a1:35";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->p);
  if ( this->p )
  {
    boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::~executor_op(this->p);
    if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->p = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->v);
  if ( this->v )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::get_recycling_allocator<std::allocator<void>,boost::asio::detail::thread_info_base::default_tag>::get(this->a);
    boost::asio::detail::recycling_allocator<boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>,boost::asio::detail::thread_info_base::default_tag>::recycling_allocator<void>(
      (boost::asio::detail::recycling_allocator<boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>,boost::asio::detail::thread_info_base::default_tag> *const)(v1 + 32),
      &v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->v);
    boost::asio::detail::recycling_allocator<boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>,boost::asio::detail::thread_info_base::default_tag>::deallocate(
      (boost::asio::detail::recycling_allocator<boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>,boost::asio::detail::thread_info_base::default_tag> *const)(v1 + 32),
      (boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *)this->v,
      1uLL);
    if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->v = 0LL;
  }
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

// Line 35: range 000000000C6B8518-000000000C6B8532
void __cdecl boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::~ptr(
        boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const this)
{
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset(this);
};

// Line 35: range 0000000019B6C272-0000000019B6C3EB
void __fastcall boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset(
        boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const this)
{
  boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,std::allocator<void>,boost::asio::detail::scheduler_operation> **p_p; // rdi
  boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,std::allocator<void>,boost::asio::detail::scheduler_operation> *p; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  unsigned __int64 v; // rbp
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  char v8; // dl
  char v9; // dl
  char v10; // al

  p_p = &this->p;
  if ( *(_BYTE *)(((unsigned __int64)p_p >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_p);
  p = this->p;
  if ( p )
  {
    if ( *(_BYTE *)(((unsigned __int64)&p->handler_.data_._M_refcount >> 3) + 0x7FFF8000) )
      p = (boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,std::allocator<void>,boost::asio::detail::scheduler_operation> *)__asan_report_load8(&p->handler_.data_._M_refcount);
    M_pi = p->handler_.data_._M_refcount._M_pi;
    if ( M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
    if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->p = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->v);
  v = (unsigned __int64)this->v;
  if ( v )
  {
    v6 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                             + __readfsqword(0));
    if ( v6 )
    {
      v7 = (_QWORD *)(v6 + 8);
      if ( *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
      {
        v6 += 8LL;
        __asan_report_load8(v7);
      }
      v6 = *(_QWORD *)(v6 + 8);
    }
    if ( !v6 )
      goto LABEL_31;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    if ( *(_QWORD *)v6 )
      goto LABEL_31;
    v8 = *(_BYTE *)(((v + 56) >> 3) + 0x7FFF8000);
    if ( v8 <= (char)((v + 56) & 7) && v8 )
    {
      v6 = v + 56;
      __asan_report_load1(v + 56);
    }
    v9 = *(_BYTE *)(v + 56);
    v10 = *(_BYTE *)((v >> 3) + 0x7FFF8000);
    if ( v10 <= (char)(v & 7) )
    {
      if ( v10 )
      {
        v6 = v;
        __asan_report_store1(v);
      }
    }
    *(_BYTE *)v = v9;
    *(_QWORD *)v6 = v;
    while ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
LABEL_31:
      operator delete((void *)v);
    }
    this->v = 0LL;
  }
};

// Line 35: range 0000000014EEA768-0000000014EEB035
void __fastcall boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,boost::asio::detail::recycling_allocator<void,boost::asio::detail::thread_info_base::default_tag>,boost::asio::detail::scheduler_operation>::ptr::reset(
        boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type>,boost::asio::detail::recycling_allocator<void,boost::asio::detail::thread_info_base::default_tag>,boost::asio::detail::scheduler_operation>::ptr *const this)
{
  unsigned __int64 p_handler; // rbp
  boost::asio::detail::scheduler_operation *v2; // rsi
  unsigned __int64 p_p; // rdi
  boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type>,boost::asio::detail::recycling_allocator<void,boost::asio::detail::thread_info_base::default_tag>,boost::asio::detail::scheduler_operation> *p; // rdi
  volatile signed __int64 *p_M_i; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  void **p_v; // rdi
  __int64 v11; // rax
  boost::asio::detail::scheduler *v12; // rax
  char v13; // dl
  char v14; // al
  const boost::system::error_code *v15; // rdx
  std::size_t v16; // rcx

  p_p = (unsigned __int64)&this->p;
  if ( *(_BYTE *)((p_p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_p);
LABEL_23:
    __asan_report_load1(p_p);
    goto LABEL_24;
  }
  p = this->p;
  if ( !p )
    goto LABEL_10;
  p_handler = (unsigned __int64)&p->handler_;
  p_p = (unsigned __int64)&p->handler_.work_.owns_;
  if ( *(char *)((p_p >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_23;
  if ( !*(_BYTE *)(p_handler + 24) )
    goto LABEL_5;
LABEL_24:
  p_M_i = (volatile signed __int64 *)(p_handler + 16);
  if ( *(_BYTE *)(((p_handler + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_i);
    goto LABEL_30;
  }
  v11 = *(_QWORD *)(p_handler + 16);
  p_M_i = (volatile signed __int64 *)(v11 + 8);
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_M_i);
    goto LABEL_31;
  }
  v12 = *(boost::asio::detail::scheduler **)(v11 + 8);
  p_M_i = &v12->outstanding_work_._M_i;
  if ( *(_BYTE *)(((unsigned __int64)&v12->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8();
    goto LABEL_32;
  }
  if ( _InterlockedExchangeAdd64(p_M_i, 0xFFFFFFFFFFFFFFFFLL) == 1 )
    boost::asio::detail::scheduler::stop(v12);
LABEL_5:
  p_M_i = (volatile signed __int64 *)(p_handler + 8);
  if ( *(_BYTE *)(((p_handler + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_M_i);
LABEL_33:
    __asan_report_store8();
    goto LABEL_34;
  }
  v7 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_handler + 8);
  if ( v7 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v7);
  p_M_i = (volatile signed __int64 *)&this->p;
  if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  this->p = 0LL;
LABEL_10:
  p_M_i = (volatile signed __int64 *)&this->v;
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    v9 = __asan_report_load8(p_M_i);
    goto LABEL_35;
  }
  p_handler = (unsigned __int64)this->v;
  if ( !p_handler )
    return;
  v8 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                           + __readfsqword(0));
  if ( v8 )
  {
    v9 = v8 + 8;
    if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
    {
      v8 = *(_QWORD *)(v8 + 8);
      goto LABEL_15;
    }
LABEL_35:
    v8 = v9;
    __asan_report_load8(v9);
LABEL_36:
    __asan_report_load8(v8);
    goto LABEL_37;
  }
LABEL_15:
  if ( !v8 )
  {
LABEL_18:
    operator delete(this->v);
    goto LABEL_19;
  }
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    goto LABEL_36;
  if ( *(_QWORD *)v8 )
    goto LABEL_18;
LABEL_37:
  v13 = *(_BYTE *)(((p_handler + 64) >> 3) + 0x7FFF8000);
  if ( v13 <= (char)((p_handler + 64) & 7) && v13 )
  {
    __asan_report_load1(p_handler + 64);
LABEL_43:
    p_v = (void **)p_handler;
    __asan_report_store1(p_handler);
    goto LABEL_44;
  }
  v14 = *(_BYTE *)((p_handler >> 3) + 0x7FFF8000);
  if ( v14 <= (char)(p_handler & 7) && v14 )
    goto LABEL_43;
  *(_BYTE *)p_handler = *(_BYTE *)(p_handler + 64);
  *(_QWORD *)v8 = p_handler;
LABEL_19:
  p_v = &this->v;
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8();
    boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,boost::asio::detail::recycling_allocator<void,boost::asio::detail::thread_info_base::default_tag>,boost::asio::detail::scheduler_operation>::do_complete(
      p_v,
      v2,
      v15,
      v16);
    return;
  }
  this->v = 0LL;
};

// Line 35: range 0000000014EDC92C-0000000014EDD000
void __fastcall boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset(
        boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type>,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const this)
{
  unsigned __int64 p_handler; // rbp
  boost::asio::detail::binder2<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::system::error_code,long unsigned int> *v2; // rsi
  unsigned __int64 p_p; // rdi
  boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type>,std::allocator<void>,boost::asio::detail::scheduler_operation> *p; // rdi
  volatile signed __int64 *p_M_i; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  void **p_v; // rdi
  __int64 v11; // rax
  boost::asio::detail::scheduler *v12; // rax
  char v13; // dl
  char v14; // al
  const std::allocator<void> *v15; // rdx

  p_p = (unsigned __int64)&this->p;
  if ( *(_BYTE *)((p_p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_p);
LABEL_23:
    __asan_report_load1(p_p);
    goto LABEL_24;
  }
  p = this->p;
  if ( !p )
    goto LABEL_10;
  p_handler = (unsigned __int64)&p->handler_;
  p_p = (unsigned __int64)&p->handler_.work_.owns_;
  if ( *(char *)((p_p >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_23;
  if ( !*(_BYTE *)(p_handler + 24) )
    goto LABEL_5;
LABEL_24:
  p_M_i = (volatile signed __int64 *)(p_handler + 16);
  if ( *(_BYTE *)(((p_handler + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_i);
    goto LABEL_30;
  }
  v11 = *(_QWORD *)(p_handler + 16);
  p_M_i = (volatile signed __int64 *)(v11 + 8);
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_M_i);
    goto LABEL_31;
  }
  v12 = *(boost::asio::detail::scheduler **)(v11 + 8);
  p_M_i = &v12->outstanding_work_._M_i;
  if ( *(_BYTE *)(((unsigned __int64)&v12->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8();
    goto LABEL_32;
  }
  if ( _InterlockedExchangeAdd64(p_M_i, 0xFFFFFFFFFFFFFFFFLL) == 1 )
    boost::asio::detail::scheduler::stop(v12);
LABEL_5:
  p_M_i = (volatile signed __int64 *)(p_handler + 8);
  if ( *(_BYTE *)(((p_handler + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_M_i);
LABEL_33:
    __asan_report_store8();
    goto LABEL_34;
  }
  v7 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_handler + 8);
  if ( v7 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v7);
  p_M_i = (volatile signed __int64 *)&this->p;
  if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  this->p = 0LL;
LABEL_10:
  p_M_i = (volatile signed __int64 *)&this->v;
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    v9 = __asan_report_load8(p_M_i);
    goto LABEL_35;
  }
  p_handler = (unsigned __int64)this->v;
  if ( !p_handler )
    return;
  v8 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                           + __readfsqword(0));
  if ( v8 )
  {
    v9 = v8 + 8;
    if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
    {
      v8 = *(_QWORD *)(v8 + 8);
      goto LABEL_15;
    }
LABEL_35:
    v8 = v9;
    __asan_report_load8(v9);
LABEL_36:
    __asan_report_load8(v8);
    goto LABEL_37;
  }
LABEL_15:
  if ( !v8 )
  {
LABEL_18:
    operator delete(this->v);
    goto LABEL_19;
  }
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    goto LABEL_36;
  if ( *(_QWORD *)v8 )
    goto LABEL_18;
LABEL_37:
  v13 = *(_BYTE *)(((p_handler + 64) >> 3) + 0x7FFF8000);
  if ( v13 <= (char)((p_handler + 64) & 7) && v13 )
  {
    __asan_report_load1(p_handler + 64);
LABEL_43:
    p_v = (void **)p_handler;
    __asan_report_store1(p_handler);
    goto LABEL_44;
  }
  v14 = *(_BYTE *)((p_handler >> 3) + 0x7FFF8000);
  if ( v14 <= (char)(p_handler & 7) && v14 )
    goto LABEL_43;
  *(_BYTE *)p_handler = *(_BYTE *)(p_handler + 64);
  *(_QWORD *)v8 = p_handler;
LABEL_19:
  p_v = &this->v;
  if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8();
    boost::asio::system_executor::dispatch<boost::asio::detail::binder2<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::system::error_code,unsigned long>,std::allocator<void>>(
      (const boost::asio::system_executor *const)p_v,
      v2,
      v15);
    return;
  }
  this->v = 0LL;
};

// Line 38: range 000000000C6B8534-000000000C6B8577
void __cdecl boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::executor_op<boost::asio::executor::function>(
        boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *const this,
        boost::asio::executor::function *h,
        const std::allocator<void> *allocator)
{
  boost::asio::detail::scheduler_operation::scheduler_operation(
    this,
    (boost::asio::detail::scheduler_operation::func_type)boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete);
  boost::asio::executor::function::function(&this->handler_, h);
};

// Line 45: range 000000000C6BE847-000000000C6BEA65
void __cdecl boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete(
        void *owner,
        boost::asio::detail::scheduler_operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v7[192]; // [rsp+30h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 12 allocator:51 48 1 4 b:68 64 8 10 handler:62 96 24 4 p:52";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -218959360;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_QWORD *)(v4 + 96) = std::addressof<std::allocator<void>>((std::allocator<void> *)(v4 + 32));
  *(_QWORD *)(v4 + 104) = base;
  *(_QWORD *)(v4 + 112) = base;
  boost::asio::executor::function::function(
    (boost::asio::executor::function *const)(v4 + 64),
    (boost::asio::executor::function *)&base[1]);
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset((boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v4 + 96));
  if ( owner )
  {
    boost::asio::detail::std_fenced_block::std_fenced_block(
      (boost::asio::detail::std_fenced_block *const)(v4 + 48),
      half);
    boost_asio_handler_invoke_helpers::invoke<boost::asio::executor::function,boost::asio::executor::function>(
      (boost::asio::executor::function *)(v4 + 64),
      (boost::asio::executor::function *)(v4 + 64));
    boost::asio::detail::std_fenced_block::~std_fenced_block((boost::asio::detail::std_fenced_block *const)(v4 + 48));
  }
  boost::asio::executor::function::~function((boost::asio::executor::function *const)(v4 + 64));
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::~ptr((boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v4 + 96));
  if ( v7 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 45: range 0000000014EEA35A-0000000014EEA763
void __fastcall boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete(
        void *owner,
        boost::asio::detail::scheduler_operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  boost::asio::detail::scheduler_operation *v5; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  _DWORD *v8; // r13
  boost::asio::detail::scheduler_operation *v9; // rdi
  boost::asio::detail::scheduler_operation::func_type func; // rax
  __int64 v11; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // dl
  char v17; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rdi
  __int64 v19; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  char v23; // dl
  char v24; // al
  struct _Unwind_Exception *v25; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rdi
  _BYTE v27[248]; // [rsp+0h] [rbp-F8h] BYREF

  v5 = base;
  v6 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_2(192LL);
    if ( v15 )
      v6 = v15;
  }
  v7 = v6 + 192;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 12 allocator:51 64 24 4 p:52 128 24 10 handler:62";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -234881024;
  v8[536862723] = -218959118;
  v8[536862724] = -218103808;
  v8[536862725] = -202116109;
  *(_QWORD *)(v6 + 64) = v6 + 48;
  *(_QWORD *)(v6 + 72) = base;
  *(_QWORD *)(v6 + 80) = base;
  v9 = base + 1;
  if ( *(_BYTE *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v9);
    goto LABEL_24;
  }
  *(_QWORD *)(v6 + 128) = base[1].next_;
  v9 = (boost::asio::detail::scheduler_operation *)((char *)base + 32);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(v9);
    goto LABEL_25;
  }
  func = base[1].func_;
  base[1].func_ = 0LL;
  *(_QWORD *)(v6 + 136) = func;
  base[1].next_ = 0LL;
  v9 = (boost::asio::detail::scheduler_operation *)((char *)base + 40);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(v9);
    goto LABEL_26;
  }
  *(_QWORD *)(v6 + 144) = *(_QWORD *)&base[1].task_result_;
  v11 = *(_QWORD *)(v6 + 80);
  if ( !v11 )
    goto LABEL_10;
  v9 = (boost::asio::detail::scheduler_operation *)(v11 + 32);
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v14 = __asan_report_load8(v9);
    goto LABEL_27;
  }
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v11 + 32);
  if ( v12 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v12);
  *(_QWORD *)(v6 + 80) = 0LL;
LABEL_10:
  v5 = *(boost::asio::detail::scheduler_operation **)(v6 + 72);
  if ( !v5 )
    goto LABEL_19;
  v13 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v13 )
  {
    v14 = v13 + 8;
    if ( !*(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)(v13 + 8);
      goto LABEL_14;
    }
LABEL_27:
    v13 = v14;
    __asan_report_load8(v14);
    goto LABEL_28;
  }
LABEL_14:
  if ( v13 )
  {
    if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)v13 )
        goto LABEL_17;
LABEL_29:
      v16 = *(_BYTE *)(((unsigned __int64)&v5[2].func_ >> 3) + 0x7FFF8000);
      if ( v16 <= (((unsigned __int8)v5 + 56) & 7) && v16 )
      {
        __asan_report_load1(&v5[2].func_);
      }
      else
      {
        v17 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
        if ( v17 > ((unsigned __int8)v5 & 7) || !v17 )
        {
          LOBYTE(v5->next_) = v5[2].func_;
          *(_QWORD *)v13 = v5;
          goto LABEL_18;
        }
      }
      __asan_report_store1(v5);
      goto LABEL_36;
    }
LABEL_28:
    __asan_report_load8(v13);
    goto LABEL_29;
  }
LABEL_17:
  operator delete(*(void **)(v6 + 72));
LABEL_18:
  *(_QWORD *)(v6 + 72) = 0LL;
LABEL_19:
  if ( owner )
    boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::operator()((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v6 + 128));
LABEL_36:
  v18 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 136);
  if ( v18 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v18);
  v19 = *(_QWORD *)(v6 + 80);
  if ( v19 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(v19 + 32) >> 3) + 0x7FFF8000) )
    {
      v22 = __asan_report_load8(v19 + 32);
      goto LABEL_54;
    }
    v20 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v19 + 32);
    if ( v20 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
    *(_QWORD *)(v6 + 80) = 0LL;
  }
  v7 = *(_QWORD *)(v6 + 72);
  if ( !v7 )
    goto LABEL_51;
  v21 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v21 )
  {
    v22 = v21 + 8;
    if ( !*(_BYTE *)(((v21 + 8) >> 3) + 0x7FFF8000) )
    {
      v21 = *(_QWORD *)(v21 + 8);
      goto LABEL_47;
    }
LABEL_54:
    v21 = v22;
    __asan_report_load8(v22);
LABEL_55:
    __asan_report_load8(v21);
    goto LABEL_56;
  }
LABEL_47:
  if ( !v21 )
  {
LABEL_50:
    operator delete((void *)v7);
    goto LABEL_51;
  }
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_55;
  if ( *(_QWORD *)v21 )
    goto LABEL_50;
LABEL_56:
  v23 = *(_BYTE *)(((v7 + 56) >> 3) + 0x7FFF8000);
  if ( v23 <= (char)((v7 + 56) & 7) && v23 )
  {
    __asan_report_load1(v7 + 56);
    goto LABEL_62;
  }
  v24 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
  if ( v24 <= (char)(v7 & 7) && v24 )
  {
LABEL_62:
    v25 = (struct _Unwind_Exception *)__asan_report_store1(v7);
    v26 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 - 56);
    if ( v26 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v26);
    boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession>>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset((boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerSession,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<std::shared_ptr<common::minet::AServerSession> >,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v7 - 128));
    __asan_handle_no_return(v7 - 128);
    _Unwind_Resume(v25);
  }
  *(_BYTE *)v7 = *(_BYTE *)(v7 + 56);
  *(_QWORD *)v21 = v7;
LABEL_51:
  if ( v27 == (_BYTE *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 45: range 0000000019B6D309-0000000019B6D712
void __fastcall boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete(
        void *owner,
        boost::asio::detail::scheduler_operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  boost::asio::detail::scheduler_operation *v5; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  _DWORD *v8; // r13
  boost::asio::detail::scheduler_operation *v9; // rdi
  boost::asio::detail::scheduler_operation::func_type func; // rax
  __int64 v11; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // dl
  char v17; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rdi
  __int64 v19; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  char v23; // dl
  char v24; // al
  struct _Unwind_Exception *v25; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rdi
  _BYTE v27[248]; // [rsp+0h] [rbp-F8h] BYREF

  v5 = base;
  v6 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_2(192LL);
    if ( v15 )
      v6 = v15;
  }
  v7 = v6 + 192;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 12 allocator:51 64 24 4 p:52 128 24 10 handler:62";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -234881024;
  v8[536862723] = -218959118;
  v8[536862724] = -218103808;
  v8[536862725] = -202116109;
  *(_QWORD *)(v6 + 64) = v6 + 48;
  *(_QWORD *)(v6 + 72) = base;
  *(_QWORD *)(v6 + 80) = base;
  v9 = base + 1;
  if ( *(_BYTE *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v9);
    goto LABEL_24;
  }
  *(_QWORD *)(v6 + 128) = base[1].next_;
  v9 = (boost::asio::detail::scheduler_operation *)((char *)base + 32);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(v9);
    goto LABEL_25;
  }
  func = base[1].func_;
  base[1].func_ = 0LL;
  *(_QWORD *)(v6 + 136) = func;
  base[1].next_ = 0LL;
  v9 = (boost::asio::detail::scheduler_operation *)((char *)base + 40);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(v9);
    goto LABEL_26;
  }
  *(_QWORD *)(v6 + 144) = *(_QWORD *)&base[1].task_result_;
  v11 = *(_QWORD *)(v6 + 80);
  if ( !v11 )
    goto LABEL_10;
  v9 = (boost::asio::detail::scheduler_operation *)(v11 + 32);
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v14 = __asan_report_load8(v9);
    goto LABEL_27;
  }
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v11 + 32);
  if ( v12 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v12);
  *(_QWORD *)(v6 + 80) = 0LL;
LABEL_10:
  v5 = *(boost::asio::detail::scheduler_operation **)(v6 + 72);
  if ( !v5 )
    goto LABEL_19;
  v13 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v13 )
  {
    v14 = v13 + 8;
    if ( !*(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)(v13 + 8);
      goto LABEL_14;
    }
LABEL_27:
    v13 = v14;
    __asan_report_load8(v14);
    goto LABEL_28;
  }
LABEL_14:
  if ( v13 )
  {
    if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)v13 )
        goto LABEL_17;
LABEL_29:
      v16 = *(_BYTE *)(((unsigned __int64)&v5[2].func_ >> 3) + 0x7FFF8000);
      if ( v16 <= (((unsigned __int8)v5 + 56) & 7) && v16 )
      {
        __asan_report_load1(&v5[2].func_);
      }
      else
      {
        v17 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
        if ( v17 > ((unsigned __int8)v5 & 7) || !v17 )
        {
          LOBYTE(v5->next_) = v5[2].func_;
          *(_QWORD *)v13 = v5;
          goto LABEL_18;
        }
      }
      __asan_report_store1(v5);
      goto LABEL_36;
    }
LABEL_28:
    __asan_report_load8(v13);
    goto LABEL_29;
  }
LABEL_17:
  operator delete(*(void **)(v6 + 72));
LABEL_18:
  *(_QWORD *)(v6 + 72) = 0LL;
LABEL_19:
  if ( owner )
    boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::operator()((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v6 + 128));
LABEL_36:
  v18 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 136);
  if ( v18 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v18);
  v19 = *(_QWORD *)(v6 + 80);
  if ( v19 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(v19 + 32) >> 3) + 0x7FFF8000) )
    {
      v22 = __asan_report_load8(v19 + 32);
      goto LABEL_54;
    }
    v20 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v19 + 32);
    if ( v20 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
    *(_QWORD *)(v6 + 80) = 0LL;
  }
  v7 = *(_QWORD *)(v6 + 72);
  if ( !v7 )
    goto LABEL_51;
  v21 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v21 )
  {
    v22 = v21 + 8;
    if ( !*(_BYTE *)(((v21 + 8) >> 3) + 0x7FFF8000) )
    {
      v21 = *(_QWORD *)(v21 + 8);
      goto LABEL_47;
    }
LABEL_54:
    v21 = v22;
    __asan_report_load8(v22);
LABEL_55:
    __asan_report_load8(v21);
    goto LABEL_56;
  }
LABEL_47:
  if ( !v21 )
  {
LABEL_50:
    operator delete((void *)v7);
    goto LABEL_51;
  }
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_55;
  if ( *(_QWORD *)v21 )
    goto LABEL_50;
LABEL_56:
  v23 = *(_BYTE *)(((v7 + 56) >> 3) + 0x7FFF8000);
  if ( v23 <= (char)((v7 + 56) & 7) && v23 )
  {
    __asan_report_load1(v7 + 56);
    goto LABEL_62;
  }
  v24 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
  if ( v24 <= (char)(v7 & 7) && v24 )
  {
LABEL_62:
    v25 = (struct _Unwind_Exception *)__asan_report_store1(v7);
    v26 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 - 56);
    if ( v26 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v26);
    boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset((boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v7 - 128));
    __asan_handle_no_return(v7 - 128);
    _Unwind_Resume(v25);
  }
  *(_BYTE *)v7 = *(_BYTE *)(v7 + 56);
  *(_QWORD *)v21 = v7;
LABEL_51:
  if ( v27 == (_BYTE *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 45: range 0000000019B6DCAD-0000000019B6E0B6
void __fastcall boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete(
        void *owner,
        boost::asio::detail::scheduler_operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  boost::asio::detail::scheduler_operation *v5; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  _DWORD *v8; // r13
  boost::asio::detail::scheduler_operation *v9; // rdi
  boost::asio::detail::scheduler_operation::func_type func; // rax
  __int64 v11; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // dl
  char v17; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rdi
  __int64 v19; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  char v23; // dl
  char v24; // al
  struct _Unwind_Exception *v25; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rdi
  _BYTE v27[248]; // [rsp+0h] [rbp-F8h] BYREF

  v5 = base;
  v6 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_2(192LL);
    if ( v15 )
      v6 = v15;
  }
  v7 = v6 + 192;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 12 allocator:51 64 24 4 p:52 128 24 10 handler:62";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -234881024;
  v8[536862723] = -218959118;
  v8[536862724] = -218103808;
  v8[536862725] = -202116109;
  *(_QWORD *)(v6 + 64) = v6 + 48;
  *(_QWORD *)(v6 + 72) = base;
  *(_QWORD *)(v6 + 80) = base;
  v9 = base + 1;
  if ( *(_BYTE *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v9);
    goto LABEL_24;
  }
  *(_QWORD *)(v6 + 128) = base[1].next_;
  v9 = (boost::asio::detail::scheduler_operation *)((char *)base + 32);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(v9);
    goto LABEL_25;
  }
  func = base[1].func_;
  base[1].func_ = 0LL;
  *(_QWORD *)(v6 + 136) = func;
  base[1].next_ = 0LL;
  v9 = (boost::asio::detail::scheduler_operation *)((char *)base + 40);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(v9);
    goto LABEL_26;
  }
  *(_QWORD *)(v6 + 144) = *(_QWORD *)&base[1].task_result_;
  v11 = *(_QWORD *)(v6 + 80);
  if ( !v11 )
    goto LABEL_10;
  v9 = (boost::asio::detail::scheduler_operation *)(v11 + 32);
  if ( *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v14 = __asan_report_load8(v9);
    goto LABEL_27;
  }
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v11 + 32);
  if ( v12 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v12);
  *(_QWORD *)(v6 + 80) = 0LL;
LABEL_10:
  v5 = *(boost::asio::detail::scheduler_operation **)(v6 + 72);
  if ( !v5 )
    goto LABEL_19;
  v13 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v13 )
  {
    v14 = v13 + 8;
    if ( !*(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)(v13 + 8);
      goto LABEL_14;
    }
LABEL_27:
    v13 = v14;
    __asan_report_load8(v14);
    goto LABEL_28;
  }
LABEL_14:
  if ( v13 )
  {
    if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)v13 )
        goto LABEL_17;
LABEL_29:
      v16 = *(_BYTE *)(((unsigned __int64)&v5[2].func_ >> 3) + 0x7FFF8000);
      if ( v16 <= (((unsigned __int8)v5 + 56) & 7) && v16 )
      {
        __asan_report_load1(&v5[2].func_);
      }
      else
      {
        v17 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
        if ( v17 > ((unsigned __int8)v5 & 7) || !v17 )
        {
          LOBYTE(v5->next_) = v5[2].func_;
          *(_QWORD *)v13 = v5;
          goto LABEL_18;
        }
      }
      __asan_report_store1(v5);
      goto LABEL_36;
    }
LABEL_28:
    __asan_report_load8(v13);
    goto LABEL_29;
  }
LABEL_17:
  operator delete(*(void **)(v6 + 72));
LABEL_18:
  *(_QWORD *)(v6 + 72) = 0LL;
LABEL_19:
  if ( owner )
    boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::operator()((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v6 + 128));
LABEL_36:
  v18 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 136);
  if ( v18 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v18);
  v19 = *(_QWORD *)(v6 + 80);
  if ( v19 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(v19 + 32) >> 3) + 0x7FFF8000) )
    {
      v22 = __asan_report_load8(v19 + 32);
      goto LABEL_54;
    }
    v20 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v19 + 32);
    if ( v20 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
    *(_QWORD *)(v6 + 80) = 0LL;
  }
  v7 = *(_QWORD *)(v6 + 72);
  if ( !v7 )
    goto LABEL_51;
  v21 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v21 )
  {
    v22 = v21 + 8;
    if ( !*(_BYTE *)(((v21 + 8) >> 3) + 0x7FFF8000) )
    {
      v21 = *(_QWORD *)(v21 + 8);
      goto LABEL_47;
    }
LABEL_54:
    v21 = v22;
    __asan_report_load8(v22);
LABEL_55:
    __asan_report_load8(v21);
    goto LABEL_56;
  }
LABEL_47:
  if ( !v21 )
  {
LABEL_50:
    operator delete((void *)v7);
    goto LABEL_51;
  }
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_55;
  if ( *(_QWORD *)v21 )
    goto LABEL_50;
LABEL_56:
  v23 = *(_BYTE *)(((v7 + 56) >> 3) + 0x7FFF8000);
  if ( v23 <= (char)((v7 + 56) & 7) && v23 )
  {
    __asan_report_load1(v7 + 56);
    goto LABEL_62;
  }
  v24 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
  if ( v24 <= (char)(v7 & 7) && v24 )
  {
LABEL_62:
    v25 = (struct _Unwind_Exception *)__asan_report_store1(v7);
    v26 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 - 56);
    if ( v26 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v26);
    boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset((boost::asio::detail::executor_op<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> >,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest&,common::minet::http_client::HttpResponse&,uint32_t)::<lambda(boost::asio::yield_context)>,boost::context::basic_fixedsize_stack<boost::context::stack_traits> >,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v7 - 128));
    __asan_handle_no_return(v7 - 128);
    _Unwind_Resume(v25);
  }
  *(_BYTE *)v7 = *(_BYTE *)(v7 + 56);
  *(_QWORD *)v21 = v7;
LABEL_51:
  if ( v27 == (_BYTE *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 75: range 0000000014EE0D6C-0000000014EE13F9
void __fastcall boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete(
        void *owner,
        boost::asio::detail::scheduler_operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  boost::asio::detail::scheduler_operation *v5; // rbp
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  _DWORD *v8; // r12
  boost::asio::detail::scheduler_operation *v9; // rdi
  boost::asio::detail::scheduler_operation::func_type func; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // dl
  char v16; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rdi
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rax
  volatile signed __int64 *p_task_result; // rdi
  unsigned int *v23; // rdi
  __int64 v24; // rax
  boost::asio::detail::scheduler_operation *v25; // rdi
  boost::asio::detail::scheduler_operation *next; // rax
  char v27; // cl
  char v28; // dl
  pthread_cond_t *v29; // rdi
  char v30; // dl
  char v31; // al
  struct _Unwind_Exception *v32; // rbp
  _BYTE v33[312]; // [rsp+0h] [rbp-138h] BYREF

  v5 = base;
  v6 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_2(256LL);
    if ( v14 )
      v6 = v14;
  }
  v7 = v6 + 256;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 1 12 allocator:51 64 12 2 ev 96 16 4 lock 128 24 4 p:52 192 32 10 handler:62";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -219020288;
  v8[536862723] = -219021312;
  v8[536862724] = -234881024;
  v8[536862725] = -218959118;
  v8[536862727] = -202116109;
  *(_QWORD *)(v6 + 128) = v6 + 48;
  *(_QWORD *)(v6 + 136) = base;
  *(_QWORD *)(v6 + 144) = base;
  v9 = base + 1;
  if ( *(_BYTE *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v9);
    goto LABEL_22;
  }
  *(_QWORD *)(v6 + 192) = base[1].next_;
  v9 = (boost::asio::detail::scheduler_operation *)((char *)base + 32);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(v9);
    goto LABEL_23;
  }
  func = base[1].func_;
  base[1].func_ = 0LL;
  *(_QWORD *)(v6 + 200) = func;
  base[1].next_ = 0LL;
  v9 = (boost::asio::detail::scheduler_operation *)((char *)base + 40);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(v9);
    goto LABEL_24;
  }
  *(_QWORD *)(v6 + 208) = *(_QWORD *)&base[1].task_result_;
  v9 = base + 2;
  if ( *(char *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_24:
    v13 = __asan_report_load1(v9);
    goto LABEL_25;
  }
  *(_BYTE *)(v6 + 216) = base[2].next_;
  LOBYTE(base[2].next_) = 0;
  v11 = *(_QWORD *)(v6 + 144);
  if ( v11 )
  {
    boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker((boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> *const)(v11 + 24));
    *(_QWORD *)(v6 + 144) = 0LL;
  }
  v5 = *(boost::asio::detail::scheduler_operation **)(v6 + 136);
  if ( !v5 )
    goto LABEL_17;
  v12 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v12 )
  {
    v13 = v12 + 8;
    if ( !*(_BYTE *)(((v12 + 8) >> 3) + 0x7FFF8000) )
    {
      v12 = *(_QWORD *)(v12 + 8);
      goto LABEL_12;
    }
LABEL_25:
    v12 = v13;
    __asan_report_load8(v13);
    goto LABEL_26;
  }
LABEL_12:
  if ( v12 )
  {
    if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)v12 )
        goto LABEL_15;
LABEL_27:
      v15 = *(_BYTE *)(((unsigned __int64)&v5[2].task_result_ >> 3) + 0x7FFF8000);
      if ( v15 <= (((unsigned __int8)v5 + 64) & 7) && v15 )
      {
        __asan_report_load1(&v5[2].task_result_);
      }
      else
      {
        v16 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
        if ( v16 > ((unsigned __int8)v5 & 7) || !v16 )
        {
          LOBYTE(v5->next_) = v5[2].task_result_;
          *(_QWORD *)v12 = v5;
          goto LABEL_16;
        }
      }
      __asan_report_store1(v5);
      goto LABEL_34;
    }
LABEL_26:
    __asan_report_load8(v12);
    goto LABEL_27;
  }
LABEL_15:
  operator delete(*(void **)(v6 + 136));
LABEL_16:
  *(_QWORD *)(v6 + 136) = 0LL;
LABEL_17:
  if ( owner )
    boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::operator()((boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> *const)(v6 + 192));
LABEL_34:
  if ( !*(_BYTE *)(v6 + 216) )
    goto LABEL_35;
  v21 = *(_QWORD *)(v6 + 208);
  p_task_result = (volatile signed __int64 *)(v21 + 8);
  if ( *(_BYTE *)(((unsigned __int64)(v21 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_task_result);
    goto LABEL_70;
  }
  v5 = *(boost::asio::detail::scheduler_operation **)(v21 + 8);
  p_task_result = (volatile signed __int64 *)&v5[8].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&v5[8].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_store8();
LABEL_71:
    __asan_report_load1(p_task_result);
    goto LABEL_72;
  }
  if ( _InterlockedExchangeAdd64(p_task_result, 0xFFFFFFFFFFFFFFFFLL) != 1 )
    goto LABEL_35;
  *(_QWORD *)(v6 + 96) = v5 + 2;
  p_task_result = (volatile signed __int64 *)&v5[4];
  if ( *(char *)(((unsigned __int64)&v5[4] >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_71;
  if ( !LOBYTE(v5[4].next_) )
  {
    *(_BYTE *)(v6 + 104) = 0;
    goto LABEL_55;
  }
LABEL_72:
  pthread_mutex_lock((pthread_mutex_t *)&v5[2].func_);
  *(_BYTE *)(v6 + 104) = 1;
LABEL_55:
  v23 = &v5[9].task_result_;
  if ( *(char *)(((unsigned __int64)&v5[9].task_result_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(v23);
  }
  else
  {
    LOBYTE(v5[9].task_result_) = 1;
    v24 = *(_QWORD *)(v6 + 96);
    v23 = (unsigned int *)(v24 + 48);
    if ( *(char *)(((unsigned __int64)(v24 + 48) >> 3) + 0x7FFF8000) >= 0 )
    {
      if ( !*(_BYTE *)(v24 + 48) )
        goto LABEL_58;
      goto LABEL_75;
    }
  }
  __asan_report_load1(v23);
LABEL_75:
  v29 = (pthread_cond_t *)&v5[4].task_result_;
  if ( !*(_BYTE *)(v6 + 104) )
  {
    __asan_handle_no_return(v29);
    __assert_fail(
      "lock.locked()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/asio/detail/posix_event.hpp",
      0x38u,
      "void boost::asio::detail::posix_event::signal_all(Lock&) [with Lock = boost::asio::detail::conditionally_enabled_m"
      "utex::scoped_lock]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&v5[6].task_result_ >> 3) + 0x7FFF8000) )
  {
    v25 = (boost::asio::detail::scheduler_operation *)((char *)v5 + 160);
    __asan_report_load8(&v5[6].task_result_);
    goto LABEL_80;
  }
  *(_QWORD *)&v5[6].task_result_ |= 1uLL;
  pthread_cond_broadcast(v29);
LABEL_58:
  v25 = (boost::asio::detail::scheduler_operation *)((char *)v5 + 200);
  if ( *(char *)(((unsigned __int64)&v5[8].func_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_80:
    __asan_report_load1(v25);
LABEL_81:
    __asan_report_load8(v25);
LABEL_82:
    __asan_report_load4(v25);
LABEL_83:
    __asan_report_load4(v25);
    goto LABEL_84;
  }
  if ( LOBYTE(v5[8].func_) )
    goto LABEL_67;
  v25 = v5 + 7;
  if ( *(_BYTE *)(((unsigned __int64)&v5[7] >> 3) + 0x7FFF8000) )
    goto LABEL_81;
  next = v5[7].next_;
  if ( !next )
    goto LABEL_67;
  LOBYTE(v5[8].func_) = 1;
  *(_DWORD *)(v6 + 64) = -2147483639;
  v25 = (boost::asio::detail::scheduler_operation *)((char *)next + 104);
  *(_QWORD *)(v6 + 68) = (char *)next + 104;
  v27 = *(_BYTE *)(((unsigned __int64)&next[4].func_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)next + 104) & 7) + 3) >= v27 && v27 )
    goto LABEL_82;
  v25 = (boost::asio::detail::scheduler_operation *)((char *)next + 112);
  v28 = *(_BYTE *)(((unsigned __int64)&next[4].task_result_ >> 3) + 0x7FFF8000);
  if ( v28 && v28 <= 3 )
    goto LABEL_83;
  epoll_ctl(next[4].task_result_, 3, (int)next[4].func_, (struct epoll_event *)(v6 + 64));
LABEL_67:
  if ( *(_BYTE *)(v6 + 104) )
    pthread_mutex_unlock((pthread_mutex_t *)(*(_QWORD *)(v6 + 96) + 8LL));
LABEL_35:
  v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 200);
  if ( v17 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v17);
  v18 = *(_QWORD *)(v6 + 144);
  if ( v18 )
  {
    boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker((boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> *const)(v18 + 24));
    *(_QWORD *)(v6 + 144) = 0LL;
  }
  v7 = *(_QWORD *)(v6 + 136);
  if ( v7 )
  {
    v19 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                              + __readfsqword(0));
    if ( !v19 )
      goto LABEL_43;
    v20 = (_QWORD *)(v19 + 8);
    if ( !*(_BYTE *)(((v19 + 8) >> 3) + 0x7FFF8000) )
    {
      v19 = *(_QWORD *)(v19 + 8);
LABEL_43:
      if ( !v19 )
      {
LABEL_46:
        operator delete((void *)v7);
        goto LABEL_47;
      }
      if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      {
        if ( *(_QWORD *)v19 )
          goto LABEL_46;
LABEL_86:
        v30 = *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000);
        if ( v30 <= (char)((v7 + 64) & 7) && v30 )
        {
          __asan_report_load1(v7 + 64);
        }
        else
        {
          v31 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
          if ( v31 > (char)(v7 & 7) || !v31 )
          {
            *(_BYTE *)v7 = *(_BYTE *)(v7 + 64);
            *(_QWORD *)v19 = v7;
            goto LABEL_47;
          }
        }
        v32 = (struct _Unwind_Exception *)__asan_report_store1(v7);
        boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>::~invoker((boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type> *const)(v7 - 64));
        boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<boost::asio::io_context::executor_type const>,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::reset((boost::asio::detail::executor_op<boost::asio::detail::strand_executor_service::invoker<const boost::asio::io_context::executor_type>,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v7 - 128));
        __asan_handle_no_return(v7 - 128);
        _Unwind_Resume(v32);
      }
LABEL_85:
      __asan_report_load8(v19);
      goto LABEL_86;
    }
LABEL_84:
    v19 = (unsigned __int64)v20;
    __asan_report_load8(v20);
    goto LABEL_85;
  }
LABEL_47:
  if ( v33 == (_BYTE *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
