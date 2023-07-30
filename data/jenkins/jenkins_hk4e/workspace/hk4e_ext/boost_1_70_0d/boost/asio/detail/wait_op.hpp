// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/wait_op.hpp

// Line 27: range 000000000C6DCC30-000000000C6DCC4A
void __cdecl boost::asio::detail::wait_op::~wait_op(boost::asio::detail::wait_op *const this)
{
  boost::asio::detail::scheduler_operation::~scheduler_operation(this);
};

// Line 35: range 000000000C643AB8-000000000C643AED
void __cdecl boost::asio::detail::wait_op::wait_op(
        boost::asio::detail::wait_op *const this,
        boost::asio::detail::scheduler_operation::func_type func)
{
  boost::asio::detail::scheduler_operation::scheduler_operation(this, func);
  boost::system::error_code::error_code(&this->ec_);
};
