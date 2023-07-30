// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/strand_service.ipp

// Line 33: range 000000000C64E72E-000000000C64E8E5
void __cdecl boost::asio::detail::strand_service::on_do_complete_exit::~on_do_complete_exit(
        boost::asio::detail::strand_service::on_do_complete_exit *const this)
{
  bool v1; // cl
  boost::asio::detail::strand_service::strand_impl *impl; // rax
  char v3; // di
  boost::asio::detail::io_context_impl *owner; // rax
  bool more_handlers; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->impl_);
  boost::asio::detail::posix_mutex::lock(&this->impl_->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->impl_);
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::scheduler_operation>(
    &this->impl_->ready_queue_,
    &this->impl_->waiting_queue_);
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->impl_);
  v1 = boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::empty(&this->impl_->ready_queue_);
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->impl_);
  impl = this->impl_;
  v3 = !v1;
  if ( *(char *)(((unsigned __int64)&impl->locked_ >> 3) + 0x7FFF8000) < 0 )
  {
    v3 = (_BYTE)impl + 64;
    impl = (boost::asio::detail::strand_service::strand_impl *)__asan_report_store1(&impl->locked_);
  }
  impl->locked_ = v3;
  more_handlers = impl->locked_;
  boost::asio::detail::posix_mutex::unlock(&this->impl_->mutex_);
  if ( more_handlers )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    owner = this->owner_;
    if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
      owner = (boost::asio::detail::io_context_impl *)__asan_report_load8(&this->impl_);
    boost::asio::detail::scheduler::post_immediate_completion(owner, this->impl_, 1);
  }
};

