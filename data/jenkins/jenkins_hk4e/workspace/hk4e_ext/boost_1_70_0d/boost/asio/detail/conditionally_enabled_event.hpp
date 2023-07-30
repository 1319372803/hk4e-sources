// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/conditionally_enabled_event.hpp

// Line 37: range 000000000C6420E6-000000000C642133
void __cdecl boost::asio::detail::conditionally_enabled_event::conditionally_enabled_event(
        boost::asio::detail::conditionally_enabled_event *const this)
{
  boost::asio::detail::noncopyable::noncopyable(this);
  boost::asio::detail::posix_event::posix_event(&this->event_);
};

// Line 42: range 000000000C642134-000000000C64215E
void __cdecl boost::asio::detail::conditionally_enabled_event::~conditionally_enabled_event(
        boost::asio::detail::conditionally_enabled_event *const this)
{
  boost::asio::detail::posix_event::~posix_event(&this->event_);
  boost::asio::detail::noncopyable::~noncopyable(this);
};

// Line 54: range 000000000C642160-000000000C6421EA
void __cdecl boost::asio::detail::conditionally_enabled_event::signal_all(
        boost::asio::detail::conditionally_enabled_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  boost::asio::detail::conditionally_enabled_mutex *mutex; // rax

  if ( *(_BYTE *)(((unsigned __int64)lock >> 3) + 0x7FFF8000) )
    __asan_report_load8(lock);
  mutex = lock->mutex_;
  if ( *(char *)(((unsigned __int64)&lock->mutex_->enabled_ >> 3) + 0x7FFF8000) < 0 )
    mutex = (boost::asio::detail::conditionally_enabled_mutex *)__asan_report_load1(&lock->mutex_->enabled_);
  if ( mutex->enabled_ )
    boost::asio::detail::posix_event::signal_all<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
      &this->event_,
      lock);
};

// Line 61: range 000000000C6421EC-000000000C642276
void __cdecl boost::asio::detail::conditionally_enabled_event::unlock_and_signal_one(
        boost::asio::detail::conditionally_enabled_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  boost::asio::detail::conditionally_enabled_mutex *mutex; // rax

  if ( *(_BYTE *)(((unsigned __int64)lock >> 3) + 0x7FFF8000) )
    __asan_report_load8(lock);
  mutex = lock->mutex_;
  if ( *(char *)(((unsigned __int64)&lock->mutex_->enabled_ >> 3) + 0x7FFF8000) < 0 )
    mutex = (boost::asio::detail::conditionally_enabled_mutex *)__asan_report_load1(&lock->mutex_->enabled_);
  if ( mutex->enabled_ )
    boost::asio::detail::posix_event::unlock_and_signal_one<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
      &this->event_,
      lock);
};

// Line 69: range 000000000C642278-000000000C642308
bool __cdecl boost::asio::detail::conditionally_enabled_event::maybe_unlock_and_signal_one(
        boost::asio::detail::conditionally_enabled_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  boost::asio::detail::conditionally_enabled_mutex *mutex; // rax

  if ( *(_BYTE *)(((unsigned __int64)lock >> 3) + 0x7FFF8000) )
    __asan_report_load8(lock);
  mutex = lock->mutex_;
  if ( *(char *)(((unsigned __int64)&lock->mutex_->enabled_ >> 3) + 0x7FFF8000) < 0 )
    mutex = (boost::asio::detail::conditionally_enabled_mutex *)__asan_report_load1(&lock->mutex_->enabled_);
  return mutex->enabled_
      && boost::asio::detail::posix_event::maybe_unlock_and_signal_one<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
           &this->event_,
           lock);
};

// Line 79: range 000000000C64230A-000000000C642394
void __cdecl boost::asio::detail::conditionally_enabled_event::clear(
        boost::asio::detail::conditionally_enabled_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  boost::asio::detail::conditionally_enabled_mutex *mutex; // rax

  if ( *(_BYTE *)(((unsigned __int64)lock >> 3) + 0x7FFF8000) )
    __asan_report_load8(lock);
  mutex = lock->mutex_;
  if ( *(char *)(((unsigned __int64)&lock->mutex_->enabled_ >> 3) + 0x7FFF8000) < 0 )
    mutex = (boost::asio::detail::conditionally_enabled_mutex *)__asan_report_load1(&lock->mutex_->enabled_);
  if ( mutex->enabled_ )
    boost::asio::detail::posix_event::clear<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
      &this->event_,
      lock);
};

// Line 86: range 000000000C642396-000000000C642470
void __cdecl boost::asio::detail::conditionally_enabled_event::wait(
        boost::asio::detail::conditionally_enabled_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  boost::asio::detail::conditionally_enabled_mutex *mutex; // rax
  boost::asio::detail::null_event v3; // [rsp+1Fh] [rbp-11h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)lock >> 3) + 0x7FFF8000) )
    __asan_report_load8(lock);
  mutex = lock->mutex_;
  if ( *(char *)(((unsigned __int64)&lock->mutex_->enabled_ >> 3) + 0x7FFF8000) < 0 )
    mutex = (boost::asio::detail::conditionally_enabled_mutex *)__asan_report_load1(&lock->mutex_->enabled_);
  if ( mutex->enabled_ )
  {
    boost::asio::detail::posix_event::wait<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
      &this->event_,
      lock);
  }
  else
  {
    boost::asio::detail::null_event::null_event(&v3);
    boost::asio::detail::null_event::wait<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(&v3, lock);
    boost::asio::detail::null_event::~null_event(&v3);
  }
};
