// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/io_context.hpp

// Line 36: range 000000000BF742E1-000000000BF74325
boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *__cdecl boost::asio::use_service<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(
        boost::asio::io_context *ioc)
{
  if ( *(_BYTE *)(((unsigned __int64)ioc >> 3) + 0x7FFF8000) )
    __asan_report_load8(ioc);
  return boost::asio::detail::service_registry::use_service<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(
           ioc->service_registry_,
           ioc);
};

// Line 36: range 000000000BF4B9AD-000000000BF4B9F1
boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *__cdecl boost::asio::use_service<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>(
        boost::asio::io_context *ioc)
{
  if ( *(_BYTE *)(((unsigned __int64)ioc >> 3) + 0x7FFF8000) )
    __asan_report_load8(ioc);
  return boost::asio::detail::service_registry::use_service<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>(
           ioc->service_registry_,
           ioc);
};

// Line 36: range 000000000BF096C5-000000000BF09709
boost::asio::detail::strand_service *__cdecl boost::asio::use_service<boost::asio::detail::strand_service>(
        boost::asio::io_context *ioc)
{
  if ( *(_BYTE *)(((unsigned __int64)ioc >> 3) + 0x7FFF8000) )
    __asan_report_load8(ioc);
  return boost::asio::detail::service_registry::use_service<boost::asio::detail::strand_service>(
           ioc->service_registry_,
           ioc);
};

