// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_local_config_mgr.cpp

// Line 30: range 000000000CD987EE-000000000CD991C7
int32_t __cdecl DbLocalConfigMgr::loadConfig(
        DbLocalConfigMgr *const this,
        uint32_t load_type,
        common::midb::MySqlMgr *mysql_mgr,
        const Flag<ConfigOption> *flag)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  uint16_t MysqlIndexByDbConfigType; // dx
  int32_t DbLoginRewardConfig; // r14d
  int v10; // r14d
  int v11; // r14d
  int v12; // r14d
  int v13; // r14d
  int v14; // r14d
  int v15; // r14d
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  int v19; // r14d
  int v20; // r14d
  int v21; // r14d
  int v22; // r14d
  int v23; // r14d
  int v24; // r14d
  int v25; // r14d
  int v26; // r14d
  int v27; // r14d
  int v28; // r14d
  int v29; // r14d
  int v30; // r14d
  int v31; // r14d
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v34; // rax
  int32_t result; // eax
  char v38[368]; // [rsp+30h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 16 11 conn_ptr:39 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DbLocalConfigMgr::loadConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -202116109;
  if ( (load_type & 1) != 0 )
  {
    MysqlIndexByDbConfigType = DbConfigMgr::getMysqlIndexByDbConfigType(DB_CONFIG_LOCAL);
    if ( *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v4 + 32);
    common::midb::MySqlMgrT<std::mutex>::grab(mysql_mgr, MysqlIndexByDbConfigType, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v4 + 32)) )
    {
      if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "loadConfig",
        42);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 128), "grab connect failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      DbLoginRewardConfig = DbLocalConfigMgr::loadDbLoginRewardConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32));
      v10 = DbLocalConfigMgr::loadDbTextmapConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | DbLoginRewardConfig;
      v11 = DbLocalConfigMgr::loadAnnounceConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v10;
      v12 = data::DbLuaShellConfigMgr::loadDbLuaShellConfig(
              &this->lua_shell_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v11;
      v13 = data::DbGachaConfigMgr::loadDbGachaConfig(&this->gacha_config_mgr, (common::midb::MysqlConnPtr *)(v4 + 32)) | v12;
      v14 = data::DbMTPBlacklistConfigMgr::loadDbMTPBlacklistConfig(
              &this->mtp_blacklist_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v13;
      v15 = data::DbSignInConfigMgr::loadDbSignInConfig(
              &this->sign_in_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v14;
      v16 = data::DbMailBlockTagConfigMgr::loadDbMailBlockedTagConfig(
              &this->mail_block_tag_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v15;
      v17 = data::DbCmdFrequencyConfigMgr::loadCmdFrequencyConfig(
              &this->cmd_frequency_cofig_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v16;
      v18 = data::DbFeatureSwitchOffConfigMgr::loadFeatureSwitchOffConfig(
              &this->feature_switch_off_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v17;
      v19 = data::DbActivityScheduleConfigMgr::loadDbActivityScheduleConfig(
              &this->activity_schedule_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v18;
      v20 = data::DbBattlePassConfigMgr::loadDbBattlePassConfig(
              &this->battle_pass_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v19;
      v21 = data::DbInjectFixConfigMgr::loadDbInjectFixConfig(
              &this->inject_fix_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v20;
      v22 = data::DbAntiOfflineWhitelistConfigMgr::loadAntiOfflineWhitelistConfig(
              &this->anti_offline_whitelis_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v21;
      v23 = data::DbClientWatchdogUidListConfigMgr::loadClientWatchdogUidListConfig(
              &this->client_watchdog_uid_list_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v22;
      v24 = data::DbOpActivityConfigMgr::loadDbOpActivityConfig(
              &this->op_activity_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v23;
      v25 = data::DbMTPWhitelistConfigMgr::loadDbMTPWhitelistConfig(
              &this->mtp_whitelist_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v24;
      v26 = data::DbH5ActivityConfigMgr::loadDbH5ActivityConfig(
              &this->h5_activity_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v25;
      v27 = data::DbLiveConfigMgr::loadDbLiveConfig(&this->live_config_mgr, (common::midb::MysqlConnPtr *)(v4 + 32)) | v26;
      v28 = data::DbStopServerLoginWhiteIpConfigMgr::loadStopServerLoginWhiteIpConfig(
              &this->stop_server_login_white_ip_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v27;
      v29 = data::DbRedPointConfigMgr::loadDbRedPointConfig(
              &this->red_point_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v28;
      v30 = data::DbSecurityLibraryConfigMgr::loadDbSecurityLibraryConfig(
              &this->security_library_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v29;
      v31 = data::DbGameplayRecommendationConfigMgr::loadDbGameplayRecommendationConfig(
              &this->gameplay_recommendation_config_mgr,
              (common::midb::MysqlConnPtr *)(v4 + 32)) | v30;
      if ( v31 | DbLocalConfigMgr::loadDbQuestionnaireMailConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) )
      {
        if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "loadConfig",
          71);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v32, "loadConfig failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else if ( Flag<ConfigOption>::isOpen(flag, load_rebate)
             && data::DbRebateConfigMgr::loadRebateConfig(
                  &this->rebate_config_mgr,
                  (common::midb::MysqlConnPtr *)(v4 + 32)) )
      {
        if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "loadConfig",
          77);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v34, "loadConfig failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
        *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v4 + 32));
  }
  else
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_local_config_mgr.cpp",
      "loadConfig",
      33);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 64), "skip load");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    v7 = 0;
  }
  result = v7;
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 85: range 000000000CD991C8-000000000CD99460
int32_t __cdecl DbLocalConfigMgr::loadSingleDb(
        DbLocalConfigMgr *const this,
        uint32_t db_type,
        common::midb::MySqlMgr *mysql_mgr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint16_t MysqlIndexByDbConfigType; // dx
  int32_t result; // eax
  char v9[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 11 conn_ptr:88 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbLocalConfigMgr::loadSingleDb;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -202116109;
  MysqlIndexByDbConfigType = DbConfigMgr::getMysqlIndexByDbConfigType(DB_CONFIG_LOCAL);
  if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 32);
  common::midb::MySqlMgrT<std::mutex>::grab(mysql_mgr, MysqlIndexByDbConfigType, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_local_config_mgr.cpp",
      "loadSingleDb",
      91);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 64), "grab connect failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 32));
  result = -1;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 111: range 000000000CD99462-000000000CD997B7
int32_t __cdecl DbLocalConfigMgr::rewriteConfig(DbLocalConfigMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t v4; // r14d
  int v5; // r14d
  int v6; // r14d
  int v7; // r14d
  int v8; // r14d
  int v9; // r14d
  int v10; // r14d
  int v11; // r14d
  int v12; // r14d
  int v13; // r14d
  int v14; // r14d
  int v15; // r14d
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  int v19; // r14d
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  char v22[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = DbLocalConfigMgr::rewriteConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  v4 = DbLocalConfigMgr::rewriteDbLoginRewardConfig(this);
  v5 = DbLocalConfigMgr::rewriteAnnounceConfig(this) | v4;
  v6 = data::DbLuaShellConfigMgr::rewriteDbLuaShellConfig(&this->lua_shell_mgr) | v5;
  v7 = data::DbGachaConfigMgr::rewriteDbGachaConfig(&this->gacha_config_mgr) | v6;
  v8 = data::DbMTPBlacklistConfigMgr::rewriteDbMTPBlcklistConfig(&this->mtp_blacklist_mgr) | v7;
  v9 = data::DbSignInConfigMgr::rewriteDbSignInConfig(&this->sign_in_config_mgr) | v8;
  v10 = data::DbBattlePassConfigMgr::rewriteDbBattlePassConfig(&this->battle_pass_config_mgr) | v9;
  v11 = data::DbCmdFrequencyConfigMgr::rewriteCmdFrquencyConfig(&this->cmd_frequency_cofig_mgr) | v10;
  v12 = data::DbActivityScheduleConfigMgr::rewriteDbActivityScheduleConfig(&this->activity_schedule_config_mgr) | v11;
  v13 = data::DbOpActivityConfigMgr::rewriteDbOpActivityConfig(&this->op_activity_config_mgr) | v12;
  v14 = data::DbMTPWhitelistConfigMgr::rewriteDbMTPWhitelistConfig(&this->mtp_whitelist_mgr) | v13;
  v15 = data::DbH5ActivityConfigMgr::rewriteDbH5ActivityConfig(&this->h5_activity_config_mgr) | v14;
  v16 = data::DbLiveConfigMgr::rewriteDbLiveConfig(&this->live_config_mgr) | v15;
  v17 = data::DbRedPointConfigMgr::rewriteRedPointConfig(&this->red_point_config_mgr) | v16;
  v18 = data::DbSecurityLibraryConfigMgr::rewriteDbSecurityLibraryConfig(&this->security_library_config_mgr) | v17;
  v19 = data::DbGameplayRecommendationConfigMgr::rewriteDbGameplayRecommendationConfig(&this->gameplay_recommendation_config_mgr) | v18;
  if ( v19 | DbLocalConfigMgr::rewriteDbQuestionnaireMailConfig(this) )
  {
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_local_config_mgr.cpp",
      "rewriteConfig",
      130);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v1 + 32),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator()(v20, "rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v22 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 137: range 000000000CD997B8-000000000CD99BC3
int32_t __cdecl DbLocalConfigMgr::checkConfig(DbLocalConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int v6; // r14d
  int v7; // r14d
  int v8; // r14d
  int v9; // r14d
  int v10; // r14d
  int v11; // r14d
  int v12; // r14d
  int v13; // r14d
  int v14; // r14d
  int v15; // r14d
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  int v19; // r14d
  int v20; // r14d
  int v21; // r14d
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  char v24[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbLocalConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = DbLocalConfigMgr::checkDbLoginRewardConfig(this, txt_config_mgr);
  v6 = DbLocalConfigMgr::checkDbTextmapConfig(this, txt_config_mgr) | v5;
  v7 = data::DbLuaShellConfigMgr::checkDbLuaShellConfig(&this->lua_shell_mgr) | v6;
  v8 = data::DbGachaConfigMgr::checkDbGachaConfig(&this->gacha_config_mgr, txt_config_mgr) | v7;
  v9 = data::DbSignInConfigMgr::checkDbSignInConfig(&this->sign_in_config_mgr, txt_config_mgr) | v8;
  v10 = data::DbCmdFrequencyConfigMgr::checkCmdFrequencyConfig(&this->cmd_frequency_cofig_mgr, txt_config_mgr) | v9;
  v11 = data::DbFeatureSwitchOffConfigMgr::checkFeatureSwitchOffConfig(
          &this->feature_switch_off_config_mgr,
          txt_config_mgr) | v10;
  v12 = data::DbRebateConfigMgr::checkRebateConfig(&this->rebate_config_mgr, txt_config_mgr) | v11;
  v13 = data::DbActivityScheduleConfigMgr::checkDbActivityScheduleConfig(
          &this->activity_schedule_config_mgr,
          txt_config_mgr) | v12;
  v14 = data::DbBattlePassConfigMgr::checkDbBattlePassConfig(&this->battle_pass_config_mgr, txt_config_mgr) | v13;
  v15 = data::DbInjectFixConfigMgr::checkDbInjectFixConfig(&this->inject_fix_config_mgr) | v14;
  v16 = data::DbOpActivityConfigMgr::checkDbOpActivityConfig(&this->op_activity_config_mgr, txt_config_mgr) | v15;
  v17 = data::DbH5ActivityConfigMgr::checkDbH5ActivityConfig(&this->h5_activity_config_mgr, txt_config_mgr) | v16;
  v18 = data::DbLiveConfigMgr::checkDbLiveConfig(&this->live_config_mgr) | v17;
  v19 = data::DbRedPointConfigMgr::checkRedPointConfig(&this->red_point_config_mgr) | v18;
  v20 = data::DbSecurityLibraryConfigMgr::checkDbSecurityLibraryConfig(
          &this->security_library_config_mgr,
          txt_config_mgr) | v19;
  v21 = data::DbGameplayRecommendationConfigMgr::checkDbGameplayRecommendationConfig(
          &this->gameplay_recommendation_config_mgr,
          txt_config_mgr) | v20;
  if ( v21 | DbLocalConfigMgr::checkDbQuestionnaireMailConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_local_config_mgr.cpp",
      "checkConfig",
      157);
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 32),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator()(v22, "checkConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v24 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 164: range 000000000CD99BC4-000000000CD9A079
__int64 __fastcall DbLocalConfigMgr::findTextmap(
        const DbLocalConfigMgr *const this,
        uint32_t text_id,
        uint32_t languange,
        std::string *text)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  data::DbTextmapConfigMap *p_textmap_config_map; // rdx
  data::DbTextmapConfigMap *v8; // rdx
  bool v9; // al
  __int64 result; // rax
  bool v11; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string >,false,false>::pointer v12; // rax
  bool v13; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string >,false,false>::pointer v14; // rax
  std::unordered_map<unsigned int,std::string> *multi_text_map; // [rsp+28h] [rbp-148h]
  char v18[320]; // [rsp+30h] [rbp-140h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 9 <unknown> 64 4 11 text_id:163 80 4 13 languange:163 96 8 8 iter:165 128 8 9 <unknown> 1"
                        "60 8 13 lang_iter:171 192 8 9 <unknown> 224 8 11 en_iter:178 256 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DbLocalConfigMgr::findTextmap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -202116352;
  *(_DWORD *)(v4 + 64) = text_id;
  *(_DWORD *)(v4 + 80) = languange;
  p_textmap_config_map = &this->textmap_config_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::DbTextmapConfig>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,data::DbTextmapConfig>::find(
                                                                                           p_textmap_config_map,
                                                                                           (const std::unordered_map<unsigned int,data::DbTextmapConfig>::key_type *)(v4 + 64));
  v8 = &this->textmap_config_map;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::DbTextmapConfig>::const_iterator *)(v4 + 128) = std::unordered_map<unsigned int,data::DbTextmapConfig>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::DbTextmapConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DbTextmapConfig>,false> *)(v4 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DbTextmapConfig>,false> *)(v4 + 128));
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    multi_text_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DbTextmapConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DbTextmapConfig>,false,false> *const)(v4 + 96))->second.multi_text_map;
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v4 + 160) = std::unordered_map<unsigned int,std::string>::find(
                                                                                    multi_text_map,
                                                                                    (const std::unordered_map<unsigned int,std::string>::key_type *)(v4 + 80));
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v4 + 192) = std::unordered_map<unsigned int,std::string>::end(multi_text_map);
    v11 = std::__detail::operator!=<std::pair<unsigned int const,std::string>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v4 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v4 + 192));
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v11 )
    {
      v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string >,false,false> *const)(v4 + 160));
      std::string::operator=(text, &v12->second);
      result = 0LL;
    }
    else
    {
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 48);
      *(_DWORD *)(v4 + 48) = 1;
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v4 + 224) = std::unordered_map<unsigned int,std::string>::find(
                                                                                      multi_text_map,
                                                                                      (const std::unordered_map<unsigned int,std::string>::key_type *)(v4 + 48));
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v4 + 256) = std::unordered_map<unsigned int,std::string>::end(multi_text_map);
      v13 = std::__detail::operator!=<std::pair<unsigned int const,std::string>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v4 + 224),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v4 + 256));
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string >,false,false> *const)(v4 + 224));
        std::string::operator=(text, &v14->second);
        result = 0LL;
      }
      else
      {
        result = 0xFFFFFFFFLL;
      }
    }
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 188: range 000000000CD9A07A-000000000CD9A235
const data::DbTextmapConfig *__fastcall DbLocalConfigMgr::findDbTextmapConfig(
        const DbLocalConfigMgr *const this,
        uint32_t text_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DbTextmapConfigMap *p_textmap_config_map; // rdx
  data::DbTextmapConfigMap *v6; // rdx
  bool v7; // al
  const data::DbTextmapConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 text_id:187 64 8 8 iter:189 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbLocalConfigMgr::findDbTextmapConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = text_id;
  p_textmap_config_map = &this->textmap_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::DbTextmapConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DbTextmapConfig>::find(
                                                                                           p_textmap_config_map,
                                                                                           (const std::unordered_map<unsigned int,data::DbTextmapConfig>::key_type *)(v2 + 48));
  v6 = &this->textmap_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::DbTextmapConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DbTextmapConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::DbTextmapConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DbTextmapConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DbTextmapConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DbTextmapConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DbTextmapConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 198: range 000000000CE430D2-000000000CE4328D
void __cdecl t_login_reward_config::t_login_reward_config(t_login_reward_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->reward_rules);
  std::string::basic_string(&this->email_title);
  std::string::basic_string(&this->email_sender);
  std::string::basic_string(&this->email_content);
  std::string::basic_string(&this->item_list);
  std::string::basic_string(&this->effective_account_type_list);
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->end_time);
  std::string::basic_string(&this->tag);
  mysqlpp::tiny_int<signed char>::tiny_int(&this->is_collectible);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_login_reward_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 198: range 000000000D3B885A-000000000D3B8C49
void __cdecl t_login_reward_config::t_login_reward_config(t_login_reward_config *const this, t_login_reward_config *a2)
{
  mysqlpp::sql_int_unsigned config_id; // ecx
  mysqlpp::sql_int_unsigned config_type; // ecx
  mysqlpp::sql_int_unsigned email_valid_days; // ecx
  mysqlpp::sql_int_unsigned importance; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_type);
  }
  config_type = a2->config_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_type);
  }
  this->config_type = config_type;
  std::string::basic_string(&this->reward_rules, &a2->reward_rules);
  if ( *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->email_valid_days);
  }
  email_valid_days = a2->email_valid_days;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->email_valid_days);
  }
  this->email_valid_days = email_valid_days;
  std::string::basic_string(&this->email_title, &a2->email_title);
  std::string::basic_string(&this->email_sender, &a2->email_sender);
  std::string::basic_string(&this->email_content, &a2->email_content);
  std::string::basic_string(&this->item_list, &a2->item_list);
  std::string::basic_string(&this->effective_account_type_list, &a2->effective_account_type_list);
  std::string::basic_string(&this->begin_time, &a2->begin_time);
  std::string::basic_string(&this->end_time, &a2->end_time);
  std::string::basic_string(&this->tag, &a2->tag);
  if ( *(_BYTE *)(((unsigned __int64)&a2->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->importance);
  }
  importance = a2->importance;
  if ( *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->importance);
  }
  this->importance = importance;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_collectible >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_collectible >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_collectible);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_collectible >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_collectible >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_collectible);
  }
  this->is_collectible.value_ = a2->is_collectible.value_;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 198: range 000000000D0ED552-000000000D0ED5FA
