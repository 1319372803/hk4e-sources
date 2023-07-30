// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/timer_queue.hpp

// Line 36: range 000000000C6A3ADE-000000000C6A3B3B
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::~timer_queue(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_timer_queue_base = v1;
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::~vector(&this->heap_);
  boost::asio::detail::timer_queue_base::~timer_queue_base(this);
};

// Line 36: range 000000000C6A3B3C-000000000C6A3B66
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::~timer_queue(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this)
{
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::~timer_queue(this);
  operator delete(this, 0x30uLL);
};

// Line 36: range 0000000019B74F3A-0000000019B74FFB
void __fastcall boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::~timer_queue(
        boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *const this)
{
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> > *p_heap; // rax
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer M_start; // rdi
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *v3; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  this->_vptr_timer_queue_base = (int (**)(...))(&`vtable for'boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>
                                               + 2);
  p_heap = &this->heap_;
  if ( *(_BYTE *)(((unsigned __int64)&this->heap_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    v3 = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)p_heap;
    __asan_report_load8(p_heap);
    boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::~timer_queue(v3);
    return;
  }
  M_start = this->heap_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
};

// Line 47: range 000000000C66D984-000000000C66D99E
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data::~per_timer_data(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *const this)
{
  boost::asio::detail::op_queue<boost::asio::detail::wait_op>::~op_queue(&this->op_queue_);
};

// Line 50: range 000000000C6CA518-000000000C6CA5C6
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data::per_timer_data(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *const this)
{
  unsigned __int64 v1; // rax

  boost::asio::detail::op_queue<boost::asio::detail::wait_op>::op_queue(&this->op_queue_);
  v1 = std::numeric_limits<unsigned long>::max();
  if ( *(_BYTE *)(((unsigned __int64)&this->heap_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->heap_index_ = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->next_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->prev_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->prev_ = 0LL;
};

// Line 71: range 000000000C65EAAC-000000000C65EBBE
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::timer_queue(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this)
{
  int (**v1)(...); // rdx

  boost::asio::detail::timer_queue_base::timer_queue_base(this);
  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_timer_queue_base = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->timers_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->timers_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->heap_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->heap_._M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->heap_._M_impl._M_end_of_storage + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->heap_, 24LL);
  }
  this->heap_._M_impl._M_start = 0LL;
  this->heap_._M_impl._M_finish = 0LL;
  this->heap_._M_impl._M_end_of_storage = 0LL;
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::vector(&this->heap_);
};

// Line 80: range 000000000C65EBC0-000000000C65EF3B
bool __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::enqueue_timer(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        const boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::time_type *time,
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *timer,
        boost::asio::detail::wait_op *op)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  std::size_t v8; // rax
  std::size_t v9; // rdx
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *timers; // rdx
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *v11; // rax
  bool result; // al
  char v15[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 8 entry:95";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::enqueue_timer;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&timer->prev_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&timer->prev_);
  if ( !timer->prev_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->timers_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->timers_);
    if ( timer != this->timers_ )
    {
      if ( boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::is_positive_infinity<boost::posix_time::ptime>(time) )
      {
        v7 = std::numeric_limits<unsigned long>::max();
        if ( *(_BYTE *)(((unsigned __int64)&timer->heap_index_ >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        timer->heap_index_ = v7;
      }
      else
      {
        v8 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::size(&this->heap_);
        if ( *(_BYTE *)(((unsigned __int64)&timer->heap_index_ >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        timer->heap_index_ = v8;
        if ( *(_BYTE *)(((unsigned __int64)time >> 3) + 0x7FFF8000) )
          __asan_report_load8(time);
        *(boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::time_type *)(v4 + 32) = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::time_type)time->time_.time_count_.value_;
        *(_QWORD *)(v4 + 40) = timer;
        std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::push_back(
          &this->heap_,
          (const std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::value_type *)(v4 + 32));
        v9 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::size(&this->heap_)
           - 1;
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::up_heap(this, v9);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->timers_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->timers_);
      timers = this->timers_;
      if ( *(_BYTE *)(((unsigned __int64)&timer->next_ >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      timer->next_ = timers;
      if ( *(_BYTE *)(((unsigned __int64)&timer->prev_ >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      timer->prev_ = 0LL;
      if ( this->timers_ )
      {
        v11 = this->timers_;
        if ( *(_BYTE *)(((unsigned __int64)&v11->prev_ >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        v11->prev_ = timer;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->timers_ >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->timers_ = timer;
    }
  }
  boost::asio::detail::op_queue<boost::asio::detail::wait_op>::push(&timer->op_queue_, op);
  if ( *(_BYTE *)(((unsigned __int64)&timer->heap_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&timer->heap_index_);
  result = !timer->heap_index_
        && op == boost::asio::detail::op_queue<boost::asio::detail::wait_op>::front(&timer->op_queue_);
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 92: range 0000000019B84E24-0000000019B855BD
void __fastcall boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::get_ready_timers(
        boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *const this,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops)
{
  std::chrono::_V2::steady_clock *v2; // rbp
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer v3; // r12
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  std::chrono::_V2::steady_clock *p_M_finish; // rdi
  boost::asio::detail::scheduler_operation *v8; // rdx
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *v9; // rdi
  __int64 v10; // rax
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer M_start; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *v15; // rcx
  unsigned __int64 p_timer; // rdi
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data *timer; // rcx
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *v18; // rdx
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data *v19; // rdx
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer v20; // rdi
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *v21; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *p_heap_index; // rdi
  std::chrono::duration<long int,std::ratio<1,1000000000> >::rep r; // rax
  unsigned __int64 v24; // rcx
  std::chrono::duration<long int,std::ratio<1,1000000000> >::rep v25; // r8
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data *v26; // r9
  unsigned __int64 v27; // rcx
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *v28; // rdx
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data *v29; // rdx
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *v30; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data *v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer v36; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *v37; // rcx
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *v38; // rax
  std::chrono::duration<long int,std::ratio<1,1000000000> >::rep v39; // rcx
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer v40; // rdi
  __int64 v41; // r8
  __int64 v42; // r9
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *v43; // rcx
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data *v44; // rcx
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *v45; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **p_next; // rdi
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data *v47; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data *v48; // rax
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer v49; // rax
  boost::asio::detail::scheduler_operation *back; // rax
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer M_finish; // rax
  std::_Vector_base<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> >::pointer v52; // rdx
  unsigned __int64 v53; // rax
  std::chrono::duration<long int,std::ratio<1,1000000000> >::rep v55; // [rsp+8h] [rbp-40h]

  p_M_finish = (std::chrono::_V2::steady_clock *)&this->heap_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
  }
  else
  {
    p_M_finish = (std::chrono::_V2::steady_clock *)&this->heap_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->heap_ >> 3) + 0x7FFF8000) )
    {
      if ( this->heap_._M_impl._M_start != this->heap_._M_impl._M_finish )
      {
        v55 = std::chrono::_V2::steady_clock::now(p_M_finish);
        goto LABEL_87;
      }
      return;
    }
  }
  __asan_report_load8(p_M_finish);
LABEL_7:
  __asan_report_load8(p_M_finish);
LABEL_8:
  __asan_report_load8(p_M_finish);
LABEL_9:
  __asan_report_load8(p_M_finish);
LABEL_10:
  __asan_report_load8(p_M_finish);
LABEL_11:
  __asan_report_load8(p_M_finish);
LABEL_12:
  __asan_report_load8(p_M_finish);
LABEL_13:
  __asan_report_store8();
LABEL_14:
  v9 = ops;
  if ( *(_BYTE *)(((unsigned __int64)ops >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    ops->front_ = v8;
LABEL_99:
    v9 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)&v2[8];
    if ( !*(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    {
      ops->back_ = *(boost::asio::detail::scheduler_operation **)v2[8].gap0;
      *(_QWORD *)v2->gap0 = 0LL;
      *(_QWORD *)v2[8].gap0 = 0LL;
      goto LABEL_101;
    }
  }
  __asan_report_load8(v9);
LABEL_18:
  v10 = __asan_report_load8(v9);
LABEL_19:
  M_start = this->heap_._M_impl._M_start;
  v12 = (unsigned __int64)&M_start[v5];
  if ( *(_WORD *)((v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load16(&M_start[v5]);
LABEL_29:
    p_timer = v12;
    __asan_report_store16(v12);
LABEL_30:
    __asan_report_load8(p_timer);
LABEL_31:
    __asan_report_store8();
    goto LABEL_32;
  }
  v13 = *(_QWORD *)v12;
  v14 = *(_QWORD *)(v12 + 8);
  *(__m128i *)v12 = _mm_loadu_si128((const __m128i *)&M_start[v10]);
  v12 = (unsigned __int64)&this->heap_._M_impl._M_start[v10];
  if ( *(_WORD *)((v12 >> 3) + 0x7FFF8000) )
    goto LABEL_29;
  *(_QWORD *)v12 = v13;
  *(_QWORD *)(v12 + 8) = v14;
  v15 = &this->heap_._M_impl._M_start[v5];
  p_timer = (unsigned __int64)&v15->timer_;
  v12 = (unsigned __int64)&v15->timer_ >> 3;
  if ( *(_BYTE *)(v12 + 0x7FFF8000) )
    goto LABEL_30;
  timer = v15->timer_;
  p_timer = (unsigned __int64)&timer->heap_index_;
  v12 = (unsigned __int64)&timer->heap_index_ >> 3;
  if ( *(_BYTE *)(v12 + 0x7FFF8000) )
    goto LABEL_31;
  timer->heap_index_ = v5;
  v18 = &this->heap_._M_impl._M_start[v10];
  p_timer = (unsigned __int64)&v18->timer_;
  if ( *(_BYTE *)(((unsigned __int64)&v18->timer_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_timer);
LABEL_33:
    __asan_report_store8();
    while ( 1 )
    {
      v21 = &v3[v4];
      v3 += v5;
      p_heap_index = v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        break;
      r = v21->time_.__d.__r;
      p_heap_index = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        goto LABEL_49;
      if ( v3->time_.__d.__r < r )
        goto LABEL_75;
      v12 = (unsigned __int64)this->heap_._M_impl._M_start;
      v24 = v12 + 16 * v5;
      p_heap_index = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *)v24;
      if ( *(_WORD *)((v24 >> 3) + 0x7FFF8000) )
        goto LABEL_50;
      v25 = *(_QWORD *)v24;
      v26 = *(boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **)(v24 + 8);
      *(__m128i *)v24 = _mm_loadu_si128((const __m128i *)(v12 + 16 * v4));
      v27 = (unsigned __int64)&this->heap_._M_impl._M_start[v4];
      p_heap_index = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *)v27;
      v12 = v27 >> 3;
      if ( *(_WORD *)((v27 >> 3) + 0x7FFF8000) )
        goto LABEL_51;
      *(_QWORD *)v27 = v25;
      *(_QWORD *)(v27 + 8) = v26;
      v28 = &this->heap_._M_impl._M_start[v5];
      p_heap_index = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *)&v28->timer_;
      if ( *(_BYTE *)(((unsigned __int64)&v28->timer_ >> 3) + 0x7FFF8000) )
        goto LABEL_52;
      v29 = v28->timer_;
      p_heap_index = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *)&v29->heap_index_;
      if ( *(_BYTE *)(((unsigned __int64)&v29->heap_index_ >> 3) + 0x7FFF8000) )
        goto LABEL_53;
      v29->heap_index_ = v5;
      v30 = &this->heap_._M_impl._M_start[v4];
      p_heap_index = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *)&v30->timer_;
      if ( *(_BYTE *)(((unsigned __int64)&v30->timer_ >> 3) + 0x7FFF8000) )
        goto LABEL_54;
      v31 = v30->timer_;
      p_heap_index = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry *)&v31->heap_index_;
      if ( *(_BYTE *)(((unsigned __int64)&v31->heap_index_ >> 3) + 0x7FFF8000) )
        goto LABEL_55;
      v31->heap_index_ = v4;
      v5 = v4;
      v4 = 2 * v4 + 1;
LABEL_44:
      v3 = this->heap_._M_impl._M_start;
      v32 = this->heap_._M_impl._M_finish - v3;
      if ( v32 <= v4 )
        goto LABEL_75;
      if ( v32 != v4 + 1 )
      {
        v12 = (unsigned __int64)&v3[v4 + 1];
        if ( !(unsigned __int8)std::chrono::operator<<std::chrono::_V2::steady_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>,std::chrono::duration<long,std::ratio<1l,1000000000l>>>(
                                 &v3[v4],
                                 v12) )
          ++v4;
      }
    }
    __asan_report_load8(v21);
LABEL_49:
    __asan_report_load8(p_heap_index);
LABEL_50:
    __asan_report_load16(p_heap_index);
LABEL_51:
    __asan_report_store16(p_heap_index);
LABEL_52:
    __asan_report_load8(p_heap_index);
LABEL_53:
    __asan_report_store8();
LABEL_54:
    __asan_report_load8(p_heap_index);
LABEL_55:
    __asan_report_store8();
LABEL_56:
    __asan_report_load8(p_heap_index);
LABEL_57:
    __asan_report_load8(p_heap_index);
LABEL_58:
    __asan_report_load16(v12);
LABEL_59:
    v33 = v12;
    __asan_report_store16(v12);
LABEL_60:
    __asan_report_load8(v33);
LABEL_61:
    __asan_report_store8();
LABEL_62:
    v34 = __asan_report_load8(v33);
    goto LABEL_63;
  }
  v19 = v18->timer_;
  if ( *(_BYTE *)(((unsigned __int64)&v19->heap_index_ >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v19->heap_index_ = v10;
  *(_QWORD *)v2[16].gap0 = -1LL;
  --this->heap_._M_impl._M_finish;
  if ( !v5
    || (v20 = this->heap_._M_impl._M_start,
        v12 = (unsigned __int64)&v20[(v5 - 1) >> 1],
        !(unsigned __int8)std::chrono::operator<<std::chrono::_V2::steady_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>,std::chrono::duration<long,std::ratio<1l,1000000000l>>>(
                            &v20[v5],
                            v12)) )
  {
    v4 = 2 * v5 + 1;
    goto LABEL_44;
  }
  while ( v5 )
  {
    v35 = (v5 - 1) >> 1;
    v36 = this->heap_._M_impl._M_start;
    v37 = &v36[v35];
    v38 = &v36[v5];
    p_heap_index = v37;
    v12 = (unsigned __int64)v37 >> 3;
    if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
      goto LABEL_56;
    v39 = v37->time_.__d.__r;
    p_heap_index = v38;
    v12 = (unsigned __int64)v38 >> 3;
    if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
      goto LABEL_57;
    if ( v38->time_.__d.__r >= v39 )
      goto LABEL_75;
    v40 = this->heap_._M_impl._M_start;
    v12 = (unsigned __int64)&v40[v5];
    if ( *(_WORD *)((v12 >> 3) + 0x7FFF8000) )
      goto LABEL_58;
    v41 = *(_QWORD *)v12;
    v42 = *(_QWORD *)(v12 + 8);
    *(__m128i *)v12 = _mm_loadu_si128((const __m128i *)&v40[v35]);
    v12 = (unsigned __int64)&this->heap_._M_impl._M_start[v35];
    if ( *(_WORD *)((v12 >> 3) + 0x7FFF8000) )
      goto LABEL_59;
    *(_QWORD *)v12 = v41;
    *(_QWORD *)(v12 + 8) = v42;
    v43 = &this->heap_._M_impl._M_start[v5];
    v33 = (unsigned __int64)&v43->timer_;
    if ( *(_BYTE *)(((unsigned __int64)&v43->timer_ >> 3) + 0x7FFF8000) )
      goto LABEL_60;
    v44 = v43->timer_;
    v33 = (unsigned __int64)&v44->heap_index_;
    if ( *(_BYTE *)(((unsigned __int64)&v44->heap_index_ >> 3) + 0x7FFF8000) )
      goto LABEL_61;
    v44->heap_index_ = v5;
    v45 = &this->heap_._M_impl._M_start[v35];
    v33 = (unsigned __int64)&v45->timer_;
    if ( *(_BYTE *)(((unsigned __int64)&v45->timer_ >> 3) + 0x7FFF8000) )
      goto LABEL_62;
    v34 = (__int64)v45->timer_;
    if ( *(_BYTE *)(((unsigned __int64)(v34 + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
      goto LABEL_75;
    }
LABEL_63:
    *(_QWORD *)(v34 + 16) = v35;
    v5 = v35;
  }
  while ( 1 )
  {
LABEL_75:
    if ( *(_BYTE *)(((unsigned __int64)&this->timers_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&this->timers_);
    }
    else if ( v2 != (std::chrono::_V2::steady_clock *)this->timers_ )
    {
      goto LABEL_77;
    }
    p_next = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **)&v2[24];
    if ( *(_BYTE *)(((unsigned __int64)&v2[24] >> 3) + 0x7FFF8000) )
      break;
    this->timers_ = *(boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **)v2[24].gap0;
LABEL_77:
    p_next = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **)&v2[32];
    if ( *(_BYTE *)(((unsigned __int64)&v2[32] >> 3) + 0x7FFF8000) )
      goto LABEL_110;
    v47 = *(boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **)v2[32].gap0;
    if ( v47 )
    {
      p_next = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **)&v2[24];
      if ( *(_BYTE *)(((unsigned __int64)&v2[24] >> 3) + 0x7FFF8000) )
        goto LABEL_111;
      p_next = &v47->next_;
      if ( *(_BYTE *)(((unsigned __int64)&v47->next_ >> 3) + 0x7FFF8000) )
        goto LABEL_112;
      v47->next_ = *(boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **)v2[24].gap0;
    }
    p_next = (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **)&v2[24];
    if ( *(_BYTE *)(((unsigned __int64)&v2[24] >> 3) + 0x7FFF8000) )
      goto LABEL_113;
    v48 = *(boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **)v2[24].gap0;
    if ( v48 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&v48->prev_ >> 3) + 0x7FFF8000) )
        goto LABEL_114;
      v48->prev_ = *(boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::per_timer_data **)v2[32].gap0;
    }
    *(_QWORD *)v2[24].gap0 = 0LL;
    *(_QWORD *)v2[32].gap0 = 0LL;
LABEL_87:
    p_M_finish = (std::chrono::_V2::steady_clock *)&this->heap_._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->heap_._M_impl._M_finish >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    p_M_finish = (std::chrono::_V2::steady_clock *)&this->heap_;
    if ( *(_BYTE *)(((unsigned __int64)&this->heap_ >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    v49 = this->heap_._M_impl._M_start;
    if ( v49 == this->heap_._M_impl._M_finish )
      return;
    p_M_finish = (std::chrono::_V2::steady_clock *)this->heap_._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
      goto LABEL_9;
    if ( v55 < v49->time_.__d.__r )
      return;
    p_M_finish = (std::chrono::_V2::steady_clock *)&v49->timer_;
    if ( *(_BYTE *)(((unsigned __int64)&v49->timer_ >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    v2 = (std::chrono::_V2::steady_clock *)v49->timer_;
    p_M_finish = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    v8 = *(boost::asio::detail::scheduler_operation **)v2->gap0;
    if ( *(_QWORD *)v2->gap0 )
    {
      p_M_finish = (std::chrono::_V2::steady_clock *)&ops->back_;
      if ( *(_BYTE *)(((unsigned __int64)&ops->back_ >> 3) + 0x7FFF8000) )
        goto LABEL_12;
      back = ops->back_;
      if ( back )
      {
        if ( !*(_BYTE *)(((unsigned __int64)back >> 3) + 0x7FFF8000) )
        {
          back->next_ = v8;
          goto LABEL_99;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
LABEL_101:
    v9 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)&v2[16];
    if ( *(_BYTE *)(((unsigned __int64)&v2[16] >> 3) + 0x7FFF8000) )
      goto LABEL_18;
    v5 = *(_QWORD *)v2[16].gap0;
    M_finish = this->heap_._M_impl._M_finish;
    v52 = this->heap_._M_impl._M_start;
    if ( M_finish != v52 )
    {
      v53 = M_finish - v52;
      if ( v5 < v53 )
      {
        v10 = v53 - 1;
        if ( v5 != v10 )
          goto LABEL_19;
        *(_QWORD *)v2[16].gap0 = -1LL;
        --this->heap_._M_impl._M_finish;
      }
    }
  }
  __asan_report_load8(p_next);
LABEL_110:
  __asan_report_load8(p_next);
LABEL_111:
  __asan_report_load8(p_next);
LABEL_112:
  __asan_report_store8();
LABEL_113:
  __asan_report_load8(p_next);
LABEL_114:
  __asan_report_store8();
};

// Line 116: range 000000000C65EF3C-000000000C65EF7C
bool __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::empty(
        const boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->timers_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->timers_);
  return this->timers_ == 0LL;
};

// Line 118: range 0000000019B74CE0-0000000019B74EAC
bool __fastcall boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::empty(
        const boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->timers_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->timers_);
    JUMPOUT(0x19B74D09LL);
  }
  return this->timers_ == 0LL;
};

// Line 122: range 000000000C65EF7E-000000000C65F007
__int64 __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::wait_duration_msec(
        const boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        __int64 max_duration)
{
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::const_reference v3; // rax
  boost::asio::time_traits<boost::posix_time::ptime>::time_type t1; // [rsp+20h] [rbp-10h] BYREF
  boost::asio::time_traits<boost::posix_time::ptime>::duration_type d; // [rsp+28h] [rbp-8h] BYREF

  if ( std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::empty(&this->heap_) )
    return max_duration;
  boost::asio::time_traits<boost::posix_time::ptime>::now();
  v3 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
         &this->heap_,
         0LL);
  boost::asio::time_traits<boost::posix_time::ptime>::subtract(&t1, &v3->time_);
  boost::asio::time_traits<boost::posix_time::ptime>::to_posix_duration(&d);
  return boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::to_msec<boost::posix_time::time_duration>(
           this,
           &d,
           max_duration);
};

// Line 122: range 0000000019CFEB64-0000000019CFEC0A
__int64 __fastcall boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::wait_duration_msec(
        const boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *const this,
        __int64 max_duration)
{
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> > *p_M_finish; // rdi
  boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> >::duration_type v4; // rax
  __int64 result; // rax
  boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> >::time_type t2; // [rsp+8h] [rbp-20h] BYREF

  p_M_finish = (std::vector<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> > *)&this->heap_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_9;
  }
  p_M_finish = &this->heap_;
  if ( *(_BYTE *)(((unsigned __int64)&this->heap_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(p_M_finish);
    return 0LL;
  }
  if ( this->heap_._M_impl._M_start == this->heap_._M_impl._M_finish )
    return max_duration;
  t2.__d.__r = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)p_M_finish);
  v4.__r = boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>::subtract(
             &this->heap_._M_impl._M_start->time_,
             &t2).__r;
  if ( v4.__r <= 0 )
    return 0LL;
  result = v4.__r / 1000000;
  if ( !result )
    return 1LL;
  if ( max_duration < result )
    return max_duration;
  return result;
};

// Line 134: range 000000000C65F008-000000000C65F091
__int64 __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::wait_duration_usec(
        const boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        __int64 max_duration)
{
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::const_reference v3; // rax
  boost::asio::time_traits<boost::posix_time::ptime>::time_type t1; // [rsp+20h] [rbp-10h] BYREF
  boost::asio::time_traits<boost::posix_time::ptime>::duration_type d; // [rsp+28h] [rbp-8h] BYREF

  if ( std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::empty(&this->heap_) )
    return max_duration;
  boost::asio::time_traits<boost::posix_time::ptime>::now();
  v3 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
         &this->heap_,
         0LL);
  boost::asio::time_traits<boost::posix_time::ptime>::subtract(&t1, &v3->time_);
  boost::asio::time_traits<boost::posix_time::ptime>::to_posix_duration(&d);
  return boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::to_usec<boost::posix_time::time_duration>(
           this,
           &d,
           max_duration);
};

// Line 134: range 0000000019CFEC0C-0000000019CFECB2
__int64 __fastcall boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>::wait_duration_usec(
        const boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *const this,
        __int64 max_duration)
{
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> > *p_M_finish; // rdi
  boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> >::duration_type v4; // rax
  __int64 result; // rax
  boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> >::time_type t2; // [rsp+8h] [rbp-20h] BYREF

  p_M_finish = (std::vector<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >::heap_entry> > *)&this->heap_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_9;
  }
  p_M_finish = &this->heap_;
  if ( *(_BYTE *)(((unsigned __int64)&this->heap_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(p_M_finish);
    return 0LL;
  }
  if ( this->heap_._M_impl._M_start == this->heap_._M_impl._M_finish )
    return max_duration;
  t2.__d.__r = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)p_M_finish);
  v4.__r = boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>::subtract(
             &this->heap_._M_impl._M_start->time_,
             &t2).__r;
  if ( v4.__r <= 0 )
    return 0LL;
  result = v4.__r / 1000;
  if ( !result )
    return 1LL;
  if ( max_duration < result )
    return max_duration;
  return result;
};

// Line 146: range 000000000C65F092-000000000C65F22C
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::get_ready_timers(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v5; // rax
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v7; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *timer; // [rsp+18h] [rbp-68h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 now:150";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::get_ready_timers;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( !std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::empty(&this->heap_) )
  {
    *(boost::asio::time_traits<boost::posix_time::ptime>::time_type *)(v2 + 32) = boost::asio::time_traits<boost::posix_time::ptime>::now();
    while ( !std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::empty(&this->heap_) )
    {
      v5 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
             &this->heap_,
             0LL);
      if ( boost::asio::time_traits<boost::posix_time::ptime>::less_than(
             (const boost::asio::time_traits<boost::posix_time::ptime>::time_type *)(v2 + 32),
             &v5->time_) )
      {
        break;
      }
      v7 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
             &this->heap_,
             0LL);
      if ( *(_BYTE *)(((unsigned __int64)&v7->timer_ >> 3) + 0x7FFF8000) )
        v7 = (std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference)__asan_report_load8(&v7->timer_);
      timer = v7->timer_;
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::wait_op>(
        ops,
        &timer->op_queue_);
      boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::remove_timer(this, timer);
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 161: range 000000000C65F22E-000000000C65F341
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::get_all_timers(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops)
{
  __int64 v2; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *timer; // [rsp+18h] [rbp-8h]

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->timers_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->timers_);
    if ( !this->timers_ )
      break;
    timer = this->timers_;
    v2 = (__int64)timer;
    if ( *(_BYTE *)(((unsigned __int64)&timer->next_ >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(&timer->next_);
    this->timers_ = *(boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data **)(v2 + 24);
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::wait_op>(
      ops,
      &timer->op_queue_);
    if ( *(_BYTE *)(((unsigned __int64)&timer->next_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    timer->next_ = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&timer->prev_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    timer->prev_ = 0LL;
  }
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::clear(&this->heap_);
};

// Line 176: range 000000000C65F342-000000000C65F456
std::size_t __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::cancel_timer(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *timer,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *ops,
        std::size_t max_cancelled)
{
  boost::asio::detail::wait_op *v4; // rax
  std::size_t num_cancelled; // [rsp+20h] [rbp-10h]
  boost::asio::detail::wait_op *op; // [rsp+28h] [rbp-8h]

  num_cancelled = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&timer->prev_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&timer->prev_);
  if ( timer->prev_ )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)&this->timers_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->timers_);
  if ( timer == this->timers_ )
  {
LABEL_17:
    while ( 1 )
    {
      v4 = num_cancelled == max_cancelled
         ? 0LL
         : boost::asio::detail::op_queue<boost::asio::detail::wait_op>::front(&timer->op_queue_);
      op = v4;
      if ( !v4 )
        break;
      boost::system::error_code::operator=<boost::asio::error::basic_errors>(&v4->ec_, operation_aborted);
      boost::asio::detail::op_queue<boost::asio::detail::wait_op>::pop(&timer->op_queue_);
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(ops, op);
      ++num_cancelled;
    }
    if ( boost::asio::detail::op_queue<boost::asio::detail::wait_op>::empty(&timer->op_queue_) )
      boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::remove_timer(this, timer);
  }
  return num_cancelled;
};

// Line 221: range 000000000C66BF54-000000000C66BFE7
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::up_heap(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        std::size_t index)
{
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v2; // rbx
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v3; // rax

  while ( index )
  {
    v2 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
           &this->heap_,
           (index - 1) >> 1);
    v3 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
           &this->heap_,
           index);
    if ( !boost::asio::time_traits<boost::posix_time::ptime>::less_than(&v3->time_, &v2->time_) )
      break;
    boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::swap_heap(
      this,
      index,
      (index - 1) >> 1);
    index = (index - 1) >> 1;
  }
};

// Line 234: range 000000000C67929A-000000000C6793CA
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::down_heap(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        std::size_t index)
{
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v2; // rbx
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v3; // rax
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::size_type v4; // rax
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v5; // rbx
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v6; // rax
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::size_type indexa; // [rsp+0h] [rbp-30h]
  std::size_t child; // [rsp+10h] [rbp-20h]
  std::size_t min_child; // [rsp+18h] [rbp-18h]

  indexa = index;
  for ( child = 2 * index + 1;
        child < std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::size(&this->heap_);
        child = 2 * min_child + 1 )
  {
    if ( child + 1 == std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::size(&this->heap_)
      || (v2 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
                 &this->heap_,
                 child + 1),
          v3 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
                 &this->heap_,
                 child),
          boost::asio::time_traits<boost::posix_time::ptime>::less_than(&v3->time_, &v2->time_)) )
    {
      v4 = child;
    }
    else
    {
      v4 = child + 1;
    }
    min_child = v4;
    v5 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
           &this->heap_,
           v4);
    v6 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
           &this->heap_,
           indexa);
    if ( boost::asio::time_traits<boost::posix_time::ptime>::less_than(&v6->time_, &v5->time_) )
      break;
    boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::swap_heap(
      this,
      indexa,
      min_child);
    indexa = min_child;
  }
};

// Line 252: range 000000000C678D56-000000000C679005
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::swap_heap(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        std::size_t index1,
        std::size_t index2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v8; // r13
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v9; // rax
  _QWORD *p_value; // rcx
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *timer; // rdx
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v15; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *v16; // rax
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v17; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *v18; // rax
  char v20[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 7 tmp:254";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::swap_heap;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = (unsigned __int64)std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
                           &this->heap_,
                           index1);
  if ( *(_WORD *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load16(v6);
  v7 = *(_QWORD *)(v6 + 8);
  *(_QWORD *)(v3 + 32) = *(_QWORD *)v6;
  *(_QWORD *)(v3 + 40) = v7;
  v8 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
         &this->heap_,
         index2);
  v9 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
         &this->heap_,
         index1);
  p_value = &v9->time_.time_.time_count_.value_;
  if ( *(_WORD *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v9);
  if ( *(_WORD *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load16(v8);
  timer = v8->timer_;
  *p_value = v8->time_.time_.time_count_.value_;
  p_value[1] = timer;
  v12 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
          &this->heap_,
          index2);
  v13 = &v12->time_.time_.time_count_.value_;
  if ( *(_WORD *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v12);
  v14 = *(_QWORD *)(v3 + 40);
  *v13 = *(_QWORD *)(v3 + 32);
  v13[1] = v14;
  v15 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
          &this->heap_,
          index1);
  if ( *(_BYTE *)(((unsigned __int64)&v15->timer_ >> 3) + 0x7FFF8000) )
    v15 = (std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference)__asan_report_load8(&v15->timer_);
  v16 = v15->timer_;
  if ( *(_BYTE *)(((unsigned __int64)&v16->heap_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v16->heap_index_ = index1;
  v17 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
          &this->heap_,
          index2);
  if ( *(_BYTE *)(((unsigned __int64)&v17->timer_ >> 3) + 0x7FFF8000) )
    v17 = (std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference)__asan_report_load8(&v17->timer_);
  v18 = v17->timer_;
  if ( *(_BYTE *)(((unsigned __int64)&v18->heap_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v18->heap_index_ = index2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 262: range 000000000C66C4F2-000000000C66C8B5
void __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::remove_timer(
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *timer)
{
  unsigned __int64 v3; // rax
  std::size_t v4; // rdx
  unsigned __int64 v5; // rax
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v6; // rbx
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::reference v7; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *prev; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *next; // rcx
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *v11; // rax
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *v12; // rcx
  std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry> >::size_type index; // [rsp+18h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&timer->heap_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&timer->heap_index_);
  index = timer->heap_index_;
  if ( !std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::empty(&this->heap_)
    && index < std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::size(&this->heap_) )
  {
    if ( index == std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::size(&this->heap_)
                - 1 )
    {
      v3 = std::numeric_limits<unsigned long>::max();
      if ( *(_BYTE *)(((unsigned __int64)&timer->heap_index_ >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      timer->heap_index_ = v3;
      std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::pop_back(&this->heap_);
    }
    else
    {
      v4 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::size(&this->heap_)
         - 1;
      boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::swap_heap(this, index, v4);
      v5 = std::numeric_limits<unsigned long>::max();
      if ( *(_BYTE *)(((unsigned __int64)&timer->heap_index_ >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      timer->heap_index_ = v5;
      std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::pop_back(&this->heap_);
      if ( index
        && (v6 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
                   &this->heap_,
                   (index - 1) >> 1),
            v7 = std::vector<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry,std::allocator<boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::heap_entry>>::operator[](
                   &this->heap_,
                   index),
            boost::asio::time_traits<boost::posix_time::ptime>::less_than(&v7->time_, &v6->time_)) )
      {
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::up_heap(this, index);
      }
      else
      {
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::down_heap(this, index);
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->timers_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->timers_);
  if ( timer == this->timers_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&timer->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&timer->next_);
    this->timers_ = timer->next_;
  }
  if ( *(_BYTE *)(((unsigned __int64)&timer->prev_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&timer->prev_);
  if ( timer->prev_ )
  {
    prev = timer->prev_;
    if ( *(_BYTE *)(((unsigned __int64)&timer->next_ >> 3) + 0x7FFF8000) )
      prev = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)__asan_report_load8(&timer->next_);
    next = timer->next_;
    if ( *(_BYTE *)(((unsigned __int64)&prev->next_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    prev->next_ = next;
  }
  if ( *(_BYTE *)(((unsigned __int64)&timer->next_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&timer->next_);
  if ( timer->next_ )
  {
    v11 = timer->next_;
    if ( *(_BYTE *)(((unsigned __int64)&timer->prev_ >> 3) + 0x7FFF8000) )
      v11 = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)__asan_report_load8(&timer->prev_);
    v12 = timer->prev_;
    if ( *(_BYTE *)(((unsigned __int64)&v11->prev_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    v11->prev_ = v12;
  }
  if ( *(_BYTE *)(((unsigned __int64)&timer->next_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  timer->next_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&timer->prev_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  timer->prev_ = 0LL;
};

// Line 299: range 000000000C66BDED-000000000C66BDFB
bool __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::is_positive_infinity<boost::posix_time::ptime>(
        const boost::posix_time::ptime *a1)
{
  return 0;
};

// Line 314: range 000000000C66C256-000000000C66C2BA
__int64 __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::to_msec<boost::posix_time::time_duration>(
        const boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        const boost::posix_time::time_duration *d,
        __int64 max_duration)
{
  int64_t msec; // [rsp+28h] [rbp-8h]

  if ( boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::ticks(d) <= 0 )
    return 0LL;
  msec = boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::total_milliseconds(d);
  if ( !msec )
    return 1LL;
  if ( msec <= max_duration )
    return msec;
  return max_duration;
};

// Line 328: range 000000000C66C2BC-000000000C66C320
__int64 __cdecl boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::to_usec<boost::posix_time::time_duration>(
        const boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *const this,
        const boost::posix_time::time_duration *d,
        __int64 max_duration)
{
  int64_t usec; // [rsp+28h] [rbp-8h]

  if ( boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::ticks(d) <= 0 )
    return 0LL;
  usec = boost::date_time::time_duration<boost::posix_time::time_duration,boost::date_time::time_resolution_traits<boost::date_time::time_resolution_traits_adapted64_impl,(boost::date_time::time_resolutions)5,1000000l,(unsigned short)6,long>>::total_microseconds(d);
  if ( !usec )
    return 1LL;
  if ( usec <= max_duration )
    return usec;
  return max_duration;
};
