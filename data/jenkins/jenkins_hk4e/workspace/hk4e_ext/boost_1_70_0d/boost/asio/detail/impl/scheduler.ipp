// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/scheduler.ipp

// Line 37: range 000000000C64821E-000000000C64825C
void __cdecl boost::asio::detail::scheduler::thread_function::thread_function(
        boost::asio::detail::scheduler::thread_function *const this,
        boost::asio::detail::scheduler *s)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->this_ = s;
};

// Line 42: range 000000000C64825E-000000000C648358
void __cdecl boost::asio::detail::scheduler::thread_function::operator()(
        boost::asio::detail::scheduler::thread_function *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = v1 + 64;
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 5 ec:44";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::scheduler::thread_function::operator();
  v4 = v1 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v1 + 32) = 0;
  *(_BYTE *)(v1 + 36) = 0;
  *(_QWORD *)(v1 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this);
  boost::asio::detail::scheduler::run(this->this_, (boost::system::error_code *)(v3 - 32));
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

// Line 54: range 000000000C64835A-000000000C6485A5
void __cdecl boost::asio::detail::scheduler::task_cleanup::~task_cleanup(
        boost::asio::detail::scheduler::task_cleanup *const this)
{
  boost::asio::detail::scheduler::thread_info *this_thread; // rax
  boost::asio::detail::scheduler::thread_info *v2; // rax
  __int64 private_outstanding_work; // rax
  boost::asio::detail::scheduler::thread_info *v4; // rax
  boost::asio::detail::scheduler *scheduler; // rax
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *p_op_queue; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->this_thread_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->this_thread_);
  this_thread = this->this_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&this_thread->private_outstanding_work >> 3) + 0x7FFF8000) )
    this_thread = (boost::asio::detail::scheduler::thread_info *)__asan_report_load8(&this_thread->private_outstanding_work);
  if ( this_thread->private_outstanding_work > 0 )
  {
    v2 = this->this_thread_;
    if ( *(_BYTE *)(((unsigned __int64)&v2->private_outstanding_work >> 3) + 0x7FFF8000) )
      v2 = (boost::asio::detail::scheduler::thread_info *)__asan_report_load8(&v2->private_outstanding_work);
    private_outstanding_work = v2->private_outstanding_work;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      private_outstanding_work = __asan_report_load8(this);
    boost::asio::detail::increment(&this->scheduler_->outstanding_work_, private_outstanding_work);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->this_thread_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->this_thread_);
  v4 = this->this_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&v4->private_outstanding_work >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v4->private_outstanding_work = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->lock_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->lock_);
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::lock(this->lock_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  scheduler = this->scheduler_;
  if ( *(char *)(((unsigned __int64)&this->scheduler_->task_interrupted_ >> 3) + 0x7FFF8000) < 0 )
    scheduler = (boost::asio::detail::scheduler *)__asan_report_store1(&this->scheduler_->task_interrupted_);
  scheduler->task_interrupted_ = 1;
  p_op_queue = &this->scheduler_->op_queue_;
  if ( *(_BYTE *)(((unsigned __int64)&this->this_thread_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->this_thread_);
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::scheduler_operation>(
    p_op_queue,
    &this->this_thread_->private_op_queue);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(
    &this->scheduler_->op_queue_,
    &this->scheduler_->task_operation_);
};

// Line 79: range 000000000C6485A6-000000000C648817
void __cdecl boost::asio::detail::scheduler::work_cleanup::~work_cleanup(
        boost::asio::detail::scheduler::work_cleanup *const this)
{
  boost::asio::detail::scheduler::thread_info *this_thread; // rax
  boost::asio::detail::scheduler::thread_info *v2; // rax
  __int64 v3; // rdx
  boost::asio::detail::scheduler::thread_info *v4; // rax
  boost::asio::detail::scheduler::thread_info *v5; // rax
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *p_op_queue; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->this_thread_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->this_thread_);
  this_thread = this->this_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&this_thread->private_outstanding_work >> 3) + 0x7FFF8000) )
    this_thread = (boost::asio::detail::scheduler::thread_info *)__asan_report_load8(&this_thread->private_outstanding_work);
  if ( this_thread->private_outstanding_work <= 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->this_thread_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->this_thread_);
    v4 = this->this_thread_;
    if ( *(_BYTE *)(((unsigned __int64)&v4->private_outstanding_work >> 3) + 0x7FFF8000) )
      v4 = (boost::asio::detail::scheduler::thread_info *)__asan_report_load8(&v4->private_outstanding_work);
    if ( v4->private_outstanding_work <= 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      boost::asio::detail::scheduler::work_finished(this->scheduler_);
    }
  }
  else
  {
    v2 = this->this_thread_;
    if ( *(_BYTE *)(((unsigned __int64)&v2->private_outstanding_work >> 3) + 0x7FFF8000) )
      v2 = (boost::asio::detail::scheduler::thread_info *)__asan_report_load8(&v2->private_outstanding_work);
    v3 = v2->private_outstanding_work - 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::increment(&this->scheduler_->outstanding_work_, v3);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->this_thread_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->this_thread_);
  v5 = this->this_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->private_outstanding_work >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v5->private_outstanding_work = 0LL;
  if ( !boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::empty(&this->this_thread_->private_op_queue) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->lock_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->lock_);
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::lock(this->lock_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    p_op_queue = &this->scheduler_->op_queue_;
    if ( *(_BYTE *)(((unsigned __int64)&this->this_thread_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->this_thread_);
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::scheduler_operation>(
      p_op_queue,
      &this->this_thread_->private_op_queue);
  }
};

// Line 107: range 000000000C6488AE-000000000C648E1F
void __cdecl boost::asio::detail::scheduler::scheduler(
        boost::asio::detail::scheduler *const this,
        boost::asio::execution_context *ctx,
        int concurrency_hint,
        bool own_thread)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  int (**v7)(...); // rdx
  bool v8; // si
  boost::asio::detail::thread *v9; // r13
  boost::asio::detail::scheduler::thread_function f; // [rsp+28h] [rbp-138h] BYREF
  char v13[304]; // [rsp+30h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 136 6 sb:130";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::scheduler::scheduler;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  v6[536862727] = -202116109;
  boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::execution_context_service_base(
    this,
    ctx);
  v7 = (int (**)(...))(&`vtable for'boost::asio::detail::scheduler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v7;
  v8 = concurrency_hint == 1
    || (concurrency_hint & 0xFFFF0001) == -1525678080
    || (concurrency_hint & 0xFFFF0004) == -1525678080;
  if ( *(char *)(((unsigned __int64)&this->one_thread_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->one_thread_);
  this->one_thread_ = v8;
  boost::asio::detail::conditionally_enabled_mutex::conditionally_enabled_mutex(
    &this->mutex_,
    (concurrency_hint & 0xFFFF0001) != -1525678080);
  boost::asio::detail::conditionally_enabled_event::conditionally_enabled_event(&this->wakeup_event_);
  if ( *(_BYTE *)(((unsigned __int64)&this->task_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->task_ = 0LL;
  boost::asio::detail::scheduler::task_operation::task_operation(&this->task_operation_);
  if ( *(char *)(((unsigned __int64)&this->task_interrupted_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->task_interrupted_);
  this->task_interrupted_ = 1;
  std::atomic<long>::atomic(&this->outstanding_work_, 0LL);
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue(&this->op_queue_);
  if ( *(char *)(((unsigned __int64)&this->stopped_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->stopped_);
  this->stopped_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shutdown_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 23) & 7) >= *(_BYTE *)(((unsigned __int64)&this->shutdown_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->shutdown_);
  }
  this->shutdown_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->concurrency_hint_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->concurrency_hint_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->concurrency_hint_);
  }
  this->concurrency_hint_ = concurrency_hint;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->thread_ = 0LL;
  if ( own_thread )
  {
    std::__atomic_base<long>::operator++(&this->outstanding_work_);
    boost::asio::detail::posix_signal_blocker::posix_signal_blocker((boost::asio::detail::posix_signal_blocker *const)(v4 + 48));
    boost::asio::detail::scheduler::thread_function::thread_function(&f, this);
    v9 = (boost::asio::detail::thread *)operator new(0x10uLL);
    boost::asio::detail::posix_thread::posix_thread<boost::asio::detail::scheduler::thread_function>(v9, f, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->thread_ = v9;
    boost::asio::detail::posix_signal_blocker::~posix_signal_blocker((boost::asio::detail::posix_signal_blocker *const)(v4 + 48));
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 135: range 000000000C648E20-000000000C648F4D
void __cdecl boost::asio::detail::scheduler::~scheduler(boost::asio::detail::scheduler *const this)
{
  int (**v1)(...); // rdx
  boost::asio::detail::thread *thread; // rbx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::scheduler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->thread_);
  if ( this->thread_ )
  {
    boost::asio::detail::posix_thread::join(this->thread_);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->thread_);
    thread = this->thread_;
    if ( thread )
    {
      boost::asio::detail::posix_thread::~posix_thread(this->thread_);
      operator delete(thread, 0x10uLL);
    }
  }
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue(&this->op_queue_);
  boost::asio::detail::scheduler::task_operation::~task_operation(&this->task_operation_);
  boost::asio::detail::conditionally_enabled_event::~conditionally_enabled_event(&this->wakeup_event_);
  boost::asio::detail::conditionally_enabled_mutex::~conditionally_enabled_mutex(&this->mutex_);
  boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::~execution_context_service_base(this);
};

// Line 135: range 000000000C648F4E-000000000C648F78
void __cdecl boost::asio::detail::scheduler::~scheduler(boost::asio::detail::scheduler *const this)
{
  boost::asio::detail::scheduler::~scheduler(this);
  operator delete(this, 0xF8uLL);
};

// Line 145: range 000000000C648F7A-000000000C6492AF
void __cdecl boost::asio::detail::scheduler::shutdown(boost::asio::detail::scheduler *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::thread *thread; // r14
  boost::asio::detail::scheduler::operation *o; // [rsp+18h] [rbp-78h]
  char v6[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 lock:146";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::scheduler::shutdown;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32),
    &this->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->shutdown_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 23) & 7) >= *(_BYTE *)(((unsigned __int64)&this->shutdown_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->shutdown_);
  }
  this->shutdown_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->thread_);
  if ( this->thread_ )
    boost::asio::detail::scheduler::stop_all_threads(
      this,
      (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *)(v1 + 32));
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->thread_);
  if ( this->thread_ )
  {
    boost::asio::detail::posix_thread::join(this->thread_);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->thread_);
    thread = this->thread_;
    if ( thread )
    {
      boost::asio::detail::posix_thread::~posix_thread(this->thread_);
      operator delete(thread, 0x10uLL);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->thread_ = 0LL;
  }
  while ( !boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::empty(&this->op_queue_) )
  {
    o = boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::front(&this->op_queue_);
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::pop(&this->op_queue_);
    if ( o != &this->task_operation_ )
      boost::asio::detail::scheduler_operation::destroy(o);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->task_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->task_ = 0LL;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 174: range 000000000C6492B0-000000000C6494A6
void __cdecl boost::asio::detail::scheduler::init_task(boost::asio::detail::scheduler *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::execution_context *v4; // rax
  boost::asio::detail::reactor *v5; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 lock:175";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::scheduler::init_task;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32),
    &this->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->shutdown_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 23) & 7) >= *(_BYTE *)(((unsigned __int64)&this->shutdown_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->shutdown_);
  }
  if ( !this->shutdown_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->task_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->task_);
    if ( !this->task_ )
    {
      v4 = boost::asio::execution_context::service::context(this);
      v5 = boost::asio::use_service<boost::asio::detail::epoll_reactor>(v4);
      if ( *(_BYTE *)(((unsigned __int64)&this->task_ >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->task_ = v5;
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(
        &this->op_queue_,
        &this->task_operation_);
      boost::asio::detail::scheduler::wake_one_thread_and_unlock(
        this,
        (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *)(v1 + 32));
    }
  }
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 185: range 000000000C649500-000000000C649808
std::size_t __cdecl boost::asio::detail::scheduler::run(
        boost::asio::detail::scheduler *const this,
        boost::system::error_code *ec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const boost::system::error_category *v5; // rdx
  std::size_t v6; // r14
  std::size_t result; // rax
  std::size_t n; // [rsp+18h] [rbp-118h]
  char v9[272]; // [rsp+20h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 8 lock:197 80 24 7 ctx:195 144 48 15 this_thread:193";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::scheduler::run;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  boost::system::error_code::error_code((boost::system::error_code *const)(v2 + 48));
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_store16(ec);
  v5 = *(const boost::system::error_category **)(v2 + 56);
  *(_QWORD *)&ec->val_ = *(_QWORD *)(v2 + 48);
  ec->cat_ = v5;
  if ( std::__atomic_base<long>::operator long(&this->outstanding_work_) )
  {
    boost::asio::detail::scheduler_thread_info::scheduler_thread_info((boost::asio::detail::scheduler_thread_info *const)(v2 + 144));
    *(_QWORD *)(v2 + 184) = 0LL;
    boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context::context(
      (boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context *const)(v2 + 80),
      (boost::asio::detail::thread_context *)this,
      (boost::asio::detail::thread_info_base *)(v2 + 144));
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
      (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 48),
      &this->mutex_);
    n = 0LL;
    while ( boost::asio::detail::scheduler::do_run_one(
              this,
              (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *)(v2 + 48),
              (boost::asio::detail::scheduler::thread_info *)(v2 + 144),
              ec) )
    {
      if ( n != std::numeric_limits<unsigned long>::max() )
        ++n;
      boost::asio::detail::conditionally_enabled_mutex::scoped_lock::lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 48));
    }
    v6 = n;
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 48));
    boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context::~context((boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context *const)(v2 + 80));
    boost::asio::detail::scheduler_thread_info::~scheduler_thread_info((boost::asio::detail::scheduler_thread_info *const)(v2 + 144));
  }
  else
  {
    boost::asio::detail::scheduler::stop(this);
    v6 = 0LL;
  }
  result = v6;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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
  return result;
};

// Line 301: range 000000000C64980A-000000000C649912
void __cdecl boost::asio::detail::scheduler::stop(boost::asio::detail::scheduler *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 lock:302";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::scheduler::stop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32),
    &this->mutex_);
  boost::asio::detail::scheduler::stop_all_threads(
    this,
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *)(v1 + 32));
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 319: range 000000000C649914-000000000C64996B
void __cdecl boost::asio::detail::scheduler::compensating_work_started(boost::asio::detail::scheduler *const this)
{
  boost::asio::detail::thread_info_base *this_thread; // [rsp+18h] [rbp-8h]

  this_thread = boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::contains((boost::asio::detail::thread_context *)this);
  if ( *(_BYTE *)(((unsigned __int64)&this_thread[1].reusable_memory_[2] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this_thread[1].reusable_memory_[2]);
  ++this_thread[1].reusable_memory_[2];
};

// Line 326: range 000000000C64996C-000000000C649B56
void __cdecl boost::asio::detail::scheduler::post_immediate_completion(
        boost::asio::detail::scheduler *const this,
        boost::asio::detail::scheduler::operation *op,
        bool is_continuation)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::asio::detail::thread_info_base *this_thread; // [rsp+28h] [rbp-68h]
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 8 lock:342";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::scheduler::post_immediate_completion;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->one_thread_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->one_thread_);
  if ( (this->one_thread_ || is_continuation)
    && (this_thread = boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::contains((boost::asio::detail::thread_context *)this)) != 0LL )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this_thread[1].reusable_memory_[2] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this_thread[1].reusable_memory_[2]);
    ++this_thread[1].reusable_memory_[2];
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(
      (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)&this_thread[1],
      op);
  }
  else
  {
    boost::asio::detail::scheduler::work_started(this);
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
      (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 32),
      &this->mutex_);
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(&this->op_queue_, op);
    boost::asio::detail::scheduler::wake_one_thread_and_unlock(
      this,
      (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *)(v3 + 32));
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 32));
  }
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 367: range 000000000C649B58-000000000C649D03
void __cdecl boost::asio::detail::scheduler::post_deferred_completions(
        boost::asio::detail::scheduler *const this,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::asio::detail::thread_info_base *this_thread; // [rsp+18h] [rbp-68h]
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 lock:381";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::scheduler::post_deferred_completions;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( !boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::empty(ops) )
  {
    if ( *(char *)(((unsigned __int64)&this->one_thread_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->one_thread_);
    if ( this->one_thread_
      && (this_thread = boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::contains((boost::asio::detail::thread_context *)this)) != 0LL )
    {
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::scheduler_operation>(
        (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)&this_thread[1],
        ops);
    }
    else
    {
      boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
        (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 32),
        &this->mutex_);
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::scheduler_operation>(
        &this->op_queue_,
        ops);
      boost::asio::detail::scheduler::wake_one_thread_and_unlock(
        this,
        (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *)(v2 + 32));
      boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 32));
    }
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 398: range 000000000C649D04-000000000C649E05
void __cdecl boost::asio::detail::scheduler::abandon_operations(
        boost::asio::detail::scheduler *const this,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 ops2:399";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::scheduler::abandon_operations;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v2 + 32));
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::scheduler_operation>(
    (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v2 + 32),
    ops);
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 406: range 000000000C649E06-000000000C64A2DD
std::size_t __cdecl boost::asio::detail::scheduler::do_run_one(
        boost::asio::detail::scheduler *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock,
        boost::asio::detail::scheduler::thread_info *this_thread,
        const boost::system::error_code *ec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rcx
  std::size_t v8; // r14
  std::size_t result; // rax
  bool more_handlers; // [rsp+2Fh] [rbp-A1h]
  boost::asio::detail::scheduler_operation *o; // [rsp+30h] [rbp-A0h]
  std::size_t task_result; // [rsp+38h] [rbp-98h]
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 11 on_exit:443";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::scheduler::do_run_one;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(char *)(((unsigned __int64)&this->stopped_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->stopped_);
      if ( this->stopped_ )
      {
        v8 = 0LL;
        goto LABEL_35;
      }
      if ( !boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::empty(&this->op_queue_) )
        break;
      boost::asio::detail::conditionally_enabled_event::clear(&this->wakeup_event_, lock);
      boost::asio::detail::conditionally_enabled_event::wait(&this->wakeup_event_, lock);
    }
    o = boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::front(&this->op_queue_);
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::pop(&this->op_queue_);
    more_handlers = !boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::empty(&this->op_queue_);
    if ( o != &this->task_operation_ )
      break;
    if ( *(char *)(((unsigned __int64)&this->task_interrupted_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->task_interrupted_);
    this->task_interrupted_ = more_handlers;
    if ( !more_handlers )
      goto LABEL_17;
    if ( *(char *)(((unsigned __int64)&this->one_thread_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->one_thread_);
    if ( !this->one_thread_ )
      boost::asio::detail::conditionally_enabled_event::unlock_and_signal_one(&this->wakeup_event_, lock);
    else
LABEL_17:
      boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock(lock);
    *(_QWORD *)(v4 + 32) = this;
    *(_QWORD *)(v4 + 40) = lock;
    *(_QWORD *)(v4 + 48) = this_thread;
    if ( *(_BYTE *)(((unsigned __int64)&this->task_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->task_);
    if ( more_handlers )
      v7 = 0LL;
    else
      v7 = -1LL;
    boost::asio::detail::epoll_reactor::run(this->task_, v7, &this_thread->private_op_queue);
    boost::asio::detail::scheduler::task_cleanup::~task_cleanup((boost::asio::detail::scheduler::task_cleanup *const)(v4 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&o->task_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&o->task_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&o->task_result_);
  }
  task_result = o->task_result_;
  if ( !more_handlers )
    goto LABEL_31;
  if ( *(char *)(((unsigned __int64)&this->one_thread_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->one_thread_);
  if ( !this->one_thread_ )
    boost::asio::detail::scheduler::wake_one_thread_and_unlock(this, lock);
  else
LABEL_31:
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock(lock);
  *(_QWORD *)(v4 + 32) = this;
  *(_QWORD *)(v4 + 40) = lock;
  *(_QWORD *)(v4 + 48) = this_thread;
  boost::asio::detail::scheduler_operation::complete(o, this, ec, task_result);
  v8 = 1LL;
  boost::asio::detail::scheduler::work_cleanup::~work_cleanup((boost::asio::detail::scheduler::work_cleanup *const)(v4 + 32));
LABEL_35:
  result = v8;
  if ( v15 == (char *)v4 )
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

// Line 588: range 000000000C64A2DE-000000000C64A3E3
void __cdecl boost::asio::detail::scheduler::stop_all_threads(
        boost::asio::detail::scheduler *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  if ( *(char *)(((unsigned __int64)&this->stopped_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->stopped_);
  this->stopped_ = 1;
  boost::asio::detail::conditionally_enabled_event::signal_all(&this->wakeup_event_, lock);
  if ( *(char *)(((unsigned __int64)&this->task_interrupted_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->task_interrupted_);
  if ( !this->task_interrupted_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->task_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->task_);
    if ( this->task_ )
    {
      this->task_interrupted_ = 1;
      boost::asio::detail::epoll_reactor::interrupt(this->task_);
    }
  }
};

// Line 601: range 000000000C64A3E4-000000000C64A4C0
void __cdecl boost::asio::detail::scheduler::wake_one_thread_and_unlock(
        boost::asio::detail::scheduler *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  if ( !boost::asio::detail::conditionally_enabled_event::maybe_unlock_and_signal_one(&this->wakeup_event_, lock) )
  {
    if ( *(char *)(((unsigned __int64)&this->task_interrupted_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->task_interrupted_);
    if ( !this->task_interrupted_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->task_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->task_);
      if ( this->task_ )
      {
        this->task_interrupted_ = 1;
        boost::asio::detail::epoll_reactor::interrupt(this->task_);
      }
    }
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock(lock);
  }
};
