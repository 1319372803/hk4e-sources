// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/handler_alloc_hook.ipp

// Line 29: range 000000000BEEA2BF-000000000BEEA333
void *boost::asio::asio_handler_allocate(std::size_t size, ...)
{
  boost::asio::detail::thread_info_base *v1; // rdx

  v1 = boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top();
  return boost::asio::detail::thread_info_base::allocate(v1, size);
};

// Line 39: range 000000000BEEA334-000000000BEEA3B0
void boost::asio::asio_handler_deallocate(void *pointer, std::size_t size, ...)
{
  boost::asio::detail::thread_info_base *v2; // rcx

  v2 = boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top();
  boost::asio::detail::thread_info_base::deallocate(v2, pointer, size);
};
