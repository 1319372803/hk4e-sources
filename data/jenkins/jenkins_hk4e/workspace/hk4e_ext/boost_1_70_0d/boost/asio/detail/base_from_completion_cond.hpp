// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/base_from_completion_cond.hpp

// Line 53: range 000000000CAE2B6A-000000000CAE2B74
void __cdecl boost::asio::detail::base_from_completion_cond<boost::asio::detail::transfer_all_t>::base_from_completion_cond(
        boost::asio::detail::base_from_completion_cond<boost::asio::detail::transfer_all_t> *const this,
        boost::asio::detail::transfer_all_t a2)
{
  ;
};

// Line 57: range 000000000CAE2B75-000000000CAE2B9D
std::size_t __cdecl boost::asio::detail::base_from_completion_cond<boost::asio::detail::transfer_all_t>::check_for_completion(
        const boost::system::error_code *ec,
        std::size_t total_transferred)
{
  boost::asio::detail::transfer_all_t v3; // [rsp+1Fh] [rbp-1h] BYREF

  return boost::asio::detail::transfer_all_t::operator()<boost::system::error_code>(&v3, ec, total_transferred);
};
