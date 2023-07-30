// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/detail/chunk_encode.hpp

// Line 150: range 0000000019B7FC19-0000000019B7FC74
const boost::asio::const_buffer *__cdecl boost::beast::http::detail::chunk_last()
{
  if ( (_BYTE)`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
    return &boost::beast::http::detail::chunk_last(void)::cb;
  if ( __cxa_guard_acquire(&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb) )
  {
    boost::beast::http::detail::chunk_last(void)::cb.data_ = "0\r\n";
    boost::beast::http::detail::chunk_last(void)::cb.size_ = 3LL;
    __cxa_guard_release(&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb);
  }
  return &boost::beast::http::detail::chunk_last(void)::cb;
};
