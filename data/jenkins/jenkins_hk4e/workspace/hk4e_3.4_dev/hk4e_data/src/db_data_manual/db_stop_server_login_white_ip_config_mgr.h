// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_stop_server_login_white_ip_config_mgr.h

// Line 22: range 000000000C63E310-000000000C63E32A
void __cdecl data::DbStopServerLoginWhiteIpConfigMgr::DbStopServerLoginWhiteIpConfigMgr(
        data::DbStopServerLoginWhiteIpConfigMgr *const this)
{
  std::vector<DbIpConfig>::vector(&this->ip_config_vec_);
};

// Line 22: range 000000000C63D5CE-000000000C63D5E8
void __cdecl data::DbStopServerLoginWhiteIpConfigMgr::~DbStopServerLoginWhiteIpConfigMgr(
        data::DbStopServerLoginWhiteIpConfigMgr *const this)
{
  std::vector<DbIpConfig>::~vector(&this->ip_config_vec_);
};