// Line 48: range 000000000BEF453B-000000000BEF4575
boost::asio::detail::io_context_impl *__cdecl boost::asio::use_service<boost::asio::detail::scheduler>(
        boost::asio::io_context *ioc)
{
  if ( *(_BYTE *)(((unsigned __int64)&ioc->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&ioc->impl_);
  return ioc->impl_;
};

// Line 72: range 000000000BEF4576-000000000BEF459A
boost::asio::io_context::executor_type __cdecl boost::asio::io_context::get_executor(
        boost::asio::io_context *const this)
{
  boost::asio::io_context::executor_type v2; // [rsp+18h] [rbp-8h] BYREF

  boost::asio::io_context::executor_type::executor_type(&v2, this);
  return v2;
};

// Line 236: range 000000000BEF459C-000000000BEF45D1
boost::asio::io_context *__cdecl boost::asio::io_context::executor_type::context(
        const boost::asio::io_context::executor_type *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->io_context_;
};

// Line 242: range 000000000BEF45D2-000000000BEF4635
void __cdecl boost::asio::io_context::executor_type::on_work_started(
        const boost::asio::io_context::executor_type *const this)
{
  boost::asio::io_context *io_context; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  io_context = this->io_context_;
  if ( *(_BYTE *)(((unsigned __int64)&this->io_context_->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->io_context_->impl_);
  boost::asio::detail::scheduler::work_started(io_context->impl_);
};

// Line 248: range 000000000BEF4636-000000000BEF4699
void __cdecl boost::asio::io_context::executor_type::on_work_finished(
        const boost::asio::io_context::executor_type *const this)
{
  boost::asio::io_context *io_context; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  io_context = this->io_context_;
  if ( *(_BYTE *)(((unsigned __int64)&this->io_context_->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->io_context_->impl_);
  boost::asio::detail::scheduler::work_finished(io_context->impl_);
};

// Line 253: range 000000000BF596AC-000000000BF599D0
void __cdecl boost::asio::io_context::executor_type::dispatch<boost::asio::executor::function,std::allocator<void>>(
        const boost::asio::io_context::executor_type *const this,
        boost::asio::executor::function *f,
        const std::allocator<void> *a)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::asio::io_context *io_context; // rax
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *v7; // r14
  boost::asio::io_context *v8; // rax
  char v10[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 5 b:264 64 8 7 tmp:262 96 24 5 p:271";
  *(_QWORD *)(v3 + 16) = boost::asio::io_context::executor_type::dispatch<boost::asio::executor::function,std::allocator<void>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  io_context = this->io_context_;
  if ( *(_BYTE *)(((unsigned __int64)&this->io_context_->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->io_context_->impl_);
  if ( boost::asio::detail::scheduler::can_dispatch(io_context->impl_) )
  {
    boost::asio::executor::function::function((boost::asio::executor::function *const)(v3 + 64), f);
    boost::asio::detail::std_fenced_block::std_fenced_block(
      (boost::asio::detail::std_fenced_block *const)(v3 + 48),
      full);
    boost_asio_handler_invoke_helpers::invoke<boost::asio::executor::function,boost::asio::executor::function>(
      (boost::asio::executor::function *)(v3 + 64),
      (boost::asio::executor::function *)(v3 + 64));
    boost::asio::detail::std_fenced_block::~std_fenced_block((boost::asio::detail::std_fenced_block *const)(v3 + 48));
    boost::asio::executor::function::~function((boost::asio::executor::function *const)(v3 + 64));
  }
  else
  {
    *(_QWORD *)(v3 + 96) = 0LL;
    *(_QWORD *)(v3 + 104) = 0LL;
    *(_QWORD *)(v3 + 112) = 0LL;
    *(_QWORD *)(v3 + 96) = std::addressof<std::allocator<void> const>(a);
    *(_QWORD *)(v3 + 104) = boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::allocate(a);
    v7 = (boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *)operator new(0x28uLL, *(void **)(v3 + 104));
    boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::executor_op<boost::asio::executor::function>(
      v7,
      f,
      a);
    *(_QWORD *)(v3 + 112) = v7;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = this->io_context_;
    if ( *(_BYTE *)(((unsigned __int64)&this->io_context_->impl_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->io_context_->impl_);
    boost::asio::detail::scheduler::post_immediate_completion(
      v8->impl_,
      *(boost::asio::detail::scheduler::operation **)(v3 + 112),
      0);
    *(_QWORD *)(v3 + 112) = 0LL;
    *(_QWORD *)(v3 + 104) = 0LL;
    boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::~ptr((boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v3 + 96));
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 282: range 000000000BF599D2-000000000BF59BD9
void __cdecl boost::asio::io_context::executor_type::post<boost::asio::executor::function,std::allocator<void>>(
        const boost::asio::io_context::executor_type *const this,
        boost::asio::executor::function *f,
        const std::allocator<void> *a)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *v6; // r14
  boost::asio::io_context *io_context; // rax
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 5 p:289";
  *(_QWORD *)(v3 + 16) = boost::asio::io_context::executor_type::post<boost::asio::executor::function,std::allocator<void>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 32) = std::addressof<std::allocator<void> const>(a);
  *(_QWORD *)(v3 + 40) = boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::allocate(a);
  v6 = (boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *)operator new(0x28uLL, *(void **)(v3 + 40));
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::executor_op<boost::asio::executor::function>(
    v6,
    f,
    a);
  *(_QWORD *)(v3 + 48) = v6;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  io_context = this->io_context_;
  if ( *(_BYTE *)(((unsigned __int64)&this->io_context_->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->io_context_->impl_);
  boost::asio::detail::scheduler::post_immediate_completion(
    io_context->impl_,
    *(boost::asio::detail::scheduler::operation **)(v3 + 48),
    0);
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::~ptr((boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 300: range 000000000BF59BDA-000000000BF59DE1
void __cdecl boost::asio::io_context::executor_type::defer<boost::asio::executor::function,std::allocator<void>>(
        const boost::asio::io_context::executor_type *const this,
        boost::asio::executor::function *f,
        const std::allocator<void> *a)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *v6; // r14
  boost::asio::io_context *io_context; // rax
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 5 p:307";
  *(_QWORD *)(v3 + 16) = boost::asio::io_context::executor_type::defer<boost::asio::executor::function,std::allocator<void>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 32) = std::addressof<std::allocator<void> const>(a);
  *(_QWORD *)(v3 + 40) = boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::allocate(a);
  v6 = (boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation> *)operator new(0x28uLL, *(void **)(v3 + 40));
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::executor_op<boost::asio::executor::function>(
    v6,
    f,
    a);
  *(_QWORD *)(v3 + 48) = v6;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  io_context = this->io_context_;
  if ( *(_BYTE *)(((unsigned __int64)&this->io_context_->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->io_context_->impl_);
  boost::asio::detail::scheduler::post_immediate_completion(
    io_context->impl_,
    *(boost::asio::detail::scheduler::operation **)(v3 + 48),
    1);
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr::~ptr((boost::asio::detail::executor_op<boost::asio::executor::function,std::allocator<void>,boost::asio::detail::scheduler_operation>::ptr *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 348: range 000000000BEF469A-000000000BEF46B3
boost::asio::io_context *__cdecl boost::asio::io_context::service::get_io_context(
        boost::asio::io_context::service *const this)
{
  return (boost::asio::io_context *)boost::asio::execution_context::service::context(this);
};
