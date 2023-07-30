// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/posix_time/posix_time_duration.hpp

// Line 74: range 000000000BF64BF4-000000000BF64C73
void __cdecl boost::posix_time::seconds::seconds<int>(
        boost::posix_time::seconds *const this,
        const int *s,
        boost::enable_if_c<true,void>::type *a3)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)s & 7) + 3) >= *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(s);
  }
  v3 = boost::numeric_cast<long,int>(*s);
  boost::posix_time::time_duration::time_duration(this, 0LL, 0LL, v3, 0LL);
};
