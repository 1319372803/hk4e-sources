// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/posix_signal_blocker.hpp

// Line 38: range 000000000C648000-000000000C6481AD
void __cdecl boost::asio::detail::posix_signal_blocker::posix_signal_blocker(
        boost::asio::detail::posix_signal_blocker *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // cl
  char v5[224]; // [rsp+10h] [rbp-E0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 128 11 new_mask:41";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::posix_signal_blocker::posix_signal_blocker;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450900) = -202116109;
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->blocked_ = 0;
  sigfillset((sigset_t *)(v1 + 32));
  v4 = pthread_sigmask(0, (const __sigset_t *)(v1 + 32), &this->old_mask_) == 0;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->blocked_ = v4;
  if ( v5 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 47: range 000000000C6481AE-000000000C64821C
void __cdecl boost::asio::detail::posix_signal_blocker::~posix_signal_blocker(
        boost::asio::detail::posix_signal_blocker *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  if ( this->blocked_ )
    pthread_sigmask(2, &this->old_mask_, 0LL);
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};
