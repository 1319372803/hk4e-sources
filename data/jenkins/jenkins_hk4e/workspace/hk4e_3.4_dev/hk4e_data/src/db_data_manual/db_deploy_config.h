// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_deploy_config.h

// Line 17: range 000000000CE3FA36-000000000CE3FF21
data::DbRegionConfig *__cdecl data::DbRegionConfig::operator=(
        data::DbRegionConfig *const this,
        const data::DbRegionConfig *a2)
{
  uint32_t id; // ecx
  uint32_t sdk_env; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::operator=(&this->name, &a2->name);
  std::string::operator=(&this->title, &a2->title);
  std::string::operator=(&this->region_type, &a2->region_type);
  std::string::operator=(&this->area_type, &a2->area_type);
  std::string::operator=(&this->dispatch_url, &a2->dispatch_url);
  std::string::operator=(&this->muipserver_url, &a2->muipserver_url);
  std::string::operator=(&this->account_url, &a2->account_url);
  std::string::operator=(&this->account_url_bak, &a2->account_url_bak);
  if ( *(_BYTE *)(((unsigned __int64)&a2->sdk_env >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sdk_env >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sdk_env);
  }
  sdk_env = a2->sdk_env;
  if ( *(_BYTE *)(((unsigned __int64)&this->sdk_env >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sdk_env >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sdk_env);
  }
  this->sdk_env = sdk_env;
  std::string::operator=(&this->account_inner_url, &a2->account_inner_url);
  std::string::operator=(&this->pay_callback_url, &a2->pay_callback_url);
  std::string::operator=(&this->resource_url, &a2->resource_url);
  std::string::operator=(&this->resource_url_bak, &a2->resource_url_bak);
  std::string::operator=(&this->data_url, &a2->data_url);
  std::string::operator=(&this->data_url_bak, &a2->data_url_bak);
  std::string::operator=(&this->feedback_url, &a2->feedback_url);
  std::string::operator=(&this->bulletin_url, &a2->bulletin_url);
  std::string::operator=(&this->handbook_url, &a2->handbook_url);
  std::string::operator=(&this->stop_server_config_str, &a2->stop_server_config_str);
  std::string::operator=(&this->stop_register_config_str, &a2->stop_register_config_str);
  std::string::operator=(&this->region_custom_config_str, &a2->region_custom_config_str);
  proto::StopServerConfig::operator=(&this->stop_server_config, &a2->stop_server_config);
  proto::StopRegisterConfig::operator=(&this->stop_register_config, &a2->stop_register_config);
  std::string::operator=(&this->client_secret_key, &a2->client_secret_key);
  std::string::operator=(&this->server_secret_key, &a2->server_secret_key);
  std::string::operator=(&this->region_custom_config_str_encrypted, &a2->region_custom_config_str_encrypted);
  std::string::operator=(&this->official_community_url, &a2->official_community_url);
  std::set<std::string>::operator=(&this->psn_region_set, &a2->psn_region_set);
  std::string::operator=(&this->user_center_url, &a2->user_center_url);
  std::string::operator=(&this->account_bind_url, &a2->account_bind_url);
  std::string::operator=(&this->cdkey_url, &a2->cdkey_url);
  std::string::operator=(&this->privacy_policy_url, &a2->privacy_policy_url);
  std::set<unsigned int>::operator=(&this->rsa_key_set, &a2->rsa_key_set);
  return this;
};

// Line 17: range 000000000CE3F5B8-000000000CE3FA0B
void __cdecl data::DbRegionConfig::DbRegionConfig(data::DbRegionConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->title);
  std::string::basic_string(&this->region_type);
  std::string::basic_string(&this->area_type);
  std::string::basic_string(&this->dispatch_url);
  std::string::basic_string(&this->muipserver_url);
  std::string::basic_string(&this->account_url);
  std::string::basic_string(&this->account_url_bak);
  if ( *(_BYTE *)(((unsigned __int64)&this->sdk_env >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sdk_env >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sdk_env);
  }
  this->sdk_env = 0;
  std::string::basic_string(&this->account_inner_url);
  std::string::basic_string(&this->pay_callback_url);
  std::string::basic_string(&this->resource_url);
  std::string::basic_string(&this->resource_url_bak);
  std::string::basic_string(&this->data_url);
  std::string::basic_string(&this->data_url_bak);
  std::string::basic_string(&this->feedback_url);
  std::string::basic_string(&this->bulletin_url);
  std::string::basic_string(&this->handbook_url);
  std::string::basic_string(&this->stop_server_config_str);
  std::string::basic_string(&this->stop_register_config_str);
  std::string::basic_string(&this->region_custom_config_str);
  proto::StopServerConfig::StopServerConfig(&this->stop_server_config);
  proto::StopRegisterConfig::StopRegisterConfig(&this->stop_register_config);
  std::string::basic_string(&this->client_secret_key);
  std::string::basic_string(&this->server_secret_key);
  std::string::basic_string(&this->region_custom_config_str_encrypted);
  std::string::basic_string(&this->official_community_url);
  std::set<std::string>::set(&this->psn_region_set);
  std::string::basic_string(&this->user_center_url);
  std::string::basic_string(&this->account_bind_url);
  std::string::basic_string(&this->cdkey_url);
  std::string::basic_string(&this->privacy_policy_url);
  std::set<unsigned int>::set(&this->rsa_key_set);
};

// Line 60: range 000000000CE40254-000000000CE40400
data::DbClientConfig *__cdecl data::DbClientConfig::operator=(
        data::DbClientConfig *const this,
        const data::DbClientConfig *a2)
{
  uint32_t id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::operator=(&this->version, &a2->version);
  std::string::operator=(&this->name, &a2->name);
  std::string::operator=(&this->force_update_config_str, &a2->force_update_config_str);
  std::string::operator=(&this->stop_server_config_str, &a2->stop_server_config_str);
  std::string::operator=(&this->client_custom_config_str, &a2->client_custom_config_str);
  proto::ForceUpdateConfig::operator=(&this->force_update_config, &a2->force_update_config);
  std::string::operator=(&this->client_secret_key, &a2->client_secret_key);
  std::string::operator=(&this->server_secret_key, &a2->server_secret_key);
  std::string::operator=(&this->client_custom_config_str_encrypted, &a2->client_custom_config_str_encrypted);
  std::string::operator=(&this->dispatch_seed, &a2->dispatch_seed);
  return this;
};

// Line 60: range 000000000CE400F6-000000000CE40252
void __cdecl data::DbClientConfig::DbClientConfig(data::DbClientConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  std::string::basic_string(&this->version);
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->force_update_config_str);
  std::string::basic_string(&this->stop_server_config_str);
  std::string::basic_string(&this->client_custom_config_str);
  proto::ForceUpdateConfig::ForceUpdateConfig(&this->force_update_config);
  std::string::basic_string(&this->client_secret_key);
  std::string::basic_string(&this->server_secret_key);
  std::string::basic_string(&this->client_custom_config_str_encrypted);
  std::string::basic_string(&this->dispatch_seed);
};

// Line 73: range 000000000C68D9C8-000000000C68DA16
void __cdecl data::DbAntiCheatClientChannelIdConfig::~DbAntiCheatClientChannelIdConfig(
        data::DbAntiCheatClientChannelIdConfig *const this)
{
  proto::AntiCheatConfig::~AntiCheatConfig(&this->anti_cheat_config);
  std::string::~string(&this->anti_cheat_config_str);
  std::set<std::string>::~set(&this->checksum_set);
  std::string::~string(&this->version);
};

// Line 73: range 000000000C68D66A-000000000C68D6A4
void __cdecl data::DbAreaConfig::~DbAreaConfig(data::DbAreaConfig *const this)
{
  std::string::~string(&this->business_cn);
  std::string::~string(&this->business);
  std::string::~string(this);
};

// Line 73: range 000000000C68D72E-000000000C68D74C
void __cdecl data::DbAuthkeyConfig::~DbAuthkeyConfig(data::DbAuthkeyConfig *const this)
{
  std::string::~string(&this->private_key);
};

// Line 73: range 000000000C68D276-000000000C68D330
void __cdecl data::DbClientConfig::~DbClientConfig(data::DbClientConfig *const this)
{
  std::string::~string(&this->dispatch_seed);
  std::string::~string(&this->client_custom_config_str_encrypted);
  std::string::~string(&this->server_secret_key);
  std::string::~string(&this->client_secret_key);
  proto::ForceUpdateConfig::~ForceUpdateConfig(&this->force_update_config);
  std::string::~string(&this->client_custom_config_str);
  std::string::~string(&this->stop_server_config_str);
  std::string::~string(&this->force_update_config_str);
  std::string::~string(&this->name);
  std::string::~string(&this->version);
};

// Line 73: range 000000000C68CFA6-000000000C68D1EC
void __cdecl data::DbRegionConfig::~DbRegionConfig(data::DbRegionConfig *const this)
{
  std::set<unsigned int>::~set(&this->rsa_key_set);
  std::string::~string(&this->privacy_policy_url);
  std::string::~string(&this->cdkey_url);
  std::string::~string(&this->account_bind_url);
  std::string::~string(&this->user_center_url);
  std::set<std::string>::~set(&this->psn_region_set);
  std::string::~string(&this->official_community_url);
  std::string::~string(&this->region_custom_config_str_encrypted);
  std::string::~string(&this->server_secret_key);
  std::string::~string(&this->client_secret_key);
  proto::StopRegisterConfig::~StopRegisterConfig(&this->stop_register_config);
  proto::StopServerConfig::~StopServerConfig(&this->stop_server_config);
  std::string::~string(&this->region_custom_config_str);
  std::string::~string(&this->stop_register_config_str);
  std::string::~string(&this->stop_server_config_str);
  std::string::~string(&this->handbook_url);
  std::string::~string(&this->bulletin_url);
  std::string::~string(&this->feedback_url);
  std::string::~string(&this->data_url_bak);
  std::string::~string(&this->data_url);
  std::string::~string(&this->resource_url_bak);
  std::string::~string(&this->resource_url);
  std::string::~string(&this->pay_callback_url);
  std::string::~string(&this->account_inner_url);
  std::string::~string(&this->account_url_bak);
  std::string::~string(&this->account_url);
  std::string::~string(&this->muipserver_url);
  std::string::~string(&this->dispatch_url);
  std::string::~string(&this->area_type);
  std::string::~string(&this->region_type);
  std::string::~string(&this->title);
  std::string::~string(&this->name);
};

// Line 73: range 000000000C68DBA0-000000000C68DBCE
void __cdecl data::DbRsakeyConfig::~DbRsakeyConfig(data::DbRsakeyConfig *const this)
{
  std::string::~string(&this->server_private_key);
  std::string::~string(&this->client_public_key);
};

// Line 73: range 000000000C68D7CA-000000000C68D808
void __cdecl data::DbSdkConfig::~DbSdkConfig(data::DbSdkConfig *const this)
{
  std::string::~string(&this->recharge_key);
  std::string::~string(&this->account_url);
  std::string::~string(&this->account_key);
};

// Line 73: range 000000000C68DAEC-000000000C68DB16
void __cdecl data::DbSecurityFileConfig::~DbSecurityFileConfig(data::DbSecurityFileConfig *const this)
{
  std::string::~string(&this->file_data);
  std::string::~string(this);
};

// Line 81: range 000000000CE40604-000000000CE40730
data::DbClientRegionConfig *__cdecl data::DbClientRegionConfig::operator=(
        data::DbClientRegionConfig *const this,
        const data::DbClientRegionConfig *a2)
{
  uint32_t id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::operator=(&this->client_version, &a2->client_version);
  std::string::operator=(&this->region_name, &a2->region_name);
  std::string::operator=(&this->client_region_custom_config_str, &a2->client_region_custom_config_str);
  std::string::operator=(&this->client_secret_key, &a2->client_secret_key);
  std::string::operator=(&this->server_secret_key, &a2->server_secret_key);
  std::string::operator=(
    &this->client_region_custom_config_str_encrypted,
    &a2->client_region_custom_config_str_encrypted);
  return this;
};

// Line 81: range 000000000CE40558-000000000CE40603
void __cdecl data::DbClientRegionConfig::DbClientRegionConfig(data::DbClientRegionConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  std::string::basic_string(&this->client_version);
  std::string::basic_string(&this->region_name);
  std::string::basic_string(&this->client_region_custom_config_str);
  std::string::basic_string(&this->client_secret_key);
  std::string::basic_string(&this->server_secret_key);
  std::string::basic_string(&this->client_region_custom_config_str_encrypted);
};

// Line 81: range 000000000C68D3E6-000000000C68D458
void __cdecl data::DbClientRegionConfig::~DbClientRegionConfig(data::DbClientRegionConfig *const this)
{
  std::string::~string(&this->client_region_custom_config_str_encrypted);
  std::string::~string(&this->server_secret_key);
  std::string::~string(&this->client_secret_key);
  std::string::~string(&this->client_region_custom_config_str);
  std::string::~string(&this->region_name);
  std::string::~string(&this->client_version);
};

// Line 97: range 000000000CE40E06-000000000CE40E64
data::DbAreaConfig *__cdecl data::DbAreaConfig::operator=(data::DbAreaConfig *const this, const data::DbAreaConfig *a2)
{
  std::string::operator=(this, a2);
  std::string::operator=(&this->business, &a2->business);
  std::string::operator=(&this->business_cn, &a2->business_cn);
  return this;
};

// Line 112: range 000000000CE40FA0-000000000CE4103B
data::DbAuthkeyConfig *__cdecl data::DbAuthkeyConfig::operator=(
        data::DbAuthkeyConfig *const this,
        const data::DbAuthkeyConfig *a2)
{
  uint32_t version; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  version = a2->version;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->version = version;
  std::string::operator=(&this->private_key, &a2->private_key);
  return this;
};

// Line 112: range 000000000CE40F48-000000000CE40F9F
void __cdecl data::DbAuthkeyConfig::DbAuthkeyConfig(data::DbAuthkeyConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->version = 0;
  std::string::basic_string(&this->private_key);
};

// Line 123: range 000000000CE4113E-000000000CE411A5
void __cdecl data::DbRsakeyConfig::DbRsakeyConfig(data::DbRsakeyConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  std::string::basic_string(&this->client_public_key);
  std::string::basic_string(&this->server_private_key);
};

// Line 123: range 000000000D3AD95C-000000000D3ADA36
void __cdecl data::DbRsakeyConfig::DbRsakeyConfig(data::DbRsakeyConfig *const this, const data::DbRsakeyConfig *a2)
{
  uint32_t id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::basic_string(&this->client_public_key, &a2->client_public_key);
  std::string::basic_string(&this->server_private_key, &a2->server_private_key);
};

// Line 135: range 000000000CE412C8-000000000CE41385
void __cdecl data::DbSdkConfig::DbSdkConfig(data::DbSdkConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->sdkenv = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->app_id);
  }
  this->app_id = 0;
  std::string::basic_string(&this->account_key);
  std::string::basic_string(&this->account_url);
  std::string::basic_string(&this->recharge_key);
};

