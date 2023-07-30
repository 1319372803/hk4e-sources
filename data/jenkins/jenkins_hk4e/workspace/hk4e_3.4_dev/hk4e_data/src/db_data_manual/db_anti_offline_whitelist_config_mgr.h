// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_anti_offline_whitelist_config_mgr.h

// Line 23: range 000000000C88949C-000000000C8894B6
void __cdecl data::DbAntiOfflineWhitelistConfigMgr::DbAntiOfflineWhitelistConfigMgr(
        data::DbAntiOfflineWhitelistConfigMgr *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->whitelist_uid_set_);
};

// Line 23: range 000000000C84CE26-000000000C84CE40
void __cdecl data::DbAntiOfflineWhitelistConfigMgr::~DbAntiOfflineWhitelistConfigMgr(
        data::DbAntiOfflineWhitelistConfigMgr *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->whitelist_uid_set_);
};

// Line 35: range 000000000C8894B8-000000000C8894D2
void __cdecl data::DbClientWatchdogUidListConfigMgr::DbClientWatchdogUidListConfigMgr(
        data::DbClientWatchdogUidListConfigMgr *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->watchdog_uid_set_);
};

// Line 35: range 000000000C84CE42-000000000C84CE5C
void __cdecl data::DbClientWatchdogUidListConfigMgr::~DbClientWatchdogUidListConfigMgr(
        data::DbClientWatchdogUidListConfigMgr *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->watchdog_uid_set_);
};
