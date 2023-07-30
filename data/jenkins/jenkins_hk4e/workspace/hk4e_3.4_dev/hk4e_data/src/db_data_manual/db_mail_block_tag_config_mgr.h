// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_mail_block_tag_config_mgr.h

// Line 24: range 000000000C888B74-000000000C888B8E
void __cdecl data::DbMailBlockTagConfigMgr::DbMailBlockTagConfigMgr(data::DbMailBlockTagConfigMgr *const this)
{
  std::set<std::string>::set(&this->mail_blocked_tag_config_set);
};

// Line 24: range 000000000C84CC8E-000000000C84CCA8
void __cdecl data::DbMailBlockTagConfigMgr::~DbMailBlockTagConfigMgr(data::DbMailBlockTagConfigMgr *const this)
{
  std::set<std::string>::~set(&this->mail_blocked_tag_config_set);
};
