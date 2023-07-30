// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/pthread/pthread_mutex_scoped_lock.hpp

// Line 92: range 000000000BEFCF36-000000000BEFCFEE
void __cdecl boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(
        boost::pthread::pthread_mutex_scoped_lock *const this,
        pthread_mutex_t *m_)
{
  pthread_mutex_t *m; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m = m_;
  if ( *(char *)(((unsigned __int64)&this->locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->locked, m_);
  this->locked = 1;
  m = this->m;
  if ( pthread_mutex_lock(this->m) )
  {
    __asan_handle_no_return(m);
    __assert_fail(
      "!posix::pthread_mutex_lock(m)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/pthread_mutex_scoped_lock.hpp",
      0x5Fu,
      "boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(pthread_mutex_t*)");
  }
};

// Line 97: range 000000000BEFCFF0-000000000BEFD099
void __cdecl boost::pthread::pthread_mutex_scoped_lock::unlock(boost::pthread::pthread_mutex_scoped_lock *const this)
{
  __int64 v1; // rsi
  pthread_mutex_t *m; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m;
  if ( pthread_mutex_unlock(this->m) )
  {
    __asan_handle_no_return(m);
    __assert_fail(
      "!posix::pthread_mutex_unlock(m)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/pthread_mutex_scoped_lock.hpp",
      0x63u,
      "void boost::pthread::pthread_mutex_scoped_lock::unlock()");
  }
  if ( *(char *)(((unsigned __int64)&this->locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->locked, v1);
  this->locked = 0;
};

// Line 109: range 000000000BEFD09A-000000000BEFD0F3
void __cdecl boost::pthread::pthread_mutex_scoped_lock::~pthread_mutex_scoped_lock(
        boost::pthread::pthread_mutex_scoped_lock *const this)
{
  if ( *(char *)(((unsigned __int64)&this->locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->locked);
  if ( this->locked )
    boost::pthread::pthread_mutex_scoped_lock::unlock(this);
};
