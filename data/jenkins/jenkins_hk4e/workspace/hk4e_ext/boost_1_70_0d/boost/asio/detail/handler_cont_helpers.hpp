// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/handler_cont_helpers.hpp

// Line 30: range 000000000C6D5274-000000000C6D5295
bool __cdecl boost_asio_handler_cont_helpers::is_continuation<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>(
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *context)
{
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *v1; // rax

  v1 = std::addressof<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>(context);
  return boost::asio::detail::asio_handler_is_continuation<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>(v1);
};

// Line 30: range 000000000C708EC4-000000000C708EEA
bool __cdecl boost_asio_handler_cont_helpers::is_continuation<boost::asio::executor::function>(
        boost::asio::executor::function *context)
{
  boost::asio::executor::function *v1; // rax

  v1 = std::addressof<boost::asio::executor::function>(context);
  return boost::asio::asio_handler_is_continuation(v1);
};
