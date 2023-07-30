// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/gregorian/greg_month.hpp

// Line 44: range 000000000BF401C8-000000000BF40220
void __cdecl boost::gregorian::bad_month::bad_month(
        boost::gregorian::bad_month *const this,
        const boost::gregorian::bad_month *a2)
{
  __int64 *v2; // rdx

  std::out_of_range::out_of_range((std::out_of_range *const)this, (const std::out_of_range *)a2);
  v2 = &`vtable for'boost::gregorian::bad_month + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 44: range 000000000BF218E8-000000000BF21935
void __cdecl boost::gregorian::bad_month::~bad_month(boost::gregorian::bad_month *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::gregorian::bad_month + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  std::out_of_range::~out_of_range((std::out_of_range *)this);
};

// Line 44: range 000000000BF21936-000000000BF21960
void __cdecl boost::gregorian::bad_month::~bad_month(boost::gregorian::bad_month *const this)
{
  boost::gregorian::bad_month::~bad_month(this);
  operator delete(this, 0x10uLL);
};

// Line 46: range 000000000BEF790E-000000000BEF79D1
void __cdecl boost::gregorian::bad_month::bad_month(boost::gregorian::bad_month *const this)
{
  __int64 *v1; // rdx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string v3; // [rsp+20h] [rbp-30h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v3, "Month number is out of range 1..12", &__a);
  std::out_of_range::out_of_range(this, &v3);
  std::string::~string(&v3);
  std::allocator<char>::~allocator(&__a);
  v1 = &`vtable for'boost::gregorian::bad_month + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
};

// Line 64: range 000000000BEF79D2-000000000BEF79F8
void __cdecl boost::gregorian::greg_month::greg_month(
        boost::gregorian::greg_month *const this,
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,12,boost::gregorian::bad_month> >::value_type theMonth)
{
  boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>>::constrained_value(
    this,
    theMonth);
};

// Line 66: range 000000000BEF79FA-000000000BEF7A45
boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,12,boost::gregorian::bad_month> >::value_type __cdecl boost::gregorian::greg_month::operator unsigned short(
        const boost::gregorian::greg_month *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(this);
  }
  return this->value_;
};
