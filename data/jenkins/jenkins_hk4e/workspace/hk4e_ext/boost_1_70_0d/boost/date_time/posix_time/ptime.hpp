// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/posix_time/ptime.hpp

// Line 40: range 000000000BEF7E62-000000000BEF7F38
void __fastcall boost::posix_time::ptime::ptime(
        boost::posix_time::ptime *const this,
        boost::gregorian::date d,
        boost::posix_time::ptime::time_duration_type *p_td)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 4 d:40";
  *(_QWORD *)(v3 + 16) = boost::posix_time::ptime::ptime;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(boost::gregorian::date *)(v3 + 32) = d;
  boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::base_time(
    this,
    (const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::date_type *)(v3 + 32),
    p_td,
    not_dst);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 000000000BEF7F3A-000000000BEF7F5F
void __cdecl boost::posix_time::ptime::ptime(
        boost::posix_time::ptime *const this,
        const boost::posix_time::ptime::time_rep_type *rhs)
{
  boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::base_time(
    this,
    rhs);
};

// Line 54: range 000000000BEF7F60-000000000BEF7FB2
void __cdecl boost::posix_time::ptime::ptime(boost::posix_time::ptime *const this)
{
  boost::gregorian::date day; // [rsp+14h] [rbp-1Ch] BYREF
  boost::posix_time::time_duration td; // [rsp+18h] [rbp-18h] BYREF

  boost::posix_time::time_duration::time_duration(&td, not_a_date_time);
  boost::gregorian::date::date(&day, not_a_date_time);
  boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::base_time(
    this,
    &day,
    &td,
    not_dst);
};
