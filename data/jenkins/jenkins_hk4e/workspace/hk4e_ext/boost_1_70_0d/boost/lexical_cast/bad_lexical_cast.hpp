// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/lexical_cast/bad_lexical_cast.hpp

// Line 59: range 0000000000B60662-0000000000B6A916
void __fastcall boost::bad_lexical_cast::~bad_lexical_cast(boost::bad_lexical_cast *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    JUMPOUT(0xB60693LL);
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::bad_lexical_cast + 2;
  std::bad_cast::~bad_cast((std::bad_cast *)this);
};

// Line 690: range 0000000000B6065A-0000000000B60661
const char *__fastcall boost::bad_lexical_cast::what(const boost::bad_lexical_cast *const this)
{
  return "bad lexical cast: source type value could not be interpreted as target";
};
