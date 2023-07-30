// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/system_context.ipp

// Line 47: range 000000000BEF43E4-000000000BEF4488
void __cdecl boost::asio::system_context::~system_context(boost::asio::system_context *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  boost::asio::detail::scheduler::work_finished(this->scheduler_);
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduler_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scheduler_);
  boost::asio::detail::scheduler::stop(this->scheduler_);
  boost::asio::detail::thread_group::join(&this->threads_);
  boost::asio::detail::thread_group::~thread_group(&this->threads_);
  boost::asio::execution_context::~execution_context(this);
};
