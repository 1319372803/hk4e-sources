// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/epoll_reactor.hpp

// Line 57: range 000000000C676EA8-000000000C676F0C
void __cdecl boost::asio::detail::epoll_reactor::descriptor_state::~descriptor_state(
        boost::asio::detail::epoll_reactor::descriptor_state *const this)
{
  bool *i; // rbx

  if ( this != (boost::asio::detail::epoll_reactor::descriptor_state *const)-112LL )
  {
    for ( i = this->try_speculative_;
          i != (bool *)this->op_queue_;
          boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::~op_queue((boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *const)i) )
    {
      i -= 16;
    }
  }
  boost::asio::detail::conditionally_enabled_mutex::~conditionally_enabled_mutex(&this->mutex_);
  boost::asio::detail::scheduler_operation::~scheduler_operation(this);
};

// Line 74: range 000000000C643AEE-000000000C643B3B
void __cdecl boost::asio::detail::epoll_reactor::descriptor_state::set_ready_events(
        boost::asio::detail::epoll_reactor::descriptor_state *const this,
        uint32_t events)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->task_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->task_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->task_result_);
  }
  this->task_result_ = events;
};

// Line 75: range 000000000C643B3C-000000000C643B92
void __cdecl boost::asio::detail::epoll_reactor::descriptor_state::add_ready_events(
        boost::asio::detail::epoll_reactor::descriptor_state *const this,
        uint32_t events)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->task_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->task_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->task_result_);
  }
  this->task_result_ |= events;
};

// Line 118: range 000000000C643B94-000000000C643BEB
void __cdecl boost::asio::detail::epoll_reactor::post_immediate_completion(
        boost::asio::detail::epoll_reactor *const this,
        boost::asio::detail::reactor_op *op,
        bool is_continuation)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  boost::asio::detail::scheduler::post_immediate_completion(this->scheduler_, op, is_continuation);
};
