// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/c_time.hpp

// Line 75: range 000000000BEF6956-000000000BEF69D1
tm *__cdecl boost::date_time::c_time::gmtime(const time_t *t, tm *result)
{
  tm *resulta; // [rsp+0h] [rbp-30h]
  char v4[32]; // [rsp+10h] [rbp-20h] BYREF

  resulta = gmtime_r(t, result);
  if ( !resulta )
  {
    std::runtime_error::runtime_error((std::runtime_error *)v4, "could not convert calendar time to UTC time");
    __asan_handle_no_return(v4);
    boost::throw_exception<std::runtime_error>((const std::runtime_error *)v4);
  }
  return resulta;
};
