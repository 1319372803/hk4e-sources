// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_sign_in_config_mgr.h

// Line 31: range 000000000C888B10-000000000C888B3A
void __cdecl data::DbSignInConfigMgr::DbSignInConfigMgr(data::DbSignInConfigMgr *const this)
{
  std::unordered_map<unsigned int,data::SignInScheduleConfig>::unordered_map(&this->schedule_config_map_);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->timestamp_schedule_ids_map_);
};

// Line 31: range 000000000C84CC46-000000000C84CC70
void __cdecl data::DbSignInConfigMgr::~DbSignInConfigMgr(data::DbSignInConfigMgr *const this)
{
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->timestamp_schedule_ids_map_);
  std::unordered_map<unsigned int,data::SignInScheduleConfig>::~unordered_map(&this->schedule_config_map_);
};