// Line 135: range 000000000D3AE3FA-000000000D3AE54D
void __cdecl data::DbSdkConfig::DbSdkConfig(data::DbSdkConfig *const this, data::DbSdkConfig *a2)
{
  uint32_t sdkenv; // ecx
  uint32_t app_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  sdkenv = a2->sdkenv;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->sdkenv = sdkenv;
  if ( *(_BYTE *)(((unsigned __int64)&a2->app_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->app_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->app_id);
  }
  app_id = a2->app_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->app_id);
  }
  this->app_id = app_id;
  std::string::basic_string(&this->account_key, &a2->account_key);
  std::string::basic_string(&this->account_url, &a2->account_url);
  std::string::basic_string(&this->recharge_key, &a2->recharge_key);
};

// Line 146: range 000000000CE41866-000000000CE4195B
void __cdecl data::DbClientChannelIdConfig::DbClientChannelIdConfig(data::DbClientChannelIdConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  std::string::basic_string(&this->version);
  std::string::basic_string(&this->force_update_config_str);
  std::string::basic_string(&this->stop_server_config_str);
  proto::ForceUpdateConfig::ForceUpdateConfig(&this->force_update_config);
  proto::StopServerConfig::StopServerConfig(&this->stop_server_config);
};

// Line 146: range 000000000D3B0434-000000000D3B0637
void __cdecl data::DbClientChannelIdConfig::DbClientChannelIdConfig(
        data::DbClientChannelIdConfig *const this,
        data::DbClientChannelIdConfig *a2)
{
  uint32_t id; // ecx
  uint32_t channel_id; // ecx
  uint32_t sub_channel_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::basic_string(&this->version, &a2->version);
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel_id);
  }
  channel_id = a2->channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_id);
  }
  this->channel_id = channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sub_channel_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->sub_channel_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->sub_channel_id);
  }
  sub_channel_id = a2->sub_channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_channel_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_channel_id);
  }
  this->sub_channel_id = sub_channel_id;
  std::string::basic_string(&this->force_update_config_str, &a2->force_update_config_str);
  std::string::basic_string(&this->stop_server_config_str, &a2->stop_server_config_str);
  proto::ForceUpdateConfig::ForceUpdateConfig(&this->force_update_config, &a2->force_update_config);
  proto::StopServerConfig::StopServerConfig(&this->stop_server_config, &a2->stop_server_config);
};

