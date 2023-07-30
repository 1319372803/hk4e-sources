// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/detail/ptree_utils.hpp

// Line 58: range 00000000005FDFEC-00000000005FE08E
std::string *__cdecl boost::property_tree::detail::widen<std::string>(std::string *retstr, const char *text)
{
  std::string::basic_string(retstr);
  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)text & 7) >= *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(text);
    }
    if ( !*text )
      break;
    std::string::operator+=(retstr, *text++);
  }
  return retstr;
};
