// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/pthread/mutex.hpp

// Line 50: range 000000000BEFD1F8-000000000BEFD26B
void __cdecl boost::mutex::mutex(boost::mutex *const this)
{
  int res; // [rsp+1Ch] [rbp-54h]
  boost::thread_resource_error e; // [rsp+20h] [rbp-50h] BYREF

  res = pthread_mutex_init(&this->m, 0LL);
  if ( res )
  {
    boost::thread_resource_error::thread_resource_error(
      &e,
      res,
      "boost:: mutex constructor failed in pthread_mutex_init");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::thread_resource_error>(&e);
  }
};

// Line 58: range 000000000BEFD26C-000000000BEFD365
void __cdecl boost::mutex::~mutex(boost::mutex *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 6 res:60";
  *(_QWORD *)(v1 + 16) = boost::mutex::~mutex;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = pthread_mutex_destroy(&this->m);
  if ( *(_DWORD *)(v1 + 32) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "!res",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/mutex.hpp",
      0x3Eu,
      "boost::mutex::~mutex()");
  }
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 65: range 000000000BEFD366-000000000BEFD3DC
void __cdecl boost::mutex::lock(boost::mutex *const this)
{
  int res; // [rsp+14h] [rbp-5Ch]
  boost::lock_error e; // [rsp+20h] [rbp-50h] BYREF

  res = pthread_mutex_lock(&this->m);
  if ( res )
  {
    boost::lock_error::lock_error(&e, res, "boost: mutex lock failed in pthread_mutex_lock");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::lock_error>(&e);
  }
};

// Line 74: range 000000000BEFD3DE-000000000BEFD42D
void __cdecl boost::mutex::unlock(boost::mutex *const this)
{
  if ( pthread_mutex_unlock(&this->m) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "res == 0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pthread/mutex.hpp",
      0x4Eu,
      "void boost::mutex::unlock()");
  }
};
