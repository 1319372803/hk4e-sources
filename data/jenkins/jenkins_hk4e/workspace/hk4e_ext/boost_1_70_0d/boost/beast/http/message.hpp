// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/message.hpp

// Line 494: range 0000000019B86DF0-0000000019B87029
void __fastcall boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message(
        boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this)
{
  boost::empty_::empty_value<std::string,0,false> *v2; // rdi
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *M_p; // rdi

  v2 = &this->boost::empty_::empty_value<std::string,0,false>;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v2);
    JUMPOUT(0x19B86E29LL);
  }
  M_p = (boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)this->value_._M_dataplus._M_p;
  if ( M_p != (boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)&this->value_._anon_0 )
    operator delete(M_p);
  boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields(this);
};
