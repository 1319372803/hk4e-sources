// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/network/http_session.h

// Line 19: range 000000000CFCFAC6-000000000CFCFB37
void __cdecl HttpSession::~HttpSession(HttpSession *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HttpSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AServerSession = v2;
  common::minet::http_client::HttpResponse::~HttpResponse(&this->response_);
  common::minet::http_client::HttpRequest::~HttpRequest(&this->request_);
  common::minet::AServerSession::~AServerSession(this);
};

// Line 19: range 000000000CFCFB38-000000000CFCFB62
void __cdecl HttpSession::~HttpSession(HttpSession *const this)
{
  HttpSession::~HttpSession(this);
  operator delete(this, 0x368uLL);
};

// Line 25: range 000000000CC8F400-000000000CC8F47C
void __cdecl HttpSession::HttpSession(HttpSession *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AServerSession::AServerSession(this, ioc);
  v2 = (int (**)(...))(&`vtable for'HttpSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, ioc);
  this->_vptr_AServerSession = v2;
  common::minet::http_client::HttpRequest::HttpRequest(&this->request_);
  common::minet::http_client::HttpResponse::HttpResponse(&this->response_);
};

// Line 33: range 000000000CC8F47E-000000000CC8F494
int32_t __cdecl HttpSession::onRecvPacket(
        HttpSession *const this,
        common::minet::PacketPtr *p_packet_ptr,
        boost::asio::yield_context *p_yield)
{
  return 0;
};
