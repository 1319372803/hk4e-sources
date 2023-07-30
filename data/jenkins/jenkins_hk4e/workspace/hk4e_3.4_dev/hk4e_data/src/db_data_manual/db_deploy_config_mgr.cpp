// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_deploy_config_mgr.cpp

// Line 24: range 000000000CD66788-000000000CD66E23
int32_t __cdecl DbDeployConfigMgr::loadConfig(
        DbDeployConfigMgr *const this,
        uint32_t load_type,
        common::midb::MySqlMgr *mysql_mgr,
        const Flag<ConfigOption> *flag)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  uint16_t MysqlIndexByDbConfigType; // dx
  int32_t DbRegionConfig; // r14d
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
  char v25[304]; // [rsp+30h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 16 11 conn_ptr:33 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DbDeployConfigMgr::loadConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862727] = -202116109;
  if ( (load_type & 0x10000) != 0 )
  {
    MysqlIndexByDbConfigType = DbConfigMgr::getMysqlIndexByDbConfigType(DB_CONFIG_DEPLOY);
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
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "loadConfig",
        36);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 128), "grab connect failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      DbRegionConfig = DbDeployConfigMgr::loadDbRegionConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32));
      v10 = DbDeployConfigMgr::loadDbClientConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | DbRegionConfig;
      v11 = DbDeployConfigMgr::loadDbClientBindConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v10;
      v12 = DbDeployConfigMgr::loadDbDeployTextmapConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v11;
      v13 = DbDeployConfigMgr::loadDbLoginWhiteIpConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v12;
      v14 = DbDeployConfigMgr::loadDbAreaConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v13;
      v15 = DbDeployConfigMgr::loadDbAuthkeyConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v14;
      v16 = DbDeployConfigMgr::loadDbRsakeyConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v15;
      v17 = DbDeployConfigMgr::loadDbSdkConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v16;
      v18 = DbDeployConfigMgr::loadDbClientRegionConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v17;
      v19 = DbDeployConfigMgr::loadDbChannelIdConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v18;
      v20 = DbDeployConfigMgr::loadDbAntiCheatClientChannelIdConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v19;
      v21 = DbDeployConfigMgr::loadDbClientChannelIdConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) | v20;
      if ( v21 | DbDeployConfigMgr::loadDbSecurityFileConfig(this, (common::midb::MysqlConnPtr *)(v4 + 32)) )
      {
        if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadConfig",
          56);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v22, "loadConfig failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
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
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadConfig",
      27);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v4 + 64), "skip load");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    v7 = 0;
  }
  result = v7;
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 63: range 000000000CD66E24-000000000CD6705F
int32_t __cdecl DbDeployConfigMgr::rewriteConfig(DbDeployConfigMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t v4; // r14d
  int v5; // r14d
  int v6; // r14d
  int v7; // r14d
  int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  char v11[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = DbDeployConfigMgr::rewriteConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  v4 = DbDeployConfigMgr::rewriteDbRegionConfig(this);
  v5 = DbDeployConfigMgr::rewriteDbClientConfig(this) | v4;
  v6 = DbDeployConfigMgr::rewriteDbClientRegionConfig(this) | v5;
  v7 = DbDeployConfigMgr::rewriteDbAntiCheatClientChannelIdConfig(this) | v6;
  v8 = DbDeployConfigMgr::rewriteDbClientChannelIdConfig(this) | v7;
  if ( v8 | DbDeployConfigMgr::rewriteDbSecurityFileConfig(this) )
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
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "rewriteConfig",
      71);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator()(v9, "rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v1 )
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

// Line 78: range 000000000CD67060-000000000CD6734E
int32_t __cdecl DbDeployConfigMgr::checkConfig(DbDeployConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  char v16[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = DbDeployConfigMgr::checkDbRegionConfig(this, txt_config_mgr);
  v6 = DbDeployConfigMgr::checkDbClientConfig(this, txt_config_mgr) | v5;
  v7 = DbDeployConfigMgr::checkDbClientBindConfig(this, txt_config_mgr) | v6;
  v8 = DbDeployConfigMgr::checkDbDeployTextmapConfig(this, txt_config_mgr) | v7;
  v9 = DbDeployConfigMgr::checkDbSdkConfig(this, txt_config_mgr) | v8;
  v10 = DbDeployConfigMgr::checkDbClientRegionConfig(this, txt_config_mgr) | v9;
  v11 = DbDeployConfigMgr::checkDbChannelIdConfig(this, txt_config_mgr) | v10;
  v12 = DbDeployConfigMgr::checkDbAntiCheatClientChannelIdConfig(this, txt_config_mgr) | v11;
  v13 = DbDeployConfigMgr::checkDbClientChannelIdConfig(this, txt_config_mgr) | v12;
  if ( v13 | DbDeployConfigMgr::checkDbSecurityFileConfig(this, txt_config_mgr) )
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
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "checkConfig",
      90);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 32),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator()(v14, "checkConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v16 == (char *)v2 )
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

// Line 98: range 000000000CD67350-000000000CD674D9
const data::DbRegionConfig *__cdecl DbDeployConfigMgr::findDbRegionConfig(
        const DbDeployConfigMgr *const this,
        const std::string *name)
{
  std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::DbRegionConfigMap *p_db_region_config_map; // rdx
  data::DbRegionConfigMap *v6; // rdx
  const data::DbRegionConfig *result; // rax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)"2 32 8 7 iter:99 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)DbDeployConfigMgr::findDbRegionConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_db_region_config_map = &this->db_region_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_node = std::map<std::string,data::DbRegionConfig>::find(p_db_region_config_map, name)._M_node;
  v6 = &this->db_region_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_node = std::map<std::string,data::DbRegionConfig>::end(v6)._M_node;
  if ( std::operator==(v2 + 4, v2 + 8) )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator->(v2 + 4)->second;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 104: range 000000000CD674DA-000000000CD67663
const data::DbClientConfig *__cdecl DbDeployConfigMgr::findDbClientConfig(
        const DbDeployConfigMgr *const this,
        const std::string *version)
{
  std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbClientConfig> >::_Self *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::DbClientConfigMap *p_db_client_config_map; // rdx
  data::DbClientConfigMap *v6; // rdx
  const data::DbClientConfig *result; // rax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbClientConfig> >::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbClientConfig> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbClientConfig> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbClientConfig> >::_Base_ptr)"2 32 8 8 iter:105 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbClientConfig> >::_Base_ptr)DbDeployConfigMgr::findDbClientConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_db_client_config_map = &this->db_client_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_node = std::map<std::string,data::DbClientConfig>::find(p_db_client_config_map, version)._M_node;
  v6 = &this->db_client_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_node = std::map<std::string,data::DbClientConfig>::end(v6)._M_node;
  if ( std::operator==(v2 + 4, v2 + 8) )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<std::string const,data::DbClientConfig>>::operator->(v2 + 4)->second;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbClientConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 111: range 000000000CD67664-000000000CD67912
const data::DbClientRegionConfig *__cdecl DbDeployConfigMgr::findDbClientRegionConfig(
        const DbDeployConfigMgr *const this,
        const std::string *client_version,
        const std::string *region_name)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  _DWORD *v6; // rax
  data::DbClientRegionConfigMap *p_db_client_region_config_map; // rdx
  const data::DbClientRegionConfig *result; // rax
  char v10[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 8 iter:112 64 8 9 <unknown> 96 64 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::findDbClientRegionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862725] = -202116109;
  if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 96, 64LL);
  }
  std::make_pair<std::string const&,std::string const&>(
    (std::pair<std::string,std::string > *)(v3 + 96),
    client_version,
    region_name);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::pair<std::string,std::string >,data::DbClientRegionConfig>::const_iterator *)(v3 + 32) = std::map<std::pair<std::string,std::string>,data::DbClientRegionConfig>::find(&this->db_client_region_config_map, (const std::map<std::pair<std::string,std::string >,data::DbClientRegionConfig>::key_type *)(v3 + 96));
  std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v3 + 96));
  v6 = (_DWORD *)(((v3 + 96) >> 3) + 2147450880);
  *v6 = -117901064;
  v6[1] = -117901064;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
  p_db_client_region_config_map = &this->db_client_region_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::pair<std::string,std::string >,data::DbClientRegionConfig>::const_iterator *)(v3 + 64) = std::map<std::pair<std::string,std::string>,data::DbClientRegionConfig>::end(p_db_client_region_config_map);
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<std::string,std::string >,data::DbClientRegionConfig> >::_Self *)(v3 + 32),
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<std::string,std::string >,data::DbClientRegionConfig> >::_Self *)(v3 + 64)) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_const_iterator<std::pair<std::pair const<std::string,std::allocator<char>>,data::DbClientRegionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<std::string,std::string >,data::DbClientRegionConfig> > *const)(v3 + 32))->second;
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 117: range 000000000CD67914-000000000CD67AA3
const data::DbAreaConfig *__cdecl DbDeployConfigMgr::findDbAreaConfig(
        const DbDeployConfigMgr *const this,
        const std::string *area_type)
{
  std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbAreaConfig> >::_Self *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::DbAreaConfigMap *p_db_area_config_map; // rdx
  data::DbAreaConfigMap *v6; // rdx
  const data::DbAreaConfig *result; // rax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbAreaConfig> >::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbAreaConfig> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbAreaConfig> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbAreaConfig> >::_Base_ptr)"2 32 8 8 iter:118 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbAreaConfig> >::_Base_ptr)DbDeployConfigMgr::findDbAreaConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_db_area_config_map = &this->db_area_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_node = std::map<std::string,data::DbAreaConfig>::find(p_db_area_config_map, area_type)._M_node;
  v6 = &this->db_area_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_node = std::map<std::string,data::DbAreaConfig>::end(v6)._M_node;
  if ( std::operator==(v2 + 4, v2 + 8) )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<std::string const,data::DbAreaConfig>>::operator->(v2 + 4)->second;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbAreaConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 123: range 000000000CD67AA4-000000000CD67C58
const data::DbAuthkeyConfig *__fastcall DbDeployConfigMgr::findDbAuthkeyConfig(
        const DbDeployConfigMgr *const this,
        uint32_t version)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DbAuthkeyConfigMap *p_db_authkey_config_map; // rdx
  data::DbAuthkeyConfigMap *v6; // rdx
  const data::DbAuthkeyConfig *result; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 version:122 64 8 8 iter:124 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::findDbAuthkeyConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = version;
  p_db_authkey_config_map = &this->db_authkey_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbAuthkeyConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::DbAuthkeyConfig>::find(
                                                                                 p_db_authkey_config_map,
                                                                                 (const std::map<unsigned int,data::DbAuthkeyConfig>::key_type *)(v2 + 48));
  v6 = &this->db_authkey_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbAuthkeyConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::DbAuthkeyConfig>::end(v6);
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbAuthkeyConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbAuthkeyConfig> >::_Self *)(v2 + 96)) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbAuthkeyConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbAuthkeyConfig> > *const)(v2 + 64))->second;
  }
  if ( v8 == (char *)v2 )
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

// Line 130: range 000000000CD67C5A-000000000CD67F4D
const data::DbAntiCheatClientChannelIdConfig *__fastcall DbDeployConfigMgr::findDbAntiCheatClientChannelIdConfig(
        const DbDeployConfigMgr *const this,
        const std::string *version,
        uint32_t channel_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  data::DbAntiCheatClientChannelIdConfigMap *p_db_anti_cheat_client_channel_id_config_map; // rdx
  const data::DbAntiCheatClientChannelIdConfig *result; // rax
  char v10[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 14 channel_id:129 48 8 8 iter:131 80 8 9 <unknown> 112 40 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::findDbAntiCheatClientChannelIdConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = channel_id;
  if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 151) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 105) & 7) >= *(_BYTE *)(((v3 + 151) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 112, 40LL);
  }
  std::make_pair<std::string const&,unsigned int &>(
    (std::pair<std::string,unsigned int> *)(v3 + 112),
    version,
    (unsigned int *)(v3 + 32));
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::const_iterator *)(v3 + 48) = std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::find(&this->db_anti_cheat_client_channel_id_config_map, (const std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::key_type *)(v3 + 112));
  std::pair<std::string,unsigned int>::~pair((std::pair<std::string,unsigned int> *const)(v3 + 112));
  v6 = ((v3 + 112) >> 3) + 2147450880;
  *(_DWORD *)v6 = -117901064;
  *(_BYTE *)(v6 + 4) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
  p_db_anti_cheat_client_channel_id_config_map = &this->db_anti_cheat_client_channel_id_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::const_iterator *)(v3 + 80) = std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::end(p_db_anti_cheat_client_channel_id_config_map);
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::_Self *)(v3 + 48),
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::_Self *)(v3 + 80)) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_const_iterator<std::pair<std::pair const<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> > *const)(v3 + 48))->second;
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 136: range 000000000CD67F4E-000000000CD6827B
const data::DbClientChannelIdConfig *__fastcall DbDeployConfigMgr::findDbClientChannelIdConfig(
        const DbDeployConfigMgr *const this,
        const std::string *version,
        uint32_t channel_id,
        uint32_t sub_channel_id,
        const std::string *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  unsigned __int64 v9; // rax
  data::DbClientChannelIdConfigMap *p_db_client_channel_id_config_map; // rdx
  const data::DbClientChannelIdConfig *result; // rax
  unsigned int *v12; // [rsp+0h] [rbp-130h]
  char v15[272]; // [rsp+20h] [rbp-110h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(224LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 4 14 channel_id:135 64 4 18 sub_channel_id:135 80 8 8 iter:137 112 8 9 <unknown> 144 40 9 <unknown>";
  *(_QWORD *)(v6 + 16) = DbDeployConfigMgr::findDbClientChannelIdConfig;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = 61956;
  v8[536862722] = -234881024;
  v8[536862723] = 62194;
  v8[536862723] = -234881024;
  v8[536862724] = 62194;
  v8[536862725] = -218103808;
  v8[536862726] = -202116109;
  *(_DWORD *)(v6 + 48) = channel_id;
  *(_DWORD *)(v6 + 64) = sub_channel_id;
  if ( *(char *)(((v6 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v6 + 183) >> 3) + 0x7FFF8000) != 0
    && (char)((v6 - 73) & 7) >= *(_BYTE *)(((v6 + 183) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v6 + 144, 40LL);
  }
  std::make_tuple<std::string const&,unsigned int &,unsigned int &>(
    (std::tuple<std::string,unsigned int,unsigned int> *)(v6 + 144),
    version,
    (unsigned int *)(v6 + 48),
    (unsigned int *)(v6 + 64),
    a5,
    a6,
    v12);
  if ( *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::const_iterator *)(v6 + 80) = std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::find(&this->db_client_channel_id_config_map, (const std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::key_type *)(v6 + 144));
  std::tuple<std::string,unsigned int,unsigned int>::~tuple((std::tuple<std::string,unsigned int,unsigned int> *const)(v6 + 144));
  v9 = ((v6 + 144) >> 3) + 2147450880;
  *(_DWORD *)v9 = -117901064;
  *(_BYTE *)(v9 + 4) = -8;
  *(_BYTE *)(((v6 + 112) >> 3) + 0x7FFF8000) = 0;
  p_db_client_channel_id_config_map = &this->db_client_channel_id_config_map;
  if ( *(_BYTE *)(((v6 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::const_iterator *)(v6 + 112) = std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::end(p_db_client_channel_id_config_map);
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::_Self *)(v6 + 80),
         (const std::_Rb_tree_const_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::_Self *)(v6 + 112)) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_const_iterator<std::pair<std::tuple<std::string,unsigned int,unsigned int> const,data::DbClientChannelIdConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> > *const)(v6 + 80))->second;
  }
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 139: range 000000000D3B06A4-000000000D3B073E
void __cdecl t_security_file_config::t_security_file_config(
        t_security_file_config *const this,
        t_security_file_config *a2)
{
  const char *table_override; // rdx

  std::string::basic_string(this, a2);
  mysqlpp::String::String(&this->file_data, &a2->file_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 144: range 000000000CD6827C-000000000CD6846D
int32_t __cdecl DbDeployConfigMgr::findBindRegionConfigVec(
        const DbDeployConfigMgr *const this,
        const std::string *client_version,
        uint32_t channel_id,
        std::vector<const data::DbRegionConfig*> *region_vec)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t result; // eax
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DbDeployConfigMgr::findBindRegionConfigVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862723] = -202116109;
  if ( DbDeployConfigMgr::findBindRegionConfigVecInDb(this, client_version, channel_id, region_vec) )
  {
    std::allocator<char>::allocator(v4 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v4 + 64),
      off_1A193400,
      (const std::allocator<char> *)(v4 + 48));
    DbDeployConfigMgr::findBindRegionConfigVecInDb(this, (const std::string *)(v4 + 64), channel_id, region_vec);
    std::string::~string((void *)(v4 + 64));
    *(_DWORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v4 + 48);
  }
  result = 0;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 157: range 000000000CD6846E-000000000CD6866E
bool __cdecl DbDeployConfigMgr::isClientBindRegion(
        const DbDeployConfigMgr *const this,
        const std::string *client_version,
        uint32_t channel_id,
        const std::string *region_name)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool isClientBindRegionInDb; // r14
  bool result; // al
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DbDeployConfigMgr::isClientBindRegion;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862723] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 64),
    off_1A193400,
    (const std::allocator<char> *)(v4 + 48));
  isClientBindRegionInDb = DbDeployConfigMgr::isClientBindRegionInDb(
                             this,
                             (const std::string *)(v4 + 64),
                             channel_id,
                             region_name);
  std::string::~string((void *)(v4 + 64));
  *(_DWORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  result = isClientBindRegionInDb
        || DbDeployConfigMgr::isClientBindRegionInDb(this, client_version, channel_id, region_name);
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 169: range 000000000CD68670-000000000CD69041
bool __cdecl DbDeployConfigMgr::isLoginWhiteIp(const DbDeployConfigMgr *const this, const std::string *ip_0)
{
  bool v2; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int v16; // edx
  bool result; // al
  std::vector<DbIpConfig> *__for_range; // [rsp+10h] [rbp-220h]
  const DbIpConfig *ip_config; // [rsp+18h] [rbp-218h]
  char v20[528]; // [rsp+20h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 13 input_net:172 64 8 15 __for_begin:184 96 8 13 __for_end:184 128 16 6 ec:171 160 32 12 "
                        "input_ip:170 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::isLoginWhiteIp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 160, 32LL);
  }
  std::operator+<char>((std::string *)(v3 + 160), ip_0, "/32");
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 128);
  *(_DWORD *)(v3 + 128) = 0;
  if ( *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 124) & 7) >= *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(v3 + 132);
  }
  *(_BYTE *)(v3 + 132) = 0;
  if ( *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::asio::ip::make_network_v4((const std::string *)(v3 + 32), (boost::system::error_code *)(v3 + 160));
  if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v3 + 128)) )
  {
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "isLoginWhiteIp",
      175);
    v6 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(
           (common::milog::MiLogStream *const)(v3 + 224),
           (const char (*)[4])"ip:");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v3 + 160));
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v7,
           (const char (*)[28])" make_network_v4 fails, ec:");
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 288, 32LL);
    }
    boost::system::error_code::message[abi:cxx11](
      (std::string *)(v3 + 288),
      (const boost::system::error_code *const)(v3 + 128));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 288));
    std::string::~string((void *)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = 0;
  }
  else if ( !boost::asio::ip::network_v4::is_host((const boost::asio::ip::network_v4 *const)(v3 + 32)) )
  {
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
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "isLoginWhiteIp",
      180);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 352),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v9, (const char (*)[4])"ip:");
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 160));
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" is_host false");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v2 = 0;
  }
  else
  {
    __for_range = &this->login_white_ip_vec;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<DbIpConfig>::const_iterator *)(v3 + 64) = std::vector<DbIpConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<DbIpConfig>::const_iterator *)(v3 + 96) = std::vector<DbIpConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<DbIpConfig const*,std::vector<DbIpConfig>>(
              (const __gnu_cxx::__normal_iterator<const DbIpConfig*,std::vector<DbIpConfig> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<const DbIpConfig*,std::vector<DbIpConfig> > *)(v3 + 96)) )
      {
        v16 = 1;
        goto LABEL_40;
      }
      ip_config = __gnu_cxx::__normal_iterator<DbIpConfig const*,std::vector<DbIpConfig>>::operator*((const __gnu_cxx::__normal_iterator<const DbIpConfig*,std::vector<DbIpConfig> > *const)(v3 + 64));
      if ( boost::asio::ip::network_v4::is_subnet_of(
             (const boost::asio::ip::network_v4 *const)(v3 + 32),
             &ip_config->ip_net)
        || boost::asio::ip::operator==((const boost::asio::ip::network_v4 *)(v3 + 32), &ip_config->ip_net) )
      {
        break;
      }
      __gnu_cxx::__normal_iterator<DbIpConfig const*,std::vector<DbIpConfig>>::operator++((__gnu_cxx::__normal_iterator<const DbIpConfig*,std::vector<DbIpConfig> > *const)(v3 + 64));
    }
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "isLoginWhiteIp",
      189);
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[10])"input_ip:");
    v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, ip_0);
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v14,
            (const char (*)[20])" match db white ip:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &ip_config->db_ip_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = 1;
    v16 = 0;
LABEL_40:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v16 == 1 )
      v2 = 0;
  }
  std::string::~string((void *)(v3 + 160));
  result = v2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 198: range 000000000CD69042-000000000CD69642
