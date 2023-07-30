// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/date.hpp

// Line 71: range 000000000BF08216-000000000BF08396
void __fastcall boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::date(
        boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration> *const this,
        boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::year_type y,
        boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::month_type m,
        boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::day_type d)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // ecx
  boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day> ymd; // [rsp+1Ah] [rbp-86h] BYREF
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 2 4 y:71 48 2 4 m:71 64 2 4 d:71";
  *(_QWORD *)(v4 + 16) = boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::date;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234687998;
  v6[536862722] = -202116350;
  *(boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::year_type *)(v4 + 32) = y;
  *(boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::month_type *)(v4 + 48) = m;
  *(boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::day_type *)(v4 + 64) = d;
  boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>::year_month_day_base(
    &ymd,
    *(boost::gregorian::greg_year *)(v4 + 32),
    *(boost::gregorian::greg_month *)(v4 + 48),
    *(boost::gregorian::greg_day *)(v4 + 64));
  v7 = boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::day_number(&ymd);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->days_ = v7;
  if ( v11 == (char *)v4 )
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

// Line 116: range 000000000BF17FD4-000000000BF18025
bool __cdecl boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::is_not_a_date(
        const boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return boost::date_time::int_adapter<unsigned int>::is_not_a_number(this->days_);
};

// Line 121: range 000000000BF18026-000000000BF18077
bool __cdecl boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::is_infinity(
        const boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return boost::date_time::int_adapter<unsigned int>::is_inf(this->days_);
};

// Line 170: range 000000000BF2C186-000000000BF2C1E1
boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::date_rep_type __cdecl boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::day_count(
        const boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration> *const this)
{
  boost::date_time::int_adapter<unsigned int> v2; // [rsp+1Ch] [rbp-4h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  boost::date_time::int_adapter<unsigned int>::int_adapter(&v2, this->days_);
  return v2;
};

// Line 196: range 000000000BF08112-000000000BF08214
void __fastcall boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::date(
        boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration> *const this,
        boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::date_rep_type days)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::date_time::int_adapter<unsigned int>::int_type v5; // ecx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 days:196";
  *(_QWORD *)(v2 + 16) = boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::date;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::date_rep_type *)(v2 + 32) = days;
  v5 = boost::date_time::int_adapter<unsigned int>::as_number((const boost::date_time::int_adapter<unsigned int> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->days_ = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
