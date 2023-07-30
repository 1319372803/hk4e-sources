// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/timer_queue_ptime.ipp

// Line 30: range 000000000C64E29C-000000000C64E2F9
void __cdecl boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::timer_queue(
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *const this)
{
  int (**v1)(...); // rdx

  boost::asio::detail::timer_queue_base::timer_queue_base(this);
  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_timer_queue_base = v1;
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::timer_queue(&this->impl_);
};

// Line 34: range 000000000C64E2FA-000000000C64E357
void __cdecl boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::~timer_queue(
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_timer_queue_base = v1;
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::~timer_queue(&this->impl_);
  boost::asio::detail::timer_queue_base::~timer_queue_base(this);
};

// Line 34: range 000000000C64E358-000000000C64E382
void __cdecl boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::~timer_queue(
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *const this)
{
  boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::~timer_queue(this);
  operator delete(this, 0x40uLL);
};

// Line 40: range 000000000C64E384-000000000C64E3B9
bool __cdecl boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::enqueue_timer(
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        const boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::time_type *time,
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *timer,
        boost::asio::detail::wait_op *op)
{
  return boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::enqueue_timer(
           &this->impl_,
           time,
           timer,
           op);
};

// Line 45: range 000000000C64E3BA-000000000C64E3D7
bool __cdecl boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::empty(
        const boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *const this)
{
  return boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::empty(&this->impl_);
};

// Line 51: range 000000000C64E3D8-000000000C64E400
__int64 __cdecl boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::wait_duration_msec(
        const boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        __int64 max_duration)
{
  return boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::wait_duration_msec(
           &this->impl_,
           max_duration);
};

// Line 57: range 000000000C64E402-000000000C64E42A
__int64 __cdecl boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::wait_duration_usec(
        const boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        __int64 max_duration)
{
  return boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::wait_duration_usec(
           &this->impl_,
           max_duration);
};

// Line 63: range 000000000C64E42C-000000000C64E455
void __cdecl boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::get_ready_timers(
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops)
{
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::get_ready_timers(
    &this->impl_,
    ops);
};

// Line 69: range 000000000C64E456-000000000C64E47F
void __cdecl boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::get_all_timers(
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops)
{
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::get_all_timers(&this->impl_, ops);
};

// Line 75: range 000000000C64E480-000000000C64E4B5
std::size_t __cdecl boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::cancel_timer(
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *const this,
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *timer,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops,
        std::size_t max_cancelled)
{
  return boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::cancel_timer(
           &this->impl_,
           timer,
           ops,
           max_cancelled);
};
