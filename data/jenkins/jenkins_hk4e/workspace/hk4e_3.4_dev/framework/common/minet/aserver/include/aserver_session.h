// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/aserver/include/aserver_session.h

// Line 68: range 000000000C652714-000000000C6527F3
void __cdecl common::minet::AServerSession::~AServerSession(common::minet::AServerSession *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'common::minet::AServerSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AServerSession = v2;
  std::string::~string(&this->xor_key_);
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::~basic_deadline_timer(&this->keep_alive_dt_);
  boost::signals2::signal<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::~signal(&this->update_app_id_sig_);
  std::string::~string(&this->ip_str_);
  boost::signals2::signal<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::~signal(&this->release_sig_);
  boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>::~basic_stream_socket(&this->sock_);
  std::vector<std::string>::~vector(&this->send_str_vec_);
  common::tools::SafeQueue<std::string>::~SafeQueue((common::tools::SafeQueue<std::string >_0 *const)&this->wait_send_queue_);
  std::enable_shared_from_this<common::minet::AServerSession>::~enable_shared_from_this(&this->std::enable_shared_from_this<common::minet::AServerSession>);
};

// Line 68: range 000000000C6527F4-000000000C65281E
void __cdecl common::minet::AServerSession::~AServerSession(common::minet::AServerSession *const this)
{
  common::minet::AServerSession::~AServerSession(this);
  operator delete(this, 0x218uLL);
};

// Line 72: range 000000000C652558-000000000C6525A5
bool __cdecl common::minet::AServerSession::isConnected(const common::minet::AServerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->status_);
  }
  return this->status_ == STATUS_START_0;
};

// Line 101: range 000000000C6525A6-000000000C6525E0
char *__cdecl common::minet::AServerSession::getRecvBuf(common::minet::AServerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_buf_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->recv_buf_);
  return this->recv_buf_;
};

// Line 104: range 000000000C6525E2-000000000C6525F5
boost::asio::ip::tcp::socket *__cdecl common::minet::AServerSession::getSocket(
        common::minet::AServerSession *const this)
{
  return &this->sock_;
};

// Line 106: range 000000000C6525F6-000000000C652609
common::minet::AServerSession::ReleaseSignal *__cdecl common::minet::AServerSession::getReleaseSignal(
        common::minet::AServerSession *const this)
{
  return &this->release_sig_;
};

// Line 108: range 000000000C65260A-000000000C65261D
common::minet::AServerSession::UpdateAppIdSignal *__cdecl common::minet::AServerSession::getUpdateAppIdSignal(
        common::minet::AServerSession *const this)
{
  return &this->update_app_id_sig_;
};

// Line 149: range 000000000C65261E-000000000C65263D
const char *__cdecl common::minet::AServerSession::getClientIp(const common::minet::AServerSession *const this)
{
  return (const char *)std::string::c_str(&this->ip_str_);
};

// Line 151: range 000000000C65263E-000000000C65268D
uint32_t __cdecl common::minet::AServerSession::getSessionId(const common::minet::AServerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->session_id_);
  }
  return this->session_id_;
};

// Line 157: range 000000000C65268E-000000000C6526DA
uint32_t __cdecl common::minet::AServerSession::getAppId(const common::minet::AServerSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->app_id_);
  }
  return this->app_id_;
};
