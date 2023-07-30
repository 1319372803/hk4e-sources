// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_activity_schedule_config_mgr.h

// Line 31: range 000000000C88914C-000000000C889176
void __cdecl data::DbActivityScheduleConfigMgr::DbActivityScheduleConfigMgr(
        data::DbActivityScheduleConfigMgr *const this)
{
  std::unordered_map<unsigned int,data::ActivityScheduleConfig>::unordered_map(&this->schedule_config_map_);
  std::set<unsigned int>::set(&this->expired_schedule_id_set_);
};

// Line 31: range 000000000C84CD6E-000000000C84CD98
void __cdecl data::DbActivityScheduleConfigMgr::~DbActivityScheduleConfigMgr(
        data::DbActivityScheduleConfigMgr *const this)
{
  std::set<unsigned int>::~set(&this->expired_schedule_id_set_);
  std::unordered_map<unsigned int,data::ActivityScheduleConfig>::~unordered_map(&this->schedule_config_map_);
};
