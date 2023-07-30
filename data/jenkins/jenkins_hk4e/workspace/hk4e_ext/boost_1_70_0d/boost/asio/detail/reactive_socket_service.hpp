// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/reactive_socket_service.hpp

// Line 48: range 000000000C6A399C-000000000C6A39E9
void __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::~reactive_socket_service(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~execution_context_service_base(this);
};

// Line 48: range 000000000C6A39EA-000000000C6A3A14
void __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::~reactive_socket_service(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this)
{
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::~reactive_socket_service(this);
  operator delete(this, 0x30uLL);
};

// Line 67: range 000000000C6A1BE4-000000000C6A1C4A
void __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type::implementation_type(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type *const this)
{
  boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> v1; // [rsp+10h] [rbp-30h] BYREF

  boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::basic_endpoint(&v1);
  if ( *(_BYTE *)(((unsigned __int64)&this->protocol_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protocol_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protocol_);
  }
  this->protocol_ = boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::protocol(&v1);
};

// Line 77: range 000000000C6A33B4-000000000C6A3446
void __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::reactive_socket_service(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this,
        boost::asio::execution_context *context)
{
  int (**v2)(...); // rdx

  boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::execution_context_service_base(
    this,
    context);
  boost::asio::detail::reactive_socket_service_base::reactive_socket_service_base(
    &this->boost::asio::detail::reactive_socket_service_base,
    context);
  v2 = (int (**)(...))(&`vtable for'boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v2;
};

// Line 85: range 000000000C6AED58-000000000C6AED76
void __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::shutdown(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this)
{
  boost::asio::detail::reactive_socket_service_base::base_shutdown(&this->boost::asio::detail::reactive_socket_service_base);
};

// Line 125: range 000000000C6BF71A-000000000C6BF850
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this,
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type *impl,
        const boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::protocol_type *protocol,
        boost::system::error_code *ec)
{
  int v4; // r13d
  int v5; // r12d
  int v6; // edx
  const boost::system::error_category *cat; // rdx
  __int64 v8; // rax
  boost::system::error_code v11; // [rsp+20h] [rbp-30h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v4 = boost::asio::ip::tcp::protocol(protocol);
  v5 = boost::asio::ip::tcp::type(protocol);
  v6 = boost::asio::ip::tcp::family(protocol);
  v11 = boost::asio::detail::reactive_socket_service_base::do_open(
          &this->boost::asio::detail::reactive_socket_service_base,
          impl,
          v6,
          v5,
          v4,
          ec);
  if ( !boost::system::error_code::operator bool(&v11) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&impl->protocol_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&impl->protocol_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&impl->protocol_);
    }
    if ( *(_BYTE *)(((unsigned __int64)protocol >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)protocol & 7) + 3) >= *(_BYTE *)(((unsigned __int64)protocol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(protocol);
    }
    impl->protocol_ = (boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::protocol_type)protocol->family_;
  }
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_load16(ec);
  cat = ec->cat_;
  v8 = *(_QWORD *)&ec->val_;
  result.cat_ = cat;
  result.val_ = v8;
  result.failed_ = BYTE4(v8);
  return result;
};

// Line 135: range 000000000C6EF0A4-000000000C6EF1BB
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::assign(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this,
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type *impl,
        const boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::protocol_type *protocol,
        const boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::native_handle_type *native_socket,
        boost::system::error_code *ec)
{
  int v5; // esi
  const boost::system::error_category *cat; // rdx
  __int64 v7; // rax
  boost::system::error_code v12; // [rsp+30h] [rbp-20h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v5 = boost::asio::ip::tcp::type(protocol);
  v12 = boost::asio::detail::reactive_socket_service_base::do_assign(
          &this->boost::asio::detail::reactive_socket_service_base,
          impl,
          v5,
          native_socket,
          ec);
  if ( !boost::system::error_code::operator bool(&v12) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&impl->protocol_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&impl->protocol_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&impl->protocol_);
    }
    if ( *(_BYTE *)(((unsigned __int64)protocol >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)protocol & 7) + 3) >= *(_BYTE *)(((unsigned __int64)protocol >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(protocol);
    }
    impl->protocol_ = (boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::protocol_type)protocol->family_;
  }
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_load16(ec);
  cat = ec->cat_;
  v7 = *(_QWORD *)&ec->val_;
  result.cat_ = cat;
  result.val_ = v7;
  result.failed_ = BYTE4(v7);
  return result;
};

// Line 151: range 000000000C6C0022-000000000C6C00D2
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::bind(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this,
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type *impl,
        const boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::endpoint_type *endpoint,
        boost::system::error_code *ec)
{
  std::size_t v4; // rbx
  const boost::asio::detail::socket_addr_type *v5; // rsi
  const boost::system::error_category *cat; // rdx
  __int64 v7; // rax
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v4 = boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::size(endpoint);
  v5 = boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::data(endpoint);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(impl);
  }
  boost::asio::detail::socket_ops::bind(impl->socket_, v5, v4, ec);
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_load16(ec);
  cat = ec->cat_;
  v7 = *(_QWORD *)&ec->val_;
  result.cat_ = cat;
  result.val_ = v7;
  result.failed_ = BYTE4(v7);
  return result;
};

// Line 160: range 000000000C6BF852-000000000C6BF965
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::set_option<boost::asio::detail::socket_option::boolean<1,2>>(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this,
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type *impl,
        const boost::asio::detail::socket_option::boolean<1,2> *option,
        boost::system::error_code *ec)
{
  std::size_t v4; // r13
  const int *v5; // r12
  int v6; // ebx
  int v7; // edi
  boost::asio::detail::socket_ops::state_type *p_state; // rsi
  const boost::system::error_category *cat; // rdx
  __int64 v10; // rax
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v4 = boost::asio::detail::socket_option::boolean<1,2>::size<boost::asio::ip::tcp>(option, &impl->protocol_);
  v5 = boost::asio::detail::socket_option::boolean<1,2>::data<boost::asio::ip::tcp>(option, &impl->protocol_);
  v6 = boost::asio::detail::socket_option::boolean<1,2>::name<boost::asio::ip::tcp>(option, &impl->protocol_);
  v7 = boost::asio::detail::socket_option::boolean<1,2>::level<boost::asio::ip::tcp>(option, &impl->protocol_);
  p_state = &impl->state_;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    v7 = (int)impl;
    __asan_report_load4(impl);
  }
  boost::asio::detail::socket_ops::setsockopt(impl->socket_, p_state, v7, v6, v5, v4, ec);
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_load16(ec);
  cat = ec->cat_;
  v10 = *(_QWORD *)&ec->val_;
  result.cat_ = cat;
  result.val_ = v10;
  result.failed_ = BYTE4(v10);
  return result;
};

// Line 160: range 000000000C6BF966-000000000C6BFA79
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::set_option<boost::asio::detail::socket_option::integer<1,7>>(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this,
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type *impl,
        const boost::asio::detail::socket_option::integer<1,7> *option,
        boost::system::error_code *ec)
{
  std::size_t v4; // r13
  const int *v5; // r12
  int v6; // ebx
  int v7; // edi
  boost::asio::detail::socket_ops::state_type *p_state; // rsi
  const boost::system::error_category *cat; // rdx
  __int64 v10; // rax
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v4 = boost::asio::detail::socket_option::integer<1,7>::size<boost::asio::ip::tcp>(option, &impl->protocol_);
  v5 = boost::asio::detail::socket_option::integer<1,7>::data<boost::asio::ip::tcp>(option, &impl->protocol_);
  v6 = boost::asio::detail::socket_option::integer<1,7>::name<boost::asio::ip::tcp>(option, &impl->protocol_);
  v7 = boost::asio::detail::socket_option::integer<1,7>::level<boost::asio::ip::tcp>(option, &impl->protocol_);
  p_state = &impl->state_;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    v7 = (int)impl;
    __asan_report_load4(impl);
  }
  boost::asio::detail::socket_ops::setsockopt(impl->socket_, p_state, v7, v6, v5, v4, ec);
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_load16(ec);
  cat = ec->cat_;
  v10 = *(_QWORD *)&ec->val_;
  result.cat_ = cat;
  result.val_ = v10;
  result.failed_ = BYTE4(v10);
  return result;
};

// Line 160: range 000000000C6BFA7A-000000000C6BFB8D
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::set_option<boost::asio::detail::socket_option::integer<1,8>>(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this,
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type *impl,
        const boost::asio::detail::socket_option::integer<1,8> *option,
        boost::system::error_code *ec)
{
  std::size_t v4; // r13
  const int *v5; // r12
  int v6; // ebx
  int v7; // edi
  boost::asio::detail::socket_ops::state_type *p_state; // rsi
  const boost::system::error_category *cat; // rdx
  __int64 v10; // rax
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v4 = boost::asio::detail::socket_option::integer<1,8>::size<boost::asio::ip::tcp>(option, &impl->protocol_);
  v5 = boost::asio::detail::socket_option::integer<1,8>::data<boost::asio::ip::tcp>(option, &impl->protocol_);
  v6 = boost::asio::detail::socket_option::integer<1,8>::name<boost::asio::ip::tcp>(option, &impl->protocol_);
  v7 = boost::asio::detail::socket_option::integer<1,8>::level<boost::asio::ip::tcp>(option, &impl->protocol_);
  p_state = &impl->state_;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    v7 = (int)impl;
    __asan_report_load4(impl);
  }
  boost::asio::detail::socket_ops::setsockopt(impl->socket_, p_state, v7, v6, v5, v4, ec);
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_load16(ec);
  cat = ec->cat_;
  v10 = *(_QWORD *)&ec->val_;
  result.cat_ = cat;
  result.val_ = v10;
  result.failed_ = BYTE4(v10);
  return result;
};

// Line 171: range 000000000C6BFB8E-000000000C6BFDD6
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::get_option<boost::asio::detail::socket_option::integer<1,7>>(
        const boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this,
        const boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type *impl,
        boost::asio::detail::socket_option::integer<1,7> *option,
        boost::system::error_code *ec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int *v7; // r15
  int v8; // r14d
  int v9; // edi
  boost::asio::detail::socket_ops::state_type state; // si
  const boost::system::error_category *cat; // rdx
  __int64 v12; // rax
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 size:174";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::get_option<boost::asio::detail::socket_option::integer<1,7>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = boost::asio::detail::socket_option::integer<1,7>::size<boost::asio::ip::tcp>(
                           option,
                           &impl->protocol_);
  v7 = boost::asio::detail::socket_option::integer<1,7>::data<boost::asio::ip::tcp>(option, &impl->protocol_);
  v8 = boost::asio::detail::socket_option::integer<1,7>::name<boost::asio::ip::tcp>(option, &impl->protocol_);
  v9 = boost::asio::detail::socket_option::integer<1,7>::level<boost::asio::ip::tcp>(option, &impl->protocol_);
  if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
  {
    v9 = (_DWORD)impl + 4;
    __asan_report_load1(&impl->state_);
  }
  state = impl->state_;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    v9 = (int)impl;
    __asan_report_load4(impl);
  }
  boost::asio::detail::socket_ops::getsockopt(impl->socket_, state, v9, v8, v7, (size_t *)(v4 + 32), ec);
  if ( !boost::system::error_code::operator bool(ec) )
    boost::asio::detail::socket_option::integer<1,7>::resize<boost::asio::ip::tcp>(
      option,
      &impl->protocol_,
      *(_QWORD *)(v4 + 32));
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_load16(ec);
  cat = ec->cat_;
  v12 = *(_QWORD *)&ec->val_;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result.cat_ = cat;
  result.val_ = v12;
  result.failed_ = BYTE4(v12);
  return result;
};

// Line 171: range 000000000C6BFDD8-000000000C6C0020
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::get_option<boost::asio::detail::socket_option::integer<1,8>>(
        const boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this,
        const boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type *impl,
        boost::asio::detail::socket_option::integer<1,8> *option,
        boost::system::error_code *ec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int *v7; // r15
  int v8; // r14d
  int v9; // edi
  boost::asio::detail::socket_ops::state_type state; // si
  const boost::system::error_category *cat; // rdx
  __int64 v12; // rax
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 size:174";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::get_option<boost::asio::detail::socket_option::integer<1,8>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = boost::asio::detail::socket_option::integer<1,8>::size<boost::asio::ip::tcp>(
                           option,
                           &impl->protocol_);
  v7 = boost::asio::detail::socket_option::integer<1,8>::data<boost::asio::ip::tcp>(option, &impl->protocol_);
  v8 = boost::asio::detail::socket_option::integer<1,8>::name<boost::asio::ip::tcp>(option, &impl->protocol_);
  v9 = boost::asio::detail::socket_option::integer<1,8>::level<boost::asio::ip::tcp>(option, &impl->protocol_);
  if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
  {
    v9 = (_DWORD)impl + 4;
    __asan_report_load1(&impl->state_);
  }
  state = impl->state_;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    v9 = (int)impl;
    __asan_report_load4(impl);
  }
  boost::asio::detail::socket_ops::getsockopt(impl->socket_, state, v9, v8, v7, (size_t *)(v4 + 32), ec);
  if ( !boost::system::error_code::operator bool(ec) )
    boost::asio::detail::socket_option::integer<1,8>::resize<boost::asio::ip::tcp>(
      option,
      &impl->protocol_,
      *(_QWORD *)(v4 + 32));
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_load16(ec);
  cat = ec->cat_;
  v12 = *(_QWORD *)&ec->val_;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result.cat_ = cat;
  result.val_ = v12;
  result.failed_ = BYTE4(v12);
  return result;
};

// Line 419: range 000000000C6CE46E-000000000C6CE72F
void __cdecl boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::async_accept<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *const this,
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type *impl,
        boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *peer,
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::endpoint_type *peer_endpoint,
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *handler,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *io_ex)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> > *v9; // r14
  const boost::asio::ip::tcp *p_protocol; // rdi
  boost::asio::detail::socket_ops::state_type state; // dl
  bool is_open; // al
  bool is_continuation; // [rsp+4Fh] [rbp-91h]
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 24 5 p:427";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::async_accept<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218103808;
  v8[536862722] = -202116109;
  is_continuation = boost_asio_handler_cont_helpers::is_continuation<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>(handler);
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 32) = std::addressof<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>(handler);
  *(_QWORD *)(v6 + 40) = boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::allocate(handler);
  v9 = (boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> > *)operator new(0xB0uLL, *(void **)(v6 + 40));
  p_protocol = &impl->protocol_;
  if ( *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)impl + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&impl->state_ >> 3) + 0x7FFF8000) )
  {
    p_protocol = (const boost::asio::ip::tcp *)&impl->state_;
    __asan_report_load1(&impl->state_);
  }
  state = impl->state_;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    p_protocol = (const boost::asio::ip::tcp *)impl;
    __asan_report_load4(impl);
  }
  boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::reactive_socket_accept_op(
    v9,
    impl->socket_,
    state,
    peer,
    p_protocol,
    peer_endpoint,
    handler,
    io_ex);
  *(_QWORD *)(v6 + 48) = v9;
  is_open = boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::is_open(peer);
  boost::asio::detail::reactive_socket_service_base::start_accept_op(
    &this->boost::asio::detail::reactive_socket_service_base,
    impl,
    *(boost::asio::detail::reactor_op **)(v6 + 48),
    is_continuation,
    is_open);
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 40) = *(_QWORD *)(v6 + 48);
  boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::~ptr((boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v6 + 32));
  if ( v19 == (char *)v6 )
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
