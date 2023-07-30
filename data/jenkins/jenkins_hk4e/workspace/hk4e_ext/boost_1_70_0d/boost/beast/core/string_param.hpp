// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/string_param.hpp

// Line 42: range 000000000C72529E-000000000C7252BE
void __cdecl boost::beast::string_param::~string_param(boost::beast::string_param *const this)
{
  boost::optional<boost::beast::detail::static_ostream>::~optional(&this->os_);
};

// Line 119: range 000000000C71997C-000000000C7199B6
boost::beast::string_view __cdecl boost::beast::string_param::operator boost::basic_string_view<char,std::char_traits<char>>(
        const boost::beast::string_param *const this) const
{
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  return this->sv_;
};
