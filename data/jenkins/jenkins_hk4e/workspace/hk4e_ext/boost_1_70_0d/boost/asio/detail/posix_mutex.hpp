// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/posix_mutex.hpp

// Line 44: range 000000000C6407AA-000000000C6407D0
void __cdecl boost::asio::detail::posix_mutex::~posix_mutex(boost::asio::detail::posix_mutex *const this)
{
  pthread_mutex_destroy(&this->mutex_);
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 50: range 000000000C6407D2-000000000C6407EC
void __cdecl boost::asio::detail::posix_mutex::lock(boost::asio::detail::posix_mutex *const this)
{
  pthread_mutex_lock(&this->mutex_);
};

// Line 56: range 000000000C6407EE-000000000C640808
void __cdecl boost::asio::detail::posix_mutex::unlock(boost::asio::detail::posix_mutex *const this)
{
  pthread_mutex_unlock(&this->mutex_);
};