// Line 146: range 000000000C68D8DE-000000000C68D93E
void __cdecl data::DbClientChannelIdConfig::~DbClientChannelIdConfig(data::DbClientChannelIdConfig *const this)
{
  proto::StopServerConfig::~StopServerConfig(&this->stop_server_config);
  proto::ForceUpdateConfig::~ForceUpdateConfig(&this->force_update_config);
  std::string::~string(&this->stop_server_config_str);
  std::string::~string(&this->force_update_config_str);
  std::string::~string(&this->version);
};

// Line 163: range 000000000CE415D4-000000000CE416E2
void __cdecl data::DbAntiCheatClientChannelIdConfig::DbAntiCheatClientChannelIdConfig(
        data::DbAntiCheatClientChannelIdConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  std::string::basic_string(&this->version);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_login >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_forbid_login);
  }
  this->is_forbid_login = 0;
  std::set<std::string>::set(&this->checksum_set);
  std::string::basic_string(&this->anti_cheat_config_str);
  proto::AntiCheatConfig::AntiCheatConfig(&this->anti_cheat_config);
};

// Line 194: range 000000000CE41AD8-000000000CE41B02
void __cdecl data::DbSecurityFileConfig::DbSecurityFileConfig(data::DbSecurityFileConfig *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->file_data);
};

