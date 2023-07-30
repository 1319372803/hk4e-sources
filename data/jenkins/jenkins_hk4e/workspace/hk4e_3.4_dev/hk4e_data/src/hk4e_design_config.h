// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/hk4e_design_config.h

// Line 39: range 000000000C63D95A-000000000C63D998
void __cdecl ClientVersionConfig::ClientVersionConfig(ClientVersionConfig *const this)
{
  proto::DataVersionConfig::DataVersionConfig(&this->data_version_config);
  std::map<unsigned int,proto::ResVersionConfig>::map(&this->res_version_map);
  std::map<unsigned int,proto::ResVersionConfig>::map(&this->next_res_version_map);
};

// Line 39: range 000000000C63D8C6-000000000C63D904
void __cdecl ClientVersionConfig::~ClientVersionConfig(ClientVersionConfig *const this)
{
  std::map<unsigned int,proto::ResVersionConfig>::~map(&this->next_res_version_map);
  std::map<unsigned int,proto::ResVersionConfig>::~map(&this->res_version_map);
  proto::DataVersionConfig::~DataVersionConfig(&this->data_version_config);
};

// Line 90: range 000000000CE0B01C-000000000CE0B069
bool __cdecl HK4EDesignConfig::isAudit(const HK4EDesignConfig *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_audit, v1, &this->is_audit);
  return this->is_audit;
};

// Line 90: range 000000000CE0B06A-000000000CE0B08E
bool __cdecl HK4EDesignConfig::isCreateStaticMesh(HK4EDesignConfig *const this)
{
  return Flag<ConfigOption>::isOpen(&this->config_flag, create_mesh);
};
