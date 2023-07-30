// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/time_system_counted.hpp

// Line 34: range 000000000BF22268-000000000BF22393
void __cdecl boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep(
        boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *const this,
        const boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::date_type *d,
        const boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::time_duration_type *time_of_day)
{
  __int64 v4; // rbx
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::int_type v5; // rbx
  boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int> >::tick_type v6; // rax
  boost::date_time::int_adapter<unsigned int> rhs; // [rsp+24h] [rbp-1Ch] BYREF
  boost::date_time::int_adapter<long int> v9; // [rsp+28h] [rbp-18h] BYREF

  boost::date_time::int_adapter<long>::int_adapter(&this->time_count_, 1LL);
  if ( boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::is_infinity(d)
    || boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::is_not_a_date(d)
    || boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::is_special(time_of_day) )
  {
    rhs.value_ = boost::date_time::date<boost::gregorian::date,boost::gregorian::gregorian_calendar,boost::gregorian::date_duration>::day_count(d).value_;
    v9.value_ = boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::get_rep(time_of_day).value_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->time_count_ = boost::date_time::int_adapter<long>::operator+<unsigned int>(&v9, &rhs);
  }
  else
  {
    v4 = boost::gregorian::date::day_number(d);
    v5 = boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::frac_sec_per_day()
       * v4;
    v6 = boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::ticks(time_of_day);
    boost::date_time::int_adapter<long>::int_adapter(&v9, v5 + v6);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->time_count_ = v9;
  }
};

// Line 45: range 000000000BF22524-000000000BF22549
void __cdecl boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep(
        boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *const this,
        boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::int_type count)
{
  boost::date_time::int_adapter<long>::int_adapter(&this->time_count_, count);
};

// Line 48: range 000000000BF223E4-000000000BF224C3
void __fastcall boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep(
        boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *const this,
        boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::impl_type count)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // rax
  char v6[80]; // [rsp+10h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 count:48";
  *(_QWORD *)(v2 + 16) = boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::impl_type *)(v2 + 32) = count;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  this->time_count_.value_ = *(_QWORD *)(v4 - 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 80: range 000000000BF224C4-000000000BF224FE
boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::int_type __cdecl boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::time_count(
        const boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>::as_number(this->time_count_);
};

// Line 88: range 000000000BF224FF-000000000BF22522
boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::int_type __cdecl boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::frac_sec_per_day()
{
  return 86400
       * boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>::res_adjust();
};

// Line 106: range 000000000BF22394-000000000BF223AD
bool __cdecl boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::is_special(
        const boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *const this)
{
  return boost::date_time::int_adapter<long>::is_special(&this->time_count_);
};

// Line 110: range 000000000BF223AE-000000000BF223E3
boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::impl_type __cdecl boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::get_rep(
        const boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::impl_type)this->time_count_.value_;
};

// Line 131: range 000000000BF2225C-000000000BF22266
void __cdecl boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::unused_var<boost::date_time::dst_flags>(
        const boost::date_time::dst_flags *a1)
{
  ;
};

// Line 133: range 000000000BF15397-000000000BF1547D
boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type __fastcall boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(
        const boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::date_type *day,
        const boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_duration_type *tod,
        boost::date_time::dst_flags dst)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type result; // rax
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> v8; // [rsp+28h] [rbp-68h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 dst:135";
  *(_QWORD *)(v3 + 16) = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = dst;
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::unused_var<boost::date_time::dst_flags>((const boost::date_time::dst_flags *)(v3 + 32));
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep(
    &v8,
    day,
    tod);
  result.time_count_.value_ = v8.time_count_.value_;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 189: range 000000000BF15A5C-000000000BF15A94
bool __cdecl boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::is_less(
        const boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type *lhs,
        const boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type *rhs)
{
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::int_type v2; // rbx

  v2 = boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::time_count(lhs);
  return v2 < boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::time_count(rhs);
};

// Line 223: range 000000000BF15891-000000000BF15955
boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type __cdecl boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::add_time_duration(
        const boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type *base,
        boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_duration_type *p_td)
{
  boost::date_time::int_adapter<long int> v3; // rax
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::int_type v5; // rbx
  boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int> >::tick_type v6; // rax
  boost::date_time::int_adapter<long int> v7; // [rsp+18h] [rbp-28h] BYREF
  boost::date_time::int_adapter<long int> rhs; // [rsp+20h] [rbp-20h] BYREF
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> v9; // [rsp+28h] [rbp-18h] BYREF

  if ( boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::is_special(base)
    || boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::is_special(p_td) )
  {
    rhs.value_ = boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::get_rep(p_td).value_;
    v7.value_ = boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::get_rep(base).value_;
    v3.value_ = boost::date_time::int_adapter<long>::operator+<long>(&v7, &rhs).value_;
    boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep(&v9, v3);
  }
  else
  {
    v5 = boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::time_count(base);
    v6 = boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::ticks(p_td);
    boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep(
      &v9,
      v5 + v6);
  }
  return v9;
};

// Line 233: range 000000000BF15956-000000000BF15A5B
boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_duration_type __cdecl boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::subtract_times(
        const boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type *lhs,
        const boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type *rhs)
{
  const boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type *v2; // rdx
  boost::date_time::int_adapter<long int>::int_type v4; // rax
  boost::date_time::special_values v5; // edx
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::int_type v6; // rbx
  const boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type *rhsa; // [rsp+8h] [rbp-48h]
  boost::date_time::int_adapter<long int> v9; // [rsp+20h] [rbp-30h] BYREF
  boost::date_time::int_adapter<long int> v10; // [rsp+28h] [rbp-28h] BYREF
  boost::date_time::int_adapter<long int> v11; // [rsp+30h] [rbp-20h] BYREF
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::fractional_seconds_type fs_0; // [rsp+38h] [rbp-18h]

  rhsa = v2;
  if ( boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::is_special(rhs)
    || boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::is_special(rhsa) )
  {
    v10.value_ = boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::get_rep(rhsa).value_;
    v9.value_ = boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::get_rep(rhs).value_;
    v11.value_ = boost::date_time::int_adapter<long>::operator-<long>(&v9, &v10).value_;
    v4 = boost::date_time::int_adapter<long>::as_number(&v11);
    v5 = boost::date_time::int_adapter<long>::to_special(v4);
    boost::posix_time::time_duration::time_duration((boost::posix_time::time_duration *const)lhs, v5);
  }
  else
  {
    v6 = boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::time_count(rhs);
    fs_0 = v6
         - boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::time_count(rhsa);
    boost::posix_time::time_duration::time_duration((boost::posix_time::time_duration *const)lhs, 0LL, 0LL, 0LL, fs_0);
  }
  return (boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_duration_type)lhs;
};