void __cdecl t_login_reward_config::~t_login_reward_config(t_login_reward_config *const this)
{
  std::string::~string(&this->tag);
  std::string::~string(&this->end_time);
  std::string::~string(&this->begin_time);
  std::string::~string(&this->effective_account_type_list);
  std::string::~string(&this->item_list);
  std::string::~string(&this->email_content);
  std::string::~string(&this->email_sender);
  std::string::~string(&this->email_title);
  std::string::~string(&this->reward_rules);
};

// Line 215: range 000000000CD9A236-000000000CD9B63A
int32_t __cdecl DbLocalConfigMgr::loadDbLoginRewardConfig(
        DbLocalConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  time_t Now; // rsi
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  std::logic_error *exception; // rdi
  mysqlpp::sql_int_unsigned config_id; // ecx
  common::milog::MiLogStream *p_config_type; // rdi
  mysqlpp::sql_int_unsigned config_type; // edx
  int v16; // r15d
  mysqlpp::sql_int_unsigned v17; // edi
  mysqlpp::sql_int_unsigned email_valid_days; // ecx
  int TimeByStr; // esi
  int v20; // edi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  mysqlpp::sql_int_unsigned importance; // ecx
  bool v25; // cl
  data::DbLoginRewardConfig *v26; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> >,bool> v27; // rax
  common::milog::MiLogStream *v28; // rcx
  int v29; // edx
  int v30; // r15d
  std::vector<t_login_reward_config>::size_type v31; // rdx
  unsigned __int64 v32; // rax
  std::vector<t_login_reward_config> *__for_range; // [rsp+28h] [rbp-728h]
  t_login_reward_config *row; // [rsp+30h] [rbp-720h]
  char v38[1808]; // [rsp+40h] [rbp-710h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1760LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 8 15 __for_begin:235 80 8 13 __for_end:235 112 24 11 row_vec:228 176 32 11 now_str:220 240"
                        " 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 "
                        "456 10 config:237 1088 544 9 query:221";
  *(_QWORD *)(v3 + 16) = DbLocalConfigMgr::loadDbLoginRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862751] = -234881024;
  v5[536862752] = -218959118;
  v5[536862753] = -218959118;
  v5[536862771] = -202116109;
  v5[536862772] = -202116109;
  v5[536862773] = -202116109;
  v5[536862774] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v2 = -1;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      Now = 32LL;
      __asan_report_store_n(v3 + 176, 32LL);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 176), Now);
    v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) )
    {
      v7 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 1088, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 1088), v7, "select ");
    v8 = std::operator<<<std::char_traits<char>>(
           v3 + 1088,
           "config_id, config_type, reward_rules, email_valid_days, email_title, email_sender,");
    v9 = std::operator<<<std::char_traits<char>>(
           v8,
           "email_content, item_list, effective_account_type_list, begin_time, end_time, tag, importance, is_collectible");
    v10 = std::operator<<<std::char_traits<char>>(v9, " from t_login_reward_config where enabled=1 and end_time>'");
    v11 = std::operator<<<char>(v10, v3 + 176);
    std::operator<<<std::char_traits<char>>(v11, "'");
    std::vector<t_login_reward_config>::vector((std::vector<t_login_reward_config> *const)(v3 + 112));
    mysqlpp::Query::storein<std::vector<t_login_reward_config>>(
      (mysqlpp::Query *const)(v3 + 1088),
      (std::vector<t_login_reward_config> *)(v3 + 112));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 1088)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<t_login_reward_config> *)(v3 + 112);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<t_login_reward_config>::iterator *)(v3 + 48) = std::vector<t_login_reward_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<t_login_reward_config>::iterator *)(v3 + 80) = std::vector<t_login_reward_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<t_login_reward_config *,std::vector<t_login_reward_config>>(
              (const __gnu_cxx::__normal_iterator<t_login_reward_config*,std::vector<t_login_reward_config> > *)(v3 + 48),
              (const __gnu_cxx::__normal_iterator<t_login_reward_config*,std::vector<t_login_reward_config> > *)(v3 + 80)) )
    {
      row = __gnu_cxx::__normal_iterator<t_login_reward_config *,std::vector<t_login_reward_config>>::operator*((const __gnu_cxx::__normal_iterator<t_login_reward_config*,std::vector<t_login_reward_config> > *const)(v3 + 48));
      __asan_unpoison_stack_memory(v3 + 560, 456LL);
      data::DbLoginRewardConfig::DbLoginRewardConfig((data::DbLoginRewardConfig *const)(v3 + 560));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      config_id = row->config_id;
      if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 560);
      *(_DWORD *)(v3 + 560) = config_id;
      if ( *(_BYTE *)(((unsigned __int64)&row->config_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->config_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->config_type);
      }
      if ( !proto::LoginRewardConfigType_IsValid(row->config_type) )
      {
        *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 47) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "loadDbLoginRewardConfig",
          242);
        p_config_type = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 240),
                          (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&row->config_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->config_type >> 3) + 0x7FFF8000) )
        {
          p_config_type = (common::milog::MiLogStream *)&row->config_type;
          __asan_report_load4(&row->config_type);
        }
        config_type = row->config_type;
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          p_config_type = (common::milog::MiLogStream *)row;
          __asan_report_load4(row);
        }
        common::milog::MiLogStream::operator()(p_config_type, aConfigIdU, row->config_id, config_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
        *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&row->config_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->config_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&row->config_type);
        }
        v17 = row->config_type;
        if ( *(_BYTE *)(((v3 + 564) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 32 + 84) & 7) + 3) >= *(_BYTE *)(((v3 + 564) >> 3) + 0x7FFF8000) )
        {
          v17 = v3 + 564;
          __asan_report_store4(v3 + 564);
        }
        *(_DWORD *)(v3 + 564) = v17;
        std::string::operator=(v3 + 568, &row->reward_rules);
        if ( *(_BYTE *)(((unsigned __int64)&row->email_valid_days >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->email_valid_days >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->email_valid_days);
        }
        email_valid_days = row->email_valid_days;
        if ( *(_BYTE *)(((v3 + 600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 600) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 600);
        *(_DWORD *)(v3 + 600) = email_valid_days;
        std::string::operator=(v3 + 608, &row->email_title);
        std::string::operator=(v3 + 640, &row->email_sender);
        std::string::operator=(v3 + 672, &row->email_content);
        std::string::operator=(v3 + 704, &row->item_list);
        std::string::operator=(v3 + 736, &row->effective_account_type_list);
        TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->begin_time);
        if ( *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 768);
        *(_DWORD *)(v3 + 768) = TimeByStr;
        v20 = common::tools::TimeUtils::getTimeByStr(&row->end_time);
        if ( *(_BYTE *)(((v3 + 772) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 32 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 772) >> 3) + 0x7FFF8000) )
        {
          v20 = v3 + 772;
          __asan_report_store4(v3 + 772);
        }
        *(_DWORD *)(v3 + 772) = v20;
        if ( *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 768);
        if ( !*(_DWORD *)(v3 + 768) || !*(_DWORD *)(v3 + 772) )
        {
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 111) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/db_data_manual/db_local_config_mgr.cpp",
            "loadDbLoginRewardConfig",
            259);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[16])" invalid_time: ");
          v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &row->begin_time);
          v23 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v22, (const char (*)[3])", ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &row->end_time);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        }
        std::string::operator=(v3 + 976, &row->tag);
        if ( *(_BYTE *)(((unsigned __int64)&row->importance >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->importance >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->importance);
        }
        importance = row->importance;
        if ( *(_BYTE *)(((v3 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1008) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 1008);
        *(_DWORD *)(v3 + 1008) = importance;
        v25 = mysqlpp::tiny_int<signed char>::operator bool(&row->is_collectible);
        if ( *(_BYTE *)(((v3 + 1012) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 20) & 7) >= *(_BYTE *)(((v3 + 1012) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v3 + 1012);
        }
        *(_BYTE *)(v3 + 1012) = v25;
        v27 = std::map<unsigned int,data::DbLoginRewardConfig>::emplace<unsigned int &,data::DbLoginRewardConfig&>(
                &this->login_reward_config_map,
                (unsigned int *)(v3 + 560),
                (data::DbLoginRewardConfig *)(v3 + 560),
                (unsigned int *)&this->login_reward_config_map,
                v26);
        if ( !v27.second )
        {
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 368, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 368),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_local_config_mgr.cpp",
            "loadDbLoginRewardConfig",
            268);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 368),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 560);
          common::milog::MiLogStream::operator()(v28, aConfigIdU_0, *(unsigned int *)(v3 + 560));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      data::DbLoginRewardConfig::~DbLoginRewardConfig((data::DbLoginRewardConfig *const)(v3 + 560));
      __asan_poison_stack_memory(v3 + 560, 456LL);
      if ( v16 != 1 )
      {
        v29 = 0;
        goto LABEL_68;
      }
      __gnu_cxx::__normal_iterator<t_login_reward_config *,std::vector<t_login_reward_config>>::operator++((__gnu_cxx::__normal_iterator<t_login_reward_config*,std::vector<t_login_reward_config> > *const)(v3 + 48));
    }
    v29 = 1;
LABEL_68:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v29 == 1 )
    {
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "loadDbLoginRewardConfig",
        272);
      v31 = std::vector<t_login_reward_config>::size((const std::vector<t_login_reward_config> *const)(v3 + 112));
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 432),
        "load %lu config from t_login_reward_config",
        v31);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v30 = 1;
    }
    else
    {
      v30 = 0;
    }
    std::vector<t_login_reward_config>::~vector((std::vector<t_login_reward_config> *const)(v3 + 112));
    v32 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v32 = -1800;
    *(_BYTE *)(v32 + 2) = -8;
    if ( v30 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 1088));
    std::string::~string((void *)(v3 + 176));
  }
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80CC) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D4) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1760LL, v38);
  }
  return v2;
};

// Line 282: range 000000000CF0F6D6-000000000CF10777
void __cdecl populate_t_announce_config<(mysqlpp::sql_dummy_type)0>(t_announce_config *s, const mysqlpp::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r15
  const mysqlpp::String *v8; // r15
  const mysqlpp::String *v9; // r15
  const mysqlpp::String *v10; // r15
  const mysqlpp::String *v11; // r15
  const mysqlpp::String *v12; // rax
  unsigned int v13; // edx
  const mysqlpp::String *v14; // rax
  unsigned int v15; // ecx
  const mysqlpp::String *v16; // r15
  const mysqlpp::String *v17; // r15
  const mysqlpp::String *v18; // r15
  std::string v19; // [rsp+0h] [rbp-4B0h]
  std::string v20; // [rsp+0h] [rbp-4B0h]
  std::string v21; // [rsp+0h] [rbp-4B0h]
  std::string v22; // [rsp+0h] [rbp-4B0h]
  std::string v23; // [rsp+0h] [rbp-4B0h]
  std::string v24; // [rsp+0h] [rbp-4B0h]
  std::string v25; // [rsp+0h] [rbp-4B0h]
  std::string v26; // [rsp+0h] [rbp-4B0h]
  mysqlpp::String *v27; // [rsp+8h] [rbp-4A8h]
  mysqlpp::Row *rowa; // [rsp+10h] [rbp-4A0h]
  t_announce_config *sa; // [rsp+18h] [rbp-498h]
  char v30[1168]; // [rsp+20h] [rbp-490h] BYREF

  *(&v19._anon_0._M_allocated_capacity + 1) = (std::string::size_type)s;
  v19._anon_0._M_allocated_capacity = (std::string::size_type)row;
  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1120LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 16 28 ignore_schema_mismatches:282 96 32 9 <unknown> 160"
                        " 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 "
                        "32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 3"
                        "2 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = populate_t_announce_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -202116109;
  mysqlpp::NoExceptions::NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64), row);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(s);
  }
  s->id = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  std::string::basic_string(v2 + 96);
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 160, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 160), v7, v19);
  std::string::operator=(*(&v20._anon_0._M_allocated_capacity + 1) + 8, v2 + 160);
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v20._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 224);
  if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 288, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 288), v8, v20);
  std::string::operator=(*(&v21._anon_0._M_allocated_capacity + 1) + 40, v2 + 288);
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v21._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 352);
  if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 416, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 416), v9, v21);
  std::string::operator=(*(&v22._anon_0._M_allocated_capacity + 1) + 72, v2 + 416);
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v22._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 480);
  if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 544, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 544), v10, v22);
  std::string::operator=(*(&v23._anon_0._M_allocated_capacity + 1) + 104, v2 + 544);
  std::string::~string((void *)(v2 + 544));
  *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 480));
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
  v11 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v23._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 608);
  if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 672, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 672), v11, v23);
  std::string::operator=(*(&v24._anon_0._M_allocated_capacity + 1) + 136, v2 + 672);
  std::string::~string((void *)(v2 + 672));
  *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 608));
  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
  v12 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v24._anon_0._M_allocated_capacity);
  v13 = mysqlpp::String::conv<unsigned int>(v12, 0);
  if ( *(_BYTE *)(((*(&v24._anon_0._M_allocated_capacity + 1) + 168) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v24._anon_0._M_allocated_capacity + 1) + 168) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(*(&v24._anon_0._M_allocated_capacity + 1) + 168);
  }
  *(_DWORD *)(*(&v24._anon_0._M_allocated_capacity + 1) + 168) = v13;
  v14 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v24._anon_0._M_allocated_capacity);
  v15 = mysqlpp::String::conv<unsigned int>(v14, 0);
  if ( *(_BYTE *)(((*(&v24._anon_0._M_allocated_capacity + 1) + 172) >> 3) + 0x7FFF8000) != 0
    && (char)(((v24._anon_0._M_local_buf[8] - 84) & 7) + 3) >= *(_BYTE *)(((*(&v24._anon_0._M_allocated_capacity + 1)
                                                                          + 172) >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(*(&v24._anon_0._M_allocated_capacity + 1) + 172);
  }
  *(_DWORD *)(*(&v24._anon_0._M_allocated_capacity + 1) + 172) = v15;
  *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
  v16 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v24._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 736);
  if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 800, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 800), v16, v24);
  std::string::operator=(*(&v25._anon_0._M_allocated_capacity + 1) + 176, v2 + 800);
  std::string::~string((void *)(v2 + 800));
  *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 736));
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
  v17 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v25._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 864);
  if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 928, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 928), v17, v25);
  std::string::operator=(*(&v26._anon_0._M_allocated_capacity + 1) + 208, v2 + 928);
  std::string::~string((void *)(v2 + 928));
  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 864));
  *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
  v26._M_string_length = mysqlpp::Row::operator[]((mysqlpp::Row *)v26._anon_0._M_allocated_capacity);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
  mysqlpp::tiny_int<signed char>::tiny_int((mysqlpp::tiny_int<signed char> *const)(v2 + 32));
  if ( *(char *)(((*(&v26._anon_0._M_allocated_capacity + 1) + 240) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(*(&v26._anon_0._M_allocated_capacity + 1) + 240);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 32);
  *(mysqlpp::tiny_int<signed char> *)(*(&v26._anon_0._M_allocated_capacity + 1) + 240) = mysqlpp::String::conv<mysqlpp::tiny_int<signed char>>(
                                                                                           (const mysqlpp::String *const)v26._M_string_length,
                                                                                           *(mysqlpp::tiny_int<signed char> *)(v2 + 32));
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
  v18 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v26._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 992);
  if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 1056, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 1056), v18, v26);
  std::string::operator=(&sa->server_version, v2 + 1056);
  std::string::~string((void *)(v2 + 1056));
  *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 992));
  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
  v27 = (mysqlpp::String *)mysqlpp::Row::operator[](rowa);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  mysqlpp::tiny_int<signed char>::tiny_int((mysqlpp::tiny_int<signed char> *const)(v2 + 48));
  if ( *(char *)(((unsigned __int64)&sa->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&sa->enable);
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 48);
  sa->enable = mysqlpp::String::conv<mysqlpp::tiny_int<signed char>>(v27, *(mysqlpp::tiny_int<signed char> *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64));
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1120LL, v30);
  }
};

// Line 282: range 000000000CE437A4-000000000CE4394D
void __cdecl t_announce_config::t_announce_config(t_announce_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->end_time);
  std::string::basic_string(&this->center_system_text);
  std::string::basic_string(&this->count_down_text);
  std::string::basic_string(&this->dungeon_confirm_text);
  std::string::basic_string(&this->channel_config_str);
  std::string::basic_string(&this->platform_type_list);
  mysqlpp::tiny_int<signed char>::tiny_int(&this->is_center_system_last_5_every_minutes);
  std::string::basic_string(&this->server_version);
  mysqlpp::tiny_int<signed char>::tiny_int(&this->enable);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_announce_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 282: range 000000000D3B9BAA-000000000D3B9F83
