// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/lock_guard.hpp

// Line 35: range 000000000BF0BEBA-000000000BF0BF07
void __cdecl boost::lock_guard<boost::mutex>::lock_guard(boost::lock_guard<boost::mutex> *const this, boost::mutex *m_)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m = m_;
  boost::mutex::lock(this->m);
};

// Line 35: range 000000000BF0C756-000000000BF0C7A3
void __cdecl boost::lock_guard<boost::shared_mutex>::lock_guard(
        boost::lock_guard<boost::shared_mutex> *const this,
        boost::shared_mutex *m_)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m = m_;
  boost::shared_mutex::lock(this->m);
};

// Line 65: range 000000000BF0BF08-000000000BF0BF46
void __cdecl boost::lock_guard<boost::mutex>::~lock_guard(boost::lock_guard<boost::mutex> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::mutex::unlock(this->m);
};

// Line 65: range 000000000BF0C7A4-000000000BF0C7E2
void __cdecl boost::lock_guard<boost::shared_mutex>::~lock_guard(boost::lock_guard<boost::shared_mutex> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::shared_mutex::unlock(this->m);
};
