// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ssl/impl/error.ipp

// Line 35: range 0000000019B74B3E-0000000019B74B45
const char *__fastcall boost::asio::error::detail::ssl_category::name(
        const boost::asio::error::detail::ssl_category *const this)
{
  return "asio.ssl";
};

// Line 61: range 0000000019B844F2-0000000019B84527
std::string *__fastcall boost::asio::error::detail::ssl_category::message[abi:cxx11](
        std::string *retstr,
        const boost::asio::error::detail::ssl_category *const this,
        int value)
{
  const char *v3; // rsi
  std::allocator<char> __a; // [rsp+Fh] [rbp-9h] BYREF

  v3 = (const char *)ERR_reason_error_string(value, this);
  if ( !v3 )
    v3 = "asio.ssl error";
  std::string::basic_string<std::allocator<char>>(retstr, v3, &__a);
  return retstr;
};

// Line 73: range 0000000019B74B46-0000000019B74B4D
const char *__fastcall boost::asio::ssl::error::detail::stream_category::name(
        const boost::asio::ssl::error::detail::stream_category *const this)
{
  return "asio.ssl.stream";
};

// Line 75: range 0000000019B8452A-0000000019B84592
std::string *__fastcall boost::asio::ssl::error::detail::stream_category::message[abi:cxx11](
        std::string *retstr,
        const boost::asio::ssl::error::detail::stream_category *const this,
        int value)
{
  std::allocator<char> __a; // [rsp+Fh] [rbp-9h] BYREF

  switch ( value )
  {
    case 2:
      std::string::basic_string<std::allocator<char>>(retstr, "unspecified system error", &__a);
      break;
    case 3:
      std::string::basic_string<std::allocator<char>>(retstr, "unexpected result", &__a);
      break;
    case 1:
      std::string::basic_string<std::allocator<char>>(retstr, "stream truncated", &__a);
      break;
    default:
      std::string::basic_string<std::allocator<char>>(retstr, "asio.ssl.stream error", &__a);
      break;
  }
  return retstr;
};
