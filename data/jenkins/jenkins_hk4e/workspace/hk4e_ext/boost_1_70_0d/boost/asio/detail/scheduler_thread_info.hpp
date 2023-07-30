// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/scheduler_thread_info.hpp

// Line 30: range 000000000C6494A8-000000000C6494D2
void __cdecl boost::asio::detail::scheduler_thread_info::scheduler_thread_info(
        boost::asio::detail::scheduler_thread_info *const this)
{
  boost::asio::detail::thread_info_base::thread_info_base(this);
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue(&this->private_op_queue);
};

// Line 30: range 000000000C6494D4-000000000C6494FE
void __cdecl boost::asio::detail::scheduler_thread_info::~scheduler_thread_info(
        boost::asio::detail::scheduler_thread_info *const this)
{
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue(&this->private_op_queue);
  boost::asio::detail::thread_info_base::~thread_info_base(this);
};
