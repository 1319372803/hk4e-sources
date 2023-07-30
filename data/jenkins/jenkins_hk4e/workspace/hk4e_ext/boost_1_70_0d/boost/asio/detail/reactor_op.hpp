// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/reactor_op.hpp

// Line 27: range 000000000C64BA0A-000000000C64BA24
void __cdecl boost::asio::detail::reactor_op::~reactor_op(boost::asio::detail::reactor_op *const this)
{
  boost::asio::detail::scheduler_operation::~scheduler_operation(this);
};

// Line 42: range 000000000C642A62-000000000C642AA5
boost::asio::detail::reactor_op::status __cdecl boost::asio::detail::reactor_op::perform(
        boost::asio::detail::reactor_op *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->perform_func_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->perform_func_);
  return this->perform_func_(this);
};

// Line 50: range 000000000C642AA6-000000000C642B41
void __cdecl boost::asio::detail::reactor_op::reactor_op(
        boost::asio::detail::reactor_op *const this,
        boost::asio::detail::reactor_op::perform_func_type perform_func,
        boost::asio::detail::scheduler_operation::func_type complete_func)
{
  boost::asio::detail::scheduler_operation::scheduler_operation(this, complete_func);
  boost::system::error_code::error_code(&this->ec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->bytes_transferred_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bytes_transferred_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->perform_func_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->perform_func_ = perform_func;
};
