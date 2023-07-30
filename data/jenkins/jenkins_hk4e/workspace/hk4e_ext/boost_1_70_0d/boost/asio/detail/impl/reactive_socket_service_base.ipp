// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/reactive_socket_service_base.ipp

// Line 31: range 000000000C64BB00-000000000C64BB55
void __cdecl boost::asio::detail::reactive_socket_service_base::reactive_socket_service_base(
        boost::asio::detail::reactive_socket_service_base *const this,
        boost::asio::execution_context *context)
{
  boost::asio::detail::reactor *v2; // rax

  v2 = boost::asio::use_service<boost::asio::detail::epoll_reactor>(context);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->reactor_ = v2;
  boost::asio::detail::epoll_reactor::init_task(this->reactor_);
};

// Line 39: range 000000000C64BB56-000000000C64BB60
void __cdecl boost::asio::detail::reactive_socket_service_base::base_shutdown(
        boost::asio::detail::reactive_socket_service_base *const this)
{
  ;
};

// Line 44: range 000000000C64BB62-000000000C64BBED
void __cdecl boost::asio::detail::reactive_socket_service_base::construct(
        boost::asio::detail::reactive_socket_service_base *const this,
        boost::asio::detail::reactive_socket_service_base::base_implementation_type *impl)
{
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(impl);
  }
  impl->socket_ = -1;
  if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&impl->state_);
  }
  impl->state_ = 0;
};

// Line 82: range 000000000C64BBEE-000000000C64BE17
void __cdecl boost::asio::detail::reactive_socket_service_base::destroy(
        boost::asio::detail::reactive_socket_service_base *const this,
        boost::asio::detail::reactive_socket_service_base::base_implementation_type *impl)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::asio::detail::epoll_reactor *reactor; // rdi
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 ignored_ec:91";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::reactive_socket_service_base::destroy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(impl);
  }
  if ( impl->socket_ != -1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    reactor = this->reactor_;
    if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
    {
      reactor = (boost::asio::detail::epoll_reactor *)&impl->state_;
      __asan_report_load1(&impl->state_);
    }
    boost::asio::detail::epoll_reactor::deregister_descriptor(
      reactor,
      impl->socket_,
      &impl->reactor_data_,
      (impl->state_ & 0x40) == 0);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(impl);
    }
    boost::asio::detail::socket_ops::close(impl->socket_, &impl->state_, 1, (boost::system::error_code *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::epoll_reactor::cleanup_descriptor_data(this->reactor_, &impl->reactor_data_);
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 101: range 000000000C64BE18-000000000C64C017
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service_base::close(
        boost::asio::detail::reactive_socket_service_base *const this,
        boost::asio::detail::reactive_socket_service_base::base_implementation_type *impl,
        boost::system::error_code *ec)
{
  boost::asio::detail::epoll_reactor *reactor; // rdi
  bool v4; // dl
  const boost::system::error_category *cat; // rdx
  const boost::system::error_category *v6; // rdx
  __int64 v7; // rax
  boost::system::error_code v10; // [rsp+20h] [rbp-10h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  if ( boost::asio::detail::reactive_socket_service_base::is_open(this, impl) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    reactor = this->reactor_;
    if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
    {
      reactor = (boost::asio::detail::epoll_reactor *)&impl->state_;
      __asan_report_load1(&impl->state_);
    }
    v4 = (impl->state_ & 0x40) == 0;
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
    {
      reactor = (boost::asio::detail::epoll_reactor *)impl;
      __asan_report_load4(impl);
    }
    boost::asio::detail::epoll_reactor::deregister_descriptor(reactor, impl->socket_, &impl->reactor_data_, v4);
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(impl);
    }
    boost::asio::detail::socket_ops::close(impl->socket_, &impl->state_, 0, ec);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::epoll_reactor::cleanup_descriptor_data(this->reactor_, &impl->reactor_data_);
  }
  else
  {
    boost::system::error_code::error_code(&v10);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_store16(ec);
    cat = v10.cat_;
    *(_QWORD *)&ec->val_ = *(_QWORD *)&v10.val_;
    ec->cat_ = cat;
  }
  boost::asio::detail::reactive_socket_service_base::construct(this, impl);
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_load16(ec);
  v6 = ec->cat_;
  v7 = *(_QWORD *)&ec->val_;
  result.cat_ = v6;
  result.val_ = v7;
  result.failed_ = BYTE4(v7);
  return result;
};

