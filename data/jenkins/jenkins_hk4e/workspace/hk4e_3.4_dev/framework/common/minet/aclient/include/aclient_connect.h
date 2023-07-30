// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/aclient/include/aclient_connect.h

// Line 114: range 000000000C7A36E4-000000000C7A3707
bool __cdecl common::minet::AClientConnect::isConnect(const common::minet::AClientConnect *const this)
{
  return std::atomic<common::minet::AClientConnect::Status>::operator common::minet::AClientConnect::Status(&this->status_) == STATUS_CONNECT;
};

// Line 118: range 000000000C7A3708-000000000C7A3719
const char *__cdecl common::minet::AClientConnect::getRemoteIp(const common::minet::AClientConnect *const this)
{
  return this->server_ip_;
};

// Line 121: range 000000000C7A371A-000000000C7A3762
uint16_t __cdecl common::minet::AClientConnect::getRemotePort(const common::minet::AClientConnect *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_port_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_port_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->server_port_);
  }
  return this->server_port_;
};

// Line 124: range 000000000C7A3764-000000000C7A37B8
uint32_t __cdecl common::minet::AClientConnect::getSelfAppId(const common::minet::AClientConnect *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->self_app_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->self_app_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->self_app_id_);
  }
  return this->self_app_id_;
};

// Line 125: range 000000000C7A37BA-000000000C7A3806
uint32_t __cdecl common::minet::AClientConnect::getTargetAppId(const common::minet::AClientConnect *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_app_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->target_app_id_);
  }
  return this->target_app_id_;
};
