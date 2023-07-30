// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/gregorian/greg_year.hpp

// Line 21: range 000000000BF3FE82-000000000BF3FEDA
void __cdecl boost::gregorian::bad_year::bad_year(
        boost::gregorian::bad_year *const this,
        const boost::gregorian::bad_year *a2)
{
  __int64 *v2; // rdx

  std::out_of_range::out_of_range((std::out_of_range *const)this, (const std::out_of_range *)a2);
  v2 = &`vtable for'boost::gregorian::bad_year + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 21: range 000000000BF21806-000000000BF21853
void __cdecl boost::gregorian::bad_year::~bad_year(boost::gregorian::bad_year *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::gregorian::bad_year + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  std::out_of_range::~out_of_range((std::out_of_range *)this);
};

// Line 21: range 000000000BF21854-000000000BF2187E
void __cdecl boost::gregorian::bad_year::~bad_year(boost::gregorian::bad_year *const this)
{
  boost::gregorian::bad_year::~bad_year(this);
  operator delete(this, 0x10uLL);
};

// Line 23: range 000000000BEF77D6-000000000BEF7899
void __cdecl boost::gregorian::bad_year::bad_year(boost::gregorian::bad_year *const this)
{
  __int64 *v1; // rdx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string v3; // [rsp+20h] [rbp-30h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v3, "Year is out of valid range: 1400..9999", &__a);
  std::out_of_range::out_of_range(this, &v3);
  std::string::~string(&v3);
  std::allocator<char>::~allocator(&__a);
  v1 = &`vtable for'boost::gregorian::bad_year + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
};

// Line 42: range 000000000BEF789A-000000000BEF78C0
void __cdecl boost::gregorian::greg_year::greg_year(
        boost::gregorian::greg_year *const this,
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1400,9999,boost::gregorian::bad_year> >::value_type year)
{
  boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>>::constrained_value(
    this,
    year);
};

// Line 43: range 000000000BEF78C2-000000000BEF790D
boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1400,9999,boost::gregorian::bad_year> >::value_type __cdecl boost::gregorian::greg_year::operator unsigned short(
        const boost::gregorian::greg_year *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(this);
  }
  return this->value_;
};
