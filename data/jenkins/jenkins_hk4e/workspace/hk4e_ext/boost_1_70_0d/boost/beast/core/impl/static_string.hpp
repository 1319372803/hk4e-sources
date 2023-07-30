// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/impl/static_string.hpp

// Line 87: range 0000000019B826E2-0000000019B83138
void __fastcall boost::beast::static_string<4096ul,char,std::char_traits<char>>::resize(
        boost::beast::static_string<4096,char,std::char_traits<char> > *const this,
        std::size_t n)
{
  boost::beast::static_string<4096,char,std::char_traits<char> > *v2; // rbp
  std::size_t v3; // rbx
  std::size_t v4; // rax
  size_t v5; // rdx
  boost::beast::static_string<4096,char,std::char_traits<char> > *v6; // rdi
  char v7; // al
  _BYTE v8[40]; // [rsp+0h] [rbp-28h] BYREF

  if ( n > 0x1000 )
  {
    std::length_error::length_error((std::length_error *)v8, "n > max_size()");
    __asan_handle_no_return(v8);
    boost::exception_detail::throw_exception_<std::length_error>(
      (const std::length_error *)v8,
      "void boost::beast::static_string<N, CharT, Traits>::resize(std::size_t) [with long unsigned int N = 4096; CharT = "
      "char; Traits = std::char_traits<char>; std::size_t = long unsigned int]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/static_string.hpp",
      486);
  }
  v2 = this;
  v3 = n;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
LABEL_10:
    LOBYTE(n) = 0;
    memset(this, 0, v5);
    goto LABEL_5;
  }
  v4 = this->n_;
  if ( this->n_ < n )
  {
    this = (boost::beast::static_string<4096,char,std::char_traits<char> > *const)((char *)this + v4 + 8);
    v5 = n - v4;
    if ( n != v4 )
      goto LABEL_10;
  }
LABEL_5:
  v2->n_ = v3;
  v6 = (boost::beast::static_string<4096,char,std::char_traits<char> > *)&v2->s_[v3];
  v7 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
  if ( v7 <= (char)(((_BYTE)v2 + v3 + 8) & 7) && v7 )
  {
    __asan_report_store1(v6);
    boost::beast::static_string<4096ul,char,std::char_traits<char>>::push_back(v6, n);
  }
  else
  {
    v2->s_[v3] = 0;
  }
};

// Line 301: range 0000000019D08C6C-0000000019D09879
boost::beast::static_string<4096,char,std::char_traits<char> > *__fastcall boost::beast::static_string<4096ul,char,std::char_traits<char>>::insert(
        boost::beast::static_string<4096,char,std::char_traits<char> > *const this,
        boost::beast::static_string<4096,char,std::char_traits<char> >::size_type index,
        const char *s,
        boost::beast::static_string<4096,char,std::char_traits<char> >::size_type count)
{
  std::size_t n; // rdx
  char *v8; // r13
  char *v9; // rdi
  size_t v10; // rdx
  boost::beast::static_string<4096,char,std::char_traits<char> > *v11; // rdi
  char v12; // dl
  boost::beast::static_string<4096,char,std::char_traits<char> > *result; // rax
  unsigned __int64 v14; // rdx
  boost::beast::http::basic_fields<std::allocator<char> >::set_chunked_impl::<lambda(boost::beast::string_view)> *v15; // rcx
  _BYTE v16[56]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
LABEL_12:
    std::out_of_range::out_of_range((std::out_of_range *)v16, "index > size()");
    __asan_handle_no_return(v16);
    boost::exception_detail::throw_exception_<std::out_of_range>(
      (const std::out_of_range *)v16,
      "boost::beast::static_string<N, CharT, Traits>& boost::beast::static_string<N, CharT, Traits>::insert(boost::beast:"
      ":static_string<N, CharT, Traits>::size_type, const CharT*, boost::beast::static_string<N, CharT, Traits>::size_typ"
      "e) [with long unsigned int N = 4096; CharT = char; Traits = std::char_traits<char>; boost::beast::static_string<N,"
      " CharT, Traits>::size_type = long unsigned int]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/static_string.hpp",
      306);
  }
  n = this->n_;
  if ( index > this->n_ )
    goto LABEL_12;
  if ( count + n > 0x1000 )
  {
    std::length_error::length_error((std::length_error *)v16, "size() + count > max_size()");
    __asan_handle_no_return(v16);
    boost::exception_detail::throw_exception_<std::length_error>(
      (const std::length_error *)v16,
      "boost::beast::static_string<N, CharT, Traits>& boost::beast::static_string<N, CharT, Traits>::insert(boost::beast:"
      ":static_string<N, CharT, Traits>::size_type, const CharT*, boost::beast::static_string<N, CharT, Traits>::size_typ"
      "e) [with long unsigned int N = 4096; CharT = char; Traits = std::char_traits<char>; boost::beast::static_string<N,"
      " CharT, Traits>::size_type = long unsigned int]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/static_string.hpp",
      309);
  }
  v8 = &this->s_[index];
  v9 = &this->s_[index + count];
  v10 = n - index;
  if ( v10 )
  {
    index = (boost::beast::static_string<4096,char,std::char_traits<char> >::size_type)v8;
    memmove(v9, v8, v10);
  }
  this->n_ += count;
  if ( count )
  {
    index = (boost::beast::static_string<4096,char,std::char_traits<char> >::size_type)s;
    memcpy(v8, s, count);
  }
  v11 = (boost::beast::static_string<4096,char,std::char_traits<char> > *)&this->s_[this->n_];
  v12 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
  if ( v12 <= (((unsigned __int8)this + LOBYTE(this->n_) + 8) & 7) && v12 )
  {
    __asan_report_store1(v11);
    boost::beast::http::detail::filter_token_list_last<boost::beast::static_string<4096ul,char,std::char_traits<char>>,boost::beast::http::basic_fields<std::allocator<char>>::set_chunked_impl(bool)::{lambda(boost::basic_string_view<char,std::char_traits<char>>)#1}>(
      v11,
      (boost::beast::string_view)__PAIR128__(v14, index),
      v15);
  }
  else
  {
    this->s_[this->n_] = 0;
    return this;
  }
  return result;
};