void __cdecl t_announce_config::t_announce_config(t_announce_config *const this, t_announce_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
  mysqlpp::sql_int_unsigned center_system_frequency; // ecx
  mysqlpp::sql_int_unsigned count_down_frequency; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::basic_string(&this->begin_time, &a2->begin_time);
  std::string::basic_string(&this->end_time, &a2->end_time);
  std::string::basic_string(&this->center_system_text, &a2->center_system_text);
  std::string::basic_string(&this->count_down_text, &a2->count_down_text);
  std::string::basic_string(&this->dungeon_confirm_text, &a2->dungeon_confirm_text);
  if ( *(_BYTE *)(((unsigned __int64)&a2->center_system_frequency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->center_system_frequency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->center_system_frequency);
  }
  center_system_frequency = a2->center_system_frequency;
  if ( *(_BYTE *)(((unsigned __int64)&this->center_system_frequency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_system_frequency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->center_system_frequency);
  }
  this->center_system_frequency = center_system_frequency;
  if ( *(_BYTE *)(((unsigned __int64)&a2->count_down_frequency >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->count_down_frequency >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->count_down_frequency);
  }
  count_down_frequency = a2->count_down_frequency;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_frequency >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_frequency >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count_down_frequency);
  }
  this->count_down_frequency = count_down_frequency;
  std::string::basic_string(&this->channel_config_str, &a2->channel_config_str);
  std::string::basic_string(&this->platform_type_list, &a2->platform_type_list);
  if ( *(char *)(((unsigned __int64)&this->is_center_system_last_5_every_minutes >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_center_system_last_5_every_minutes);
  if ( *(char *)(((unsigned __int64)&a2->is_center_system_last_5_every_minutes >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_center_system_last_5_every_minutes);
  this->is_center_system_last_5_every_minutes.value_ = a2->is_center_system_last_5_every_minutes.value_;
  std::string::basic_string(&this->server_version, &a2->server_version);
  if ( *(char *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable);
  if ( *(char *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable);
  this->enable.value_ = a2->enable.value_;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 282: range 000000000D0EE59C-000000000D0EE632
void __cdecl t_announce_config::~t_announce_config(t_announce_config *const this)
{
  std::string::~string(&this->server_version);
  std::string::~string(&this->platform_type_list);
  std::string::~string(&this->channel_config_str);
  std::string::~string(&this->dungeon_confirm_text);
  std::string::~string(&this->count_down_text);
  std::string::~string(&this->center_system_text);
  std::string::~string(&this->end_time);
  std::string::~string(&this->begin_time);
};

// Line 299: range 000000000CD9B63C-000000000CD9DD90
int32_t __cdecl DbLocalConfigMgr::loadAnnounceConfig(
        DbLocalConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  time_t Now; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  std::logic_error *exception; // rdi
  mysqlpp::sql_int_unsigned id; // ecx
  int TimeByStr; // edi
  int v15; // esi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::remove_reference<const std::string&>::type *v19; // rsi
  std::remove_reference<const std::string&>::type *v20; // rax
  std::remove_reference<const std::string&>::type *v21; // rax
  mysqlpp::sql_int_unsigned count_down_frequency; // ecx
  mysqlpp::sql_int_unsigned center_system_frequency; // ecx
  bool v24; // r15
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // r15d
  unsigned __int64 v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  _BOOL4 v31; // r15d
  bool v32; // al
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  const Json::Value *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  _BOOL4 v38; // r15d
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  int v45; // r15d
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  const Json::Value_0 *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  Json::Value *v51; // rax
  int v52; // edx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  int v55; // edx
  unsigned __int64 v56; // rax
  bool v57; // dl
  bool v58; // cl
  data::AnnounceConfig *v59; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false>,bool> v60; // rax
  common::milog::MiLogStream *v61; // rcx
  int v62; // edx
  int v63; // r15d
  std::vector<t_announce_config>::size_type v64; // rdx
  unsigned __int64 v65; // rax
  unsigned int i; // [rsp+2Ch] [rbp-B74h]
  std::vector<t_announce_config> *__for_range; // [rsp+30h] [rbp-B70h]
  __gnu_cxx::__normal_iterator<t_announce_config*,std::vector<t_announce_config> >::reference row; // [rsp+38h] [rbp-B68h]
  std::set<unsigned int> *sub_channel_set; // [rsp+40h] [rbp-B60h]
  char v72[2896]; // [rsp+50h] [rbp-B50h] BYREF

  v3 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2848LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "30 32 1 9 <unknown> 48 4 14 channel_id:369 64 4 9 <unknown> 80 8 15 __for_begin:321 112 8 13 __f"
                        "or_end:321 144 16 8 iter:354 176 16 9 <unknown> 208 16 9 <unknown> 240 24 11 row_vec:314 304 32 "
                        "9 <unknown> 368 32 11 now_str:307 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 3"
                        "2 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 11 key_str:368 880 32 9 <unknown> 944"
                        " 32 9 <unknown> 1008 32 9 <unknown> 1072 32 9 <unknown> 1136 32 9 <unknown> 1200 32 9 <unknown> "
                        "1264 40 8 jval:347 1344 40 12 json_key:356 1424 40 14 json_value:357 1504 272 10 config:323 1840"
                        " 272 10 reader:348 2176 544 18 query_announce:306";
  *(_QWORD *)(v3 + 16) = DbLocalConfigMgr::loadAnnounceConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862748] = -219021312;
  v5[536862749] = 62194;
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862752] = -219021312;
  v5[536862753] = 62194;
  v5[536862754] = -219021312;
  v5[536862755] = 62194;
  v5[536862756] = -219021312;
  v5[536862757] = 62194;
  v5[536862758] = -219021312;
  v5[536862759] = 62194;
  v5[536862760] = -234881024;
  v5[536862761] = -218959118;
  v5[536862763] = -218959360;
  v5[536862764] = 62194;
  v5[536862765] = -234881024;
  v5[536862766] = -218959118;
  v5[536862775] = -219021312;
  v5[536862776] = -218959118;
  v5[536862777] = 62194;
  v5[536862786] = -218959118;
  v5[536862787] = -218959118;
  v5[536862805] = -202116109;
  v5[536862806] = -202116109;
  v5[536862807] = -202116109;
  v5[536862808] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_local_config_mgr.cpp",
      "loadAnnounceConfig",
      302);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v3 + 304),
      (const char (*)[20])"conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 2176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 2719) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 2719) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 2176, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 2176), v6, "select ");
    Now = common::tools::TimeUtils::getNow();
    if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
    {
      Now = 32LL;
      __asan_report_store_n(v3 + 368, 32LL);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 368), Now);
    v8 = std::operator<<<std::char_traits<char>>(
           v3 + 2176,
           "`id`, `begin_time`, `end_time`, `center_system_text`, `count_down_text`, `dungeon_confirm_text`, `count_down_"
           "frequency`, `center_system_frequency`, `channel_config_str`, ");
    v9 = std::operator<<<std::char_traits<char>>(
           v8,
           " `platform_type_list`, `is_center_system_last_5_every_minutes`,`server_version`");
    v10 = std::operator<<<std::char_traits<char>>(v9, " from `t_announce_config` where enable=1 and end_time>'");
    v11 = std::operator<<<char>(v10, v3 + 368);
    std::operator<<<std::char_traits<char>>(v11, "'");
    std::vector<t_announce_config>::vector((std::vector<t_announce_config> *const)(v3 + 240));
    mysqlpp::Query::storein<std::vector<t_announce_config>>(
      (mysqlpp::Query *const)(v3 + 2176),
      (std::vector<t_announce_config> *)(v3 + 240));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 2176)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<t_announce_config> *)(v3 + 240);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<t_announce_config>::iterator *)(v3 + 80) = std::vector<t_announce_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<t_announce_config>::iterator *)(v3 + 112) = std::vector<t_announce_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<t_announce_config *,std::vector<t_announce_config>>(
              (const __gnu_cxx::__normal_iterator<t_announce_config*,std::vector<t_announce_config> > *)(v3 + 80),
              (const __gnu_cxx::__normal_iterator<t_announce_config*,std::vector<t_announce_config> > *)(v3 + 112)) )
    {
      row = __gnu_cxx::__normal_iterator<t_announce_config *,std::vector<t_announce_config>>::operator*((const __gnu_cxx::__normal_iterator<t_announce_config*,std::vector<t_announce_config> > *const)(v3 + 80));
      __asan_unpoison_stack_memory(v3 + 1504, 272LL);
      data::AnnounceConfig::AnnounceConfig((data::AnnounceConfig *const)(v3 + 1504));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      id = row->id;
      if ( *(_BYTE *)(((v3 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 1504);
      *(_DWORD *)(v3 + 1504) = id;
      TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->begin_time);
      if ( *(_BYTE *)(((v3 + 1508) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 32 + 4) & 7) + 3) >= *(_BYTE *)(((v3 + 1508) >> 3) + 0x7FFF8000) )
      {
        TimeByStr = v3 + 1508;
        __asan_report_store4(v3 + 1508);
      }
      *(_DWORD *)(v3 + 1508) = TimeByStr;
      v15 = common::tools::TimeUtils::getTimeByStr(&row->end_time);
      if ( *(_BYTE *)(((v3 + 1512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 1512);
      *(_DWORD *)(v3 + 1512) = v15;
      if ( *(_BYTE *)(((v3 + 1508) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 32 + 4) & 7) + 3) >= *(_BYTE *)(((v3 + 1508) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3 + 1508);
      }
      if ( !*(_DWORD *)(v3 + 1508) || !*(_DWORD *)(v3 + 1512) )
      {
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 432, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "loadAnnounceConfig",
          329);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[16])" invalid_time: ");
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &row->begin_time);
        v18 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v17, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &row->end_time);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      }
      v19 = std::move<std::string const&>(&row->center_system_text);
      std::string::operator=(v3 + 1520, v19);
      v20 = std::move<std::string const&>(&row->count_down_text);
      std::string::operator=(v3 + 1552, v20);
      v21 = std::move<std::string const&>(&row->dungeon_confirm_text);
      std::string::operator=(v3 + 1584, v21);
      if ( *(_BYTE *)(((unsigned __int64)&row->count_down_frequency >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->count_down_frequency >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&row->count_down_frequency);
      }
      count_down_frequency = row->count_down_frequency;
      if ( *(_BYTE *)(((v3 + 1668) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 124) & 7) + 3) >= *(_BYTE *)(((v3 + 1668) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 1668);
      }
      *(_DWORD *)(v3 + 1668) = count_down_frequency;
      if ( *(_BYTE *)(((unsigned __int64)&row->center_system_frequency >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->center_system_frequency >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->center_system_frequency);
      }
      center_system_frequency = row->center_system_frequency;
      if ( *(_BYTE *)(((v3 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1664) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 1664);
      *(_DWORD *)(v3 + 1664) = center_system_frequency;
      std::string::operator=(v3 + 1632, &row->server_version);
      if ( (unsigned __int8)std::string::empty(&row->platform_type_list) == 1 )
        goto LABEL_128;
      *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 496),
        ",",
        (const std::allocator<char> *)(v3 + 32));
      v24 = common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
              &row->platform_type_list,
              (const std::string *)(v3 + 496),
              (std::set<unsigned int> *)(v3 + 1720),
              1) != 0;
      std::string::~string((void *)(v3 + 496));
      *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 32);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v24 )
      {
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "loadAnnounceConfig",
          341);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 560),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                v25,
                (const char (*)[39])"splitToSet platform_type_list failed: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 1504));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v27 = 0;
      }
      else
      {
LABEL_128:
        if ( (unsigned __int8)std::string::empty(&row->channel_config_str) == 1 )
          goto LABEL_99;
        v28 = ((v3 + 1264) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_BYTE *)(v28 + 4) = 0;
        Json::Value::Value(v3 + 1264, 0LL);
        __asan_unpoison_stack_memory(v3 + 1840, 272LL);
        Json::Reader::Reader((Json::Reader *)(v3 + 1840));
        if ( !Json::Reader::parse(
                (Json::Reader *const)(v3 + 1840),
                &row->channel_config_str,
                (Json::Value *)(v3 + 1264),
                1) )
        {
          *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 624, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 624),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_local_config_mgr.cpp",
            "loadAnnounceConfig",
            351);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 624),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v29,
                  (const char (*)[19])"parse json failed:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, &row->channel_config_str);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
          *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v31 = 0;
        }
        else
        {
          *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
          *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
          if ( *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v3 + 176);
          Json::Value::begin((Json::Value_0 *const)(v3 + 1264));
          Json::ValueConstIterator::ValueConstIterator(
            (Json::ValueConstIterator *const)(v3 + 144),
            (const Json::ValueIterator *)(v3 + 176));
          *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -1800;
          while ( 1 )
          {
            *(_WORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
            if ( *(_WORD *)(((v3 + 208) >> 3) + 0x7FFF8000) )
              __asan_report_store16(v3 + 208);
            Json::Value::end((Json::Value_0 *const)(v3 + 1264));
            v32 = Json::ValueIteratorBase::operator!=(
                    (const Json::ValueIteratorBase *const)(v3 + 144),
                    (const Json::ValueIteratorBase::SelfType *)(v3 + 208));
            *(_WORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -1800;
            if ( !v32 )
              break;
            v33 = ((v3 + 1344) >> 3) + 2147450880;
            *(_DWORD *)v33 = 0;
            *(_BYTE *)(v33 + 4) = 0;
            if ( *(char *)(((v3 + 1344) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1383) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 103) & 7) >= *(_BYTE *)(((v3 + 1383) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1344, 40LL);
            }
            Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 1344));
            v34 = ((v3 + 1424) >> 3) + 2147450880;
            *(_DWORD *)v34 = 0;
            *(_BYTE *)(v34 + 4) = 0;
            v35 = Json::ValueConstIterator::operator*((const Json::ValueConstIterator *const)(v3 + 144));
            Json::Value::Value((Json::Value *)(v3 + 1424), v35);
            if ( !Json::Value::isString((const Json::Value_0 *const)(v3 + 1344)) )
            {
              *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 688, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 688),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/db_data_manual/db_local_config_mgr.cpp",
                "loadAnnounceConfig",
                360);
              v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 688),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v37 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v36,
                      (const char (*)[29])"json_key is not string, str:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, &row->channel_config_str);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
              *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v38 = 0;
            }
            else if ( !Json::Value::isArray((const Json::Value_0 *const)(v3 + 1424)) )
            {
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 752, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 752),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/db_data_manual/db_local_config_mgr.cpp",
                "loadAnnounceConfig",
                365);
              v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 752),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v40 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      v39,
                      (const char (*)[30])"json_value is not array, str:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, &row->channel_config_str);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v38 = 0;
            }
            else
            {
              *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 816) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 816, 32LL);
              }
              Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 816), (Json::Value_0 *)(v3 + 1344));
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 48);
              *(_DWORD *)(v3 + 48) = 0;
              if ( common::tools::StringUtils::strToNum<unsigned int>(
                     (const std::string *)(v3 + 816),
                     (unsigned int *)(v3 + 48),
                     1) )
              {
                *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 880) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 880, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 880),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_local_config_mgr.cpp",
                  "loadAnnounceConfig",
                  372);
                v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 880),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v42 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v41,
                        (const char (*)[11])"parse key:");
                v43 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v42,
                        (const std::string *)(v3 + 816));
                v44 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v43,
                        (const char (*)[12])" fail, str:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, &row->channel_config_str);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 880));
                *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v45 = 0;
              }
              else
              {
                sub_channel_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                                    (std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 1672),
                                    (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
                if ( !std::set<unsigned int>::empty(sub_channel_set) )
                {
                  *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 944) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 944, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 944),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/db_data_manual/db_local_config_mgr.cpp",
                    "loadAnnounceConfig",
                    378);
                  v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 944),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v47 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          v46,
                          (const char (*)[24])"channel id duplicated: ");
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v47,
                    (const std::string *)(v3 + 816));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 944));
                  *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v45 = 0;
                }
                else
                {
                  for ( i = 0; ; ++i )
                  {
                    if ( Json::Value::size((const Json::Value_0 *const)(v3 + 1424)) <= i )
                    {
                      v45 = 1;
                      goto LABEL_91;
                    }
                    v48 = (const Json::Value_0 *)Json::Value::operator[](v3 + 1424, i);
                    if ( !Json::Value::isUInt(v48) )
                      break;
                    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
                    v51 = (Json::Value *)Json::Value::operator[](v3 + 1424, i);
                    v52 = Json::Value::asUInt(v51);
                    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v3 + 64);
                    }
                    *(_DWORD *)(v3 + 64) = v52;
                    std::set<unsigned int>::insert(sub_channel_set, (std::set<unsigned int>::value_type *)(v3 + 64));
                    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                  }
                  *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 1008) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 1008, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 1008),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/db_data_manual/db_local_config_mgr.cpp",
                    "loadAnnounceConfig",
                    386);
                  v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1008),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v50 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          v49,
                          (const char (*)[33])"sub_channel_id is not uint, str:");
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v50, &row->channel_config_str);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1008));
                  *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v45 = 0;
                }
              }
LABEL_91:
              std::string::~string((void *)(v3 + 816));
              v38 = v45 == 1;
            }
            Json::Value::~Value((Json::Value_0 *const)(v3 + 1424));
            Json::Value::~Value((Json::Value_0 *const)(v3 + 1344));
            v53 = ((v3 + 1344) >> 3) + 2147450880;
            *(_DWORD *)v53 = -117901064;
            *(_BYTE *)(v53 + 4) = -8;
            v54 = ((v3 + 1424) >> 3) + 2147450880;
            *(_DWORD *)v54 = -117901064;
            *(_BYTE *)(v54 + 4) = -8;
            *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
            if ( !v38 )
            {
              v55 = 0;
              goto LABEL_96;
            }
            Json::ValueConstIterator::operator++((Json::ValueConstIterator *const)(v3 + 144));
          }
          v55 = 1;
LABEL_96:
          *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -1800;
          v31 = v55 == 1;
        }
        Json::Reader::~Reader((Json::Reader *const)(v3 + 1840));
        Json::Value::~Value((Json::Value_0 *const)(v3 + 1264));
        v56 = ((v3 + 1264) >> 3) + 2147450880;
        *(_DWORD *)v56 = -117901064;
        *(_BYTE *)(v56 + 4) = -8;
        __asan_poison_stack_memory(v3 + 1840, 272LL);
        if ( v31 )
        {
LABEL_99:
          v57 = mysqlpp::tiny_int<signed char>::operator bool(&row->is_center_system_last_5_every_minutes);
          if ( *(char *)(((v3 + 1768) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v3 + 1768);
          *(_BYTE *)(v3 + 1768) = v57;
          v58 = mysqlpp::tiny_int<signed char>::operator bool(&row->enable);
          if ( *(_BYTE *)(((v3 + 1769) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 9) & 7) >= *(_BYTE *)(((v3 + 1769) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(v3 + 1769);
          }
          *(_BYTE *)(v3 + 1769) = v58;
          v60 = std::unordered_map<unsigned int,data::AnnounceConfig>::emplace<unsigned int &,data::AnnounceConfig&>(
                  &this->announce_config_map,
                  (unsigned int *)(v3 + 1504),
                  (data::AnnounceConfig *)(v3 + 1504),
                  (unsigned int *)&this->announce_config_map,
                  v59);
          if ( !v60.second )
          {
            *(_DWORD *)(((v3 + 1072) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1072) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1103) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1103) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1072, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1072),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_local_config_mgr.cpp",
              "loadAnnounceConfig",
              398);
            v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1072),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            if ( *(_BYTE *)(((v3 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1504) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 1504);
            common::milog::MiLogStream::operator()(v61, aConfigIdU_0, *(unsigned int *)(v3 + 1504));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1072));
            *(_DWORD *)(((v3 + 1072) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v27 = 0;
          }
          else
          {
            v27 = 1;
          }
        }
        else
        {
          v27 = 0;
        }
      }
      data::AnnounceConfig::~AnnounceConfig((data::AnnounceConfig *const)(v3 + 1504));
      __asan_poison_stack_memory(v3 + 1504, 272LL);
      if ( v27 != 1 )
      {
        v62 = 0;
        goto LABEL_114;
      }
      __gnu_cxx::__normal_iterator<t_announce_config *,std::vector<t_announce_config>>::operator++((__gnu_cxx::__normal_iterator<t_announce_config*,std::vector<t_announce_config> > *const)(v3 + 80));
    }
    v62 = 1;
