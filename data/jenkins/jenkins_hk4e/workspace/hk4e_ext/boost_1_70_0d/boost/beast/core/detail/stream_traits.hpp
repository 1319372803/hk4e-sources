// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/detail/stream_traits.hpp

// Line 58: range 0000000019B8427C-0000000019B8427F
boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *__fastcall boost::beast::detail::get_lowest_layer_impl<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>(
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *t)
{
  return t;
};

// Line 66: range 0000000019B84280-0000000019B842B3
boost::beast::detail::lowest_layer_type *__fastcall boost::beast::detail::get_lowest_layer_impl<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>(
        boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *t)
{
  if ( !*(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    return boost::beast::detail::get_lowest_layer_impl<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>(&t->p_._M_t._M_t._M_head_impl->stream_.next_layer_);
  __asan_report_load8(t);
  return boost::beast::get_lowest_layer<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>(t);
};
