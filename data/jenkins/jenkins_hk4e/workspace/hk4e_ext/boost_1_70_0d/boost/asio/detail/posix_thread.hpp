// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/posix_thread.hpp

// Line 43: range 000000000C65DAA2-000000000C65DBFF
void __fastcall boost::asio::detail::posix_thread::posix_thread<boost::asio::detail::scheduler::thread_function>(
        boost::asio::detail::posix_thread *const this,
        boost::asio::detail::scheduler::thread_function f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function> *v5; // r13
  boost::asio::detail::scheduler::thread_function fa; // [rsp+28h] [rbp-68h]
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 f:43";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::posix_thread::posix_thread<boost::asio::detail::scheduler::thread_function>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(boost::asio::detail::scheduler::thread_function *)(v2 + 32) = f;
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(char *)(((unsigned __int64)&this->joined_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->joined_);
  this->joined_ = 0;
  fa.this_ = *(boost::asio::detail::scheduler **)(v2 + 32);
  v5 = (boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function> *)operator new(0x10uLL);
  boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function>::func(v5, fa);
  boost::asio::detail::posix_thread::start_thread(this, v5);
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

// Line 61: range 000000000C669E14-000000000C669E55
void __cdecl boost::asio::detail::posix_thread::func_base::func_base(
        boost::asio::detail::posix_thread::func_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::posix_thread::func_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_func_base = v1;
};

// Line 64: range 000000000C642472-000000000C6424B3
void __cdecl boost::asio::detail::posix_thread::func_base::~func_base(
        boost::asio::detail::posix_thread::func_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::posix_thread::func_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_func_base = v1;
};

// Line 64: range 000000000C6424B4-000000000C6424DE
void __cdecl boost::asio::detail::posix_thread::func_base::~func_base(
        boost::asio::detail::posix_thread::func_base *const this)
{
  boost::asio::detail::posix_thread::func_base::~func_base(this);
  operator delete(this, 8uLL);
};

// Line 71: range 000000000C6424E0-000000000C64256B
void __cdecl boost::asio::detail::posix_thread::auto_func_base_ptr::~auto_func_base_ptr(
        boost::asio::detail::posix_thread::auto_func_base_ptr *const this)
{
  unsigned __int64 ptr; // rax
  unsigned __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  ptr = (unsigned __int64)this->ptr;
  if ( this->ptr )
  {
    if ( *(_BYTE *)((ptr >> 3) + 0x7FFF8000) )
      ptr = __asan_report_load8(ptr);
    v2 = *(_QWORD *)ptr + 8LL;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      ptr = __asan_report_load8(*(_QWORD *)ptr + 8LL);
    (*(void (__fastcall **)(unsigned __int64))v2)(ptr);
  }
};

// Line 75: range 000000000C6A3888-000000000C6A38D5
void __cdecl boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function>::~func(
        boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_func_base = v1;
  boost::asio::detail::posix_thread::func_base::~func_base(this);
};

// Line 75: range 000000000C6A38D6-000000000C6A3900
void __cdecl boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function>::~func(
        boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function> *const this)
{
  boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function>::~func(this);
  operator delete(this, 0x10uLL);
};

// Line 75: range 0000000019B74EAE-0000000019B74EC0
void __fastcall boost::asio::detail::posix_thread::func<boost::asio::detail::resolver_service_base::work_scheduler_runner>::~func(
        boost::asio::detail::posix_thread::func<boost::asio::detail::resolver_service_base::work_scheduler_runner> *const this)
{
  operator delete(this, 0x10uLL);
};

// Line 79: range 000000000C669E56-000000000C669F86
void __fastcall boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function>::func(
        boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function> *const this,
        boost::asio::detail::scheduler::thread_function f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 f:79";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function>::func;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(boost::asio::detail::scheduler::thread_function *)(v2 + 32) = f;
  boost::asio::detail::posix_thread::func_base::func_base(this);
  v5 = (int (**)(...))(&`vtable for'boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_func_base = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->f_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->f_.this_ = *(boost::asio::detail::scheduler **)(v2 + 32);
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

// Line 84: range 000000000C6A83E0-000000000C6A83FE
void __cdecl boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function>::run(
        boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function> *const this)
{
  boost::asio::detail::scheduler::thread_function::operator()(&this->f_);
};
