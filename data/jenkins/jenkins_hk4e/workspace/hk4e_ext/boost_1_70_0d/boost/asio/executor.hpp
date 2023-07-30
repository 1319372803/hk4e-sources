// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/executor.hpp

// Line 31: range 000000000C681834-000000000C68188C
void __cdecl boost::asio::bad_executor::bad_executor(
        boost::asio::bad_executor *const this,
        const boost::asio::bad_executor *a2)
{
  __int64 *v2; // rdx

  std::exception::exception((std::exception *const)this, (const std::exception *)a2);
  v2 = &`vtable for'boost::asio::bad_executor + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *this = (boost::asio::bad_executor)v2;
};

// Line 31: range 000000000C677080-000000000C6770CD
void __cdecl boost::asio::bad_executor::~bad_executor(boost::asio::bad_executor *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::asio::bad_executor + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *this = (boost::asio::bad_executor)v1;
  std::exception::~exception((std::exception *)this);
};

// Line 31: range 000000000C6770CE-000000000C6770F8
void __cdecl boost::asio::bad_executor::~bad_executor(boost::asio::bad_executor *const this)
{
  boost::asio::bad_executor::~bad_executor(this);
  operator delete(this, 8uLL);
};

// Line 60: range 000000000C64ADCA-000000000C64AE10
void __cdecl boost::asio::executor::executor(boost::asio::executor *const this, const boost::asio::executor *other)
{
  boost::asio::executor::impl_base *v2; // rax

  v2 = boost::asio::executor::clone(other);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->impl_ = v2;
};

// Line 67: range 000000000C64AE12-000000000C64AE7F
void __cdecl boost::asio::executor::executor(boost::asio::executor *const this, boost::asio::executor *other)
{
  boost::asio::executor::impl_base *impl; // rdx

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8(other);
  impl = other->impl_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->impl_ = impl;
  other->impl_ = 0LL;
};

// Line 84: range 000000000C64AE80-000000000C64AE9A
void __cdecl boost::asio::executor::~executor(boost::asio::executor *const this)
{
  boost::asio::executor::destroy(this);
};

// Line 135: range 000000000C64AE9C-000000000C64AF06
void __cdecl boost::asio::executor::on_work_started(const boost::asio::executor *const this)
{
  unsigned __int64 impl; // rax
  unsigned __int64 v2; // rdx

  impl = (unsigned __int64)boost::asio::executor::get_impl(this);
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    impl = __asan_report_load8(impl);
  v2 = *(_QWORD *)impl + 24LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    impl = __asan_report_load8(*(_QWORD *)impl + 24LL);
  (*(void (__fastcall **)(unsigned __int64))v2)(impl);
};

// Line 141: range 000000000C64AF08-000000000C64AF72
void __cdecl boost::asio::executor::on_work_finished(const boost::asio::executor *const this)
{
  unsigned __int64 impl; // rax
  unsigned __int64 v2; // rdx

  impl = (unsigned __int64)boost::asio::executor::get_impl(this);
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    impl = __asan_report_load8(impl);
  v2 = *(_QWORD *)impl + 32LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    impl = __asan_report_load8(*(_QWORD *)impl + 32LL);
  (*(void (__fastcall **)(unsigned __int64))v2)(impl);
};

// Line 267: range 000000000C6AFFD4-000000000C6AFFE0
boost::asio::executor::type_id_result_type __cdecl boost::asio::executor::type_id<boost::asio::io_context::executor_type>()
{
  return (boost::asio::executor::type_id_result_type)&`typeinfo for'boost::asio::io_context::executor_type;
};

// Line 267: range 000000000C70715D-000000000C707169
boost::asio::executor::type_id_result_type __cdecl boost::asio::executor::type_id<boost::asio::io_context::strand>()
{
  return (boost::asio::executor::type_id_result_type)&`typeinfo for'boost::asio::io_context::strand;
};

// Line 295: range 000000000C64AF74-000000000C64AFF8
void __cdecl boost::asio::executor::impl_base::impl_base(
        boost::asio::executor::impl_base *const this,
        bool fast_dispatch)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'boost::asio::executor::impl_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_impl_base = v2;
  if ( *(char *)(((unsigned __int64)&this->fast_dispatch_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->fast_dispatch_);
  this->fast_dispatch_ = fast_dispatch;
};

// Line 296: range 000000000C64B03C-000000000C64B066
void __cdecl boost::asio::executor::impl_base::~impl_base(boost::asio::executor::impl_base *const this)
{
  boost::asio::executor::impl_base::~impl_base(this);
  operator delete(this, 0x10uLL);
};

// Line 296: range 000000000C64AFFA-000000000C64B03B
void __cdecl boost::asio::executor::impl_base::~impl_base(boost::asio::executor::impl_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::executor::impl_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_impl_base = v1;
};

// Line 304: range 000000000C64B068-000000000C64B1A7
boost::asio::executor::impl_base *__cdecl boost::asio::executor::get_impl(const boost::asio::executor *const this)
{
  boost::asio::bad_executor *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  boost::asio::executor::impl_base *impl; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (boost::asio::bad_executor *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (boost::asio::bad_executor *)v2;
  }
  *v1 = (boost::asio::bad_executor)1102416563LL;
  v1[1] = (boost::asio::bad_executor)"1 32 8 6 ex:308";
  v1[2] = (boost::asio::bad_executor)boost::asio::executor::get_impl;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this);
  if ( !this->impl_ )
  {
    boost::asio::bad_executor::bad_executor(v1 + 4);
    __asan_handle_no_return(&v1[4]);
    boost::throw_exception<boost::asio::bad_executor>(v1 + 4);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this);
  impl = this->impl_;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)(v3 + 2147450880) = 0LL;
  }
  else
  {
    *v1 = (boost::asio::bad_executor)1172321806LL;
    *(_QWORD *)(v3 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return impl;
};

// Line 315: range 000000000C64B1A8-000000000C64B244
boost::asio::executor::impl_base *__cdecl boost::asio::executor::clone(const boost::asio::executor *const this)
{
  boost::asio::executor::impl_base *impl; // rdx
  boost::asio::executor::impl_base *v2; // rax
  unsigned __int64 vptr_impl_base; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !this->impl_ )
    return 0LL;
  impl = this->impl_;
  v2 = this->impl_;
  if ( *(_BYTE *)(((unsigned __int64)this->impl_ >> 3) + 0x7FFF8000) )
    v2 = (boost::asio::executor::impl_base *)__asan_report_load8(this->impl_);
  vptr_impl_base = (unsigned __int64)v2->_vptr_impl_base;
  if ( *(_BYTE *)((vptr_impl_base >> 3) + 0x7FFF8000) )
    vptr_impl_base = __asan_report_load8(vptr_impl_base);
  return (boost::asio::executor::impl_base *)(*(__int64 (__fastcall **)(boost::asio::executor::impl_base *))vptr_impl_base)(impl);
};

// Line 321: range 000000000C64B246-000000000C64B2E0
void __cdecl boost::asio::executor::destroy(boost::asio::executor *const this)
{
  boost::asio::executor::impl_base *impl; // rdx
  boost::asio::executor::impl_base *v2; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->impl_ )
  {
    impl = this->impl_;
    v2 = this->impl_;
    if ( *(_BYTE *)(((unsigned __int64)this->impl_ >> 3) + 0x7FFF8000) )
      v2 = (boost::asio::executor::impl_base *)__asan_report_load8(this->impl_);
    v3 = (unsigned __int64)(v2->_vptr_impl_base + 1);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(v3);
    (*(void (__fastcall **)(boost::asio::executor::impl_base *))v3)(impl);
  }
};
