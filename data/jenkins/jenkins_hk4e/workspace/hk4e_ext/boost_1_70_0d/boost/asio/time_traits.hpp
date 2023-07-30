// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/time_traits.hpp

// Line 45: range 000000000BEF7FB3-000000000BEF7FBD
boost::asio::time_traits<boost::posix_time::ptime>::time_type __cdecl boost::asio::time_traits<boost::posix_time::ptime>::now()
{
  return boost::date_time::microsec_clock<boost::posix_time::ptime>::universal_time();
};

// Line 55: range 000000000BEF7FBE-000000000BEF7FE2
boost::asio::time_traits<boost::posix_time::ptime>::time_type __cdecl boost::asio::time_traits<boost::posix_time::ptime>::add(
        const boost::asio::time_traits<boost::posix_time::ptime>::time_type *t,
        const boost::asio::time_traits<boost::posix_time::ptime>::duration_type *d)
{
  return boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::operator+(
           t,
           d);
};

// Line 61: range 000000000BEF7FE3-000000000BEF8034
boost::asio::time_traits<boost::posix_time::ptime>::duration_type __cdecl boost::asio::time_traits<boost::posix_time::ptime>::subtract(
        const boost::asio::time_traits<boost::posix_time::ptime>::time_type *t1,
        const boost::asio::time_traits<boost::posix_time::ptime>::time_type *t2)
{
  const boost::asio::time_traits<boost::posix_time::ptime>::time_type *v2; // rcx

  v2 = t2;
  if ( *(_BYTE *)(((unsigned __int64)t1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::operator-(
    t1,
    v2);
  return (boost::asio::time_traits<boost::posix_time::ptime>::duration_type)t1;
};

// Line 67: range 000000000BEF8035-000000000BEF8059
bool __cdecl boost::asio::time_traits<boost::posix_time::ptime>::less_than(
        const boost::asio::time_traits<boost::posix_time::ptime>::time_type *t1,
        const boost::asio::time_traits<boost::posix_time::ptime>::time_type *t2)
{
  return boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::operator<(
           t1,
           t2);
};

// Line 73: range 000000000BEF8080-000000000BEF80A8
boost::posix_time::time_duration __cdecl boost::asio::time_traits<boost::posix_time::ptime>::to_posix_duration(
        const boost::asio::time_traits<boost::posix_time::ptime>::duration_type *d)
{
  const boost::posix_time::time_duration *v1; // rsi

  boost::posix_time::time_duration::time_duration((boost::posix_time::time_duration *const)d, v1);
  return (boost::posix_time::time_duration)d;
};
