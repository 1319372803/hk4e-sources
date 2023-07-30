// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/scheduler_operation.hpp

// Line 37: range 000000000C6405A4-000000000C640601
void __cdecl boost::asio::detail::scheduler_operation::complete(
        boost::asio::detail::scheduler_operation *const this,
        void *owner,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->func_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->func_);
  this->func_(owner, this, ec, bytes_transferred);
};

// Line 43: range 000000000C640602-000000000C640666
void __cdecl boost::asio::detail::scheduler_operation::destroy(boost::asio::detail::scheduler_operation *const this)
{
  boost::asio::detail::scheduler_operation::func_type func; // rbx
  boost::system::error_code v2; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->func_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->func_);
  func = this->func_;
  boost::system::error_code::error_code(&v2);
  func(0LL, this, &v2, 0LL);
};

// Line 53: range 000000000C640668-000000000C640715
void __cdecl boost::asio::detail::scheduler_operation::scheduler_operation(
        boost::asio::detail::scheduler_operation *const this,
        boost::asio::detail::scheduler_operation::func_type func)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->next_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->func_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->func_ = func;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->task_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->task_result_);
  }
  this->task_result_ = 0;
};

// Line 61: range 000000000C640716-000000000C640720
void __cdecl boost::asio::detail::scheduler_operation::~scheduler_operation(
        boost::asio::detail::scheduler_operation *const this)
{
  ;
};