__int64 __fastcall DbDeployConfigMgr::findDeployTextmap(
        const DbDeployConfigMgr *const this,
        uint32_t text_id,
        uint32_t language,
        std::string *content)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *p_deploy_multi_lang_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *v8; // rdx
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  bool v12; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::pointer v13; // rax
  bool v14; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::pointer v15; // rax
  std::map<unsigned int,std::string> *textmap; // [rsp+28h] [rbp-188h]
  char v19[384]; // [rsp+30h] [rbp-180h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 9 <unknown> 64 4 11 text_id:197 80 4 12 language:197 96 8 8 iter:199 128 8 9 <unknown> 1"
                        "60 8 13 text_iter:207 192 8 9 <unknown> 224 8 11 en_iter:215 256 8 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DbDeployConfigMgr::findDeployTextmap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 64) = text_id;
  *(_DWORD *)(v4 + 80) = language;
  p_deploy_multi_lang_map = &this->deploy_multi_lang_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::find(p_deploy_multi_lang_map, (const std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::key_type *)(v4 + 64));
  v8 = &this->deploy_multi_lang_map;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::const_iterator *)(v4 + 128) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,std::string>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v4 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v4 + 128));
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "findDeployTextmap",
      202);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            (common::milog::MiLogStream *const)(v4 + 288),
            (const char (*)[20])"Not found text_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    textmap = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::string>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false,false> *const)(v4 + 96))->second;
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,std::string>::const_iterator *)(v4 + 160) = std::map<unsigned int,std::string>::find(
                                                                          textmap,
                                                                          (const std::map<unsigned int,std::string>::key_type *)(v4 + 80));
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,std::string>::const_iterator *)(v4 + 192) = std::map<unsigned int,std::string>::end(textmap);
    v12 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v4 + 160),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v4 + 192));
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > > *const)(v4 + 160));
      std::string::operator=(content, &v13->second);
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
      *(std::map<unsigned int,std::string>::const_iterator *)(v4 + 224) = std::map<unsigned int,std::string>::find(
                                                                            textmap,
                                                                            (const std::map<unsigned int,std::string>::key_type *)(v4 + 48));
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::map<unsigned int,std::string>::const_iterator *)(v4 + 256) = std::map<unsigned int,std::string>::end(textmap);
      v14 = std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v4 + 224),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v4 + 256));
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
      {
        v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > > *const)(v4 + 224));
        std::string::operator=(content, &v15->second);
        result = 0LL;
      }
      else
      {
        result = 0xFFFFFFFFLL;
      }
    }
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 225: range 000000000CD69644-000000000CD69865
int32_t __cdecl DbDeployConfigMgr::findRegionIdByRegionName(
        const DbDeployConfigMgr *const this,
        const std::string *name,
        uint32_t *id)
{
  std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::DbRegionConfigMap *p_db_region_config_map; // rdx
  data::DbRegionConfigMap *v7; // rdx
  bool v8; // al
  std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::pointer v9; // rax
  uint32_t v10; // ecx
  int32_t result; // eax
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> > *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> > *)v4;
  }
  v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)1102416563;
  v3[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)"2 32 8 8 iter:226 64 8 9 <unknown>";
  v3[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)DbDeployConfigMgr::findRegionIdByRegionName;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  p_db_region_config_map = &this->db_region_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_node = std::map<std::string,data::DbRegionConfig>::find(p_db_region_config_map, name)._M_node;
  v7 = &this->db_region_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_node = std::map<std::string,data::DbRegionConfig>::end(v7)._M_node;
  v8 = std::operator!=(v3 + 4, v3 + 8);
  *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator->(v3 + 4);
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->second);
    }
    v10 = v9->second.id;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(id);
    }
    *id = v10;
    result = 0;
  }
  else
  {
    result = -1;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 236: range 000000000CD69884-000000000CD69E27
int32_t __cdecl transformPsnRegionToUpper(std::set<std::string> *psn_region_set)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __gnu_cxx::__normal_iterator<char*,std::string > v4; // r15
  __gnu_cxx::__normal_iterator<char const*,std::string > v5; // r14
  __gnu_cxx::__normal_iterator<char const*,std::string > v6; // rax
  transformPsnRegionToUpper::<lambda(unsigned char)> v7; // cl
  std::remove_reference<std::string&>::type *v8; // rax
  std::pair<std::_Rb_tree_const_iterator<std::string >,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // r14d
  int v13; // edx
  std::set<std::string> *v14; // rdx
  int32_t result; // eax
  int32_t v16; // [rsp+14h] [rbp-18Ch]
  std::_Rb_tree_const_iterator<std::string >::reference psn_region; // [rsp+28h] [rbp-178h]
  char v18[368]; // [rsp+30h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 8 15 __for_begin:238 80 8 13 __for_end:238 112 32 22 mutable_psn_region:240 176 32 9 <unkno"
                        "wn> 240 48 23 temp_psn_region_set:237";
  *(_QWORD *)(v1 + 16) = transformPsnRegionToUpper;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862722] = -234881024;
  v3[536862723] = 62194;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862729] = -202116109;
  std::set<std::string>::set((std::set<std::string> *const)(v1 + 240));
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::set<std::string>::iterator *)(v1 + 48) = std::set<std::string>::begin(psn_region_set);
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::set<std::string>::iterator *)(v1 + 80) = std::set<std::string>::end(psn_region_set);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v1 + 48),
            (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v1 + 80)) )
  {
    psn_region = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v1 + 48));
    *(_DWORD *)(((v1 + 112) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v1 + 112, psn_region);
    v4._M_current = (char *)std::string::begin(v1 + 112);
    v5._M_current = (const char *)std::string::end(psn_region);
    v6._M_current = (const char *)std::string::begin(psn_region);
    std::transform<__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,transformPsnRegionToUpper(std::set<std::string> &)::{lambda(unsigned char)#1}>(
      v6,
      v5,
      v4,
      v7);
    v8 = std::move<std::string &>((std::string *)(v1 + 112));
    v9 = std::set<std::string>::insert((std::set<std::string> *const)(v1 + 240), v8);
    if ( !v9.second )
    {
      *(_DWORD *)(((v1 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 49) & 7) >= *(_BYTE *)(((v1 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "transformPsnRegionToUpper",
        246);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v1 + 176),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v10,
              (const char (*)[22])"duplicate psn_region:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, psn_region);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 176));
      *(_DWORD *)(((v1 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v16 = -1;
      v12 = 0;
    }
    else
    {
      v12 = 1;
    }
    std::string::~string((void *)(v1 + 112));
    *(_DWORD *)(((v1 + 112) >> 3) + 0x7FFF8000) = -117901064;
    if ( v12 != 1 )
    {
      v13 = 0;
      goto LABEL_19;
    }
    std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v1 + 48));
  }
  v13 = 1;
LABEL_19:
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v13 == 1 )
  {
    v14 = std::move<std::set<std::string> &>((std::set<std::string> *)(v1 + 240));
    std::set<std::string>::operator=(psn_region_set, v14);
    v16 = 0;
  }
  std::set<std::string>::~set((std::set<std::string> *const)(v1 + 240));
  result = v16;
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 243: range 000000000CD69866-000000000CD69883
unsigned __int8 __cdecl transformPsnRegionToUpper(std::set<std::string> &)::{lambda(unsigned char)#1}::operator()(
        const transformPsnRegionToUpper::<lambda(unsigned char)> *const __closure,
        unsigned __int8 c)
{
  return toupper(c);
};

// Line 255: range 000000000CE3F0EA-000000000CE3F563
void __cdecl t_region_config::t_region_config(t_region_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->title);
  std::string::basic_string(&this->region_type);
  std::string::basic_string(&this->area_type);
  std::string::basic_string(&this->dispatch_url);
  std::string::basic_string(&this->muipserver_url);
  std::string::basic_string(&this->account_url);
  std::string::basic_string(&this->account_url_bak);
  std::string::basic_string(&this->account_inner_url);
  std::string::basic_string(&this->pay_callback_url);
  std::string::basic_string(&this->resource_url);
  std::string::basic_string(&this->resource_url_bak);
  std::string::basic_string(&this->data_url);
  std::string::basic_string(&this->data_url_bak);
  std::string::basic_string(&this->feedback_url);
  std::string::basic_string(&this->bulletin_url);
  std::string::basic_string(&this->handbook_url);
  std::string::basic_string(&this->stop_server_config_str);
  std::string::basic_string(&this->stop_register_config_str);
  std::string::basic_string(&this->region_custom_config_str);
  std::string::basic_string(&this->client_secret_key);
  std::string::basic_string(&this->server_secret_key);
  std::string::basic_string(&this->official_community_url);
  std::string::basic_string(&this->psn_region);
  std::string::basic_string(&this->user_center_url);
  std::string::basic_string(&this->account_bind_url);
  std::string::basic_string(&this->cdkey_url);
  std::string::basic_string(&this->privacy_policy_url);
  std::string::basic_string(&this->rsa_key_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_region_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 255: range 000000000D3A7E3C-000000000D3A8328
void __cdecl t_region_config::t_region_config(t_region_config *const this, t_region_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
  mysqlpp::sql_int_unsigned sdk_env; // ecx
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
  std::string::basic_string(&this->name, &a2->name);
  std::string::basic_string(&this->title, &a2->title);
  std::string::basic_string(&this->region_type, &a2->region_type);
  std::string::basic_string(&this->area_type, &a2->area_type);
  std::string::basic_string(&this->dispatch_url, &a2->dispatch_url);
  std::string::basic_string(&this->muipserver_url, &a2->muipserver_url);
  std::string::basic_string(&this->account_url, &a2->account_url);
  std::string::basic_string(&this->account_url_bak, &a2->account_url_bak);
  if ( *(_BYTE *)(((unsigned __int64)&a2->sdk_env >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sdk_env >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sdk_env);
  }
  sdk_env = a2->sdk_env;
  if ( *(_BYTE *)(((unsigned __int64)&this->sdk_env >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sdk_env >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sdk_env);
  }
  this->sdk_env = sdk_env;
  std::string::basic_string(&this->account_inner_url, &a2->account_inner_url);
  std::string::basic_string(&this->pay_callback_url, &a2->pay_callback_url);
  std::string::basic_string(&this->resource_url, &a2->resource_url);
  std::string::basic_string(&this->resource_url_bak, &a2->resource_url_bak);
  std::string::basic_string(&this->data_url, &a2->data_url);
  std::string::basic_string(&this->data_url_bak, &a2->data_url_bak);
  std::string::basic_string(&this->feedback_url, &a2->feedback_url);
  std::string::basic_string(&this->bulletin_url, &a2->bulletin_url);
  std::string::basic_string(&this->handbook_url, &a2->handbook_url);
  std::string::basic_string(&this->stop_server_config_str, &a2->stop_server_config_str);
  std::string::basic_string(&this->stop_register_config_str, &a2->stop_register_config_str);
  std::string::basic_string(&this->region_custom_config_str, &a2->region_custom_config_str);
  std::string::basic_string(&this->client_secret_key, &a2->client_secret_key);
  std::string::basic_string(&this->server_secret_key, &a2->server_secret_key);
  std::string::basic_string(&this->official_community_url, &a2->official_community_url);
  std::string::basic_string(&this->psn_region, &a2->psn_region);
  std::string::basic_string(&this->user_center_url, &a2->user_center_url);
  std::string::basic_string(&this->account_bind_url, &a2->account_bind_url);
  std::string::basic_string(&this->cdkey_url, &a2->cdkey_url);
  std::string::basic_string(&this->privacy_policy_url, &a2->privacy_policy_url);
  std::string::basic_string(&this->rsa_key_list, &a2->rsa_key_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 255: range 000000000D0CD91E-000000000D0CDB2E
void __cdecl t_region_config::~t_region_config(t_region_config *const this)
{
  std::string::~string(&this->rsa_key_list);
  std::string::~string(&this->privacy_policy_url);
  std::string::~string(&this->cdkey_url);
  std::string::~string(&this->account_bind_url);
  std::string::~string(&this->user_center_url);
  std::string::~string(&this->psn_region);
  std::string::~string(&this->official_community_url);
  std::string::~string(&this->server_secret_key);
  std::string::~string(&this->client_secret_key);
  std::string::~string(&this->region_custom_config_str);
  std::string::~string(&this->stop_register_config_str);
  std::string::~string(&this->stop_server_config_str);
  std::string::~string(&this->handbook_url);
  std::string::~string(&this->bulletin_url);
  std::string::~string(&this->feedback_url);
  std::string::~string(&this->data_url_bak);
  std::string::~string(&this->data_url);
  std::string::~string(&this->resource_url_bak);
  std::string::~string(&this->resource_url);
  std::string::~string(&this->pay_callback_url);
  std::string::~string(&this->account_inner_url);
  std::string::~string(&this->account_url_bak);
  std::string::~string(&this->account_url);
  std::string::~string(&this->muipserver_url);
  std::string::~string(&this->dispatch_url);
  std::string::~string(&this->area_type);
  std::string::~string(&this->region_type);
  std::string::~string(&this->title);
  std::string::~string(&this->name);
};

// Line 289: range 000000000CD69E28-000000000CD6B020
int32_t __cdecl DbDeployConfigMgr::loadDbRegionConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // r15d
  mysqlpp::sql_int_unsigned id; // ecx
  mysqlpp::sql_int_unsigned sdk_env; // ecx
  bool v12; // r15
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // r15d
  data::DbRegionConfig *v18; // rax
  int v19; // r15d
  std::vector<t_region_config>::size_type v20; // rdx
  unsigned __int64 v21; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-964h]
  std::vector<t_region_config>::reference row; // [rsp+30h] [rbp-960h]
  char v25[2384]; // [rsp+40h] [rbp-950h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2336LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 1 9 <unknown> 48 24 11 row_vec:300 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <unknown>"
                        " 304 32 9 <unknown> 368 32 9 <unknown> 432 544 9 query:294 1104 1104 10 object:320";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbRegionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862750] = -219021312;
  v5[536862751] = -218959118;
  v5[536862752] = -218959118;
  v5[536862753] = -218959118;
  v5[536862754] = 62194;
  v5[536862789] = -202116109;
  v5[536862790] = -202116109;
  v5[536862791] = -202116109;
  v5[536862792] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 432, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 432), v6, "select ");
    std::operator<<<std::char_traits<char>>(
      v3 + 432,
      "`id`,`name`,`title`,`region_type`,`area_type`,`dispatch_url`,`muipserver_url`,`account_url`,`account_url_bak`, `sd"
      "k_env`, `account_inner_url`,`pay_callback_url`,`resource_url`,`resource_url_bak`,`data_url`,`data_url_bak`,`feedba"
      "ck_url`,`bulletin_url`,`handbook_url`,`stop_server_config_str`,`stop_register_config_str`,`region_custom_config_st"
      "r`, `client_secret_key`, `server_secret_key`, `official_community_url`, `psn_region`, `user_center_url`, `account_"
      "bind_url`, `cdkey_url`, `privacy_policy_url`, `rsa_key_list` from t_region_config");
    std::vector<t_region_config>::vector((std::vector<t_region_config> *const)(v3 + 48));
    mysqlpp::Query::storein<std::vector<t_region_config>>(
      (mysqlpp::Query *const)(v3 + 432),
      (std::vector<t_region_config> *)(v3 + 48));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 432)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0; idx < std::vector<t_region_config>::size((const std::vector<t_region_config> *const)(v3 + 48)); ++idx )
    {
      row = std::vector<t_region_config>::operator[]((std::vector<t_region_config> *const)(v3 + 48), idx);
      if ( DbDeployConfigMgr::findDbRegionConfig(this, &row->name) )
      {
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 112, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 112),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbRegionConfig",
          315);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 112),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v8, "find repeat name in t_region_config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
      }
      else
      {
        __asan_unpoison_stack_memory(v3 + 1104, 1104LL);
        data::DbRegionConfig::DbRegionConfig((data::DbRegionConfig *const)(v3 + 1104));
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        id = row->id;
        if ( *(_BYTE *)(((v3 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1104) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 1104);
        *(_DWORD *)(v3 + 1104) = id;
        std::string::operator=(v3 + 1112, &row->name);
        std::string::operator=(v3 + 1144, &row->title);
        std::string::operator=(v3 + 1176, &row->region_type);
        std::string::operator=(v3 + 1208, &row->area_type);
        std::string::operator=(v3 + 1240, &row->dispatch_url);
        std::string::operator=(v3 + 1272, &row->muipserver_url);
        if ( *(_BYTE *)(((unsigned __int64)&row->sdk_env >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->sdk_env >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->sdk_env);
        }
        sdk_env = row->sdk_env;
        if ( *(_BYTE *)(((v3 + 1368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1368) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 1368);
        *(_DWORD *)(v3 + 1368) = sdk_env;
        std::string::operator=(v3 + 1376, &row->account_inner_url);
        std::string::operator=(v3 + 1408, &row->pay_callback_url);
        std::string::operator=(v3 + 1440, &row->resource_url);
        std::string::operator=(v3 + 1472, &row->resource_url_bak);
        std::string::operator=(v3 + 1504, &row->data_url);
        std::string::operator=(v3 + 1536, &row->data_url_bak);
        std::string::operator=(v3 + 1568, &row->feedback_url);
        std::string::operator=(v3 + 1600, &row->bulletin_url);
        std::string::operator=(v3 + 1632, &row->handbook_url);
        std::string::operator=(v3 + 1664, &row->stop_server_config_str);
        std::string::operator=(v3 + 1696, &row->stop_register_config_str);
        std::string::operator=(v3 + 1728, &row->region_custom_config_str);
        std::string::operator=(v3 + 1856, &row->client_secret_key);
        std::string::operator=(v3 + 1888, &row->server_secret_key);
        std::string::operator=(v3 + 1952, &row->official_community_url);
        std::string::operator=(v3 + 2032, &row->user_center_url);
        std::string::operator=(v3 + 2064, &row->account_bind_url);
        std::string::operator=(v3 + 2096, &row->cdkey_url);
        std::string::operator=(v3 + 2128, &row->privacy_policy_url);
        DbDeployConfigMgr::splitToStringSetByComma(this, &row->psn_region, (std::set<std::string> *)(v3 + 1984));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 32);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 176),
          ",",
          (const std::allocator<char> *)(v3 + 32));
        v12 = common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
                &row->rsa_key_list,
                (const std::string *)(v3 + 176),
                (std::set<unsigned int> *)(v3 + 2160),
                1) != 0;
        std::string::~string((void *)(v3 + 176));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 32);
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
        {
          *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 240, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 240),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_deploy_config_mgr.cpp",
            "loadDbRegionConfig",
            353);
          v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                  (common::milog::MiLogStream *const)(v3 + 240),
                  (const char (*)[8])"region:");
          v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &row->name);
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" rsa_list:");
          v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &row->rsa_key_list);
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" split failed.");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
          *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
        }
        else
        {
          v18 = std::map<std::string,data::DbRegionConfig>::operator[](
                  &this->db_region_config_map,
                  (const std::map<std::string,data::DbRegionConfig>::key_type *)(v3 + 1112));
          data::DbRegionConfig::operator=(v18, (const data::DbRegionConfig *)(v3 + 1104));
          v17 = 1;
        }
        data::DbRegionConfig::~DbRegionConfig((data::DbRegionConfig *const)(v3 + 1104));
        v9 = v17 == 1;
      }
      __asan_poison_stack_memory(v3 + 1104, 1104LL);
      if ( !v9 )
      {
        v19 = 0;
        goto LABEL_36;
      }
    }
    *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbRegionConfig",
      358);
    v20 = std::vector<t_region_config>::size((const std::vector<t_region_config> *const)(v3 + 48));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 304),
      "load %lu config from t_region_config",
      v20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
    *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v19 = 1;
LABEL_36:
    std::vector<t_region_config>::~vector((std::vector<t_region_config> *const)(v3 + 48));
    v21 = ((v3 + 48) >> 3) + 2147450880;
    *(_WORD *)v21 = -1800;
    *(_BYTE *)(v21 + 2) = -8;
    if ( v19 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 432));
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF811C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862752) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147451000 - (((_DWORD)v5 + 2147451008) & 0xFFFFFFF8) + 172) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2336LL, v25);
  }
  return v2;
};

// Line 369: range 000000000CD6B022-000000000CD6C068
int32_t __cdecl DbDeployConfigMgr::rewriteDbRegionConfig(DbDeployConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  const google::protobuf::Timestamp *v12; // rax
  const google::protobuf::Timestamp *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  const google::protobuf::Timestamp *v22; // rax
  const google::protobuf::Timestamp *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  const std::string *p_server_secret_key; // rdi
  __int64 p_region_custom_config_str; // rsi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  google::protobuf::int64 v34; // [rsp+0h] [rbp-4A0h]
  int thisa; // [rsp+8h] [rbp-498h]
  data::DbRegionConfigMap *__for_range; // [rsp+10h] [rbp-490h]
  std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::reference __in; // [rsp+18h] [rbp-488h]
  const std::string *name; // [rsp+20h] [rbp-480h]
  std::tuple_element<1,std::pair<const std::string,data::DbRegionConfig> >::type *region_config; // [rsp+28h] [rbp-478h]
  int v40; // [rsp+30h] [rbp-470h] BYREF
  char v41; // [rsp+38h] [rbp-468h]

  thisa = (int)this;
  v2 = (unsigned __int64)&v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1088LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 10 option:371 64 8 15 __for_begin:375 96 8 13 __for_end:375 128 32 9 <unknown> 192 32 9 "
                        "<unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 40 10 "
                        "status:370 592 40 9 <unknown> 672 40 9 <unknown> 752 272 10 reader:373";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::rewriteDbRegionConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959360;
  v4[536862738] = 62194;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
  v4[536862742] = -218959360;
  v4[536862743] = 62194;
  v4[536862752] = -202116109;
  v4[536862753] = -202116109;
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)(v2 + 512));
  google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v2 + 48));
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = 1;
  Json::Reader::Reader((Json::Reader *)(v2 + 752));
  __for_range = &this->db_region_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::string,data::DbRegionConfig>::iterator *)(v2 + 64) = std::map<std::string,data::DbRegionConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::string,data::DbRegionConfig>::iterator *)(v2 + 96) = std::map<std::string,data::DbRegionConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *)(v2 + 96)) )
    {
      v11 = 1;
      goto LABEL_44;
    }
    __in = std::_Rb_tree_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> > *const)(v2 + 64));
    name = std::get<0ul,std::string const,data::DbRegionConfig>(__in);
    region_config = std::get<1ul,std::string const,data::DbRegionConfig>(__in);
    if ( (unsigned __int8)std::string::empty(&region_config->stop_server_config_str) != 1 )
    {
      v5 = ((v2 + 592) >> 3) + 2147450880;
      *(_DWORD *)v5 = 0;
      *(_BYTE *)(v5 + 4) = 0;
      if ( *(char *)(((v2 + 592) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 631) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 119) & 7) >= *(_BYTE *)(((v2 + 631) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 592, 40LL);
      }
      google::protobuf::util::JsonStringToMessage(
        (google::protobuf::util::Status *)(v2 + 592),
        v34,
        thisa,
        (int)__for_range,
        (int)__in,
        (int)name,
        region_config,
        v40,
        v41);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)(v2 + 512),
        (const google::protobuf::util::Status *)(v2 + 592));
      google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 592));
      v6 = ((v2 + 592) >> 3) + 2147450880;
      *(_DWORD *)v6 = -117901064;
      *(_BYTE *)(v6 + 4) = -8;
      if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 512)) )
      {
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 128, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "rewriteDbRegionConfig",
          382);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 128),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               v7,
               (const char (*)[48])"JsonStringToMessage stop_server_config failed: ");
        v9 = common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>(
               v8,
               (const google::protobuf::util::Status *)(v2 + 512));
        v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" region: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, name);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v11 = 0;
        goto LABEL_44;
      }
      v12 = proto::StopServerConfig::begin_time(&region_config->stop_server_config);
      v34 = google::protobuf::Timestamp::seconds(v12);
      v13 = proto::StopServerConfig::end_time(&region_config->stop_server_config);
      if ( v34 >= google::protobuf::Timestamp::seconds(v13) )
      {
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "rewriteDbRegionConfig",
          387);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])"region: ");
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, name);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v16, (const char (*)[44])byte_1A1947A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v11 = 0;
        goto LABEL_44;
      }
    }
    std::string::clear(&region_config->stop_server_config_str);
    if ( (unsigned __int8)std::string::empty(&region_config->stop_register_config_str) != 1 )
    {
      v17 = ((v2 + 672) >> 3) + 2147450880;
      *(_DWORD *)v17 = 0;
      *(_BYTE *)(v17 + 4) = 0;
      if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 711) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 57) & 7) >= *(_BYTE *)(((v2 + 711) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 672, 40LL);
      }
      google::protobuf::util::JsonStringToMessage(
        (google::protobuf::util::Status *)(v2 + 672),
        v34,
        thisa,
        (int)__for_range,
        (int)__in,
        (int)name,
        region_config,
        v40,
        v41);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)(v2 + 512),
        (const google::protobuf::util::Status *)(v2 + 672));
      google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 672));
      v18 = ((v2 + 672) >> 3) + 2147450880;
      *(_DWORD *)v18 = -117901064;
      *(_BYTE *)(v18 + 4) = -8;
      if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 512)) )
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "rewriteDbRegionConfig",
          398);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                v19,
                (const char (*)[45])"stop_register_config initFromJsonStr failed ");
        v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])" region: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, name);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v11 = 0;
        goto LABEL_44;
      }
      v22 = proto::StopRegisterConfig::begin_time(&region_config->stop_register_config);
      v34 = google::protobuf::Timestamp::seconds(v22);
      v23 = proto::StopRegisterConfig::end_time(&region_config->stop_register_config);
      if ( v34 >= google::protobuf::Timestamp::seconds(v23) )
      {
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "rewriteDbRegionConfig",
          403);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])"region: ");
        v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, name);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v26, (const char (*)[46])byte_1A194860);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v11 = 0;
        goto LABEL_44;
      }
    }
    std::string::clear(&region_config->stop_register_config_str);
    if ( (unsigned __int8)std::string::empty(&region_config->region_custom_config_str) != 1 )
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      p_server_secret_key = &region_config->server_secret_key;
      p_region_custom_config_str = (__int64)&region_config->region_custom_config_str;
      if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
      {
        p_region_custom_config_str = 32LL;
        p_server_secret_key = (const std::string *)(v2 + 384);
        __asan_report_store_n(v2 + 384, 32LL);
      }
      common::tools::EncrynptTool::encrynpt(
        (std::string *)(v2 + 384),
        (const std::string *)p_region_custom_config_str,
        p_server_secret_key);
      std::string::operator=(&region_config->region_custom_config_str_encrypted, v2 + 384);
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::string::clear(&region_config->region_custom_config_str);
    if ( transformPsnRegionToUpper(&region_config->psn_region_set) )
      break;
    std::_Rb_tree_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> > *const)(v2 + 64));
  }
  *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 448, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 448),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_deploy_config_mgr.cpp",
    "rewriteDbRegionConfig",
    420);
  v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v30 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          v29,
          (const char (*)[37])"rewrite psn_region_set fail, region:");
  v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, name);
  v32 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v31, (const char (*)[17])" psn_region_set:");
  common::milog::MiLogStream::operator<<<std::string>(v32, &region_config->psn_region_set);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
  *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
  v1 = -1;
  v11 = 0;
LABEL_44:
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
    v1 = 0;
  Json::Reader::~Reader((Json::Reader *const)(v2 + 752));
  google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 512));
  if ( &v40 == (int *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1088LL, &v40);
  }
  return v1;
};

// Line 395: range 000000000CEFA17E-000000000CEFA76C
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_area_config<(mysqlpp::sql_dummy_type)0>(t_area_config *s, const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // r14
  const mysqlpp::String *v6; // r14
  const mysqlpp::String *v7; // r14
  std::string rowa; // [rsp+0h] [rbp-200h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "7 32 16 28 ignore_schema_mismatches:936 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unk"
                              "nown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_area_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v5, rowa);
  std::string::operator=(rowa._M_string_length, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v6 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v6, rowa);
  std::string::operator=(rowa._M_string_length + 32, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = 0;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 320);
  if ( *(char *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 384, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 384), v7, rowa);
  std::string::operator=(rowa._M_string_length + 64, p_anon_0 + 384);
  std::string::~string((void *)(p_anon_0 + 384));
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 320));
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8030) = 0LL;
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
  }
};

// Line 428: range 000000000CD6C06A-000000000CD6CF0A
int32_t __cdecl DbDeployConfigMgr::checkDbRegionConfig(DbDeployConfigMgr *const this, const TxtConfigMgr *a2)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const google::protobuf::Timestamp *v6; // rax
  google::protobuf::uint32 v7; // edx
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *p_deploy_multi_lang_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  google::protobuf::uint32 v17; // edx
  char v18; // r14
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *v19; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *v20; // rdx
  char v21; // dl
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // eax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  int32_t result; // eax
  char v45; // [rsp+Fh] [rbp-2A1h]
  data::DbRegionConfigMap *__for_range; // [rsp+20h] [rbp-290h]
  std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::reference v47; // [rsp+28h] [rbp-288h]
  std::tuple_element<0,std::pair<const std::string,data::DbRegionConfig> >::type *name; // [rsp+30h] [rbp-280h]
  std::tuple_element<1,const std::pair<const std::string,data::DbRegionConfig> >::type *config; // [rsp+38h] [rbp-278h]
  char v50[624]; // [rsp+40h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 11 text_id:433 48 4 19 content_text_id:440 64 8 15 __for_begin:429 96 8 13 __for_end:429"
                        " 128 8 9 <unknown> 160 8 9 <unknown> 192 8 9 <unknown> 224 8 9 <unknown> 256 32 9 <unknown> 320 "
                        "32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::checkDbRegionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -202116109;
  __for_range = &this->db_region_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::string,data::DbRegionConfig>::iterator *)(v3 + 64) = std::map<std::string,data::DbRegionConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::string,data::DbRegionConfig>::iterator *)(v3 + 96) = std::map<std::string,data::DbRegionConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *)(v3 + 64),
            (const std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *)(v3 + 96)) )
    {
      v27 = 1;
      goto LABEL_68;
    }
    v47 = std::_Rb_tree_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> > *const)(v3 + 64));
    name = std::get<0ul,std::string const,data::DbRegionConfig>(v47);
    config = (std::tuple_element<1,const std::pair<const std::string,data::DbRegionConfig> >::type *)std::get<1ul,std::string const,data::DbRegionConfig>(v47);
    v6 = proto::StopServerConfig::begin_time(&config->stop_server_config);
    if ( google::protobuf::Timestamp::seconds(v6) )
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v7 = proto::StopServerConfig::text_id(&config->stop_server_config);
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32);
      *(_DWORD *)(v3 + 32) = v7;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      p_deploy_multi_lang_map = &this->deploy_multi_lang_map;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::end(p_deploy_multi_lang_map);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      v9 = &this->deploy_multi_lang_map;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::find(v9, (const std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::key_type *)(v3 + 32));
      v10 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,std::string>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 160));
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "checkDbRegionConfig",
          436);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])"region: ");
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, name);
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])byte_1A194AC0);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])byte_1A117C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
      }
      else
      {
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v17 = proto::StopServerConfig::content_text_id(&config->stop_server_config);
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48);
        *(_DWORD *)(v3 + 48) = v17;
        v18 = 0;
        v45 = 0;
        if ( !*(_DWORD *)(v3 + 48) )
          goto LABEL_30;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        v19 = &this->deploy_multi_lang_map;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::end(v19);
        v18 = 1;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        v20 = &this->deploy_multi_lang_map;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::find(v20, (const std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::key_type *)(v3 + 48));
        v45 = 1;
        if ( std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,std::string>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 192),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 224)) )
        {
          v21 = 1;
        }
        else
        {
LABEL_30:
          v21 = 0;
        }
        if ( v45 )
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v18 )
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v21 )
        {
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_deploy_config_mgr.cpp",
            "checkDbRegionConfig",
            443);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])"region: ");
          v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, name);
          v25 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v24, (const char (*)[26])byte_1A194B00);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])byte_1A117C40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v16 != 1 )
      {
        v27 = 0;
        goto LABEL_68;
      }
    }
    if ( (unsigned __int8)std::string::empty(&config->area_type) != 1
      && !DbDeployConfigMgr::findDbAreaConfig(this, &config->area_type) )
    {
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "checkDbRegionConfig",
        451);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])"region: ");
      v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, name);
      v32 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v31, (const char (*)[20])byte_1A194B40);
      v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, &config->area_type);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])byte_1A117C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      v2 = -1;
      v27 = 0;
      goto LABEL_68;
    }
    if ( (unsigned __int8)std::string::empty(&config->client_secret_key)
      && (unsigned __int8)std::string::empty(&config->server_secret_key) != 1
      || (unsigned __int8)std::string::empty(&config->client_secret_key) != 1
      && (unsigned __int8)std::string::empty(&config->server_secret_key) )
    {
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "checkDbRegionConfig",
        459);
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v36 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v35, (const char (*)[9])"region: ");
      v37 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, name);
      v38 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v37, (const char (*)[47])byte_1A194B80);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v38, (const char (*)[10])byte_1A194BE0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      v2 = -1;
      v27 = 0;
      goto LABEL_68;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->sdk_env >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->sdk_env >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->sdk_env);
    }
    if ( !DbDeployConfigMgr::findSdkConfig(this, config->sdk_env) )
      break;
    std::_Rb_tree_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> > *const)(v3 + 64));
  }
  *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 512, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 512),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_deploy_config_mgr.cpp",
    "checkDbRegionConfig",
    466);
  v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 512),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, (const char (*)[9])"region: ");
  v41 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, name);
  v42 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v41, (const char (*)[19])byte_1A194C20);
  v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &config->sdk_env);
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v43, (const char (*)[7])byte_1A117C40);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
  v2 = -1;
  v27 = 0;
