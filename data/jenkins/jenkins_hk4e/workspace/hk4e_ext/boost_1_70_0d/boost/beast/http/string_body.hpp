// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/string_body.hpp

// Line 110: range 0000000019CFFE0C-0000000019CFFF7E
std::size_t __fastcall boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::put<boost::asio::const_buffers_1>(
        boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::reader *const this,
        const boost::asio::const_buffers_1 *buffers,
        boost::beast::error_code *ec)
{
  boost::beast::error_code *v3; // r13
  const boost::asio::const_buffers_1 *v4; // rbp
  unsigned __int64 b; // rbx
  unsigned __int64 size; // r14
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::value_type *body; // rdi
  __int64 p_M_string_length; // rax
  char *M_string_length; // r12
  char *v10; // rsi
  char *v11; // rdi

  v4 = buffers;
  if ( *(_WORD *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    this = (boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::reader *const)buffers;
    __asan_report_load16(buffers);
    goto LABEL_10;
  }
  b = (unsigned __int64)this;
  v3 = ec;
  size = buffers->size_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    p_M_string_length = __asan_report_load8(this);
    goto LABEL_11;
  }
  body = this->body_;
  p_M_string_length = (__int64)&body->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&body->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(p_M_string_length);
    goto LABEL_12;
  }
  M_string_length = (char *)body->_M_string_length;
  if ( 0x3FFFFFFFFFFFFFFFLL - (__int64)M_string_length >= size )
  {
    v10 = &M_string_length[size];
    std::string::resize(body, &M_string_length[size], 0LL);
    if ( *(_WORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store16(v3);
    }
    else
    {
      *(_QWORD *)&v3->val_ = 0LL;
      v3->cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
      if ( !*(_BYTE *)((b >> 3) + 0x7FFF8000) )
      {
        v11 = *(char **)b;
        if ( !*(_BYTE *)((*(_QWORD *)b >> 3) + 0x7FFF8000LL) )
        {
          M_string_length += *(_QWORD *)v11;
          b = (unsigned __int64)boost::beast::buffers_range_ref<boost::asio::const_buffers_1>(v4).b_;
          v3 = (boost::beast::error_code *)(b + 16);
          while ( 1 )
          {
            if ( v3 == (boost::beast::error_code *)b )
              return size;
            v11 = (char *)b;
            if ( *(_WORD *)((b >> 3) + 0x7FFF8000) )
              break;
            v10 = *(char **)b;
            v4 = *(const boost::asio::const_buffers_1 **)(b + 8);
            if ( v4 )
              goto LABEL_18;
LABEL_19:
            M_string_length = &M_string_length[(_QWORD)v4];
            b += 16LL;
          }
LABEL_17:
          __asan_report_load16(v11);
LABEL_18:
          memcpy(M_string_length, v10, (size_t)v4);
          goto LABEL_19;
        }
LABEL_16:
        __asan_report_load8(v11);
        goto LABEL_17;
      }
    }
    v11 = (char *)b;
    __asan_report_load8(b);
    goto LABEL_16;
  }
LABEL_12:
  boost::system::error_code::operator=<boost::beast::http::error>(v3, buffer_overflow);
  return 0LL;
};
