// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/null_event.hpp

// Line 32: range 000000000C6420A2-000000000C6420BC
void __cdecl boost::asio::detail::null_event::null_event(boost::asio::detail::null_event *const this)
{
  boost::asio::detail::noncopyable::noncopyable(this);
};

// Line 37: range 000000000C6420BE-000000000C6420D8
void __cdecl boost::asio::detail::null_event::~null_event(boost::asio::detail::null_event *const this)
{
  boost::asio::detail::noncopyable::~noncopyable(this);
};

// Line 74: range 000000000C65C5E0-000000000C65C5F7
void __cdecl boost::asio::detail::null_event::wait<boost::asio::detail::conditionally_enabled_mutex::scoped_lock>(
        boost::asio::detail::null_event *const this,
        boost::asio::detail::conditionally_enabled_mutex::scoped_lock *a2)
{
  boost::asio::detail::null_event::do_wait();
};
