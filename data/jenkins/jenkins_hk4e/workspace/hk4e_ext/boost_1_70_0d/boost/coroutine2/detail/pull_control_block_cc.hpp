// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/coroutine2/detail/pull_control_block_cc.hpp

// Line 97: range 000000000BEFBE26-000000000BEFBE50
void __cdecl boost::coroutines2::detail::pull_coroutine<void>::control_block::~control_block(
        boost::coroutines2::detail::pull_coroutine<void>::control_block *const this)
{
  std::__exception_ptr::exception_ptr::~exception_ptr(&this->except);
  boost::context::fiber::~fiber(&this->c);
};