LABEL_68:
  if ( v27 == 1 )
    v2 = 0;
  result = v2;
  if ( v50 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};

// Line 463: range 000000000CF00026-000000000CF00435
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_security_file_config<(mysqlpp::sql_dummy_type)0>(
        t_security_file_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // r14
  __int64 v6; // r14
  std::string rowa; // [rsp+0h] [rbp-140h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "5 32 16 29 ignore_schema_mismatches:1592 64 16 9 <unknown> 96 16 9 <unknown> 128 32 9 <unk"
                              "nown> 192 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_security_file_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 128);
  if ( *(char *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 192, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 192), v5, rowa);
  std::string::operator=(rowa._M_string_length, p_anon_0 + 192);
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((p_anon_0 + 96) >> 3) + 0x7FFF8000) = 0;
  v6 = mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_WORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = 0;
  mysqlpp::String::String((mysqlpp::String *const)(p_anon_0 + 64));
  if ( *(_WORD *)(((p_anon_0 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16(p_anon_0 + 96);
  mysqlpp::String::conv<mysqlpp::String>(
    (const mysqlpp::String *const)(p_anon_0 + 96),
    (mysqlpp::String)__PAIR128__(p_anon_0 + 64, v6));
  mysqlpp::String::operator=(
    (mysqlpp::String *const)(rowa._M_string_length + 32),
    (const mysqlpp::String *)(p_anon_0 + 96));
  mysqlpp::String::~String((mysqlpp::String *const)(p_anon_0 + 96));
  *(_WORD *)(((p_anon_0 + 96) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::String::~String((mysqlpp::String *const)(p_anon_0 + 64));
  *(_WORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 474: range 000000000CEF41E8-000000000CEF4B62
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_client_config<(mysqlpp::sql_dummy_type)0>(t_client_config *s, const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // r14
  const mysqlpp::String *v9; // r14
  const mysqlpp::String *v10; // r14
  const mysqlpp::String *v11; // r14
  std::string rowa; // [rsp+0h] [rbp-300h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "11 32 16 28 ignore_schema_mismatches:474 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <un"
                              "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 "
                              "9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_client_config<(mysqlpp::sql_dummy_type)0>;
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
  v4[536862741] = -202116109;
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) )
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
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
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
  }
};

// Line 474: range 000000000CE3FF8A-000000000CE400A0
void __cdecl t_client_config::t_client_config(t_client_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->version);
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->stop_server_config_str);
  std::string::basic_string(&this->client_custom_config_str);
  std::string::basic_string(&this->dispatch_seed);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_client_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 474: range 000000000D3A8B4E-000000000D3A8CBB
void __cdecl t_client_config::t_client_config(t_client_config *const this, t_client_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
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
  std::string::basic_string(&this->version, &a2->version);
  std::string::basic_string(&this->name, &a2->name);
  std::string::basic_string(&this->stop_server_config_str, &a2->stop_server_config_str);
  std::string::basic_string(&this->client_custom_config_str, &a2->client_custom_config_str);
  std::string::basic_string(&this->dispatch_seed, &a2->dispatch_seed);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 474: range 000000000D0CF23C-000000000D0CF29C
void __cdecl t_client_config::~t_client_config(t_client_config *const this)
{
  std::string::~string(&this->dispatch_seed);
  std::string::~string(&this->client_custom_config_str);
  std::string::~string(&this->stop_server_config_str);
  std::string::~string(&this->name);
  std::string::~string(&this->version);
};

// Line 483: range 000000000CD6CF0C-000000000CD6D9EB
int32_t __cdecl DbDeployConfigMgr::loadDbClientConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  mysqlpp::sql_int_unsigned id; // ecx
  data::DbClientConfig *v11; // rax
  int v12; // r15d
  std::vector<t_client_config>::size_type v13; // rdx
  unsigned __int64 v14; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-5A4h]
  std::vector<t_client_config>::reference row; // [rsp+30h] [rbp-5A0h]
  char v18[1424]; // [rsp+40h] [rbp-590h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1376LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 24 11 row_vec:493 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 328 10 objec"
                        "t:513 704 544 9 query:488";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbClientConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862741] = -218959118;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  v5[536862762] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 704, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 704), v6, "select ");
    std::operator<<<std::char_traits<char>>(
      v3 + 704,
      "`id`,`version`,`name`,`stop_server_config_str`,`client_custom_config_str`, `dispatch_seed` from t_client_config");
    std::vector<t_client_config>::vector((std::vector<t_client_config> *const)(v3 + 48));
    mysqlpp::Query::storein<std::vector<t_client_config>>(
      (mysqlpp::Query *const)(v3 + 704),
      (std::vector<t_client_config> *)(v3 + 48));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 704)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0; idx < std::vector<t_client_config>::size((const std::vector<t_client_config> *const)(v3 + 48)); ++idx )
    {
      row = std::vector<t_client_config>::operator[]((std::vector<t_client_config> *const)(v3 + 48), idx);
      if ( DbDeployConfigMgr::findDbClientConfig(this, &row->version) )
      {
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 112, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 112),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbClientConfig",
          508);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 112),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v8, "find repeat version in t_client_config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
      }
      else
      {
        __asan_unpoison_stack_memory(v3 + 304, 328LL);
        data::DbClientConfig::DbClientConfig((data::DbClientConfig *const)(v3 + 304));
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        id = row->id;
        if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 304);
        *(_DWORD *)(v3 + 304) = id;
        std::string::operator=(v3 + 312, &row->version);
        std::string::operator=(v3 + 344, &row->name);
        std::string::operator=(v3 + 408, &row->stop_server_config_str);
        std::string::operator=(v3 + 440, &row->client_custom_config_str);
        std::string::operator=(v3 + 600, &row->dispatch_seed);
        v11 = std::map<std::string,data::DbClientConfig>::operator[](
                &this->db_client_config_map,
                (const std::map<std::string,data::DbClientConfig>::key_type *)(v3 + 312));
        data::DbClientConfig::operator=(v11, (const data::DbClientConfig *)(v3 + 304));
        data::DbClientConfig::~DbClientConfig((data::DbClientConfig *const)(v3 + 304));
        v9 = 1;
      }
      __asan_poison_stack_memory(v3 + 304, 328LL);
      if ( v9 != 1 )
      {
        v12 = 0;
        goto LABEL_27;
      }
    }
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbClientConfig",
      523);
    v13 = std::vector<t_client_config>::size((const std::vector<t_client_config> *const)(v3 + 48));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 176),
      "load %lu config from t_client_config",
      v13);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v12 = 1;
LABEL_27:
    std::vector<t_client_config>::~vector((std::vector<t_client_config> *const)(v3 + 48));
    v14 = ((v3 + 48) >> 3) + 2147450880;
    *(_WORD *)v14 = -1800;
    *(_BYTE *)(v14 + 2) = -8;
    if ( v12 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 704));
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF809C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A4) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1376LL, v18);
  }
  return v2;
};

// Line 534: range 000000000CD6D9EC-000000000CD6E3B8
int32_t __cdecl DbDeployConfigMgr::rewriteDbClientConfig(DbDeployConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  const std::string *p_server_secret_key; // rdi
  __int64 p_client_custom_config_str; // rsi
  unsigned __int64 v12; // rax
  int v13; // edx
  int32_t result; // eax
  data::DbClientConfigMap *__for_range; // [rsp+10h] [rbp-3B0h]
  std::_Rb_tree_iterator<std::pair<const std::string,data::DbClientConfig> >::reference __in; // [rsp+18h] [rbp-3A8h]
  const std::string *version; // [rsp+20h] [rbp-3A0h]
  std::tuple_element<1,std::pair<const std::string,data::DbClientConfig> >::type *client_config; // [rsp+28h] [rbp-398h]
  char v20[912]; // [rsp+30h] [rbp-390h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 10 option:536 48 8 15 __for_begin:540 80 8 13 __for_end:540 112 32 9 <unknown> 176 32 9 "
                        "<unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 40 10 status:535 448 40 9 value:548 528 272 10 reader:538";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::rewriteDbClientConfig;
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
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862735] = -218959360;
  v4[536862736] = 62194;
  v4[536862745] = -202116109;
  v4[536862746] = -202116109;
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)(v2 + 368));
  google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v2 + 32));
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 32);
  *(_BYTE *)(v2 + 32) = 1;
  Json::Reader::Reader((Json::Reader *)(v2 + 528));
  __for_range = &this->db_client_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::string,data::DbClientConfig>::iterator *)(v2 + 48) = std::map<std::string,data::DbClientConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::string,data::DbClientConfig>::iterator *)(v2 + 80) = std::map<std::string,data::DbClientConfig>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::string,data::DbClientConfig> >::_Self *)(v2 + 48),
            (const std::_Rb_tree_iterator<std::pair<const std::string,data::DbClientConfig> >::_Self *)(v2 + 80)) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::string const,data::DbClientConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,data::DbClientConfig> > *const)(v2 + 48));
    version = std::get<0ul,std::string const,data::DbClientConfig>(__in);
    client_config = std::get<1ul,std::string const,data::DbClientConfig>(__in);
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 112, 32LL);
    }
    DbDeployConfigMgr::findFirstRegionClientSecretKey[abi:cxx11]((std::string *)(v2 + 112), this);
    std::string::operator=(&client_config->client_secret_key, v2 + 112);
    std::string::~string((void *)(v2 + 112));
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
    *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    DbDeployConfigMgr::findFirstRegionServerSecretKey[abi:cxx11]((std::string *)(v2 + 176), this);
    std::string::operator=(&client_config->server_secret_key, v2 + 176);
    std::string::~string((void *)(v2 + 176));
    *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
    if ( (unsigned __int8)std::string::empty(&client_config->client_custom_config_str) != 1 )
    {
      v5 = ((v2 + 448) >> 3) + 2147450880;
      *(_DWORD *)v5 = 0;
      *(_BYTE *)(v5 + 4) = 0;
      Json::Value::Value(v2 + 448, 0LL);
      if ( !Json::Reader::parse(
              (Json::Reader *const)(v2 + 528),
              &client_config->client_custom_config_str,
              (Json::Value *)(v2 + 448),
              1) )
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
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "rewriteDbClientConfig",
          551);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 240),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])"version: ");
        v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, version);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v8, (const char (*)[29])byte_1A1950E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v9 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
        p_server_secret_key = &client_config->server_secret_key;
        p_client_custom_config_str = (__int64)&client_config->client_custom_config_str;
        if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
        {
          p_client_custom_config_str = 32LL;
          p_server_secret_key = (const std::string *)(v2 + 304);
          __asan_report_store_n(v2 + 304, 32LL);
        }
        common::tools::EncrynptTool::encrynpt(
          (std::string *)(v2 + 304),
          (const std::string *)p_client_custom_config_str,
          p_server_secret_key);
        std::string::operator=(&client_config->client_custom_config_str_encrypted, v2 + 304);
        std::string::~string((void *)(v2 + 304));
        *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v9 = 1;
      }
      Json::Value::~Value((Json::Value_0 *const)(v2 + 448));
      v12 = ((v2 + 448) >> 3) + 2147450880;
      *(_DWORD *)v12 = -117901064;
      *(_BYTE *)(v12 + 4) = -8;
      if ( v9 != 1 )
      {
        v13 = 0;
        goto LABEL_28;
      }
    }
    std::_Rb_tree_iterator<std::pair<std::string const,data::DbClientConfig>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,data::DbClientConfig> > *const)(v2 + 48));
  }
  v13 = 1;
LABEL_28:
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v13 == 1 )
    v1 = 0;
  Json::Reader::~Reader((Json::Reader *const)(v2 + 528));
  google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 368));
  result = v1;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 568: range 000000000CD6E3BA-000000000CD6E3CC
int32_t __cdecl DbDeployConfigMgr::checkDbClientConfig(DbDeployConfigMgr *const this, const TxtConfigMgr *a2)
{
  return 0;
};

// Line 586: range 000000000CEF54FC-000000000CEF5B4F
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_client_region_config<(mysqlpp::sql_dummy_type)0>(
        t_client_region_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // r14
  const mysqlpp::String *v9; // r14
  std::string rowa; // [rsp+0h] [rbp-200h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "7 32 16 28 ignore_schema_mismatches:586 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unk"
                              "nown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_client_region_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
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
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8030) = 0LL;
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
  }
};

// Line 586: range 000000000CE40436-000000000CE40503
void __cdecl t_client_region_config::t_client_region_config(
        t_client_region_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->client_version);
  std::string::basic_string(&this->region_name);
  std::string::basic_string(&this->client_region_custom_config_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_client_region_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 586: range 000000000D3A94EC-000000000D3A9614
void __cdecl t_client_region_config::t_client_region_config(
        t_client_region_config *const this,
        t_client_region_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
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
  std::string::basic_string(&this->client_version, &a2->client_version);
  std::string::basic_string(&this->region_name, &a2->region_name);
  std::string::basic_string(&this->client_region_custom_config_str, &a2->client_region_custom_config_str);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 586: range 000000000D0D0704-000000000D0D0742
void __cdecl t_client_region_config::~t_client_region_config(t_client_region_config *const this)
{
  std::string::~string(&this->client_region_custom_config_str);
  std::string::~string(&this->region_name);
  std::string::~string(&this->client_version);
};

// Line 593: range 000000000CD6E3CE-000000000CD6F013
int32_t __cdecl DbDeployConfigMgr::loadDbClientRegionConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  common::milog::MiLogStream *v8; // rax
  int v9; // edx
  unsigned __int64 v10; // rax
  mysqlpp::sql_int_unsigned id; // ecx
  _DWORD *v12; // rax
  data::DbClientRegionConfig *v13; // rax
  _DWORD *v14; // rax
  unsigned __int64 v15; // rax
  int v16; // r15d
  std::vector<t_client_region_config>::size_type v17; // rdx
  unsigned __int64 v18; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-584h]
  std::vector<t_client_region_config>::reference row; // [rsp+30h] [rbp-580h]
  char v22[1392]; // [rsp+40h] [rbp-570h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1344LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 24 11 row_vec:603 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 64 9 <unknow"
                        "n> 400 200 10 object:623 672 544 9 query:598";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbClientRegionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862738] = -234881024;
  v5[536862739] = -218959118;
  v5[536862740] = -218959118;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 672, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 672), v6, "select ");
    std::operator<<<std::char_traits<char>>(
      v3 + 672,
      "`id`,`client_version`,`region_name`,`client_region_custom_config_str` from t_client_region_config");
    std::vector<t_client_region_config>::vector((std::vector<t_client_region_config> *const)(v3 + 48));
    mysqlpp::Query::storein<std::vector<t_client_region_config>>(
      (mysqlpp::Query *const)(v3 + 672),
      (std::vector<t_client_region_config> *)(v3 + 48));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 672)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0;
          idx < std::vector<t_client_region_config>::size((const std::vector<t_client_region_config> *const)(v3 + 48));
          ++idx )
    {
      row = std::vector<t_client_region_config>::operator[]((std::vector<t_client_region_config> *const)(v3 + 48), idx);
      if ( DbDeployConfigMgr::findDbClientRegionConfig(this, &row->client_version, &row->region_name) )
      {
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 112, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 112),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbClientRegionConfig",
          618);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 112),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v8, "find repeat version and region in t_client_region_config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
      }
      else
      {
        v10 = ((v3 + 400) >> 3) + 2147450880;
        *(_DWORD *)v10 = 0;
        *(_DWORD *)(v10 + 4) = 0;
        *(_DWORD *)(v10 + 8) = 0;
        *(_DWORD *)(v10 + 12) = 0;
        *(_DWORD *)(v10 + 16) = 0;
        *(_DWORD *)(v10 + 20) = 0;
        *(_BYTE *)(v10 + 24) = 0;
        data::DbClientRegionConfig::DbClientRegionConfig((data::DbClientRegionConfig *const)(v3 + 400));
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        id = row->id;
        if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 400);
        *(_DWORD *)(v3 + 400) = id;
        std::string::operator=(v3 + 408, &row->client_version);
        std::string::operator=(v3 + 440, &row->region_name);
        std::string::operator=(v3 + 472, &row->client_region_custom_config_str);
        v12 = (_DWORD *)(((v3 + 304) >> 3) + 2147450880);
        *v12 = 0;
        v12[1] = 0;
        if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 304, 64LL);
        }
        std::make_pair<std::string &,std::string &>(
          (std::pair<std::string,std::string > *)(v3 + 304),
          (std::string *)(v3 + 408),
          (std::string *)(v3 + 440));
        v13 = std::map<std::pair<std::string,std::string>,data::DbClientRegionConfig>::operator[](
                &this->db_client_region_config_map,
                (std::map<std::pair<std::string,std::string >,data::DbClientRegionConfig>::key_type *)(v3 + 304));
        data::DbClientRegionConfig::operator=(v13, (const data::DbClientRegionConfig *)(v3 + 400));
        std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v3 + 304));
        v14 = (_DWORD *)(((v3 + 304) >> 3) + 2147450880);
        *v14 = -117901064;
        v14[1] = -117901064;
        data::DbClientRegionConfig::~DbClientRegionConfig((data::DbClientRegionConfig *const)(v3 + 400));
        v9 = 1;
      }
      v15 = ((v3 + 400) >> 3) + 2147450880;
      *(_DWORD *)v15 = -117901064;
      *(_DWORD *)(v15 + 4) = -117901064;
      *(_DWORD *)(v15 + 8) = -117901064;
      *(_DWORD *)(v15 + 12) = -117901064;
      *(_DWORD *)(v15 + 16) = -117901064;
      *(_DWORD *)(v15 + 20) = -117901064;
      *(_BYTE *)(v15 + 24) = -8;
      if ( v9 != 1 )
      {
        v16 = 0;
        goto LABEL_29;
      }
    }
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbClientRegionConfig",
      630);
    v17 = std::vector<t_client_region_config>::size((const std::vector<t_client_region_config> *const)(v3 + 48));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 176),
      "load %lu config and region from t_client_region_config",
      v17);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v16 = 1;
LABEL_29:
    std::vector<t_client_region_config>::~vector((std::vector<t_client_region_config> *const)(v3 + 48));
    v18 = ((v3 + 48) >> 3) + 2147450880;
    *(_WORD *)v18 = -1800;
    *(_BYTE *)(v18 + 2) = -8;
    if ( v16 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 672));
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1344LL, v22);
  }
  return v2;
};

// Line 641: range 000000000CD6F014-000000000CD6F8F3
int32_t __cdecl DbDeployConfigMgr::rewriteDbClientRegionConfig(DbDeployConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  const std::string *p_server_secret_key; // rdi
  __int64 p_client_region_custom_config_str; // rsi
  unsigned __int64 v18; // rax
  int32_t result; // eax
  data::DbClientRegionConfigMap *__for_range; // [rsp+18h] [rbp-318h]
  std::_Rb_tree_iterator<std::pair<const std::pair<std::string,std::string >,data::DbClientRegionConfig> >::reference __in; // [rsp+20h] [rbp-310h]
  std::tuple_element<0,std::pair<const std::pair<std::string,std::string >,data::DbClientRegionConfig> >::type *client_region_pair; // [rsp+28h] [rbp-308h]
  std::tuple_element<1,std::pair<const std::pair<std::string,std::string >,data::DbClientRegionConfig> >::type *client_region_config; // [rsp+30h] [rbp-300h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+38h] [rbp-2F8h]
  char v26[752]; // [rsp+40h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:644 64 8 13 __for_end:644 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 40 9 value:659 368 272 10 reader:642";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::rewriteDbClientRegionConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959360;
  v4[536862731] = 62194;
  v4[536862740] = -202116109;
  v4[536862741] = -202116109;
  Json::Reader::Reader((Json::Reader *)(v2 + 368));
  __for_range = &this->db_client_region_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::pair<std::string,std::string >,data::DbClientRegionConfig>::iterator *)(v2 + 32) = std::map<std::pair<std::string,std::string>,data::DbClientRegionConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::pair<std::string,std::string >,data::DbClientRegionConfig>::iterator *)(v2 + 64) = std::map<std::pair<std::string,std::string>,data::DbClientRegionConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::pair<std::string,std::string >,data::DbClientRegionConfig> >::_Self *)(v2 + 32),
            (const std::_Rb_tree_iterator<std::pair<const std::pair<std::string,std::string >,data::DbClientRegionConfig> >::_Self *)(v2 + 64)) )
    {
      v8 = 1;
      goto LABEL_26;
    }
    __in = std::_Rb_tree_iterator<std::pair<std::pair const<std::string,std::allocator<char>>,data::DbClientRegionConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::pair<std::string,std::string >,data::DbClientRegionConfig> > *const)(v2 + 32));
    client_region_pair = std::get<0ul,std::pair<std::string,std::string> const,data::DbClientRegionConfig>(__in);
    client_region_config = std::get<1ul,std::pair<std::string,std::string> const,data::DbClientRegionConfig>(__in);
    region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(this, &client_region_pair->second);
    if ( !region_config_ptr )
      break;
    std::string::operator=(&client_region_config->client_secret_key, &region_config_ptr->client_secret_key);
    std::string::operator=(&client_region_config->server_secret_key, &region_config_ptr->server_secret_key);
    if ( (unsigned __int8)std::string::empty(&client_region_config->client_region_custom_config_str) != 1 )
    {
      v9 = ((v2 + 288) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_BYTE *)(v9 + 4) = 0;
      Json::Value::Value(v2 + 288, 0LL);
      if ( !Json::Reader::parse(
              (Json::Reader *const)(v2 + 368),
              &client_region_config->client_region_custom_config_str,
              (Json::Value *)(v2 + 288),
              1) )
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "rewriteDbClientRegionConfig",
          662);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v10,
                (const char (*)[17])"client version: ");
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &client_region_pair->first);
        v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v12,
                (const char (*)[19])" and region name: ");
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &client_region_pair->second);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v14, (const char (*)[47])byte_1A195600);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v15 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        p_server_secret_key = &client_region_config->server_secret_key;
        p_client_region_custom_config_str = (__int64)&client_region_config->client_region_custom_config_str;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          p_client_region_custom_config_str = 32LL;
          p_server_secret_key = (const std::string *)(v2 + 224);
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::tools::EncrynptTool::encrynpt(
          (std::string *)(v2 + 224),
          (const std::string *)p_client_region_custom_config_str,
          p_server_secret_key);
        std::string::operator=(&client_region_config->client_region_custom_config_str_encrypted, v2 + 224);
        std::string::~string((void *)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v15 = 1;
      }
      Json::Value::~Value((Json::Value_0 *const)(v2 + 288));
      v18 = ((v2 + 288) >> 3) + 2147450880;
      *(_DWORD *)v18 = -117901064;
      *(_BYTE *)(v18 + 4) = -8;
      if ( v15 != 1 )
      {
        v8 = 0;
        goto LABEL_26;
      }
    }
    std::_Rb_tree_iterator<std::pair<std::pair const<std::string,std::allocator<char>>,data::DbClientRegionConfig>>::operator++((std::_Rb_tree_iterator<std::pair<const std::pair<std::string,std::string >,data::DbClientRegionConfig> > *const)(v2 + 32));
  }
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
    4u,
    "./src/db_data_manual/db_deploy_config_mgr.cpp",
    "rewriteDbClientRegionConfig",
    649);
  v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v2 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])"findDbRegionConfig ");
  v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &client_region_pair->second);
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" fails");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  v1 = -1;
  v8 = 0;
LABEL_26:
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v8 == 1 )
    v1 = 0;
  Json::Reader::~Reader((Json::Reader *const)(v2 + 368));
  result = v1;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 678: range 000000000CD6F8F4-000000000CD6F906
int32_t __cdecl DbDeployConfigMgr::checkDbClientRegionConfig(DbDeployConfigMgr *const this, const TxtConfigMgr *a2)
{
  return 0;
};

// Line 683: range 000000000CEF655E-000000000CEF6BB1
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_bind_config<(mysqlpp::sql_dummy_type)0>(t_bind_config *s, const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // r14
  const mysqlpp::String *v9; // r14
  std::string rowa; // [rsp+0h] [rbp-200h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "7 32 16 28 ignore_schema_mismatches:683 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unk"
                              "nown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_bind_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
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
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8030) = 0LL;
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
  }
};

