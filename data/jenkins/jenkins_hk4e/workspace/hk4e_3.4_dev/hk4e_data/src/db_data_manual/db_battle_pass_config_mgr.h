// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_battle_pass_config_mgr.h

// Line 30: range 000000000C889326-000000000C889340
void __cdecl data::DbBattlePassConfigMgr::DbBattlePassConfigMgr(data::DbBattlePassConfigMgr *const this)
{
  std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::unordered_map(&this->schedule_config_map_);
};

// Line 30: range 000000000C84CDEE-000000000C84CE08
void __cdecl data::DbBattlePassConfigMgr::~DbBattlePassConfigMgr(data::DbBattlePassConfigMgr *const this)
{
  std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::~unordered_map(&this->schedule_config_map_);
};
