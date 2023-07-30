// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/coroutine2/detail/push_control_block_cc.hpp

// Line 75: range 000000000BEFC11E-000000000BEFC148
void __cdecl boost::coroutines2::detail::push_coroutine<void>::control_block::~control_block(
        boost::coroutines2::detail::push_coroutine<void>::control_block *const this)
{
  std::__exception_ptr::exception_ptr::~exception_ptr(&this->except);
  boost::context::fiber::~fiber(&this->c);
};
