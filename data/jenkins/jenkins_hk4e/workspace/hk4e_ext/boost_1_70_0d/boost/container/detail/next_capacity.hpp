// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container/detail/next_capacity.hpp

// Line 41: range 000000000BFA7142-000000000BFA734B
unsigned __int64 __fastcall boost::container::dtl::grow_factor_ratio<0u,8u,5u>::operator()<unsigned long>(
        const boost::container::dtl::grow_factor_ratio<0,8,5> *const this,
        unsigned __int64 cur_cap,
        const unsigned __int64 add_min_cap,
        const unsigned __int64 max_cap)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  const unsigned __int64 *v7; // rax
  const unsigned __int64 *v8; // rax
  const unsigned __int64 *v9; // rax
  unsigned __int64 result; // rax
  unsigned __int64 a; // [rsp+28h] [rbp-98h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-90h] BYREF
  unsigned __int64 overflow_limit; // [rsp+38h] [rbp-88h]
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 10 new_cap:45 64 8 10 max_cap:41";
  *(_QWORD *)(v4 + 16) = boost::container::dtl::grow_factor_ratio<0u,8u,5u>::operator()<unsigned long>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(_QWORD *)(v4 + 64) = max_cap;
  overflow_limit = 0x1FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v4 + 32) = 0LL;
  if ( cur_cap > 0x1FFFFFFFFFFFFFFFLL )
  {
    *(_QWORD *)(v4 + 32) = cur_cap;
    if ( *(_QWORD *)(v4 + 32) <= 0x9FFFFFFFFFFFFFFFLL )
      *(_QWORD *)(v4 + 32) *= 8LL;
    else
      *(_QWORD *)(v4 + 32) = -1LL;
  }
  else
  {
    *(_QWORD *)(v4 + 32) = 8 * cur_cap / 5;
  }
  v7 = boost::container::dtl::min_value<unsigned long>(
         (const unsigned __int64 *)(v4 + 64),
         (const unsigned __int64 *)(v4 + 32));
  a = cur_cap + add_min_cap;
  v8 = boost::container::dtl::max_value<unsigned long>(&a, v7);
  v14 = 0LL;
  v9 = boost::container::dtl::max_value<unsigned long>(&v14, v8);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v9);
  result = *v9;
  if ( v16 == (char *)v4 )
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
  return result;
};
