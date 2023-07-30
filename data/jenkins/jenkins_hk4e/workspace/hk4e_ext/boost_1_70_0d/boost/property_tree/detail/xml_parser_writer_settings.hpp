// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/detail/xml_parser_writer_settings.hpp

// Line 22: range 00000000004ED4B3-00000000004ED555
std::string *__cdecl boost::property_tree::xml_parser::widen<std::string>(std::string *retstr, const char *text)
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

// Line 36: range 00000000004BD5F0-00000000004BD60E
void __cdecl boost::property_tree::xml_parser::xml_writer_settings<std::string>::~xml_writer_settings(
        boost::property_tree::xml_parser::xml_writer_settings<std::string > *const this)
{
  std::string::~string(&this->encoding);
};

// Line 40: range 00000000004ED556-00000000004ED5F2
void __cdecl boost::property_tree::xml_parser::xml_writer_settings<std::string>::xml_writer_settings(
        boost::property_tree::xml_parser::xml_writer_settings<std::string > *const this,
        boost::property_tree::xml_parser::xml_writer_settings<std::string >::Ch inchar,
        std::string::size_type incount,
        const std::string *enc)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->indent_char = inchar;
  if ( *(_BYTE *)(((unsigned __int64)&this->indent_count >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->indent_count = incount;
  std::string::basic_string(&this->encoding, enc);
};
