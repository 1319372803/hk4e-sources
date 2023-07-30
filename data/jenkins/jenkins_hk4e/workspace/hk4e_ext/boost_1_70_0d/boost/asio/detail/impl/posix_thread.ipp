// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/posix_thread.ipp

// Line 32: range 000000000C64256C-000000000C6425F8
void __cdecl boost::asio::detail::posix_thread::~posix_thread(boost::asio::detail::posix_thread *const this)
{
  if ( *(char *)(((unsigned __int64)&this->joined_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->joined_);
  if ( !this->joined_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    pthread_detach(this->thread_);
  }
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 39: range 000000000C6425FA-000000000C6426BA
void __cdecl boost::asio::detail::posix_thread::join(boost::asio::detail::posix_thread *const this)
{
  if ( *(char *)(((unsigned __int64)&this->joined_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->joined_);
  if ( !this->joined_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    pthread_join(this->thread_, 0LL);
    if ( *(char *)(((unsigned __int64)&this->joined_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->joined_);
    this->joined_ = 1;
  }
};

// Line 58: range 000000000C6426BC-000000000C642825
void __cdecl boost::asio::detail::posix_thread::start_thread(
        boost::asio::detail::posix_thread *const this,
        boost::asio::detail::posix_thread::func_base *arg)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::asio::detail::posix_thread::func_base *v5; // rax
  unsigned __int64 v6; // rdx
  const boost::system::error_category *system_category; // rax
  int error; // [rsp+1Ch] [rbp-64h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ec:64";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::posix_thread::start_thread;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  error = pthread_create(
            &this->thread_,
            0LL,
            (void *(*)(void *))boost::asio::detail::boost_asio_detail_posix_thread_function,
            arg);
  if ( error )
  {
    v5 = arg;
    if ( arg )
    {
      if ( *(_BYTE *)(((unsigned __int64)arg >> 3) + 0x7FFF8000) )
        v5 = (boost::asio::detail::posix_thread::func_base *)__asan_report_load8(arg);
      v6 = (unsigned __int64)(v5->_vptr_func_base + 1);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = (boost::asio::detail::posix_thread::func_base *)__asan_report_load8(v5->_vptr_func_base + 1);
      (*(void (__fastcall **)(boost::asio::detail::posix_thread::func_base *))v6)(v5);
    }
    system_category = boost::asio::error::get_system_category();
    boost::system::error_code::error_code((boost::system::error_code *const)(v2 + 32), error, system_category);
    boost::asio::detail::throw_error((const boost::system::error_code *)(v2 + 32), "thread");
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 71: range 000000000C642826-000000000C642971
void *__cdecl boost::asio::detail::boost_asio_detail_posix_thread_function(void *arg)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::posix_thread::func_base *v4; // rdx
  boost::asio::detail::posix_thread::func_base *v5; // rax
  unsigned __int64 v6; // rax
  void *result; // rax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 func:72";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::boost_asio_detail_posix_thread_function;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = arg;
  v4 = *(boost::asio::detail::posix_thread::func_base **)(v1 + 32);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    v5 = (boost::asio::detail::posix_thread::func_base *)__asan_report_load8(*(_QWORD *)(v1 + 32));
  v6 = (unsigned __int64)(v5->_vptr_func_base + 2);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6);
  (*(void (__fastcall **)(boost::asio::detail::posix_thread::func_base *))v6)(v4);
  boost::asio::detail::posix_thread::auto_func_base_ptr::~auto_func_base_ptr((boost::asio::detail::posix_thread::auto_func_base_ptr *const)(v1 + 32));
  result = 0LL;
  if ( v8 == (char *)v1 )
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
