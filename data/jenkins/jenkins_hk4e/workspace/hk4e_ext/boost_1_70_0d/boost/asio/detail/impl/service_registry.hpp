// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/service_registry.hpp

// Line 25: range 0000000019B8E1A8-0000000019B8E2AE
boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *__fastcall boost::asio::detail::service_registry::use_service<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(
        boost::asio::detail::service_registry *const this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r13
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *result; // rax
  __int64 v4; // rax
  _BYTE v5[104]; // [rsp+0h] [rbp-68h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 key:27";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::service_registry::use_service<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202178560;
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 40) = 0LL;
  boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(
    (boost::asio::execution_context::service::key *)(v1 + 32),
    &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_ >> 3) + 0x7FFF8000) )
  {
    result = (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *)__asan_report_load8(&this->owner_);
  }
  else
  {
    result = (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *)boost::asio::detail::service_registry::do_use_service(this, (const boost::asio::execution_context::service::key *)(v1 + 32), boost::asio::detail::service_registry::create<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::execution_context>, this->owner_);
    if ( v5 == (_BYTE *)v1 )
    {
      *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
      return result;
    }
  }
  *(_QWORD *)v1 = 1172321806LL;
  *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  return result;
};

// Line 25: range 000000000C669F88-000000000C66A0A9
boost::asio::detail::epoll_reactor *__cdecl boost::asio::detail::service_registry::use_service<boost::asio::detail::epoll_reactor>(
        boost::asio::detail::service_registry *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::epoll_reactor *result; // rax
  char v5[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 key:27";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::service_registry::use_service<boost::asio::detail::epoll_reactor>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::asio::execution_context::service::key::key((boost::asio::execution_context::service::key *const)(v1 + 32));
  boost::asio::detail::service_registry::init_key<boost::asio::detail::epoll_reactor>(
    (boost::asio::execution_context::service::key *)(v1 + 32),
    0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->owner_);
  result = (boost::asio::detail::epoll_reactor *)boost::asio::detail::service_registry::do_use_service(
                                                   this,
                                                   (const boost::asio::execution_context::service::key *)(v1 + 32),
                                                   (boost::asio::detail::service_registry::factory_type)boost::asio::detail::service_registry::create<boost::asio::detail::epoll_reactor,boost::asio::execution_context>,
                                                   this->owner_);
  if ( v5 == (char *)v1 )
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

// Line 25: range 000000000C669A6C-000000000C669B8D
boost::asio::detail::scheduler *__cdecl boost::asio::detail::service_registry::use_service<boost::asio::detail::scheduler>(
        boost::asio::detail::service_registry *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::scheduler *result; // rax
  char v5[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 key:27";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::service_registry::use_service<boost::asio::detail::scheduler>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::asio::execution_context::service::key::key((boost::asio::execution_context::service::key *const)(v1 + 32));
  boost::asio::detail::service_registry::init_key<boost::asio::detail::scheduler>(
    (boost::asio::execution_context::service::key *)(v1 + 32),
    0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->owner_);
  result = (boost::asio::detail::scheduler *)boost::asio::detail::service_registry::do_use_service(
                                               this,
                                               (const boost::asio::execution_context::service::key *)(v1 + 32),
                                               (boost::asio::detail::service_registry::factory_type)boost::asio::detail::service_registry::create<boost::asio::detail::scheduler,boost::asio::execution_context>,
                                               this->owner_);
  if ( v5 == (char *)v1 )
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

// Line 34: range 000000000C6CF7AA-000000000C6CF8A6
boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *__cdecl boost::asio::detail::service_registry::use_service<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(
        boost::asio::detail::service_registry *const this,
        boost::asio::io_context *owner)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *result; // rax
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 key:36";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::service_registry::use_service<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::execution_context::service::key::key((boost::asio::execution_context::service::key *const)(v2 + 32));
  boost::asio::detail::service_registry::init_key<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(
    (boost::asio::execution_context::service::key *)(v2 + 32),
    0LL);
  result = (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *)boost::asio::detail::service_registry::do_use_service(this, (const boost::asio::execution_context::service::key *)(v2 + 32), (boost::asio::detail::service_registry::factory_type)boost::asio::detail::service_registry::create<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::io_context>, owner);
  if ( v6 == (char *)v2 )
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

// Line 34: range 000000000C6A23C8-000000000C6A24C4
boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *__cdecl boost::asio::detail::service_registry::use_service<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>(
        boost::asio::detail::service_registry *const this,
        boost::asio::io_context *owner)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *result; // rax
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 key:36";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::service_registry::use_service<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::execution_context::service::key::key((boost::asio::execution_context::service::key *const)(v2 + 32));
  boost::asio::detail::service_registry::init_key<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>(
    (boost::asio::execution_context::service::key *)(v2 + 32),
    0LL);
  result = (boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *)boost::asio::detail::service_registry::do_use_service(
                                                                                   this,
                                                                                   (const boost::asio::execution_context::service::key *)(v2 + 32),
                                                                                   (boost::asio::detail::service_registry::factory_type)boost::asio::detail::service_registry::create<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::io_context>,
                                                                                   owner);
  if ( v6 == (char *)v2 )
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

// Line 34: range 000000000C66CB2E-000000000C66CC2A
boost::asio::detail::strand_service *__cdecl boost::asio::detail::service_registry::use_service<boost::asio::detail::strand_service>(
        boost::asio::detail::service_registry *const this,
        boost::asio::io_context *owner)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::asio::detail::strand_service *result; // rax
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 key:36";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::service_registry::use_service<boost::asio::detail::strand_service>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::execution_context::service::key::key((boost::asio::execution_context::service::key *const)(v2 + 32));
  boost::asio::detail::service_registry::init_key<boost::asio::detail::strand_service>(
    (boost::asio::execution_context::service::key *)(v2 + 32),
    0LL);
  result = (boost::asio::detail::strand_service *)boost::asio::detail::service_registry::do_use_service(
                                                    this,
                                                    (const boost::asio::execution_context::service::key *)(v2 + 32),
                                                    (boost::asio::detail::service_registry::factory_type)boost::asio::detail::service_registry::create<boost::asio::detail::strand_service,boost::asio::io_context>,
                                                    owner);
  if ( v6 == (char *)v2 )
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

// Line 43: range 000000000C66A0D0-000000000C66A1C0
void __cdecl boost::asio::detail::service_registry::add_service<boost::asio::detail::scheduler>(
        boost::asio::detail::service_registry *const this,
        boost::asio::detail::scheduler *new_service)
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
  *(_QWORD *)(v2 + 8) = "1 32 16 6 key:45";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::service_registry::add_service<boost::asio::detail::scheduler>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  boost::asio::execution_context::service::key::key((boost::asio::execution_context::service::key *const)(v2 + 32));
  boost::asio::detail::service_registry::init_key<boost::asio::detail::scheduler>(
    (boost::asio::execution_context::service::key *)(v2 + 32),
    0LL);
  boost::asio::detail::service_registry::do_add_service(
    this,
    (const boost::asio::execution_context::service::key *)(v2 + 32),
    new_service);
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

// Line 59: range 000000000C6D614C-000000000C6D61C0
void boost::asio::detail::service_registry::init_key<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(
        boost::asio::execution_context::service::key *key,
        ...)
{
  boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(
    key,
    &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
};

// Line 59: range 000000000C676F5C-000000000C676FD0
void boost::asio::detail::service_registry::init_key<boost::asio::detail::epoll_reactor>(
        boost::asio::execution_context::service::key *key,
        ...)
{
  boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::epoll_reactor>(
    key,
    &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
};

// Line 59: range 000000000C6A2C2C-000000000C6A2CA0
void boost::asio::detail::service_registry::init_key<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>(
        boost::asio::execution_context::service::key *key,
        ...)
{
  boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>(
    key,
    &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
};

// Line 59: range 000000000C676DCE-000000000C676E42
void boost::asio::detail::service_registry::init_key<boost::asio::detail::scheduler>(
        boost::asio::execution_context::service::key *key,
        ...)
{
  boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::scheduler>(
    key,
    &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
};

// Line 59: range 000000000C6794FE-000000000C679572
void boost::asio::detail::service_registry::init_key<boost::asio::detail::strand_service>(
        boost::asio::execution_context::service::key *key,
        ...)
{
  boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::strand_service>(
    key,
    &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
};

// Line 76: range 000000000C6DC906-000000000C6DC978
void __cdecl boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(
        boost::asio::execution_context::service::key *key,
        const boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > > *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  key->type_info_ = (const std::type_info *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>;
  if ( *(_BYTE *)(((unsigned __int64)&key->id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  key->id_ = 0LL;
};

// Line 76: range 000000000C6817C0-000000000C681832
void __cdecl boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::epoll_reactor>(
        boost::asio::execution_context::service::key *key,
        const boost::asio::detail::service_id<boost::asio::detail::epoll_reactor> *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  key->type_info_ = (const std::type_info *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::epoll_reactor>;
  if ( *(_BYTE *)(((unsigned __int64)&key->id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  key->id_ = 0LL;
};

// Line 76: range 000000000C6A32C6-000000000C6A3338
void __cdecl boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>(
        boost::asio::execution_context::service::key *key,
        const boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> > *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  key->type_info_ = (const std::type_info *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>;
  if ( *(_BYTE *)(((unsigned __int64)&key->id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  key->id_ = 0LL;
};

// Line 76: range 000000000C68174C-000000000C6817BE
void __cdecl boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::scheduler>(
        boost::asio::execution_context::service::key *key,
        const boost::asio::detail::service_id<boost::asio::detail::scheduler> *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  key->type_info_ = (const std::type_info *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::scheduler>;
  if ( *(_BYTE *)(((unsigned __int64)&key->id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  key->id_ = 0LL;
};

// Line 76: range 000000000C682AD8-000000000C682B4A
void __cdecl boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::strand_service>(
        boost::asio::execution_context::service::key *key,
        const boost::asio::detail::service_id<boost::asio::detail::strand_service> *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  key->type_info_ = (const std::type_info *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::strand_service>;
  if ( *(_BYTE *)(((unsigned __int64)&key->id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  key->id_ = 0LL;
};

// Line 76: range 0000000014ED9EB2-0000000014ED9FEA
void __fastcall boost::asio::detail::service_registry::init_key_from_id<boost::asio::detail::strand_executor_service>(
        boost::asio::execution_context::service::key *key,
        const boost::asio::detail::service_id<boost::asio::detail::strand_executor_service> *a2)
{
  const boost::asio::execution_context::id **p_id; // rax
  boost::asio::detail::service_registry *v3; // rdi

  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    key->type_info_ = (const std::type_info *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::strand_executor_service>;
    p_id = &key->id_;
    if ( !*(_BYTE *)(((unsigned __int64)&key->id_ >> 3) + 0x7FFF8000) )
    {
      key->id_ = 0LL;
      return;
    }
  }
  v3 = (boost::asio::detail::service_registry *)p_id;
  __asan_report_store8();
  boost::asio::detail::service_registry::use_service<boost::asio::detail::strand_executor_service>(
    v3,
    (boost::asio::io_context *)a2);
};

// Line 85: range 000000000C6D61C2-000000000C6D621A
boost::asio::execution_context::service *__cdecl boost::asio::detail::service_registry::create<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::io_context>(
        void *owner)
{
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *v1; // rbx

  v1 = (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *)operator new(0x70uLL);
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::deadline_timer_service(
    v1,
    (boost::asio::execution_context *)owner);
  return v1;
};

// Line 85: range 000000000C676FD2-000000000C67702A
boost::asio::execution_context::service *__cdecl boost::asio::detail::service_registry::create<boost::asio::detail::epoll_reactor,boost::asio::execution_context>(
        void *owner)
{
  boost::asio::detail::epoll_reactor *v1; // rbx

  v1 = (boost::asio::detail::epoll_reactor *)operator new(0xD0uLL);
  boost::asio::detail::epoll_reactor::epoll_reactor(v1, (boost::asio::execution_context *)owner);
  return v1;
};

// Line 85: range 000000000C6A2CA2-000000000C6A2CFA
boost::asio::execution_context::service *__cdecl boost::asio::detail::service_registry::create<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::io_context>(
        void *owner)
{
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *v1; // rbx

  v1 = (boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> *)operator new(0x30uLL);
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::reactive_socket_service(
    v1,
    (boost::asio::execution_context *)owner);
  return v1;
};

// Line 85: range 000000000C676E44-000000000C676EA6
boost::asio::execution_context::service *__cdecl boost::asio::detail::service_registry::create<boost::asio::detail::scheduler,boost::asio::execution_context>(
        void *owner)
{
  boost::asio::detail::scheduler *v1; // rbx

  v1 = (boost::asio::detail::scheduler *)operator new(0xF8uLL);
  boost::asio::detail::scheduler::scheduler(v1, (boost::asio::execution_context *)owner, 0, 1);
  return v1;
};

// Line 85: range 000000000C679574-000000000C6795CC
boost::asio::execution_context::service *__cdecl boost::asio::detail::service_registry::create<boost::asio::detail::strand_service,boost::asio::io_context>(
        void *owner)
{
  boost::asio::detail::strand_service *v1; // rbx

  v1 = (boost::asio::detail::strand_service *)operator new(0x668uLL);
  boost::asio::detail::strand_service::strand_service(v1, (boost::asio::io_context *)owner);
  return v1;
};

// Line 85: range 0000000019B8DEFC-0000000019B8E1A3
boost::asio::execution_context::service *__fastcall boost::asio::detail::service_registry::create<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>,boost::asio::execution_context>(
        void *owner)
{
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *v1; // r12
  unsigned __int64 v2; // rbx
  boost::asio::detail::epoll_reactor *v3; // rax
  boost::asio::detail::scheduler **p_scheduler; // rdi
  struct _Unwind_Exception *v6; // rbp
  void *v7; // rdi

  v2 = operator new(0x60uLL);
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_15;
  }
  *(_QWORD *)(v2 + 8) = 0LL;
  if ( *(_BYTE *)(((v2 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  *(_QWORD *)(v2 + 16) = 0LL;
  if ( *(_BYTE *)(((v2 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
    goto LABEL_17;
  }
  *(_QWORD *)(v2 + 24) = owner;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
    goto LABEL_18;
  }
  *(_QWORD *)(v2 + 32) = 0LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  *(_QWORD *)v2 = &`vtable for'boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>
                + 2;
  v1 = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)(v2 + 40);
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
    goto LABEL_20;
  }
  *(_QWORD *)(v2 + 48) = 0LL;
  if ( *(_BYTE *)(((v2 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8();
    goto LABEL_21;
  }
  *(_QWORD *)(v2 + 40) = &`vtable for'boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>
                       + 2;
  if ( *(_BYTE *)(((v2 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  *(_QWORD *)(v2 + 56) = 0LL;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  *(_QWORD *)(v2 + 64) = 0LL;
  if ( *(_BYTE *)(((v2 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8();
    goto LABEL_24;
  }
  *(_QWORD *)(v2 + 72) = 0LL;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  *(_QWORD *)(v2 + 80) = 0LL;
  if ( !*(_BYTE *)(((unsigned __int64)owner >> 3) + 0x7FFF8000) )
  {
    v3 = boost::asio::detail::service_registry::use_service<boost::asio::detail::epoll_reactor>(*(boost::asio::detail::service_registry *const *)owner);
    goto LABEL_26;
  }
LABEL_25:
  v3 = (boost::asio::detail::epoll_reactor *)__asan_report_load8(owner);
LABEL_26:
  p_scheduler = (boost::asio::detail::scheduler **)(v2 + 88);
  if ( *(_BYTE *)(((v2 + 88) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    *(_QWORD *)(v2 + 88) = v3;
    p_scheduler = &v3->scheduler_;
    if ( !*(_BYTE *)(((unsigned __int64)&v3->scheduler_ >> 3) + 0x7FFF8000) )
    {
      boost::asio::detail::scheduler::init_task(v3->scheduler_);
      goto LABEL_31;
    }
  }
  __asan_report_load8(p_scheduler);
LABEL_31:
  if ( *(_BYTE *)(((v2 + 88) >> 3) + 0x7FFF8000) )
  {
    v6 = (struct _Unwind_Exception *)__asan_report_load8(v2 + 88);
    if ( *(_BYTE *)(((v2 + 40) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v2 + 40) = &`vtable for'boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>
                         + 2;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 64);
    v7 = *(void **)(v2 + 64);
    if ( v7 )
      operator delete(v7);
    operator delete((void *)v2, 0x60uLL);
    __asan_handle_no_return(v2);
    _Unwind_Resume(v6);
  }
  boost::asio::detail::epoll_reactor::add_timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>(
    *(boost::asio::detail::epoll_reactor *const *)(v2 + 88),
    v1);
  return (boost::asio::execution_context::service *)v2;
};

// Line 85: range 0000000019B84B2C-0000000019B84E1B
boost::asio::execution_context::service *__fastcall boost::asio::detail::service_registry::create<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::io_context>(
        void *owner)
{
  unsigned __int64 v1; // r13
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r15
  boost::asio::execution_context::service *v5; // rbx
  boost::asio::detail::scheduler *v6; // rax
  __int64 v7; // rax
  boost::asio::execution_context::service::key *v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rbp
  struct _Unwind_Exception *v12; // rax
  struct _Unwind_Exception *v13; // r12
  char v14[120]; // [rsp+10h] [rbp-78h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v3 = v7;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 2 ec";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::service_registry::create<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::io_context>;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = (boost::asio::execution_context::service *)operator new(0x68uLL);
  if ( *(_BYTE *)(((unsigned __int64)&v5->key_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_12;
  }
  v5->key_.type_info_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->key_.id_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  v5->key_.id_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->owner_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  v5->owner_ = (boost::asio::execution_context *)owner;
  if ( *(_BYTE *)(((unsigned __int64)&v5->next_ >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  v5->next_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  v5->_vptr_service = (int (**)(...))(&`vtable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>
                                    + 2);
  v1 = (unsigned __int64)&v5[1];
  if ( !*(_BYTE *)(((unsigned __int64)owner >> 3) + 0x7FFF8000) )
  {
    v6 = boost::asio::detail::service_registry::use_service<boost::asio::detail::scheduler>(*(boost::asio::detail::service_registry *const *)owner);
    goto LABEL_17;
  }
LABEL_16:
  v6 = (boost::asio::detail::scheduler *)__asan_report_load8(owner);
LABEL_17:
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
    v8 = (boost::asio::execution_context::service::key *)v1;
    __asan_report_store8();
LABEL_21:
    __asan_handle_no_return(v8);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v3 + 32), "mutex");
  }
  v5[1]._vptr_service = (int (**)(...))v6;
  v8 = (boost::asio::execution_context::service::key *)(v1 + 8);
  v9 = pthread_mutex_init((pthread_mutex_t *)(v1 + 8), 0LL);
  *(_DWORD *)(v3 + 32) = v9;
  *(_BYTE *)(v3 + 36) = v9 != 0;
  *(_QWORD *)(v3 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( v9 )
    goto LABEL_21;
  v10 = operator new(0xF8uLL);
  boost::asio::detail::scheduler::scheduler(
    (boost::asio::detail::scheduler *const)v10,
    (boost::asio::execution_context *)owner,
    -1,
    0);
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_30;
  }
  *(_QWORD *)(v1 + 48) = v10;
  if ( *(_BYTE *)(((v1 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8();
    goto LABEL_31;
  }
  *(_QWORD *)(v1 + 56) = 0LL;
  v10 += 208LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8();
LABEL_32:
    __asan_report_store8();
    v13 = v12;
    operator delete((void *)v10, 0xF8uLL);
    pthread_mutex_destroy((pthread_mutex_t *)(v1 + 8));
    operator delete(v5, 0x68uLL);
    __asan_handle_no_return(v5);
    _Unwind_Resume(v13);
  }
  _InterlockedAdd64((volatile signed __int64 *)v10, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_32;
  v5->_vptr_service = (int (**)(...))(&`vtable for'boost::asio::detail::resolver_service<boost::asio::ip::tcp> + 2);
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};
