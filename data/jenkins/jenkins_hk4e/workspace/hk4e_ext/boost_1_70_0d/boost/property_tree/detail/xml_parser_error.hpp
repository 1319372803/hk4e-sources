// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/detail/xml_parser_error.hpp

// Line 20: range 0000000000685E98-0000000000685EF0
void __cdecl boost::property_tree::xml_parser::xml_parser_error::xml_parser_error(
        boost::property_tree::xml_parser::xml_parser_error *const this,
        const boost::property_tree::xml_parser::xml_parser_error *a2)
{
  __int64 *v2; // rdx

  boost::property_tree::file_parser_error::file_parser_error(this, a2);
  v2 = &`vtable for'boost::property_tree::xml_parser::xml_parser_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 20: range 00000000004EC8A2-00000000004EC8EF
void __cdecl boost::property_tree::xml_parser::xml_parser_error::~xml_parser_error(
        boost::property_tree::xml_parser::xml_parser_error *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::property_tree::xml_parser::xml_parser_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  boost::property_tree::file_parser_error::~file_parser_error(this);
};

// Line 20: range 00000000004EC8F0-00000000004EC91A
void __cdecl boost::property_tree::xml_parser::xml_parser_error::~xml_parser_error(
        boost::property_tree::xml_parser::xml_parser_error *const this)
{
  boost::property_tree::xml_parser::xml_parser_error::~xml_parser_error(this);
  operator delete(this, 0x58uLL);
};

// Line 23: range 00000000004B506A-00000000004B50CF
void __cdecl boost::property_tree::xml_parser::xml_parser_error::xml_parser_error(
        boost::property_tree::xml_parser::xml_parser_error *const this,
        const std::string *msg,
        const std::string *file,
        unsigned __int64 l)
{
  __int64 *v4; // rdx

  boost::property_tree::file_parser_error::file_parser_error(this, msg, file, l);
  v4 = &`vtable for'boost::property_tree::xml_parser::xml_parser_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
};
