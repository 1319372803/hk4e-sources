// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/timer_queue_set.ipp

// Line 27: range 000000000C6434EE-000000000C643528
void __cdecl boost::asio::detail::timer_queue_set::timer_queue_set(boost::asio::detail::timer_queue_set *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->first_ = 0LL;
};

// Line 33: range 000000000C64352A-000000000C64359C
void __cdecl boost::asio::detail::timer_queue_set::insert(
        boost::asio::detail::timer_queue_set *const this,
        boost::asio::detail::timer_queue_base *q)
{
  boost::asio::detail::timer_queue_base *first; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  first = this->first_;
  if ( *(_BYTE *)(((unsigned __int64)&q->next_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  q->next_ = first;
  this->first_ = q;
};

// Line 39: range 000000000C64359E-000000000C64371B
void __cdecl boost::asio::detail::timer_queue_set::erase(
        boost::asio::detail::timer_queue_set *const this,
        boost::asio::detail::timer_queue_base *q)
{
  boost::asio::detail::timer_queue_base *p; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->first_ )
  {
    if ( q == this->first_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&q->next_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&q->next_);
      this->first_ = q->next_;
      q->next_ = 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      for ( p = this->first_; ; p = p->next_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&p->next_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&p->next_);
        if ( !p->next_ )
          break;
        if ( q == p->next_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&q->next_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&q->next_);
          p->next_ = q->next_;
          q->next_ = 0LL;
          return;
        }
        if ( *(_BYTE *)(((unsigned __int64)&p->next_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&p->next_);
      }
    }
  }
};

// Line 70: range 000000000C64371C-000000000C643809
__int64 __cdecl boost::asio::detail::timer_queue_set::wait_duration_msec(
        const boost::asio::detail::timer_queue_set *const this,
        __int64 max_duration)
{
  unsigned __int64 v2; // rax
  boost::asio::detail::timer_queue_base *p; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  for ( p = this->first_; p; p = p->next_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p);
    v2 = (unsigned __int64)(p->_vptr_timer_queue_base + 3);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(p->_vptr_timer_queue_base + 3);
    max_duration = (*(__int64 (__fastcall **)(boost::asio::detail::timer_queue_base *, __int64))v2)(p, max_duration);
    if ( *(_BYTE *)(((unsigned __int64)&p->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&p->next_);
  }
  return max_duration;
};

// Line 78: range 000000000C64380A-000000000C6438F7
__int64 __cdecl boost::asio::detail::timer_queue_set::wait_duration_usec(
        const boost::asio::detail::timer_queue_set *const this,
        __int64 max_duration)
{
  unsigned __int64 v2; // rax
  boost::asio::detail::timer_queue_base *p; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  for ( p = this->first_; p; p = p->next_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p);
    v2 = (unsigned __int64)(p->_vptr_timer_queue_base + 4);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(p->_vptr_timer_queue_base + 4);
    max_duration = (*(__int64 (__fastcall **)(boost::asio::detail::timer_queue_base *, __int64))v2)(p, max_duration);
    if ( *(_BYTE *)(((unsigned __int64)&p->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&p->next_);
  }
  return max_duration;
};

// Line 86: range 000000000C6438F8-000000000C6439D6
void __cdecl boost::asio::detail::timer_queue_set::get_ready_timers(
        boost::asio::detail::timer_queue_set *const this,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops)
{
  unsigned __int64 v2; // rax
  boost::asio::detail::timer_queue_base *p; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  for ( p = this->first_; p; p = p->next_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p);
    v2 = (unsigned __int64)(p->_vptr_timer_queue_base + 5);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(p->_vptr_timer_queue_base + 5);
    (*(void (__fastcall **)(boost::asio::detail::timer_queue_base *, boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *))v2)(
      p,
      ops);
    if ( *(_BYTE *)(((unsigned __int64)&p->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&p->next_);
  }
};

// Line 92: range 000000000C6439D8-000000000C643AB6
void __cdecl boost::asio::detail::timer_queue_set::get_all_timers(
        boost::asio::detail::timer_queue_set *const this,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops)
{
  unsigned __int64 v2; // rax
  boost::asio::detail::timer_queue_base *p; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  for ( p = this->first_; p; p = p->next_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8(p);
    v2 = (unsigned __int64)(p->_vptr_timer_queue_base + 6);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(p->_vptr_timer_queue_base + 6);
    (*(void (__fastcall **)(boost::asio::detail::timer_queue_base *, boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *))v2)(
      p,
      ops);
    if ( *(_BYTE *)(((unsigned __int64)&p->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&p->next_);
  }
};
