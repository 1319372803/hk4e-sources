// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/time_resolution_traits.hpp

// Line 25: range 000000000BF0BA75-000000000BF0BA8E
__int64 __cdecl boost::date_time::absolute_value<long>(__int64 x)
{
  return abs64(x);
};

// Line 58: range 000000000BEF7578-000000000BEF7638
boost::date_time::time_resolution_traits_adapted64_impl::int_type __fastcall boost::date_time::time_resolution_traits_adapted64_impl::as_number(
        boost::date_time::time_resolution_traits_adapted64_impl::impl_type i)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::date_time::time_resolution_traits_adapted64_impl::int_type result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 4 i:58";
  *(_QWORD *)(v1 + 16) = boost::date_time::time_resolution_traits_adapted64_impl::as_number;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(boost::date_time::time_resolution_traits_adapted64_impl::impl_type *)(v1 + 32) = i;
  result = boost::date_time::int_adapter<long>::as_number((const boost::date_time::int_adapter<long int> *const)(v1 + 32));
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

// Line 60: range 000000000BEF7639-000000000BEF7643
bool __cdecl boost::date_time::time_resolution_traits_adapted64_impl::is_adapted()
{
  return 1;
};

// Line 110: range 000000000BF2C3DE-000000000BF2C3E8
bool __cdecl boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>::is_adapted()
{
  return boost::date_time::time_resolution_traits_adapted64_impl::is_adapted();
};

// Line 130: range 000000000BF18078-000000000BF18082
boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int>::fractional_seconds_type __cdecl boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>::res_adjust()
{
  return 1000000LL;
};

// Line 135: range 000000000BF1529A-000000000BF15396
boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int>::tick_type __cdecl boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>::to_tick_count(
        boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int>::hour_type hours,
        boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int>::min_type minutes,
        boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int>::sec_type seconds,
        boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int>::fractional_seconds_type fs_0)
{
  __int64 fs_0b; // [rsp+0h] [rbp-30h]
  __int64 secondsb; // [rsp+8h] [rbp-28h]
  __int64 minutesa; // [rsp+10h] [rbp-20h]
  __int64 hoursa; // [rsp+18h] [rbp-18h]

  if ( hours >= 0 && minutes >= 0 && seconds >= 0 && fs_0 >= 0 )
    return boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>::res_adjust()
         * (3600 * hours + 60 * minutes + seconds)
         + fs_0;
  hoursa = boost::date_time::absolute_value<long>(hours);
  minutesa = boost::date_time::absolute_value<long>(minutes);
  secondsb = boost::date_time::absolute_value<long>(seconds);
  fs_0b = boost::date_time::absolute_value<long>(fs_0);
  return -(boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>::res_adjust()
         * (3600 * hoursa + 60 * minutesa + secondsb)
         + fs_0b);
};

// Line 252: range 000000000BF246F6-000000000BF247B6
boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int>::fractional_seconds_type __fastcall boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>::as_number(
        boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int>::impl_type i)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int>::fractional_seconds_type result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 i:106";
  *(_QWORD *)(v1 + 16) = boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>::as_number;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000,6,long int>::impl_type *)(v1 + 32) = i;
  result = boost::date_time::time_resolution_traits_adapted64_impl::as_number(*(boost::date_time::time_resolution_traits_adapted64_impl::impl_type *)(v1 + 32));
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
