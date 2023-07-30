// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/posix_time/posix_time_config.hpp

// Line 57: range 000000000BEF805A-000000000BEF807F
void __cdecl boost::posix_time::time_duration::time_duration(
        boost::posix_time::time_duration *const this,
        const boost::posix_time::time_duration *a2)
{
  boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::time_duration(
    this,
    a2);
};

// Line 69: range 000000000BEF7E00-000000000BEF7E3D
void __cdecl boost::posix_time::time_duration::time_duration(
        boost::posix_time::time_duration *const this,
        boost::posix_time::time_duration::hour_type hour,
        boost::posix_time::time_duration::min_type min,
        boost::posix_time::time_duration::sec_type sec,
        boost::posix_time::time_duration::fractional_seconds_type fs_0)
{
  boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::time_duration(
    this,
    hour,
    min,
    sec,
    fs_0);
};

// Line 79: range 000000000BEF7E3E-000000000BEF7E60
void __cdecl boost::posix_time::time_duration::time_duration(
        boost::posix_time::time_duration *const this,
        boost::date_time::special_values sv)
{
  boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::time_duration(
    this,
    sv);
};
