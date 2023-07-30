// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/detail/lwm_pthreads.hpp

// Line 58: range 000000000BEFAA4A-000000000BEFAA8C
void __cdecl boost::signals2::mutex::lock(boost::signals2::mutex *const this)
{
  if ( pthread_mutex_lock(&this->m_) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "pthread_mutex_lock(&m_) == 0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/lwm_pthreads.hpp",
      0x3Cu,
      "void boost::signals2::mutex::lock()");
  }
};

// Line 68: range 000000000BEFAA8E-000000000BEFAAD0
void __cdecl boost::signals2::mutex::unlock(boost::signals2::mutex *const this)
{
  if ( pthread_mutex_unlock(&this->m_) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "pthread_mutex_unlock(&m_) == 0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/lwm_pthreads.hpp",
      0x46u,
      "void boost::signals2::mutex::unlock()");
  }
};
