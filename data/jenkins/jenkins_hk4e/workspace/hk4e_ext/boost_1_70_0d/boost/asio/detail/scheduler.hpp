// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/scheduler.hpp

// Line 86: range 000000000C642972-000000000C642992
void __cdecl boost::asio::detail::scheduler::work_started(boost::asio::detail::scheduler *const this)
{
  std::__atomic_base<long>::operator++(&this->outstanding_work_);
};

// Line 96: range 000000000C642994-000000000C6429CA
void __cdecl boost::asio::detail::scheduler::work_finished(boost::asio::detail::scheduler *const this)
{
  if ( !std::__atomic_base<long>::operator--(&this->outstanding_work_) )
    boost::asio::detail::scheduler::stop(this);
};

// Line 103: range 000000000C6429CC-000000000C6429EB
bool __cdecl boost::asio::detail::scheduler::can_dispatch(boost::asio::detail::scheduler *const this)
{
  return boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::contains((boost::asio::detail::thread_context *)this) != 0LL;
};

// Line 130: range 000000000C6429EC-000000000C642A40
int __cdecl boost::asio::detail::scheduler::concurrency_hint(const boost::asio::detail::scheduler *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->concurrency_hint_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->concurrency_hint_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->concurrency_hint_);
  }
  return this->concurrency_hint_;
};

// Line 189: range 000000000C648892-000000000C6488AC
void __cdecl boost::asio::detail::scheduler::task_operation::~task_operation(
        boost::asio::detail::scheduler::task_operation *const this)
{
  boost::asio::detail::scheduler_operation::~scheduler_operation(this);
};

// Line 191: range 000000000C642A42-000000000C642A61
void __cdecl boost::asio::detail::scheduler::task_operation::task_operation(
        boost::asio::detail::scheduler::task_operation *const this)
{
  boost::asio::detail::scheduler_operation::scheduler_operation(this, 0LL);
};