// Line 683: range 000000000CE40766-000000000CE40833
void __cdecl t_bind_config::t_bind_config(t_bind_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->client_version);
  std::string::basic_string(&this->region_name);
  std::string::basic_string(&this->channel_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_bind_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 683: range 000000000D3A9E7C-000000000D3A9FA4
void __cdecl t_bind_config::t_bind_config(t_bind_config *const this, t_bind_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
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
  std::string::basic_string(&this->client_version, &a2->client_version);
  std::string::basic_string(&this->region_name, &a2->region_name);
  std::string::basic_string(&this->channel_id, &a2->channel_id);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 683: range 000000000D0D1C16-000000000D0D1C54
void __cdecl t_bind_config::~t_bind_config(t_bind_config *const this)
{
  std::string::~string(&this->channel_id);
  std::string::~string(&this->region_name);
  std::string::~string(&this->client_version);
};

// Line 690: range 000000000CD6F908-000000000CD70AED
int32_t __cdecl DbDeployConfigMgr::loadDbClientBindConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 p_client_version; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v21; // rax
  std::vector<t_bind_config>::size_type v22; // rdx
  common::milog::MiLogStream *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  uint32_t idx; // [rsp+20h] [rbp-620h]
  int ret; // [rsp+24h] [rbp-61Ch]
  t_bind_config *row; // [rsp+28h] [rbp-618h]
  std::vector<std::string> *__for_range; // [rsp+30h] [rbp-610h]
  std::string *channel_id_str; // [rsp+38h] [rbp-608h]
  std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > >::mapped_type *region_vec; // [rsp+40h] [rbp-600h]
  char v33[1520]; // [rsp+50h] [rbp-5F0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1472LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 4 14 channel_id:726 64 8 15 __for_begin:724 96 8 13 __for_end:724 128 24 "
                        "11 row_vec:700 192 24 18 channel_id_vec:715 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unkn"
                        "own> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 40 9 <unknown> 720 48 21 all_i"
                        "n_region_set:708 800 544 9 query:695";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::loadDbClientBindConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959360;
  v4[536862742] = 62194;
  v4[536862744] = -218959118;
  v4[536862762] = -202116109;
  v4[536862763] = -202116109;
  v4[536862764] = -202116109;
  v4[536862765] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 800, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 800), v6, "select ");
    std::operator<<<std::char_traits<char>>(
      v2 + 800,
      "`id`,`client_version`,`region_name`, `channel_id` from t_bind_config");
    std::vector<t_bind_config>::vector((std::vector<t_bind_config> *const)(v2 + 128));
    mysqlpp::Query::storein<std::vector<t_bind_config>>(
      (mysqlpp::Query *const)(v2 + 800),
      (std::vector<t_bind_config> *)(v2 + 128));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 800)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    std::set<std::string>::set((std::set<std::string> *const)(v2 + 720));
    for ( idx = 0; idx < std::vector<t_bind_config>::size((const std::vector<t_bind_config> *const)(v2 + 128)); ++idx )
    {
      row = std::vector<t_bind_config>::operator[]((std::vector<t_bind_config> *const)(v2 + 128), idx);
      v8 = ((v2 + 192) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 192));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 256),
        ",",
        (const std::allocator<char> *)(v2 + 32));
      ret = common::tools::StringUtils::split(
              &row->channel_id,
              (const std::string *)(v2 + 256),
              (std::vector<std::string> *)(v2 + 192),
              1);
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 32);
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( ret )
      {
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbClientBindConfig",
          719);
        v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
               (common::milog::MiLogStream *const)(v2 + 320),
               (const char (*)[10])"version: ");
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &row->client_version);
        v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v10,
                (const char (*)[26])"split channel_id failed, ");
        v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v11,
                (const char (*)[19])" channel_id_list: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &row->channel_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        __for_range = (std::vector<std::string> *)(v2 + 192);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v2 + 64) = std::vector<std::string>::begin(__for_range);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<std::string>::iterator *)(v2 + 96) = std::vector<std::string>::end(__for_range);
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 64),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 96)) )
        {
          channel_id_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 64));
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 48);
          *(_DWORD *)(v2 + 48) = 0;
          if ( common::tools::StringUtils::strToNum<unsigned int>(channel_id_str, (unsigned int *)(v2 + 48), 0) )
          {
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 384),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/db_data_manual/db_deploy_config_mgr.cpp",
              "loadDbClientBindConfig",
              730);
            v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[10])"version: ");
            v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &row->client_version);
            v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    v14,
                    (const char (*)[28])"convert channel_id failed, ");
            v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v15,
                    (const char (*)[18])" channel_id_str: ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, channel_id_str);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
          }
          else
          {
            v17 = ((v2 + 640) >> 3) + 2147450880;
            *(_DWORD *)v17 = 0;
            *(_BYTE *)(v17 + 4) = 0;
            p_client_version = (__int64)&row->client_version;
            if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 679) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 89) & 7) >= *(_BYTE *)(((v2 + 679) >> 3) + 0x7FFF8000) )
            {
              p_client_version = 40LL;
              __asan_report_store_n(v2 + 640, 40LL);
            }
            std::make_pair<std::string &,unsigned int &>(
              (std::pair<std::string,unsigned int> *)(v2 + 640),
              (std::string *)p_client_version,
              (unsigned int *)(v2 + 48));
            region_vec = std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int>>,std::equal_to<std::pair<std::string,unsigned int>>,std::allocator<std::pair<std::pair<std::string,unsigned int> const,std::vector<std::string>>>>::operator[](
                           &this->client_and_channel_to_region_map,
                           (std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > >::key_type *)(v2 + 640));
            std::pair<std::string,unsigned int>::~pair((std::pair<std::string,unsigned int> *const)(v2 + 640));
            v19 = ((v2 + 640) >> 3) + 2147450880;
            *(_DWORD *)v19 = -117901064;
            *(_BYTE *)(v19 + 4) = -8;
            std::vector<std::string>::push_back(region_vec, &row->region_name);
            if ( std::operator==<char>(&row->client_version, off_1A193400)
              && !std::set<std::string>::count((const std::set<std::string> *const)(v2 + 720), &row->region_name) )
            {
              std::set<std::string>::insert((std::set<std::string> *const)(v2 + 720), &row->region_name);
            }
          }
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 64));
        }
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 192));
      v21 = ((v2 + 192) >> 3) + 2147450880;
      *(_WORD *)v21 = -1800;
      *(_BYTE *)(v21 + 2) = -8;
    }
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbClientBindConfig",
      744);
    v22 = std::vector<t_bind_config>::size((const std::vector<t_bind_config> *const)(v2 + 128));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 448),
      "load %lu config from t_bind_config",
      v22);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    if ( !std::set<std::string>::empty((const std::set<std::string> *const)(v2 + 720)) )
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "loadDbClientBindConfig",
        748);
      v23 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              (common::milog::MiLogStream *const)(v2 + 512),
              (const char (*)[20])"all_in_region_set: ");
      common::milog::MiLogStream::operator<<<std::string>(v23, (const std::set<std::string> *)(v2 + 720));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::set<std::string>::~set((std::set<std::string> *const)(v2 + 720));
    std::vector<t_bind_config>::~vector((std::vector<t_bind_config> *const)(v2 + 128));
    v24 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v24 = -1800;
    *(_BYTE *)(v24 + 2) = -8;
    v25 = ((v2 + 720) >> 3) + 2147450880;
    *(_DWORD *)v25 = -117901064;
    *(_WORD *)(v25 + 4) = -1800;
    v5 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 800));
  }
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1472LL, v33);
  }
  return v5;
};

// Line 761: range 000000000CD70AEE-000000000CD71322
int32_t __cdecl DbDeployConfigMgr::checkDbClientBindConfig(DbDeployConfigMgr *const this, const TxtConfigMgr *a2)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int32_t result; // eax
  std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > > *__for_range; // [rsp+10h] [rbp-1C0h]
  std::__detail::_Node_iterator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,false,true>::reference v20; // [rsp+18h] [rbp-1B8h]
  std::tuple_element<0,std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > >::type *client_version_and_channel_id; // [rsp+20h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > >::type *region_name_vec; // [rsp+28h] [rbp-1A8h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference region_name; // [rsp+38h] [rbp-198h]
  char v24[400]; // [rsp+40h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:763 64 8 13 __for_end:763 96 8 15 __for_begin:775 128 8 13 __for_end:775 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::checkDbClientBindConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->client_and_channel_to_region_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > >::iterator *)(v3 + 32) = std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int>>,std::equal_to<std::pair<std::string,unsigned int>>,std::allocator<std::pair<std::pair<std::string,unsigned int> const,std::vector<std::string>>>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > >::iterator *)(v3 + 64) = std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int>>,std::equal_to<std::pair<std::string,unsigned int>>,std::allocator<std::pair<std::pair<std::string,unsigned int> const,std::vector<std::string>>>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<std::pair const<std::string,unsigned int>,std::vector<std::allocator<char>>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,true> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,true> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_40;
    }
    v20 = std::__detail::_Node_iterator<std::pair<std::pair const<std::string,unsigned int>,std::vector<std::allocator<char>>>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,false,true> *const)(v3 + 32));
    client_version_and_channel_id = std::get<0ul,std::pair<std::string,unsigned int> const,std::vector<std::string>>(v20);
    region_name_vec = (std::tuple_element<1,const std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > >::type *)std::get<1ul,std::pair<std::string,unsigned int> const,std::vector<std::string>>(v20);
    if ( !DbDeployConfigMgr::findDbClientConfig(this, &client_version_and_channel_id->first) )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "checkDbClientBindConfig",
        767);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v6, (const char (*)[26])byte_1A195B80);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
             v7,
             &client_version_and_channel_id->first);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])byte_1A11E460);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v9 = 0;
      goto LABEL_40;
    }
    if ( *(_BYTE *)(((unsigned __int64)&client_version_and_channel_id->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&client_version_and_channel_id->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&client_version_and_channel_id->second);
    }
    if ( !proto::AccountType_IsValid(client_version_and_channel_id->second) )
      break;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::const_iterator *)(v3 + 96) = std::vector<std::string>::begin(region_name_vec);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::const_iterator *)(v3 + 128) = std::vector<std::string>::end(region_name_vec);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 128)) )
      {
        v17 = 1;
        goto LABEL_36;
      }
      region_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 96));
      if ( std::operator!=<char>(region_name, off_1A193400) && !DbDeployConfigMgr::findDbRegionConfig(this, region_name) )
        break;
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 96));
    }
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
      4u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "checkDbClientBindConfig",
      779);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v14, (const char (*)[23])byte_1A195C00);
    v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, region_name);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])byte_1A11E460);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v9 = 0;
      goto LABEL_40;
    }
    std::__detail::_Node_iterator<std::pair<std::pair const<std::string,unsigned int>,std::vector<std::allocator<char>>>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,false,true> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 224, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_deploy_config_mgr.cpp",
    "checkDbClientBindConfig",
    772);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v10, (const char (*)[22])byte_1A195BC0);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v11,
          &client_version_and_channel_id->second);
  common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])byte_1A11E460);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v9 = 0;
LABEL_40:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 789: range 000000000CEF74EA-000000000CEF7925
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_login_white_ip_config<(mysqlpp::sql_dummy_type)0>(
        t_login_white_ip_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // r14
  const mysqlpp::String *v6; // r14
  std::string rowa; // [rsp+0h] [rbp-180h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "5 32 16 28 ignore_schema_mismatches:789 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unk"
                              "nown> 256 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_login_white_ip_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v5, rowa);
  std::string::operator=(rowa._M_string_length, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v6 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v6, rowa);
  std::string::operator=(rowa._M_string_length + 32, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 789: range 000000000CE408BC-000000000CE40961
void __cdecl t_login_white_ip_config::t_login_white_ip_config(
        t_login_white_ip_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->desc);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_login_white_ip_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 789: range 000000000D3AAA1A-000000000D3AAAB4
void __cdecl t_login_white_ip_config::t_login_white_ip_config(
        t_login_white_ip_config *const this,
        t_login_white_ip_config *a2)
{
  const char *table_override; // rdx

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->desc, &a2->desc);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 789: range 000000000D0D2808-000000000D0D2832
void __cdecl t_login_white_ip_config::~t_login_white_ip_config(t_login_white_ip_config *const this)
{
  std::string::~string(&this->desc);
  std::string::~string(this);
};

// Line 794: range 000000000CD71324-000000000CD71D05
int32_t __cdecl DbDeployConfigMgr::loadDbLoginWhiteIpConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // r15d
  unsigned __int64 v12; // rax
  int v13; // r15d
  std::vector<t_login_white_ip_config>::size_type v14; // rdx
  unsigned __int64 v15; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-464h]
  t_login_white_ip_config *row; // [rsp+30h] [rbp-460h]
  char v19[1104]; // [rsp+40h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 24 11 row_vec:805 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 40 13 ip_con"
                        "fig:817 384 544 9 query:800";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbLoginWhiteIpConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862749] = -202116109;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v2 = -1;
  }
  else
  {
    std::vector<DbIpConfig>::clear(&this->login_white_ip_vec);
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 384, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 384), v6, "select ");
    std::operator<<<std::char_traits<char>>(v3 + 384, "`ip`,`desc` from t_login_white_ip_config");
    std::vector<t_login_white_ip_config>::vector((std::vector<t_login_white_ip_config> *const)(v3 + 48));
    mysqlpp::Query::storein<std::vector<t_login_white_ip_config>>(
      (mysqlpp::Query *const)(v3 + 384),
      (std::vector<t_login_white_ip_config> *)(v3 + 48));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 384)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0;
          idx < std::vector<t_login_white_ip_config>::size((const std::vector<t_login_white_ip_config> *const)(v3 + 48));
          ++idx )
    {
      row = std::vector<t_login_white_ip_config>::operator[](
              (std::vector<t_login_white_ip_config> *const)(v3 + 48),
              idx);
      v8 = ((v3 + 304) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_BYTE *)(v8 + 4) = 0;
      DbIpConfig::DbIpConfig((DbIpConfig *const)(v3 + 304));
      if ( DbIpConfig::parseFrom((DbIpConfig *const)(v3 + 304), &row->ip) )
      {
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 112, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 112),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbLoginWhiteIpConfig",
          820);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 112),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v9,
                (const char (*)[18])"ip format error: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &row->ip);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        std::vector<DbIpConfig>::push_back(
          &this->login_white_ip_vec,
          (const std::vector<DbIpConfig>::value_type *)(v3 + 304));
        v11 = 1;
      }
      DbIpConfig::~DbIpConfig((DbIpConfig *const)(v3 + 304));
      v12 = ((v3 + 304) >> 3) + 2147450880;
      *(_DWORD *)v12 = -117901064;
      *(_BYTE *)(v12 + 4) = -8;
      if ( v11 != 1 )
      {
        v13 = 0;
        goto LABEL_23;
      }
    }
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbLoginWhiteIpConfig",
      825);
    v14 = std::vector<t_login_white_ip_config>::size((const std::vector<t_login_white_ip_config> *const)(v3 + 48));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 176),
      "load %lu config from t_login_white_ip_config",
      v14);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v13 = 1;
LABEL_23:
    std::vector<t_login_white_ip_config>::~vector((std::vector<t_login_white_ip_config> *const)(v3 + 48));
    v15 = ((v3 + 48) >> 3) + 2147450880;
    *(_WORD *)v15 = -1800;
    *(_BYTE *)(v15 + 2) = -8;
    if ( v13 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 384));
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v19);
  }
  return v2;
};

// Line 836: range 000000000CEF7EF6-000000000CEF9796
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_deploy_textmap_config<(mysqlpp::sql_dummy_type)0>(
        t_deploy_textmap_config *s,
        const mysqlpp::Row *row)
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
  std::string rowa; // [rsp+0h] [rbp-800h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1984LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "31 32 16 28 ignore_schema_mismatches:836 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <un"
                              "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 "
                              "9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 83"
                              "2 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unkn"
                              "own> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 "
                              "32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unkn"
                              "own> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_deploy_textmap_config<(mysqlpp::sql_dummy_type)0>;
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
  v4[536862781] = -202116109;
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) )
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) )
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1055) >> 3) + 0x7FFF8000) )
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1311) >> 3) + 0x7FFF8000) )
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1567) >> 3) + 0x7FFF8000) )
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1823) >> 3) + 0x7FFF8000) )
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
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF80F0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 248) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    __asan_stack_free_5(p_anon_0, 1984LL, &rowa._anon_0);
  }
};

// Line 836: range 000000000CE409E2-000000000CE40C63
void __cdecl t_deploy_textmap_config::t_deploy_textmap_config(
        t_deploy_textmap_config *const this,
        const mysqlpp::Row *row)
{
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
  populate_t_deploy_textmap_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 836: range 000000000D3AB254-000000000D3AB501
void __cdecl t_deploy_textmap_config::t_deploy_textmap_config(
        t_deploy_textmap_config *const this,
        t_deploy_textmap_config *a2)
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

// Line 836: range 000000000D0D3392-000000000D0D34A6
void __cdecl t_deploy_textmap_config::~t_deploy_textmap_config(t_deploy_textmap_config *const this)
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
};

// Line 855: range 000000000CD71D06-000000000CD73409
int32_t __cdecl DbDeployConfigMgr::loadDbDeployTextmapConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *p_deploy_multi_lang_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *v9; // rcx
  const std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::key_type *p_text_id; // rax
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  std::map<unsigned int,std::string>::mapped_type *v14; // rax
  std::map<unsigned int,std::string>::mapped_type *v15; // rax
  std::map<unsigned int,std::string>::mapped_type *v16; // rax
  std::map<unsigned int,std::string>::mapped_type *v17; // rax
  std::map<unsigned int,std::string>::mapped_type *v18; // rax
  std::map<unsigned int,std::string>::mapped_type *v19; // rax
  std::map<unsigned int,std::string>::mapped_type *v20; // rax
  std::map<unsigned int,std::string>::mapped_type *v21; // rax
  std::map<unsigned int,std::string>::mapped_type *v22; // rax
  std::map<unsigned int,std::string>::mapped_type *v23; // rax
  std::map<unsigned int,std::string>::mapped_type *v24; // rax
  std::map<unsigned int,std::string>::mapped_type *v25; // rax
  std::map<unsigned int,std::string>::mapped_type *v26; // rax
  std::map<unsigned int,std::string>::mapped_type *v27; // rax
  std::map<unsigned int,std::string>::mapped_type *v28; // rax
  std::vector<t_deploy_textmap_config>::size_type v29; // rdx
  unsigned __int64 v30; // rax
  uint32_t idx; // [rsp+24h] [rbp-54Ch]
  t_deploy_textmap_config *row; // [rsp+28h] [rbp-548h]
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::mapped_type *multi_text_map; // [rsp+30h] [rbp-540h]
  char v35[1328]; // [rsp+40h] [rbp-530h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1280LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "22 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 8 9 <unknown> 3"
                        "20 8 9 <unknown> 352 24 11 row_vec:865 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> "
                        "608 544 9 query:860";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbDeployTextmapConfig;
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
  v5[536862756] = -202116109;
  v5[536862757] = -202116109;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 608, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 608), v6, "select ");
    std::operator<<<std::char_traits<char>>(
      v3 + 608,
      "`text_id`,`en`,`sc`,`tc`,`fr`,`de`,`es`,`pt`,`ru`,`jp`,`kr`,`th`,`vn`,`id`,`tr`,`it` from t_deploy_textmap_config");
    std::vector<t_deploy_textmap_config>::vector((std::vector<t_deploy_textmap_config> *const)(v3 + 352));
    mysqlpp::Query::storein<std::vector<t_deploy_textmap_config>>(
      (mysqlpp::Query *const)(v3 + 608),
      (std::vector<t_deploy_textmap_config> *)(v3 + 352));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 608)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0;
          idx < std::vector<t_deploy_textmap_config>::size((const std::vector<t_deploy_textmap_config> *const)(v3 + 352));
          ++idx )
    {
      row = std::vector<t_deploy_textmap_config>::operator[](
              (std::vector<t_deploy_textmap_config> *const)(v3 + 352),
              idx);
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      p_deploy_multi_lang_map = &this->deploy_multi_lang_map;
      if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::end(p_deploy_multi_lang_map);
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      v9 = &this->deploy_multi_lang_map;
      p_text_id = &row->text_id;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::find(v9, p_text_id);
      v11 = std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,std::string>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 288),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 320));
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
      if ( v11 )
      {
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbDeployTextmapConfig",
          886);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v12, "find repeat text_id in t_deploy_textmap_config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
        goto LABEL_84;
      }
      multi_text_map = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::operator[](
                         &this->deploy_multi_lang_map,
                         &row->text_id);
      if ( (unsigned __int8)std::string::empty(&row->en) != 1 )
      {
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48);
        *(_DWORD *)(v3 + 48) = 1;
        v14 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 48));
        std::string::operator=(v14, &row->en);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->sc) != 1 )
      {
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64);
        *(_DWORD *)(v3 + 64) = 2;
        v15 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 64));
        std::string::operator=(v15, &row->sc);
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->tc) != 1 )
      {
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 80);
        *(_DWORD *)(v3 + 80) = 3;
        v16 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 80));
        std::string::operator=(v16, &row->tc);
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->fr) != 1 )
      {
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 96);
        *(_DWORD *)(v3 + 96) = 4;
        v17 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 96));
        std::string::operator=(v17, &row->fr);
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->de) != 1 )
      {
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 112);
        *(_DWORD *)(v3 + 112) = 5;
        v18 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 112));
        std::string::operator=(v18, &row->de);
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->es) != 1 )
      {
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 128);
        *(_DWORD *)(v3 + 128) = 6;
        v19 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 128));
        std::string::operator=(v19, &row->es);
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->pt) != 1 )
      {
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 144);
        *(_DWORD *)(v3 + 144) = 7;
        v20 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 144));
        std::string::operator=(v20, &row->pt);
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->ru) != 1 )
      {
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 160);
        *(_DWORD *)(v3 + 160) = 8;
        v21 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 160));
        std::string::operator=(v21, &row->ru);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->jp) != 1 )
      {
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 176);
        *(_DWORD *)(v3 + 176) = 9;
        v22 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 176));
        std::string::operator=(v22, &row->jp);
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->kr) != 1 )
      {
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 192);
        *(_DWORD *)(v3 + 192) = 10;
        v23 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 192));
        std::string::operator=(v23, &row->kr);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->th) != 1 )
      {
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 208);
        *(_DWORD *)(v3 + 208) = 11;
        v24 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 208));
        std::string::operator=(v24, &row->th);
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->vn) != 1 )
      {
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 224);
        *(_DWORD *)(v3 + 224) = 12;
        v25 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 224));
        std::string::operator=(v25, &row->vn);
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->id) != 1 )
      {
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 240);
        *(_DWORD *)(v3 + 240) = 13;
        v26 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 240));
        std::string::operator=(v26, &row->id);
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->tr) != 1 )
      {
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 256);
        *(_DWORD *)(v3 + 256) = 14;
        v27 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 256));
        std::string::operator=(v27, &row->tr);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      }
      if ( (unsigned __int8)std::string::empty(&row->it) != 1 )
      {
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 272);
        *(_DWORD *)(v3 + 272) = 15;
        v28 = std::map<unsigned int,std::string>::operator[](
                multi_text_map,
                (std::map<unsigned int,std::string>::key_type *)(v3 + 272));
        std::string::operator=(v28, &row->it);
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
      }
    }
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
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbDeployTextmapConfig",
      907);
    v29 = std::vector<t_deploy_textmap_config>::size((const std::vector<t_deploy_textmap_config> *const)(v3 + 352));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 480),
      "load %lu config from t_deploy_textmap_config",
      v29);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v13 = 1;
LABEL_84:
    std::vector<t_deploy_textmap_config>::~vector((std::vector<t_deploy_textmap_config> *const)(v3 + 352));
    v30 = ((v3 + 352) >> 3) + 2147450880;
    *(_WORD *)v30 = -1800;
    *(_BYTE *)(v30 + 2) = -8;
    if ( v13 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 608));
  }
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1280LL, v35);
  }
  return v2;
};

// Line 921: range 000000000CD7340A-000000000CD7391B
int32_t __cdecl DbDeployConfigMgr::checkDbDeployTextmapConfig(DbDeployConfigMgr *const this, TxtConfigMgr *a2)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  common::milog::MiLogStream *v7; // rcx
  int v8; // edx
  int v9; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *__for_range; // [rsp+10h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false,false>::reference v12; // [rsp+18h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::string> > >::type *text_id; // [rsp+20h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::string> > >::type *multi_text_map; // [rsp+28h] [rbp-138h]
  char v15[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 9 <unknown> 64 8 15 __for_begin:923 96 8 13 __for_end:923 128 8 8 iter:925 160 8 9 <unkno"
                        "wn> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::checkDbDeployTextmapConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->deploy_multi_lang_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,std::string>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 96)) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::string>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false,false> *const)(v3 + 64));
    text_id = std::get<0ul,unsigned int const,std::map<unsigned int,std::string>>(v12);
    multi_text_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::string> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,std::string>>(v12);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48);
    *(_DWORD *)(v3 + 48) = 1;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,std::string>::const_iterator *)(v3 + 128) = std::map<unsigned int,std::string>::find(
                                                                          multi_text_map,
                                                                          (const std::map<unsigned int,std::string>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,std::string>::const_iterator *)(v3 + 160) = std::map<unsigned int,std::string>::end(multi_text_map);
    v6 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v3 + 128),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v6 )
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
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "checkDbDeployTextmapConfig",
        928);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)text_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)text_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(text_id);
      }
      common::milog::MiLogStream::operator()(v7, aTextIdU, *text_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    else
    {
      v8 = 1;
    }
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v8 != 1 )
    {
      v9 = 0;
      goto LABEL_27;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::string>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false,false> *const)(v3 + 64));
  }
  v9 = 1;
LABEL_27:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v15 == (char *)v3 )
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

// Line 936: range 000000000CE40CEC-000000000CE40DB1
void __cdecl t_area_config::t_area_config(t_area_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->business);
  std::string::basic_string(&this->business_cn);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_area_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 936: range 000000000D3ABEF0-000000000D3ABFA5
void __cdecl t_area_config::t_area_config(t_area_config *const this, t_area_config *a2)
{
  const char *table_override; // rdx

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->business, &a2->business);
  std::string::basic_string(&this->business_cn, &a2->business_cn);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 936: range 000000000D0D3FA2-000000000D0D3FDC