// Line 156: range 000000000C64C018-000000000C64C149
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service_base::cancel(
        boost::asio::detail::reactive_socket_service_base *const this,
        boost::asio::detail::reactive_socket_service_base::base_implementation_type *impl,
        boost::system::error_code *ec)
{
  const boost::system::error_category *cat; // rdx
  __int64 v4; // rax
  boost::asio::detail::reactor *reactor; // rcx
  const boost::system::error_category *v6; // rdx
  boost::system::error_code v8; // [rsp+20h] [rbp-10h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  if ( !boost::asio::detail::reactive_socket_service_base::is_open(this, impl) )
  {
    boost::system::error_code::operator=<boost::asio::error::basic_errors>(ec, bad_descriptor);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_load16(ec);
    cat = ec->cat_;
    v4 = *(_QWORD *)&ec->val_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    reactor = this->reactor_;
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(impl);
    }
    boost::asio::detail::epoll_reactor::cancel_ops(reactor, impl->socket_, &impl->reactor_data_);
    boost::system::error_code::error_code(&v8);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_store16(ec);
    v6 = v8.cat_;
    *(_QWORD *)&ec->val_ = *(_QWORD *)&v8.val_;
    ec->cat_ = v6;
    cat = ec->cat_;
    v4 = *(_QWORD *)&ec->val_;
  }
  result.cat_ = cat;
  result.val_ = v4;
  result.failed_ = BYTE4(v4);
  return result;
};

// Line 174: range 000000000C64C14A-000000000C64C5A0
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service_base::do_open(
        boost::asio::detail::reactive_socket_service_base *const this,
        boost::asio::detail::reactive_socket_service_base::base_implementation_type *impl,
        int af_0,
        int type,
        int protocol,
        boost::system::error_code *ec)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  const boost::system::error_category *cat; // r13
  boost::asio::detail::socket_type v11; // eax
  boost::asio::detail::reactor *reactor; // r12
  boost::asio::detail::socket_type v13; // eax
  const boost::system::error_category *system_category; // rax
  boost::asio::detail::socket_type v15; // edx
  const boost::system::error_category *v16; // rdx
  __int64 v17; // rax
  const boost::system::error_category *v18; // rdx
  int err; // [rsp+3Ch] [rbp-84h]
  boost::system::error_code v24; // [rsp+40h] [rbp-80h] BYREF
  char v25[112]; // [rsp+50h] [rbp-70h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v6 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 4 8 sock:181";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::reactive_socket_service_base::do_open;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116348;
  if ( boost::asio::detail::reactive_socket_service_base::is_open(this, impl) )
  {
    boost::system::error_code::operator=<boost::asio::error::misc_errors>(ec, already_open);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_load16(ec);
    v9 = *(_QWORD *)&ec->val_;
    cat = ec->cat_;
  }
  else
  {
    v11 = boost::asio::detail::socket_ops::socket(af_0, type, protocol, ec);
    boost::asio::detail::socket_holder::socket_holder((boost::asio::detail::socket_holder *const)(v6 + 32), v11);
    if ( boost::asio::detail::socket_holder::get((const boost::asio::detail::socket_holder *const)(v6 + 32)) == -1 )
    {
      if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        __asan_report_load16(ec);
      v9 = *(_QWORD *)&ec->val_;
      cat = ec->cat_;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      reactor = this->reactor_;
      v13 = boost::asio::detail::socket_holder::get((const boost::asio::detail::socket_holder *const)(v6 + 32));
      err = boost::asio::detail::epoll_reactor::register_descriptor(reactor, v13, &impl->reactor_data_);
      if ( err )
      {
        system_category = boost::asio::error::get_system_category();
        boost::system::error_code::error_code(&v24, err, system_category);
        if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
          __asan_report_store16(ec);
      }
      else
      {
        v15 = boost::asio::detail::socket_holder::release((boost::asio::detail::socket_holder *const)(v6 + 32));
        if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(impl);
        }
        impl->socket_ = v15;
        if ( type == 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(&impl->state_);
          }
          impl->state_ = 16;
        }
        else if ( type == 2 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(&impl->state_);
          }
          impl->state_ = 32;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(&impl->state_);
          }
          impl->state_ = 0;
        }
        boost::system::error_code::error_code(&v24);
        if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
          __asan_report_store16(ec);
      }
      v16 = v24.cat_;
      *(_QWORD *)&ec->val_ = *(_QWORD *)&v24.val_;
      ec->cat_ = v16;
      v9 = *(_QWORD *)&ec->val_;
      cat = ec->cat_;
    }
    boost::asio::detail::socket_holder::~socket_holder((boost::asio::detail::socket_holder *const)(v6 + 32));
  }
  v17 = v9;
  v18 = cat;
  if ( v25 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result.cat_ = v18;
  result.val_ = v17;
  result.failed_ = BYTE4(v17);
  return result;
};

