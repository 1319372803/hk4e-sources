// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/completion_condition.hpp

// Line 52: range 000000000CB13C4E-000000000CB13C7F
std::size_t __cdecl boost::asio::detail::transfer_all_t::operator()<boost::system::error_code>(
        boost::asio::detail::transfer_all_t *const this,
        const boost::system::error_code *err,
        std::size_t a3)
{
  if ( boost::system::error_code::operator bool(err) )
    return 0LL;
  else
    return 0x10000LL;
};

// Line 140: range 000000000CAE2B64-000000000CAE2B69
boost::asio::detail::transfer_all_t __cdecl boost::asio::transfer_all()
{
  boost::asio::detail::transfer_all_t result; // al

  return result;
};
