// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/chunk_encode.hpp

// Line 64: range 0000000019B7FC76-0000000019B7FCD1
boost::beast::http::chunk_crlf::const_iterator __fastcall boost::beast::http::chunk_crlf::begin(
        const boost::beast::http::chunk_crlf *const this)
{
  if ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
    return (boost::beast::http::chunk_crlf::const_iterator)boost::beast::http::chunk_crlf::begin(void)const::cb;
  if ( __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
  {
    boost::beast::http::chunk_crlf::begin(void)const::cb[0] = "\r\n";
    boost::beast::http::chunk_crlf::begin(void)const::cb[1] = 2LL;
    __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
  }
  return (boost::beast::http::chunk_crlf::const_iterator)boost::beast::http::chunk_crlf::begin(void)const::cb;
};
