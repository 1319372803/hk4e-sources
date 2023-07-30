// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/constrained_value.hpp

// Line 46: range 000000000BF08046-000000000BF080B2
void __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>>::constrained_value(
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,12,boost::gregorian::bad_month> > *const this,
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,12,boost::gregorian::bad_month> >::value_type value)
{
  boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,12,boost::gregorian::bad_month> >::value_type v2; // cx

  v2 = boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>>::min();
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(this);
  }
  this->value_ = v2;
  boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>>::assign(
    this,
    value);
};

// Line 46: range 000000000BF07F6A-000000000BF07FD6
void __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>>::constrained_value(
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,31,boost::gregorian::bad_day_of_month> > *const this,
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,31,boost::gregorian::bad_day_of_month> >::value_type value)
{
  boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,31,boost::gregorian::bad_day_of_month> >::value_type v2; // cx

  v2 = boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>>::min();
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(this);
  }
  this->value_ = v2;
  boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>>::assign(
    this,
    value);
};

// Line 46: range 000000000BF07FD8-000000000BF08044
void __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>>::constrained_value(
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1400,9999,boost::gregorian::bad_year> > *const this,
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1400,9999,boost::gregorian::bad_year> >::value_type value)
{
  boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1400,9999,boost::gregorian::bad_year> >::value_type v2; // cx

  v2 = boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>>::min();
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(this);
  }
  this->value_ = v2;
  boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>>::assign(
    this,
    value);
};

// Line 56: range 000000000BF219B4-000000000BF219BE
boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,12,boost::gregorian::bad_month> >::value_type __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>>::max()
{
  return boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::max();
};

// Line 56: range 000000000BF217F0-000000000BF217FA
boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,31,boost::gregorian::bad_day_of_month> >::value_type __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>>::max()
{
  return boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::max();
};

// Line 56: range 000000000BF218D2-000000000BF218DC
boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1400,9999,boost::gregorian::bad_year> >::value_type __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>>::max()
{
  return boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::max();
};

// Line 58: range 000000000BF14565-000000000BF1456F
boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,12,boost::gregorian::bad_month> >::value_type __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>>::min()
{
  return boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::min();
};

// Line 58: range 000000000BF14304-000000000BF1430E
boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,31,boost::gregorian::bad_day_of_month> >::value_type __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>>::min()
{
  return boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::min();
};

// Line 58: range 000000000BF14435-000000000BF1443F
boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1400,9999,boost::gregorian::bad_year> >::value_type __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>>::min()
{
  return boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::min();
};

// Line 64: range 000000000BF14570-000000000BF14694
void __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>>::assign(
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,12,boost::gregorian::bad_month> > *const this,
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,12,boost::gregorian::bad_month> >::value_type value)
{
  unsigned __int16 v2; // cx
  unsigned __int16 v3; // cx

  if ( value < boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>>::min() )
  {
    v2 = value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(this);
    }
    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
      this->value_,
      v2,
      min_violation);
  }
  if ( value > boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>>::max() )
  {
    v3 = value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(this);
    }
    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
      this->value_,
      v3,
      max_violation);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(this);
  }
  this->value_ = value;
};

// Line 64: range 000000000BF14310-000000000BF14434
void __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>>::assign(
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,31,boost::gregorian::bad_day_of_month> > *const this,
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,31,boost::gregorian::bad_day_of_month> >::value_type value)
{
  unsigned __int16 v2; // cx
  unsigned __int16 v3; // cx

  if ( value < boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>>::min() )
  {
    v2 = value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(this);
    }
    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
      this->value_,
      v2,
      min_violation);
  }
  if ( value > boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>>::max() )
  {
    v3 = value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(this);
    }
    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
      this->value_,
      v3,
      max_violation);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(this);
  }
  this->value_ = value;
};

// Line 64: range 000000000BF14440-000000000BF14564
void __cdecl boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>>::assign(
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1400,9999,boost::gregorian::bad_year> > *const this,
        boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1400,9999,boost::gregorian::bad_year> >::value_type value)
{
  unsigned __int16 v2; // cx
  unsigned __int16 v3; // cx

  if ( value < boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>>::min() )
  {
    v2 = value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(this);
    }
    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
      this->value_,
      v2,
      min_violation);
  }
  if ( value > boost::CV::constrained_value<boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>>::max() )
  {
    v3 = value;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(this);
    }
    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
      this->value_,
      v3,
      max_violation);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(this);
  }
  this->value_ = value;
};

// Line 106: range 000000000BF218DD-000000000BF218E7
unsigned __int16 __cdecl boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::min()
{
  return 1;
};

// Line 106: range 000000000BF21792-000000000BF2179C
unsigned __int16 __cdecl boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::min()
{
  return 1;
};

// Line 106: range 000000000BF217FB-000000000BF21805
unsigned __int16 __cdecl boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::min()
{
  return 1400;
};

