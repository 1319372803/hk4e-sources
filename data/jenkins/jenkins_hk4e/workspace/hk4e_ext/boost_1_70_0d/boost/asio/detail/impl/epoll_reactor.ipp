// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/epoll_reactor.ipp

// Line 38: range 000000000C643C66-000000000C6440B2
void __cdecl boost::asio::detail::epoll_reactor::epoll_reactor(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::execution_context *ctx)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int (**v5)(...); // rdx
  boost::asio::detail::scheduler *v6; // rax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  bool v10; // al
  int descriptor; // esi
  int timer_fd; // edx
  char v13[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 5 ev:50";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::epoll_reactor::epoll_reactor;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::execution_context_service_base(
    this,
    ctx);
  v5 = (int (**)(...))(&`vtable for'boost::asio::detail::epoll_reactor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v5;
  v6 = boost::asio::use_service<boost::asio::detail::scheduler>(ctx);
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->scheduler_ = v6;
  v7 = boost::asio::detail::scheduler::concurrency_hint(this->scheduler_);
  boost::asio::detail::conditionally_enabled_mutex::conditionally_enabled_mutex(
    &this->mutex_,
    (v7 & 0xFFFF0002) != -1525678080);
  boost::asio::detail::eventfd_select_interrupter::eventfd_select_interrupter(&this->interrupter_);
  v8 = boost::asio::detail::epoll_reactor::do_epoll_create();
  if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->epoll_fd_);
  }
  this->epoll_fd_ = v8;
  v9 = boost::asio::detail::epoll_reactor::do_timerfd_create();
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->timer_fd_);
  }
  this->timer_fd_ = v9;
  boost::asio::detail::timer_queue_set::timer_queue_set(&this->timer_queues_);
  if ( *(char *)(((unsigned __int64)&this->shutdown_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->shutdown_);
  this->shutdown_ = 0;
  v10 = boost::asio::detail::conditionally_enabled_mutex::enabled(&this->mutex_);
  boost::asio::detail::conditionally_enabled_mutex::conditionally_enabled_mutex(
    &this->registered_descriptors_mutex_,
    v10);
  boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::object_pool(&this->registered_descriptors_);
  *(_DWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 36) = 0LL;
  *(_DWORD *)(v2 + 32) = -2147483639;
  *(_QWORD *)(v2 + 36) = &this->interrupter_;
  descriptor = boost::asio::detail::eventfd_select_interrupter::read_descriptor(&this->interrupter_);
  if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->epoll_fd_);
  }
  epoll_ctl(this->epoll_fd_, 1, descriptor, (struct epoll_event *)(v2 + 32));
  boost::asio::detail::eventfd_select_interrupter::interrupt(&this->interrupter_);
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->timer_fd_);
  }
  if ( this->timer_fd_ != -1 )
  {
    *(_DWORD *)(v2 + 32) = 9;
    *(_QWORD *)(v2 + 36) = &this->timer_fd_;
    timer_fd = this->timer_fd_;
    if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->epoll_fd_);
    }
    epoll_ctl(this->epoll_fd_, 1, timer_fd, (struct epoll_event *)(v2 + 32));
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 65: range 000000000C6440B4-000000000C6441E7
void __cdecl boost::asio::detail::epoll_reactor::~epoll_reactor(boost::asio::detail::epoll_reactor *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::epoll_reactor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->epoll_fd_);
  }
  if ( this->epoll_fd_ != -1 )
    close(this->epoll_fd_);
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->timer_fd_);
  }
  if ( this->timer_fd_ != -1 )
    close(this->timer_fd_);
  boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::~object_pool(&this->registered_descriptors_);
  boost::asio::detail::conditionally_enabled_mutex::~conditionally_enabled_mutex(&this->registered_descriptors_mutex_);
  boost::asio::detail::eventfd_select_interrupter::~eventfd_select_interrupter(&this->interrupter_);
  boost::asio::detail::conditionally_enabled_mutex::~conditionally_enabled_mutex(&this->mutex_);
  boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::~execution_context_service_base(this);
};

// Line 65: range 000000000C6441E8-000000000C644212
void __cdecl boost::asio::detail::epoll_reactor::~epoll_reactor(boost::asio::detail::epoll_reactor *const this)
{
  boost::asio::detail::epoll_reactor::~epoll_reactor(this);
  operator delete(this, 0xD0uLL);
};

// Line 74: range 000000000C644214-000000000C6444E6
void __cdecl boost::asio::detail::epoll_reactor::shutdown(boost::asio::detail::epoll_reactor *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int i; // [rsp+14h] [rbp-8Ch]
  boost::asio::detail::epoll_reactor::descriptor_state *state; // [rsp+18h] [rbp-88h]
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 7 lock:75 64 16 6 ops:79";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::epoll_reactor::shutdown;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32),
    &this->mutex_);
  if ( *(char *)(((unsigned __int64)&this->shutdown_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->shutdown_);
  this->shutdown_ = 1;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32));
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v1 + 64));
  while ( 1 )
  {
    state = boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::first(&this->registered_descriptors_);
    if ( !state )
      break;
    for ( i = 0; i <= 2; ++i )
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::reactor_op>(
        (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v1 + 64),
        &state->op_queue_[i]);
    if ( *(_BYTE *)(((unsigned __int64)&state->shutdown_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)state - 93) & 7) >= *(_BYTE *)(((unsigned __int64)&state->shutdown_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&state->shutdown_);
    }
    state->shutdown_ = 1;
    boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::free(
      &this->registered_descriptors_,
      state);
  }
  boost::asio::detail::timer_queue_set::get_all_timers(
    &this->timer_queues_,
    (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  boost::asio::detail::scheduler::abandon_operations(
    this->scheduler_,
    (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v1 + 64));
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v1 + 64));
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32));
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

// Line 96: range 000000000C6444E8-000000000C644B69
void __cdecl boost::asio::detail::epoll_reactor::notify_fork(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::execution_context::fork_event fork_ev)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // edx
  int v6; // ecx
  int descriptor; // esi
  int timer_fd; // edx
  int v9; // edx
  const boost::system::error_category *system_category; // r14
  int *v11; // rax
  int *v12; // rdx
  boost::asio::detail::epoll_reactor::descriptor_state *state; // [rsp+18h] [rbp-B8h]
  char v14[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 12 6 ev:112 64 16 20 descriptors_lock:129 96 16 6 ec:138";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::epoll_reactor::notify_fork;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( fork_ev == fork_child )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->epoll_fd_);
    }
    if ( this->epoll_fd_ != -1 )
      close(this->epoll_fd_);
    if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->epoll_fd_);
    }
    this->epoll_fd_ = -1;
    v5 = boost::asio::detail::epoll_reactor::do_epoll_create();
    if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->epoll_fd_);
    }
    this->epoll_fd_ = v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->timer_fd_);
    }
    if ( this->timer_fd_ != -1 )
      close(this->timer_fd_);
    if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->timer_fd_);
    }
    this->timer_fd_ = -1;
    v6 = boost::asio::detail::epoll_reactor::do_timerfd_create();
    if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->timer_fd_);
    }
    this->timer_fd_ = v6;
    boost::asio::detail::eventfd_select_interrupter::recreate(&this->interrupter_);
    *(_DWORD *)(v2 + 32) = 0;
    *(_QWORD *)(v2 + 36) = 0LL;
    *(_DWORD *)(v2 + 32) = -2147483639;
    *(_QWORD *)(v2 + 36) = &this->interrupter_;
    descriptor = boost::asio::detail::eventfd_select_interrupter::read_descriptor(&this->interrupter_);
    if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->epoll_fd_);
    }
    epoll_ctl(this->epoll_fd_, 1, descriptor, (struct epoll_event *)(v2 + 32));
    boost::asio::detail::eventfd_select_interrupter::interrupt(&this->interrupter_);
    if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->timer_fd_);
    }
    if ( this->timer_fd_ != -1 )
    {
      *(_DWORD *)(v2 + 32) = 9;
      *(_QWORD *)(v2 + 36) = &this->timer_fd_;
      timer_fd = this->timer_fd_;
      if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->epoll_fd_);
      }
      epoll_ctl(this->epoll_fd_, 1, timer_fd, (struct epoll_event *)(v2 + 32));
    }
    boost::asio::detail::epoll_reactor::update_timeout(this);
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
      (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 64),
      &this->registered_descriptors_mutex_);
    for ( state = boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::first(&this->registered_descriptors_);
          state;
          state = state->next_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&state->registered_events_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)state + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&state->registered_events_ >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&state->registered_events_);
      }
      *(_DWORD *)(v2 + 32) = state->registered_events_;
      *(_QWORD *)(v2 + 36) = state;
      if ( *(_BYTE *)(((unsigned __int64)&state->descriptor_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&state->descriptor_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&state->descriptor_);
      }
      v9 = state->descriptor_;
      if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->epoll_fd_);
      }
      if ( epoll_ctl(this->epoll_fd_, 1, v9, (struct epoll_event *)(v2 + 32)) )
      {
        system_category = boost::asio::error::get_system_category();
        v11 = __errno_location();
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        boost::system::error_code::error_code((boost::system::error_code *const)(v2 + 96), *v12, system_category);
        boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 96), "epoll re-registration");
      }
      if ( *(_BYTE *)(((unsigned __int64)&state->next_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&state->next_);
    }
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 64));
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 147: range 000000000C644B6A-000000000C644BAD
void __cdecl boost::asio::detail::epoll_reactor::init_task(boost::asio::detail::epoll_reactor *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  boost::asio::detail::scheduler::init_task(this->scheduler_);
};

// Line 153: range 000000000C644BAE-000000000C645090
int __cdecl boost::asio::detail::epoll_reactor::register_descriptor(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::socket_type descriptor,
        boost::asio::detail::epoll_reactor::per_descriptor_data *descriptor_data)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  boost::asio::detail::epoll_reactor::descriptor_state *descriptor_state; // rdx
  boost::asio::detail::epoll_reactor::per_descriptor_data v7; // rax
  boost::asio::detail::epoll_reactor::per_descriptor_data v8; // rax
  char v9; // dl
  boost::asio::detail::epoll_reactor::per_descriptor_data v10; // rdx
  char v11; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v12; // rdx
  char v13; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v14; // rdx
  uint32_t v15; // esi
  char v16; // cl
  int *v17; // rax
  _DWORD *v18; // rdx
  boost::asio::detail::epoll_reactor::per_descriptor_data v19; // rdx
  char v20; // cl
  int result; // eax
  int *v22; // rax
  int *v23; // rdx
  int i; // [rsp+28h] [rbp-88h]
  char v27[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 6 ev:170 64 16 19 descriptor_lock:161";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::epoll_reactor::register_descriptor;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -202178560;
  descriptor_state = boost::asio::detail::epoll_reactor::allocate_descriptor_state(this);
  if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *descriptor_data = descriptor_state;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 64),
    &(*descriptor_data)->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
    __asan_report_load8(descriptor_data);
  v7 = *descriptor_data;
  if ( *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->reactor_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v7->reactor_ = this;
  v8 = *descriptor_data;
  v9 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->descriptor_ >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
    v8 = (boost::asio::detail::epoll_reactor::per_descriptor_data)__asan_report_store4(&(*descriptor_data)->descriptor_);
  v8->descriptor_ = descriptor;
  v10 = *descriptor_data;
  v11 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->shutdown_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && ((*(_BYTE *)descriptor_data - 93) & 7) >= v11 )
    __asan_report_store1(&(*descriptor_data)->shutdown_);
  v10->shutdown_ = 0;
  for ( i = 0; i <= 2; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
      __asan_report_load8(descriptor_data);
    v12 = *descriptor_data;
    v13 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->try_speculative_[i] >> 3) + 0x7FFF8000);
    if ( v13 != 0 && ((*(_BYTE *)descriptor_data + i - 96) & 7) >= v13 )
      __asan_report_store1(&(*descriptor_data)->try_speculative_[i]);
    v12->try_speculative_[i] = 1;
  }
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 64));
  *(_DWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 36) = 0LL;
  *(_DWORD *)(v3 + 32) = -2147483621;
  if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
    __asan_report_load8(descriptor_data);
  v14 = *descriptor_data;
  v15 = *(_DWORD *)(v3 + 32);
  v16 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v16 )
    __asan_report_store4(&(*descriptor_data)->registered_events_);
  v14->registered_events_ = v15;
  *(_QWORD *)(v3 + 36) = *descriptor_data;
  if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->epoll_fd_);
  }
  if ( epoll_ctl(this->epoll_fd_, 1, descriptor, (struct epoll_event *)(v3 + 32)) )
  {
    v17 = __errno_location();
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    if ( *v18 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
        __asan_report_load8(descriptor_data);
      v19 = *descriptor_data;
      v20 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v20 )
        __asan_report_store4(&(*descriptor_data)->registered_events_);
      v19->registered_events_ = 0;
      result = 0;
    }
    else
    {
      v22 = __errno_location();
      v23 = v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      result = *v23;
    }
  }
  else
  {
    result = 0;
  }
  if ( v27 == (char *)v3 )
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
  return result;
};

// Line 235: range 000000000C645092-000000000C645CAA
void __cdecl boost::asio::detail::epoll_reactor::start_op(
        boost::asio::detail::epoll_reactor *const this,
        int op_type,
        boost::asio::detail::socket_type descriptor,
        boost::asio::detail::epoll_reactor::per_descriptor_data *descriptor_data,
        boost::asio::detail::reactor_op *op,
        bool is_continuation,
        bool allow_speculative)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  boost::asio::detail::epoll_reactor::per_descriptor_data v10; // rdx
  char v11; // cl
  char v12; // al
  boost::asio::detail::epoll_reactor::per_descriptor_data v13; // rdx
  char v14; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v15; // rdx
  char v16; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v17; // rdx
  char v18; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v19; // rdx
  char v20; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v21; // rdx
  char v22; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v23; // rdx
  char v24; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v25; // rdx
  char v26; // cl
  uint32_t registered_events; // esi
  boost::asio::detail::epoll_reactor::per_descriptor_data v28; // rdx
  int v29; // esi
  char v30; // cl
  const boost::system::error_category *system_category; // r14
  int *v32; // rax
  int *v33; // rdx
  const boost::system::error_category *cat; // rdx
  boost::asio::detail::epoll_reactor::per_descriptor_data v35; // rdx
  char v36; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v37; // rdx
  char v38; // cl
  uint32_t v39; // ecx
  boost::asio::detail::epoll_reactor::per_descriptor_data v40; // rdx
  int v41; // esi
  boost::asio::detail::epoll_reactor::per_descriptor_data v42; // rdx
  char v43; // cl
  boost::asio::detail::reactor_op::status status; // [rsp+3Ch] [rbp-A4h]
  boost::system::error_code v50; // [rsp+40h] [rbp-A0h] BYREF
  char v51[144]; // [rsp+50h] [rbp-90h] BYREF

  v7 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 12 6 ev:311 64 16 19 descriptor_lock:243";
  *(_QWORD *)(v7 + 16) = boost::asio::detail::epoll_reactor::start_op;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -219020288;
  v9[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
    __asan_report_load8(descriptor_data);
  if ( !*descriptor_data )
  {
    boost::system::error_code::operator=<boost::asio::error::basic_errors>(&op->ec_, bad_descriptor);
    boost::asio::detail::epoll_reactor::post_immediate_completion(this, op, is_continuation);
    goto LABEL_107;
  }
  if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
    __asan_report_load8(descriptor_data);
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v7 + 64),
    &(*descriptor_data)->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
    __asan_report_load8(descriptor_data);
  v10 = *descriptor_data;
  v11 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->shutdown_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && ((*(_BYTE *)descriptor_data - 93) & 7) >= v11 )
    __asan_report_load1(&(*descriptor_data)->shutdown_);
  if ( !v10->shutdown_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
      __asan_report_load8(descriptor_data);
    if ( boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::empty(&(*descriptor_data)->op_queue_[op_type]) )
    {
      if ( !allow_speculative )
        goto LABEL_25;
      if ( op_type )
        goto LABEL_24;
      if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
        __asan_report_load8(descriptor_data);
      if ( boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::empty(&(*descriptor_data)->op_queue_[2]) )
LABEL_24:
        v12 = 1;
      else
LABEL_25:
        v12 = 0;
      if ( v12 )
      {
        if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
          __asan_report_load8(descriptor_data);
        v13 = *descriptor_data;
        v14 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->try_speculative_[op_type] >> 3) + 0x7FFF8000);
        if ( v14 != 0 && ((*(_BYTE *)descriptor_data + op_type - 96) & 7) >= v14 )
          __asan_report_load1(&(*descriptor_data)->try_speculative_[op_type]);
        if ( v13->try_speculative_[op_type] )
        {
          status = boost::asio::detail::reactor_op::perform(op);
          if ( status )
          {
            if ( status == done_and_exhausted )
            {
              if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
                __asan_report_load8(descriptor_data);
              v15 = *descriptor_data;
              v16 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
              if ( v16 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v16 )
                __asan_report_load4(&(*descriptor_data)->registered_events_);
              if ( v15->registered_events_ )
              {
                v17 = *descriptor_data;
                v18 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->try_speculative_[op_type] >> 3) + 0x7FFF8000);
                if ( v18 != 0 && ((*(_BYTE *)descriptor_data + op_type - 96) & 7) >= v18 )
                  __asan_report_store1(&(*descriptor_data)->try_speculative_[op_type]);
                v17->try_speculative_[op_type] = 0;
              }
            }
            boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v7 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->scheduler_);
LABEL_85:
            boost::asio::detail::scheduler::post_immediate_completion(this->scheduler_, op, is_continuation);
            goto LABEL_106;
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
          __asan_report_load8(descriptor_data);
        v19 = *descriptor_data;
        v20 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
        if ( v20 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v20 )
          __asan_report_load4(&(*descriptor_data)->registered_events_);
        if ( !v19->registered_events_ )
        {
          boost::system::error_code::operator=<boost::asio::error::basic_errors>(&op->ec_, operation_not_supported_0);
          if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->scheduler_);
          goto LABEL_85;
        }
        if ( op_type == 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
            __asan_report_load8(descriptor_data);
          v21 = *descriptor_data;
          v22 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
          if ( v22 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v22 )
            __asan_report_load4(&(*descriptor_data)->registered_events_);
          if ( (v21->registered_events_ & 4) == 0 )
          {
            *(_DWORD *)(v7 + 32) = 0;
            *(_QWORD *)(v7 + 36) = 0LL;
            v23 = *descriptor_data;
            v24 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
            if ( v24 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v24 )
              __asan_report_load4(&(*descriptor_data)->registered_events_);
            *(_DWORD *)(v7 + 32) = v23->registered_events_ | 4;
            *(_QWORD *)(v7 + 36) = *descriptor_data;
            if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->epoll_fd_);
            }
            if ( epoll_ctl(this->epoll_fd_, 3, descriptor, (struct epoll_event *)(v7 + 32)) )
            {
              system_category = boost::asio::error::get_system_category();
              v32 = __errno_location();
              v33 = v32;
              if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v32);
              }
              boost::system::error_code::error_code(&v50, *v33, system_category);
              if ( *(_WORD *)(((unsigned __int64)&op->ec_ >> 3) + 0x7FFF8000) )
                __asan_report_store16(&op->ec_);
              cat = v50.cat_;
              *(_QWORD *)&op->ec_.val_ = *(_QWORD *)&v50.val_;
              op->ec_.cat_ = cat;
              if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->scheduler_);
              boost::asio::detail::scheduler::post_immediate_completion(this->scheduler_, op, is_continuation);
              goto LABEL_106;
            }
            if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
              __asan_report_load8(descriptor_data);
            v25 = *descriptor_data;
            v26 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
            if ( v26 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v26 )
              __asan_report_load4(&(*descriptor_data)->registered_events_);
            registered_events = v25->registered_events_;
            v28 = *descriptor_data;
            v29 = *(_DWORD *)(v7 + 32) | registered_events;
            v30 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
            if ( v30 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v30 )
              __asan_report_store4(&(*descriptor_data)->registered_events_);
            v28->registered_events_ = v29;
          }
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
          __asan_report_load8(descriptor_data);
        v35 = *descriptor_data;
        v36 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
        if ( v36 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v36 )
          __asan_report_load4(&(*descriptor_data)->registered_events_);
        if ( !v35->registered_events_ )
        {
          boost::system::error_code::operator=<boost::asio::error::basic_errors>(&op->ec_, operation_not_supported_0);
          if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->scheduler_);
          goto LABEL_85;
        }
        if ( op_type == 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
            __asan_report_load8(descriptor_data);
          v37 = *descriptor_data;
          v38 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
          if ( v38 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v38 )
            __asan_report_load4(&(*descriptor_data)->registered_events_);
          v39 = v37->registered_events_;
          v40 = *descriptor_data;
          v41 = v39 | 4;
          LOBYTE(v39) = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
          if ( (_BYTE)v39 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= (char)v39 )
            __asan_report_store4(&(*descriptor_data)->registered_events_);
          v40->registered_events_ = v41;
        }
        *(_DWORD *)(v7 + 32) = 0;
        *(_QWORD *)(v7 + 36) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
          __asan_report_load8(descriptor_data);
        v42 = *descriptor_data;
        v43 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
        if ( v43 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v43 )
          __asan_report_load4(&(*descriptor_data)->registered_events_);
        *(_DWORD *)(v7 + 32) = v42->registered_events_;
        *(_QWORD *)(v7 + 36) = *descriptor_data;
        if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->epoll_fd_);
        }
        epoll_ctl(this->epoll_fd_, 3, descriptor, (struct epoll_event *)(v7 + 32));
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
      __asan_report_load8(descriptor_data);
    boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::push(&(*descriptor_data)->op_queue_[op_type], op);
    if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->scheduler_);
    boost::asio::detail::scheduler::work_started(this->scheduler_);
    goto LABEL_106;
  }
  boost::asio::detail::epoll_reactor::post_immediate_completion(this, op, is_continuation);
LABEL_106:
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v7 + 64));
LABEL_107:
  if ( v51 == (char *)v7 )
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

// Line 324: range 000000000C645CAC-000000000C645FAB
void __cdecl boost::asio::detail::epoll_reactor::cancel_ops(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::socket_type a2,
        boost::asio::detail::epoll_reactor::per_descriptor_data *descriptor_data)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  _BYTE i[12]; // [rsp+24h] [rbp-8Ch]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 19 descriptor_lock:328 64 16 7 ops:330";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::epoll_reactor::cancel_ops;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
    __asan_report_load8(descriptor_data);
  if ( *descriptor_data )
  {
    if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
      __asan_report_load8(descriptor_data);
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
      (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 32),
      &(*descriptor_data)->mutex_);
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v3 + 64));
    *(_DWORD *)i = 0;
    while ( *(int *)i <= 2 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
          __asan_report_load8(descriptor_data);
        *(_QWORD *)&i[4] = boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::front(&(*descriptor_data)->op_queue_[*(int *)i]);
        if ( !*(_QWORD *)&i[4] )
          break;
        boost::system::error_code::operator=<boost::asio::error::basic_errors>(
          (boost::system::error_code *const)(*(_QWORD *)&i[4] + 24LL),
          operation_aborted);
        if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
          __asan_report_load8(descriptor_data);
        boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::pop(&(*descriptor_data)->op_queue_[*(int *)i]);
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(
          (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v3 + 64),
          *(boost::asio::detail::scheduler_operation **)&i[4]);
      }
      *(_QWORD *)i = (unsigned int)(*(_DWORD *)i + 1);
    }
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->scheduler_);
    boost::asio::detail::scheduler::post_deferred_completions(
      this->scheduler_,
      (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v3 + 64));
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v3 + 64));
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 32));
  }
  if ( v8 == (char *)v3 )
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

// Line 348: range 000000000C645FAC-000000000C6464E0
void __cdecl boost::asio::detail::epoll_reactor::deregister_descriptor(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::socket_type descriptor,
        boost::asio::detail::epoll_reactor::per_descriptor_data *descriptor_data,
        bool closing)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  boost::asio::detail::epoll_reactor::per_descriptor_data v7; // rdx
  char v8; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v9; // rdx
  char v10; // cl
  boost::asio::detail::epoll_reactor::per_descriptor_data v11; // rax
  char v12; // dl
  boost::asio::detail::epoll_reactor::per_descriptor_data v13; // rdx
  char v14; // cl
  _BYTE i[12]; // [rsp+24h] [rbp-ACh]
  char v18[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 12 6 ev:363 64 16 19 descriptor_lock:352 96 16 7 ops:367";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::epoll_reactor::deregister_descriptor;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
    __asan_report_load8(descriptor_data);
  if ( *descriptor_data )
  {
    if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
      __asan_report_load8(descriptor_data);
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
      (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v4 + 64),
      &(*descriptor_data)->mutex_);
    if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
      __asan_report_load8(descriptor_data);
    v7 = *descriptor_data;
    v8 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->shutdown_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && ((*(_BYTE *)descriptor_data - 93) & 7) >= v8 )
      __asan_report_load1(&(*descriptor_data)->shutdown_);
    if ( !v7->shutdown_ )
    {
      if ( !closing )
      {
        v9 = *descriptor_data;
        v10 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->registered_events_ >> 3) + 0x7FFF8000);
        if ( v10 != 0 && (char)(((*(_BYTE *)descriptor_data + 108) & 7) + 3) >= v10 )
          __asan_report_load4(&(*descriptor_data)->registered_events_);
        if ( v9->registered_events_ )
        {
          *(_DWORD *)(v4 + 32) = 0;
          *(_QWORD *)(v4 + 36) = 0LL;
          if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->epoll_fd_);
          }
          epoll_ctl(this->epoll_fd_, 2, descriptor, (struct epoll_event *)(v4 + 32));
        }
      }
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v4 + 96));
      *(_DWORD *)i = 0;
      while ( *(int *)i <= 2 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
            __asan_report_load8(descriptor_data);
          *(_QWORD *)&i[4] = boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::front(&(*descriptor_data)->op_queue_[*(int *)i]);
          if ( !*(_QWORD *)&i[4] )
            break;
          boost::system::error_code::operator=<boost::asio::error::basic_errors>(
            (boost::system::error_code *const)(*(_QWORD *)&i[4] + 24LL),
            operation_aborted);
          if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
            __asan_report_load8(descriptor_data);
          boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::pop(&(*descriptor_data)->op_queue_[*(int *)i]);
          boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(
            (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v4 + 96),
            *(boost::asio::detail::scheduler_operation **)&i[4]);
        }
        *(_QWORD *)i = (unsigned int)(*(_DWORD *)i + 1);
      }
      if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
        __asan_report_load8(descriptor_data);
      v11 = *descriptor_data;
      v12 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->descriptor_ >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
        v11 = (boost::asio::detail::epoll_reactor::per_descriptor_data)__asan_report_store4(&(*descriptor_data)->descriptor_);
      v11->descriptor_ = -1;
      v13 = *descriptor_data;
      v14 = *(_BYTE *)(((unsigned __int64)&(*descriptor_data)->shutdown_ >> 3) + 0x7FFF8000);
      if ( v14 != 0 && ((*(_BYTE *)descriptor_data - 93) & 7) >= v14 )
        __asan_report_store1(&(*descriptor_data)->shutdown_);
      v13->shutdown_ = 1;
      boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->scheduler_);
      boost::asio::detail::scheduler::post_deferred_completions(
        this->scheduler_,
        (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v4 + 96));
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v4 + 96));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *descriptor_data = 0LL;
    }
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v4 + 64));
  }
  if ( v18 == (char *)v4 )
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

// Line 439: range 000000000C6464E2-000000000C646563
void __cdecl boost::asio::detail::epoll_reactor::cleanup_descriptor_data(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::epoll_reactor::per_descriptor_data *descriptor_data)
{
  if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
    __asan_report_load8(descriptor_data);
  if ( *descriptor_data )
  {
    boost::asio::detail::epoll_reactor::free_descriptor_state(this, *descriptor_data);
    if ( *(_BYTE *)(((unsigned __int64)descriptor_data >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *descriptor_data = 0LL;
  }
};

// Line 448: range 000000000C646564-000000000C646CF6
void __cdecl boost::asio::detail::epoll_reactor::run(
        boost::asio::detail::epoll_reactor *const this,
        __int64 usec,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  char *v5; // rbx
  _DWORD *v6; // r12
  int v7; // eax
  char v8; // dl
  bool v9; // di
  char v10; // dl
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  bool check_timers; // [rsp+2Fh] [rbp-781h]
  int timeout; // [rsp+30h] [rbp-780h]
  int i; // [rsp+34h] [rbp-77Ch]
  int num_events; // [rsp+38h] [rbp-778h]
  int flags; // [rsp+3Ch] [rbp-774h]
  boost::asio::detail::epoll_reactor::descriptor_state *ptr; // [rsp+40h] [rbp-770h]
  char v21[1888]; // [rsp+50h] [rbp-760h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1856LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 1856);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 15 common_lock:553 64 32 15 new_timeout:559 128 32 15 old_timeout:560 192 1536 10 events:470";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::epoll_reactor::run;
  v6 = (_DWORD *)(v3 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862774] = -202116109;
  v6[536862775] = -202116109;
  v6[536862776] = -202116109;
  v6[536862777] = -202116109;
  if ( usec )
  {
    if ( usec < 0 )
      v7 = -1;
    else
      v7 = (usec - 1) / 1000 + 1;
    timeout = v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->timer_fd_);
    }
    if ( this->timer_fd_ == -1 )
    {
      boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
        (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 32),
        &this->mutex_);
      timeout = boost::asio::detail::epoll_reactor::get_timeout(this, timeout);
      boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 32));
    }
  }
  else
  {
    timeout = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->epoll_fd_);
  }
  num_events = epoll_wait(this->epoll_fd_, (struct epoll_event *)(v3 + 192), 128, timeout);
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->timer_fd_);
  }
  check_timers = this->timer_fd_ == -1;
  for ( i = 0; i < num_events; ++i )
  {
    v8 = *(_BYTE *)(((v3 + 192 + 12LL * i + 4) >> 3) + 0x7FFF8000);
    v9 = (char)((v3 - 64 + 12 * i + 4) & 7) >= v8 && v8 != 0;
    v10 = *(_BYTE *)(((v3 + 192 + 12LL * i + 11) >> 3) + 0x7FFF8000);
    if ( v9 || v10 != 0 && (char)((v3 - 64 + 12 * i + 11) & 7) >= v10 )
      __asan_report_load_n(v3 + 192 + 12LL * i + 4, 8LL);
    ptr = *(boost::asio::detail::epoll_reactor::descriptor_state **)&v5[12 * i - 1660];
    if ( ptr == (boost::asio::detail::epoll_reactor::descriptor_state *)&this->interrupter_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->timer_fd_);
      }
      if ( this->timer_fd_ == -1 )
        check_timers = 1;
    }
    else if ( ptr == (boost::asio::detail::epoll_reactor::descriptor_state *)&this->timer_fd_ )
    {
      check_timers = 1;
    }
    else if ( !boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::is_enqueued(ops, ptr) )
    {
      v11 = v3 + 192 + 12LL * i;
      if ( (char)((v3 - 64 + 12 * i) & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v11 + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 12 * i + 3) & 7) >= *(_BYTE *)(((v11 + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v11, 4LL);
      }
      boost::asio::detail::epoll_reactor::descriptor_state::set_ready_events(ptr, *(_DWORD *)&v5[12 * i - 1664]);
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(ops, ptr);
    }
    else
    {
      v12 = v3 + 192 + 12LL * i;
      if ( (char)((v3 - 64 + 12 * i) & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v12 + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 12 * i + 3) & 7) >= *(_BYTE *)(((v12 + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v12, 4LL);
      }
      boost::asio::detail::epoll_reactor::descriptor_state::add_ready_events(ptr, *(_DWORD *)&v5[12 * i - 1664]);
    }
  }
  if ( check_timers )
  {
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
      (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 32),
      &this->mutex_);
    boost::asio::detail::timer_queue_set::get_ready_timers(&this->timer_queues_, ops);
    if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->timer_fd_);
    }
    if ( this->timer_fd_ != -1 )
    {
      flags = boost::asio::detail::epoll_reactor::get_timeout(this, (itimerspec *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->timer_fd_);
      }
      timerfd_settime(this->timer_fd_, flags, (const struct itimerspec *)(v3 + 64), (struct itimerspec *)(v3 + 128));
    }
    boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v3 + 32));
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1856LL, v21);
  }
};

// Line 569: range 000000000C646CF8-000000000C646E32
void __cdecl boost::asio::detail::epoll_reactor::interrupt(boost::asio::detail::epoll_reactor *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int descriptor; // esi
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 6 ev:570";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::epoll_reactor::interrupt;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  *(_DWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 36) = 0LL;
  *(_DWORD *)(v1 + 32) = -2147483639;
  *(_QWORD *)(v1 + 36) = &this->interrupter_;
  descriptor = boost::asio::detail::eventfd_select_interrupter::read_descriptor(&this->interrupter_);
  if ( *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->epoll_fd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->epoll_fd_);
  }
  epoll_ctl(this->epoll_fd_, 3, descriptor, (struct epoll_event *)(v1 + 32));
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

// Line 577: range 000000000C646E34-000000000C64702C
int __cdecl boost::asio::detail::epoll_reactor::do_epoll_create()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  int *v3; // rax
  _DWORD *v4; // rdx
  int *v5; // rax
  _DWORD *v6; // rdx
  const boost::system::error_category *system_category; // r14
  int *v8; // rax
  int *v9; // rdx
  int result; // eax
  int fd; // [rsp+Ch] [rbp-74h]
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v0 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_0(64LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 16 6 ec:594";
  *(_QWORD *)(v0 + 16) = boost::asio::detail::epoll_reactor::do_epoll_create;
  v2 = v0 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202178560;
  fd = epoll_create1(0x80000);
  if ( fd == -1 )
  {
    v3 = __errno_location();
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    if ( *v4 == 22 )
      goto LABEL_11;
    v5 = __errno_location();
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    if ( *v6 == 38 )
    {
LABEL_11:
      fd = epoll_create(20000);
      if ( fd != -1 )
        fcntl(fd, 2, 1LL);
    }
  }
  if ( fd == -1 )
  {
    system_category = boost::asio::error::get_system_category();
    v8 = __errno_location();
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    boost::system::error_code::error_code((boost::system::error_code *const)(v0 + 32), *v9, system_category);
    boost::asio::detail::throw_error((const boost::system::error_code *)(v0 + 32), "epoll");
  }
  result = fd;
  if ( v12 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 603: range 000000000C64702E-000000000C6470C9
int __cdecl boost::asio::detail::epoll_reactor::do_timerfd_create()
{
  int *v0; // rax
  _DWORD *v1; // rdx
  int fd; // [rsp+Ch] [rbp-4h]

  fd = timerfd_create(1, 0x80000);
  if ( fd == -1 )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v0);
    }
    if ( *v1 == 22 )
    {
      fd = timerfd_create(1, 0);
      if ( fd != -1 )
        fcntl(fd, 2, 1LL);
    }
  }
  return fd;
};

// Line 626: range 000000000C6470CA-000000000C647226
boost::asio::detail::epoll_reactor::descriptor_state *__cdecl boost::asio::detail::epoll_reactor::allocate_descriptor_state(
        boost::asio::detail::epoll_reactor *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int v4; // eax
  boost::asio::detail::epoll_reactor::descriptor_state *v5; // r14
  boost::asio::detail::epoll_reactor::descriptor_state *result; // rax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 20 descriptors_lock:627";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::epoll_reactor::allocate_descriptor_state;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32),
    &this->registered_descriptors_mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  v4 = boost::asio::detail::scheduler::concurrency_hint(this->scheduler_);
  v5 = boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::alloc<bool>(
         &this->registered_descriptors_,
         (v4 & 0xFFFF0004) != -1525678080);
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v1 + 32));
  result = v5;
  if ( v7 == (char *)v1 )
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

// Line 633: range 000000000C647228-000000000C64733E
void __cdecl boost::asio::detail::epoll_reactor::free_descriptor_state(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::epoll_reactor::descriptor_state *s)
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
  *(_QWORD *)(v2 + 8) = "1 32 16 20 descriptors_lock:634";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::epoll_reactor::free_descriptor_state;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 32),
    &this->registered_descriptors_mutex_);
  boost::asio::detail::object_pool<boost::asio::detail::epoll_reactor::descriptor_state>::free(
    &this->registered_descriptors_,
    s);
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 32));
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

// Line 639: range 000000000C647340-000000000C647432
void __cdecl boost::asio::detail::epoll_reactor::do_add_timer_queue(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::timer_queue_base *queue)
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
  *(_QWORD *)(v2 + 8) = "1 32 16 8 lock:640";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::epoll_reactor::do_add_timer_queue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 32),
    &this->mutex_);
  boost::asio::detail::timer_queue_set::insert(&this->timer_queues_, queue);
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 32));
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

// Line 645: range 000000000C647434-000000000C647526
void __cdecl boost::asio::detail::epoll_reactor::do_remove_timer_queue(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::timer_queue_base *queue)
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
  *(_QWORD *)(v2 + 8) = "1 32 16 8 lock:646";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::epoll_reactor::do_remove_timer_queue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 32),
    &this->mutex_);
  boost::asio::detail::timer_queue_set::erase(&this->timer_queues_, queue);
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 32));
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

// Line 651: range 000000000C647528-000000000C64770D
void __cdecl boost::asio::detail::epoll_reactor::update_timeout(boost::asio::detail::epoll_reactor *const this)
{
  struct itimerspec *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int flags; // [rsp+1Ch] [rbp-C4h]
  char v5[192]; // [rsp+20h] [rbp-C0h] BYREF

  v1 = (struct itimerspec *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = (struct itimerspec *)v2;
  }
  v1->it_interval.tv_sec = 1102416563LL;
  v1->it_interval.tv_nsec = (__syscall_slong_t)"2 32 32 15 new_timeout:655 96 32 15 old_timeout:656";
  v1->it_value.tv_sec = (__time_t)boost::asio::detail::epoll_reactor::update_timeout;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->timer_fd_);
  }
  if ( this->timer_fd_ == -1 )
  {
    boost::asio::detail::epoll_reactor::interrupt(this);
  }
  else
  {
    flags = boost::asio::detail::epoll_reactor::get_timeout(this, v1 + 1);
    if ( *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_fd_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->timer_fd_);
    }
    timerfd_settime(this->timer_fd_, flags, v1 + 1, v1 + 3);
  }
  if ( v5 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v1->it_interval.tv_sec = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 666: range 000000000C64770E-000000000C647834
__int64 __fastcall boost::asio::detail::epoll_reactor::get_timeout(
        boost::asio::detail::epoll_reactor *const this,
        int msec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::asio::detail::timer_queue_set *p_timer_queues; // rdi
  int *v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 msec:665";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::epoll_reactor::get_timeout;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = msec;
  p_timer_queues = &this->timer_queues_;
  if ( *(_DWORD *)(v2 + 32) > 0x493E0u )
  {
    v7 = 300000LL;
  }
  else
  {
    v6 = (int *)(v2 + 32);
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0
      && (char)(((v2 + 32) & 7) + 3) >= *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    {
      p_timer_queues = (boost::asio::detail::timer_queue_set *)(v2 + 32);
      __asan_report_load4(v2 + 32);
    }
    v7 = *v6;
  }
  result = boost::asio::detail::timer_queue_set::wait_duration_msec(p_timer_queues, v7);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 676: range 000000000C647836-000000000C64798E
int __cdecl boost::asio::detail::epoll_reactor::get_timeout(
        boost::asio::detail::epoll_reactor *const this,
        itimerspec *ts)
{
  __int64 v2; // rcx
  __syscall_slong_t v3; // rax
  __int64 usec; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)ts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  ts->it_interval.tv_sec = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&ts->it_interval.tv_nsec >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  ts->it_interval.tv_nsec = 0LL;
  usec = boost::asio::detail::timer_queue_set::wait_duration_usec(&this->timer_queues_, 300000000LL);
  v2 = usec / 1000000;
  if ( *(_BYTE *)(((unsigned __int64)&ts->it_value >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  ts->it_value.tv_sec = v2;
  if ( usec )
    v3 = 1000 * (usec % 1000000);
  else
    v3 = 1LL;
  if ( *(_BYTE *)(((unsigned __int64)&ts->it_value.tv_nsec >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  ts->it_value.tv_nsec = v3;
  return usec == 0;
};

// Line 690: range 000000000C647990-000000000C647A0F
void __cdecl boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit::perform_io_cleanup_on_block_exit(
        boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit *const this,
        boost::asio::detail::epoll_reactor *r)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->reactor_ = r;
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue(&this->ops_);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_op_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->first_op_ = 0LL;
};

// Line 695: range 000000000C647A10-000000000C647B32
void __cdecl boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit::~perform_io_cleanup_on_block_exit(
        boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit *const this)
{
  boost::asio::detail::epoll_reactor *reactor; // rax
  boost::asio::detail::epoll_reactor *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->first_op_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->first_op_);
  if ( this->first_op_ )
  {
    if ( !boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::empty(&this->ops_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      reactor = this->reactor_;
      if ( *(_BYTE *)(((unsigned __int64)&this->reactor_->scheduler_ >> 3) + 0x7FFF8000) )
        reactor = (boost::asio::detail::epoll_reactor *)__asan_report_load8(&this->reactor_->scheduler_);
      boost::asio::detail::scheduler::post_deferred_completions(reactor->scheduler_, &this->ops_);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v2 = this->reactor_;
    if ( *(_BYTE *)(((unsigned __int64)&this->reactor_->scheduler_ >> 3) + 0x7FFF8000) )
      v2 = (boost::asio::detail::epoll_reactor *)__asan_report_load8(&this->reactor_->scheduler_);
    boost::asio::detail::scheduler::compensating_work_started(v2->scheduler_);
  }
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue(&this->ops_);
};

// Line 721: range 000000000C647B34-000000000C647BC0
void __cdecl boost::asio::detail::epoll_reactor::descriptor_state::descriptor_state(
        boost::asio::detail::epoll_reactor::descriptor_state *const this,
        bool locking)
{
  __int64 v2; // rbx
  boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *op_queue; // r12

  boost::asio::detail::scheduler_operation::scheduler_operation(
    this,
    (boost::asio::detail::scheduler_operation::func_type)boost::asio::detail::epoll_reactor::descriptor_state::do_complete);
  boost::asio::detail::conditionally_enabled_mutex::conditionally_enabled_mutex(&this->mutex_, locking);
  v2 = 2LL;
  op_queue = this->op_queue_;
  while ( v2 >= 0 )
  {
    boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::op_queue(op_queue++);
    --v2;
  }
};

// Line 728: range 000000000C647BC2-000000000C647F99
boost::asio::detail::operation *__cdecl boost::asio::detail::epoll_reactor::descriptor_state::perform_io(
        boost::asio::detail::epoll_reactor::descriptor_state *const this,
        uint32_t events)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // dl
  char v6; // dl
  char v7; // dl
  boost::asio::detail::operation *v8; // r14
  boost::asio::detail::operation *result; // rax
  int j; // [rsp+10h] [rbp-C0h]
  boost::asio::detail::reactor_op::status status; // [rsp+14h] [rbp-BCh]
  boost::asio::detail::reactor_op *op; // [rsp+18h] [rbp-B8h]
  char v13[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 19 descriptor_lock:731 64 32 14 io_cleanup:730";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::epoll_reactor::descriptor_state::perform_io;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  boost::asio::detail::conditionally_enabled_mutex::lock(&this->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->reactor_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->reactor_);
  boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit::perform_io_cleanup_on_block_exit(
    (boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit *const)(v2 + 64),
    this->reactor_);
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 32),
    &this->mutex_,
    adopt_lock_0);
  for ( j = 2; j >= 0; --j )
  {
    v5 = *(_BYTE *)(((unsigned __int64)&boost::asio::detail::epoll_reactor::descriptor_state::perform_io(unsigned int)::flag[j] >> 3)
                  + 0x7FFF8000);
    if ( v5 != 0
      && (char)(((unsigned __int8)&boost::asio::detail::epoll_reactor::descriptor_state::perform_io(unsigned int)::flag[j] & 7)
              + 3) >= v5 )
    {
      __asan_report_load4(&boost::asio::detail::epoll_reactor::descriptor_state::perform_io(unsigned int)::flag[j]);
    }
    if ( (events & (boost::asio::detail::epoll_reactor::descriptor_state::perform_io(unsigned int)::flag[j] | 0x18)) != 0 )
    {
      v6 = *(_BYTE *)(((unsigned __int64)&this->try_speculative_[j] >> 3) + 0x7FFF8000);
      if ( v6 != 0 && ((j - 96 + (unsigned __int8)this) & 7) >= v6 )
        __asan_report_store1(&this->try_speculative_[j]);
      this->try_speculative_[j] = 1;
      while ( 1 )
      {
        op = boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::front(&this->op_queue_[j]);
        if ( !op )
          break;
        status = boost::asio::detail::reactor_op::perform(op);
        if ( status == not_done )
          break;
        boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::pop(&this->op_queue_[j]);
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(
          (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v2 + 72),
          op);
        if ( status == done_and_exhausted )
        {
          v7 = *(_BYTE *)(((unsigned __int64)&this->try_speculative_[j] >> 3) + 0x7FFF8000);
          if ( v7 != 0 && ((j - 96 + (unsigned __int8)this) & 7) >= v7 )
            __asan_report_store1(&this->try_speculative_[j]);
          this->try_speculative_[j] = 0;
          break;
        }
      }
    }
  }
  *(_QWORD *)(v2 + 88) = boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::front((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v2 + 72));
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::pop((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v2 + 72));
  v8 = *(boost::asio::detail::operation **)(v2 + 88);
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v2 + 32));
  boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit::~perform_io_cleanup_on_block_exit((boost::asio::detail::epoll_reactor::perform_io_cleanup_on_block_exit *const)(v2 + 64));
  result = v8;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 769: range 000000000C647F9A-000000000C647FFF
void __cdecl boost::asio::detail::epoll_reactor::descriptor_state::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred)
{
  boost::asio::detail::scheduler_operation *op; // [rsp+38h] [rbp-8h]

  if ( owner )
  {
    op = boost::asio::detail::epoll_reactor::descriptor_state::perform_io(
           (boost::asio::detail::epoll_reactor::descriptor_state *const)base,
           bytes_transferred);
    if ( op )
      boost::asio::detail::scheduler_operation::complete(op, owner, ec, 0LL);
  }
};
