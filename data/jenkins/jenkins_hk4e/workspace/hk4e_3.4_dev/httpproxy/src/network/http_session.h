// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/httpproxy/src/network/http_session.h

// Line 24: range 000000000C7FB2B4-000000000C7FB337
void __cdecl HttpSession::~HttpSession(HttpSession *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HttpSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AServerSession = v1;
  std::map<std::string,std::string>::~map(&this->para_map_);
  std::string::~string(&this->uri_);
  boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message(&this->request_);
  common::minet::AServerSession::~AServerSession(this);
};

// Line 24: range 000000000C7FB338-000000000C7FB362
void __cdecl HttpSession::~HttpSession(HttpSession *const this)
{
  HttpSession::~HttpSession(this);
  operator delete(this, 0x2E8uLL);
};

// Line 28: range 000000000C72488A-000000000C7248B4
void __cdecl HttpSession::SocketGuard::SocketGuard(
        HttpSession::SocketGuard *const this,
        boost::asio::io_context *io_context)
{
  boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>::basic_stream_socket<boost::asio::io_context>(
    &this->sock,
    io_context,
    0LL);
};

// Line 35: range 000000000C724CB2-000000000C724D63
void __cdecl HttpSession::HttpSession(HttpSession *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AServerSession::AServerSession(this, ioc);
  v2 = (int (**)(...))(&`vtable for'HttpSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AServerSession = v2;
  boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::message(&this->request_);
  std::string::basic_string(&this->uri_);
  std::map<std::string,std::string>::map(&this->para_map_);
};

// Line 40: range 000000000C724D64-000000000C724D7A
int32_t __cdecl HttpSession::onRecvPacket(
        HttpSession *const this,
        common::minet::PacketPtr *p_packet_ptr,
        boost::asio::yield_context *p_yield)
{
  return 0;
};
