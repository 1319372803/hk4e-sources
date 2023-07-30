// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/basic_socket_acceptor.hpp

// Line 130: range 000000000C6A0446-000000000C6A0497
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::basic_socket_acceptor<boost::asio::io_context>(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this,
        boost::asio::io_context *context,
        std::enable_if<true,void>::type *a3)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::io_object_impl<boost::asio::io_context>(
    &this->impl_,
    context,
    0LL);
};

// Line 428: range 000000000C6A0498-000000000C6A04BE
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::~basic_socket_acceptor(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::~io_object_impl(&this->impl_);
  boost::asio::socket_base::~socket_base((boost::asio::socket_base *const)this);
};

// Line 453: range 000000000C6B8E24-000000000C6B8F40
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::open(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this,
        const boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::protocol_type *protocol)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *service; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rsi
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:455";
  *(_QWORD *)(v2 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::open;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  service = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(
    service,
    implementation,
    protocol,
    (boost::system::error_code *)(v2 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32), "open");
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 525: range 000000000C6B3D3E-000000000C6B3D78
bool __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::is_open(
        const boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this)
{
  boost::asio::detail::reactive_socket_service_base *v1; // rbx
  const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rax

  v1 = &boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_)->boost::asio::detail::reactive_socket_service_base;
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  return boost::asio::detail::reactive_socket_service_base::is_open(v1, implementation);
};