LABEL_114:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    if ( v62 == 1 )
    {
      *(_DWORD *)(((v3 + 1136) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1136) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1167) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1167) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1136, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1136),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "loadAnnounceConfig",
        402);
      v64 = std::vector<t_announce_config>::size((const std::vector<t_announce_config> *const)(v3 + 240));
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 1136),
        "load %lu config from t_announce_config",
        v64);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1136));
      *(_DWORD *)(((v3 + 1136) >> 3) + 0x7FFF8000) = -117901064;
      v63 = 1;
    }
    else
    {
      v63 = 0;
    }
    std::vector<t_announce_config>::~vector((std::vector<t_announce_config> *const)(v3 + 240));
    v65 = ((v3 + 240) >> 3) + 2147450880;
    *(_WORD *)v65 = -1800;
    *(_BYTE *)(v65 + 2) = -8;
    if ( v63 == 1 )
      v2 = 0;
    std::string::~string((void *)(v3 + 368));
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 2176));
  }
  if ( v72 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8108) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 272) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8154) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF815C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2848LL, v72);
  }
  return v2;
};

// Line 314: range 000000000CF0DDCA-000000000CF0EF61
void __cdecl populate_t_login_reward_config<(mysqlpp::sql_dummy_type)0>(
        t_login_reward_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // rax
  unsigned int v8; // ecx
  const mysqlpp::String *v9; // r15
  const mysqlpp::String *v10; // rax
  unsigned int v11; // edx
  const mysqlpp::String *v12; // r15
  const mysqlpp::String *v13; // r15
  const mysqlpp::String *v14; // r15
  const mysqlpp::String *v15; // r15
  const mysqlpp::String *v16; // r15
  const mysqlpp::String *v17; // r15
  const mysqlpp::String *v18; // r15
  const mysqlpp::String *v19; // r15
  const mysqlpp::String *v20; // rax
  unsigned int v21; // edx
  std::string v22; // [rsp+0h] [rbp-530h]
  std::string v23; // [rsp+0h] [rbp-530h]
  std::string v24; // [rsp+0h] [rbp-530h]
  std::string v25; // [rsp+0h] [rbp-530h]
  std::string v26; // [rsp+0h] [rbp-530h]
  std::string v27; // [rsp+0h] [rbp-530h]
  std::string v28; // [rsp+0h] [rbp-530h]
  std::string v29; // [rsp+0h] [rbp-530h]
  std::string v30; // [rsp+0h] [rbp-530h]
  mysqlpp::String *v31; // [rsp+8h] [rbp-528h]
  mysqlpp::Row *rowa; // [rsp+10h] [rbp-520h]
  t_login_reward_config *sa; // [rsp+18h] [rbp-518h]
  char v34[1296]; // [rsp+20h] [rbp-510h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)s;
  v22._anon_0._M_allocated_capacity = (std::string::size_type)row;
  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1248LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "20 48 1 9 <unknown> 64 16 28 ignore_schema_mismatches:198 96 32 9 <unknown> 160 32 9 <unknown> 2"
                        "24 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 54"
                        "4 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864"
                        " 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 11"
                        "84 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = populate_t_login_reward_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959118;
  v4[536862758] = -202116109;
  mysqlpp::NoExceptions::NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64), row);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(s);
  }
  s->config_id = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v8 = mysqlpp::String::conv<unsigned int>(v7, 0);
  if ( *(_BYTE *)(((unsigned __int64)&s->config_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)s + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&s->config_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&s->config_type);
  }
  s->config_type = v8;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  std::string::basic_string(v2 + 96);
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 160, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 160), v9, v22);
  std::string::operator=(*(&v23._anon_0._M_allocated_capacity + 1) + 8, v2 + 160);
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v23._anon_0._M_allocated_capacity);
  v11 = mysqlpp::String::conv<unsigned int>(v10, 0);
  if ( *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(*(&v23._anon_0._M_allocated_capacity + 1) + 40);
  }
  *(_DWORD *)(*(&v23._anon_0._M_allocated_capacity + 1) + 40) = v11;
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  v12 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v23._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 224);
  if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 288, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 288), v12, v23);
  std::string::operator=(*(&v24._anon_0._M_allocated_capacity + 1) + 48, v2 + 288);
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  v13 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v24._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 352);
  if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 416, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 416), v13, v24);
  std::string::operator=(*(&v25._anon_0._M_allocated_capacity + 1) + 80, v2 + 416);
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
  v14 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v25._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 480);
  if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 544, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 544), v14, v25);
  std::string::operator=(*(&v26._anon_0._M_allocated_capacity + 1) + 112, v2 + 544);
  std::string::~string((void *)(v2 + 544));
  *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 480));
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
  v15 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v26._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 608);
  if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 672, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 672), v15, v26);
  std::string::operator=(*(&v27._anon_0._M_allocated_capacity + 1) + 144, v2 + 672);
  std::string::~string((void *)(v2 + 672));
  *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 608));
  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
  v16 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v27._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 736);
  if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 800, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 800), v16, v27);
  std::string::operator=(*(&v28._anon_0._M_allocated_capacity + 1) + 176, v2 + 800);
  std::string::~string((void *)(v2 + 800));
  *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 736));
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
  v17 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v28._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 864);
  if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 928, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 928), v17, v28);
  std::string::operator=(*(&v29._anon_0._M_allocated_capacity + 1) + 208, v2 + 928);
  std::string::~string((void *)(v2 + 928));
  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 864));
  *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
  v18 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v29._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 992);
  if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 1056, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 1056), v18, v29);
  std::string::operator=(*(&v30._anon_0._M_allocated_capacity + 1) + 240, v2 + 1056);
  std::string::~string((void *)(v2 + 1056));
  *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 992));
  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
  v19 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v30._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 1120);
  if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 1184, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 1184), v19, v30);
  std::string::operator=(&sa->tag, v2 + 1184);
  std::string::~string((void *)(v2 + 1184));
  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 1120));
  *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
  v20 = (const mysqlpp::String *)mysqlpp::Row::operator[](rowa);
  v21 = mysqlpp::String::conv<unsigned int>(v20, 0);
  if ( *(_BYTE *)(((unsigned __int64)&sa->importance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&sa->importance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&sa->importance);
  }
  sa->importance = v21;
  v31 = (mysqlpp::String *)mysqlpp::Row::operator[](rowa);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  mysqlpp::tiny_int<signed char>::tiny_int((mysqlpp::tiny_int<signed char> *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&sa->is_collectible >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)sa + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&sa->is_collectible >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&sa->is_collectible);
  }
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 48);
  sa->is_collectible = mysqlpp::String::conv<mysqlpp::tiny_int<signed char>>(
                         v31,
                         *(mysqlpp::tiny_int<signed char> *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64));
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 156) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1248LL, v34);
  }
};

// Line 413: range 000000000CF10F40-000000000CF11C64
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_questionnaire_mail_config<(mysqlpp::sql_dummy_type)0>(
        t_questionnaire_mail_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // rax
  unsigned int v8; // ecx
  const mysqlpp::String *v9; // r14
  const mysqlpp::String *v10; // r14
  const mysqlpp::String *v11; // r14
  const mysqlpp::String *v12; // r14
  const mysqlpp::String *v13; // r14
  const mysqlpp::String *v14; // r14
  const mysqlpp::String *v15; // r14
  std::string rowa; // [rsp+0h] [rbp-400h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "15 32 16 28 ignore_schema_mismatches:413 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <un"
                              "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 "
                              "9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 83"
                              "2 32 9 <unknown> 896 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_questionnaire_mail_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length);
  }
  *(_DWORD *)rowa._M_string_length = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v8 = mysqlpp::String::conv<unsigned int>(v7, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) + 4) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 4) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 4);
  }
  *(_DWORD *)(rowa._M_string_length + 4) = v8;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v9, rowa);
  std::string::operator=(rowa._M_string_length + 8, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v10, rowa);
  std::string::operator=(rowa._M_string_length + 40, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = 0;
  v11 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 320);
  if ( *(char *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 384, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 384), v11, rowa);
  std::string::operator=(rowa._M_string_length + 72, p_anon_0 + 384);
  std::string::~string((void *)(p_anon_0 + 384));
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 320));
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = 0;
  v12 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 448);
  if ( *(char *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 512, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 512), v12, rowa);
  std::string::operator=(rowa._M_string_length + 104, p_anon_0 + 512);
  std::string::~string((void *)(p_anon_0 + 512));
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 448));
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) = 0;
  v13 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 576);
  if ( *(char *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 671) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 671) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 640, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 640), v13, rowa);
  std::string::operator=(rowa._M_string_length + 136, p_anon_0 + 640);
  std::string::~string((void *)(p_anon_0 + 640));
  *(_DWORD *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 576));
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) = 0;
  v14 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 704) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 704);
  if ( *(char *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 768, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 768), v14, rowa);
  std::string::operator=(rowa._M_string_length + 168, p_anon_0 + 768);
  std::string::~string((void *)(p_anon_0 + 768));
  *(_DWORD *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 704));
  *(_DWORD *)(((p_anon_0 + 704) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) = 0;
  v15 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 832) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 832);
  if ( *(char *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 927) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 927) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 896, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 896), v15, rowa);
  std::string::operator=(rowa._M_string_length + 200, p_anon_0 + 896);
  std::string::~string((void *)(p_anon_0 + 896));
  *(_DWORD *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 832));
  *(_DWORD *)(((p_anon_0 + 832) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 413: range 000000000CE43D70-000000000CE43ED1
void __cdecl t_questionnaire_mail_config::t_questionnaire_mail_config(
        t_questionnaire_mail_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->email_title);
  std::string::basic_string(&this->email_sender);
  std::string::basic_string(&this->email_content);
  std::string::basic_string(&this->item_list);
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->end_time);
  std::string::basic_string(&this->tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_questionnaire_mail_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 413: range 000000000D3BA7C6-000000000D3BA9F8
void __cdecl t_questionnaire_mail_config::t_questionnaire_mail_config(
        t_questionnaire_mail_config *const this,
        t_questionnaire_mail_config *a2)
{
  mysqlpp::sql_int_unsigned config_id; // ecx
  mysqlpp::sql_int_unsigned email_valid_days; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->email_valid_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->email_valid_days);
  }
  email_valid_days = a2->email_valid_days;
  if ( *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->email_valid_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->email_valid_days);
  }
  this->email_valid_days = email_valid_days;
  std::string::basic_string(&this->email_title, &a2->email_title);
  std::string::basic_string(&this->email_sender, &a2->email_sender);
  std::string::basic_string(&this->email_content, &a2->email_content);
  std::string::basic_string(&this->item_list, &a2->item_list);
  std::string::basic_string(&this->begin_time, &a2->begin_time);
  std::string::basic_string(&this->end_time, &a2->end_time);
  std::string::basic_string(&this->tag, &a2->tag);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 413: range 000000000D0EEF18-000000000D0EEF9C
void __cdecl t_questionnaire_mail_config::~t_questionnaire_mail_config(t_questionnaire_mail_config *const this)
{
  std::string::~string(&this->tag);
  std::string::~string(&this->end_time);
  std::string::~string(&this->begin_time);
  std::string::~string(&this->item_list);
  std::string::~string(&this->email_content);
  std::string::~string(&this->email_sender);
  std::string::~string(&this->email_title);
};

// Line 425: range 000000000CD9DD92-000000000CD9EFFB
int32_t __cdecl DbLocalConfigMgr::loadDbQuestionnaireMailConfig(
        DbLocalConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  time_t Now; // rsi
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  std::logic_error *exception; // rdi
  unsigned __int64 v14; // rax
  mysqlpp::sql_int_unsigned config_id; // ecx
  mysqlpp::sql_int_unsigned email_valid_days; // ecx
  int TimeByStr; // esi
  int v18; // edi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rcx
  int v24; // r15d
  unsigned __int64 v25; // rax
  int v26; // edx
  int v27; // r15d
  std::vector<t_questionnaire_mail_config>::size_type v28; // rdx
  data::DbQuestionnaireMailConfig *M_current; // r15
  data::DbQuestionnaireMailConfig *v30; // rdi
  DbLocalConfigMgr::loadDbQuestionnaireMailConfig::<lambda(const auto:40&, const auto:41&)> v31; // dl
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  std::vector<t_questionnaire_mail_config> *__for_range; // [rsp+28h] [rbp-688h]
  __gnu_cxx::__normal_iterator<t_questionnaire_mail_config*,std::vector<t_questionnaire_mail_config> >::reference row; // [rsp+30h] [rbp-680h]
  char v39[1648]; // [rsp+40h] [rbp-670h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1600LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 8 15 __for_begin:452 64 8 13 __for_end:452 96 24 11 row_vec:443 160 32 9 <unknown> 224 32 "
                        "11 now_str:434 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 4"
                        "8 17 config_id_set:450 624 240 10 config:454 928 544 9 query:435";
  *(_QWORD *)(v3 + 16) = DbLocalConfigMgr::loadDbQuestionnaireMailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862747] = -218959118;
  v5[536862748] = -218959118;
  v5[536862766] = -202116109;
  v5[536862767] = -202116109;
  v5[536862768] = -202116109;
  v5[536862769] = -202116109;
  std::vector<data::DbQuestionnaireMailConfig>::clear(&this->questionnaire_mail_config_vec);
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_local_config_mgr.cpp",
      "loadDbQuestionnaireMailConfig",
      430);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator()(v6, "conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    v2 = -1;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      Now = 32LL;
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 224), Now);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 928, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 928), v8, "select ");
    v9 = std::operator<<<std::char_traits<char>>(v3 + 928, "config_id, email_valid_days, email_title, email_sender,");
    v10 = std::operator<<<std::char_traits<char>>(v9, "email_content, item_list, begin_time, end_time, tag");
    v11 = std::operator<<<std::char_traits<char>>(
            v10,
            " from t_questionnaire_mail_config where enabled=1 and end_time>'");
    v12 = std::operator<<<char>(v11, v3 + 224);
    std::operator<<<std::char_traits<char>>(v12, "'");
    std::vector<t_questionnaire_mail_config>::vector((std::vector<t_questionnaire_mail_config> *const)(v3 + 96));
    mysqlpp::Query::storein<std::vector<t_questionnaire_mail_config>>(
      (mysqlpp::Query *const)(v3 + 928),
      (std::vector<t_questionnaire_mail_config> *)(v3 + 96));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 928)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 544));
    __for_range = (std::vector<t_questionnaire_mail_config> *)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<t_questionnaire_mail_config>::iterator *)(v3 + 32) = std::vector<t_questionnaire_mail_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<t_questionnaire_mail_config>::iterator *)(v3 + 64) = std::vector<t_questionnaire_mail_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<t_questionnaire_mail_config *,std::vector<t_questionnaire_mail_config>>(
              (const __gnu_cxx::__normal_iterator<t_questionnaire_mail_config*,std::vector<t_questionnaire_mail_config> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<t_questionnaire_mail_config*,std::vector<t_questionnaire_mail_config> > *)(v3 + 64)) )
    {
      row = __gnu_cxx::__normal_iterator<t_questionnaire_mail_config *,std::vector<t_questionnaire_mail_config>>::operator*((const __gnu_cxx::__normal_iterator<t_questionnaire_mail_config*,std::vector<t_questionnaire_mail_config> > *const)(v3 + 32));
      v14 = ((v3 + 624) >> 3) + 2147450880;
      *(_DWORD *)v14 = 0;
      *(_DWORD *)(v14 + 4) = 0;
      *(_DWORD *)(v14 + 8) = 0;
      *(_DWORD *)(v14 + 12) = 0;
      *(_DWORD *)(v14 + 16) = 0;
      *(_DWORD *)(v14 + 20) = 0;
      *(_DWORD *)(v14 + 24) = 0;
      *(_WORD *)(v14 + 28) = 0;
      data::DbQuestionnaireMailConfig::DbQuestionnaireMailConfig((data::DbQuestionnaireMailConfig *const)(v3 + 624));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      config_id = row->config_id;
      if ( *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 624);
      *(_DWORD *)(v3 + 624) = config_id;
      if ( *(_BYTE *)(((unsigned __int64)&row->email_valid_days >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->email_valid_days >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->email_valid_days);
      }
      email_valid_days = row->email_valid_days;
      if ( *(_BYTE *)(((v3 + 628) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 116) & 7) + 3) >= *(_BYTE *)(((v3 + 628) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 628);
      }
      *(_DWORD *)(v3 + 628) = email_valid_days;
      std::string::operator=(v3 + 632, &row->email_title);
      std::string::operator=(v3 + 664, &row->email_sender);
      std::string::operator=(v3 + 696, &row->email_content);
      std::string::operator=(v3 + 728, &row->item_list);
      TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->begin_time);
      if ( *(_BYTE *)(((v3 + 760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 760) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 760);
      *(_DWORD *)(v3 + 760) = TimeByStr;
      v18 = common::tools::TimeUtils::getTimeByStr(&row->end_time);
      if ( *(_BYTE *)(((v3 + 764) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 4) & 7) + 3) >= *(_BYTE *)(((v3 + 764) >> 3) + 0x7FFF8000) )
      {
        v18 = v3 + 764;
        __asan_report_store4(v3 + 764);
      }
      *(_DWORD *)(v3 + 764) = v18;
      if ( *(_BYTE *)(((v3 + 760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 760) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 760);
      if ( !*(_DWORD *)(v3 + 760) || !*(_DWORD *)(v3 + 764) )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "loadDbQuestionnaireMailConfig",
          466);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])" invalid_time: ");
        v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &row->begin_time);
        v21 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v20, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &row->end_time);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::string::operator=(v3 + 832, &row->tag);
      v22 = std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v3 + 544),
              (const std::set<unsigned int>::value_type *)(v3 + 624));
      if ( !v22.second )
      {
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "loadDbQuestionnaireMailConfig",
          473);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 624);
        common::milog::MiLogStream::operator()(v23, aConfigIdU_0, *(unsigned int *)(v3 + 624));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v24 = 0;
      }
      else
      {
        std::vector<data::DbQuestionnaireMailConfig>::push_back(
          &this->questionnaire_mail_config_vec,
          (const std::vector<data::DbQuestionnaireMailConfig>::value_type *)(v3 + 624));
        v24 = 1;
      }
      data::DbQuestionnaireMailConfig::~DbQuestionnaireMailConfig((data::DbQuestionnaireMailConfig *const)(v3 + 624));
      v25 = ((v3 + 624) >> 3) + 2147450880;
      *(_DWORD *)v25 = -117901064;
      *(_DWORD *)(v25 + 4) = -117901064;
      *(_DWORD *)(v25 + 8) = -117901064;
      *(_DWORD *)(v25 + 12) = -117901064;
      *(_DWORD *)(v25 + 16) = -117901064;
      *(_DWORD *)(v25 + 20) = -117901064;
      *(_DWORD *)(v25 + 24) = -117901064;
      *(_WORD *)(v25 + 28) = -1800;
      if ( v24 != 1 )
      {
        v26 = 0;
        goto LABEL_50;
      }
      __gnu_cxx::__normal_iterator<t_questionnaire_mail_config *,std::vector<t_questionnaire_mail_config>>::operator++((__gnu_cxx::__normal_iterator<t_questionnaire_mail_config*,std::vector<t_questionnaire_mail_config> > *const)(v3 + 32));
    }
    v26 = 1;
