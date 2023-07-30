// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/basic_parser.hpp

// Line 24: range 0000000019BA470E-0000000019BA4CD0
std::size_t __fastcall boost::beast::http::basic_parser<false>::put<boost::asio::mutable_buffer>(
        boost::beast::http::basic_parser<false> *const this,
        const boost::asio::mutable_buffer *buffers,
        boost::beast::error_code *ec)
{
  std::size_t *p_size; // rax
  boost::beast::basic_flat_buffer<std::allocator<char> > *v5; // rdi
  boost::beast::error_code *v6; // rdx
  boost::beast::http::detail::read_all_condition<false>::operator()<boost::beast::basic_flat_buffer<std::allocator<char> > >::<lambda()> v7; // rcx

  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    p_size = (std::size_t *)__asan_report_load8(buffers);
  }
  else
  {
    p_size = &buffers->size_;
    if ( !*(_BYTE *)(((unsigned __int64)&buffers->size_ >> 3) + 0x7FFF8000) )
      return boost::beast::http::basic_parser<false>::put(this, *(boost::asio::const_buffer *)buffers, ec);
  }
  v5 = (boost::beast::basic_flat_buffer<std::allocator<char> > *)p_size;
  __asan_report_load8(p_size);
  return boost::beast::http::detail::parse_until<boost::beast::basic_flat_buffer<std::allocator<char>>,false,unsigned long boost::beast::http::detail::read_all_condition<false>::operator()<boost::beast::basic_flat_buffer<std::allocator<char>>>(boost::system::error_code &,unsigned long,boost::beast::basic_flat_buffer<std::allocator<char>> &)::{lambda(void)#1}>(
           v5,
           (boost::beast::http::basic_parser<false> *)buffers,
           v6,
           v7);
};
