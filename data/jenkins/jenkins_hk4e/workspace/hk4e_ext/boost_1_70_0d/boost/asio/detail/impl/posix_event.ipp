// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/posix_event.ipp

// Line 32: range 000000000C641EE8-000000000C6420A0
void __cdecl boost::asio::detail::posix_event::posix_event(boost::asio::detail::posix_event *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  const boost::system::error_category *system_category; // rax
  int error; // [rsp+1Ch] [rbp-84h]
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 7 attr:40 64 16 5 ec:48";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::posix_event::posix_event;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->state_ = 0LL;
  pthread_condattr_init((pthread_condattr_t *)(v1 + 48));
  error = pthread_condattr_setclock((pthread_condattr_t *)(v1 + 48), 1);
  if ( !error )
    error = pthread_cond_init(&this->cond_, (const pthread_condattr_t *)(v1 + 48));
  system_category = boost::asio::error::get_system_category();
  boost::system::error_code::error_code((boost::system::error_code *const)(v1 + 64), error, system_category);
  boost::asio::detail::throw_error((const boost::system::error_code *)(v1 + 64), "event");
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};