// Line 194: range 000000000D3B0E22-000000000D3B0E85
void __cdecl data::DbSecurityFileConfig::DbSecurityFileConfig(
        data::DbSecurityFileConfig *const this,
        const data::DbSecurityFileConfig *a2)
{
  std::string::basic_string(this, a2);
  std::string::basic_string(&this->file_data, &a2->file_data);
};

// Line 231: range 000000000D3AF8CC-000000000D3AFAAA
void __cdecl data::DbAntiCheatClientChannelIdConfig::DbAntiCheatClientChannelIdConfig(
        data::DbAntiCheatClientChannelIdConfig *const this,
        data::DbAntiCheatClientChannelIdConfig *a2)
{
  uint32_t id; // ecx
  uint32_t channel_id; // ecx
  bool is_forbid_login; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::basic_string(&this->version, &a2->version);
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel_id);
  }
  channel_id = a2->channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_id);
  }
  this->channel_id = channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_forbid_login >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_forbid_login);
  }
  is_forbid_login = a2->is_forbid_login;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_login >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_forbid_login);
  }
  this->is_forbid_login = is_forbid_login;
  std::set<std::string>::set(&this->checksum_set, &a2->checksum_set);
  std::string::basic_string(&this->anti_cheat_config_str, &a2->anti_cheat_config_str);
  proto::AntiCheatConfig::AntiCheatConfig(&this->anti_cheat_config, &a2->anti_cheat_config);
};

// Line 3693: range 000000000CE053F2-000000000CE0542C
void __cdecl data::DbAreaConfig::DbAreaConfig(data::DbAreaConfig *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->business);
  std::string::basic_string(&this->business_cn);
};
