// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/detail/unique_lock.hpp

// Line 27: range 000000000BF7D444-000000000BF7D491
void __cdecl boost::signals2::detail::unique_lock<boost::signals2::mutex>::unique_lock(
        boost::signals2::detail::unique_lock<boost::signals2::mutex> *const this,
        boost::signals2::mutex *m)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_mutex = m;
  boost::signals2::mutex::lock(this->_mutex);
};

// Line 31: range 000000000BF770E2-000000000BF77120
void __cdecl boost::signals2::detail::unique_lock<boost::signals2::mutex>::~unique_lock(
        boost::signals2::detail::unique_lock<boost::signals2::mutex> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::mutex::unlock(this->_mutex);
};