LABEL_50:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v26 == 1 )
    {
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "loadDbQuestionnaireMailConfig",
        479);
      v28 = std::vector<t_questionnaire_mail_config>::size((const std::vector<t_questionnaire_mail_config> *const)(v3 + 96));
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 416),
        "load %lu config from t_questionnaire_mail_config",
        v28);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      M_current = std::vector<data::DbQuestionnaireMailConfig>::end(&this->questionnaire_mail_config_vec)._M_current;
      v30 = std::vector<data::DbQuestionnaireMailConfig>::begin(&this->questionnaire_mail_config_vec)._M_current;
      std::sort___gnu_cxx::__normal_iterator_data::DbQuestionnaireMailConfig__std::vector_data::DbQuestionnaireMailConfig____DbLocalConfigMgr::loadDbQuestionnaireMailConfig_common::midb::MysqlConnPtr__::_lambda_const_auto_40__const_auto_41_____(
        (__gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> >)v30,
        (__gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> >)M_current,
        v31);
      v27 = 1;
    }
    else
    {
      v27 = 0;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 544));
    std::vector<t_questionnaire_mail_config>::~vector((std::vector<t_questionnaire_mail_config> *const)(v3 + 96));
    v32 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v32 = -1800;
    *(_BYTE *)(v32 + 2) = -8;
    v33 = ((v3 + 544) >> 3) + 2147450880;
    *(_DWORD *)v33 = -117901064;
    *(_WORD *)(v33 + 4) = -1800;
    if ( v27 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 928));
    std::string::~string((void *)(v3 + 224));
  }
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862730) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450912 - (((_DWORD)v5 + 2147450920) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1600LL, v39);
  }
  return v2;
};

// Line 482: range 000000000CDE6AE0-000000000CDE6B79
bool __cdecl DbLocalConfigMgr::loadDbQuestionnaireMailConfig::_lambda_const_auto_40___const_auto_41___::operator()_data::DbQuestionnaireMailConfig_data::DbQuestionnaireMailConfig_(
        const DbLocalConfigMgr::loadDbQuestionnaireMailConfig::<lambda(const auto:40&, const auto:41&)> *const __closure,
        const data::DbQuestionnaireMailConfig *lhs,
        const data::DbQuestionnaireMailConfig *rhs)
{
  uint32_t begin_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->begin_time);
  }
  begin_time = lhs->begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->begin_time);
  }
  return begin_time < rhs->begin_time;
};

// Line 496: range 000000000CD9EFFC-000000000CDA0C01
int32_t __cdecl DbLocalConfigMgr::rewriteDbLoginRewardConfig(DbLocalConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::string *v5; // rax
  bool v6; // r15
  common::milog::MiLogStream *v7; // rcx
  _BOOL4 v8; // edx
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rcx
  _BOOL4 v11; // r15d
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  bool v18; // r15
  common::milog::MiLogStream *v19; // rcx
  int v20; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v21; // rax
  int *v22; // rdx
  int v23; // ecx
  common::milog::MiLogStream *v24; // rdi
  __int64 v25; // rcx
  int v26; // edx
  common::milog::MiLogStream *v27; // rcx
  common::milog::MiLogStream *v28; // rcx
  common::milog::MiLogStream *v29; // rcx
  common::milog::MiLogStream *v30; // rcx
  common::milog::MiLogStream *v31; // rcx
  unsigned __int64 v32; // rax
  int v33; // edx
  char *v35; // [rsp+0h] [rbp-570h]
  DbLocalConfigMgr *thisa; // [rsp+8h] [rbp-568h]
  int v37; // [rsp+10h] [rbp-560h]
  int32_t idx; // [rsp+14h] [rbp-55Ch]
  data::DbLoginRewardConfigMap *__for_range; // [rsp+18h] [rbp-558h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> >::reference __in; // [rsp+20h] [rbp-550h]
  unsigned int *config_id; // [rsp+28h] [rbp-548h]
  std::tuple_element<1,std::pair<unsigned int const,data::DbLoginRewardConfig> >::type *config; // [rsp+30h] [rbp-540h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-538h]
  char v44[1328]; // [rsp+40h] [rbp-530h] BYREF

  thisa = this;
  v2 = (unsigned __int64)v44;
  v35 = v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "23 48 1 10 option:503 64 1 9 <unknown> 80 4 16 account_type:538 96 8 15 __for_begin:506 128 8 13"
                        " __for_end:506 160 8 15 __for_begin:538 192 8 13 __for_end:538 224 24 20 account_type_vec:532 28"
                        "8 32 9 <unknown> 352 32 9 <unknown> 416 32 14 error_name:514 480 32 9 <unknown> 544 32 9 <unknow"
                        "n> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown"
                        "> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 40 10 status:523 1200 48 12 para_set:497";
  *(_QWORD *)(v2 + 16) = DbLocalConfigMgr::rewriteDbLoginRewardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959360;
  v4[536862757] = 62194;
  v4[536862759] = -202116109;
  std::set<std::string>::set((std::set<std::string> *const)(v2 + 1200));
  for ( idx = 0; idx <= 5; ++idx )
  {
    v5 = proto::MathExpressionType_Name[abi:cxx11]((proto::MathExpressionType)idx);
    std::set<std::string>::emplace<std::string const&>((std::set<std::string> *const)(v2 + 1200), v5, v5);
  }
  google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v2 + 48));
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = 1;
  __for_range = &this->login_reward_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbLoginRewardConfig>::iterator *)(v2 + 96) = std::map<unsigned int,data::DbLoginRewardConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbLoginRewardConfig>::iterator *)(v2 + 128) = std::map<unsigned int,data::DbLoginRewardConfig>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> >::_Self *)(v2 + 96),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> >::_Self *)(v2 + 128)) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> > *const)(v2 + 96));
    config_id = std::get<0ul,unsigned int const,data::DbLoginRewardConfig>(__in);
    config = std::get<1ul,unsigned int const,data::DbLoginRewardConfig>(__in);
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 288, &config->reward_rules_str);
    v6 = (unsigned int)common::tools::MathExpression::init(&config->reward_expression, (std::string *)(v2 + 288)) != 0;
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "rewriteDbLoginRewardConfig",
        510);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(config_id);
      }
      common::milog::MiLogStream::operator()(v7, aConfigIdU_1, *config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v1 = -1;
      v8 = 0;
    }
    else
    {
      std::string::clear(&config->reward_rules_str);
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v2 + 416);
      if ( !common::tools::MathExpression::isParaNameValid(
              &config->reward_expression,
              (const std::set<std::string> *)(v2 + 1200),
              (std::string *)(v2 + 416)) )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "rewriteDbLoginRewardConfig",
          517);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 480),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = std::string::c_str(v2 + 416);
        if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(config_id);
        }
        common::milog::MiLogStream::operator()(v9, aConfigIdU_2, *config_id, v10);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v11 = 0;
      }
      else
      {
        if ( (unsigned __int8)std::string::empty(&config->item_list_str) == 1 )
          goto LABEL_37;
        v12 = ((v2 + 1120) >> 3) + 2147450880;
        *(_DWORD *)v12 = 0;
        *(_BYTE *)(v12 + 4) = 0;
        if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1159) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 121) & 7) >= *(_BYTE *)(((v2 + 1159) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1120, 40LL);
        }
        google::protobuf::util::JsonStringToMessage(
          (google::protobuf::util::Status *)(v2 + 1120),
          (int)v35,
          (int)thisa,
          v37,
          (int)__for_range,
          (int)__in,
          config_id,
          (int)config,
          (char)__for_range_0);
        if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 1120)) )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_local_config_mgr.cpp",
            "rewriteDbLoginRewardConfig",
            526);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  v13,
                  (const char (*)[29])"JsonStringToMessage failed: ");
          common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>(
            v14,
            (const google::protobuf::util::Status *)(v2 + 1120));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v1 = -1;
          v15 = 0;
        }
        else
        {
          std::string::clear(&config->item_list_str);
          v15 = 1;
        }
        google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 1120));
        v16 = ((v2 + 1120) >> 3) + 2147450880;
        *(_DWORD *)v16 = -117901064;
        *(_BYTE *)(v16 + 4) = -8;
        if ( v15 == 1 )
        {
LABEL_37:
          v17 = ((v2 + 224) >> 3) + 2147450880;
          *(_WORD *)v17 = 0;
          *(_BYTE *)(v17 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 224));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 64);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 608),
            ",",
            (const std::allocator<char> *)(v2 + 64));
          v18 = common::tools::StringUtils::splitToList<unsigned int>(
                  &config->effective_account_type_list_str,
                  (const std::string *)(v2 + 608),
                  (std::vector<unsigned int> *)(v2 + 224),
                  1) != 0;
          std::string::~string((void *)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 64);
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
          if ( v18 )
          {
            *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 672, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 672),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_local_config_mgr.cpp",
              "rewriteDbLoginRewardConfig",
              535);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 672),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(config_id);
            }
            common::milog::MiLogStream::operator()(v19, aConfigIdU_3, *config_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
            *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v1 = -1;
            v20 = 0;
          }
          else
          {
            __for_range_0 = (std::vector<unsigned int> *)(v2 + 224);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::vector<unsigned int>::iterator *)(v2 + 160) = std::vector<unsigned int>::begin(__for_range_0);
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::vector<unsigned int>::iterator *)(v2 + 192) = std::vector<unsigned int>::end(__for_range_0);
            while ( 1 )
            {
              if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 160),
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 192)) )
              {
                v26 = 1;
                goto LABEL_63;
              }
              *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
              v21 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 160));
              v22 = (int *)v21;
              if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v21);
              }
              v23 = *v22;
              if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 80);
              *(_DWORD *)(v2 + 80) = v23;
              if ( !proto::AccountType_IsValid(*(_DWORD *)(v2 + 80)) )
                break;
              std::vector<unsigned int>::push_back(
                &config->effective_account_type_vec,
                (const std::vector<unsigned int>::value_type *)(v2 + 80));
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 160));
            }
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 736),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_local_config_mgr.cpp",
              "rewriteDbLoginRewardConfig",
              542);
            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
            {
              v24 = (common::milog::MiLogStream *)(v2 + 80);
              __asan_report_load4(v2 + 80);
            }
            v25 = *(unsigned int *)(v2 + 80);
            if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              v24 = (common::milog::MiLogStream *)config_id;
              __asan_report_load4(config_id);
            }
            common::milog::MiLogStream::operator()(v24, aConfigIdU_4, *config_id, v25);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
            v1 = -1;
            v26 = 0;
LABEL_63:
            *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            if ( v26 == 1 )
            {
              std::string::clear(&config->effective_account_type_list_str);
              if ( (unsigned __int8)std::string::empty(&config->email_title) )
              {
                *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 800, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 800),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_local_config_mgr.cpp",
                  "rewriteDbLoginRewardConfig",
                  551);
                v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 800),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(config_id);
                }
                common::milog::MiLogStream::operator()(v27, aConfigIdU_5, *config_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
                *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
                v1 = -1;
                v20 = 0;
              }
              else if ( (unsigned __int8)std::string::empty(&config->email_content) )
              {
                *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 864, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 864),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_local_config_mgr.cpp",
                  "rewriteDbLoginRewardConfig",
                  556);
                v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 864),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(config_id);
                }
                common::milog::MiLogStream::operator()(v28, aConfigIdU_6, *config_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
                *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
                v1 = -1;
                v20 = 0;
              }
              else if ( DbLocalConfigMgr::extractTextId(
                          thisa,
                          config,
                          &config->email_title,
                          &config->email_title_text_id) )
              {
                *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 928, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 928),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_local_config_mgr.cpp",
                  "rewriteDbLoginRewardConfig",
                  561);
                v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 928),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(config_id);
                }
                common::milog::MiLogStream::operator()(v29, aConfigIdU_7, *config_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
                *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
                v1 = -1;
                v20 = 0;
              }
              else if ( DbLocalConfigMgr::extractTextId(
                          thisa,
                          config,
                          &config->email_sender,
                          &config->email_sender_text_id) )
              {
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 992, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 992),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_local_config_mgr.cpp",
                  "rewriteDbLoginRewardConfig",
                  566);
                v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 992),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(config_id);
                }
                common::milog::MiLogStream::operator()(v30, aConfigIdU_8, *config_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
                v1 = -1;
                v20 = 0;
              }
              else if ( DbLocalConfigMgr::extractTextId(
                          thisa,
                          config,
                          &config->email_content,
                          &config->email_content_text_id) )
              {
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1056, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1056),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_local_config_mgr.cpp",
                  "rewriteDbLoginRewardConfig",
                  571);
                v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1056),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(config_id);
                }
                common::milog::MiLogStream::operator()(v31, aConfigIdU_9, *config_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                v1 = -1;
                v20 = 0;
              }
              else
              {
                v20 = 1;
              }
            }
            else
            {
              v20 = 0;
            }
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 224));
          v11 = v20 == 1;
        }
        else
        {
          v11 = 0;
        }
      }
      std::string::~string((void *)(v2 + 416));
      v8 = v11;
    }
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v32 = ((v2 + 224) >> 3) + 2147450880;
    *(_WORD *)v32 = -1800;
    *(_BYTE *)(v32 + 2) = -8;
    if ( !v8 )
    {
      v33 = 0;
      goto LABEL_102;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> > *const)(v2 + 96));
  }
  v33 = 1;
LABEL_102:
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v33 == 1 )
    v1 = 0;
  std::set<std::string>::~set((std::set<std::string> *const)(v2 + 1200));
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 152) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF809C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v35);
  }
  return v1;
};

