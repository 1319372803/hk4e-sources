// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/year_month_day.hpp

// Line 35: range 000000000BF14D80-000000000BF14F4A
void __fastcall boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>::year_month_day_base(
        boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day> *const this,
        boost::gregorian::greg_year y,
        boost::gregorian::greg_month m,
        boost::gregorian::greg_day d)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  _DWORD *v7; // rax
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 96);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 2 4 y:35 48 2 4 m:36 64 2 4 d:37";
  *(_QWORD *)(v4 + 16) = boost::date_time::year_month_day_base<boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day>::year_month_day_base;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234687998;
  v7[536862722] = -202116350;
  *(boost::gregorian::greg_year *)(v4 + 32) = y;
  *(boost::gregorian::greg_month *)(v4 + 48) = m;
  *(boost::gregorian::greg_day *)(v4 + 64) = d;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v7 = (_DWORD *)__asan_report_store2(this);
  }
  this->year.value_ = *((_WORD *)v6 - 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->month >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 2) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->month >> 3) + 0x7FFF8000) )
  {
    v7 = (_DWORD *)__asan_report_store2(&this->month);
  }
  this->month.value_ = *((_WORD *)v6 - 24);
  if ( *(_BYTE *)(((unsigned __int64)&this->day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->day >> 3) + 0x7FFF8000) )
  {
    v7 = (_DWORD *)__asan_report_store2(&this->day);
  }
  this->day.value_ = *((_WORD *)v6 - 16);
  if ( v10 == (char *)v4 )
  {
    *((_QWORD *)v7 + 268431360) = 0LL;
    v7[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *((_QWORD *)v7 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v7[536862722] = -168430091;
  }
};
