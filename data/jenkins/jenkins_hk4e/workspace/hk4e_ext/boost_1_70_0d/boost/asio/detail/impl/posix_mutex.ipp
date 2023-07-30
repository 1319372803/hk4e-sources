// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/posix_mutex.ipp

// Line 32: range 000000000C64080A-000000000C640927
void __cdecl boost::asio::detail::posix_mutex::posix_mutex(boost::asio::detail::posix_mutex *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const boost::system::error_category *system_category; // rax
  int error; // [rsp+1Ch] [rbp-64h]
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 5 ec:35";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::posix_mutex::posix_mutex;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  error = pthread_mutex_init(&this->mutex_, 0LL);
  system_category = boost::asio::error::get_system_category();
  boost::system::error_code::error_code((boost::system::error_code *const)(v1 + 32), error, system_category);
  boost::asio::detail::throw_error((const boost::system::error_code *)(v1 + 32), "mutex");
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
