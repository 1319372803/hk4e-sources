// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/detail/basic_parser.hpp

// Line 52: range 000000000C720D6D-000000000C720D83
bool __cdecl boost::beast::http::detail::basic_parser_base::is_digit(char c)
{
  return (unsigned __int8)(c - 48) <= 9u;
};

// Line 59: range 000000000C720D84-000000000C720D9A
bool __cdecl boost::beast::http::detail::basic_parser_base::is_print(char c)
{
  return (unsigned __int8)(c - 32) <= 0x5Eu;
};

// Line 77: range 000000000C720D9B-000000000C720DD2
boost::beast::string_view __cdecl boost::beast::http::detail::basic_parser_base::make_string(
        const char *first,
        const char *last)
{
  boost::basic_string_view<char,std::char_traits<char> > v3; // [rsp+10h] [rbp-10h] BYREF

  boost::basic_string_view<char,std::char_traits<char>>::basic_string_view(&v3, first, last - first);
  return v3;
};
