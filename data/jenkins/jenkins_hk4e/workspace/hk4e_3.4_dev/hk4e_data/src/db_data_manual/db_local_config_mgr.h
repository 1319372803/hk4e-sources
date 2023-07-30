// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_local_config_mgr.h

// Line 43: range 000000000C889F2E-000000000C88A2FB
void __cdecl DbLocalConfigMgr::DbLocalConfigMgr(DbLocalConfigMgr *const this)
{
  int (**v1)(...); // rdx

  DbConfigMgrBase::DbConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'DbLocalConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DbConfigMgrBase = v1;
  std::map<unsigned int,data::DbLoginRewardConfig>::map(&this->login_reward_config_map);
  std::unordered_map<unsigned int,data::DbTextmapConfig>::unordered_map(&this->textmap_config_map);
  std::unordered_map<unsigned int,data::AnnounceConfig>::unordered_map(&this->announce_config_map);
  std::vector<data::DbQuestionnaireMailConfig>::vector(&this->questionnaire_mail_config_vec);
  data::DbGachaConfigMgr::DbGachaConfigMgr(&this->gacha_config_mgr);
  data::DbLuaShellConfigMgr::DbLuaShellConfigMgr(&this->lua_shell_mgr);
  data::DbMTPBlacklistConfigMgr::DbMTPBlacklistConfigMgr(&this->mtp_blacklist_mgr);
  data::DbSignInConfigMgr::DbSignInConfigMgr(&this->sign_in_config_mgr);
  data::DbMailBlockTagConfigMgr::DbMailBlockTagConfigMgr(&this->mail_block_tag_config_mgr);
  data::DbCmdFrequencyConfigMgr::DbCmdFrequencyConfigMgr(&this->cmd_frequency_cofig_mgr);
  data::DbFeatureSwitchOffConfigMgr::DbFeatureSwitchOffConfigMgr(&this->feature_switch_off_config_mgr);
  data::DbRebateConfigMgr::DbRebateConfigMgr(&this->rebate_config_mgr);
  data::DbActivityScheduleConfigMgr::DbActivityScheduleConfigMgr(&this->activity_schedule_config_mgr);
  data::DbInjectFixConfigMgr::DbInjectFixConfigMgr(&this->inject_fix_config_mgr);
  data::DbBattlePassConfigMgr::DbBattlePassConfigMgr(&this->battle_pass_config_mgr);
  data::DbAntiOfflineWhitelistConfigMgr::DbAntiOfflineWhitelistConfigMgr(&this->anti_offline_whitelis_config_mgr);
  data::DbClientWatchdogUidListConfigMgr::DbClientWatchdogUidListConfigMgr(&this->client_watchdog_uid_list_config_mgr);
  data::DbOpActivityConfigMgr::DbOpActivityConfigMgr(&this->op_activity_config_mgr);
  data::DbMTPWhitelistConfigMgr::DbMTPWhitelistConfigMgr(&this->mtp_whitelist_mgr);
  data::DbH5ActivityConfigMgr::DbH5ActivityConfigMgr(&this->h5_activity_config_mgr);
  data::DbLiveConfigMgr::DbLiveConfigMgr(&this->live_config_mgr);
  data::DbStopServerLoginWhiteIpConfigMgr::DbStopServerLoginWhiteIpConfigMgr(&this->stop_server_login_white_ip_config_mgr);
  data::DbRedPointConfigMgr::DbRedPointConfigMgr(&this->red_point_config_mgr);
  data::DbSecurityLibraryConfigMgr::DbSecurityLibraryConfigMgr(&this->security_library_config_mgr);
  data::DbGameplayRecommendationConfigMgr::DbGameplayRecommendationConfigMgr(&this->gameplay_recommendation_config_mgr);
};

// Line 43: range 000000000C84D072-000000000C84D26F
void __cdecl DbLocalConfigMgr::~DbLocalConfigMgr(DbLocalConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DbLocalConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_DbConfigMgrBase = v1;
  data::DbGameplayRecommendationConfigMgr::~DbGameplayRecommendationConfigMgr(&this->gameplay_recommendation_config_mgr);
  data::DbSecurityLibraryConfigMgr::~DbSecurityLibraryConfigMgr(&this->security_library_config_mgr);
  data::DbRedPointConfigMgr::~DbRedPointConfigMgr(&this->red_point_config_mgr);
  data::DbStopServerLoginWhiteIpConfigMgr::~DbStopServerLoginWhiteIpConfigMgr(&this->stop_server_login_white_ip_config_mgr);
  data::DbLiveConfigMgr::~DbLiveConfigMgr(&this->live_config_mgr);
  data::DbH5ActivityConfigMgr::~DbH5ActivityConfigMgr(&this->h5_activity_config_mgr);
  data::DbMTPWhitelistConfigMgr::~DbMTPWhitelistConfigMgr(&this->mtp_whitelist_mgr);
  data::DbOpActivityConfigMgr::~DbOpActivityConfigMgr(&this->op_activity_config_mgr);
  data::DbClientWatchdogUidListConfigMgr::~DbClientWatchdogUidListConfigMgr(&this->client_watchdog_uid_list_config_mgr);
  data::DbAntiOfflineWhitelistConfigMgr::~DbAntiOfflineWhitelistConfigMgr(&this->anti_offline_whitelis_config_mgr);
  data::DbBattlePassConfigMgr::~DbBattlePassConfigMgr(&this->battle_pass_config_mgr);
  data::DbInjectFixConfigMgr::~DbInjectFixConfigMgr(&this->inject_fix_config_mgr);
  data::DbActivityScheduleConfigMgr::~DbActivityScheduleConfigMgr(&this->activity_schedule_config_mgr);
  data::DbRebateConfigMgr::~DbRebateConfigMgr(&this->rebate_config_mgr);
  data::DbFeatureSwitchOffConfigMgr::~DbFeatureSwitchOffConfigMgr(&this->feature_switch_off_config_mgr);
  data::DbCmdFrequencyConfigMgr::~DbCmdFrequencyConfigMgr(&this->cmd_frequency_cofig_mgr);
  data::DbMailBlockTagConfigMgr::~DbMailBlockTagConfigMgr(&this->mail_block_tag_config_mgr);
  data::DbSignInConfigMgr::~DbSignInConfigMgr(&this->sign_in_config_mgr);
  data::DbMTPBlacklistConfigMgr::~DbMTPBlacklistConfigMgr(&this->mtp_blacklist_mgr);
  data::DbLuaShellConfigMgr::~DbLuaShellConfigMgr(&this->lua_shell_mgr);
  data::DbGachaConfigMgr::~DbGachaConfigMgr(&this->gacha_config_mgr);
  std::vector<data::DbQuestionnaireMailConfig>::~vector(&this->questionnaire_mail_config_vec);
  std::unordered_map<unsigned int,data::AnnounceConfig>::~unordered_map(&this->announce_config_map);
  std::unordered_map<unsigned int,data::DbTextmapConfig>::~unordered_map(&this->textmap_config_map);
  std::map<unsigned int,data::DbLoginRewardConfig>::~map(&this->login_reward_config_map);
};
