// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/posix_event.hpp

// Line 40: range 000000000C641EC0-000000000C641EE6
void __cdecl boost::asio::detail::posix_event::~posix_event(boost::asio::detail::posix_event *const this)
{
  pthread_cond_destroy(&this->cond_);
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 54: range 000000000C65C278-000000000C65C306
void __cdecl boost::asio::detail::posix_event::signal_all<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
        boost::asio::detail::posix_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  if ( !boost::asio::detail::conditionally_enabled_mutex::scoped_lock::locked(lock) )
  {
    __asan_handle_no_return(lock);
    __assert_fail(
      "lock.locked()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/asio/detail/posix_event.hpp",
      0x38u,
      "void boost::asio::detail::posix_event::signal_all(Lock&) [with Lock = boost::asio::detail::conditionally_enabled_m"
      "utex::scoped_lock]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->state_);
  this->state_ |= 1uLL;
  pthread_cond_broadcast(&this->cond_);
};

// Line 64: range 000000000C65C308-000000000C65C3BA
void __cdecl boost::asio::detail::posix_event::unlock_and_signal_one<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
        boost::asio::detail::posix_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  bool have_waiters; // [rsp+1Fh] [rbp-1h]

  if ( !boost::asio::detail::conditionally_enabled_mutex::scoped_lock::locked(lock) )
  {
    __asan_handle_no_return(lock);
    __assert_fail(
      "lock.locked()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/asio/detail/posix_event.hpp",
      0x42u,
      "void boost::asio::detail::posix_event::unlock_and_signal_one(Lock&) [with Lock = boost::asio::detail::conditionall"
      "y_enabled_mutex::scoped_lock]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->state_);
  this->state_ |= 1uLL;
  have_waiters = this->state_ > 1;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock(lock);
  if ( have_waiters )
    pthread_cond_signal(&this->cond_);
};

// Line 76: range 000000000C65C3BC-000000000C65C46F
bool __cdecl boost::asio::detail::posix_event::maybe_unlock_and_signal_one<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
        boost::asio::detail::posix_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  if ( !boost::asio::detail::conditionally_enabled_mutex::scoped_lock::locked(lock) )
  {
    __asan_handle_no_return(lock);
    __assert_fail(
      "lock.locked()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/asio/detail/posix_event.hpp",
      0x4Eu,
      "bool boost::asio::detail::posix_event::maybe_unlock_and_signal_one(Lock&) [with Lock = boost::asio::detail::condit"
      "ionally_enabled_mutex::scoped_lock]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->state_);
  this->state_ |= 1uLL;
  if ( this->state_ <= 1 )
    return 0;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock(lock);
  pthread_cond_signal(&this->cond_);
  return 1;
};

// Line 91: range 000000000C65C470-000000000C65C4F2
void __cdecl boost::asio::detail::posix_event::clear<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
        boost::asio::detail::posix_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  if ( !boost::asio::detail::conditionally_enabled_mutex::scoped_lock::locked(lock) )
  {
    __asan_handle_no_return(lock);
    __assert_fail(
      "lock.locked()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/asio/detail/posix_event.hpp",
      0x5Du,
      "void boost::asio::detail::posix_event::clear(Lock&) [with Lock = boost::asio::detail::conditionally_enabled_mutex::scoped_lock]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->state_);
  this->state_ &= ~1uLL;
};

// Line 100: range 000000000C65C4F4-000000000C65C5DF
void __cdecl boost::asio::detail::posix_event::wait<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
        boost::asio::detail::posix_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *lock)
{
  boost::asio::detail::mutex *v2; // rdx

  if ( !boost::asio::detail::conditionally_enabled_mutex::scoped_lock::locked(lock) )
  {
    __asan_handle_no_return(lock);
    __assert_fail(
      "lock.locked()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/asio/detail/posix_event.hpp",
      0x66u,
      "void boost::asio::detail::posix_event::wait(Lock&) [with Lock = boost::asio::detail::conditionally_enabled_mutex::scoped_lock]");
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->state_);
    if ( (this->state_ & 1) != 0 )
      break;
    this->state_ += 2LL;
    v2 = boost::asio::detail::conditionally_enabled_mutex::scoped_lock::mutex(lock);
    pthread_cond_wait(&this->cond_, &v2->mutex_);
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->state_);
    this->state_ -= 2LL;
  }
};
