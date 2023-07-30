// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/config/config.h

// Line 22: range 000000000C887D72-000000000C887E3D
void __cdecl SdkInfo::SdkInfo(SdkInfo *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->port);
  std::string::basic_string(&this->uri);
  if ( *(char *)(((unsigned __int64)&this->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ssl);
  this->is_ssl = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->app_id);
  }
  this->app_id = 0;
  std::string::basic_string(&this->key);
};

// Line 22: range 000000000C84C962-000000000C84C9AC
void __cdecl SdkInfo::~SdkInfo(SdkInfo *const this)
{
  std::string::~string(&this->key);
  std::string::~string(&this->uri);
  std::string::~string(&this->port);
  std::string::~string(this);
};

// Line 32: range 000000000C88C2CA-000000000C88C399
void __cdecl RetrySDKVerifyConfig::RetrySDKVerifyConfig(RetrySDKVerifyConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_retry_when_http_error = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kickout_when_retry_fail >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_kickout_when_retry_fail >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_kickout_when_retry_fail);
  }
  this->is_kickout_when_retry_fail = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_second >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->retry_sdk_verify_second);
  }
  this->retry_sdk_verify_second = 0;
};

// Line 40: range 000000000C88C39A-000000000C88C3F1
void __cdecl SDKVerifyHostDarkRelease::SDKVerifyHostDarkRelease(SDKVerifyHostDarkRelease *const this)
{
  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->weight);
  }
  this->weight = 0;
};

// Line 40: range 000000000C84DA9A-000000000C84DAB4
void __cdecl SDKVerifyHostDarkRelease::~SDKVerifyHostDarkRelease(SDKVerifyHostDarkRelease *const this)
{
  std::string::~string(this);
};

// Line 46: range 000000000C88C446-000000000C88C729
void __cdecl Config::Config(Config *const this)
{
  int (**v1)(...); // rdx

  ConfigBase::ConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ConfigBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->xml_config_version);
  }
  this->xml_config_version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_dev_sdk_account);
  }
  this->is_dev_sdk_account = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->packet_recv_check_interval_ms);
  }
  this->packet_recv_check_interval_ms = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->packet_recv_max_count);
  }
  this->packet_recv_max_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->packet_recv_max_size);
  }
  this->packet_recv_max_size = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_skip_sdk_verify_when_http_failed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_skip_sdk_verify_when_http_failed >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_skip_sdk_verify_when_http_failed);
  }
  this->is_skip_sdk_verify_when_http_failed = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_tamper_client_msg_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_tamper_client_msg_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_tamper_client_msg_);
  }
  this->is_tamper_client_msg_ = 0;
  SdkInfo::SdkInfo(&this->sdk_info);
  DbConfigMgr::DbConfigMgr(&this->db_config_mgr);
  SecurityConfig::SecurityConfig(&this->security_config);
  GameserverMgrConfig::GameserverMgrConfig(&this->gameserver_mgr_config);
  RetrySDKVerifyConfig::RetrySDKVerifyConfig(&this->retry_sdk_verify_config);
  SDKVerifyHostDarkRelease::SDKVerifyHostDarkRelease(&this->sdk_verify_host_dark_release);
  FeatureSwitchMgr::FeatureSwitchMgr(&this->feature_switch_mgr);
};

// Line 46: range 000000000C84DAEE-000000000C84DB95
void __cdecl Config::~Config(Config *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ConfigBase = v1;
  FeatureSwitchMgr::~FeatureSwitchMgr(&this->feature_switch_mgr);
  SDKVerifyHostDarkRelease::~SDKVerifyHostDarkRelease(&this->sdk_verify_host_dark_release);
  SecurityConfig::~SecurityConfig(&this->security_config);
  DbConfigMgr::~DbConfigMgr(&this->db_config_mgr);
  SdkInfo::~SdkInfo(&this->sdk_info);
  ConfigBase::~ConfigBase(this);
};

// Line 46: range 000000000C84DB96-000000000C84DBC0
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0x10E0uLL);
};

// Line 62: range 000000000C7A42B6-000000000C7A4308
bool __cdecl Config::isDevSdkAccount(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_dev_sdk_account);
  }
  return this->is_dev_sdk_account;
};

// Line 67: range 000000000C7A430A-000000000C7A435C
bool __cdecl Config::isTamperClientMsg(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_tamper_client_msg_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_tamper_client_msg_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_tamper_client_msg_);
  }
  return this->is_tamper_client_msg_;
};
