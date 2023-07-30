// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/epoll_reactor.hpp

// Line 27: range 000000000C6E2B68-000000000C6E2B8D
void __cdecl boost::asio::detail::epoll_reactor::add_timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *queue)
{
  boost::asio::detail::epoll_reactor::do_add_timer_queue(this, queue);
};

// Line 33: range 000000000C708062-000000000C708087
void __cdecl boost::asio::detail::epoll_reactor::remove_timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *queue)
{
  boost::asio::detail::epoll_reactor::do_remove_timer_queue(this, queue);
};

// Line 33: range 0000000019CFE61A-0000000019CFE7E4
void __fastcall boost::asio::detail::epoll_reactor::remove_timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *queue)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r13
  boost::asio::detail::timer_queue_set *p_timer_queues; // rdi
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *first; // rax
  __int64 v7; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *next; // rdx
  boost::asio::detail::timer_queue_base **p_next; // rdi
  char v10[120]; // [rsp+10h] [rbp-78h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v3 = v7;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 4 lock";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::epoll_reactor::remove_timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->mutex_.enabled_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&this->mutex_.enabled_);
  }
  else if ( !this->mutex_.enabled_ )
  {
    *(_BYTE *)(v3 + 40) = 0;
    goto LABEL_5;
  }
  pthread_mutex_lock(&this->mutex_.mutex_.mutex_);
  *(_BYTE *)(v3 + 40) = 1;
LABEL_5:
  p_timer_queues = &this->timer_queues_;
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_queues_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_timer_queues);
  }
  else
  {
    first = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)this->timer_queues_.first_;
    if ( !first )
      goto LABEL_22;
    if ( queue != first )
      goto LABEL_17;
    p_timer_queues = (boost::asio::detail::timer_queue_set *)&queue->next_;
    if ( !*(_BYTE *)(((unsigned __int64)&queue->next_ >> 3) + 0x7FFF8000) )
    {
      this->timer_queues_.first_ = queue->next_;
      queue->next_ = 0LL;
LABEL_22:
      if ( !*(_BYTE *)(v3 + 40) )
        goto LABEL_23;
      goto LABEL_27;
    }
  }
  __asan_report_load8(p_timer_queues);
  do
  {
    first = next;
LABEL_17:
    p_next = &first->next_;
    if ( *(_BYTE *)(((unsigned __int64)&first->next_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_next);
      goto LABEL_26;
    }
    next = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)first->next_;
    if ( !next )
      goto LABEL_22;
  }
  while ( queue != next );
  p_next = &queue->next_;
  if ( !*(_BYTE *)(((unsigned __int64)&queue->next_ >> 3) + 0x7FFF8000) )
  {
    first->next_ = queue->next_;
    queue->next_ = 0LL;
    goto LABEL_22;
  }
LABEL_26:
  __asan_report_load8(p_next);
LABEL_27:
  pthread_mutex_unlock(&this->mutex_.mutex_.mutex_);
