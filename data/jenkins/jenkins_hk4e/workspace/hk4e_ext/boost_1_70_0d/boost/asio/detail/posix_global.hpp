// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/posix_global.hpp

// Line 41: range 000000000C6AF83C-000000000C6AF874
void __cdecl boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl(
        boost::asio::detail::posix_global_impl<boost::asio::system_context> *const this)
{
  boost::asio::system_context *v1; // rbx

  v1 = boost::asio::detail::posix_global_impl<boost::asio::system_context>::static_ptr_;
  if ( boost::asio::detail::posix_global_impl<boost::asio::system_context>::static_ptr_ )
  {
    boost::asio::system_context::~system_context(boost::asio::detail::posix_global_impl<boost::asio::system_context>::static_ptr_);
    operator delete(v1, 0x18uLL);
  }
};
