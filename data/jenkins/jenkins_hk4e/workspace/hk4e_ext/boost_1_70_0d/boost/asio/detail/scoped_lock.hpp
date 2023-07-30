// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/scoped_lock.hpp

// Line 43: range 000000000C65BDF0-000000000C65BE84
void __cdecl boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::scoped_lock(
        boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const this,
        boost::asio::detail::posix_mutex *m)
{
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->mutex_ = m;
  boost::asio::detail::posix_mutex::lock(this->mutex_);
  if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->locked_);
  this->locked_ = 1;
};

// Line 51: range 000000000C65BE86-000000000C65BF0F
void __cdecl boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::~scoped_lock(
        boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const this)
{
  if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->locked_);
  if ( this->locked_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::posix_mutex::unlock(this->mutex_);
  }
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 58: range 000000000C65BFCA-000000000C65C085
void __cdecl boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::lock(
        boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const this)
{
  if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->locked_);
  if ( !this->locked_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::posix_mutex::lock(this->mutex_);
    if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->locked_);
    this->locked_ = 1;
  }
};

// Line 68: range 000000000C65BF10-000000000C65BFC8
void __cdecl boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::unlock(
        boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const this)
{
  if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->locked_);
  if ( this->locked_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    boost::asio::detail::posix_mutex::unlock(this->mutex_);
    if ( *(char *)(((unsigned __int64)&this->locked_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->locked_);
    this->locked_ = 0;
  }
};