// Line 579: range 000000000CDA0C02-000000000CDA14FA
int32_t __cdecl DbLocalConfigMgr::rewriteAnnounceConfig(DbLocalConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r15
  char v8; // al
  common::milog::MiLogStream *v9; // rcx
  int v10; // eax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rcx
  int32_t result; // eax
  data::DbAnnounceConfigMap *__for_range; // [rsp+10h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false>::reference __in; // [rsp+18h] [rbp-1A8h]
  unsigned int *id; // [rsp+20h] [rbp-1A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::AnnounceConfig> >::type *config; // [rsp+28h] [rbp-198h]
  char v18[400]; // [rsp+30h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:580 64 8 13 __for_end:580 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbLocalConfigMgr::rewriteAnnounceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  __for_range = &this->announce_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::AnnounceConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::AnnounceConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::AnnounceConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AnnounceConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AnnounceConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnnounceConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnnounceConfig>,false> *)(v2 + 64)) )
    {
      v10 = 1;
      goto LABEL_35;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::AnnounceConfig>(__in);
    config = std::get<1ul,unsigned int const,data::AnnounceConfig>(__in);
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_local_config_mgr.cpp",
      "rewriteAnnounceConfig",
      582);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[33])"[ANNOUNCE] dungeon_confirm_text ");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &config->dungeon_confirm_text);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])", is empty ");
    v8 = std::string::empty(&config->dungeon_confirm_text);
    common::milog::MiLogStream::operator<<(v7, v8);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    if ( (unsigned __int8)std::string::empty(&config->dungeon_confirm_text) != 1
      && DbLocalConfigMgr::extractTextId(this, config, &config->dungeon_confirm_text, &config->dungeon_confirm_text_id) )
    {
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "rewriteAnnounceConfig",
        587);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      common::milog::MiLogStream::operator()(v9, aConfigIdU_10, *id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      v1 = -1;
      v10 = 0;
      goto LABEL_35;
    }
    if ( (unsigned __int8)std::string::empty(&config->center_system_text) != 1
      && DbLocalConfigMgr::extractTextId(this, config, &config->center_system_text, &config->center_system_text_id) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "rewriteAnnounceConfig",
        595);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      common::milog::MiLogStream::operator()(v11, aConfigIdU_11, *id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      v1 = -1;
      v10 = 0;
      goto LABEL_35;
    }
    if ( (unsigned __int8)std::string::empty(&config->count_down_text) != 1
      && DbLocalConfigMgr::extractTextId(this, config, &config->count_down_text, &config->count_down_text_id) )
    {
      break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false> *const)(v2 + 32));
  }
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 288, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_local_config_mgr.cpp",
    "rewriteAnnounceConfig",
    603);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 288),
          (const char (*)[16])"[CONFIG_ERROR] ");
  if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(id);
  }
  common::milog::MiLogStream::operator()(v12, aConfigIdU_12, *id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
  v1 = -1;
  v10 = 0;
LABEL_35:
  if ( v10 == 1 )
    v1 = 0;
  result = v1;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 612: range 000000000CDA14FC-000000000CDA21E0
int32_t __cdecl DbLocalConfigMgr::rewriteDbQuestionnaireMailConfig(DbLocalConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // r15d
  unsigned __int64 v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int *v17; // [rsp+0h] [rbp-2A0h]
  DbLocalConfigMgr *thisa; // [rsp+8h] [rbp-298h]
  int v19; // [rsp+10h] [rbp-290h]
  int v20; // [rsp+18h] [rbp-288h]
  uint32_t config_id; // [rsp+1Ch] [rbp-284h]
  data::DbQuestionnaireMailConfigVec *__for_range; // [rsp+20h] [rbp-280h]
  data::DbQuestionnaireMailConfig *config; // [rsp+28h] [rbp-278h]
  int v24; // [rsp+30h] [rbp-270h] BYREF
  char v25; // [rsp+38h] [rbp-268h]

  thisa = this;
  v2 = (unsigned __int64)&v24;
  v17 = &v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 10 option:614 48 8 15 __for_begin:617 80 8 13 __for_end:617 112 32 9 <unknown> 176 32 9 "
                        "<unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 40 10 status:622";
  *(_QWORD *)(v2 + 16) = DbLocalConfigMgr::rewriteDbQuestionnaireMailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v2 + 32));
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 32);
  *(_BYTE *)(v2 + 32) = 1;
  __for_range = &this->questionnaire_mail_config_vec;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<data::DbQuestionnaireMailConfig>::iterator *)(v2 + 48) = std::vector<data::DbQuestionnaireMailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<data::DbQuestionnaireMailConfig>::iterator *)(v2 + 80) = std::vector<data::DbQuestionnaireMailConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::DbQuestionnaireMailConfig *,std::vector<data::DbQuestionnaireMailConfig>>(
            (const __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> > *)(v2 + 48),
            (const __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> > *)(v2 + 80)) )
    {
      v10 = 1;
      goto LABEL_46;
    }
    config = __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig *,std::vector<data::DbQuestionnaireMailConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> > *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(config);
    }
    config_id = config->config_id;
    if ( (unsigned __int8)std::string::empty(&config->item_list_str) != 1 )
    {
      v5 = ((v2 + 496) >> 3) + 2147450880;
      *(_DWORD *)v5 = 0;
      *(_BYTE *)(v5 + 4) = 0;
      if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 535) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 16 + 39) & 7) >= *(_BYTE *)(((v2 + 535) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 496, 40LL);
      }
      google::protobuf::util::JsonStringToMessage(
        (google::protobuf::util::Status *)(v2 + 496),
        (int)v17,
        (int)thisa,
        v19,
        v20,
        (int)__for_range,
        config,
        v24,
        v25);
      if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 496)) )
      {
        *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 112, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 112),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "rewriteDbQuestionnaireMailConfig",
          625);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 112),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               v6,
               (const char (*)[29])"JsonStringToMessage failed: ");
        common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>(
          v7,
          (const google::protobuf::util::Status *)(v2 + 496));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 112));
        *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v8 = 0;
      }
      else
      {
        std::string::clear(&config->item_list_str);
        v8 = 1;
      }
      google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 496));
      v9 = ((v2 + 496) >> 3) + 2147450880;
      *(_DWORD *)v9 = -117901064;
      *(_BYTE *)(v9 + 4) = -8;
      if ( v8 != 1 )
      {
        v10 = 0;
        goto LABEL_46;
      }
    }
    if ( (unsigned __int8)std::string::empty(&config->email_title) )
    {
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "rewriteDbQuestionnaireMailConfig",
        633);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 176),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v11, aConfigIdU_5, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      v1 = -1;
      v10 = 0;
      goto LABEL_46;
    }
    if ( (unsigned __int8)std::string::empty(&config->email_content) )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "rewriteDbQuestionnaireMailConfig",
        638);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v12, aConfigIdU_6, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      v1 = -1;
      v10 = 0;
      goto LABEL_46;
    }
    if ( DbLocalConfigMgr::extractTextId(thisa, config, &config->email_title, &config->email_title_text_id) )
    {
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "rewriteDbQuestionnaireMailConfig",
        643);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v13, aConfigIdU_7, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      v1 = -1;
      v10 = 0;
      goto LABEL_46;
    }
    if ( DbLocalConfigMgr::extractTextId(thisa, config, &config->email_sender, &config->email_sender_text_id) )
    {
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 368, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 368),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "rewriteDbQuestionnaireMailConfig",
        648);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v14, aConfigIdU_8, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      v1 = -1;
      v10 = 0;
      goto LABEL_46;
    }
    if ( DbLocalConfigMgr::extractTextId(thisa, config, &config->email_content, &config->email_content_text_id) )
      break;
    __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig *,std::vector<data::DbQuestionnaireMailConfig>>::operator++((__gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> > *const)(v2 + 48));
  }
  *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 432, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 432),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_local_config_mgr.cpp",
    "rewriteDbQuestionnaireMailConfig",
    653);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 432),
          (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator()(v15, aConfigIdU_9, config_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
  v1 = -1;
  v10 = 0;
LABEL_46:
  if ( v10 == 1 )
    v1 = 0;
  result = v1;
  if ( v17 == (int *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 661: range 000000000CDA21E2-000000000CDA2256
int32_t __cdecl DbLocalConfigMgr::extractTextId(
        DbLocalConfigMgr *const this,
        const data::DbLoginRewardConfig *config,
        std::string *text,
        uint32_t *text_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->end_time);
  }
  return DbLocalConfigMgr::doExtractTextId(this, config->end_time, text, text_id);
};

// Line 666: range 000000000CDA2258-000000000CDA22BF
int32_t __cdecl DbLocalConfigMgr::extractTextId(
        DbLocalConfigMgr *const this,
        const data::AnnounceConfig *config,
        std::string *text,
        uint32_t *text_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->end_time);
  }
  return DbLocalConfigMgr::doExtractTextId(this, config->end_time, text, text_id);
};

// Line 671: range 000000000CDA22C0-000000000CDA2334
int32_t __cdecl DbLocalConfigMgr::extractTextId(
        DbLocalConfigMgr *const this,
        const data::DbQuestionnaireMailConfig *config,
        std::string *text,
        uint32_t *text_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->end_time);
  }
  return DbLocalConfigMgr::doExtractTextId(this, config->end_time, text, text_id);
};

// Line 676: range 000000000CDA2336-000000000CDA3207
int32_t __cdecl DbLocalConfigMgr::doExtractTextId(
        DbLocalConfigMgr *const this,
        uint32_t end_time,
        std::string *text,
        uint32_t *text_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  const std::string *v8; // rax
  int32_t v10; // r14d
  const std::string *v11; // rax
  const std::string *v12; // rax
  std::vector<std::string>::size_type v13; // rax
  const std::string *v14; // rax
  common::milog::MiLogStream *v16; // rdx
  std::vector<std::string>::reference v17; // rax
  std::vector<std::string>::reference v18; // rax
  unsigned __int64 v19; // rax
  _BYTE *v20; // rdx
  std::vector<std::string>::reference v21; // rax
  unsigned __int64 v22; // rax
  _BYTE *v23; // rdx
  char v24; // al
  common::milog::MiLogStream *v25; // rdx
  std::vector<std::string>::reference v26; // rdi
  __int64 v27; // rsi
  bool v28; // r14
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rcx
  common::milog::MiLogStream *p_delete_time; // rdi
  __int64 delete_time; // rcx
  int32_t result; // eax
  size_t size; // [rsp+20h] [rbp-260h]
  const data::DbTextmapConfig *textmap_config_ptr; // [rsp+28h] [rbp-258h]
  char v40[592]; // [rsp+30h] [rbp-250h] BYREF

  v4 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(544LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 24 13 token_vec:677 96 24 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unkno"
                        "wn> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DbLocalConfigMgr::doExtractTextId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = -218959118;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 32));
  if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 96, 24LL);
  }
  boost::algorithm::is_any_of<char [3]>(
    (boost::algorithm::detail::is_any_ofF<char> *)(v4 + 96),
    (const char (*)[3])" =");
  boost::algorithm::split<std::vector<std::string>,std::string,boost::algorithm::detail::is_any_ofF<char>>(
    (std::vector<std::string> *)(v4 + 32),
    text,
    (boost::algorithm::detail::is_any_ofF<char> *)(v4 + 96),
    token_compress_on);
  boost::algorithm::detail::is_any_ofF<char>::~is_any_ofF((boost::algorithm::detail::is_any_ofF<char> *const)(v4 + 96));
  v7 = ((v4 + 96) >> 3) + 2147450880;
  *(_WORD *)v7 = -1800;
  *(_BYTE *)(v7 + 2) = -8;
  if ( std::vector<std::string>::empty((const std::vector<std::string> *const)(v4 + 32))
    || (v8 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 32), 0LL),
        std::operator!=<char>("<servertext", v8)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)text_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(text_id);
    }
    *text_id = 0;
    v10 = 0;
  }
  else if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 32)) != 4
         || (v11 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 32), 0LL),
             std::operator!=<char>("<servertext", v11))
         || (v12 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 32), 1uLL),
             std::operator!=<char>(off_1A1A0C00, v12))
         || (v13 = std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 32)),
             v14 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 32), v13 - 1),
             std::operator!=<char>("/>", v14)) )
  {
    *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/db_data_manual/db_local_config_mgr.cpp",
      "doExtractTextId",
      691);
    v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v4 + 160),
            (const char (*)[34])"Not <servertext key=  /> format: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, text);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v10 = -1;
  }
  else
  {
    v17 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 32), 2uLL);
    size = std::string::size(v17);
    if ( size <= 2 )
      goto LABEL_31;
    v18 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 32), 2uLL);
    v19 = std::string::operator[](v18, 0LL);
    v20 = (_BYTE *)v19;
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && (char)(v19 & 7) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v19);
    if ( *v20 != 34 )
      goto LABEL_31;
    v21 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 32), 2uLL);
    v22 = std::string::operator[](v21, size - 1);
    v23 = (_BYTE *)v22;
    if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0 && (char)(v22 & 7) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v22);
    if ( *v23 == 34 )
      v24 = 0;
    else
LABEL_31:
      v24 = 1;
    if ( v24 )
    {
      *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "doExtractTextId",
        697);
      v25 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)(v4 + 224),
              (const char (*)[35])"Not <<servertext key=  /> format: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, text);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
      *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v10 = -1;
    }
    else
    {
      *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
      v26 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 32), 2uLL);
      v27 = size - 2;
      if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
      {
        v27 = 32LL;
        v26 = (std::vector<std::string>::reference)(v4 + 288);
        __asan_report_store_n(v4 + 288, 32LL);
      }
      std::string::substr(v4 + 288, v26, 1LL, v27);
      v28 = common::tools::StringUtils::strToNum<unsigned int>((const std::string *)(v4 + 288), text_id, 1) != 0;
      std::string::~string((void *)(v4 + 288));
      *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
      if ( v28 )
      {
        *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "doExtractTextId",
          702);
        v29 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                (common::milog::MiLogStream *const)(v4 + 352),
                (const char (*)[35])"Not <<servertext key=  /> format: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, text);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
        *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v10 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)text_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(text_id);
        }
        textmap_config_ptr = DbLocalConfigMgr::findDbTextmapConfig(this, *text_id);
        if ( textmap_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&textmap_config_ptr->delete_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)textmap_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&textmap_config_ptr->delete_time >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&textmap_config_ptr->delete_time);
          }
          if ( end_time <= textmap_config_ptr->delete_time )
          {
            if ( *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)text_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(text_id);
            }
            if ( *text_id )
              std::string::clear(text);
            v10 = 0;
          }
          else
          {
            *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 480, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 480),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_local_config_mgr.cpp",
              "doExtractTextId",
              714);
            p_delete_time = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v4 + 480),
                              (const char (*)[16])"[CONFIG_ERROR] ");
            if ( *(_BYTE *)(((unsigned __int64)&textmap_config_ptr->delete_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)textmap_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&textmap_config_ptr->delete_time >> 3)
                                                                               + 0x7FFF8000) )
            {
              p_delete_time = (common::milog::MiLogStream *)&textmap_config_ptr->delete_time;
              __asan_report_load4(&textmap_config_ptr->delete_time);
            }
            delete_time = textmap_config_ptr->delete_time;
            if ( *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)text_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) )
            {
              p_delete_time = (common::milog::MiLogStream *)text_id;
              __asan_report_load4(text_id);
            }
            common::milog::MiLogStream::operator()(p_delete_time, aUTextmapDelete, *text_id, delete_time, end_time);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
            *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v10 = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_local_config_mgr.cpp",
            "doExtractTextId",
            709);
          v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)text_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(text_id);
          }
          common::milog::MiLogStream::operator()(v30, aUTextmap, *text_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
          *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v10 = -1;
        }
      }
    }
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 32));
  result = v10;
  if ( v40 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 726: range 000000000CDA3208-000000000CDA4402
int32_t __cdecl DbLocalConfigMgr::checkDbLoginRewardConfig(DbLocalConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  int v7; // eax
  uint32_t begin_time; // ecx
  common::milog::MiLogStream *v9; // rcx
  const google::protobuf::RepeatedPtrField<proto::EquipParam> *v10; // rax
  common::milog::MiLogStream *v11; // rdi
  unsigned __int64 v12; // rax
  google::protobuf::uint32 v13; // eax
  google::protobuf::uint32 v14; // eax
  google::protobuf::uint32 v15; // eax
  google::protobuf::uint32 v16; // eax
  common::milog::MiLogStream *v17; // rcx
  int v18; // r15d
  common::milog::MiLogStream *v19; // rcx
  HK4EDesignConfig *v20; // r15
  uint32_t v21; // eax
  google::protobuf::uint32 v22; // ecx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  google::protobuf::uint32 v27; // edx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  google::protobuf::uint32 v30; // edx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  int v34; // edx
  data::DbLoginRewardConfigMap *__for_range; // [rsp+28h] [rbp-308h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> >::reference v37; // [rsp+30h] [rbp-300h]
  std::tuple_element<0,std::pair<unsigned int const,data::DbLoginRewardConfig> >::type *config_id; // [rsp+38h] [rbp-2F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DbLoginRewardConfig> >::type *config; // [rsp+40h] [rbp-2F0h]
  const google::protobuf::RepeatedPtrField<proto::EquipParam> *__for_range_0; // [rsp+48h] [rbp-2E8h]
  google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam>::reference item; // [rsp+50h] [rbp-2E0h]
  const ItemOutputLimitConfig *limit_config_ptr; // [rsp+58h] [rbp-2D8h]
  char v43[720]; // [rsp+60h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 9 <unknown> 64 4 9 <unknown> 80 8 15 __for_begin:727 112 8 13 __for_end:727 144 8 15 __f"
                        "or_begin:744 176 8 13 __for_end:744 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400"
                        " 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 40 18 item_param_bin:746";
  *(_QWORD *)(v3 + 16) = DbLocalConfigMgr::checkDbLoginRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -218103808;
  v5[536862740] = -202116109;
  __for_range = &this->login_reward_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbLoginRewardConfig>::iterator *)(v3 + 80) = std::map<unsigned int,data::DbLoginRewardConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbLoginRewardConfig>::iterator *)(v3 + 112) = std::map<unsigned int,data::DbLoginRewardConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> >::_Self *)(v3 + 80),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> >::_Self *)(v3 + 112)) )
    {
      v7 = 1;
      goto LABEL_73;
    }
    v37 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> > *const)(v3 + 80));
    config_id = std::get<0ul,unsigned int const,data::DbLoginRewardConfig>(v37);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DbLoginRewardConfig> >::type *)std::get<1ul,unsigned int const,data::DbLoginRewardConfig>(v37);
    if ( *(_BYTE *)(((unsigned __int64)&config->email_valid_days >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->email_valid_days >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->email_valid_days);
    }
    if ( !config->email_valid_days )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "checkDbLoginRewardConfig",
        731);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(config_id);
      }
      common::milog::MiLogStream::operator()(v6, aConfigIdU_13, *config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      v2 = -1;
      v7 = 0;
      goto LABEL_73;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->begin_time);
    }
    begin_time = config->begin_time;
    if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->end_time);
    }
    if ( begin_time >= config->end_time || !config->begin_time )
    {
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 272),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "checkDbLoginRewardConfig",
        736);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(config_id);
      }
      common::milog::MiLogStream::operator()(v9, aConfigIdU_14, *config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      v2 = -1;
      v7 = 0;
      goto LABEL_73;
    }
    v10 = proto::EquipParamList::item_list(&config->reward_item_list);
    if ( (unsigned __int64)google::protobuf::RepeatedPtrField<proto::EquipParam>::size(v10) > 0xA )
      break;
    __for_range_0 = proto::EquipParamList::item_list(&config->reward_item_list);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(google::protobuf::RepeatedPtrField<proto::EquipParam>::const_iterator *)(v3 + 144) = google::protobuf::RepeatedPtrField<proto::EquipParam>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(google::protobuf::RepeatedPtrField<proto::EquipParam>::const_iterator *)(v3 + 176) = google::protobuf::RepeatedPtrField<proto::EquipParam>::end(__for_range_0);
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const)(v3 + 144),
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam>::iterator *)(v3 + 176)) )
    {
      item = google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const)(v3 + 144));
      v12 = ((v3 + 592) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_BYTE *)(v12 + 4) = 0;
      proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v3 + 592));
      v13 = proto::EquipParam::item_id(item);
      proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v3 + 592), v13);
      v14 = proto::EquipParam::item_num(item);
      proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v3 + 592), v14);
      v15 = proto::EquipParam::item_level(item);
      proto::ItemParamBin::set_level((proto::ItemParamBin *const)(v3 + 592), v15);
      v16 = proto::EquipParam::promote_level(item);
      proto::ItemParamBin::set_promote_level((proto::ItemParamBin *const)(v3 + 592), v16);
      if ( TxtConfigMgr::checkMuipMailItem(txt_config_mgr, (const proto::ItemParamBin *)(v3 + 592)) )
      {
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "checkDbLoginRewardConfig",
          753);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 400),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(config_id);
        }
        common::milog::MiLogStream::operator()(v17, aConfigIdU_16, *config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
      }
      else if ( TxtConfigMgr::checkItemParamBin(
                  txt_config_mgr,
                  (const proto::ItemParamBin *)(v3 + 592),
                  ITEM_LIMIT_OPERATION_DAILY_ACTIVITY) )
      {
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "checkDbLoginRewardConfig",
          758);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(config_id);
        }
        common::milog::MiLogStream::operator()(v19, aConfigIdU_17, *config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
      }
      else
      {
        v20 = TxtConfigMgr::getConfig(txt_config_mgr);
        v21 = proto::EquipParam::item_id(item);
        limit_config_ptr = HK4EDesignConfig::findItemOutputLimitConfig(v20, v21);
        if ( !limit_config_ptr )
          goto LABEL_64;
        v22 = proto::EquipParam::item_num(item);
        if ( *(_BYTE *)(((unsigned __int64)&limit_config_ptr->mail_item_count_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)limit_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limit_config_ptr->mail_item_count_limit >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&limit_config_ptr->mail_item_count_limit);
        }
        if ( v22 > limit_config_ptr->mail_item_count_limit )
        {
          *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 528, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 528),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_local_config_mgr.cpp",
            "checkDbLoginRewardConfig",
            767);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 528),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])"config_id:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, config_id);
          v26 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v25, (const char (*)[18])byte_1A1A1160);
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v27 = proto::EquipParam::item_id(item);
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 48);
          *(_DWORD *)(v3 + 48) = v27;
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v3 + 48));
          v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])byte_1A1A11A0);
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          v30 = proto::EquipParam::item_num(item);
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64);
          *(_DWORD *)(v3 + 64) = v30;
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v3 + 64));
          v32 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v31, (const char (*)[25])byte_1A117640);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v32,
            &limit_config_ptr->mail_item_count_limit);
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
          *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        else
        {
LABEL_64:
          v18 = 1;
        }
      }
      proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v3 + 592));
      v33 = ((v3 + 592) >> 3) + 2147450880;
      *(_DWORD *)v33 = -117901064;
      *(_BYTE *)(v33 + 4) = -8;
      if ( v18 != 1 )
      {
        v34 = 0;
        goto LABEL_69;
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const)(v3 + 144));
    }
    v34 = 1;
