// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/conditionally_enabled_mutex.hpp

// Line 43: range 000000000C641852-000000000C641915
void __cdecl boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const this,
        boost::asio::detail::conditionally_enabled_mutex *m,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock::adopt_lock_t a3)
{
  bool enabled; // cl

  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->mutex_ = m;
  if ( *(char *)(((unsigned __int64)&m->enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&m->enabled_);
  enabled = m->enabled_;
  if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->locked_);
  this->locked_ = enabled;
};

// Line 50: range 000000000C641916-000000000C641A2A
void __cdecl boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const this,
        boost::asio::detail::conditionally_enabled_mutex *m)
{
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->mutex_ = m;
  if ( *(char *)(((unsigned __int64)&m->enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&m->enabled_);
  if ( m->enabled_ )
  {
    boost::asio::detail::posix_mutex::lock(&this->mutex_->mutex_);
    if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->locked_);
    this->locked_ = 1;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->locked_);
    this->locked_ = 0;
  }
};

// Line 63: range 000000000C641A2C-000000000C641AB9
void __cdecl boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock(
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const this)
{
  if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->locked_);
  if ( this->locked_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::posix_mutex::unlock(&this->mutex_->mutex_);
  }
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 70: range 000000000C641ABA-000000000C641BBD
void __cdecl boost::asio::detail::conditionally_enabled_mutex::scoped_lock::lock(
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const this)
{
  boost::asio::detail::conditionally_enabled_mutex *mutex; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  mutex = this->mutex_;
  if ( *(char *)(((unsigned __int64)&this->mutex_->enabled_ >> 3) + 0x7FFF8000) < 0 )
    mutex = (boost::asio::detail::conditionally_enabled_mutex *)__asan_report_load1(&this->mutex_->enabled_);
  if ( mutex->enabled_ )
  {
    if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->locked_);
    if ( !this->locked_ )
    {
      boost::asio::detail::posix_mutex::lock(&this->mutex_->mutex_);
      if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->locked_);
      this->locked_ = 1;
    }
  }
};

// Line 80: range 000000000C641BBE-000000000C641C76
void __cdecl boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock(
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const this)
{
  if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->locked_);
  if ( this->locked_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::conditionally_enabled_mutex::unlock(this->mutex_);
    if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->locked_);
    this->locked_ = 0;
  }
};

// Line 90: range 000000000C641C78-000000000C641CC0
bool __cdecl boost::asio::detail::conditionally_enabled_mutex::scoped_lock::locked(
        const boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const this)
{
  if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->locked_);
  return this->locked_;
};

// Line 96: range 000000000C641CC2-000000000C641CFB
boost::asio::detail::mutex *__cdecl boost::asio::detail::conditionally_enabled_mutex::scoped_lock::mutex(
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return &this->mutex_->mutex_;
};

// Line 108: range 000000000C641CFC-000000000C641D8C
void __cdecl boost::asio::detail::conditionally_enabled_mutex::conditionally_enabled_mutex(
        boost::asio::detail::conditionally_enabled_mutex *const this,
        bool enabled)
{
  boost::asio::detail::noncopyable::noncopyable(this);
  boost::asio::detail::posix_mutex::posix_mutex(&this->mutex_);
  if ( *(char *)(((unsigned __int64)&this->enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enabled_);
  this->enabled_ = enabled;
};

// Line 114: range 000000000C641D8E-000000000C641DB8
void __cdecl boost::asio::detail::conditionally_enabled_mutex::~conditionally_enabled_mutex(
        boost::asio::detail::conditionally_enabled_mutex *const this)
{
  boost::asio::detail::posix_mutex::~posix_mutex(&this->mutex_);
  boost::asio::detail::noncopyable::~noncopyable(this);
};

// Line 119: range 000000000C641DBA-000000000C641E02
bool __cdecl boost::asio::detail::conditionally_enabled_mutex::enabled(
        const boost::asio::detail::conditionally_enabled_mutex *const this)
{
  if ( *(char *)(((unsigned __int64)&this->enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enabled_);
  return this->enabled_;
};

// Line 125: range 000000000C641E04-000000000C641E61
void __cdecl boost::asio::detail::conditionally_enabled_mutex::lock(
        boost::asio::detail::conditionally_enabled_mutex *const this)
{
  if ( *(char *)(((unsigned __int64)&this->enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enabled_);
  if ( this->enabled_ )
    boost::asio::detail::posix_mutex::lock(&this->mutex_);
};

// Line 132: range 000000000C641E62-000000000C641EBF
void __cdecl boost::asio::detail::conditionally_enabled_mutex::unlock(
        boost::asio::detail::conditionally_enabled_mutex *const this)
{
  if ( *(char *)(((unsigned __int64)&this->enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enabled_);
  if ( this->enabled_ )
    boost::asio::detail::posix_mutex::unlock(&this->mutex_);
};
