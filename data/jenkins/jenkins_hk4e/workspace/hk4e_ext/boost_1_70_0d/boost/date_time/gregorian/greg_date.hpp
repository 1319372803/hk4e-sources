// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/gregorian/greg_date.hpp

// Line 56: range 000000000BEF7A46-000000000BEF7C58
void __fastcall boost::gregorian::date::date(
        boost::gregorian::date *const this,
        boost::gregorian::date::year_type y,
        boost::gregorian::date::month_type m,
        boost::gregorian::date::day_type d)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  boost::CV::constrained_value<boost::CV::simple_exception_policy<short unsigned int,1,31,boost::gregorian::bad_day_of_month> >::value_type v7; // r14
  std::allocator<char> __a; // [rsp+1Fh] [rbp-C1h] BYREF
  boost::gregorian::bad_day_of_month e; // [rsp+20h] [rbp-C0h] BYREF
  std::string s; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 2 4 y:56 48 2 4 m:56 64 2 4 d:56";
  *(_QWORD *)(v4 + 16) = boost::gregorian::date::date;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234687998;
  v6[536862722] = -202116350;
  *(boost::gregorian::date::year_type *)(v4 + 32) = y;
  *(boost::gregorian::date::month_type *)(v4 + 48) = m;
  *(boost::gregorian::date::day_type *)(v4 + 64) = d;
  boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::date(
    this,
    *(boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::year_type *)(v4 + 32),
    *(boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::month_type *)(v4 + 48),
    *(boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::day_type *)(v4 + 64));
  v7 = boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::end_of_month_day(
         *(boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::year_type *)(v4 + 32),
         *(boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::month_type *)(v4 + 48));
  if ( v7 < boost::gregorian::greg_day::operator unsigned short((const boost::gregorian::greg_day *const)(v4 + 64)) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&s, "Day of month is not valid for year", &__a);
    boost::gregorian::bad_day_of_month::bad_day_of_month(&e, &s);
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::gregorian::bad_day_of_month>(&e);
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 76: range 000000000BEF7C5A-000000000BEF7DB3
void __cdecl boost::gregorian::date::date(boost::gregorian::date *const this, boost::date_time::special_values sv)
{
  boost::date_time::int_adapter<unsigned int> v2; // eax
  boost::gregorian::greg_year v3; // [rsp+16h] [rbp-1Ah] BYREF
  boost::gregorian::greg_month v4; // [rsp+18h] [rbp-18h] BYREF
  boost::gregorian::greg_day v5; // [rsp+1Ah] [rbp-16h] BYREF
  boost::gregorian::date v6; // [rsp+1Ch] [rbp-14h] BYREF

  v2.value_ = boost::date_time::int_adapter<unsigned int>::from_special(sv).value_;
  boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::date(
    this,
    v2);
  if ( sv == min_date_time )
  {
    boost::gregorian::greg_day::greg_day(&v5, 1u);
    boost::gregorian::greg_month::greg_month(&v4, 1u);
    boost::gregorian::greg_year::greg_year(&v3, 0x578u);
    boost::gregorian::date::date(&v6, v3, v4, v5);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(this);
    }
    this->days_ = v6.days_;
  }
  if ( sv == max_date_time )
  {
    boost::gregorian::greg_day::greg_day(&v5, 0x1Fu);
    boost::gregorian::greg_month::greg_month(&v4, 0xCu);
    boost::gregorian::greg_year::greg_year(&v3, 0x270Fu);
    boost::gregorian::date::date(&v6, v3, v4, v5);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(this);
    }
    this->days_ = v6.days_;
  }
};

// Line 115: range 000000000BEF7DB4-000000000BEF7DFE
boost::gregorian::date::date_int_type __cdecl boost::gregorian::date::day_number(
        const boost::gregorian::date *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->days_;
};