// Line 107: range 000000000BF2BE35-000000000BF2BE3F
unsigned __int16 __cdecl boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::max()
{
  return 12;
};

// Line 107: range 000000000BF2BC73-000000000BF2BC7D
unsigned __int16 __cdecl boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::max()
{
  return 31;
};

// Line 107: range 000000000BF2BD54-000000000BF2BD5E
unsigned __int16 __cdecl boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::max()
{
  return 9999;
};

// Line 108: range 000000000BF21961-000000000BF219AF
void __cdecl __noreturn boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
        unsigned __int16 a1,
        unsigned __int16 a2,
        boost::CV::violation_enum a3)
{
  boost::gregorian::bad_month e; // [rsp+10h] [rbp-20h] BYREF

  boost::gregorian::bad_month::bad_month(&e);
  __asan_handle_no_return(&e);
  boost::throw_exception<boost::gregorian::bad_month>(&e);
};

// Line 108: range 000000000BF2179D-000000000BF217EB
void __cdecl __noreturn boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
        unsigned __int16 a1,
        unsigned __int16 a2,
        boost::CV::violation_enum a3)
{
  boost::gregorian::bad_day_of_month e; // [rsp+10h] [rbp-20h] BYREF

  boost::gregorian::bad_day_of_month::bad_day_of_month(&e);
  __asan_handle_no_return(&e);
  boost::throw_exception<boost::gregorian::bad_day_of_month>(&e);
};

// Line 108: range 000000000BF2187F-000000000BF218CD
void __cdecl __noreturn boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
        unsigned __int16 a1,
        unsigned __int16 a2,
        boost::CV::violation_enum a3)
{
  boost::gregorian::bad_year e; // [rsp+10h] [rbp-20h] BYREF

  boost::gregorian::bad_year::bad_year(&e);
  __asan_handle_no_return(&e);
  boost::throw_exception<boost::gregorian::bad_year>(&e);
};

// Line 108: range 000000000C2C850C-000000000C2C8633
void __fastcall __noreturn boost::CV::simple_exception_policy<unsigned short,(unsigned short)0,(unsigned short)6,boost::gregorian::bad_weekday>::on_error(
        unsigned __int16 a1,
        unsigned __int16 a2,
        boost::CV::violation_enum a3)
{
  std::forward_iterator_tag v3; // cl
  boost::wrapexcept<boost::gregorian::bad_weekday> *exception; // rbp
  boost::gregorian::bad_weekday v5; // [rsp+0h] [rbp-48h] BYREF
  std::string v6; // [rsp+10h] [rbp-38h] BYREF

  v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v6, &byte_18EF573C[-28], byte_18EF573C, v3);
  std::out_of_range::out_of_range(&v5, &v6);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    operator delete(v6._M_dataplus._M_p);
  *(_QWORD *)v5.baseclass_0 = &`vtable for'boost::gregorian::bad_weekday + 2;
  exception = (boost::wrapexcept<boost::gregorian::bad_weekday> *)__cxa_allocate_exception(0x40uLL);
  if ( *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                  + 63) >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                  + 63) >> 3)
                + 0x7FFF8000) <= (((unsigned __int8)exception + 63) & 7)
    || *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<boost::gregorian::bad_weekday>(exception, &v5);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::gregorian::bad_weekday>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::gregorian::bad_weekday>::~wrapexcept);
};

// Line 108: range 000000000C2C8E08-000000000C2C8F2F
void __fastcall __noreturn boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)366,boost::gregorian::bad_day_of_year>::on_error(
        unsigned __int16 a1,
        unsigned __int16 a2,
        boost::CV::violation_enum a3)
{
  std::forward_iterator_tag v3; // cl
  boost::wrapexcept<boost::gregorian::bad_day_of_year> *exception; // rbp
  boost::gregorian::bad_day_of_year v5; // [rsp+0h] [rbp-48h] BYREF
  std::string v6; // [rsp+10h] [rbp-38h] BYREF

  v6._M_dataplus._M_p = v6._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v6, &byte_18EF5848[-40], byte_18EF5848, v3);
  std::out_of_range::out_of_range(&v5, &v6);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6._M_dataplus._M_p != &v6._anon_0 )
    operator delete(v6._M_dataplus._M_p);
  *(_QWORD *)v5.baseclass_0 = &`vtable for'boost::gregorian::bad_day_of_year + 2;
  exception = (boost::wrapexcept<boost::gregorian::bad_day_of_year> *)__cxa_allocate_exception(0x40uLL);
  if ( *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                  + 63) >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                  + 63) >> 3)
                + 0x7FFF8000) <= (((unsigned __int8)exception + 63) & 7)
    || *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<boost::gregorian::bad_day_of_year>(exception, &v5);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::gregorian::bad_day_of_year>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::gregorian::bad_day_of_year>::~wrapexcept);
};
