// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/impl/error.ipp

// Line 27: range 0000000019B749CA-0000000019B749D1
const char *__fastcall boost::beast::detail::error_codes::name(const boost::beast::detail::error_codes *const this)
{
  return "boost.beast";
};

// Line 63: range 0000000019B749D2-0000000019B749D9
const char *__fastcall boost::beast::detail::error_conditions::name(
        const boost::beast::detail::error_conditions *const this)
{
  return "boost.beast";
};

// Line 81: range 0000000019B84594-0000000019B84B27
std::string *__fastcall boost::beast::detail::error_codes::message[abi:cxx11](
        std::string *retstr,
        const boost::beast::detail::error_codes *const this,
        int ev)
{
  std::forward_iterator_tag v3; // cl

  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    JUMPOUT(0x19B845C9LL);
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  std::string::_M_construct<char const*>(retstr, &byte_1B5D96C6[-38], byte_1B5D96C6, v3);
  return retstr;
};