LABEL_23:
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 39: range 000000000C6DCD9E-000000000C6DCFD9
void __cdecl boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *queue,
        const boost::asio::time_traits<boost::posix_time::ptime>::time_type *time,
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *timer,
        boost::asio::detail::wait_op *op)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  bool earliest; // [rsp+3Fh] [rbp-71h]
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 7 lock:43";
  *(_QWORD *)(v5 + 16) = boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v5 + 32),
    &this->mutex_);
  if ( *(char *)(((unsigned __int64)&this->shutdown_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->shutdown_);
  if ( this->shutdown_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->scheduler_);
    boost::asio::detail::scheduler::post_immediate_completion(this->scheduler_, op, 0);
  }
  else
  {
    earliest = boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::enqueue_timer(
                 queue,
                 time,
                 timer,
                 op);
    if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->scheduler_);
    boost::asio::detail::scheduler::work_started(this->scheduler_);
    if ( earliest )
      boost::asio::detail::epoll_reactor::update_timeout(this);
  }
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v5 + 32));
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 39: range 0000000019B934D4-0000000019B93B7F
void __fastcall boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *queue,
        const boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> >::time_type *time,
        boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data *timer,
        boost::asio::detail::wait_op *op)
{
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *v6; // r12
  unsigned __int64 v9; // r13
  _DWORD *v10; // r15
  const bool *p_enabled; // rdi
  void *p_scheduler; // rdi
  void *p_back; // rdi
  boost::asio::detail::wait_op *back; // rdi
  void *p_heap_index; // rdi
  __int64 v16; // rax
  void *p_timers; // rdi
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *p_heap; // rdi
  __int64 p_M_finish; // rax
  __int64 p_M_end_of_storage; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer M_start; // rsi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data *timers; // rax
  char *v35; // [rsp+10h] [rbp-C8h]
  bool earliest; // [rsp+27h] [rbp-B1h]
  boost::asio::detail::epoll_reactor::mutex *p_mutex; // [rsp+28h] [rbp-B0h]
  char *v38; // [rsp+30h] [rbp-A8h]
  char v39[152]; // [rsp+40h] [rbp-98h] BYREF

  v6 = queue;
  v9 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_1(96LL);
    if ( v16 )
      v9 = v16;
  }
  v35 = (char *)(v9 + 96);
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "2 32 16 7 lock:43 64 16 5 entry";
  *(_QWORD *)(v9 + 16) = boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>;
  v10 = (_DWORD *)(v9 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -219021312;
  v10[536862722] = -202178560;
  p_mutex = &this->mutex_;
  p_enabled = &this->mutex_.enabled_;
  if ( *(char *)(((unsigned __int64)&this->mutex_.enabled_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(p_enabled);
  }
  else if ( !this->mutex_.enabled_ )
  {
    *(_BYTE *)(v9 + 40) = 0;
    goto LABEL_5;
  }
  pthread_mutex_lock(&this->mutex_.mutex_.mutex_);
  *(_BYTE *)(v9 + 40) = 1;
LABEL_5:
  if ( *(char *)(((unsigned __int64)&this->shutdown_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&this->shutdown_);
    goto LABEL_30;
  }
  earliest = this->shutdown_;
  if ( earliest )
  {
LABEL_30:
    p_scheduler = &this->scheduler_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    {
      boost::asio::detail::scheduler::post_immediate_completion(this->scheduler_, op, 0);
      if ( *(_BYTE *)(v9 + 40) )
        goto LABEL_22;
      goto LABEL_23;
    }
    __asan_report_load8(p_scheduler);
    goto LABEL_34;
  }
  p_scheduler = &timer->prev_;
  if ( *(_BYTE *)(((unsigned __int64)&timer->prev_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_scheduler);
    goto LABEL_35;
  }
  if ( timer->prev_ )
    goto LABEL_9;
LABEL_35:
  p_timers = &queue->timers_;
  if ( *(_BYTE *)(((unsigned __int64)&queue->timers_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_timers);
LABEL_48:
    __asan_report_load8(p_timers);
    goto LABEL_49;
  }
  if ( timer == queue->timers_ )
    goto LABEL_9;
  p_timers = &queue->heap_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&queue->heap_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    goto LABEL_48;
  p_timers = &queue->heap_;
  if ( *(_BYTE *)(((unsigned __int64)&queue->heap_ >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(p_timers);
    goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&timer->heap_index_ >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_store8();
    goto LABEL_51;
  }
  timer->heap_index_ = queue->heap_._M_impl._M_finish - queue->heap_._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)time >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    p_M_finish = __asan_report_load8(time);
    goto LABEL_52;
  }
  queue = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)(v9 + 96);
  *(boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> >::time_type *)(v9 + 64) = (boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> >::time_type)time->__d.__r;
  *(_QWORD *)(v9 + 72) = timer;
  p_heap = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)&v6->heap_;
  p_M_finish = (__int64)&v6->heap_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v6->heap_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    p_M_end_of_storage = __asan_report_load8(p_M_finish);
    goto LABEL_53;
  }
  queue = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)v6->heap_._M_impl._M_finish;
  p_M_end_of_storage = (__int64)&v6->heap_._M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&v6->heap_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(p_M_end_of_storage);
    goto LABEL_54;
  }
  if ( queue == (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)v6->heap_._M_impl._M_end_of_storage )
  {
LABEL_55:
    std::vector<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::heap_entry>>::_M_realloc_insert<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::heap_entry const&>(
      (std::vector<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> > *const)p_heap,
      (std::vector<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::iterator)queue,
      (const boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *)(v9 + 64),
      (const boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *)timer);
    goto LABEL_46;
  }
  if ( *(_WORD *)(((unsigned __int64)queue >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    p_heap = queue;
    __asan_report_store16(queue);
    goto LABEL_55;
  }
  queue->boost::asio::detail::timer_queue_base = (boost::asio::detail::timer_queue_base)_mm_load_si128((const __m128i *)(v9 + 64));
  ++v6->heap_._M_impl._M_finish;
LABEL_46:
  v21 = v6->heap_._M_impl._M_finish - v6->heap_._M_impl._M_start - 1;
  v38 = (char *)v9;
  while ( v21 )
  {
    v23 = (v21 - 1) >> 1;
    if ( !(unsigned __int8)std::chrono::operator<<std::chrono::_V2::steady_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>,std::chrono::duration<long,std::ratio<1l,1000000000l>>>(
                             &v6->heap_._M_impl._M_start[v21],
                             &v6->heap_._M_impl._M_start[v23]) )
      break;
    M_start = v6->heap_._M_impl._M_start;
    v25 = (unsigned __int64)&M_start[v21];
    v26 = v25;
    if ( *(_WORD *)((v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load16(v25);
LABEL_57:
      __asan_report_store16(v26);
LABEL_58:
      __asan_report_load8(v26);
LABEL_59:
      __asan_report_store8();
LABEL_60:
      v22 = __asan_report_load8(v26);
      goto LABEL_61;
    }
    v27 = *(_QWORD *)v25;
    v28 = *(_QWORD *)(v25 + 8);
    *(__m128i *)v25 = _mm_loadu_si128((const __m128i *)&M_start[v23]);
    v29 = (unsigned __int64)&v6->heap_._M_impl._M_start[v23];
    v26 = v29;
    if ( *(_WORD *)((v29 >> 3) + 0x7FFF8000) )
      goto LABEL_57;
    *(_QWORD *)v29 = v27;
    *(_QWORD *)(v29 + 8) = v28;
    v30 = (__int64)&v6->heap_._M_impl._M_start[v21];
    v26 = v30 + 8;
    if ( *(_BYTE *)(((unsigned __int64)(v30 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_58;
    v31 = *(_QWORD *)(v30 + 8);
    v26 = v31 + 16;
    if ( *(_BYTE *)(((unsigned __int64)(v31 + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_59;
    *(_QWORD *)(v31 + 16) = v21;
    v32 = (__int64)&v6->heap_._M_impl._M_start[v23];
    v26 = v32 + 8;
    if ( *(_BYTE *)(((unsigned __int64)(v32 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_60;
    v22 = *(_QWORD *)(v32 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v22 + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
      break;
    }
LABEL_61:
    *(_QWORD *)(v22 + 16) = v23;
    v21 = (v21 - 1) >> 1;
  }
  v9 = (unsigned __int64)v38;
  if ( *(_BYTE *)(((unsigned __int64)&timer->next_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_77:
    __asan_report_store8();
LABEL_78:
    p_back = op;
    __asan_report_store8();
    goto LABEL_79;
  }
  timer->next_ = v6->timers_;
  timer->prev_ = 0LL;
  timers = v6->timers_;
  if ( !timers )
    goto LABEL_75;
  if ( *(_BYTE *)(((unsigned __int64)&timers->prev_ >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  timers->prev_ = timer;
LABEL_75:
  v6->timers_ = timer;
LABEL_9:
  if ( *(_BYTE *)(((unsigned __int64)op >> 3) + 0x7FFF8000) )
    goto LABEL_78;
  op->next_ = 0LL;
  p_back = &timer->op_queue_.back_;
  if ( *(_BYTE *)(((unsigned __int64)&timer->op_queue_.back_ >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_load8(p_back);
    goto LABEL_80;
  }
  back = timer->op_queue_.back_;
  if ( back )
  {
    if ( !*(_BYTE *)(((unsigned __int64)back >> 3) + 0x7FFF8000) )
    {
      back->next_ = op;
      timer->op_queue_.back_ = op;
      goto LABEL_14;
    }
LABEL_80:
    __asan_report_store8();
  }
  timer->op_queue_.back_ = op;
  if ( *(_BYTE *)(((unsigned __int64)timer >> 3) + 0x7FFF8000) )
  {
    p_heap_index = timer;
    __asan_report_store8();
LABEL_84:
    __asan_report_load8(p_heap_index);
    goto LABEL_85;
  }
  timer->op_queue_.front_ = op;
LABEL_14:
  p_heap_index = &timer->heap_index_;
  if ( *(_BYTE *)(((unsigned __int64)&timer->heap_index_ >> 3) + 0x7FFF8000) )
    goto LABEL_84;
  if ( timer->heap_index_ )
    goto LABEL_18;
  if ( !*(_BYTE *)(((unsigned __int64)timer >> 3) + 0x7FFF8000) )
  {
    if ( op != timer->op_queue_.front_ )
      goto LABEL_18;
    goto LABEL_86;
  }
LABEL_85:
  __asan_report_load8(timer);
LABEL_86:
  earliest = 1;
LABEL_18:
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->scheduler_);
  }
  else if ( !*(_BYTE *)(((unsigned __int64)&this->scheduler_->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
    _InterlockedAdd64(&this->scheduler_->outstanding_work_._M_i, 1uLL);
    if ( !earliest )
      goto LABEL_21;
    goto LABEL_89;
  }
  __asan_report_store8();
LABEL_89:
  boost::asio::detail::epoll_reactor::update_timeout(this);
LABEL_21:
  if ( *(v35 - 56) )
LABEL_22:
    pthread_mutex_unlock(&p_mutex->mutex_.mutex_);
LABEL_23:
  if ( v39 == (char *)v9 )
  {
    *((_QWORD *)v10 + 268431360) = 0LL;
    v10[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *((_QWORD *)v10 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v10[536862722] = -168430091;
  }
};

// Line 58: range 000000000C68B90C-000000000C68BAF2
std::size_t __cdecl boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *queue,
        boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *timer,
        std::size_t max_cancelled)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::size_t result; // rax
  std::size_t n; // [rsp+28h] [rbp-98h]
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 7 lock:62 64 16 6 ops:63";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::scoped_lock(
    (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v4 + 32),
    &this->mutex_);
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v4 + 64));
  n = boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime>>::cancel_timer(
        queue,
        timer,
        (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v4 + 64),
        max_cancelled);
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::unlock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v4 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  boost::asio::detail::scheduler::post_deferred_completions(
    this->scheduler_,
    (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v4 + 64));
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v4 + 64));
  boost::asio::detail::conditionally_enabled_mutex::scoped_lock::~scoped_lock((boost::asio::detail::conditionally_enabled_mutex::scoped_lock *const)(v4 + 32));
  result = n;
  if ( v11 == (char *)v4 )
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
