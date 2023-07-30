// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/app_base.h

// Line 63: range 000000000C63FF9E-000000000C640128
void __cdecl AppBaseConfig::AppBaseConfig(AppBaseConfig *const this)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->built_time);
  std::string::basic_string(&this->game_version);
  std::string::basic_string(&this->code_version);
  std::string::basic_string(&this->rely_version);
  std::string::basic_string(&this->branch_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_reload_config_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_reload_config_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_reload_config_interval);
  }
  this->auto_reload_config_interval = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->argc >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->argc >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->argc);
  }
  this->argc = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->argv >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->argv);
  this->argv = 0LL;
  std::shared_ptr<NetworkMgrBase>::shared_ptr(&this->network_mgr_ptr);
  std::shared_ptr<ConfigMgrBase>::shared_ptr(&this->config_mgr_ptr);
  std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::shared_ptr(&this->mysql_mgr_ptr);
  std::shared_ptr<common::midb::RedisMgr>::shared_ptr(&this->redis_mgr_ptr);
  std::shared_ptr<MonitorReport>::shared_ptr(&this->monitor_report_ptr);
};

// Line 63: range 000000000C64012A-000000000C6401F0
void __cdecl AppBaseConfig::~AppBaseConfig(AppBaseConfig *const this)
{
  std::shared_ptr<MonitorReport>::~shared_ptr(&this->monitor_report_ptr);
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr(&this->redis_mgr_ptr);
  std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr(&this->mysql_mgr_ptr);
  std::shared_ptr<ConfigMgrBase>::~shared_ptr(&this->config_mgr_ptr);
  std::shared_ptr<NetworkMgrBase>::~shared_ptr(&this->network_mgr_ptr);
  std::string::~string(&this->branch_name);
  std::string::~string(&this->rely_version);
  std::string::~string(&this->code_version);
  std::string::~string(&this->game_version);
  std::string::~string(&this->built_time);
  std::string::~string(this);
};

// Line 92: range 000000000C68CB40-000000000C68CB5E
void __cdecl AppHostConfig::~AppHostConfig(AppHostConfig *const this)
{
  std::map<std::string,unsigned int>::~map(&this->port_map);
};

// Line 101: range 000000000C68CBDC-000000000C68CC0A
void __cdecl ServerConfig::~ServerConfig(ServerConfig *const this)
{
  std::string::~string(&this->domain_name);
  std::string::~string(&this->host_name);
};

// Line 113: range 000000000C637A3C-000000000C63802E
void __cdecl AppBase::AppBase(AppBase *const this);

// Line 117: range 000000000C637764-000000000C637851
void __cdecl AppBase::~AppBase(AppBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AppBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AppBase = v1;
  std::map<unsigned int,ServerConfig>::~map(&this->server_config_map_);
  std::map<unsigned int,AppHostConfig>::~map(&this->app_host_map_);
  std::string::~string(&this->patch_dir_);
  std::string::~string(&this->server_config_file_);
  std::string::~string(&this->branch_name_);
  std::string::~string(&this->rely_version_);
  std::string::~string(&this->code_version_);
  std::string::~string(&this->game_version_);
  std::string::~string(&this->built_time_);
  std::string::~string(&this->app_name_);
};

// Line 117: range 000000000C637852-000000000C63787C
void __cdecl AppBase::~AppBase(AppBase *const this)
{
  AppBase::~AppBase(this);
  operator delete(this, 0x1F0uLL);
};

// Line 145: range 000000000C63787E-000000000C6378C5
uint32_t __cdecl AppBase::getAppId(AppBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->app_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->app_id_);
  }
  return this->app_id_;
};

// Line 205: range 000000000C6378C6-000000000C6378D8
int32_t __cdecl AppBase::checkConfig(AppBase *const this, common::tools::PTree *pt)
{
  return 0;
};