// Line 207: range 000000000C64C5A2-000000000C64C8DF
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service_base::do_assign(
        boost::asio::detail::reactive_socket_service_base *const this,
        boost::asio::detail::reactive_socket_service_base::base_implementation_type *impl,
        int type,
        const boost::asio::detail::reactive_socket_service_base::native_handle_type *native_socket,
        boost::system::error_code *ec)
{
  const boost::system::error_category *cat; // rdx
  __int64 v6; // rax
  boost::asio::detail::reactor *reactor; // rcx
  boost::asio::detail::epoll_reactor::per_descriptor_data *p_reactor_data; // rsi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *v10; // rdx
  boost::asio::detail::socket_type v11; // ecx
  const boost::system::error_category *v12; // rdx
  int err; // [rsp+3Ch] [rbp-14h]
  boost::system::error_code v18; // [rsp+40h] [rbp-10h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  if ( boost::asio::detail::reactive_socket_service_base::is_open(this, impl) )
  {
    boost::system::error_code::operator=<boost::asio::error::misc_errors>(ec, already_open);
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_load16(ec);
    cat = ec->cat_;
    v6 = *(_QWORD *)&ec->val_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    reactor = this->reactor_;
    p_reactor_data = &impl->reactor_data_;
    if ( *(_BYTE *)(((unsigned __int64)native_socket >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)native_socket & 7) + 3) >= *(_BYTE *)(((unsigned __int64)native_socket >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(native_socket);
    }
    err = boost::asio::detail::epoll_reactor::register_descriptor(reactor, *native_socket, p_reactor_data);
    if ( err )
    {
      system_category = boost::asio::error::get_system_category();
      boost::system::error_code::error_code(&v18, err, system_category);
      if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        __asan_report_store16(ec);
      v10 = v18.cat_;
      *(_QWORD *)&ec->val_ = *(_QWORD *)&v18.val_;
      ec->cat_ = v10;
      cat = ec->cat_;
      v6 = *(_QWORD *)&ec->val_;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)native_socket >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)native_socket & 7) + 3) >= *(_BYTE *)(((unsigned __int64)native_socket >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(native_socket);
      }
      v11 = *native_socket;
      if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(impl);
      }
      impl->socket_ = v11;
      if ( type == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&impl->state_);
        }
        impl->state_ = 16;
      }
      else if ( type == 2 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&impl->state_);
        }
        impl->state_ = 32;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&impl->state_);
        }
        impl->state_ = 0;
      }
      if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&impl->state_);
      }
      impl->state_ |= 0x40u;
      boost::system::error_code::error_code(&v18);
      if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        __asan_report_store16(ec);
      v12 = v18.cat_;
      *(_QWORD *)&ec->val_ = *(_QWORD *)&v18.val_;
      ec->cat_ = v12;
      cat = ec->cat_;
      v6 = *(_QWORD *)&ec->val_;
    }
  }
  result.cat_ = cat;
  result.val_ = v6;
  result.failed_ = BYTE4(v6);
  return result;
};

// Line 238: range 000000000C64C8E0-000000000C64CA93
void __cdecl boost::asio::detail::reactive_socket_service_base::start_op(
        boost::asio::detail::reactive_socket_service_base *const this,
        boost::asio::detail::reactive_socket_service_base::base_implementation_type *impl,
        int op_type,
        boost::asio::detail::reactor_op *op,
        bool is_continuation,
        bool is_non_blocking,
        bool noop)
{
  boost::system::error_code *p_ec; // rcx
  char v8; // al
  boost::asio::detail::epoll_reactor *reactor; // rdi
  bool v10; // r9
  boost::asio::detail::epoll_reactor::per_descriptor_data *p_reactor_data; // rcx

  if ( noop )
    goto LABEL_21;
  if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&impl->state_);
  }
  if ( (impl->state_ & 3) != 0 )
    goto LABEL_8;
  p_ec = &op->ec_;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(impl);
  }
  if ( boost::asio::detail::socket_ops::set_internal_non_blocking(impl->socket_, &impl->state_, 1, p_ec) )
LABEL_8:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    reactor = this->reactor_;
    v10 = is_continuation;
    p_reactor_data = &impl->reactor_data_;
    if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
    {
      reactor = (boost::asio::detail::epoll_reactor *)impl;
      __asan_report_load4(impl);
    }
    boost::asio::detail::epoll_reactor::start_op(
      reactor,
      op_type,
      impl->socket_,
      p_reactor_data,
      op,
      v10,
      is_non_blocking);
  }
  else
  {
LABEL_21:
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::epoll_reactor::post_immediate_completion(this->reactor_, op, is_continuation);
  }
};

// Line 257: range 000000000C64CA94-000000000C64CB47
void __cdecl boost::asio::detail::reactive_socket_service_base::start_accept_op(
        boost::asio::detail::reactive_socket_service_base *const this,
        boost::asio::detail::reactive_socket_service_base::base_implementation_type *impl,
        boost::asio::detail::reactor_op *op,
        bool is_continuation,
        bool peer_is_open)
{
  if ( !peer_is_open )
  {
    boost::asio::detail::reactive_socket_service_base::start_op(this, impl, 0, op, is_continuation, 1, 0);
  }
  else
  {
    boost::system::error_code::operator=<boost::asio::error::misc_errors>(&op->ec_, already_open);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::epoll_reactor::post_immediate_completion(this->reactor_, op, is_continuation);
  }
};
