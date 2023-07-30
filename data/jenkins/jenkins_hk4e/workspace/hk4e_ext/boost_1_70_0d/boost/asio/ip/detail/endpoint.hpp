// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/detail/endpoint.hpp

// Line 61: range 000000000BEF95C2-000000000BEF95CF
boost::asio::detail::socket_addr_type *__cdecl boost::asio::ip::detail::endpoint::data(
        boost::asio::ip::detail::endpoint *const this)
{
  return &this->data_.base;
};

// Line 67: range 000000000BEF95D0-000000000BEF95DD
const boost::asio::detail::socket_addr_type *__cdecl boost::asio::ip::detail::endpoint::data(
        const boost::asio::ip::detail::endpoint *const this)
{
  return &this->data_.base;
};

// Line 73: range 000000000BEF95DE-000000000BEF9607
std::size_t __cdecl boost::asio::ip::detail::endpoint::size(const boost::asio::ip::detail::endpoint *const this)
{
  if ( boost::asio::ip::detail::endpoint::is_v4(this) )
    return 16LL;
  else
    return 28LL;
};

// Line 85: range 000000000BEF9608-000000000BEF9616
std::size_t __cdecl boost::asio::ip::detail::endpoint::capacity(const boost::asio::ip::detail::endpoint *const this)
{
  return 28LL;
};

// Line 112: range 000000000BEF9618-000000000BEF966A
bool __cdecl boost::asio::ip::detail::endpoint::is_v4(const boost::asio::ip::detail::endpoint *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(this);
  }
  return this->data_.base.sa_family == 2;
};
