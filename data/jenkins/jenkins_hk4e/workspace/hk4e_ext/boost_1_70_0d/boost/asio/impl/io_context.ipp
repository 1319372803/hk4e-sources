// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/io_context.ipp

// Line 37: range 000000000BEF46B4-000000000BEF4768
void __cdecl boost::asio::io_context::io_context(boost::asio::io_context *const this)
{
  boost::asio::io_context::impl_type *v1; // rax
  boost::asio::io_context::impl_type *impl; // [rsp+0h] [rbp-20h]

  boost::asio::execution_context::execution_context(this);
  impl = (boost::asio::io_context::impl_type *)operator new(0xF8uLL);
  boost::asio::detail::scheduler::scheduler(impl, this, -1, 0);
  v1 = boost::asio::io_context::add_impl(this, impl);
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    v1 = (boost::asio::io_context::impl_type *)__asan_report_store8();
  this->impl_ = v1;
};

// Line 50: range 000000000BEF476A-000000000BEF4892
boost::asio::io_context::impl_type *__cdecl boost::asio::io_context::add_impl(
        boost::asio::io_context *const this,
        boost::asio::io_context::impl_type *impl)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::asio::detail::scheduler *v5; // rdx
  boost::asio::detail::scheduler *v6; // r14
  boost::asio::io_context::impl_type *result; // rax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 14 scoped_impl:51";
  *(_QWORD *)(v2 + 16) = boost::asio::io_context::add_impl;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler>::scoped_ptr(
    (boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler> *const)(v2 + 32),
    impl);
  v5 = boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler>::get((boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler> *const)(v2 + 32));
  boost::asio::add_service<boost::asio::detail::scheduler>(this, v5);
  v6 = boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler>::release((boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler> *const)(v2 + 32));
  boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler>::~scoped_ptr((boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler> *const)(v2 + 32));
  result = v6;
  if ( v8 == (char *)v2 )
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

// Line 56: range 000000000BEF4894-000000000BEF48AE
void __cdecl boost::asio::io_context::~io_context(boost::asio::io_context *const this)
{
  boost::asio::execution_context::~execution_context(this);
};

// Line 61: range 000000000BEF48B0-000000000BEF49CC
boost::asio::io_context::count_type __cdecl boost::asio::io_context::run(boost::asio::io_context *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  boost::asio::io_context::count_type result; // rax
  std::size_t s; // [rsp+18h] [rbp-68h]
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 5 ec:62";
  *(_QWORD *)(v1 + 16) = boost::asio::io_context::run;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(_DWORD *)(v1 + 32) = 0;
  *(_BYTE *)(v1 + 36) = 0;
  *(_QWORD *)(v1 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->impl_);
  s = boost::asio::detail::scheduler::run(this->impl_, (boost::system::error_code *)(v1 + 32));
  boost::asio::detail::throw_error((const boost::system::error_code *)(v1 + 32));
  result = s;
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

// Line 121: range 000000000BEF49CE-000000000BEF4A11
void __cdecl boost::asio::io_context::stop(boost::asio::io_context *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->impl_);
  boost::asio::detail::scheduler::stop(this->impl_);
};

// Line 135: range 000000000BEF4A12-000000000BEF4A6A
void __cdecl boost::asio::io_context::service::service(
        boost::asio::io_context::service *const this,
        boost::asio::io_context *owner)
{
  int (**v2)(...); // rdx

  boost::asio::execution_context::service::service(this, owner);
  v2 = (int (**)(...))(&`vtable for'boost::asio::io_context::service + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v2;
};

// Line 140: range 000000000BEF4A6C-000000000BEF4AB9
void __cdecl boost::asio::io_context::service::~service(boost::asio::io_context::service *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::io_context::service + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  boost::asio::execution_context::service::~service(this);
};

// Line 140: range 000000000BEF4ABA-000000000BEF4AE4
void __cdecl boost::asio::io_context::service::~service(boost::asio::io_context::service *const this)
{
  boost::asio::io_context::service::~service(this);
  operator delete(this, 0x28uLL);
};

// Line 145: range 000000000BEF4AE6-000000000BEF4B4C
void __cdecl boost::asio::io_context::service::shutdown(boost::asio::io_context::service *const this)
{
  void (__fastcall **v1)(boost::asio::io_context::service *const); // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (void (__fastcall **)(boost::asio::io_context::service *const))(this->_vptr_service + 4);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_service + 4);
  (*v1)(this);
};

// Line 153: range 000000000BEF4B4E-000000000BEF4B58
void __cdecl boost::asio::io_context::service::shutdown_service(boost::asio::io_context::service *const this)
{
  ;
};

// Line 158: range 000000000BEF4B5A-000000000BEF4BC8
void __cdecl boost::asio::io_context::service::notify_fork(
        boost::asio::io_context::service *const this,
        boost::asio::execution_context::fork_event ev)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_service + 5);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_service + 5);
  (*(void (__fastcall **)(boost::asio::io_context::service *const, _QWORD))v2)(this, (unsigned int)ev);
};

// Line 168: range 000000000BEF4BCA-000000000BEF4BD7
void __cdecl boost::asio::io_context::service::fork_service(
        boost::asio::io_context::service *const this,
        boost::asio::execution_context::fork_event a2)
{
  ;
};
