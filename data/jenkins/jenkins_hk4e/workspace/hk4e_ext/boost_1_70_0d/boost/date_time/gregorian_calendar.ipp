// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/gregorian_calendar.ipp

// Line 76: range 000000000BF14C64-000000000BF14D7E
unsigned int __cdecl boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::day_number(
        const boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::ymd_type *ymd)
{
  unsigned __int16 a; // [rsp+12h] [rbp-Eh]
  unsigned __int16 y; // [rsp+14h] [rbp-Ch]
  unsigned __int16 m; // [rsp+16h] [rbp-Ah]

  a = (14 - boost::gregorian::greg_month::operator unsigned short(&ymd->month)) / 12;
  y = boost::gregorian::greg_year::operator unsigned short(&ymd->year) - a + 4800;
  m = boost::gregorian::greg_month::operator unsigned short(&ymd->month) + 12 * a - 3;
  return (y >> 2)
       + 365 * y
       + (153 * m + 2) / 5
       + boost::gregorian::greg_day::operator unsigned short(&ymd->day)
       - y / 0x64u
       + y / 0x190u
       - 32045;
};

// Line 164: range 000000000BF14F4C-000000000BF150AD
_BOOL8 __fastcall boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::is_leap_year(
        boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::year_type year)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  _BOOL8 result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 2 8 year:164";
  *(_QWORD *)(v1 + 16) = boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::is_leap_year;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116350;
  *(boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::year_type *)(v1 + 32) = year;
  result = (boost::gregorian::greg_year::operator unsigned short((const boost::gregorian::greg_year *const)(v1 + 32)) & 3) == 0
        && (boost::gregorian::greg_year::operator unsigned short((const boost::gregorian::greg_year *const)(v1 + 32))
          % 0x64u
         || !(boost::gregorian::greg_year::operator unsigned short((const boost::gregorian::greg_year *const)(v1 + 32))
            % 0x190u));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 177: range 000000000BF08398-000000000BF084F1
__int64 __fastcall boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::end_of_month_day(
        boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::year_type year,
        boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::month_type month)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 2 8 year:177 64 2 9 month:178";
  *(_QWORD *)(v2 + 16) = boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::end_of_month_day;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234688015;
  v4[536862722] = -202116350;
  *(boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::year_type *)(v2 + 48) = year;
  *(boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::month_type *)(v2 + 64) = month;
  switch ( boost::gregorian::greg_month::operator unsigned short((const boost::gregorian::greg_month *const)(v2 + 64)) )
  {
    case 2u:
      if ( boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::is_leap_year(*(boost::date_time::gregorian_calendar_base<boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>,unsigned int>::year_type *)(v2 + 48)) )
        result = 29LL;
      else
        result = 28LL;
      break;
    case 4u:
    case 6u:
    case 9u:
    case 0xBu:
      result = 30LL;
      break;
    default:
      result = 31LL;
      break;
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