void __cdecl t_area_config::~t_area_config(t_area_config *const this)
{
  std::string::~string(&this->business_cn);
  std::string::~string(&this->business);
  std::string::~string(this);
};

// Line 942: range 000000000CD7391C-000000000CD74325
int32_t __cdecl DbDeployConfigMgr::loadDbAreaConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  common::milog::MiLogStream *v8; // rax
  int v9; // edx
  _DWORD *v10; // rax
  data::DbAreaConfig *v11; // rax
  _DWORD *v12; // rax
  int v13; // r15d
  std::vector<t_area_config>::size_type v14; // rdx
  unsigned __int64 v15; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-484h]
  t_area_config *row; // [rsp+30h] [rbp-480h]
  char v19[1136]; // [rsp+40h] [rbp-470h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1088LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 24 11 row_vec:952 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 96 10 object:"
                        "972 416 544 9 query:947";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbAreaConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862732] = -218959118;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  v5[536862753] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 416, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 416), v6, "select ");
    std::operator<<<std::char_traits<char>>(v3 + 416, "`area_type`,`business`,`business_cn` from t_area_config");
    std::vector<t_area_config>::vector((std::vector<t_area_config> *const)(v3 + 32));
    mysqlpp::Query::storein<std::vector<t_area_config>>(
      (mysqlpp::Query *const)(v3 + 416),
      (std::vector<t_area_config> *)(v3 + 32));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 416)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0; idx < std::vector<t_area_config>::size((const std::vector<t_area_config> *const)(v3 + 32)); ++idx )
    {
      row = std::vector<t_area_config>::operator[]((std::vector<t_area_config> *const)(v3 + 32), idx);
      if ( DbDeployConfigMgr::findDbAreaConfig(this, &row->area_type) )
      {
        *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 96, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbAreaConfig",
          967);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v8, "find repeat area_type in t_area_config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
        *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
      }
      else
      {
        v10 = (_DWORD *)(((v3 + 288) >> 3) + 2147450880);
        *v10 = 0;
        v10[1] = 0;
        v10[2] = 0;
        data::DbAreaConfig::DbAreaConfig((data::DbAreaConfig *const)(v3 + 288));
        std::string::operator=(v3 + 288, row);
        std::string::operator=(v3 + 320, &row->business);
        std::string::operator=(v3 + 352, &row->business_cn);
        v11 = std::map<std::string,data::DbAreaConfig>::operator[](
                &this->db_area_config_map,
                (const std::map<std::string,data::DbAreaConfig>::key_type *)(v3 + 288));
        data::DbAreaConfig::operator=(v11, (const data::DbAreaConfig *)(v3 + 288));
        data::DbAreaConfig::~DbAreaConfig((data::DbAreaConfig *const)(v3 + 288));
        v9 = 1;
      }
      v12 = (_DWORD *)(((v3 + 288) >> 3) + 2147450880);
      *v12 = -117901064;
      v12[1] = -117901064;
      v12[2] = -117901064;
      if ( v9 != 1 )
      {
        v13 = 0;
        goto LABEL_23;
      }
    }
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbAreaConfig",
      978);
    v14 = std::vector<t_area_config>::size((const std::vector<t_area_config> *const)(v3 + 32));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 160),
      "load %lu config from t_area_config",
      v14);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v13 = 1;
LABEL_23:
    std::vector<t_area_config>::~vector((std::vector<t_area_config> *const)(v3 + 32));
    v15 = ((v3 + 32) >> 3) + 2147450880;
    *(_WORD *)v15 = -1800;
    *(_BYTE *)(v15 + 2) = -8;
    if ( v13 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 416));
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1088LL, v19);
  }
  return v2;
};

// Line 989: range 000000000CEFAFA1-000000000CEFB290
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_authkey_config<(mysqlpp::sql_dummy_type)0>(t_authkey_config *s, const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  std::string rowa; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "3 32 16 28 ignore_schema_mismatches:989 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_authkey_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
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
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 989: range 000000000CE40E66-000000000CE40EF3
void __cdecl t_authkey_config::t_authkey_config(t_authkey_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->private_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_authkey_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 989: range 000000000D3AC7D6-000000000D3AC8C8
void __cdecl t_authkey_config::t_authkey_config(t_authkey_config *const this, t_authkey_config *a2)
{
  mysqlpp::sql_int_unsigned version; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  version = a2->version;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->version = version;
  std::string::basic_string(&this->private_key, &a2->private_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 989: range 000000000D0D54E8-000000000D0D5506
void __cdecl t_authkey_config::~t_authkey_config(t_authkey_config *const this)
{
  std::string::~string(&this->private_key);
};

// Line 994: range 000000000CD74326-000000000CD74DB5
int32_t __cdecl DbDeployConfigMgr::loadDbAuthkeyConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  common::milog::MiLogStream *v8; // rax
  int v9; // edx
  unsigned __int64 v10; // rax
  uint32_t version; // ecx
  data::DbAuthkeyConfig *v12; // rax
  unsigned __int64 v13; // rax
  int v14; // r15d
  std::vector<t_authkey_config>::size_type v15; // rdx
  unsigned __int64 v16; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-464h]
  std::vector<t_authkey_config>::reference row; // [rsp+30h] [rbp-460h]
  char v20[1104]; // [rsp+40h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 24 12 row_vec:1004 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 40 11 objec"
                        "t:1024 384 544 9 query:999";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbAuthkeyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862749] = -202116109;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 384, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 384), v6, "select ");
    std::operator<<<std::char_traits<char>>(v3 + 384, "`version`,`private_key` from t_authkey_config");
    std::vector<t_authkey_config>::vector((std::vector<t_authkey_config> *const)(v3 + 48));
    mysqlpp::Query::storein<std::vector<t_authkey_config>>(
      (mysqlpp::Query *const)(v3 + 384),
      (std::vector<t_authkey_config> *)(v3 + 48));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 384)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0; idx < std::vector<t_authkey_config>::size((const std::vector<t_authkey_config> *const)(v3 + 48)); ++idx )
    {
      row = std::vector<t_authkey_config>::operator[]((std::vector<t_authkey_config> *const)(v3 + 48), idx);
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      if ( DbDeployConfigMgr::findDbAuthkeyConfig(this, row->version) )
      {
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 112, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 112),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbAuthkeyConfig",
          1019);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 112),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v8, "find repeat version in t_authkey_config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
      }
      else
      {
        v10 = ((v3 + 304) >> 3) + 2147450880;
        *(_DWORD *)v10 = 0;
        *(_BYTE *)(v10 + 4) = 0;
        data::DbAuthkeyConfig::DbAuthkeyConfig((data::DbAuthkeyConfig *const)(v3 + 304));
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        version = row->version;
        if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 304);
        *(_DWORD *)(v3 + 304) = version;
        std::string::operator=(v3 + 312, &row->private_key);
        v12 = std::map<unsigned int,data::DbAuthkeyConfig>::operator[](
                &this->db_authkey_config_map,
                (const std::map<unsigned int,data::DbAuthkeyConfig>::key_type *)(v3 + 304));
        data::DbAuthkeyConfig::operator=(v12, (const data::DbAuthkeyConfig *)(v3 + 304));
        data::DbAuthkeyConfig::~DbAuthkeyConfig((data::DbAuthkeyConfig *const)(v3 + 304));
        v9 = 1;
      }
      v13 = ((v3 + 304) >> 3) + 2147450880;
      *(_DWORD *)v13 = -117901064;
      *(_BYTE *)(v13 + 4) = -8;
      if ( v9 != 1 )
      {
        v14 = 0;
        goto LABEL_29;
      }
    }
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbAuthkeyConfig",
      1029);
    v15 = std::vector<t_authkey_config>::size((const std::vector<t_authkey_config> *const)(v3 + 48));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 176),
      "load %lu config from t_authkey_config",
      v15);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v14 = 1;
LABEL_29:
    std::vector<t_authkey_config>::~vector((std::vector<t_authkey_config> *const)(v3 + 48));
    v16 = ((v3 + 48) >> 3) + 2147450880;
    *(_WORD *)v16 = -1800;
    *(_BYTE *)(v16 + 2) = -8;
    if ( v14 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 384));
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v20);
  }
  return v2;
};

// Line 1040: range 000000000CEFBABD-000000000CEFBF5D
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_rsakey_config<(mysqlpp::sql_dummy_type)0>(t_rsakey_config *s, const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // r14
  std::string rowa; // [rsp+0h] [rbp-180h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "5 32 16 29 ignore_schema_mismatches:1040 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <un"
                              "known> 256 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_rsakey_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
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
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1040: range 000000000CE4103C-000000000CE410E9
void __cdecl t_rsakey_config::t_rsakey_config(t_rsakey_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->client_public_key);
  std::string::basic_string(&this->server_private_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_rsakey_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 1040: range 000000000D3AD0F4-000000000D3AD201
void __cdecl t_rsakey_config::t_rsakey_config(t_rsakey_config *const this, t_rsakey_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
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
  std::string::basic_string(&this->client_public_key, &a2->client_public_key);
  std::string::basic_string(&this->server_private_key, &a2->server_private_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 1040: range 000000000D0D69FC-000000000D0D6A2A
void __cdecl t_rsakey_config::~t_rsakey_config(t_rsakey_config *const this)
{
  std::string::~string(&this->server_private_key);
  std::string::~string(&this->client_public_key);
};

// Line 1046: range 000000000CD74DB6-000000000CD75838
int32_t __cdecl DbDeployConfigMgr::loadDbRsakeyConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  unsigned __int64 v8; // rax
  mysqlpp::sql_int_unsigned id; // ecx
  data::DbRsakeyConfig *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbRsakeyConfig> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  unsigned __int64 v14; // rax
  int v15; // r15d
  std::vector<t_rsakey_config>::size_type v16; // rdx
  unsigned __int64 v17; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-484h]
  std::vector<t_rsakey_config>::reference row; // [rsp+30h] [rbp-480h]
  char v21[1136]; // [rsp+40h] [rbp-470h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1088LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 24 12 row_vec:1056 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 72 11 objec"
                        "t:1069 416 544 10 query:1051";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbRsakeyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  v5[536862753] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 416, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 416), v6, "select ");
    std::operator<<<std::char_traits<char>>(
      v3 + 416,
      "`id`,`client_public_key`, `server_private_key` from t_rsakey_config");
    std::vector<t_rsakey_config>::vector((std::vector<t_rsakey_config> *const)(v3 + 48));
    mysqlpp::Query::storein<std::vector<t_rsakey_config>>(
      (mysqlpp::Query *const)(v3 + 416),
      (std::vector<t_rsakey_config> *)(v3 + 48));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 416)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0; idx < std::vector<t_rsakey_config>::size((const std::vector<t_rsakey_config> *const)(v3 + 48)); ++idx )
    {
      row = std::vector<t_rsakey_config>::operator[]((std::vector<t_rsakey_config> *const)(v3 + 48), idx);
      v8 = ((v3 + 304) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_DWORD *)(v8 + 4) = 0;
      *(_BYTE *)(v8 + 8) = 0;
      data::DbRsakeyConfig::DbRsakeyConfig((data::DbRsakeyConfig *const)(v3 + 304));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      id = row->id;
      if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 304);
      *(_DWORD *)(v3 + 304) = id;
      std::string::operator=(v3 + 312, &row->client_public_key);
      std::string::operator=(v3 + 344, &row->server_private_key);
      v11 = std::map<unsigned int,data::DbRsakeyConfig>::emplace<unsigned int &,data::DbRsakeyConfig&>(
              &this->db_rsakey_config_map,
              (unsigned int *)(v3 + 304),
              (data::DbRsakeyConfig *)(v3 + 304),
              (unsigned int *)&this->db_rsakey_config_map,
              v10);
      if ( !v11.second )
      {
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 112, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 112),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbRsakeyConfig",
          1076);
        v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v3 + 112),
                (const char (*)[29])"t_rsakey_config repeated id=");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 304));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
      else
      {
        v13 = 1;
      }
      data::DbRsakeyConfig::~DbRsakeyConfig((data::DbRsakeyConfig *const)(v3 + 304));
      v14 = ((v3 + 304) >> 3) + 2147450880;
      *(_DWORD *)v14 = -117901064;
      *(_DWORD *)(v14 + 4) = -117901064;
      *(_BYTE *)(v14 + 8) = -8;
      if ( v13 != 1 )
      {
        v15 = 0;
        goto LABEL_27;
      }
    }
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbRsakeyConfig",
      1080);
    v16 = std::vector<t_rsakey_config>::size((const std::vector<t_rsakey_config> *const)(v3 + 48));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 176),
      "load %lu config from t_rsakey_config",
      v16);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v15 = 1;
LABEL_27:
    std::vector<t_rsakey_config>::~vector((std::vector<t_rsakey_config> *const)(v3 + 48));
    v17 = ((v3 + 48) >> 3) + 2147450880;
    *(_WORD *)v17 = -1800;
    *(_BYTE *)(v17 + 2) = -8;
    if ( v15 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 416));
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1088LL, v21);
  }
  return v2;
};

// Line 1091: range 000000000CD7583A-000000000CD759EE
const data::DbRsakeyConfig *__fastcall DbDeployConfigMgr::findDbRsakeyConfig(
        const DbDeployConfigMgr *const this,
        uint32_t id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DbRsakeyConfigMap *p_db_rsakey_config_map; // rdx
  data::DbRsakeyConfigMap *v6; // rdx
  const data::DbRsakeyConfig *result; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1090 64 8 9 iter:1092 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::findDbRsakeyConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_db_rsakey_config_map = &this->db_rsakey_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbRsakeyConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::DbRsakeyConfig>::find(
                                                                                p_db_rsakey_config_map,
                                                                                (const std::map<unsigned int,data::DbRsakeyConfig>::key_type *)(v2 + 48));
  v6 = &this->db_rsakey_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbRsakeyConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::DbRsakeyConfig>::end(v6);
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbRsakeyConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbRsakeyConfig> >::_Self *)(v2 + 96)) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbRsakeyConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbRsakeyConfig> > *const)(v2 + 64))->second;
  }
  if ( v8 == (char *)v2 )
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

// Line 1096: range 000000000CEFC532-000000000CEFCBF3
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_sdk_config<(mysqlpp::sql_dummy_type)0>(t_sdk_config *s, const mysqlpp::Row *row)
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
  std::string rowa; // [rsp+0h] [rbp-200h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "7 32 16 29 ignore_schema_mismatches:1096 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <un"
                              "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_sdk_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
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
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8030) = 0LL;
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
  }
};

// Line 1096: range 000000000CE411A6-000000000CE41273
void __cdecl t_sdk_config::t_sdk_config(t_sdk_config *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->account_key);
  std::string::basic_string(&this->account_url);
  std::string::basic_string(&this->recharge_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_sdk_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 1096: range 000000000D3ADAF2-000000000D3ADC9F
void __cdecl t_sdk_config::t_sdk_config(t_sdk_config *const this, t_sdk_config *a2)
{
  mysqlpp::sql_int_unsigned sdkenv; // ecx
  mysqlpp::sql_int_unsigned app_id; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  sdkenv = a2->sdkenv;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->sdkenv = sdkenv;
  if ( *(_BYTE *)(((unsigned __int64)&a2->app_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->app_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->app_id);
  }
  app_id = a2->app_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->app_id);
  }
  this->app_id = app_id;
  std::string::basic_string(&this->account_key, &a2->account_key);
  std::string::basic_string(&this->account_url, &a2->account_url);
  std::string::basic_string(&this->recharge_key, &a2->recharge_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 1096: range 000000000D0D7C60-000000000D0D7C9E
void __cdecl t_sdk_config::~t_sdk_config(t_sdk_config *const this)
{
  std::string::~string(&this->recharge_key);
  std::string::~string(&this->account_url);
  std::string::~string(&this->account_key);
};

// Line 1104: range 000000000CD759F0-000000000CD76649
int32_t __cdecl DbDeployConfigMgr::loadDbSdkConfig(DbDeployConfigMgr *const this, common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  unsigned __int64 v8; // rax
  mysqlpp::sql_int_unsigned sdkenv; // ecx
  mysqlpp::sql_int_unsigned app_id; // ecx
  data::DbSdkConfig *v11; // rax
  unsigned int *v12; // rcx
  data::DbSdkConfig *v13; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbSdkConfig> >,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  unsigned __int64 v17; // rax
  int v18; // r15d
  std::vector<t_sdk_config>::size_type v19; // rdx
  unsigned __int64 v20; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-4E4h]
  std::vector<t_sdk_config>::reference row; // [rsp+30h] [rbp-4E0h]
  char v24[1232]; // [rsp+40h] [rbp-4D0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1184LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 24 12 row_vec:1115 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unkno"
                        "wn> 368 104 11 object:1127 512 544 10 query:1110";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbSdkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862753] = -202116109;
  v5[536862754] = -202116109;
  v5[536862755] = -202116109;
  v5[536862756] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 112, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 112),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbSdkConfig",
      1107);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 112), "conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 512, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 512), v6, "select ");
    std::operator<<<std::char_traits<char>>(
      v3 + 512,
      "`sdkenv`,`app_id`, `account_key`, `account_url`, `recharge_key` from t_sdk_config");
    std::vector<t_sdk_config>::vector((std::vector<t_sdk_config> *const)(v3 + 48));
    mysqlpp::Query::storein<std::vector<t_sdk_config>>(
      (mysqlpp::Query *const)(v3 + 512),
      (std::vector<t_sdk_config> *)(v3 + 48));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 512)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0; idx < std::vector<t_sdk_config>::size((const std::vector<t_sdk_config> *const)(v3 + 48)); ++idx )
    {
      row = std::vector<t_sdk_config>::operator[]((std::vector<t_sdk_config> *const)(v3 + 48), idx);
      v8 = ((v3 + 368) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_DWORD *)(v8 + 4) = 0;
      *(_DWORD *)(v8 + 8) = 0;
      *(_BYTE *)(v8 + 12) = 0;
      data::DbSdkConfig::DbSdkConfig((data::DbSdkConfig *const)(v3 + 368));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      sdkenv = row->sdkenv;
      if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 368);
      *(_DWORD *)(v3 + 368) = sdkenv;
      if ( *(_BYTE *)(((unsigned __int64)&row->app_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->app_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->app_id);
      }
      app_id = row->app_id;
      if ( *(_BYTE *)(((v3 + 372) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 116) & 7) + 3) >= *(_BYTE *)(((v3 + 372) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 372);
      }
      *(_DWORD *)(v3 + 372) = app_id;
      std::string::operator=(v3 + 376, &row->account_key);
      std::string::operator=(v3 + 408, &row->account_url);
      std::string::operator=(v3 + 440, &row->recharge_key);
      v11 = std::move<data::DbSdkConfig &>((data::DbSdkConfig *)(v3 + 368));
      v14 = std::map<unsigned int,data::DbSdkConfig>::emplace<unsigned int &,data::DbSdkConfig>(
              &this->db_sdk_config_map,
              (unsigned int *)(v3 + 368),
              v11,
              v12,
              v13);
      if ( !v14.second )
      {
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 47) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 176, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 176),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbSdkConfig",
          1135);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 176),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v15, "find repeat sdkenv in t_sdk_config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
      }
      else
      {
        v16 = 1;
      }
      data::DbSdkConfig::~DbSdkConfig((data::DbSdkConfig *const)(v3 + 368));
      v17 = ((v3 + 368) >> 3) + 2147450880;
      *(_DWORD *)v17 = -117901064;
      *(_DWORD *)(v17 + 4) = -117901064;
      *(_DWORD *)(v17 + 8) = -117901064;
      *(_BYTE *)(v17 + 12) = -8;
      if ( v16 != 1 )
      {
        v18 = 0;
        goto LABEL_33;
      }
    }
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 111) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbSdkConfig",
      1139);
    v19 = std::vector<t_sdk_config>::size((const std::vector<t_sdk_config> *const)(v3 + 48));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 240),
      "load %lu config from t_sdk_config",
      v19);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
    v18 = 1;
LABEL_33:
    std::vector<t_sdk_config>::~vector((std::vector<t_sdk_config> *const)(v3 + 48));
    v20 = ((v3 + 48) >> 3) + 2147450880;
    *(_WORD *)v20 = -1800;
    *(_BYTE *)(v20 + 2) = -8;
    if ( v18 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 512));
  }
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1184LL, v24);
  }
  return v2;
};

// Line 1150: range 000000000CD7664A-000000000CD76CCD
int32_t __cdecl DbDeployConfigMgr::checkDbSdkConfig(DbDeployConfigMgr *const this, const TxtConfigMgr *a2)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  int v7; // eax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rcx
  int32_t result; // eax
  data::DbSdkConfigMap *__for_range; // [rsp+10h] [rbp-170h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbSdkConfig> >::reference v12; // [rsp+18h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::DbSdkConfig> >::type *sdkenv; // [rsp+20h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DbSdkConfig> >::type *sdk_config; // [rsp+28h] [rbp-158h]
  char v15[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 16 __for_begin:1151 64 8 14 __for_end:1151 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::checkDbSdkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->db_sdk_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbSdkConfig>::iterator *)(v3 + 32) = std::map<unsigned int,data::DbSdkConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbSdkConfig>::iterator *)(v3 + 64) = std::map<unsigned int,data::DbSdkConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbSdkConfig> >::_Self *)(v3 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbSdkConfig> >::_Self *)(v3 + 64)) )
    {
      v7 = 1;
      goto LABEL_30;
    }
    v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbSdkConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbSdkConfig> > *const)(v3 + 32));
    sdkenv = std::get<0ul,unsigned int const,data::DbSdkConfig>(v12);
    sdk_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DbSdkConfig> >::type *)std::get<1ul,unsigned int const,data::DbSdkConfig>(v12);
    if ( (unsigned __int8)std::string::empty(&sdk_config->account_key) )
    {
      if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "checkDbSdkConfig",
        1155);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)sdkenv >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)sdkenv & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sdkenv >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(sdkenv);
      }
      common::milog::MiLogStream::operator()(v6, "sdkenv: %u account_key is empty", *sdkenv);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v7 = 0;
      goto LABEL_30;
    }
    if ( (unsigned __int8)std::string::empty(&sdk_config->account_url) )
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
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "checkDbSdkConfig",
        1160);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)sdkenv >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)sdkenv & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sdkenv >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(sdkenv);
      }
      common::milog::MiLogStream::operator()(v8, "sdkenv: %u account_url is empty", *sdkenv);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v7 = 0;
      goto LABEL_30;
    }
    if ( (unsigned __int8)std::string::empty(&sdk_config->recharge_key) )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbSdkConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbSdkConfig> > *const)(v3 + 32));
  }
  if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 224, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_deploy_config_mgr.cpp",
    "checkDbSdkConfig",
    1165);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 224),
         (const char (*)[16])"[CONFIG_ERROR] ");
  if ( *(_BYTE *)(((unsigned __int64)sdkenv >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)sdkenv & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sdkenv >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(sdkenv);
  }
  common::milog::MiLogStream::operator()(v9, "sdkenv: %u recharge_key is empty", *sdkenv);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v7 = 0;
LABEL_30:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1172: range 000000000CEFD25F-000000000CEFD4C8
void __cdecl populate_t_channel_id_config<(mysqlpp::sql_dummy_type)0>(t_channel_id_config *s, const mysqlpp::Row *row)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r15
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 16 29 ignore_schema_mismatches:1172";
  *(_QWORD *)(v2 + 16) = populate_t_channel_id_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  mysqlpp::NoExceptions::NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64), row);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(s);
  }
  s->channel_id = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  mysqlpp::tiny_int<signed char>::tiny_int((mysqlpp::tiny_int<signed char> *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&s->enable_login_pc >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)s + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&s->enable_login_pc >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&s->enable_login_pc);
  }
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 48);
  s->enable_login_pc = mysqlpp::String::conv<mysqlpp::tiny_int<signed char>>(
                         v7,
                         *(mysqlpp::tiny_int<signed char> *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1172: range 000000000CE413BA-000000000CE41420
void __cdecl t_channel_id_config::t_channel_id_config(t_channel_id_config *const this, const mysqlpp::Row *row)
{
  mysqlpp::tiny_int<signed char>::tiny_int(&this->enable_login_pc);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_channel_id_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 1177: range 000000000CD76CCE-000000000CD777B2
int32_t __cdecl DbDeployConfigMgr::loadDbChannelIdConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  bool v8; // cl
  data::DbChannelIdConfig *v9; // rdx
  unsigned int *v10; // rcx
  data::DbChannelIdConfig *v11; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbChannelIdConfig> >,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<t_channel_id_config>::size_type v14; // rdx
  unsigned __int64 v15; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-464h]
  std::vector<t_channel_id_config>::reference row; // [rsp+30h] [rbp-460h]
  char v19[1104]; // [rsp+40h] [rbp-450h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 11 object:1200 64 24 12 row_vec:1188 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unkn"
                        "own> 320 32 9 <unknown> 384 544 10 query:1183";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::loadDbChannelIdConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862749] = -202116109;
  v4[536862750] = -202116109;
  v4[536862751] = -202116109;
  v4[536862752] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbChannelIdConfig",
      1180);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 128), "conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 384, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 384), v6, "select ");
    std::operator<<<std::char_traits<char>>(v2 + 384, "`channel_id`,`enable_login_pc` from t_channel_id_config");
    std::vector<t_channel_id_config>::vector((std::vector<t_channel_id_config> *const)(v2 + 64));
    mysqlpp::Query::storein<std::vector<t_channel_id_config>>(
      (mysqlpp::Query *const)(v2 + 384),
      (std::vector<t_channel_id_config> *)(v2 + 64));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 384)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0;
          idx < std::vector<t_channel_id_config>::size((const std::vector<t_channel_id_config> *const)(v2 + 64));
          ++idx )
    {
      row = std::vector<t_channel_id_config>::operator[]((std::vector<t_channel_id_config> *const)(v2 + 64), idx);
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 32);
      *(_DWORD *)(v2 + 32) = 0;
      if ( *(_BYTE *)(((v2 + 36) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 36) & 7) >= *(_BYTE *)(((v2 + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v2 + 36);
      }
      *(_BYTE *)(v2 + 36) = 0;
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      *(_DWORD *)(v2 + 32) = row->channel_id;
      v8 = mysqlpp::tiny_int<signed char>::operator bool(&row->enable_login_pc);
      if ( *(_BYTE *)(((v2 + 36) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 36) & 7) >= *(_BYTE *)(((v2 + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v2 + 36);
      }
      *(_BYTE *)(v2 + 36) = v8;
      v9 = std::move<data::DbChannelIdConfig &>((data::DbChannelIdConfig *)(v2 + 32));
      v12 = std::map<unsigned int,data::DbChannelIdConfig>::emplace<unsigned int &,data::DbChannelIdConfig>(
              &this->db_channel_id_config_map,
              (unsigned int *)(v2 + 32),
              v9,
              v10,
              v11);
      if ( !v12.second )
      {
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbChannelIdConfig",
          1205);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(v13, "find repeat channel_id in t_channel_id_config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      }
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    }
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbChannelIdConfig",
      1208);
    v14 = std::vector<t_channel_id_config>::size((const std::vector<t_channel_id_config> *const)(v2 + 64));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 256),
      "load %lu config from t_channel_id_config",
      v14);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::vector<t_channel_id_config>::~vector((std::vector<t_channel_id_config> *const)(v2 + 64));
    v15 = ((v2 + 64) >> 3) + 2147450880;
    *(_WORD *)v15 = -1800;
    *(_BYTE *)(v15 + 2) = -8;
    v5 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 384));
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v19);
  }
  return v5;
};

