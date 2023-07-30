// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/verb.hpp

// Line 149: range 000000000C71DB93-000000000C71DBC8
std::ostream *__cdecl boost::beast::http::operator<<(std::ostream *os, boost::beast::http::verb v)
{
  boost::basic_string_view<char,std::char_traits<char> > str; // [rsp+10h] [rbp-10h] BYREF

  str = boost::beast::http::to_string(v);
  return boost::operator<<<char,std::char_traits<char>>(os, &str);
};
