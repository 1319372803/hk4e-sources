// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/pthread/condition_variable.hpp

// Line 37: range 000000000BF0C01E-000000000BF0C058
void __cdecl boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex>>::lock_on_exit(
        boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m = 0LL;
};

// Line 41: range 000000000BF0C0A6-000000000BF0C0F0
void __cdecl boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex>>::activate(
        boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex> > *const this,
        boost::unique_lock<boost::mutex> *m_)
{
  boost::unique_lock<boost::mutex>::unlock(m_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m = m_;
};

// Line 46: range 000000000BF0C0F2-000000000BF0C168
void __cdecl boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex>>::deactivate(
        boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->m )
    boost::unique_lock<boost::mutex>::lock(this->m);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m = 0LL;
};

// Line 54: range 000000000BF0C05A-000000000BF0C0A4
void __cdecl boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex>>::~lock_on_exit(
        boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->m )
    boost::unique_lock<boost::mutex>::lock(this->m);
};

// Line 65: range 000000000BEFE64C-000000000BEFE898
void __cdecl boost::condition_variable::wait(
        boost::condition_variable *const this,
        boost::unique_lock<boost::mutex> *m)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int res; // [rsp+14h] [rbp-ECh]
  boost::condition_error e; // [rsp+20h] [rbp-E0h] BYREF
  char v7[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 guard:75 64 24 25 check_for_interruption:76";
  *(_QWORD *)(v2 + 16) = boost::condition_variable::wait;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex>>::lock_on_exit((boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex> > *const)(v2 + 32));
  boost::detail::interruption_checker::interruption_checker(
    (boost::detail::interruption_checker *const)(v2 + 64),
    &this->internal_mutex,
    &this->cond);
  boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex>>::activate(
    (boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex> > *const)(v2 + 32),
    m);
  res = pthread_cond_wait(&this->cond, &this->internal_mutex);
  boost::detail::interruption_checker::unlock_if_locked((boost::detail::interruption_checker *const)(v2 + 64));
  boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex>>::deactivate((boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex> > *const)(v2 + 32));
  boost::detail::interruption_checker::~interruption_checker((boost::detail::interruption_checker *const)(v2 + 64));
  boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex>>::~lock_on_exit((boost::thread_cv_detail::lock_on_exit<boost::unique_lock<boost::mutex> > *const)(v2 + 32));
  boost::this_thread::interruption_point((boost::this_thread *)(v2 + 32));
  if ( res && res != 4 )
  {
    boost::condition_error::condition_error(&e, res, "boost::condition_variable::wait failed in pthread_cond_wait");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::condition_error>(&e);
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 145: range 000000000BEFE89A-000000000BEFE9A5
void __cdecl boost::condition_variable::notify_one(boost::condition_variable *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 internal_lock:147";
  *(_QWORD *)(v1 + 16) = boost::condition_variable::notify_one;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(
    (boost::pthread::pthread_mutex_scoped_lock *const)(v1 + 32),
    &this->internal_mutex);
  if ( pthread_cond_signal(&this->cond) )
  {
    __asan_handle_no_return(&this->cond);
    __assert_fail(
      "!pthread_cond_signal(&cond)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/condition_variable.hpp",
      0x95u,
      "void boost::condition_variable::notify_one()");
  }
  boost::pthread::pthread_mutex_scoped_lock::~pthread_mutex_scoped_lock((boost::pthread::pthread_mutex_scoped_lock *const)(v1 + 32));
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

// Line 153: range 000000000BEFE9A6-000000000BEFEAB1
void __cdecl boost::condition_variable::notify_all(boost::condition_variable *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 internal_lock:155";
  *(_QWORD *)(v1 + 16) = boost::condition_variable::notify_all;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(
    (boost::pthread::pthread_mutex_scoped_lock *const)(v1 + 32),
    &this->internal_mutex);
  if ( pthread_cond_broadcast(&this->cond) )
  {
    __asan_handle_no_return(&this->cond);
    __assert_fail(
      "!pthread_cond_broadcast(&cond)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/condition_variable.hpp",
      0x9Du,
      "void boost::condition_variable::notify_all()");
  }
  boost::pthread::pthread_mutex_scoped_lock::~pthread_mutex_scoped_lock((boost::pthread::pthread_mutex_scoped_lock *const)(v1 + 32));
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