LABEL_69:
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v34 != 1 )
    {
      v7 = 0;
      goto LABEL_73;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig> > *const)(v3 + 80));
  }
  *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 336, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 336),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_local_config_mgr.cpp",
    "checkDbLoginRewardConfig",
    741);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 336),
          (const char (*)[16])"[CONFIG_ERROR] ");
  if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
  {
    v11 = (common::milog::MiLogStream *)config_id;
    __asan_report_load4(config_id);
  }
  common::milog::MiLogStream::operator()(v11, aConfigIdU_15, *config_id, 10LL);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
  v2 = -1;
  v7 = 0;
LABEL_73:
  if ( v7 == 1 )
    v2 = 0;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return v2;
};

// Line 777: range 000000000CDA4404-000000000CDA5685
int32_t __cdecl DbLocalConfigMgr::checkDbQuestionnaireMailConfig(
        DbLocalConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t config_id; // ecx
  common::milog::MiLogStream *v7; // rcx
  _BOOL4 v8; // eax
  uint32_t begin_time; // ecx
  common::milog::MiLogStream *v10; // rcx
  const google::protobuf::RepeatedPtrField<proto::EquipParam> *v11; // rax
  common::milog::MiLogStream *v12; // rdi
  unsigned __int64 v13; // rax
  google::protobuf::uint32 v14; // eax
  google::protobuf::uint32 v15; // eax
  google::protobuf::uint32 v16; // eax
  google::protobuf::uint32 v17; // eax
  common::milog::MiLogStream *v18; // rcx
  int v19; // r15d
  common::milog::MiLogStream *v20; // rcx
  HK4EDesignConfig *v21; // r15
  uint32_t v22; // eax
  google::protobuf::uint32 v23; // ecx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  google::protobuf::uint32 v28; // edx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  google::protobuf::uint32 v31; // edx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  unsigned __int64 v34; // rax
  int v35; // edx
  int v36; // eax
  data::DbQuestionnaireMailConfigVec *__for_range; // [rsp+28h] [rbp-2F8h]
  __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> >::reference config; // [rsp+30h] [rbp-2F0h]
  const google::protobuf::RepeatedPtrField<proto::EquipParam> *__for_range_0; // [rsp+38h] [rbp-2E8h]
  google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam>::reference item; // [rsp+40h] [rbp-2E0h]
  const ItemOutputLimitConfig *limit_config_ptr; // [rsp+48h] [rbp-2D8h]
  char v43[720]; // [rsp+50h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 4 13 config_id:780 48 4 9 <unknown> 64 4 9 <unknown> 80 8 15 __for_begin:778 112 8 13 __fo"
                        "r_end:778 144 8 15 __for_begin:796 176 8 13 __for_end:796 208 32 9 <unknown> 272 32 9 <unknown> "
                        "336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 40 18 item_param_bin:798";
  *(_QWORD *)(v3 + 16) = DbLocalConfigMgr::checkDbQuestionnaireMailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -218103808;
  v5[536862740] = -202116109;
  __for_range = &this->questionnaire_mail_config_vec;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<data::DbQuestionnaireMailConfig>::iterator *)(v3 + 80) = std::vector<data::DbQuestionnaireMailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<data::DbQuestionnaireMailConfig>::iterator *)(v3 + 112) = std::vector<data::DbQuestionnaireMailConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::DbQuestionnaireMailConfig *,std::vector<data::DbQuestionnaireMailConfig>>(
            (const __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> > *)(v3 + 80),
            (const __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> > *)(v3 + 112)) )
  {
    config = __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig *,std::vector<data::DbQuestionnaireMailConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> > *const)(v3 + 80));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(config);
    }
    config_id = config->config_id;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32);
    *(_DWORD *)(v3 + 32) = config_id;
    if ( *(_BYTE *)(((unsigned __int64)&config->email_valid_days >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->email_valid_days >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&config->email_valid_days);
    }
    if ( config->email_valid_days )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->begin_time);
      }
      begin_time = config->begin_time;
      if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->end_time);
      }
      if ( begin_time < config->end_time && config->begin_time )
      {
        v11 = proto::EquipParamList::item_list(&config->reward_item_list);
        if ( (unsigned __int64)google::protobuf::RepeatedPtrField<proto::EquipParam>::size(v11) <= 0xA )
        {
          __for_range_0 = proto::EquipParamList::item_list(&config->reward_item_list);
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(google::protobuf::RepeatedPtrField<proto::EquipParam>::const_iterator *)(v3 + 144) = google::protobuf::RepeatedPtrField<proto::EquipParam>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(google::protobuf::RepeatedPtrField<proto::EquipParam>::const_iterator *)(v3 + 176) = google::protobuf::RepeatedPtrField<proto::EquipParam>::end(__for_range_0);
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::operator!=(
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const)(v3 + 144),
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam>::iterator *)(v3 + 176)) )
          {
            item = google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const)(v3 + 144));
            v13 = ((v3 + 592) >> 3) + 2147450880;
            *(_DWORD *)v13 = 0;
            *(_BYTE *)(v13 + 4) = 0;
            proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v3 + 592));
            v14 = proto::EquipParam::item_id(item);
            proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v3 + 592), v14);
            v15 = proto::EquipParam::item_num(item);
            proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v3 + 592), v15);
            v16 = proto::EquipParam::item_level(item);
            proto::ItemParamBin::set_level((proto::ItemParamBin *const)(v3 + 592), v16);
            v17 = proto::EquipParam::promote_level(item);
            proto::ItemParamBin::set_promote_level((proto::ItemParamBin *const)(v3 + 592), v17);
            if ( TxtConfigMgr::checkMuipMailItem(txt_config_mgr, (const proto::ItemParamBin *)(v3 + 592)) )
            {
              *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 400, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 400),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/db_data_manual/db_local_config_mgr.cpp",
                "checkDbQuestionnaireMailConfig",
                805);
              v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 400),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 32);
              common::milog::MiLogStream::operator()(v18, aConfigIdU_16, *(unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
              *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v19 = 0;
            }
            else if ( TxtConfigMgr::checkItemParamBin(
                        txt_config_mgr,
                        (const proto::ItemParamBin *)(v3 + 592),
                        ITEM_LIMIT_COMEBACK_QUESTIONNAIRE) )
            {
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/db_data_manual/db_local_config_mgr.cpp",
                "checkDbQuestionnaireMailConfig",
                810);
              v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 32);
              common::milog::MiLogStream::operator()(v20, aConfigIdU_17, *(unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v19 = 0;
            }
            else
            {
              v21 = TxtConfigMgr::getConfig(txt_config_mgr);
              v22 = proto::EquipParam::item_id(item);
              limit_config_ptr = HK4EDesignConfig::findItemOutputLimitConfig(v21, v22);
              if ( !limit_config_ptr )
                goto LABEL_68;
              v23 = proto::EquipParam::item_num(item);
              if ( *(_BYTE *)(((unsigned __int64)&limit_config_ptr->mail_item_count_limit >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)limit_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limit_config_ptr->mail_item_count_limit >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(&limit_config_ptr->mail_item_count_limit);
              }
              if ( v23 > limit_config_ptr->mail_item_count_limit )
              {
                *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 528, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 528),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_local_config_mgr.cpp",
                  "checkDbQuestionnaireMailConfig",
                  819);
                v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 528),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v24,
                        (const char (*)[11])"config_id:");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v3 + 32));
                v27 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v26,
                        (const char (*)[18])byte_1A1A1160);
                *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
                v28 = proto::EquipParam::item_id(item);
                if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v3 + 48);
                *(_DWORD *)(v3 + 48) = v28;
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v27,
                        (const unsigned int *)(v3 + 48));
                v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v29,
                        (const char (*)[10])byte_1A1A11A0);
                *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
                v31 = proto::EquipParam::item_num(item);
                if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v3 + 64);
                *(_DWORD *)(v3 + 64) = v31;
                v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v3 + 64));
                v33 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        v32,
                        (const char (*)[25])byte_1A117640);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  &limit_config_ptr->mail_item_count_limit);
                *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
                *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v19 = 0;
              }
              else
              {
LABEL_68:
                v19 = 1;
              }
            }
            proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v3 + 592));
            v34 = ((v3 + 592) >> 3) + 2147450880;
            *(_DWORD *)v34 = -117901064;
            *(_BYTE *)(v34 + 4) = -8;
            if ( v19 != 1 )
            {
              v35 = 0;
              goto LABEL_73;
            }
            google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const)(v3 + 144));
          }
          v35 = 1;
LABEL_73:
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
          v8 = v35 == 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 336, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 336),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_local_config_mgr.cpp",
            "checkDbQuestionnaireMailConfig",
            793);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          {
            v12 = (common::milog::MiLogStream *)(v3 + 32);
            __asan_report_load4(v3 + 32);
          }
          common::milog::MiLogStream::operator()(v12, aConfigIdU_15, *(unsigned int *)(v3 + 32), 10LL);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v8 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 272, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 272),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "checkDbQuestionnaireMailConfig",
          788);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 272),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        common::milog::MiLogStream::operator()(v10, aConfigIdU_14, *(unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v8 = 0;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "checkDbQuestionnaireMailConfig",
        783);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      common::milog::MiLogStream::operator()(v7, aConfigIdU_13, *(unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !v8 )
    {
      v36 = 0;
      goto LABEL_78;
    }
    __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig *,std::vector<data::DbQuestionnaireMailConfig>>::operator++((__gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig*,std::vector<data::DbQuestionnaireMailConfig> > *const)(v3 + 80));
  }
  v36 = 1;
LABEL_78:
  if ( v36 == 1 )
    v2 = 0;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return v2;
};

// Line 828: range 000000000CF13399-000000000CF14DC7
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_textmap_config<(mysqlpp::sql_dummy_type)0>(t_textmap_config *s, const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r15
  const mysqlpp::String *v8; // r15
  const mysqlpp::String *v9; // r15
  const mysqlpp::String *v10; // r15
  const mysqlpp::String *v11; // r15
  const mysqlpp::String *v12; // r15
  const mysqlpp::String *v13; // r15
  const mysqlpp::String *v14; // r15
  const mysqlpp::String *v15; // r15
  const mysqlpp::String *v16; // r15
  const mysqlpp::String *v17; // r15
  const mysqlpp::String *v18; // r15
  const mysqlpp::String *v19; // r15
  const mysqlpp::String *v20; // r15
  const mysqlpp::String *v21; // r15
  const mysqlpp::String *v22; // r15
  std::string rowa; // [rsp+0h] [rbp-880h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2112LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "33 32 16 28 ignore_schema_mismatches:828 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <un"
                              "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 "
                              "9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 83"
                              "2 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unkn"
                              "own> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 "
                              "32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unkn"
                              "own> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 "
                              "32 9 <unknown> 2048 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_textmap_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -218959118;
  v4[536862771] = -218959118;
  v4[536862773] = -218959118;
  v4[536862775] = -218959118;
  v4[536862777] = -218959118;
  v4[536862779] = -218959118;
  v4[536862781] = -218959118;
  v4[536862783] = -218959118;
  v4[536862785] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length);
  }
  *(_DWORD *)rowa._M_string_length = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v7, rowa);
  std::string::operator=(rowa._M_string_length + 8, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v8, rowa);
  std::string::operator=(rowa._M_string_length + 40, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = 0;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 320);
  if ( *(char *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 384, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 384), v9, rowa);
  std::string::operator=(rowa._M_string_length + 72, p_anon_0 + 384);
  std::string::~string((void *)(p_anon_0 + 384));
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 320));
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = 0;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 448);
  if ( *(char *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 512, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 512), v10, rowa);
  std::string::operator=(rowa._M_string_length + 104, p_anon_0 + 512);
  std::string::~string((void *)(p_anon_0 + 512));
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 448));
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) = 0;
  v11 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 576);
  if ( *(char *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 671) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 671) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 640, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 640), v11, rowa);
  std::string::operator=(rowa._M_string_length + 136, p_anon_0 + 640);
  std::string::~string((void *)(p_anon_0 + 640));
  *(_DWORD *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 576));
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) = 0;
  v12 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 704) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 704);
  if ( *(char *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 768, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 768), v12, rowa);
  std::string::operator=(rowa._M_string_length + 168, p_anon_0 + 768);
  std::string::~string((void *)(p_anon_0 + 768));
  *(_DWORD *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 704));
  *(_DWORD *)(((p_anon_0 + 704) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) = 0;
  v13 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 832) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 832);
  if ( *(char *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 927) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 927) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 896, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 896), v13, rowa);
  std::string::operator=(rowa._M_string_length + 200, p_anon_0 + 896);
  std::string::~string((void *)(p_anon_0 + 896));
  *(_DWORD *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 832));
  *(_DWORD *)(((p_anon_0 + 832) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1024) >> 3) + 0x7FFF8000) = 0;
  v14 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 960) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 960);
  if ( *(char *)(((p_anon_0 + 1024) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1055) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 1055) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1024, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1024), v14, rowa);
  std::string::operator=(rowa._M_string_length + 232, p_anon_0 + 1024);
  std::string::~string((void *)(p_anon_0 + 1024));
  *(_DWORD *)(((p_anon_0 + 1024) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 960));
  *(_DWORD *)(((p_anon_0 + 960) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) = 0;
  v15 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1088) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1088);
  if ( *(char *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1183) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1183) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1152, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1152), v15, rowa);
  std::string::operator=(rowa._M_string_length + 264, p_anon_0 + 1152);
  std::string::~string((void *)(p_anon_0 + 1152));
  *(_DWORD *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1088));
  *(_DWORD *)(((p_anon_0 + 1088) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) = 0;
  v16 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1216) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1216);
  if ( *(char *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1311) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 1311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1280, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1280), v16, rowa);
  std::string::operator=(rowa._M_string_length + 296, p_anon_0 + 1280);
  std::string::~string((void *)(p_anon_0 + 1280));
  *(_DWORD *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1216));
  *(_DWORD *)(((p_anon_0 + 1216) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) = 0;
  v17 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1344) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1344);
  if ( *(char *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1439) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1439) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1408, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1408), v17, rowa);
  std::string::operator=(rowa._M_string_length + 328, p_anon_0 + 1408);
  std::string::~string((void *)(p_anon_0 + 1408));
  *(_DWORD *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1344));
  *(_DWORD *)(((p_anon_0 + 1344) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) = 0;
  v18 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1472) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1472);
  if ( *(char *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1567) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 1567) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1536, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1536), v18, rowa);
  std::string::operator=(rowa._M_string_length + 360, p_anon_0 + 1536);
  std::string::~string((void *)(p_anon_0 + 1536));
  *(_DWORD *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1472));
  *(_DWORD *)(((p_anon_0 + 1472) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1664) >> 3) + 0x7FFF8000) = 0;
  v19 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1600) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1600);
  if ( *(char *)(((p_anon_0 + 1664) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1695) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1695) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1664, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1664), v19, rowa);
  std::string::operator=(rowa._M_string_length + 392, p_anon_0 + 1664);
  std::string::~string((void *)(p_anon_0 + 1664));
  *(_DWORD *)(((p_anon_0 + 1664) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1600));
  *(_DWORD *)(((p_anon_0 + 1600) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1792) >> 3) + 0x7FFF8000) = 0;
  v20 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1728) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1728);
  if ( *(char *)(((p_anon_0 + 1792) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1823) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 1823) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1792, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1792), v20, rowa);
  std::string::operator=(rowa._M_string_length + 424, p_anon_0 + 1792);
  std::string::~string((void *)(p_anon_0 + 1792));
  *(_DWORD *)(((p_anon_0 + 1792) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1728));
  *(_DWORD *)(((p_anon_0 + 1728) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1920) >> 3) + 0x7FFF8000) = 0;
  v21 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1856) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1856);
  if ( *(char *)(((p_anon_0 + 1920) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1951) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1951) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1920, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1920), v21, rowa);
  std::string::operator=(rowa._M_string_length + 456, p_anon_0 + 1920);
  std::string::~string((void *)(p_anon_0 + 1920));
  *(_DWORD *)(((p_anon_0 + 1920) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1856));
  *(_DWORD *)(((p_anon_0 + 1856) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2048) >> 3) + 0x7FFF8000) = 0;
  v22 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1984) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1984);
  if ( *(char *)(((p_anon_0 + 2048) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2079) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 2079) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2048, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2048), v22, rowa);
  std::string::operator=(rowa._M_string_length + 488, p_anon_0 + 2048);
  std::string::~string((void *)(p_anon_0 + 2048));
  *(_DWORD *)(((p_anon_0 + 2048) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1984));
  *(_DWORD *)(((p_anon_0 + 1984) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8100) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 264) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    __asan_stack_free_6(p_anon_0, 2112LL, &rowa._anon_0);
  }
};

