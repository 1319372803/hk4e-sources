// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_config_mgr.h

// Line 30: range 000000000C88A95C-000000000C88A988
void __cdecl DbConfigMgr::DbConfigMgr(DbConfigMgr *const this)
{
  DbLocalConfigMgr::DbLocalConfigMgr(&this->db_local_config_mgr);
  DbDeployConfigMgr::DbDeployConfigMgr(&this->db_deploy_config_mgr);
};

// Line 30: range 000000000C84D514-000000000C84D540
void __cdecl DbConfigMgr::~DbConfigMgr(DbConfigMgr *const this)
{
  DbDeployConfigMgr::~DbDeployConfigMgr(&this->db_deploy_config_mgr);
  DbLocalConfigMgr::~DbLocalConfigMgr(&this->db_local_config_mgr);
};
