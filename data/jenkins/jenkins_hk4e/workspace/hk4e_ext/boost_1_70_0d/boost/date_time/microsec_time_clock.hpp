// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/microsec_time_clock.hpp

// Line 76: range 000000000BF0871F-000000000BF08733
boost::posix_time::ptime __cdecl boost::date_time::microsec_clock<boost::posix_time::ptime>::universal_time()
{
  return boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time((boost::date_time::microsec_clock<boost::posix_time::ptime>::time_converter)boost::date_time::c_time::gmtime);
};

// Line 82: range 000000000BF1547E-000000000BF15890
boost::posix_time::ptime __cdecl boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(
        boost::date_time::microsec_clock<boost::posix_time::ptime>::time_converter converter)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int *p_tm_mday; // rax
  boost::posix_time::time_duration::fractional_seconds_type v5; // r8
  boost::posix_time::time_duration::sec_type tm_sec; // rcx
  boost::posix_time::time_duration::min_type tm_min; // rdx
  boost::posix_time::ptime result; // rax
  boost::gregorian::greg_year v9; // [rsp+1Ah] [rbp-146h] BYREF
  boost::gregorian::greg_month v10; // [rsp+1Ch] [rbp-144h] BYREF
  boost::gregorian::greg_day v11; // [rsp+1Eh] [rbp-142h] BYREF
  uint32_t sub_sec; // [rsp+20h] [rbp-140h]
  int adjust; // [rsp+24h] [rbp-13Ch]
  boost::posix_time::time_duration p_td; // [rsp+28h] [rbp-138h] BYREF
  boost::posix_time::ptime v15; // [rsp+30h] [rbp-130h] BYREF
  tm *curr_ptr; // [rsp+38h] [rbp-128h]
  char v17[288]; // [rsp+40h] [rbp-120h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 5 d:112 64 8 4 t:87 96 8 6 td:122 128 16 5 tv:85 160 56 8 curr:110";
  *(_QWORD *)(v1 + 16) = boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -219021312;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  gettimeofday((struct timeval *)(v1 + 128), 0LL);
  *(_QWORD *)(v1 + 64) = *(_QWORD *)(v1 + 128);
  sub_sec = *(_QWORD *)(v1 + 136);
  curr_ptr = converter((const time_t *)(v1 + 64), (tm *)(v1 + 160));
  p_tm_mday = &curr_ptr->tm_mday;
  if ( *(_BYTE *)(((unsigned __int64)p_tm_mday >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_tm_mday & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_tm_mday >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_tm_mday);
  }
  boost::gregorian::greg_day::greg_day(&v11, curr_ptr->tm_mday);
  if ( *(_BYTE *)(((unsigned __int64)&curr_ptr->tm_mon >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&curr_ptr->tm_mon >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&curr_ptr->tm_mon);
  }
  boost::gregorian::greg_month::greg_month(&v10, curr_ptr->tm_mon + 1);
  if ( *(_BYTE *)(((unsigned __int64)&curr_ptr->tm_year >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)curr_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curr_ptr->tm_year >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&curr_ptr->tm_year);
  }
  boost::gregorian::greg_year::greg_year(&v9, curr_ptr->tm_year + 1900);
  boost::gregorian::date::date((boost::gregorian::date *const)(v1 + 48), v9, v10, v11);
  adjust = (int)boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>::res_adjust()
         / 1000000;
  v5 = sub_sec * adjust;
  if ( *(_BYTE *)(((unsigned __int64)curr_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)curr_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(curr_ptr);
  }
  tm_sec = curr_ptr->tm_sec;
  if ( *(_BYTE *)(((unsigned __int64)&curr_ptr->tm_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)curr_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curr_ptr->tm_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&curr_ptr->tm_min);
  }
  tm_min = curr_ptr->tm_min;
  if ( *(_BYTE *)(((unsigned __int64)&curr_ptr->tm_hour >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&curr_ptr->tm_hour >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&curr_ptr->tm_hour);
  }
  boost::posix_time::time_duration::time_duration(
    (boost::posix_time::time_duration *const)(v1 + 96),
    curr_ptr->tm_hour,
    tm_min,
    tm_sec,
    v5);
  boost::posix_time::time_duration::time_duration(&p_td, (const boost::posix_time::time_duration *)(v1 + 96));
  boost::posix_time::ptime::ptime(&v15, *(boost::gregorian::date *)(v1 + 48), &p_td);
  result.time_.time_count_.value_ = v15.time_.time_count_.value_;
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