// Line 45: range 000000000C64E960-000000000C64EA8A
void __cdecl boost::asio::detail::strand_service::strand_service(
        boost::asio::detail::strand_service *const this,
        boost::asio::io_context *io_context)
{
  int (**v2)(...); // rdx
  boost::asio::detail::io_context_impl *v3; // rax
  __int64 v4; // rbx
  boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl> *implementations; // r12

  boost::asio::detail::service_base<boost::asio::detail::strand_service>::service_base(this, io_context);
  v2 = (int (**)(...))(&`vtable for'boost::asio::detail::strand_service + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v2;
  v3 = boost::asio::use_service<boost::asio::detail::scheduler>(io_context);
  if ( *(_BYTE *)(((unsigned __int64)&this->io_context_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->io_context_ = v3;
  boost::asio::detail::posix_mutex::posix_mutex(&this->mutex_);
  v4 = 192LL;
  implementations = this->implementations_;
  while ( v4 >= 0 )
  {
    boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl>::scoped_ptr(
      implementations++,
      0LL);
    --v4;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->salt_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->salt_ = 0LL;
};

// Line 54: range 000000000C64EA8C-000000000C64EC62
void __cdecl boost::asio::detail::strand_service::shutdown(boost::asio::detail::strand_service *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::size_t i; // [rsp+10h] [rbp-90h]
  boost::asio::detail::strand_service::strand_impl *impl; // [rsp+18h] [rbp-88h]
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 6 ops:55 64 16 7 lock:57";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::strand_service::shutdown;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v1 + 32));
  boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::scoped_lock(
    (boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const)(v1 + 64),
    &this->mutex_);
  for ( i = 0LL; i <= 0xC0; ++i )
  {
    impl = boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl>::get(&this->implementations_[i]);
    if ( impl )
    {
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::scheduler_operation>(
        (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v1 + 32),
        &impl->waiting_queue_);
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::scheduler_operation>(
        (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v1 + 32),
        &impl->ready_queue_);
    }
  }
  boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::~scoped_lock((boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const)(v1 + 64));
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 70: range 000000000C64EC64-000000000C64EF13
void __cdecl boost::asio::detail::strand_service::construct(
        boost::asio::detail::strand_service *const this,
        boost::asio::detail::strand_service::implementation_type *impl)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::size_t salt; // rax
  boost::asio::detail::strand_service::strand_impl *v6; // rdx
  boost::asio::detail::strand_service::strand_impl *p; // [rsp+8h] [rbp-98h]
  unsigned __int64 index; // [rsp+28h] [rbp-78h]
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 lock:71";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::strand_service::construct;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::scoped_lock(
    (boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const)(v2 + 32),
    &this->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->salt_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->salt_);
  salt = this->salt_;
  this->salt_ = salt + 1;
  index = (((((unsigned __int64)impl + ((unsigned __int64)impl >> 3)) >> 2)
          + salt
          + (((_QWORD)impl + ((unsigned __int64)impl >> 3)) << 6)
          + 2654435769u) ^ ((unsigned __int64)impl + ((unsigned __int64)impl >> 3)))
        % 0xC1;
  if ( !boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl>::get(&this->implementations_[index]) )
  {
    p = (boost::asio::detail::strand_service::strand_impl *)operator new(0x68uLL);
    boost::asio::detail::strand_service::strand_impl::strand_impl(p);
    boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl>::reset(
      &this->implementations_[index],
      p);
  }
  v6 = boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl>::get(&this->implementations_[index]);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *impl = v6;
  boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::~scoped_lock((boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 95: range 000000000C64EF14-000000000C64F225
bool __cdecl boost::asio::detail::strand_service::do_dispatch(
        boost::asio::detail::strand_service *const this,
        boost::asio::detail::strand_service::implementation_type *impl,
        boost::asio::detail::operation *op)
{
  boost::asio::detail::strand_service::implementation_type v3; // rax
  boost::asio::detail::strand_service::implementation_type v4; // rax
  boost::asio::detail::strand_service::implementation_type v6; // rax
  boost::asio::detail::strand_service::implementation_type v7; // rax
  boost::asio::detail::io_context_impl *io_context; // rcx
  bool can_dispatch; // [rsp+2Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)&this->io_context_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->io_context_);
  can_dispatch = boost::asio::detail::scheduler::can_dispatch(this->io_context_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_load8(impl);
  boost::asio::detail::posix_mutex::lock(&(*impl)->mutex_);
  if ( !can_dispatch )
    goto LABEL_36;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_load8(impl);
  v3 = *impl;
  if ( *(char *)(((unsigned __int64)&(*impl)->locked_ >> 3) + 0x7FFF8000) < 0 )
    v3 = (boost::asio::detail::strand_service::implementation_type)__asan_report_load1(&(*impl)->locked_);
  if ( !v3->locked_ )
  {
    v4 = *impl;
    if ( *(char *)(((unsigned __int64)&(*impl)->locked_ >> 3) + 0x7FFF8000) < 0 )
      v4 = (boost::asio::detail::strand_service::implementation_type)__asan_report_store1(&(*impl)->locked_);
    v4->locked_ = 1;
    boost::asio::detail::posix_mutex::unlock(&(*impl)->mutex_);
    return 1;
  }
  else
  {
LABEL_36:
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
      __asan_report_load8(impl);
    v6 = *impl;
    if ( *(char *)(((unsigned __int64)&(*impl)->locked_ >> 3) + 0x7FFF8000) < 0 )
      v6 = (boost::asio::detail::strand_service::implementation_type)__asan_report_load1(&(*impl)->locked_);
    if ( v6->locked_ )
    {
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(&(*impl)->waiting_queue_, op);
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
        __asan_report_load8(impl);
      boost::asio::detail::posix_mutex::unlock(&(*impl)->mutex_);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
        __asan_report_load8(impl);
      v7 = *impl;
      if ( *(char *)(((unsigned __int64)&(*impl)->locked_ >> 3) + 0x7FFF8000) < 0 )
        v7 = (boost::asio::detail::strand_service::implementation_type)__asan_report_store1(&(*impl)->locked_);
      v7->locked_ = 1;
      boost::asio::detail::posix_mutex::unlock(&(*impl)->mutex_);
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
        __asan_report_load8(impl);
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(&(*impl)->ready_queue_, op);
      if ( *(_BYTE *)(((unsigned __int64)&this->io_context_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->io_context_);
      io_context = this->io_context_;
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
        __asan_report_load8(impl);
      boost::asio::detail::scheduler::post_immediate_completion(io_context, *impl, 0);
    }
    return 0;
  }
};

// Line 129: range 000000000C64F226-000000000C64F439
void __cdecl boost::asio::detail::strand_service::do_post(
        boost::asio::detail::strand_service *const this,
        boost::asio::detail::strand_service::implementation_type *impl,
        boost::asio::detail::operation *op,
        bool is_continuation)
{
  boost::asio::detail::strand_service::implementation_type v4; // rax
  boost::asio::detail::strand_service::implementation_type v5; // rax
  boost::asio::detail::io_context_impl *io_context; // rcx
  bool v7; // dl

  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_load8(impl);
  boost::asio::detail::posix_mutex::lock(&(*impl)->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    __asan_report_load8(impl);
  v4 = *impl;
  if ( *(char *)(((unsigned __int64)&(*impl)->locked_ >> 3) + 0x7FFF8000) < 0 )
    v4 = (boost::asio::detail::strand_service::implementation_type)__asan_report_load1(&(*impl)->locked_);
  if ( v4->locked_ )
  {
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(&(*impl)->waiting_queue_, op);
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
      __asan_report_load8(impl);
    boost::asio::detail::posix_mutex::unlock(&(*impl)->mutex_);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
      __asan_report_load8(impl);
    v5 = *impl;
    if ( *(char *)(((unsigned __int64)&(*impl)->locked_ >> 3) + 0x7FFF8000) < 0 )
      v5 = (boost::asio::detail::strand_service::implementation_type)__asan_report_store1(&(*impl)->locked_);
    v5->locked_ = 1;
    boost::asio::detail::posix_mutex::unlock(&(*impl)->mutex_);
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
      __asan_report_load8(impl);
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(&(*impl)->ready_queue_, op);
    if ( *(_BYTE *)(((unsigned __int64)&this->io_context_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->io_context_);
    io_context = this->io_context_;
    v7 = is_continuation;
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
      __asan_report_load8(impl);
    boost::asio::detail::scheduler::post_immediate_completion(io_context, *impl, v7);
  }
};

// Line 150: range 000000000C64F43A-000000000C64F62C
void __cdecl boost::asio::detail::strand_service::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *ec,
        std::size_t a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  boost::asio::detail::operation *o; // [rsp+28h] [rbp-A8h]
  char v9[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 11 on_exit:159 64 24 7 ctx:156";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::strand_service::do_complete;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  if ( owner )
  {
    boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context::context(
      (boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *const)(v4 + 64),
      (boost::asio::detail::strand_service::strand_impl *)base);
    *(_QWORD *)(v4 + 32) = owner;
    *(_QWORD *)(v4 + 40) = base;
    while ( 1 )
    {
      o = boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::front((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)&base[3].task_result_);
      if ( !o )
        break;
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::pop((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)&base[3].task_result_);
      boost::asio::detail::scheduler_operation::complete(o, owner, ec, 0LL);
    }
    boost::asio::detail::strand_service::on_do_complete_exit::~on_do_complete_exit((boost::asio::detail::strand_service::on_do_complete_exit *const)(v4 + 32));
    boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context::~context((boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context *const)(v4 + 64));
  }
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
