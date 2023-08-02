// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/handler/request_handler.h

// Line 33: range 000000000CC8EB72-000000000CC8EBC9
void __cdecl QueryPlayerMemDataParam::QueryPlayerMemDataParam(QueryPlayerMemDataParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->data_type = 0;
  std::vector<unsigned int>::vector(&this->param_vec);
};

// Line 33: range 000000000CC8EBCA-000000000CC8EBE8
void __cdecl QueryPlayerMemDataParam::~QueryPlayerMemDataParam(QueryPlayerMemDataParam *const this)
{
  std::vector<unsigned int>::~vector(&this->param_vec);
};

// Line 56: range 000000000CC8D165-000000000CC8D171
const std::unordered_map<unsigned int,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >),std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)> > > *__cdecl RequestHandler::getRequestHandlerMap()
{
  return &RequestHandler::request_handler_map_;
};

// Line 99: range 000000000CC93328-000000000CC93352
void __cdecl AsyncRsp::~AsyncRsp(AsyncRsp *const this)
{
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->packet_ptr_);
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::~basic_deadline_timer(&this->dt_);
};

// Line 102: range 000000000CC8D172-000000000CC8D215
void __cdecl AsyncRsp::AsyncRsp(AsyncRsp *const this, boost::asio::io_context *ioc, uint32_t session_id)
{
  int s; // [rsp+24h] [rbp-1Ch] BYREF
  boost::posix_time::seconds v5; // [rsp+28h] [rbp-18h] BYREF

  s = 10;
  boost::posix_time::seconds::seconds<int>(&v5, &s, 0LL);
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::basic_deadline_timer<boost::asio::io_context>(
    &this->dt_,
    ioc,
    &v5,
    0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->session_id_, ioc);
  }
  this->session_id_ = session_id;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->packet_ptr_);
};

// Line 104: range 000000000CC8D216-000000000CC8D25D
uint32_t __cdecl AsyncRsp::getSessionId(const AsyncRsp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->session_id_);
  }
  return this->session_id_;
};

// Line 119: range 000000000CC976DC-000000000CC97706
void __cdecl AsyncRspMgr::AsyncRspMgr(AsyncRspMgr *const this)
{
  std::mutex::mutex(&this->rsp_map_mu_);
  std::map<unsigned int,std::weak_ptr<AsyncRsp>>::map(&this->rsp_map_);
};

// Line 119: range 000000000CFCFF16-000000000CFCFF34
void __cdecl AsyncRspMgr::~AsyncRspMgr(AsyncRspMgr *const this)
{
  std::map<unsigned int,std::weak_ptr<AsyncRsp>>::~map(&this->rsp_map_);
};
