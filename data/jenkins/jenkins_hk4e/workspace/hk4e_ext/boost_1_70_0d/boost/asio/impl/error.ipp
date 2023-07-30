// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/error.ipp

// Line 35: range 000000000C63BDFE-000000000C63BE0E
const char *__cdecl boost::asio::error::detail::netdb_category::name(
        const boost::asio::error::detail::netdb_category *const this)
{
  return "asio.netdb";
};

// Line 40: range 000000000C63BE10-000000000C63BFD6
std::string *__cdecl boost::asio::error::detail::netdb_category::message[abi:cxx11](
        std::string *retstr,
        const boost::asio::error::detail::netdb_category *const this,
        int value)
{
  std::allocator<char> __a; // [rsp+2Fh] [rbp-11h] BYREF

  if ( value == 1 )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, "Host not found (authoritative)", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else if ( value == 2 )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, "Host not found (non-authoritative), try again later", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else if ( value == 4 )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      retstr,
      "The query is valid, but it does not have associated data",
      &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    if ( value == 3 )
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        retstr,
        "A non-recoverable error occurred during database lookup",
        &__a);
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "asio.netdb error", &__a);
    }
    std::allocator<char>::~allocator(&__a);
  }
  return retstr;
};

// Line 57: range 000000000C63BFD7-000000000C63BFE3
const boost::system::error_category *__cdecl boost::asio::error::get_netdb_category()
{
  return &boost::asio::error::get_netdb_category(void)::instance;
};

// Line 67: range 000000000C63BFE4-000000000C63BFF4
const char *__cdecl boost::asio::error::detail::addrinfo_category::name(
        const boost::asio::error::detail::addrinfo_category *const this)
{
  return "asio.addrinfo";
};

// Line 72: range 000000000C63BFF6-000000000C63C10D
std::string *__cdecl boost::asio::error::detail::addrinfo_category::message[abi:cxx11](
        std::string *retstr,
        const boost::asio::error::detail::addrinfo_category *const this,
        int value)
{
  std::allocator<char> __a; // [rsp+2Fh] [rbp-11h] BYREF

  if ( value == -8 )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, "Service not found", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    if ( value == -7 )
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "Socket type not supported", &__a);
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "asio.addrinfo error", &__a);
    }
    std::allocator<char>::~allocator(&__a);
  }
  return retstr;
};

// Line 85: range 000000000C63C10E-000000000C63C11A
const boost::system::error_category *__cdecl boost::asio::error::get_addrinfo_category()
{
  return &boost::asio::error::get_addrinfo_category(void)::instance;
};

// Line 97: range 000000000C63C11C-000000000C63C12C
const char *__cdecl boost::asio::error::detail::misc_category::name(
        const boost::asio::error::detail::misc_category *const this)
{
  return "asio.misc";
};

// Line 102: range 000000000C63C12E-000000000C63C2F4
std::string *__cdecl boost::asio::error::detail::misc_category::message[abi:cxx11](
        std::string *retstr,
        const boost::asio::error::detail::misc_category *const this,
        int value)
{
  std::allocator<char> __a; // [rsp+2Fh] [rbp-11h] BYREF

  if ( value == 1 )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, "Already open", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else if ( value == 2 )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, "End of file", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else if ( value == 3 )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, "Element not found", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    if ( value == 4 )
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        retstr,
        "The descriptor does not fit into the select call's fd_set",
        &__a);
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "asio.misc error", &__a);
    }
    std::allocator<char>::~allocator(&__a);
  }
  return retstr;
};

// Line 119: range 000000000C63C2F5-000000000C63C301
const boost::system::error_category *__cdecl boost::asio::error::get_misc_category()
{
  return &boost::asio::error::get_misc_category(void)::instance;
};
