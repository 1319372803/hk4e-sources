// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/tcp.hpp

// Line 53: range 000000000BEF9F61-000000000BEF9F7E
boost::asio::ip::tcp __cdecl boost::asio::ip::tcp::v4()
{
  boost::asio::ip::tcp v1; // [rsp+Ch] [rbp-4h] BYREF

  boost::asio::ip::tcp::tcp(&v1, 2);
  return v1;
};

// Line 59: range 000000000BEF9F7F-000000000BEF9F9C
boost::asio::ip::tcp __cdecl boost::asio::ip::tcp::v6()
{
  boost::asio::ip::tcp v1; // [rsp+Ch] [rbp-4h] BYREF

  boost::asio::ip::tcp::tcp(&v1, 10);
  return v1;
};

// Line 65: range 000000000BEF9F9E-000000000BEF9FAC
int __cdecl boost::asio::ip::tcp::type(const boost::asio::ip::tcp *const this)
{
  return 1;
};

// Line 71: range 000000000BEF9FAE-000000000BEF9FBC
int __cdecl boost::asio::ip::tcp::protocol(const boost::asio::ip::tcp *const this)
{
  return 6;
};

// Line 77: range 000000000BEF9FBE-000000000BEFA008
int __cdecl boost::asio::ip::tcp::family(const boost::asio::ip::tcp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->family_;
};

// Line 143: range 000000000BEFA00A-000000000BEFA05B
void __cdecl boost::asio::ip::tcp::tcp(boost::asio::ip::tcp *const this, int protocol_family)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->family_ = protocol_family;
};
