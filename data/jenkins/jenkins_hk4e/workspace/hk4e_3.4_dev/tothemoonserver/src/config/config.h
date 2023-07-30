// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/config/config.h

// Line 24: range 000000000CCAE7C2-000000000CCAEB60
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
  std::string::basic_string(&this->log_level_mask_);
  std::string::basic_string(&this->region_name);
  std::string::basic_string(&this->data_dir_path);
  if ( *(_BYTE *)(((unsigned __int64)&this->token_keep_alive_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->token_keep_alive_ms = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_time_limit >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->obstacle_time_limit = 60000LL;
  if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->version_count);
  this->version_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->oldest_version);
  }
  this->oldest_version = 0;
  if ( *(char *)(((unsigned __int64)&this->use_stat_collector >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_stat_collector);
  this->use_stat_collector = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_obstacle_extent);
  }
  this->max_obstacle_extent = 128.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_time_limit >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->query_path_req_time_limit = 500LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_target_point_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->query_path_req_target_point_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->query_path_req_target_point_limit);
  }
  this->query_path_req_target_point_limit = 5;
  ClientVersionConfig::ClientVersionConfig(&this->version_config);
  HK4EDesignConfig::HK4EDesignConfig(&this->design_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_res_version);
  }
  this->server_res_version = 0;
};

// Line 25: range 000000000CCAEB62-000000000CCAEC09
void __cdecl Config::~Config(Config *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ConfigBase = v1;
  HK4EDesignConfig::~HK4EDesignConfig(&this->design_config);
  ClientVersionConfig::~ClientVersionConfig(&this->version_config);
  std::string::~string(&this->data_dir_path);
  std::string::~string(&this->region_name);
  std::string::~string(&this->log_level_mask_);
  ConfigBase::~ConfigBase(this);
};

// Line 25: range 000000000CCAEC0A-000000000CCAEC34
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0x189B8uLL);
};

// Line 37: range 000000000CCAEC36-000000000CCAEC75
uint64_t __cdecl Config::getTokenKeepAliveMs(const Config *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->token_keep_alive_ms >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->token_keep_alive_ms, v1);
  return this->token_keep_alive_ms;
};

// Line 50: range 000000000CF54AF0-000000000CF54B0A
void __cdecl Config::SVOBlockDataInstance::~SVOBlockDataInstance(Config::SVOBlockDataInstance *const this)
{
  std::shared_ptr<SVOBlock>::~shared_ptr(&this->block_data);
};

// Line 56: range 000000000CF88D9E-000000000CF88DB8
void __cdecl Config::SVOWorldDataInstance::SVOWorldDataInstance(Config::SVOWorldDataInstance *const this)
{
  std::shared_ptr<SVOWorld>::shared_ptr(&this->world_data);
};

// Line 56: range 000000000CCB0E3E-000000000CCB0ED8
void __cdecl Config::SVOWorldDataInstance::SVOWorldDataInstance(
        Config::SVOWorldDataInstance *const this,
        const Config::SVOWorldDataInstance *a2)
{
  uint32_t data_id; // ecx

  std::shared_ptr<SVOWorld>::shared_ptr(&this->world_data, &a2->world_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->data_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->data_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->data_id);
  }
  data_id = a2->data_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->data_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->data_id);
  }
  this->data_id = data_id;
};

// Line 56: range 000000000CCB0EDA-000000000CCB0EF4
void __cdecl Config::SVOWorldDataInstance::~SVOWorldDataInstance(Config::SVOWorldDataInstance *const this)
{
  std::shared_ptr<SVOWorld>::~shared_ptr(&this->world_data);
};

// Line 75: range 000000000CF88982-000000000CF8899C
void __cdecl Config::SVOBlockDataInstance::SVOBlockDataInstance(Config::SVOBlockDataInstance *const this)
{
  std::shared_ptr<SVOBlock>::shared_ptr(&this->block_data);
};
