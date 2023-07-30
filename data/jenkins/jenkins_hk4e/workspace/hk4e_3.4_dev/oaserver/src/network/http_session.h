// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/network/http_session.h

// Line 26: range 000000000CAEB148-000000000CAEB4DA
void __cdecl Order::Order(Order *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->uid, v2);
  }
  this->uid = 0;
  std::string::basic_string(&this->product_id);
  std::string::basic_string(&this->product_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->product_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->product_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->product_num, v2);
  }
  this->product_num = 0;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->coin_num, v3);
  }
  this->coin_num = 0;
  std::string::basic_string(&this->total_fee);
  std::string::basic_string(&this->currency);
  std::string::basic_string(&this->price_tier);
  std::string::basic_string(&this->trade_no);
  if ( *(_BYTE *)(((unsigned __int64)&this->trade_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trade_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trade_time, v3);
  }
  this->trade_time = 0;
  std::string::basic_string(&this->region);
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_id, v3);
  }
  this->channel_id = 0;
  std::string::basic_string(&this->channel_order_no);
  std::string::basic_string(&this->pay_plat);
  std::string::basic_string(&this->extend);
  std::string::basic_string(&this->env);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_sandbox >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_sandbox >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_sandbox, v3);
  }
  this->is_sandbox = 0;
  std::string::basic_string(&this->bonus);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_num, v3);
  }
  this->bonus_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vip_point_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vip_point_num, (((_BYTE)this - 84) & 7u) + 3);
  }
  this->vip_point_num = 0;
  std::string::basic_string(&this->pay_type);
  std::string::basic_string(&this->pay_vendor);
  std::string::basic_string(&this->client_type);
  std::string::basic_string(&this->device);
  std::string::basic_string(&this->client_ip);
};

// Line 26: range 000000000CAEB4DC-000000000CAEB614
void __cdecl Order::~Order(Order *const this)
{
  std::string::~string(&this->client_ip);
  std::string::~string(&this->device);
  std::string::~string(&this->client_type);
  std::string::~string(&this->pay_vendor);
  std::string::~string(&this->pay_type);
  std::string::~string(&this->bonus);
  std::string::~string(&this->env);
  std::string::~string(&this->extend);
  std::string::~string(&this->pay_plat);
  std::string::~string(&this->channel_order_no);
  std::string::~string(&this->region);
  std::string::~string(&this->trade_no);
  std::string::~string(&this->price_tier);
  std::string::~string(&this->currency);
  std::string::~string(&this->total_fee);
  std::string::~string(&this->product_name);
  std::string::~string(&this->product_id);
};

// Line 56: range 000000000CD6F2E0-000000000CD6F351
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

// Line 56: range 000000000CD6F352-000000000CD6F37C
void __cdecl HttpSession::~HttpSession(HttpSession *const this)
{
  HttpSession::~HttpSession(this);
  operator delete(this, 0x368uLL);
};

// Line 70: range 000000000CAE9C58-000000000CAE9C6E
int32_t __cdecl HttpSession::onRecvPacket(
        HttpSession *const this,
        common::minet::PacketPtr *p_packet_ptr,
        boost::asio::yield_context *p_yield)
{
  return 0;
};