// Line 1219: range 000000000CD777B4-000000000CD77B5A
int32_t __cdecl DbDeployConfigMgr::checkDbChannelIdConfig(DbDeployConfigMgr *const this, const TxtConfigMgr *a2)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  int v7; // eax
  int32_t result; // eax
  data::DbChannelIdConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbChannelIdConfig> >::reference v10; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::DbChannelIdConfig> >::type *channel_id; // [rsp+20h] [rbp-E0h]
  char v12[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 16 __for_begin:1220 64 8 14 __for_end:1220 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::checkDbChannelIdConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->db_channel_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbChannelIdConfig>::iterator *)(v3 + 32) = std::map<unsigned int,data::DbChannelIdConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbChannelIdConfig>::iterator *)(v3 + 64) = std::map<unsigned int,data::DbChannelIdConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbChannelIdConfig> >::_Self *)(v3 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbChannelIdConfig> >::_Self *)(v3 + 64)) )
    {
      v7 = 1;
      goto LABEL_20;
    }
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbChannelIdConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbChannelIdConfig> > *const)(v3 + 32));
    channel_id = std::get<0ul,unsigned int const,data::DbChannelIdConfig>(v10);
    std::get<1ul,unsigned int const,data::DbChannelIdConfig>(v10);
    if ( *(_BYTE *)(((unsigned __int64)channel_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)channel_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)channel_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(channel_id);
    }
    if ( !proto::ChannelIdType_IsValid(*channel_id) )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbChannelIdConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::DbChannelIdConfig> > *const)(v3 + 32));
  }
  if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 96, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 96),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_deploy_config_mgr.cpp",
    "checkDbChannelIdConfig",
    1225);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  if ( *(_BYTE *)(((unsigned __int64)channel_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)channel_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)channel_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(channel_id);
  }
  common::milog::MiLogStream::operator()(v6, "channel_id: %u is invalid", *channel_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v7 = 0;
LABEL_20:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1232: range 000000000CEFDB4E-000000000CEFE2C1
void __cdecl populate_t_anti_cheat_client_channel_id_config<(mysqlpp::sql_dummy_type)0>(
        t_anti_cheat_client_channel_id_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // r14
  const mysqlpp::String *v6; // rax
  unsigned int v7; // edx
  const mysqlpp::String *v8; // r15
  const mysqlpp::String *v9; // r14
  const mysqlpp::String *v10; // r14
  std::string v11; // [rsp+0h] [rbp-230h]
  std::string v12; // [rsp+0h] [rbp-230h]
  std::string v13; // [rsp+0h] [rbp-230h]
  char *v14; // [rsp+8h] [rbp-228h]
  t_anti_cheat_client_channel_id_config *sa; // [rsp+18h] [rbp-218h]
  char v16[528]; // [rsp+20h] [rbp-210h] BYREF

  *(&v11._anon_0._M_allocated_capacity + 1) = (std::string::size_type)s;
  v11._anon_0._M_allocated_capacity = (std::string::size_type)row;
  v2 = (unsigned __int64)v16;
  v11._M_string_length = (std::string::size_type)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 29 ignore_schema_mismatches:1232 96 32 9 <unknown> 160 32 9 <unknown> 2"
                        "24 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = populate_t_anti_cheat_client_channel_id_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  mysqlpp::NoExceptions::NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64), row);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  std::string::basic_string(v2 + 96);
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 160, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 160), v5, v11);
  std::string::operator=(*(&v12._anon_0._M_allocated_capacity + 1), v2 + 160);
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  v6 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v12._anon_0._M_allocated_capacity);
  v7 = mysqlpp::String::conv<unsigned int>(v6, 0);
  if ( *(_BYTE *)(((*(&v12._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v12._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(*(&v12._anon_0._M_allocated_capacity + 1) + 32);
  }
  *(_DWORD *)(*(&v12._anon_0._M_allocated_capacity + 1) + 32) = v7;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v12._anon_0._M_allocated_capacity);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  mysqlpp::tiny_int<signed char>::tiny_int((mysqlpp::tiny_int<signed char> *const)(v2 + 48));
  if ( *(_BYTE *)(((*(&v12._anon_0._M_allocated_capacity + 1) + 36) >> 3) + 0x7FFF8000) != 0
    && ((v12._anon_0._M_local_buf[8] + 36) & 7) >= *(_BYTE *)(((*(&v12._anon_0._M_allocated_capacity + 1) + 36) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_store1(*(&v12._anon_0._M_allocated_capacity + 1) + 36);
  }
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 48);
  *(mysqlpp::tiny_int<signed char> *)(*(&v12._anon_0._M_allocated_capacity + 1) + 36) = mysqlpp::String::conv<mysqlpp::tiny_int<signed char>>(
                                                                                          v8,
                                                                                          *(mysqlpp::tiny_int<signed char> *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v12._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 224);
  if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 288, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 288), v9, v12);
  std::string::operator=(*(&v13._anon_0._M_allocated_capacity + 1) + 40, v2 + 288);
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v13._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 352);
  if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 416, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 416), v10, v13);
  std::string::operator=(&sa->anti_cheat_config_str, v2 + 416);
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 1232: range 000000000CE414AA-000000000CE4157F
void __cdecl t_anti_cheat_client_channel_id_config::t_anti_cheat_client_channel_id_config(
        t_anti_cheat_client_channel_id_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(this);
  mysqlpp::tiny_int<signed char>::tiny_int(&this->is_forbid_login);
  std::string::basic_string(&this->checksum);
  std::string::basic_string(&this->anti_cheat_config_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_anti_cheat_client_channel_id_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 1232: range 000000000D3AEF28-000000000D3AF0D1
void __cdecl t_anti_cheat_client_channel_id_config::t_anti_cheat_client_channel_id_config(
        t_anti_cheat_client_channel_id_config *const this,
        t_anti_cheat_client_channel_id_config *a2)
{
  mysqlpp::sql_int_unsigned channel_id; // ecx
  const char *table_override; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel_id);
  }
  channel_id = a2->channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_id);
  }
  this->channel_id = channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_login >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_forbid_login);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_forbid_login >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_forbid_login >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_forbid_login);
  }
  this->is_forbid_login.value_ = a2->is_forbid_login.value_;
  std::string::basic_string(&this->checksum, &a2->checksum);
  std::string::basic_string(&this->anti_cheat_config_str, &a2->anti_cheat_config_str);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 1232: range 000000000D0D9B06-000000000D0D9B40
void __cdecl t_anti_cheat_client_channel_id_config::~t_anti_cheat_client_channel_id_config(
        t_anti_cheat_client_channel_id_config *const this)
{
  std::string::~string(&this->anti_cheat_config_str);
  std::string::~string(&this->checksum);
  std::string::~string(this);
};

// Line 1240: range 000000000CD77B5C-000000000CD788E9
int32_t __cdecl DbDeployConfigMgr::loadDbAntiCheatClientChannelIdConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  unsigned __int64 v8; // rax
  std::remove_reference<std::string&>::type *v9; // rax
  mysqlpp::sql_int_unsigned channel_id; // ecx
  bool v11; // cl
  unsigned __int64 v12; // rax
  std::pair<std::string,unsigned int> *v13; // rcx
  data::DbAntiCheatClientChannelIdConfig *v14; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >,bool> v15; // rax
  bool v16; // r15
  unsigned __int64 v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // r15d
  unsigned __int64 v20; // rax
  int v21; // r15d
  std::vector<t_anti_cheat_client_channel_id_config>::size_type v22; // rdx
  unsigned __int64 v23; // rax
  std::remove_reference<data::DbAntiCheatClientChannelIdConfig&>::type *v25; // [rsp+0h] [rbp-5B0h]
  uint32_t idx; // [rsp+2Ch] [rbp-584h]
  t_anti_cheat_client_channel_id_config *row; // [rsp+30h] [rbp-580h]
  char v28[1392]; // [rsp+40h] [rbp-570h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1344LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 24 12 row_vec:1251 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unkno"
                        "wn> 368 40 9 <unknown> 448 152 11 object:1263 672 544 10 query:1246";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbAntiCheatClientChannelIdConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862738] = -234881024;
  v5[536862739] = -218959118;
  v5[536862740] = -218959118;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 112, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 112),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbAntiCheatClientChannelIdConfig",
      1243);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 112), "conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 672, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 672), v6, "select ");
    std::operator<<<std::char_traits<char>>(
      v3 + 672,
      "`version`, `channel_id`, `is_forbid_login`, `checksum`, `anti_cheat_config_str` from t_anti_cheat_client_channel_id_config");
    std::vector<t_anti_cheat_client_channel_id_config>::vector((std::vector<t_anti_cheat_client_channel_id_config> *const)(v3 + 48));
    mysqlpp::Query::storein<std::vector<t_anti_cheat_client_channel_id_config>>(
      (mysqlpp::Query *const)(v3 + 672),
      (std::vector<t_anti_cheat_client_channel_id_config> *)(v3 + 48));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 672)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0;
          idx < std::vector<t_anti_cheat_client_channel_id_config>::size((const std::vector<t_anti_cheat_client_channel_id_config> *const)(v3 + 48));
          ++idx )
    {
      row = std::vector<t_anti_cheat_client_channel_id_config>::operator[](
              (std::vector<t_anti_cheat_client_channel_id_config> *const)(v3 + 48),
              idx);
      v8 = ((v3 + 448) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_DWORD *)(v8 + 4) = 0;
      *(_DWORD *)(v8 + 8) = 0;
      *(_DWORD *)(v8 + 12) = 0;
      *(_WORD *)(v8 + 16) = 0;
      *(_BYTE *)(v8 + 18) = 0;
      data::DbAntiCheatClientChannelIdConfig::DbAntiCheatClientChannelIdConfig((data::DbAntiCheatClientChannelIdConfig *const)(v3 + 448));
      v9 = std::move<std::string &>(&row->version);
      std::string::operator=(v3 + 456, v9);
      if ( *(_BYTE *)(((unsigned __int64)&row->channel_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->channel_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->channel_id);
      }
      channel_id = row->channel_id;
      if ( *(_BYTE *)(((v3 + 488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 488);
      *(_DWORD *)(v3 + 488) = channel_id;
      v11 = mysqlpp::tiny_int<signed char>::operator bool(&row->is_forbid_login);
      if ( *(_BYTE *)(((v3 + 492) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 20) & 7) >= *(_BYTE *)(((v3 + 492) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v3 + 492);
      }
      *(_BYTE *)(v3 + 492) = v11;
      DbDeployConfigMgr::splitToStringSetByComma(this, &row->checksum, (std::set<std::string> *)(v3 + 496));
      std::string::operator=(v3 + 544, &row->anti_cheat_config_str);
      v25 = std::move<data::DbAntiCheatClientChannelIdConfig &>((data::DbAntiCheatClientChannelIdConfig *)(v3 + 448));
      v12 = ((v3 + 368) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_BYTE *)(v12 + 4) = 0;
      if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 407) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 105) & 7) >= *(_BYTE *)(((v3 + 407) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 368, 40LL);
      }
      std::make_pair<std::string &,unsigned int &>(
        (std::pair<std::string,unsigned int> *)(v3 + 368),
        (std::string *)(v3 + 456),
        (unsigned int *)(v3 + 488));
      v15 = std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::emplace<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>(
              &this->db_anti_cheat_client_channel_id_config_map,
              (std::pair<std::string,unsigned int> *)(v3 + 368),
              v25,
              v13,
              v14);
      v16 = !v15.second;
      std::pair<std::string,unsigned int>::~pair((std::pair<std::string,unsigned int> *const)(v3 + 368));
      v17 = ((v3 + 368) >> 3) + 2147450880;
      *(_DWORD *)v17 = -117901064;
      *(_BYTE *)(v17 + 4) = -8;
      if ( v16 )
      {
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 176, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 176),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbAntiCheatClientChannelIdConfig",
          1272);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 176),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(
          v18,
          "find repeat version and channel_id in t_anti_cheat_client_channel_id_config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v19 = 0;
      }
      else
      {
        v19 = 1;
      }
      data::DbAntiCheatClientChannelIdConfig::~DbAntiCheatClientChannelIdConfig((data::DbAntiCheatClientChannelIdConfig *const)(v3 + 448));
      v20 = ((v3 + 448) >> 3) + 2147450880;
      *(_DWORD *)v20 = -117901064;
      *(_DWORD *)(v20 + 4) = -117901064;
      *(_DWORD *)(v20 + 8) = -117901064;
      *(_DWORD *)(v20 + 12) = -117901064;
      *(_WORD *)(v20 + 16) = -1800;
      *(_BYTE *)(v20 + 18) = -8;
      if ( v19 != 1 )
      {
        v21 = 0;
        goto LABEL_33;
      }
    }
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbAntiCheatClientChannelIdConfig",
      1276);
    v22 = std::vector<t_anti_cheat_client_channel_id_config>::size((const std::vector<t_anti_cheat_client_channel_id_config> *const)(v3 + 48));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 240),
      "load %lu config from t_anti_cheat_client_channel_id_config",
      v22);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
    v21 = 1;
LABEL_33:
    std::vector<t_anti_cheat_client_channel_id_config>::~vector((std::vector<t_anti_cheat_client_channel_id_config> *const)(v3 + 48));
    v23 = ((v3 + 48) >> 3) + 2147450880;
    *(_WORD *)v23 = -1800;
    *(_BYTE *)(v23 + 2) = -8;
    if ( v21 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 672));
  }
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1344LL, v28);
  }
  return v2;
};

// Line 1287: range 000000000CD788EA-000000000CD792B8
int32_t __cdecl DbDeployConfigMgr::rewriteDbAntiCheatClientChannelIdConfig(DbDeployConfigMgr *const this)
{
  int32_t v1; // r15d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // edx
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  __int64 p_anti_cheat_config; // rsi
  int32_t result; // eax
  int *v23; // [rsp+0h] [rbp-280h]
  int thisa; // [rsp+8h] [rbp-278h]
  data::DbAntiCheatClientChannelIdConfigMap *__for_range; // [rsp+10h] [rbp-270h]
  std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::reference __in; // [rsp+18h] [rbp-268h]
  int client_channel_id_pair; // [rsp+20h] [rbp-260h]
  std::tuple_element<0,std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::type *client_channel_id_paira; // [rsp+20h] [rbp-260h]
  std::tuple_element<1,std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::type *db_client_channel_id_config; // [rsp+28h] [rbp-258h]
  int v30; // [rsp+30h] [rbp-250h] BYREF
  char v31; // [rsp+38h] [rbp-248h]

  thisa = (int)this;
  v2 = (unsigned __int64)&v30;
  v23 = &v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 11 option:1289 64 8 16 __for_begin:1291 96 8 14 __for_end:1291 128 32 9 <unknown> 192 32 "
                        "9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 40 11 status:1288 464 40 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::rewriteDbAntiCheatClientChannelIdConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959360;
  v4[536862734] = 62194;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)(v2 + 384));
  google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v2 + 48));
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 48);
  *(_BYTE *)(v2 + 48) = 1;
  __for_range = &this->db_anti_cheat_client_channel_id_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::iterator *)(v2 + 64) = std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::iterator *)(v2 + 96) = std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::_Self *)(v2 + 96)) )
    {
      v15 = 1;
      goto LABEL_26;
    }
    __in = std::_Rb_tree_iterator<std::pair<std::pair const<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> > *const)(v2 + 64));
    client_channel_id_pair = (unsigned int)std::get<0ul,std::pair<std::string,unsigned int> const,data::DbAntiCheatClientChannelIdConfig>(__in);
    db_client_channel_id_config = std::get<1ul,std::pair<std::string,unsigned int> const,data::DbAntiCheatClientChannelIdConfig>(__in);
    if ( (unsigned __int8)std::string::empty(&db_client_channel_id_config->anti_cheat_config_str) != 1 )
      break;
LABEL_24:
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 320);
    std::string::operator=(&db_client_channel_id_config->anti_cheat_config_str, v2 + 320);
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::_Rb_tree_iterator<std::pair<std::pair const<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>>::operator++((std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> > *const)(v2 + 64));
  }
  v5 = ((v2 + 464) >> 3) + 2147450880;
  *(_DWORD *)v5 = 0;
  *(_BYTE *)(v5 + 4) = 0;
  if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 503) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 48 + 39) & 7) >= *(_BYTE *)(((v2 + 503) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 464, 40LL);
  }
  google::protobuf::util::JsonStringToMessage(
    (google::protobuf::util::Status *)(v2 + 464),
    (int)v23,
    thisa,
    (int)__for_range,
    (int)__in,
    client_channel_id_pair,
    db_client_channel_id_config,
    v30,
    v31);
  google::protobuf::util::Status::operator=(
    (google::protobuf::util::Status *const)(v2 + 384),
    (const google::protobuf::util::Status *)(v2 + 464));
  google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 464));
  v6 = ((v2 + 464) >> 3) + 2147450880;
  *(_DWORD *)v6 = -117901064;
  *(_BYTE *)(v6 + 4) = -8;
  if ( google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 384)) )
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "rewriteDbAntiCheatClientChannelIdConfig",
      1302);
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
            (common::milog::MiLogStream *const)(v2 + 192),
            (const char (*)[9])"version:");
    v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &client_channel_id_paira->first);
    v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" channel_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &client_channel_id_paira->second);
    v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v19,
            (const char (*)[20])" anti_cheat_config:");
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    p_anti_cheat_config = (__int64)&db_client_channel_id_config->anti_cheat_config;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      p_anti_cheat_config = 32LL;
      __asan_report_store_n(v2 + 256, 32LL);
    }
    google::protobuf::Message::ShortDebugString[abi:cxx11](
      (std::string *)(v2 + 256),
      (google::protobuf::Message *)p_anti_cheat_config);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    goto LABEL_24;
  }
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 128),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_deploy_config_mgr.cpp",
    "rewriteDbAntiCheatClientChannelIdConfig",
    1298);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v2 + 128),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
         v7,
         (const char (*)[51])"JsonStringToMessage anti_cheat_config_str failed: ");
  v9 = common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>(
         v8,
         (const google::protobuf::util::Status *)(v2 + 384));
  v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" version:");
  v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &client_channel_id_paira->first);
  v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" channel_id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &client_channel_id_paira->second);
  v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          v13,
          (const char (*)[24])" anti_cheat_config_str:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
    v14,
    &db_client_channel_id_config->anti_cheat_config_str);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  v1 = -1;
  v15 = 0;
LABEL_26:
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v15 == 1 )
    v1 = 0;
  google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 384));
  result = v1;
  if ( v23 == (int *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 1311: range 000000000CD792BA-000000000CD797CE
int32_t __cdecl DbDeployConfigMgr::checkDbAntiCheatClientChannelIdConfig(
        DbDeployConfigMgr *const this,
        const TxtConfigMgr *a2)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  const char *v7; // rax
  int v8; // eax
  common::milog::MiLogStream *v9; // rcx
  int32_t result; // eax
  data::DbAntiCheatClientChannelIdConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::reference v12; // [rsp+18h] [rbp-128h]
  std::tuple_element<0,std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::type *client_channel_id_pair; // [rsp+20h] [rbp-120h]
  char v14[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 16 __for_begin:1312 64 8 14 __for_end:1312 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::checkDbAntiCheatClientChannelIdConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->db_anti_cheat_client_channel_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::iterator *)(v3 + 32) = std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::iterator *)(v3 + 64) = std::map<std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::_Self *)(v3 + 32),
            (const std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> >::_Self *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_24;
    }
    v12 = std::_Rb_tree_iterator<std::pair<std::pair const<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> > *const)(v3 + 32));
    client_channel_id_pair = std::get<0ul,std::pair<std::string,unsigned int> const,data::DbAntiCheatClientChannelIdConfig>(v12);
    std::get<1ul,std::pair<std::string,unsigned int> const,data::DbAntiCheatClientChannelIdConfig>(v12);
    if ( !DbDeployConfigMgr::findDbClientConfig(this, &client_channel_id_pair->first) )
    {
      if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "checkDbAntiCheatClientChannelIdConfig",
        1317);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = (const char *)std::string::c_str(client_channel_id_pair);
      common::milog::MiLogStream::operator()(v6, "client version: %s is invalid", v7);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v8 = 0;
      goto LABEL_24;
    }
    if ( *(_BYTE *)(((unsigned __int64)&client_channel_id_pair->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&client_channel_id_pair->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&client_channel_id_pair->second);
    }
    if ( !proto::ChannelIdType_IsValid(client_channel_id_pair->second) )
      break;
    std::_Rb_tree_iterator<std::pair<std::pair const<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig>>::operator++((std::_Rb_tree_iterator<std::pair<const std::pair<std::string,unsigned int>,data::DbAntiCheatClientChannelIdConfig> > *const)(v3 + 32));
  }
  if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 160, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 160),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_deploy_config_mgr.cpp",
    "checkDbAntiCheatClientChannelIdConfig",
    1324);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  if ( *(_BYTE *)(((unsigned __int64)&client_channel_id_pair->second >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&client_channel_id_pair->second >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&client_channel_id_pair->second);
  }
  common::milog::MiLogStream::operator()(v9, "channel_id: %u is invalid", client_channel_id_pair->second);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v8 = 0;
LABEL_24:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1331: range 000000000CEFE942-000000000CEFF004
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_client_channel_id_config<(mysqlpp::sql_dummy_type)0>(
        t_client_channel_id_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // r14
  const mysqlpp::String *v6; // rax
  unsigned int v7; // edx
  const mysqlpp::String *v8; // rax
  unsigned int v9; // ecx
  const mysqlpp::String *v10; // r14
  const mysqlpp::String *v11; // r14
  std::string rowa; // [rsp+0h] [rbp-200h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "7 32 16 29 ignore_schema_mismatches:1331 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <un"
                              "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_client_channel_id_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v5, rowa);
  std::string::operator=(rowa._M_string_length, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  v6 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v7 = mysqlpp::String::conv<unsigned int>(v6, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 32);
  }
  *(_DWORD *)(rowa._M_string_length + 32) = v7;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v9 = mysqlpp::String::conv<unsigned int>(v8, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 36) >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 36);
  }
  *(_DWORD *)(rowa._M_string_length + 36) = v9;
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
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8030) = 0LL;
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
  }
};

// Line 1331: range 000000000CE4174C-000000000CE41811
void __cdecl t_client_channel_id_config::t_client_channel_id_config(
        t_client_channel_id_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->force_update_config_str);
  std::string::basic_string(&this->stop_server_config_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_client_channel_id_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 1331: range 000000000D3AFB04-000000000D3AFCB3
void __cdecl t_client_channel_id_config::t_client_channel_id_config(
        t_client_channel_id_config *const this,
        t_client_channel_id_config *a2)
{
  mysqlpp::sql_int_unsigned channel_id; // ecx
  mysqlpp::sql_int_unsigned sub_channel_id; // ecx
  const char *table_override; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel_id);
  }
  channel_id = a2->channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_id);
  }
  this->channel_id = channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sub_channel_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->sub_channel_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->sub_channel_id);
  }
  sub_channel_id = a2->sub_channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_channel_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_channel_id);
  }
  this->sub_channel_id = sub_channel_id;
  std::string::basic_string(&this->force_update_config_str, &a2->force_update_config_str);
  std::string::basic_string(&this->stop_server_config_str, &a2->stop_server_config_str);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 1331: range 000000000D0DAAA8-000000000D0DAAE2
void __cdecl t_client_channel_id_config::~t_client_channel_id_config(t_client_channel_id_config *const this)
{
  std::string::~string(&this->stop_server_config_str);
  std::string::~string(&this->force_update_config_str);
  std::string::~string(this);
};

