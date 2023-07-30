// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/gregorian/greg_weekday.hpp

// Line 690: range 000000000C2BF28C-000000000C2C3B18
void __fastcall boost::gregorian::bad_weekday::~bad_weekday(boost::gregorian::bad_weekday *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    boost::gregorian::bad_weekday::~bad_weekday(this);
  }
  else
  {
    *(_QWORD *)this->baseclass_0 = &`vtable for'boost::gregorian::bad_weekday + 2;
    std::out_of_range::~out_of_range((std::out_of_range *)this);
  }
};
