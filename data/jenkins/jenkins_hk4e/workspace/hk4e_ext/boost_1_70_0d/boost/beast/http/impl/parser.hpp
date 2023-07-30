// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/parser.hpp

// Line 21: range 000000000C7339A4-000000000C733B0D
void __cdecl boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::parser(
        boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const this)
{
  int (**v1)(...); // rdx
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::value_type *v2; // r12
  boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char> > > *v3; // rax

  boost::beast::http::basic_parser<true>::basic_parser(this);
  v1 = (int (**)(...))(&`vtable for'boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_basic_parser = v1;
  boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::message(&this->m_);
  v2 = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::body[abi:cxx11](&this->m_);
  v3 = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::base(&this->m_);
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::reader<true,boost::beast::http::basic_fields<std::allocator<char>>>(
    &this->rd_,
    v3,
    v2);
  if ( *(char *)(((unsigned __int64)&this->rd_inited_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->rd_inited_);
  this->rd_inited_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->used_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->used_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->used_);
  }
  this->used_ = 0;
  std::function<void ()(unsigned long,boost::basic_string_view<char,std::char_traits<char>>,boost::system::error_code &)>::function(&this->cb_h_);
  std::function<unsigned long ()(unsigned long,boost::basic_string_view<char,std::char_traits<char>>,boost::system::error_code &)>::function(&this->cb_b_);
};

// Line 29: range 000000000C795C88-000000000C795E48
void __cdecl ZN5boost5beast4http6parserILb0ENS1_17basic_string_bodyIcSt11char_traitsIcESaIcEEES6_EC2INS1_7messageILb0ES7_NS1_12basic_fieldsIS6_EEEEJEvEEOT_DpOT0_(
        boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const this,
        boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *arg1)
{
  int (**v2)(...); // rdx
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v3; // rax
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::value_type *v4; // r12
  boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char> > > *v5; // rax

  boost::beast::http::basic_parser<false>::basic_parser(this);
  v2 = (int (**)(...))(&`vtable for'boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_basic_parser = v2;
  v3 = std::forward<boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(arg1);
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::message(
    &this->m_,
    v3);
  v4 = boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::body[abi:cxx11](&this->m_);
  v5 = boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::base(&this->m_);
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::reader<false,boost::beast::http::basic_fields<std::allocator<char>>>(
    &this->rd_,
    v5,
    v4);
  if ( *(char *)(((unsigned __int64)&this->rd_inited_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->rd_inited_);
  this->rd_inited_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->used_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->used_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->used_);
  }
  this->used_ = 0;
  std::function<void ()(unsigned long,boost::basic_string_view<char,std::char_traits<char>>,boost::system::error_code &)>::function(&this->cb_h_);
  std::function<unsigned long ()(unsigned long,boost::basic_string_view<char,std::char_traits<char>>,boost::system::error_code &)>::function(&this->cb_b_);
  boost::beast::http::basic_fields<std::allocator<char>>::clear(&this->m_);
};