// Line 1339: range 000000000CD797D0-000000000CD7A5CB
int32_t __cdecl DbDeployConfigMgr::loadDbClientChannelIdConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  unsigned __int64 v8; // rax
  std::remove_reference<std::string&>::type *v9; // rax
  mysqlpp::sql_int_unsigned channel_id; // ecx
  mysqlpp::sql_int_unsigned sub_channel_id; // ecx
  std::remove_reference<std::string&>::type *v12; // rax
  std::remove_reference<std::string&>::type *v13; // rax
  std::string *v14; // r8
  unsigned int *v15; // r9
  unsigned __int64 v16; // rax
  std::tuple<std::string,unsigned int,unsigned int> *v17; // rcx
  data::DbClientChannelIdConfig *v18; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >,bool> v19; // rax
  bool v20; // r15
  unsigned __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // r15d
  unsigned __int64 v24; // rax
  int v25; // r15d
  std::vector<t_client_channel_id_config>::size_type v26; // rdx
  unsigned __int64 v27; // rax
  data::DbClientChannelIdConfig *v29; // [rsp+0h] [rbp-5D0h]
  data::DbClientChannelIdConfig *v30; // [rsp+0h] [rbp-5D0h]
  uint32_t idx; // [rsp+2Ch] [rbp-5A4h]
  t_client_channel_id_config *row; // [rsp+30h] [rbp-5A0h]
  char v33[1424]; // [rsp+40h] [rbp-590h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1376LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 24 12 row_vec:1350 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknow"
                        "n> 352 40 9 <unknown> 432 200 11 object:1362 704 544 10 query:1345";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbClientChannelIdConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959360;
  v5[536862733] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862741] = -218959118;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  v5[536862762] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbClientChannelIdConfig",
      1342);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 96), "conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 704, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 704), v6, "select ");
    std::operator<<<std::char_traits<char>>(
      v3 + 704,
      "`version`, `channel_id`, `sub_channel_id`, `force_update_config_str`, `stop_server_config_str` from t_client_channel_id_config");
    std::vector<t_client_channel_id_config>::vector((std::vector<t_client_channel_id_config> *const)(v3 + 32));
    mysqlpp::Query::storein<std::vector<t_client_channel_id_config>>(
      (mysqlpp::Query *const)(v3 + 704),
      (std::vector<t_client_channel_id_config> *)(v3 + 32));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 704)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0;
          idx < std::vector<t_client_channel_id_config>::size((const std::vector<t_client_channel_id_config> *const)(v3 + 32));
          ++idx )
    {
      row = std::vector<t_client_channel_id_config>::operator[](
              (std::vector<t_client_channel_id_config> *const)(v3 + 32),
              idx);
      v8 = ((v3 + 432) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_DWORD *)(v8 + 4) = 0;
      *(_DWORD *)(v8 + 8) = 0;
      *(_DWORD *)(v8 + 12) = 0;
      *(_DWORD *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 20) = 0;
      *(_BYTE *)(v8 + 24) = 0;
      data::DbClientChannelIdConfig::DbClientChannelIdConfig((data::DbClientChannelIdConfig *const)(v3 + 432));
      v9 = std::move<std::string &>(&row->version);
      std::string::operator=(v3 + 440, v9);
      if ( *(_BYTE *)(((unsigned __int64)&row->channel_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->channel_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->channel_id);
      }
      channel_id = row->channel_id;
      if ( *(_BYTE *)(((v3 + 472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 472) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 472);
      *(_DWORD *)(v3 + 472) = channel_id;
      if ( *(_BYTE *)(((unsigned __int64)&row->sub_channel_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->sub_channel_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->sub_channel_id);
      }
      sub_channel_id = row->sub_channel_id;
      if ( *(_BYTE *)(((v3 + 476) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 36) & 7) + 3) >= *(_BYTE *)(((v3 + 476) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 476);
      }
      *(_DWORD *)(v3 + 476) = sub_channel_id;
      v12 = std::move<std::string &>(&row->force_update_config_str);
      std::string::operator=(v3 + 480, v12);
      v13 = std::move<std::string &>(&row->stop_server_config_str);
      std::string::operator=(v3 + 512, v13);
      v29 = std::move<data::DbClientChannelIdConfig &>((data::DbClientChannelIdConfig *)(v3 + 432));
      v16 = ((v3 + 352) >> 3) + 2147450880;
      *(_DWORD *)v16 = 0;
      *(_BYTE *)(v16 + 4) = 0;
      if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 391) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 121) & 7) >= *(_BYTE *)(((v3 + 391) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 352, 40LL);
      }
      std::make_tuple<std::string &,unsigned int &,unsigned int &>(
        (std::tuple<std::string,unsigned int,unsigned int> *)(v3 + 352),
        (std::string *)(v3 + 440),
        (unsigned int *)(v3 + 472),
        (unsigned int *)(v3 + 476),
        v14,
        v15,
        &v29->id);
      v19 = std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::emplace<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>(
              &this->db_client_channel_id_config_map,
              (std::tuple<std::string,unsigned int,unsigned int> *)(v3 + 352),
              v30,
              v17,
              v18);
      v20 = !v19.second;
      std::tuple<std::string,unsigned int,unsigned int>::~tuple((std::tuple<std::string,unsigned int,unsigned int> *const)(v3 + 352));
      v21 = ((v3 + 352) >> 3) + 2147450880;
      *(_DWORD *)v21 = -117901064;
      *(_BYTE *)(v21 + 4) = -8;
      if ( v20 )
      {
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbClientChannelIdConfig",
          1371);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator()(
          v22,
          "find repeat version and channel_id and sub_channel_id in t_client_channel_id_config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v23 = 0;
      }
      else
      {
        v23 = 1;
      }
      data::DbClientChannelIdConfig::~DbClientChannelIdConfig((data::DbClientChannelIdConfig *const)(v3 + 432));
      v24 = ((v3 + 432) >> 3) + 2147450880;
      *(_DWORD *)v24 = -117901064;
      *(_DWORD *)(v24 + 4) = -117901064;
      *(_DWORD *)(v24 + 8) = -117901064;
      *(_DWORD *)(v24 + 12) = -117901064;
      *(_DWORD *)(v24 + 16) = -117901064;
      *(_DWORD *)(v24 + 20) = -117901064;
      *(_BYTE *)(v24 + 24) = -8;
      if ( v23 != 1 )
      {
        v25 = 0;
        goto LABEL_35;
      }
    }
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbClientChannelIdConfig",
      1375);
    v26 = std::vector<t_client_channel_id_config>::size((const std::vector<t_client_channel_id_config> *const)(v3 + 32));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 224),
      "load %lu config from t_client_channel_id_config",
      v26);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v25 = 1;
LABEL_35:
    std::vector<t_client_channel_id_config>::~vector((std::vector<t_client_channel_id_config> *const)(v3 + 32));
    v27 = ((v3 + 32) >> 3) + 2147450880;
    *(_WORD *)v27 = -1800;
    *(_BYTE *)(v27 + 2) = -8;
    if ( v25 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 704));
  }
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF809C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A4) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1376LL, v33);
  }
  return v2;
};

// Line 1386: range 000000000CD7A5CC-000000000CD7B183
int32_t __cdecl DbDeployConfigMgr::rewriteDbClientChannelIdConfig(DbDeployConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const std::string *v18; // rax
  const google::protobuf::Timestamp *v19; // rax
  google::protobuf::int64 v20; // r15
  const google::protobuf::Timestamp *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  const std::string *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  int *v27; // [rsp+0h] [rbp-280h]
  int thisa; // [rsp+8h] [rbp-278h]
  data::DbClientChannelIdConfigMap *__for_range; // [rsp+10h] [rbp-270h]
  std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::reference __in; // [rsp+18h] [rbp-268h]
  int client_channel_id_tuple; // [rsp+20h] [rbp-260h]
  std::tuple_element<0,std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::type *client_channel_id_tuplea; // [rsp+20h] [rbp-260h]
  std::tuple_element<1,std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::type *client_channel_id_config; // [rsp+28h] [rbp-258h]
  int v34; // [rsp+30h] [rbp-250h] BYREF
  char v35; // [rsp+38h] [rbp-248h]

  thisa = (int)this;
  v2 = (unsigned __int64)&v34;
  v27 = &v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 1 11 option:1388 48 8 16 __for_begin:1390 80 8 14 __for_end:1390 112 32 9 <unknown> 176 32 "
                        "9 <unknown> 240 32 9 <unknown> 304 40 11 status:1387 384 40 9 <unknown> 464 40 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::rewriteDbClientChannelIdConfig;
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
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862733] = -218959360;
  v4[536862734] = 62194;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  google::protobuf::util::Status::Status((google::protobuf::util::Status *const)(v2 + 304));
  google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v2 + 32));
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 32);
  *(_BYTE *)(v2 + 32) = 1;
  __for_range = &this->db_client_channel_id_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::iterator *)(v2 + 48) = std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::iterator *)(v2 + 80) = std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::_Self *)(v2 + 48),
            (const std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::_Self *)(v2 + 80)) )
    {
      v11 = 1;
      goto LABEL_32;
    }
    __in = std::_Rb_tree_iterator<std::pair<std::tuple<std::string,unsigned int,unsigned int> const,data::DbClientChannelIdConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> > *const)(v2 + 48));
    client_channel_id_tuple = (unsigned int)std::get<0ul,std::tuple<std::string,unsigned int,unsigned int> const,data::DbClientChannelIdConfig>(__in);
    client_channel_id_config = std::get<1ul,std::tuple<std::string,unsigned int,unsigned int> const,data::DbClientChannelIdConfig>(__in);
    if ( (unsigned __int8)std::string::empty(&client_channel_id_config->force_update_config_str) != 1 )
    {
      v5 = ((v2 + 384) >> 3) + 2147450880;
      *(_DWORD *)v5 = 0;
      *(_BYTE *)(v5 + 4) = 0;
      if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 423) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 89) & 7) >= *(_BYTE *)(((v2 + 423) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 384, 40LL);
      }
      google::protobuf::util::JsonStringToMessage(
        (google::protobuf::util::Status *)(v2 + 384),
        (int)v27,
        thisa,
        (int)__for_range,
        (int)__in,
        client_channel_id_tuple,
        client_channel_id_config,
        v34,
        v35);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)(v2 + 304),
        (const google::protobuf::util::Status *)(v2 + 384));
      google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 384));
      v6 = ((v2 + 384) >> 3) + 2147450880;
      *(_DWORD *)v6 = -117901064;
      *(_BYTE *)(v6 + 4) = -8;
      if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 304)) )
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
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "rewriteDbClientChannelIdConfig",
          1397);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 112),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               v7,
               (const char (*)[48])"JsonStringToMessage force_update_config failed:");
        v9 = common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>(
               v8,
               (const google::protobuf::util::Status *)(v2 + 304));
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" version: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &client_channel_id_config->version);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 112));
        *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v11 = 0;
        goto LABEL_32;
      }
    }
    std::string::clear(&client_channel_id_config->force_update_config_str);
    if ( (unsigned __int8)std::string::empty(&client_channel_id_config->stop_server_config_str) != 1 )
    {
      v12 = ((v2 + 464) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_BYTE *)(v12 + 4) = 0;
      if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 503) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 48 + 39) & 7) >= *(_BYTE *)(((v2 + 503) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 464, 40LL);
      }
      google::protobuf::util::JsonStringToMessage(
        (google::protobuf::util::Status *)(v2 + 464),
        (int)v27,
        thisa,
        (int)__for_range,
        (int)__in,
        client_channel_id_tuple,
        client_channel_id_config,
        v34,
        v35);
      google::protobuf::util::Status::operator=(
        (google::protobuf::util::Status *const)(v2 + 304),
        (const google::protobuf::util::Status *)(v2 + 464));
      google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 464));
      v13 = ((v2 + 464) >> 3) + 2147450880;
      *(_DWORD *)v13 = -117901064;
      *(_BYTE *)(v13 + 4) = -8;
      if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 304)) )
      {
        *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 176, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 176),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "rewriteDbClientChannelIdConfig",
          1408);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 176),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                v14,
                (const char (*)[48])"JsonStringToMessage stop_server_config failed: ");
        v16 = common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>(
                v15,
                (const google::protobuf::util::Status *)(v2 + 304));
        v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" version: ");
        v18 = std::get<0ul,std::string,unsigned int,unsigned int>(client_channel_id_tuplea);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, v18);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
        *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v11 = 0;
        goto LABEL_32;
      }
      v19 = proto::StopServerConfig::begin_time(&client_channel_id_config->stop_server_config);
      v20 = google::protobuf::Timestamp::seconds(v19);
      v21 = proto::StopServerConfig::end_time(&client_channel_id_config->stop_server_config);
      if ( v20 >= google::protobuf::Timestamp::seconds(v21) )
        break;
    }
    std::string::clear(&client_channel_id_config->stop_server_config_str);
    std::_Rb_tree_iterator<std::pair<std::tuple<std::string,unsigned int,unsigned int> const,data::DbClientChannelIdConfig>>::operator++((std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> > *const)(v2 + 48));
  }
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
    "./src/db_data_manual/db_deploy_config_mgr.cpp",
    "rewriteDbClientChannelIdConfig",
    1413);
  v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 240),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v22, (const char (*)[16])"client_channel ");
  v24 = std::get<0ul,std::string,unsigned int,unsigned int>(client_channel_id_tuplea);
  v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, v24);
  common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v25, (const char (*)[44])byte_1A1947A0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
  *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
  v1 = -1;
  v11 = 0;
LABEL_32:
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
    v1 = 0;
  google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 304));
  result = v1;
  if ( v27 == (int *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 1423: range 000000000CD7B184-000000000CD7BDFA
int32_t __cdecl DbDeployConfigMgr::checkDbClientChannelIdConfig(DbDeployConfigMgr *const this, const TxtConfigMgr *a2)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::string *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  const std::__tuple_element_t_41 *v8; // rax
  const char *v9; // rax
  int v10; // eax
  std::__tuple_element_t_22 *v11; // rax
  int *v12; // rdx
  common::milog::MiLogStream *v13; // r14
  std::__tuple_element_t_22 *v14; // rax
  unsigned int *v15; // rdx
  const google::protobuf::Timestamp *v16; // rax
  google::protobuf::uint32 v17; // edx
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *p_deploy_multi_lang_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *v19; // rdx
  bool v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const std::string *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // eax
  google::protobuf::uint32 v28; // edx
  char v29; // r14
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *v30; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,std::string>> *v31; // rdx
  char v32; // dl
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  const std::string *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  int32_t result; // eax
  char v40; // [rsp+Fh] [rbp-261h]
  data::DbClientChannelIdConfigMap *__for_range; // [rsp+20h] [rbp-250h]
  std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::reference v42; // [rsp+28h] [rbp-248h]
  std::tuple_element<0,std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::type *client_channel_id_tuple; // [rsp+30h] [rbp-240h]
  std::tuple_element<1,const std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::type *db_client_channel_id_config; // [rsp+38h] [rbp-238h]
  char v45[560]; // [rsp+40h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 4 12 text_id:1442 48 4 20 content_text_id:1449 64 8 16 __for_begin:1424 96 8 14 __for_end:"
                        "1424 128 8 9 <unknown> 160 8 9 <unknown> 192 8 9 <unknown> 224 8 9 <unknown> 256 32 9 <unknown> "
                        "320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::checkDbClientChannelIdConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -202116109;
  __for_range = &this->db_client_channel_id_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::iterator *)(v3 + 64) = std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::iterator *)(v3 + 96) = std::map<std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::_Self *)(v3 + 64),
            (const std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::_Self *)(v3 + 96)) )
    {
      v10 = 1;
      goto LABEL_56;
    }
    v42 = std::_Rb_tree_iterator<std::pair<std::tuple<std::string,unsigned int,unsigned int> const,data::DbClientChannelIdConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> > *const)(v3 + 64));
    client_channel_id_tuple = std::get<0ul,std::tuple<std::string,unsigned int,unsigned int> const,data::DbClientChannelIdConfig>(v42);
    db_client_channel_id_config = (std::tuple_element<1,const std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> >::type *)std::get<1ul,std::tuple<std::string,unsigned int,unsigned int> const,data::DbClientChannelIdConfig>(v42);
    v6 = std::get<0ul,std::string,unsigned int,unsigned int>(client_channel_id_tuple);
    if ( !DbDeployConfigMgr::findDbClientConfig(this, v6) )
    {
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_deploy_config_mgr.cpp",
        "checkDbClientChannelIdConfig",
        1429);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = std::get<0ul,std::string,unsigned int,unsigned int>(client_channel_id_tuple);
      v9 = (const char *)std::string::c_str(v8);
      common::milog::MiLogStream::operator()(v7, "client version: %s is invalid", v9);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
      v10 = 0;
      goto LABEL_56;
    }
    v11 = (std::__tuple_element_t_22 *)std::get<1ul,std::string,unsigned int,unsigned int>(client_channel_id_tuple);
    v12 = (int *)v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    if ( !proto::ChannelIdType_IsValid(*v12) )
      break;
    v16 = proto::StopServerConfig::begin_time(&db_client_channel_id_config->stop_server_config);
    if ( google::protobuf::Timestamp::seconds(v16) )
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v17 = proto::StopServerConfig::text_id(&db_client_channel_id_config->stop_server_config);
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32);
      *(_DWORD *)(v3 + 32) = v17;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      p_deploy_multi_lang_map = &this->deploy_multi_lang_map;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::end(p_deploy_multi_lang_map);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      v19 = &this->deploy_multi_lang_map;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::find(v19, (const std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::key_type *)(v3 + 32));
      v20 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,std::string>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 160));
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v20 )
      {
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "checkDbClientChannelIdConfig",
          1445);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])"version: ");
        v23 = std::get<0ul,std::string,unsigned int,unsigned int>(client_channel_id_tuple);
        v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, v23);
        v25 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v24, (const char (*)[20])byte_1A198500);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])byte_1A11E460);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v27 = 0;
      }
      else
      {
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v28 = proto::StopServerConfig::content_text_id(&db_client_channel_id_config->stop_server_config);
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48);
        *(_DWORD *)(v3 + 48) = v28;
        v29 = 0;
        v40 = 0;
        if ( !*(_DWORD *)(v3 + 48) )
          goto LABEL_42;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        v30 = &this->deploy_multi_lang_map;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::end(v30);
        v29 = 1;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        v31 = &this->deploy_multi_lang_map;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::find(v31, (const std::unordered_map<unsigned int,std::map<unsigned int,std::string>>::key_type *)(v3 + 48));
        v40 = 1;
        if ( std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,std::string>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 192),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::string> >,false> *)(v3 + 224)) )
        {
          v32 = 1;
        }
        else
        {
LABEL_42:
          v32 = 0;
        }
        if ( v40 )
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v29 )
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v32 )
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_deploy_config_mgr.cpp",
            "checkDbClientChannelIdConfig",
            1452);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v33, (const char (*)[10])"version: ");
          v35 = std::get<0ul,std::string,unsigned int,unsigned int>(client_channel_id_tuple);
          v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, v35);
          v37 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v36, (const char (*)[28])byte_1A198540);
          v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v37,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v38, (const char (*)[10])byte_1A11E460);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v27 = 0;
        }
        else
        {
          v27 = 1;
        }
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 != 1 )
      {
        v10 = 0;
        goto LABEL_56;
      }
    }
    std::_Rb_tree_iterator<std::pair<std::tuple<std::string,unsigned int,unsigned int> const,data::DbClientChannelIdConfig>>::operator++((std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,data::DbClientChannelIdConfig> > *const)(v3 + 64));
  }
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 320, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 320),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_deploy_config_mgr.cpp",
    "checkDbClientChannelIdConfig",
    1436);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 320),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = (std::__tuple_element_t_22 *)std::get<1ul,std::string,unsigned int,unsigned int>(client_channel_id_tuple);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  common::milog::MiLogStream::operator()(v13, "channel_id: %u is invalid", *v15);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
  v2 = -1;
  v10 = 0;
LABEL_56:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 1462: range 000000000CD7BDFC-000000000CD7C22E
bool __fastcall DbDeployConfigMgr::isClientBindRegionInDb(
        const DbDeployConfigMgr *const this,
        const std::string *client_version,
        uint32_t channel_id,
        const std::string *region_name)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > > *p_client_and_channel_to_region_map; // rdx
  bool v9; // al
  bool result; // al
  const std::string *M_current; // r14
  const std::string *v12; // rcx
  std::vector<std::string> *region_vec; // [rsp+28h] [rbp-138h]
  char v16[304]; // [rsp+30h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 15 channel_id:1461 48 8 9 iter:1463 80 8 9 <unknown> 112 8 16 region_iter:1469 144 8 9 <u"
                        "nknown> 176 40 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DbDeployConfigMgr::isClientBindRegionInDb;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = 62194;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 32) = channel_id;
  if ( *(char *)(((v4 + 176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 215) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 41) & 7) >= *(_BYTE *)(((v4 + 215) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 176, 40LL);
  }
  std::make_pair<std::string const&,unsigned int &>(
    (std::pair<std::string,unsigned int> *)(v4 + 176),
    client_version,
    (unsigned int *)(v4 + 32));
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > >::const_iterator *)(v4 + 48) = std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int>>,std::equal_to<std::pair<std::string,unsigned int>>,std::allocator<std::pair<std::pair<std::string,unsigned int> const,std::vector<std::string>>>>::find(&this->client_and_channel_to_region_map, (const std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > >::key_type *)(v4 + 176));
  std::pair<std::string,unsigned int>::~pair((std::pair<std::string,unsigned int> *const)(v4 + 176));
  v7 = ((v4 + 176) >> 3) + 2147450880;
  *(_DWORD *)v7 = -117901064;
  *(_BYTE *)(v7 + 4) = -8;
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 0;
  p_client_and_channel_to_region_map = &this->client_and_channel_to_region_map;
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > >::const_iterator *)(v4 + 80) = std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int>>,std::equal_to<std::pair<std::string,unsigned int>>,std::allocator<std::pair<std::pair<std::string,unsigned int> const,std::vector<std::string>>>>::end(p_client_and_channel_to_region_map);
  v9 = std::__detail::operator==<std::pair<std::pair const<std::string,unsigned int>,std::vector<std::allocator<char>>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,true> *)(v4 + 48),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,true> *)(v4 + 80));
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0;
  }
  else
  {
    region_vec = &std::__detail::_Node_const_iterator<std::pair<std::pair const<std::string,unsigned int>,std::vector<std::allocator<char>>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,false,true> *const)(v4 + 48))->second;
    *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 0;
    M_current = std::vector<std::string>::cend(region_vec)._M_current;
    v12 = std::vector<std::string>::cbegin(region_vec)._M_current;
    if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v4 + 112) = std::find<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::string>(
                                                                                                  (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v12,
                                                                                                  (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)M_current,
                                                                                                  region_name);
    *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::const_iterator *)(v4 + 144) = std::vector<std::string>::cend(region_vec);
    result = __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
               (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v4 + 112),
               (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v4 + 144));
  }
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1476: range 000000000CD7C230-000000000CD7C73A
__int64 __fastcall DbDeployConfigMgr::findBindRegionConfigVecInDb(
        const DbDeployConfigMgr *const this,
        const std::string *client_version,
        uint32_t channel_id,
        std::vector<const data::DbRegionConfig*> *region_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > > *p_client_and_channel_to_region_map; // rdx
  bool v9; // al
  __int64 result; // rax
  const data::DbRegionConfig *DbRegionConfig; // rax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-160h]
  const std::string *region_name; // [rsp+28h] [rbp-158h]
  char v16[336]; // [rsp+30h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 15 channel_id:1474 48 8 9 iter:1477 80 8 9 <unknown> 112 8 16 __for_begin:1482 144 8 14 _"
                        "_for_end:1482 176 8 22 region_config_ptr:1484 208 40 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DbDeployConfigMgr::findBindRegionConfigVecInDb;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = 62194;
  v6[536862725] = -234881024;
  v6[536862726] = 62194;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 32) = channel_id;
  if ( *(char *)(((v4 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 247) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 9) & 7) >= *(_BYTE *)(((v4 + 247) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 208, 40LL);
  }
  std::make_pair<std::string const&,unsigned int &>(
    (std::pair<std::string,unsigned int> *)(v4 + 208),
    client_version,
    (unsigned int *)(v4 + 32));
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > >::const_iterator *)(v4 + 48) = std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int>>,std::equal_to<std::pair<std::string,unsigned int>>,std::allocator<std::pair<std::pair<std::string,unsigned int> const,std::vector<std::string>>>>::find(&this->client_and_channel_to_region_map, (const std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > >::key_type *)(v4 + 208));
  std::pair<std::string,unsigned int>::~pair((std::pair<std::string,unsigned int> *const)(v4 + 208));
  v7 = ((v4 + 208) >> 3) + 2147450880;
  *(_DWORD *)v7 = -117901064;
  *(_BYTE *)(v7 + 4) = -8;
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 0;
  p_client_and_channel_to_region_map = &this->client_and_channel_to_region_map;
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int> >,std::equal_to<std::pair<std::string,unsigned int> >,std::allocator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> > > >::const_iterator *)(v4 + 80) = std::unordered_map<std::pair<std::string,unsigned int>,std::vector<std::string>,boost::hash<std::pair<std::string,unsigned int>>,std::equal_to<std::pair<std::string,unsigned int>>,std::allocator<std::pair<std::pair<std::string,unsigned int> const,std::vector<std::string>>>>::end(p_client_and_channel_to_region_map);
  v9 = std::__detail::operator==<std::pair<std::pair const<std::string,unsigned int>,std::vector<std::allocator<char>>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,true> *)(v4 + 48),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,true> *)(v4 + 80));
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<std::pair const<std::string,unsigned int>,std::vector<std::allocator<char>>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<std::string,unsigned int>,std::vector<std::string> >,false,true> *const)(v4 + 48))->second;
    *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::const_iterator *)(v4 + 112) = std::vector<std::string>::begin(__for_range);
    *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::const_iterator *)(v4 + 144) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v4 + 112),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v4 + 144)) )
    {
      region_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v4 + 112));
      *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) = 0;
      DbRegionConfig = DbDeployConfigMgr::findDbRegionConfig(this, region_name);
      if ( *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v4 + 176) = DbRegionConfig;
      if ( *(_QWORD *)(v4 + 176) )
        std::vector<data::DbRegionConfig const*>::push_back(
          region_vec,
          (const std::vector<const data::DbRegionConfig*>::value_type *)(v4 + 176));
      *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v4 + 112));
    }
    result = 0LL;
  }
  if ( v16 == (char *)v4 )
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

// Line 1495: range 000000000CD7C73C-000000000CD7C96B
std::string *__cdecl DbDeployConfigMgr::findFirstRegionClientSecretKey[abi:cxx11](
        std::string *retstr,
        DbDeployConfigMgr *const this)
{
  std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DbRegionConfigMap *__for_range; // [rsp+10h] [rbp-90h]
  std::pair<const std::string,data::DbRegionConfig> *iter; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)"2 32 8 16 __for_begin:1498 64 8 14 __for_end:1498";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)DbDeployConfigMgr::findFirstRegionClientSecretKey[abi:cxx11];
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::string::basic_string(retstr);
  __for_range = &this->db_region_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_node = std::map<std::string,data::DbRegionConfig>::begin(__for_range)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_node = std::map<std::string,data::DbRegionConfig>::end(__for_range)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    iter = std::_Rb_tree_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator*(v2 + 4);
    if ( (unsigned __int8)std::string::empty(&iter->second.client_secret_key) != 1 )
    {
      std::string::operator=(retstr, &iter->second.client_secret_key);
      break;
    }
    std::_Rb_tree_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator++(v2 + 4);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 1512: range 000000000CD7C96C-000000000CD7CB9B
