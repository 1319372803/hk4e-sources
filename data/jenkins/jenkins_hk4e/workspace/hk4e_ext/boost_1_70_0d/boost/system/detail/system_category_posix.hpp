// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/system/detail/system_category_posix.hpp

// Line 20: range 000000000BEE2DEA-000000000BEE2E7B
bool __cdecl boost::system::detail::is_generic_value(int ev)
{
  char v1; // dl
  int i; // [rsp+18h] [rbp-8h]

  for ( i = 0; i <= 78; ++i )
  {
    v1 = *(_BYTE *)(((unsigned __int64)&boost::system::detail::is_generic_value(int)::gen[i] >> 3) + 0x7FFF8000);
    if ( v1 != 0 && (char)(((unsigned __int8)&boost::system::detail::is_generic_value(int)::gen[i] & 7) + 3) >= v1 )
      __asan_report_load4(&boost::system::detail::is_generic_value(int)::gen[i]);
    if ( ev == boost::system::detail::is_generic_value(int)::gen[i] )
      return 1;
  }
  return 0;
};

// Line 114: range 000000000BEE2E7C-000000000BEE2EDA
boost::system::error_condition __cdecl boost::system::detail::system_category_default_error_condition_posix(int ev)
{
  const boost::system::error_category *v1; // rax
  __int64 v2; // rax
  const boost::system::error_category *cat; // rdx
  boost::system::error_condition v4; // [rsp+10h] [rbp-10h] BYREF
  boost::system::error_condition result; // 0:rax.5,8:rdx.8

  if ( boost::system::detail::is_generic_value(ev) )
    v1 = boost::system::generic_category();
  else
    v1 = boost::system::system_category();
  boost::system::error_condition::error_condition(&v4, ev, v1);
  v2 = *(_QWORD *)&v4.val_;
  cat = v4.cat_;
  result.cat_ = cat;
  result.val_ = v2;
  result.failed_ = BYTE4(v2);
  return result;
};
