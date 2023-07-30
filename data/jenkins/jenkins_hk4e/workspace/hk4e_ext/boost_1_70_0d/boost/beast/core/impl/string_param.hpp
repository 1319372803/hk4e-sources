// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/impl/string_param.hpp

// Line 19: range 0000000019D09E08-0000000019D0A1BA
void __fastcall boost::beast::string_param::print<unsigned long>(
        boost::beast::string_param *const this,
        const unsigned __int64 *t)
{
  boost::beast::string_param *v2; // rbx
  unsigned __int64 v3; // rdx
  char *v4; // rax
  const unsigned __int64 *v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(t);
  }
  else
  {
    v2 = this;
    v3 = *t;
    t = (const unsigned __int64 *)128;
    v4 = boost::beast::detail::raw_to_string<char,unsigned long,std::char_traits<char>>(
           (char *)&this->os_.m_initialized,
           0x80uLL,
           v3);
    if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      this->sv_.ptr_ = v4;
      this->sv_.len_ = (char *)&this->os_ - v4;
      return;
    }
  }
  __asan_report_store16(v2);
  boost::beast::string_param::string_param<unsigned long>(v2, t, v5);
};

// Line 99: range 0000000019CFE280-0000000019CFE481
void __fastcall boost::beast::string_param::string_param<boost::basic_string_view<char,std::char_traits<char>>>(
        boost::beast::string_param *const this,
        boost::beast::string_param *a2,
        const boost::basic_string_view<char,std::char_traits<char> > *a3)
{
  boost::optional<boost::beast::detail::static_ostream> *p_os; // rdx
  std::size_t len; // rdx
  boost::basic_string_view<char,std::char_traits<char> > v5; // rdx
  boost::system::error_code *v6; // r8

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_8;
  }
  this->sv_.ptr_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->sv_.len_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8();
    goto LABEL_9;
  }
  this->sv_.len_ = 0LL;
  p_os = &this->os_;
  if ( *(char *)(((unsigned __int64)&this->os_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_9:
    __asan_report_store1(p_os);
    goto LABEL_10;
  }
  this->os_.m_initialized = 0;
  if ( *(_WORD *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    this = a2;
    __asan_report_load16(a2);
    goto LABEL_11;
  }
  len = a2->sv_.len_;
  if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    this->sv_.ptr_ = a2->sv_.ptr_;
    this->sv_.len_ = len;
    return;
  }
LABEL_11:
  __asan_report_store16(this);
  std::function<void ()(unsigned long,boost::basic_string_view<char,std::char_traits<char>>,boost::system::error_code &)>::operator()(
    (const std::function<void(long unsigned int,boost::basic_string_view<char,std::char_traits<char> >,boost::system::error_code&)> *const)this,
    (unsigned __int64)a2,
    v5,
    v6);
};
