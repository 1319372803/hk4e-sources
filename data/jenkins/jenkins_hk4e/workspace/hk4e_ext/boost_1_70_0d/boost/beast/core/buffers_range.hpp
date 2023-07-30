// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/buffers_range.hpp

// Line 115: range 000000000C815624-000000000C815648
boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&> __cdecl boost::beast::buffers_range_ref<boost::asio::const_buffers_1>(
        const boost::asio::const_buffers_1 *buffers)
{
  boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&> v2; // [rsp+18h] [rbp-8h] BYREF

  boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::buffers_range_adaptor(&v2, buffers);
  return v2;
};
