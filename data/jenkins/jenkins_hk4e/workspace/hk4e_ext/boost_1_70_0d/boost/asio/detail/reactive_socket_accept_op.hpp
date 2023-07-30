// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/reactive_socket_accept_op.hpp

// Line 34: range 000000000C6D53AE-000000000C6D53D8
void __cdecl boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp>::~reactive_socket_accept_op_base(
        boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp> *const this)
{
  boost::asio::detail::socket_holder::~socket_holder(&this->new_socket_);
  boost::asio::detail::reactor_op::~reactor_op(this);
};

// Line 37: range 000000000C6DBDD8-000000000C6DBFC4
void __cdecl boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp>::reactive_socket_accept_op_base(
        boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp> *const this,
        boost::asio::detail::socket_type socket,
        boost::asio::detail::socket_ops::state_type state,
        boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *peer,
        const boost::asio::ip::tcp *protocol,
        boost::asio::ip::tcp::endpoint *peer_endpoint,
        boost::asio::detail::scheduler_operation::func_type complete_func)
{
  std::size_t v7; // rax

  boost::asio::detail::reactor_op::reactor_op(
    this,
    (boost::asio::detail::reactor_op::perform_func_type)boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp>::do_perform,
    complete_func);
  if ( *(_BYTE *)(((unsigned __int64)&this->socket_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->socket_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->socket_);
  }
  this->socket_ = socket;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->state_);
  }
  this->state_ = state;
  boost::asio::detail::socket_holder::socket_holder(&this->new_socket_);
  if ( *(_BYTE *)(((unsigned __int64)&this->peer_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->peer_ = peer;
  if ( *(_BYTE *)(((unsigned __int64)&this->protocol_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protocol_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protocol_);
  }
  if ( *(_BYTE *)(((unsigned __int64)protocol >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)protocol & 7) + 3) >= *(_BYTE *)(((unsigned __int64)protocol >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(protocol);
  }
  this->protocol_ = (boost::asio::ip::tcp)protocol->family_;
  if ( *(_BYTE *)(((unsigned __int64)&this->peer_endpoint_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->peer_endpoint_ = peer_endpoint;
  if ( peer_endpoint )
    v7 = boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::capacity(peer_endpoint);
  else
    v7 = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->addrlen_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->addrlen_ = v7;
};

// Line 50: range 000000000C6E23F0-000000000C6E261B
boost::asio::detail::reactor_op::status __cdecl boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp>::do_perform(
        boost::asio::detail::reactor_op *base)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::size_t *p_bytes_transferred; // r14
  boost::asio::detail::socket_addr_type *v5; // rdi
  boost::asio::detail::socket_ops::state_type v6; // si
  boost::asio::detail::reactor_op::status v7; // eax
  _BOOL4 result; // [rsp+14h] [rbp-7Ch]
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 new_socket:55";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp>::do_perform;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = -1;
  if ( *(_BYTE *)(((unsigned __int64)&base[1].ec_.cat_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&base[1].ec_.cat_);
  if ( base[1].ec_.cat_ )
    p_bytes_transferred = &base[1].bytes_transferred_;
  else
    p_bytes_transferred = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&base[1].ec_.cat_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&base[1].ec_.cat_);
  if ( base[1].ec_.cat_ )
    v5 = boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::data((boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *const)base[1].ec_.cat_);
  else
    v5 = 0LL;
  if ( *(_BYTE *)((((unsigned __int64)&base[1].next_ + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)base + 60) & 7) >= *(_BYTE *)((((unsigned __int64)&base[1].next_ + 4) >> 3) + 0x7FFF8000) )
  {
    v5 = (boost::asio::detail::socket_addr_type *)((char *)&base[1].next_ + 4);
    __asan_report_load1((char *)&base[1].next_ + 4);
  }
  v6 = BYTE4(base[1].next_);
  if ( *(_BYTE *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) <= 3 )
  {
    v5 = (boost::asio::detail::socket_addr_type *)&base[1];
    __asan_report_load4(&base[1]);
  }
  result = boost::asio::detail::socket_ops::non_blocking_accept(
             (boost::asio::detail::socket_type)base[1].next_,
             v6,
             v5,
             p_bytes_transferred,
             &base->ec_,
             (boost::asio::detail::socket_type *)(v1 + 32));
  boost::asio::detail::socket_holder::reset(
    (boost::asio::detail::socket_holder *const)&base[1].func_,
    *(_DWORD *)(v1 + 32));
  v7 = result;
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v7;
};

// Line 67: range 000000000C6E21F0-000000000C6E2321
void __cdecl boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp>::do_assign(
        boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp> *const this)
{
  boost::asio::ip::tcp::endpoint *peer_endpoint; // rax
  boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *peer; // rbx
  boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::native_handle_type native_socket[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( boost::asio::detail::socket_holder::get(&this->new_socket_) != -1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->peer_endpoint_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->peer_endpoint_);
    if ( this->peer_endpoint_ )
    {
      peer_endpoint = this->peer_endpoint_;
      if ( *(_BYTE *)(((unsigned __int64)&this->addrlen_ >> 3) + 0x7FFF8000) )
        peer_endpoint = (boost::asio::ip::tcp::endpoint *)__asan_report_load8(&this->addrlen_);
      boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::resize(peer_endpoint, this->addrlen_);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->peer_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->peer_);
    peer = this->peer_;
    native_socket[0] = boost::asio::detail::socket_holder::get(&this->new_socket_);
    boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::assign(
      peer,
      &this->protocol_,
      native_socket,
      &this->ec_);
    if ( !boost::system::error_code::operator bool(&this->ec_) )
      boost::asio::detail::socket_holder::release(&this->new_socket_);
  }
};

// Line 91: range 000000000C6DB820-000000000C6DB85C
void __cdecl boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~reactive_socket_accept_op(
        boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this)
{
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(&this->io_executor_);
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler(&this->handler_);
  boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp>::~reactive_socket_accept_op_base(this);
};

// Line 95: range 000000000C6D5296-000000000C6D5390
boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> > *__cdecl boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::allocate(
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *handler)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> > *result; // rax
  std::allocator<void> v5; // [rsp+17h] [rbp-69h] BYREF
  boost::asio::detail::hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,void> a; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 4 a:95";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::allocate;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  boost::asio::get_associated_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>(handler);
  a.handler_ = boost::asio::detail::get_hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,std::allocator<void>>::get(
                 handler,
                 &v5).handler_;
  boost::asio::detail::hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::hook_allocator<void>(
    (boost::asio::detail::hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
    &a);
  result = boost::asio::detail::hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::allocate(
             (boost::asio::detail::hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
             1uLL);
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

// Line 95: range 000000000C6DB85E-000000000C6DBAAB
void __cdecl boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset(
        boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::allocator<void> v4; // [rsp+17h] [rbp-69h] BYREF
  boost::asio::detail::hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,void> a; // [rsp+18h] [rbp-68h] BYREF
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 4 a:95";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->p >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->p);
  if ( this->p )
  {
    boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~reactive_socket_accept_op(this->p);
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
    boost::asio::get_associated_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>(this->h);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    a.handler_ = boost::asio::detail::get_hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,std::allocator<void>>::get(
                   this->h,
                   &v4).handler_;
    boost::asio::detail::hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::hook_allocator<void>(
      (boost::asio::detail::hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
      &a);
    if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->v);
    boost::asio::detail::hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>>::deallocate(
      (boost::asio::detail::hook_allocator<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> > > *const)(v1 + 32),
      this->v,
      1uLL);
    if ( *(_BYTE *)(((unsigned __int64)&this->v >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->v = 0LL;
  }
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

// Line 95: range 000000000C6D5392-000000000C6D53AC
void __cdecl boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::~ptr(
        boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const this)
{
  boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset(this);
};

// Line 97: range 000000000C6D552A-000000000C6D55C7
void __cdecl boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::reactive_socket_accept_op(
        boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const this,
        boost::asio::detail::socket_type socket,
        boost::asio::detail::socket_ops::state_type state,
        boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *peer,
        const boost::asio::ip::tcp *protocol,
        boost::asio::ip::tcp::endpoint *peer_endpoint,
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp>::reactive_socket_accept_op_base(
    this,
    socket,
    state,
    peer,
    protocol,
    peer_endpoint,
    (boost::asio::detail::scheduler_operation::func_type)boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete);
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_handler(
    &this->handler_,
    handler);
  boost::asio::detail::io_object_executor<boost::asio::executor>::io_object_executor(&this->io_executor_, io_ex);
  boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::start(
    &this->handler_,
    &this->io_executor_);
};

// Line 109: range 000000000C6DBAC7-000000000C6DBDD7
void __cdecl boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v7[320]; // [rsp+30h] [rbp-140h] BYREF

  v4 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 5 b:138 48 24 5 p:115 112 24 5 w:116 176 72 11 handler:131";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61953;
  v6[536862722] = -218959360;
  v6[536862723] = 62194;
  v6[536862724] = -218959360;
  v6[536862725] = 62194;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  *(_QWORD *)(v4 + 48) = std::addressof<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)&base[4].func_);
  *(_QWORD *)(v4 + 56) = base;
  *(_QWORD *)(v4 + 64) = base;
  boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::handler_work(
    (boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 112),
    (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)&base[4].func_,
    (const boost::asio::detail::io_object_executor<boost::asio::executor> *)&base[6].task_result_);
  if ( owner )
    boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp>::do_assign((boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp> *const)base);
  boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>::binder1(
    (boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *const)(v4 + 176),
    (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)&base[4].func_,
    (const boost::system::error_code *)&base[1]);
  *(_QWORD *)(v4 + 48) = std::addressof<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)(v4 + 176));
  boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
  if ( owner )
  {
    boost::asio::detail::std_fenced_block::std_fenced_block(
      (boost::asio::detail::std_fenced_block *const)(v4 + 32),
      half);
    boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::complete<boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>>(
      (boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 112),
      (boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *)(v4 + 176),
      (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)(v4 + 176));
    boost::asio::detail::std_fenced_block::~std_fenced_block((boost::asio::detail::std_fenced_block *const)(v4 + 32));
  }
  boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>::~binder1((boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *const)(v4 + 176));
  boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work((boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *const)(v4 + 112));
  boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::~ptr((boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 48));
  if ( v7 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};
