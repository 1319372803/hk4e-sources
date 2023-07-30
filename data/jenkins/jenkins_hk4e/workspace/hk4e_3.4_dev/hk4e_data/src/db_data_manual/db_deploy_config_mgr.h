// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_deploy_config_mgr.h

// Line 23: range 000000000C63E1CC-000000000C63E30F
void __cdecl DbDeployConfigMgr::DbDeployConfigMgr(DbDeployConfigMgr *const this)
{
  int (**v1)(...); // rdx

  DbConfigMgrBase::DbConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'DbDeployConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DbConfigMgrBase = v1;
  std::map<std::string,data::DbRegionConfig>::map(&this->db_region_config_map);
  std::map<std::string,data::DbClientConfig>::map(&this->db_client_config_map);
  std::map<std::pair<std::string,std::string>,data::DbClientRegionConfig>::map(&this->db_client_region_config_map);
  std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int>>,std::equal_to<std::pair<std::string,unsigned int>>,std::allocator<std::pair<std::pair<std::string,unsigned int> const,std::vector<std::string>>>>::unordered_map(&this->client_and_channel_to_region_map);
  std::vector<DbIpConfig>::vector(&this->login_white_ip_vec);
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::unordered_map(&this->deploy_multi_lang_map);
  std::map<std::string,data::DbAreaConfig>::map(&this->db_area_config_map);
  std::map<unsigned int,data::DbAuthkeyConfig>::map(&this->db_authkey_config_map);
  std::map<unsigned int,data::DbSdkConfig>::map(&this->db_sdk_config_map);
  std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::map(&this->db_client_channel_id_config_map);
  std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::map(&this->db_anti_cheat_client_channel_id_config_map);
  std::map<unsigned int,data::DbChannelIdConfig>::map(&this->db_channel_id_config_map);
  std::map<std::string,data::DbSecurityFileConfig>::map(&this->db_security_file_config_map);
  std::map<unsigned int,data::DbRsakeyConfig>::map(&this->db_rsakey_config_map);
};

// Line 23: range 000000000C63D756-000000000C63D88D
void __cdecl DbDeployConfigMgr::~DbDeployConfigMgr(DbDeployConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DbDeployConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DbConfigMgrBase = v1;
  std::map<unsigned int,data::DbRsakeyConfig>::~map(&this->db_rsakey_config_map);
  std::map<std::string,data::DbSecurityFileConfig>::~map(&this->db_security_file_config_map);
  std::map<unsigned int,data::DbChannelIdConfig>::~map(&this->db_channel_id_config_map);
  std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::~map(&this->db_anti_cheat_client_channel_id_config_map);
  std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::~map(&this->db_client_channel_id_config_map);
  std::map<unsigned int,data::DbSdkConfig>::~map(&this->db_sdk_config_map);
  std::map<unsigned int,data::DbAuthkeyConfig>::~map(&this->db_authkey_config_map);
  std::map<std::string,data::DbAreaConfig>::~map(&this->db_area_config_map);
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::~unordered_map(&this->deploy_multi_lang_map);
  std::vector<DbIpConfig>::~vector(&this->login_white_ip_vec);
  std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int>>,std::equal_to<std::pair<std::string,unsigned int>>,std::allocator<std::pair<std::pair<std::string,unsigned int> const,std::vector<std::string>>>>::~unordered_map(&this->client_and_channel_to_region_map);
  std::map<std::pair<std::string,std::string>,data::DbClientRegionConfig>::~map(&this->db_client_region_config_map);
  std::map<std::string,data::DbClientConfig>::~map(&this->db_client_config_map);
  std::map<std::string,data::DbRegionConfig>::~map(&this->db_region_config_map);
};
