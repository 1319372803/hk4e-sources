// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_red_point_config_mgr.h

// Line 38: range 000000000C889CB2-000000000C889CEC
void __cdecl data::DbRedPointConfigMgr::DbRedPointConfigMgr(data::DbRedPointConfigMgr *const this)
{
  std::unordered_map<unsigned int,data::RedPointConfig>::unordered_map(&this->red_point_config_map_);
  std::multimap<unsigned int,std::pair<bool,unsigned int>>::multimap(&this->red_point_change_timestamp_map_);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->timestamp_ids_map_);
};

// Line 38: range 000000000C84CFB2-000000000C84CFEC
void __cdecl data::DbRedPointConfigMgr::~DbRedPointConfigMgr(data::DbRedPointConfigMgr *const this)
{
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->timestamp_ids_map_);
  std::multimap<unsigned int,std::pair<bool,unsigned int>>::~multimap(&this->red_point_change_timestamp_map_);
  std::unordered_map<unsigned int,data::RedPointConfig>::~unordered_map(&this->red_point_config_map_);
};