// Line 828: range 000000000CE442DE-000000000CE44583
void __cdecl t_textmap_config::t_textmap_config(t_textmap_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->delete_time);
  std::string::basic_string(&this->en);
  std::string::basic_string(&this->sc);
  std::string::basic_string(&this->tc);
  std::string::basic_string(&this->fr);
  std::string::basic_string(&this->de);
  std::string::basic_string(&this->es);
  std::string::basic_string(&this->pt);
  std::string::basic_string(&this->ru);
  std::string::basic_string(&this->jp);
  std::string::basic_string(&this->kr);
  std::string::basic_string(&this->th);
  std::string::basic_string(&this->vn);
  std::string::basic_string(&this->id);
  std::string::basic_string(&this->tr);
  std::string::basic_string(&this->it);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_textmap_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 828: range 000000000D3BB940-000000000D3BBC0D
void __cdecl t_textmap_config::t_textmap_config(t_textmap_config *const this, t_textmap_config *a2)
{
  mysqlpp::sql_int_unsigned text_id; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  text_id = a2->text_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->text_id = text_id;
  std::string::basic_string(&this->delete_time, &a2->delete_time);
  std::string::basic_string(&this->en, &a2->en);
  std::string::basic_string(&this->sc, &a2->sc);
  std::string::basic_string(&this->tc, &a2->tc);
  std::string::basic_string(&this->fr, &a2->fr);
  std::string::basic_string(&this->de, &a2->de);
  std::string::basic_string(&this->es, &a2->es);
  std::string::basic_string(&this->pt, &a2->pt);
  std::string::basic_string(&this->ru, &a2->ru);
  std::string::basic_string(&this->jp, &a2->jp);
  std::string::basic_string(&this->kr, &a2->kr);
  std::string::basic_string(&this->th, &a2->th);
  std::string::basic_string(&this->vn, &a2->vn);
  std::string::basic_string(&this->id, &a2->id);
  std::string::basic_string(&this->tr, &a2->tr);
  std::string::basic_string(&this->it, &a2->it);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 828: range 000000000D0F08E2-000000000D0F0A08
void __cdecl t_textmap_config::~t_textmap_config(t_textmap_config *const this)
{
  std::string::~string(&this->it);
  std::string::~string(&this->tr);
  std::string::~string(&this->id);
  std::string::~string(&this->vn);
  std::string::~string(&this->th);
  std::string::~string(&this->kr);
  std::string::~string(&this->jp);
  std::string::~string(&this->ru);
  std::string::~string(&this->pt);
  std::string::~string(&this->es);
  std::string::~string(&this->de);
  std::string::~string(&this->fr);
  std::string::~string(&this->tc);
  std::string::~string(&this->sc);
  std::string::~string(&this->en);
  std::string::~string(&this->delete_time);
};

// Line 848: range 000000000CDA5686-000000000CDA7214
int32_t __cdecl DbLocalConfigMgr::loadDbTextmapConfig(
        DbLocalConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  time_t Now; // rsi
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  std::logic_error *exception; // rdi
  _DWORD *v12; // rax
  mysqlpp::sql_int_unsigned text_id; // ecx
  int TimeByStr; // edi
  common::milog::MiLogStream *v15; // r14
  const char *v16; // rax
  int v17; // r15d
  std::unordered_map<unsigned int,std::string>::mapped_type *v18; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v19; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v20; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v21; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v22; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v23; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v24; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v25; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v26; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v27; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v28; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v29; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v30; // rax
  std::unordered_map<unsigned int,std::string>::mapped_type *v31; // rax
  data::DbTextmapConfig *v32; // r8
  std::unordered_map<unsigned int,std::string>::mapped_type *v33; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::DbTextmapConfig>,false,false>,bool> v34; // rax
  common::milog::MiLogStream *v35; // rcx
  _DWORD *v36; // rax
  int v37; // edx
  int v38; // r15d
  std::vector<t_textmap_config>::size_type v39; // rdx
  unsigned __int64 v40; // rax
  std::vector<t_textmap_config> *__for_range; // [rsp+28h] [rbp-628h]
  __gnu_cxx::__normal_iterator<t_textmap_config*,std::vector<t_textmap_config> >::reference row; // [rsp+30h] [rbp-620h]
  char v46[1552]; // [rsp+40h] [rbp-610h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1504LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "25 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 8 15 __for_begi"
                        "n:873 320 8 13 __for_end:873 352 24 11 row_vec:860 416 32 11 now_str:853 480 32 9 <unknown> 544 "
                        "32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 64 10 config:875 832 544 9 query:854";
  *(_QWORD *)(v3 + 16) = DbLocalConfigMgr::loadDbTextmapConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -234556924;
  v5[536862726] = -234556924;
  v5[536862727] = -234556924;
  v5[536862728] = -234556924;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862745] = -218959118;
  v5[536862763] = -202116109;
  v5[536862764] = -202116109;
  v5[536862765] = -202116109;
  v5[536862766] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v2 = -1;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      Now = 32LL;
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 416), Now);
    v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) )
    {
      v7 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 832, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 832), v7, "select ");
    v8 = std::operator<<<std::char_traits<char>>(
           v3 + 832,
           "text_id, delete_time, en, sc, tc, fr, de, es, pt, ru, jp, kr, th, vn, id, tr, it ");
    v9 = std::operator<<<std::char_traits<char>>(v8, " from t_textmap_config where delete_time>'");
    v10 = std::operator<<<char>(v9, v3 + 416);
    std::operator<<<std::char_traits<char>>(v10, "'");
    std::vector<t_textmap_config>::vector((std::vector<t_textmap_config> *const)(v3 + 352));
    mysqlpp::Query::storein<std::vector<t_textmap_config>>(
      (mysqlpp::Query *const)(v3 + 832),
      (std::vector<t_textmap_config> *)(v3 + 352));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 832)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<t_textmap_config> *)(v3 + 352);
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<t_textmap_config>::iterator *)(v3 + 288) = std::vector<t_textmap_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<t_textmap_config>::iterator *)(v3 + 320) = std::vector<t_textmap_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<t_textmap_config *,std::vector<t_textmap_config>>(
              (const __gnu_cxx::__normal_iterator<t_textmap_config*,std::vector<t_textmap_config> > *)(v3 + 288),
              (const __gnu_cxx::__normal_iterator<t_textmap_config*,std::vector<t_textmap_config> > *)(v3 + 320)) )
    {
      row = __gnu_cxx::__normal_iterator<t_textmap_config *,std::vector<t_textmap_config>>::operator*((const __gnu_cxx::__normal_iterator<t_textmap_config*,std::vector<t_textmap_config> > *const)(v3 + 288));
      v12 = (_DWORD *)(((v3 + 736) >> 3) + 2147450880);
      *v12 = 0;
      v12[1] = 0;
      data::DbTextmapConfig::DbTextmapConfig((data::DbTextmapConfig *const)(v3 + 736));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      text_id = row->text_id;
      if ( *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 736);
      *(_DWORD *)(v3 + 736) = text_id;
      TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->delete_time);
      if ( *(_BYTE *)(((v3 + 740) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 32 + 4) & 7) + 3) >= *(_BYTE *)(((v3 + 740) >> 3) + 0x7FFF8000) )
      {
        TimeByStr = v3 + 740;
        __asan_report_store4(v3 + 740);
      }
      *(_DWORD *)(v3 + 740) = TimeByStr;
      if ( *(_DWORD *)(v3 + 740) )
      {
        if ( (unsigned __int8)std::string::empty(&row->en) != 1 )
        {
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 48);
          *(_DWORD *)(v3 + 48) = 1;
          v18 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 48));
          std::string::operator=(v18, &row->en);
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->sc) != 1 )
        {
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64);
          *(_DWORD *)(v3 + 64) = 2;
          v19 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 64));
          std::string::operator=(v19, &row->sc);
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->tc) != 1 )
        {
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 80);
          *(_DWORD *)(v3 + 80) = 3;
          v20 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 80));
          std::string::operator=(v20, &row->tc);
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->fr) != 1 )
        {
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 96);
          *(_DWORD *)(v3 + 96) = 4;
          v21 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 96));
          std::string::operator=(v21, &row->fr);
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->de) != 1 )
        {
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 112);
          *(_DWORD *)(v3 + 112) = 5;
          v22 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 112));
          std::string::operator=(v22, &row->de);
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->es) != 1 )
        {
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 128);
          *(_DWORD *)(v3 + 128) = 6;
          v23 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 128));
          std::string::operator=(v23, &row->es);
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->pt) != 1 )
        {
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 144);
          *(_DWORD *)(v3 + 144) = 7;
          v24 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 144));
          std::string::operator=(v24, &row->pt);
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->ru) != 1 )
        {
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 160);
          *(_DWORD *)(v3 + 160) = 8;
          v25 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 160));
          std::string::operator=(v25, &row->ru);
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->jp) != 1 )
        {
          *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 176);
          *(_DWORD *)(v3 + 176) = 9;
          v26 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 176));
          std::string::operator=(v26, &row->jp);
          *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->kr) != 1 )
        {
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 192);
          *(_DWORD *)(v3 + 192) = 10;
          v27 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 192));
          std::string::operator=(v27, &row->kr);
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->th) != 1 )
        {
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 208);
          *(_DWORD *)(v3 + 208) = 11;
          v28 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 208));
          std::string::operator=(v28, &row->th);
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->vn) != 1 )
        {
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 224);
          *(_DWORD *)(v3 + 224) = 12;
          v29 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 224));
          std::string::operator=(v29, &row->vn);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->id) != 1 )
        {
          *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 240);
          *(_DWORD *)(v3 + 240) = 13;
          v30 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 240));
          std::string::operator=(v30, &row->id);
          *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->tr) != 1 )
        {
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 256);
          *(_DWORD *)(v3 + 256) = 14;
          v31 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 256));
          std::string::operator=(v31, &row->tr);
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        }
        if ( (unsigned __int8)std::string::empty(&row->it) != 1 )
        {
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 272);
          *(_DWORD *)(v3 + 272) = 15;
          v33 = std::unordered_map<unsigned int,std::string>::operator[](
                  (std::unordered_map<unsigned int,std::string> *const)(v3 + 744),
                  (std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 272));
          std::string::operator=(v33, &row->it);
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
        }
        v34 = std::unordered_map<unsigned int,data::DbTextmapConfig>::emplace<unsigned int &,data::DbTextmapConfig&>(
                &this->textmap_config_map,
                (unsigned int *)(v3 + 736),
                (data::DbTextmapConfig *)(v3 + 736),
                (unsigned int *)&this->textmap_config_map,
                v32);
        if ( !v34.second )
        {
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_local_config_mgr.cpp",
            "loadDbTextmapConfig",
            902);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 736);
          common::milog::MiLogStream::operator()(v35, aTextIdU_0, *(unsigned int *)(v3 + 736));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_local_config_mgr.cpp",
          "loadDbTextmapConfig",
          880);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = (const char *)std::string::c_str(&row->delete_time);
        common::milog::MiLogStream::operator()(v15, "getTimeByStr delete_time: %s fails", v16);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v17 = 0;
      }
      data::DbTextmapConfig::~DbTextmapConfig((data::DbTextmapConfig *const)(v3 + 736));
      v36 = (_DWORD *)(((v3 + 736) >> 3) + 2147450880);
      *v36 = -117901064;
      v36[1] = -117901064;
      if ( v17 != 1 )
      {
        v37 = 0;
        goto LABEL_99;
      }
      __gnu_cxx::__normal_iterator<t_textmap_config *,std::vector<t_textmap_config>>::operator++((__gnu_cxx::__normal_iterator<t_textmap_config*,std::vector<t_textmap_config> > *const)(v3 + 288));
    }
    v37 = 1;
LABEL_99:
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v37 == 1 )
    {
      *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 608, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 608),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "loadDbTextmapConfig",
        906);
      v39 = std::vector<t_textmap_config>::size((const std::vector<t_textmap_config> *const)(v3 + 352));
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 608),
        "load %lu config from t_textmap_config",
        v39);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v38 = 1;
    }
    else
    {
      v38 = 0;
    }
    std::vector<t_textmap_config>::~vector((std::vector<t_textmap_config> *const)(v3 + 352));
    v40 = ((v3 + 352) >> 3) + 2147450880;
    *(_WORD *)v40 = -1800;
    *(_BYTE *)(v40 + 2) = -8;
    if ( v38 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 832));
    std::string::~string((void *)(v3 + 416));
  }
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80AC) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B4) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1504LL, v46);
  }
  return v2;
};

// Line 920: range 000000000CDA7216-000000000CDA7726
int32_t __cdecl DbLocalConfigMgr::checkDbTextmapConfig(DbLocalConfigMgr *const this, TxtConfigMgr *a2)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::unordered_map<unsigned int,std::string> *p_multi_text_map; // rcx
  const std::unordered_map<unsigned int,std::string> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rcx
  int v10; // edx
  int v11; // eax
  int32_t result; // eax
  data::DbTextmapConfigMap *__for_range; // [rsp+10h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DbTextmapConfig>,false,false>::reference v14; // [rsp+18h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DbTextmapConfig> >::type *config; // [rsp+28h] [rbp-138h]
  char v16[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 9 <unknown> 64 8 15 __for_begin:922 96 8 13 __for_end:922 128 8 8 iter:924 160 8 9 <unkno"
                        "wn> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbLocalConfigMgr::checkDbTextmapConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->textmap_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::DbTextmapConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DbTextmapConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::DbTextmapConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::DbTextmapConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DbTextmapConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DbTextmapConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DbTextmapConfig>,false> *)(v3 + 96)) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DbTextmapConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DbTextmapConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::DbTextmapConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DbTextmapConfig> >::type *)std::get<1ul,unsigned int const,data::DbTextmapConfig>(v14);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_multi_text_map = &config->multi_text_map;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48);
    *(_DWORD *)(v3 + 48) = 1;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::string>::find(
                                                                                    p_multi_text_map,
                                                                                    (const std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v7 = &config->multi_text_map;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::string>::end(v7);
    v8 = std::__detail::operator==<std::pair<unsigned int const,std::string>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v3 + 128),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "checkDbTextmapConfig",
        927);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(config);
      }
      common::milog::MiLogStream::operator()(v9, aTextIdU, config->text_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 != 1 )
    {
      v11 = 0;
      goto LABEL_27;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DbTextmapConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DbTextmapConfig>,false,false> *const)(v3 + 64));
  }
  v11 = 1;
LABEL_27:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 935: range 000000000CDA7728-000000000CDA79B3
std::vector<data::AnnounceConfig> *__cdecl DbLocalConfigMgr::findActiveAnnounceConfig(
        std::vector<data::AnnounceConfig> *retstr,
        const DbLocalConfigMgr *const this,
        uint32_t cur_time)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false> *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::DbAnnounceConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AnnounceConfig> >::type *config; // [rsp+38h] [rbp-88h]
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnnounceConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnnounceConfig>,false>::__node_type *)"2 32 8 15 __for_begin:937 64 8 13 __for_end:937";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnnounceConfig>,false>::__node_type *)DbLocalConfigMgr::findActiveAnnounceConfig;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::vector<data::AnnounceConfig>::vector(retstr);
  __for_range = &this->announce_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_cur = std::unordered_map<unsigned int,data::AnnounceConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_cur = std::unordered_map<unsigned int,data::AnnounceConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AnnounceConfig>,false>(v3 + 4, v3 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false>::operator*(v3 + 4);
    std::get<0ul,unsigned int const,data::AnnounceConfig>(v9);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::AnnounceConfig> >::type *)std::get<1ul,unsigned int const,data::AnnounceConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->end_time);
    }
    if ( cur_time < config->end_time )
      std::vector<data::AnnounceConfig>::push_back(retstr, config);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnnounceConfig>,false,false>::operator++(v3 + 4);
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnnounceConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 949: range 000000000CDA79B4-000000000CDA7C3C
__int64 __fastcall DbLocalConfigMgr::replaceTextWithLanguageType(
        const DbLocalConfigMgr *const this,
        uint32_t text_id,
        uint32_t language_type,
        const std::string *original_text,
        std::string *textmap)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  char v16[160]; // [rsp+20h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 11 text_id:948 48 4 17 language_type:948 64 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = DbLocalConfigMgr::replaceTextWithLanguageType;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862723] = -202116109;
  *(_DWORD *)(v5 + 32) = text_id;
  *(_DWORD *)(v5 + 48) = language_type;
  if ( *(_DWORD *)(v5 + 32) )
  {
    if ( (unsigned int)DbLocalConfigMgr::findTextmap(this, *(_DWORD *)(v5 + 32), *(_DWORD *)(v5 + 48), textmap) )
    {
      if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 64, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/db_data_manual/db_local_config_mgr.cpp",
        "replaceTextWithLanguageType",
        954);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
             (common::milog::MiLogStream *const)(v5 + 64),
             (const char (*)[13])"findTextmap ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v9, (const char (*)[2])":");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    std::string::operator=(textmap, original_text);
    result = 0LL;
  }
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
