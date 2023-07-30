// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/time.hpp

// Line 61: range 000000000BF0865E-000000000BF086BB
void __cdecl boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::base_time(
        boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > > *const this,
        const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::date_type *day,
        const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::time_duration_type *td,
        boost::date_time::dst_flags dst)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->time_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(
                  day,
                  td,
                  dst);
};

// Line 69: range 000000000BF086BC-000000000BF0871E
void __cdecl boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::base_time(
        boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > > *const this,
        const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::time_rep_type *rhs)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->time_.time_count_.value_ = rhs->time_count_.value_;
};

// Line 131: range 000000000BF087DC-000000000BF08800
bool __cdecl boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::operator<(
        const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > > *const this,
        const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::time_type *rhs)
{
  return boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::is_less(
           &this->time_,
           &rhs->time_);
};

// Line 136: range 000000000BF08788-000000000BF087DA
boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::time_duration_type __cdecl boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::operator-(
        const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > > *const this,
        const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::time_type *rhs)
{
  const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::time_type *v2; // rcx

  v2 = rhs;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::subtract_times(
    &this->time_,
    &v2->time_);
  return (boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::time_duration_type)this;
};

// Line 161: range 000000000BF08734-000000000BF08786
boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::time_type __cdecl boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>>::operator+(
        const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > > *const this,
        const boost::date_time::base_time<boost::posix_time::ptime,boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> > >::time_duration_type *td)
{
  boost::posix_time::time_duration p_td; // [rsp+18h] [rbp-18h] BYREF
  boost::posix_time::ptime::time_rep_type rhs; // [rsp+20h] [rbp-10h] BYREF
  boost::posix_time::ptime v5; // [rsp+28h] [rbp-8h] BYREF

  boost::posix_time::time_duration::time_duration(&p_td, td);
  rhs.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::add_time_duration(
                             &this->time_,
                             &p_td).time_count_.value_;
  boost::posix_time::ptime::ptime(&v5, &rhs);
  return v5;
};
