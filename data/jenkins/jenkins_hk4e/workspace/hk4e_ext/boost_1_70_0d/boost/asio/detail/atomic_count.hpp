// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/atomic_count.hpp

// Line 37: range 000000000C64182D-000000000C641851
void __cdecl boost::asio::detail::increment(boost::asio::detail::atomic_count *a, __int64 b)
{
  std::__atomic_base<long>::operator+=(a, b);
};
