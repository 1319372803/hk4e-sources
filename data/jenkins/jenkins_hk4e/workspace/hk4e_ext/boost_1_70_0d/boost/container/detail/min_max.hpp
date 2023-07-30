// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container/detail/min_max.hpp

// Line 26: range 000000000BFA99D9-000000000BFA9A49
const unsigned __int64 *__cdecl boost::container::dtl::max_value<unsigned long>(
        const unsigned __int64 *a,
        const unsigned __int64 *b)
{
  unsigned __int64 v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8(a);
  v2 = *a;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8(b);
  if ( v2 <= *b )
    return b;
  else
    return a;
};

// Line 30: range 000000000BFA9968-000000000BFA99D8
const unsigned __int64 *__cdecl boost::container::dtl::min_value<unsigned long>(
        const unsigned __int64 *a,
        const unsigned __int64 *b)
{
  unsigned __int64 v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8(a);
  v2 = *a;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8(b);
  if ( v2 >= *b )
    return b;
  else
    return a;
};