// Line 548: range 000000000C6B9848-000000000C6B9964
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::bind(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this,
        const boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::endpoint_type *endpoint)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *service; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rsi
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:550";
  *(_QWORD *)(v2 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::bind;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  service = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::bind(
    service,
    implementation,
    endpoint,
    (boost::system::error_code *)(v2 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32), "bind");
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 595: range 000000000C6B9966-000000000C6B9A80
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::listen(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this,
        int backlog)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::asio::detail::reactive_socket_service_base *v5; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:597";
  *(_QWORD *)(v2 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::listen;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v5 = &boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_)->boost::asio::detail::reactive_socket_service_base;
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service_base::listen(
    v5,
    implementation,
    backlog,
    (boost::system::error_code *)(v2 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32), "listen");
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

// Line 640: range 000000000C6BA56E-000000000C6BA683
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::close(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  boost::asio::detail::reactive_socket_service_base *v4; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rax
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 ec:642";
  *(_QWORD *)(v1 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::close;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(_DWORD *)(v1 + 32) = 0;
  *(_BYTE *)(v1 + 36) = 0;
  *(_QWORD *)(v1 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v4 = &boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_)->boost::asio::detail::reactive_socket_service_base;
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service_base::close(v4, implementation, (boost::system::error_code *)(v1 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v1 + 32), "close");
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

// Line 746: range 000000000C6B3976-000000000C6B3A8B
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::cancel(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  boost::asio::detail::reactive_socket_service_base *v4; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rax
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 ec:748";
  *(_QWORD *)(v1 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::cancel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(_DWORD *)(v1 + 32) = 0;
  *(_BYTE *)(v1 + 36) = 0;
  *(_QWORD *)(v1 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v4 = &boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_)->boost::asio::detail::reactive_socket_service_base;
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service_base::cancel(v4, implementation, (boost::system::error_code *)(v1 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v1 + 32), "cancel");
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

// Line 789: range 000000000C6B904A-000000000C6B9166
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::boolean<1,2>>(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this,
        const boost::asio::detail::socket_option::boolean<1,2> *option)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *service; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rsi
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:791";
  *(_QWORD *)(v2 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::boolean<1,2>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  service = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::set_option<boost::asio::detail::socket_option::boolean<1,2>>(
    service,
    implementation,
    option,
    (boost::system::error_code *)(v2 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32), "set_option");
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 789: range 000000000C6B9168-000000000C6B9284
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::integer<1,7>>(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this,
        const boost::asio::detail::socket_option::integer<1,7> *option)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *service; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rsi
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:791";
  *(_QWORD *)(v2 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::integer<1,7>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  service = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::set_option<boost::asio::detail::socket_option::integer<1,7>>(
    service,
    implementation,
    option,
    (boost::system::error_code *)(v2 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32), "set_option");
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 789: range 000000000C6B9286-000000000C6B93A2
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::integer<1,8>>(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this,
        const boost::asio::detail::socket_option::integer<1,8> *option)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *service; // r14
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rsi
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:791";
  *(_QWORD *)(v2 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::integer<1,8>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  service = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::set_option<boost::asio::detail::socket_option::integer<1,8>>(
    service,
    implementation,
    option,
    (boost::system::error_code *)(v2 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32), "set_option");
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 853: range 000000000C6B93F4-000000000C6B9510
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::get_option<boost::asio::detail::socket_option::integer<1,7>>(
        const boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this,
        boost::asio::detail::socket_option::integer<1,7> *option)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *service; // r14
  const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rsi
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:855";
  *(_QWORD *)(v2 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::get_option<boost::asio::detail::socket_option::integer<1,7>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  service = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::get_option<boost::asio::detail::socket_option::integer<1,7>>(
    service,
    implementation,
    option,
    (boost::system::error_code *)(v2 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32), "get_option");
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 853: range 000000000C6B9562-000000000C6B967E
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::get_option<boost::asio::detail::socket_option::integer<1,8>>(
        const boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this,
        boost::asio::detail::socket_option::integer<1,8> *option)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *service; // r14
  const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rsi
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:855";
  *(_QWORD *)(v2 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::get_option<boost::asio::detail::socket_option::integer<1,8>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  service = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::get_option<boost::asio::detail::socket_option::integer<1,8>>(
    service,
    implementation,
    option,
    (boost::system::error_code *)(v2 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32), "get_option");
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1330: range 000000000C6BA4E8-000000000C6BA539
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::async_accept<boost::asio::ip::tcp,boost::asio::executor,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *const this,
        boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *peer,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *handler,
        std::enable_if<true,void>::type *a4)
{
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> **v4; // r9
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::initiate_async_accept initiation; // [rsp+27h] [rbp-19h] BYREF
  boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *v6; // [rsp+28h] [rbp-18h] BYREF
  boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *v7; // [rsp+30h] [rbp-10h] BYREF
  boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *v8; // [rsp+38h] [rbp-8h] BYREF

  v8 = 0LL;
  v7 = peer;
  v6 = this;
  boost::asio::async_initiate<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,void ()(boost::system::error_code),boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::initiate_async_accept,boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>*,boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *>(
    &initiation,
    handler,
    &v6,
    &v7,
    &v8,
    v4);
};

// Line 2329: range 000000000C6C939C-000000000C6C94E4
void __cdecl boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::initiate_async_accept::operator()<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::ip::tcp,boost::asio::executor>(
        const boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::initiate_async_accept *const this,
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *handler,
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor> *self,
        boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *peer,
        boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::endpoint_type *peer_endpoint)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *service; // r14
  const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_executor_type *implementation_executor; // r15
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *v10; // r13
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rsi
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 13 handler2:2337";
  *(_QWORD *)(v5 + 16) = boost::asio::basic_socket_acceptor<boost::asio::ip::tcp,boost::asio::executor>::initiate_async_accept::operator()<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::ip::tcp,boost::asio::executor>;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  boost::asio::detail::non_const_lvalue<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>::non_const_lvalue(
    (boost::asio::detail::non_const_lvalue<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> > *const)(v5 + 32),
    handler);
  service = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&self->impl_);
  implementation_executor = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation_executor(&self->impl_);
  v10 = *(boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> **)(v5 + 32);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&self->impl_);
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::async_accept<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    service,
    implementation,
    peer,
    peer_endpoint,
    v10,
    implementation_executor);
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