std::string *__cdecl DbDeployConfigMgr::findFirstRegionServerSecretKey[abi:cxx11](
        std::string *retstr,
        DbDeployConfigMgr *const this)
{
  std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DbRegionConfigMap *__for_range; // [rsp+10h] [rbp-90h]
  std::pair<const std::string,data::DbRegionConfig> *iter; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)"2 32 8 16 __for_begin:1515 64 8 14 __for_end:1515";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)DbDeployConfigMgr::findFirstRegionServerSecretKey[abi:cxx11];
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::string::basic_string(retstr);
  __for_range = &this->db_region_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_node = std::map<std::string,data::DbRegionConfig>::begin(__for_range)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_node = std::map<std::string,data::DbRegionConfig>::end(__for_range)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    iter = std::_Rb_tree_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator*(v2 + 4);
    if ( (unsigned __int8)std::string::empty(&iter->second.server_secret_key) != 1 )
    {
      std::string::operator=(retstr, &iter->second.server_secret_key);
      break;
    }
    std::_Rb_tree_iterator<std::pair<std::string const,data::DbRegionConfig>>::operator++(v2 + 4);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,data::DbRegionConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 1531: range 000000000CD7CB9C-000000000CD7CDD0
std::string *__cdecl DbDeployConfigMgr::findClientRegionCustomConfigStrEncrypted(
        std::string *retstr,
        const DbDeployConfigMgr *const this,
        const std::string *client_version,
        const std::string *region_name,
        const std::string *server_secret_key)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int64 p_client_region_custom_config_str; // rsi
  const data::DbClientRegionConfig *client_region_config_ptr; // [rsp+38h] [rbp-68h]
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v5 + 16) = DbDeployConfigMgr::findClientRegionCustomConfigStrEncrypted;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116351;
  client_region_config_ptr = DbDeployConfigMgr::findDbClientRegionConfig(this, client_version, region_name);
  if ( client_region_config_ptr )
  {
    if ( std::operator==<char>(&client_region_config_ptr->server_secret_key, server_secret_key)
      && (unsigned __int8)std::string::empty(&client_region_config_ptr->client_region_custom_config_str_encrypted) != 1 )
    {
      std::string::basic_string(retstr, &client_region_config_ptr->client_region_custom_config_str_encrypted);
    }
    else
    {
      p_client_region_custom_config_str = (__int64)&client_region_config_ptr->client_region_custom_config_str;
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                              + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        p_client_region_custom_config_str = 32LL;
        __asan_report_store_n(retstr, 32LL);
      }
      common::tools::EncrynptTool::encrynpt(
        retstr,
        (const std::string *)p_client_region_custom_config_str,
        server_secret_key);
    }
  }
  else
  {
    std::allocator<char>::allocator(v5 + 32);
    std::string::basic_string<std::allocator<char>>(retstr, byte_1A0D8BA0, (const std::allocator<char> *)(v5 + 32));
    std::allocator<char>::~allocator(v5 + 32);
  }
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1544: range 000000000CD7CDD2-000000000CD7CF93
const data::DbSdkConfig *__fastcall DbDeployConfigMgr::findSdkConfig(
        const DbDeployConfigMgr *const this,
        uint32_t sdkenv)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DbSdkConfigMap *p_db_sdk_config_map; // rdx
  data::DbSdkConfigMap *v6; // rdx
  bool v7; // al
  const data::DbSdkConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 sdkenv:1543 64 8 9 iter:1545 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::findSdkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = sdkenv;
  p_db_sdk_config_map = &this->db_sdk_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbSdkConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::DbSdkConfig>::find(
                                                                             p_db_sdk_config_map,
                                                                             (const std::map<unsigned int,data::DbSdkConfig>::key_type *)(v2 + 48));
  v6 = &this->db_sdk_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbSdkConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::DbSdkConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbSdkConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbSdkConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbSdkConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbSdkConfig> > *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 1556: range 000000000CD7CF94-000000000CD7D155
const data::DbChannelIdConfig *__fastcall DbDeployConfigMgr::findDbChannelIdConfig(
        const DbDeployConfigMgr *const this,
        uint32_t channel_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DbChannelIdConfigMap *p_db_channel_id_config_map; // rdx
  data::DbChannelIdConfigMap *v6; // rdx
  bool v7; // al
  const data::DbChannelIdConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 channel_id:1555 64 8 9 iter:1557 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DbDeployConfigMgr::findDbChannelIdConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = channel_id;
  p_db_channel_id_config_map = &this->db_channel_id_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbChannelIdConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::DbChannelIdConfig>::find(
                                                                                   p_db_channel_id_config_map,
                                                                                   (const std::map<unsigned int,data::DbChannelIdConfig>::key_type *)(v2 + 48));
  v6 = &this->db_channel_id_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::DbChannelIdConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::DbChannelIdConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbChannelIdConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbChannelIdConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbChannelIdConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbChannelIdConfig> > *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 1568: range 000000000CD7D156-000000000CD7D1C9
bool __cdecl DbDeployConfigMgr::enablePcLogin(const DbDeployConfigMgr *const this, uint32_t channel_id)
{
  const data::DbChannelIdConfig *config; // [rsp+18h] [rbp-8h]

  config = DbDeployConfigMgr::findDbChannelIdConfig(this, channel_id);
  if ( !config )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config->enable_login_pc >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)config + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&config->enable_login_pc >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&config->enable_login_pc);
  }
  return config->enable_login_pc;
};

// Line 1576: range 000000000CD7D1CA-000000000CD7D716
void __cdecl DbDeployConfigMgr::splitToStringSetByComma(
        DbDeployConfigMgr *const this,
        const std::string *content,
        std::set<std::string> *set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  std::string *v7; // rdx
  int ret; // [rsp+2Ch] [rbp-184h]
  std::vector<std::string> *__for_range; // [rsp+30h] [rbp-180h]
  char v11[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 9 <unknown> 64 8 16 __for_begin:1586 96 8 14 __for_end:1586 128 24 12 tmp_vec:1577 192 32"
                        " 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::splitToStringSetByComma;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 128));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 192),
    ",",
    (const std::allocator<char> *)(v3 + 48));
  ret = common::tools::StringUtils::split(
          content,
          (const std::string *)(v3 + 192),
          (std::vector<std::string> *)(v3 + 128),
          1);
  std::string::~string((void *)(v3 + 192));
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( ret )
  {
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "splitToStringSetByComma",
      1581);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           (common::milog::MiLogStream *const)(v3 + 256),
           (const char (*)[30])"content is invalid, content: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, content);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v3 + 128);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v3 + 64) = std::vector<std::string>::begin(__for_range);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v3 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 96)) )
    {
      v7 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 64));
      std::set<std::string>::emplace<std::string&>(set, v7, v7);
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 64));
    }
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 128));
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1592: range 000000000CE419DE-000000000CE41A83
void __cdecl t_security_file_config::t_security_file_config(
        t_security_file_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(this);
  mysqlpp::String::String(&this->file_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_security_file_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 1592: range 000000000D45DBEE-000000000D45DC88
void __cdecl t_security_file_config::t_security_file_config(
        t_security_file_config *const this,
        const t_security_file_config *a2)
{
  const char *table_override; // rdx

  std::string::basic_string(this, a2);
  mysqlpp::String::String(&this->file_data, &a2->file_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 1592: range 000000000D0DCB1C-000000000D0DCB46
void __cdecl t_security_file_config::~t_security_file_config(t_security_file_config *const this)
{
  mysqlpp::String::~String(&this->file_data);
  std::string::~string(this);
};

// Line 1597: range 000000000CD7D718-000000000CD7E1E2
int32_t __cdecl DbDeployConfigMgr::loadDbSecurityFileConfig(
        DbDeployConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  _DWORD *v8; // rax
  std::remove_reference<std::string&>::type *v9; // rax
  data::DbSecurityFileConfig *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::string,data::DbSecurityFileConfig> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  _DWORD *v15; // rax
  int v16; // r15d
  std::vector<t_security_file_config>::size_type v17; // rdx
  unsigned __int64 v18; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-4A4h]
  t_security_file_config *row; // [rsp+30h] [rbp-4A0h]
  char v22[1168]; // [rsp+40h] [rbp-490h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1120LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 24 12 row_vec:1608 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknow"
                        "n> 352 64 11 object:1620 448 544 10 query:1603";
  *(_QWORD *)(v3 + 16) = DbDeployConfigMgr::loadDbSecurityFileConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862733] = -218959118;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  v5[536862753] = -202116109;
  v5[536862754] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbSecurityFileConfig",
      1600);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 96), "conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 448, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 448), v6, "select ");
    std::operator<<<std::char_traits<char>>(v3 + 448, "`file_key`, `file_data` from t_security_file_config");
    std::vector<t_security_file_config>::vector((std::vector<t_security_file_config> *const)(v3 + 32));
    mysqlpp::Query::storein<std::vector<t_security_file_config>>(
      (mysqlpp::Query *const)(v3 + 448),
      (std::vector<t_security_file_config> *)(v3 + 32));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 448)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( idx = 0;
          idx < std::vector<t_security_file_config>::size((const std::vector<t_security_file_config> *const)(v3 + 32));
          ++idx )
    {
      row = std::vector<t_security_file_config>::operator[]((std::vector<t_security_file_config> *const)(v3 + 32), idx);
      v8 = (_DWORD *)(((v3 + 352) >> 3) + 2147450880);
      *v8 = 0;
      v8[1] = 0;
      data::DbSecurityFileConfig::DbSecurityFileConfig((data::DbSecurityFileConfig *const)(v3 + 352));
      v9 = std::move<std::string &>(&row->file_key);
      std::string::operator=(v3 + 352, v9);
      mysqlpp::String::to_string(&row->file_data, (std::string *)(v3 + 384));
      v11 = std::map<std::string,data::DbSecurityFileConfig>::emplace<std::string&,data::DbSecurityFileConfig&>(
              &this->db_security_file_config_map,
              (std::string *)(v3 + 352),
              (data::DbSecurityFileConfig *)(v3 + 352),
              (std::string *)&this->db_security_file_config_map,
              v10);
      if ( !v11.second )
      {
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
          "./src/db_data_manual/db_deploy_config_mgr.cpp",
          "loadDbSecurityFileConfig",
          1626);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v12, (const char (*)[26])byte_1A198AA0);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v3 + 352));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      else
      {
        v14 = 1;
      }
      data::DbSecurityFileConfig::~DbSecurityFileConfig((data::DbSecurityFileConfig *const)(v3 + 352));
      v15 = (_DWORD *)(((v3 + 352) >> 3) + 2147450880);
      *v15 = -117901064;
      v15[1] = -117901064;
      if ( v14 != 1 )
      {
        v16 = 0;
        goto LABEL_25;
      }
    }
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_deploy_config_mgr.cpp",
      "loadDbSecurityFileConfig",
      1630);
    v17 = std::vector<t_security_file_config>::size((const std::vector<t_security_file_config> *const)(v3 + 32));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 224),
      "load %lu config from t_security_file_config",
      v17);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v16 = 1;
LABEL_25:
    std::vector<t_security_file_config>::~vector((std::vector<t_security_file_config> *const)(v3 + 32));
    v18 = ((v3 + 32) >> 3) + 2147450880;
    *(_WORD *)v18 = -1800;
    *(_BYTE *)(v18 + 2) = -8;
    if ( v16 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 448));
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1120LL, v22);
  }
  return v2;
};

// Line 1641: range 000000000CD7E1E4-000000000CD7E1F2
int32_t __cdecl DbDeployConfigMgr::rewriteDbSecurityFileConfig(DbDeployConfigMgr *const this)
{
  return 0;
};

// Line 1646: range 000000000CD7E1F4-000000000CD7E206
int32_t __cdecl DbDeployConfigMgr::checkDbSecurityFileConfig(DbDeployConfigMgr *const this, const TxtConfigMgr *a2)
{
  return 0;
};

// Line 1651: range 000000000CD7E208-000000000CD7E3C8
bool __cdecl DbDeployConfigMgr::findSecurityFile(
        const DbDeployConfigMgr *const this,
        const std::string *file_key,
        std::string *file_data)
{
  std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbSecurityFileConfig> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::DbSecurityFileConfigMap *p_db_security_file_config_map; // rdx
  data::DbSecurityFileConfigMap *v7; // rdx
  bool v8; // al
  std::string *p_file_data; // rdx
  bool result; // al
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbSecurityFileConfig> > *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbSecurityFileConfig> > *)v4;
  }
  v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbSecurityFileConfig> >::_Base_ptr)1102416563;
  v3[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbSecurityFileConfig> >::_Base_ptr)"2 32 8 9 iter:1652 64 8 9 <unknown>";
  v3[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbSecurityFileConfig> >::_Base_ptr)DbDeployConfigMgr::findSecurityFile;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  p_db_security_file_config_map = &this->db_security_file_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_node = std::map<std::string,data::DbSecurityFileConfig>::find(p_db_security_file_config_map, file_key)._M_node;
  v7 = &this->db_security_file_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_node = std::map<std::string,data::DbSecurityFileConfig>::end(v7)._M_node;
  v8 = std::operator!=(v3 + 4, v3 + 8);
  *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    p_file_data = &std::_Rb_tree_const_iterator<std::pair<std::string const,data::DbSecurityFileConfig>>::operator->(v3 + 4)->second.file_data;
    std::string::operator=(file_data, p_file_data);
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,data::DbSecurityFileConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1721: range 000000000CEF012C-000000000CEF2FFB
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_region_config<(mysqlpp::sql_dummy_type)0>(t_region_config *s, const mysqlpp::Row *row)
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
  const mysqlpp::String *v15; // rax
  unsigned int v16; // edx
  const mysqlpp::String *v17; // r15
  const mysqlpp::String *v18; // r15
  const mysqlpp::String *v19; // r15
  const mysqlpp::String *v20; // r15
  const mysqlpp::String *v21; // r15
  const mysqlpp::String *v22; // r15
  const mysqlpp::String *v23; // r15
  const mysqlpp::String *v24; // r15
  const mysqlpp::String *v25; // r15
  const mysqlpp::String *v26; // r15
  const mysqlpp::String *v27; // r15
  const mysqlpp::String *v28; // r15
  const mysqlpp::String *v29; // r15
  const mysqlpp::String *v30; // r15
  const mysqlpp::String *v31; // r15
  const mysqlpp::String *v32; // r15
  const mysqlpp::String *v33; // r15
  const mysqlpp::String *v34; // r15
  const mysqlpp::String *v35; // r15
  const mysqlpp::String *v36; // r15
  const mysqlpp::String *v37; // r15
  std::string rowa; // [rsp+0h] [rbp-F00h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3776LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "59 32 16 28 ignore_schema_mismatches:255 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <un"
                              "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 "
                              "9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 83"
                              "2 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unkn"
                              "own> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 "
                              "32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unkn"
                              "own> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 "
                              "32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unkn"
                              "own> 2304 32 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 "
                              "32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unkn"
                              "own> 2880 32 9 <unknown> 2944 32 9 <unknown> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136 "
                              "32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <unknown> 3328 32 9 <unknown> 3392 32 9 <unkn"
                              "own> 3456 32 9 <unknown> 3520 32 9 <unknown> 3584 32 9 <unknown> 3648 32 9 <unknown> 3712 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_region_config<(mysqlpp::sql_dummy_type)0>;
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
  v4[536862785] = -218959118;
  v4[536862787] = -218959118;
  v4[536862789] = -218959118;
  v4[536862791] = -218959118;
  v4[536862793] = -218959118;
  v4[536862795] = -218959118;
  v4[536862797] = -218959118;
  v4[536862799] = -218959118;
  v4[536862801] = -218959118;
  v4[536862803] = -218959118;
  v4[536862805] = -218959118;
  v4[536862807] = -218959118;
  v4[536862809] = -218959118;
  v4[536862811] = -218959118;
  v4[536862813] = -218959118;
  v4[536862815] = -218959118;
  v4[536862817] = -218959118;
  v4[536862819] = -218959118;
  v4[536862821] = -218959118;
  v4[536862823] = -218959118;
  v4[536862825] = -218959118;
  v4[536862827] = -218959118;
  v4[536862829] = -218959118;
  v4[536862831] = -218959118;
  v4[536862833] = -218959118;
  v4[536862835] = -218959118;
  v4[536862837] = -202116109;
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) )
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) )
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
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1055) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1024, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1024), v14, rowa);
  std::string::operator=(rowa._M_string_length + 232, p_anon_0 + 1024);
  std::string::~string((void *)(p_anon_0 + 1024));
  *(_DWORD *)(((p_anon_0 + 1024) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 960));
  *(_DWORD *)(((p_anon_0 + 960) >> 3) + 0x7FFF8000) = -117901064;
  v15 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v16 = mysqlpp::String::conv<unsigned int>(v15, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 264) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 264) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 264);
  }
  *(_DWORD *)(rowa._M_string_length + 264) = v16;
  *(_DWORD *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) = 0;
  v17 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1088) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1088);
  if ( *(char *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1183) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1183) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1152, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1152), v17, rowa);
  std::string::operator=(rowa._M_string_length + 272, p_anon_0 + 1152);
  std::string::~string((void *)(p_anon_0 + 1152));
  *(_DWORD *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1088));
  *(_DWORD *)(((p_anon_0 + 1088) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) = 0;
  v18 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1216) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1216);
  if ( *(char *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1311) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1280, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1280), v18, rowa);
  std::string::operator=(rowa._M_string_length + 304, p_anon_0 + 1280);
  std::string::~string((void *)(p_anon_0 + 1280));
  *(_DWORD *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1216));
  *(_DWORD *)(((p_anon_0 + 1216) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) = 0;
  v19 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1344) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1344);
  if ( *(char *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1439) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1439) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1408, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1408), v19, rowa);
  std::string::operator=(rowa._M_string_length + 336, p_anon_0 + 1408);
  std::string::~string((void *)(p_anon_0 + 1408));
  *(_DWORD *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1344));
  *(_DWORD *)(((p_anon_0 + 1344) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) = 0;
  v20 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1472) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1472);
  if ( *(char *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1567) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1567) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1536, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1536), v20, rowa);
  std::string::operator=(rowa._M_string_length + 368, p_anon_0 + 1536);
  std::string::~string((void *)(p_anon_0 + 1536));
  *(_DWORD *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1472));
  *(_DWORD *)(((p_anon_0 + 1472) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1664) >> 3) + 0x7FFF8000) = 0;
  v21 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1600) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1600);
  if ( *(char *)(((p_anon_0 + 1664) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1695) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1695) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1664, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1664), v21, rowa);
  std::string::operator=(rowa._M_string_length + 400, p_anon_0 + 1664);
  std::string::~string((void *)(p_anon_0 + 1664));
  *(_DWORD *)(((p_anon_0 + 1664) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1600));
  *(_DWORD *)(((p_anon_0 + 1600) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1792) >> 3) + 0x7FFF8000) = 0;
  v22 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1728) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1728);
  if ( *(char *)(((p_anon_0 + 1792) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1823) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 1823) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1792, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1792), v22, rowa);
  std::string::operator=(rowa._M_string_length + 432, p_anon_0 + 1792);
  std::string::~string((void *)(p_anon_0 + 1792));
  *(_DWORD *)(((p_anon_0 + 1792) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1728));
  *(_DWORD *)(((p_anon_0 + 1728) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1920) >> 3) + 0x7FFF8000) = 0;
  v23 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1856) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1856);
  if ( *(char *)(((p_anon_0 + 1920) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1951) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1951) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1920, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1920), v23, rowa);
  std::string::operator=(rowa._M_string_length + 464, p_anon_0 + 1920);
  std::string::~string((void *)(p_anon_0 + 1920));
  *(_DWORD *)(((p_anon_0 + 1920) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1856));
  *(_DWORD *)(((p_anon_0 + 1856) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2048) >> 3) + 0x7FFF8000) = 0;
  v24 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1984) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1984);
  if ( *(char *)(((p_anon_0 + 2048) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2079) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 2079) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2048, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2048), v24, rowa);
  std::string::operator=(rowa._M_string_length + 496, p_anon_0 + 2048);
  std::string::~string((void *)(p_anon_0 + 2048));
  *(_DWORD *)(((p_anon_0 + 2048) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1984));
  *(_DWORD *)(((p_anon_0 + 1984) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2176) >> 3) + 0x7FFF8000) = 0;
  v25 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 2112) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 2112);
  if ( *(char *)(((p_anon_0 + 2176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2207) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 2207) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2176, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2176), v25, rowa);
  std::string::operator=(rowa._M_string_length + 528, p_anon_0 + 2176);
  std::string::~string((void *)(p_anon_0 + 2176));
  *(_DWORD *)(((p_anon_0 + 2176) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 2112));
  *(_DWORD *)(((p_anon_0 + 2112) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2304) >> 3) + 0x7FFF8000) = 0;
  v26 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 2240) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 2240);
  if ( *(char *)(((p_anon_0 + 2304) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2335) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 2335) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2304, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2304), v26, rowa);
  std::string::operator=(rowa._M_string_length + 560, p_anon_0 + 2304);
  std::string::~string((void *)(p_anon_0 + 2304));
  *(_DWORD *)(((p_anon_0 + 2304) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 2240));
  *(_DWORD *)(((p_anon_0 + 2240) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2432) >> 3) + 0x7FFF8000) = 0;
  v27 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 2368) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 2368);
  if ( *(char *)(((p_anon_0 + 2432) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2463) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 2463) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2432, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2432), v27, rowa);
  std::string::operator=(rowa._M_string_length + 592, p_anon_0 + 2432);
  std::string::~string((void *)(p_anon_0 + 2432));
  *(_DWORD *)(((p_anon_0 + 2432) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 2368));
  *(_DWORD *)(((p_anon_0 + 2368) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2560) >> 3) + 0x7FFF8000) = 0;
  v28 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 2496) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 2496);
  if ( *(char *)(((p_anon_0 + 2560) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2591) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 2591) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2560, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2560), v28, rowa);
  std::string::operator=(rowa._M_string_length + 624, p_anon_0 + 2560);
  std::string::~string((void *)(p_anon_0 + 2560));
  *(_DWORD *)(((p_anon_0 + 2560) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 2496));
  *(_DWORD *)(((p_anon_0 + 2496) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2688) >> 3) + 0x7FFF8000) = 0;
  v29 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 2624) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 2624);
  if ( *(char *)(((p_anon_0 + 2688) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2719) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 2719) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2688, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2688), v29, rowa);
  std::string::operator=(rowa._M_string_length + 656, p_anon_0 + 2688);
  std::string::~string((void *)(p_anon_0 + 2688));
  *(_DWORD *)(((p_anon_0 + 2688) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 2624));
  *(_DWORD *)(((p_anon_0 + 2624) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2816) >> 3) + 0x7FFF8000) = 0;
  v30 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 2752) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 2752);
  if ( *(char *)(((p_anon_0 + 2816) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2847) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 2847) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2816, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2816), v30, rowa);
  std::string::operator=(rowa._M_string_length + 688, p_anon_0 + 2816);
  std::string::~string((void *)(p_anon_0 + 2816));
  *(_DWORD *)(((p_anon_0 + 2816) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 2752));
  *(_DWORD *)(((p_anon_0 + 2752) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 2944) >> 3) + 0x7FFF8000) = 0;
  v31 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 2880) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 2880);
  if ( *(char *)(((p_anon_0 + 2944) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 2975) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 2975) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 2944, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 2944), v31, rowa);
  std::string::operator=(rowa._M_string_length + 720, p_anon_0 + 2944);
  std::string::~string((void *)(p_anon_0 + 2944));
  *(_DWORD *)(((p_anon_0 + 2944) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 2880));
  *(_DWORD *)(((p_anon_0 + 2880) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 3072) >> 3) + 0x7FFF8000) = 0;
  v32 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 3008) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 3008);
  if ( *(char *)(((p_anon_0 + 3072) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 3103) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 3103) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 3072, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 3072), v32, rowa);
  std::string::operator=(rowa._M_string_length + 752, p_anon_0 + 3072);
  std::string::~string((void *)(p_anon_0 + 3072));
  *(_DWORD *)(((p_anon_0 + 3072) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 3008));
  *(_DWORD *)(((p_anon_0 + 3008) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 3200) >> 3) + 0x7FFF8000) = 0;
  v33 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 3136) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 3136);
  if ( *(char *)(((p_anon_0 + 3200) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 3231) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 3231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 3200, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 3200), v33, rowa);
  std::string::operator=(rowa._M_string_length + 784, p_anon_0 + 3200);
  std::string::~string((void *)(p_anon_0 + 3200));
  *(_DWORD *)(((p_anon_0 + 3200) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 3136));
  *(_DWORD *)(((p_anon_0 + 3136) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 3328) >> 3) + 0x7FFF8000) = 0;
  v34 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 3264) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 3264);
  if ( *(char *)(((p_anon_0 + 3328) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 3359) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 3359) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 3328, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 3328), v34, rowa);
  std::string::operator=(rowa._M_string_length + 816, p_anon_0 + 3328);
  std::string::~string((void *)(p_anon_0 + 3328));
  *(_DWORD *)(((p_anon_0 + 3328) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 3264));
  *(_DWORD *)(((p_anon_0 + 3264) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 3456) >> 3) + 0x7FFF8000) = 0;
  v35 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 3392) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 3392);
  if ( *(char *)(((p_anon_0 + 3456) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 3487) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 3487) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 3456, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 3456), v35, rowa);
  std::string::operator=(rowa._M_string_length + 848, p_anon_0 + 3456);
  std::string::~string((void *)(p_anon_0 + 3456));
  *(_DWORD *)(((p_anon_0 + 3456) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 3392));
  *(_DWORD *)(((p_anon_0 + 3392) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 3584) >> 3) + 0x7FFF8000) = 0;
  v36 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 3520) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 3520);
  if ( *(char *)(((p_anon_0 + 3584) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 3615) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 3615) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 3584, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 3584), v36, rowa);
  std::string::operator=(rowa._M_string_length + 880, p_anon_0 + 3584);
  std::string::~string((void *)(p_anon_0 + 3584));
  *(_DWORD *)(((p_anon_0 + 3584) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 3520));
  *(_DWORD *)(((p_anon_0 + 3520) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 3712) >> 3) + 0x7FFF8000) = 0;
  v37 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 3648) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 3648);
  if ( *(char *)(((p_anon_0 + 3712) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 3743) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 3743) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 3712, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 3712), v37, rowa);
  std::string::operator=(rowa._M_string_length + 912, p_anon_0 + 3712);
  std::string::~string((void *)(p_anon_0 + 3712));
  *(_DWORD *)(((p_anon_0 + 3712) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 3648));
  *(_DWORD *)(((p_anon_0 + 3648) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF81D0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 472) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    __asan_stack_free_6(p_anon_0, 3776LL, &rowa._anon_0);
  }
};
