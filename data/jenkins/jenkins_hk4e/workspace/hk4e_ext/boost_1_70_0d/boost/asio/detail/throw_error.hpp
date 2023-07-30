// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/throw_error.hpp

// Line 40: range 000000000C63BB79-000000000C63BBAE
void __cdecl boost::asio::detail::throw_error(const boost::system::error_code *err, const char *location)
{
  if ( boost::system::error_code::operator bool(err) )
    boost::asio::detail::do_throw_error(err, location);
};

// Line 31370: range 000000000C63BB4E-000000000C63BB78
void __cdecl boost::asio::detail::throw_error(const boost::system::error_code *err)
{
  if ( boost::system::error_code::operator bool(err) )
    boost::asio::detail::do_throw_error(err);
};
