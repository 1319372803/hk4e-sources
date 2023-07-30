// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/gregorian/greg_day.hpp

// Line 21: range 000000000BF2BE40-000000000BF2BE98
void __cdecl boost::gregorian::bad_day_of_month::bad_day_of_month(
        boost::gregorian::bad_day_of_month *const this,
        const boost::gregorian::bad_day_of_month *a2)
{
  __int64 *v2; // rdx

  std::out_of_range::out_of_range((std::out_of_range *const)this, (const std::out_of_range *)a2);
  v2 = &`vtable for'boost::gregorian::bad_day_of_month + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 21: range 000000000BF21BF6-000000000BF21C43
void __cdecl boost::gregorian::bad_day_of_month::~bad_day_of_month(boost::gregorian::bad_day_of_month *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::gregorian::bad_day_of_month + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  std::out_of_range::~out_of_range((std::out_of_range *)this);
};

// Line 21: range 000000000BF21C44-000000000BF21C6E
void __cdecl boost::gregorian::bad_day_of_month::~bad_day_of_month(boost::gregorian::bad_day_of_month *const this)
{
  boost::gregorian::bad_day_of_month::~bad_day_of_month(this);
  operator delete(this, 0x10uLL);
};

// Line 23: range 000000000BEF7644-000000000BEF7707
void __cdecl boost::gregorian::bad_day_of_month::bad_day_of_month(boost::gregorian::bad_day_of_month *const this)
{
  __int64 *v1; // rdx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string v3; // [rsp+20h] [rbp-30h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v3, "Day of month value is out of range 1..31", &__a);
  std::out_of_range::out_of_range(this, &v3);
  std::string::~string(&v3);
  std::allocator<char>::~allocator(&__a);
  v1 = &`vtable for'boost::gregorian::bad_day_of_month + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
};

// Line 27: range 000000000BEF7708-000000000BEF7760
void __cdecl boost::gregorian::bad_day_of_month::bad_day_of_month(
        boost::gregorian::bad_day_of_month *const this,
        const std::string *s)
{
  __int64 *v2; // rdx

  std::out_of_range::out_of_range(this, s);
  v2 = &`vtable for'boost::gregorian::bad_day_of_month + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 45: range 000000000BEF7762-000000000BEF7788
void __cdecl boost::gregorian::greg_day::greg_day(
        boost::gregorian::greg_day *const this,
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,31,boost::gregorian::bad_day_of_month> >::value_type day_of_month)
{
  boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>>::constrained_value(
    this,
    day_of_month);
};

// Line 47: range 000000000BEF778A-000000000BEF77D5
boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,31,boost::gregorian::bad_day_of_month> >::value_type __cdecl boost::gregorian::greg_day::operator unsigned short(
        const boost::gregorian::greg_day *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(this);
  }
  return this->value_;
};
