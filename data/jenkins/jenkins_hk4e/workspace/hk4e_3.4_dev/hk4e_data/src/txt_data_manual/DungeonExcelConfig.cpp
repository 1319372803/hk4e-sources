// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DungeonExcelConfig.cpp

// Line 22: range 0000000013A9842C-0000000013A991C2
int32_t __cdecl DungeonExcelConfigMgr::checkConfig(
        DungeonExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  int32_t ret; // [rsp+1Ch] [rbp-2A4h]
  data::DungeonRosterConfigMap *__for_range; // [rsp+20h] [rbp-2A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonRosterConfig>,false,false>::reference v25; // [rsp+28h] [rbp-298h]
  std::tuple_element<0,std::pair<unsigned int const,data::DungeonRosterConfig> >::type *roster_id; // [rsp+30h] [rbp-290h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonRosterConfig> >::type *roster_config; // [rsp+38h] [rbp-288h]
  char v28[640]; // [rsp+40h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 14 __for_begin:44 64 8 12 __for_end:44 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <un"
                        "known> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  if ( DungeonExcelConfigMgr::checkDungeonExcelConfigMap(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/DungeonExcelConfig.cpp",
      "checkConfig",
      25);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v5,
      (const char (*)[34])"checkDungeonExcelConfigMap failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  else if ( DungeonExcelConfigMgr::checkDungeonPassExcelConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/DungeonExcelConfig.cpp",
      "checkConfig",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v7,
      (const char (*)[35])"checkDungeonPassExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
  }
  else if ( DungeonExcelConfigMgr::checkDungeonLevelConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/DungeonExcelConfig.cpp",
      "checkConfig",
      35);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v8,
      (const char (*)[31])"checkDungeonLevelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    result = -1;
  }
  else if ( DungeonExcelConfigMgr::checkDungeonChallengeExcelConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/DungeonExcelConfig.cpp",
      "checkConfig",
      40);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 288),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v9,
      (const char (*)[40])"checkDungeonChallengeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    result = -1;
  }
  else
  {
    ret = 0;
    __for_range = &this->dungeon_roster_config_map;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 32, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::DungeonRosterConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::DungeonRosterConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::DungeonRosterConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DungeonRosterConfig>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::DungeonRosterConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonRosterConfig>,false> *)(v2 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonRosterConfig>,false> *)(v2 + 64)) )
    {
      v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonRosterConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonRosterConfig>,false,false> *const)(v2 + 32));
      roster_id = std::get<0ul,unsigned int const,data::DungeonRosterConfig>(v25);
      roster_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonRosterConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonRosterConfig>(v25);
      if ( *(_BYTE *)(((unsigned __int64)&roster_config->open_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&roster_config->open_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&roster_config->open_time);
      }
      if ( !roster_config->open_time )
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
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkConfig",
          48);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" roster_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, roster_id);
        v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v12, (const char (*)[33])byte_1AC6B3E0);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &roster_config->open_time_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&roster_config->cycle_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)roster_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&roster_config->cycle_time >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&roster_config->cycle_time);
      }
      if ( !roster_config->cycle_time )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkConfig",
          53);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" roster_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, roster_id);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v16, (const char (*)[24])byte_1AC6B440);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&roster_config->cycle_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&roster_config->cycle_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&roster_config->cycle_type);
      }
      if ( roster_config->cycle_type != DUNGEON_ROSTER_CYCLE_TYPE_BY_ORDER )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkConfig",
          58);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" roster_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, roster_id);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v19, (const char (*)[24])byte_1AC6B480);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( std::vector<data::DungeonList>::empty(&roster_config->roster_pool) )
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
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkConfig",
          63);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" roster_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, roster_id);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v22, (const char (*)[27])byte_1AC6B4C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonRosterConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonRosterConfig>,false,false> *const)(v2 + 32));
    }
    result = ret;
  }
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 73: range 0000000013A991C4-0000000013A9CCA9
int32_t __cdecl DungeonExcelConfigMgr::checkDungeonExcelConfigMap(
        DungeonExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *p_scene_id; // rsi
  const data::SceneExcelConfigMgrBase *v7; // rdx
  const unsigned int *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
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
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  int v48; // eax
  __int64 v49; // rsi
  uint32_t pass_cond; // ecx
  char v51; // al
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  std::vector<int>::const_reference v57; // rax
  unsigned int *v58; // rdx
  __int64 v59; // rsi
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  __int64 v67; // rsi
  int SceneIdByGroupId; // edx
  char v69; // al
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rdx
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  std::vector<int>::const_reference v86; // rax
  _DWORD *v87; // rdx
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rdx
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rdx
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rdx
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rdx
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  uint32_t *p_count; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  char v111; // al
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rdx
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  int v117; // edx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rdx
  common::milog::MiLogStream *v121; // rax
  uint32_t city_id; // ecx
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rdx
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // rax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  DungeonExcelConfigMgr *v130; // rdx
  char v131; // al
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rdx
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rdx
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  uint32_t *p_max_take_num; // rax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rdx
  common::milog::MiLogStream *v144; // rax
  int v145; // edx
  bool is_err; // [rsp+11h] [rbp-87Fh]
  bool is_multistage_pass_type; // [rsp+12h] [rbp-87Eh]
  uint32_t weight; // [rsp+14h] [rbp-87Ch]
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-878h]
  SceneExcelConfigMgr *scene_config_mgr; // [rsp+20h] [rbp-870h]
  data::DungeonExcelConfigMap *__for_range; // [rsp+28h] [rbp-868h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::reference v154; // [rsp+30h] [rbp-860h]
  std::tuple_element<0,std::pair<unsigned int const,data::DungeonExcelConfig> >::type *dungeon_id; // [rsp+38h] [rbp-858h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonExcelConfig> >::type *dungeon_config; // [rsp+40h] [rbp-850h]
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+48h] [rbp-848h]
  data::DungeonPassExcelConfig *pass_config_ptr; // [rsp+50h] [rbp-840h]
  const std::vector<data::DungeonCondConfig> *__for_range_0; // [rsp+58h] [rbp-838h]
  const data::DungeonCondConfig *cond_config; // [rsp+60h] [rbp-830h]
  const std::vector<data::IdCountConfig> *__for_range_1; // [rsp+68h] [rbp-828h]
  const data::IdCountConfig *cost_config; // [rsp+70h] [rbp-820h]
  const std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+78h] [rbp-818h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v164; // [rsp+80h] [rbp-810h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *w; // [rsp+90h] [rbp-800h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+98h] [rbp-7F8h]
  data::DungeonSerialConfigMap *__for_range_3; // [rsp+A0h] [rbp-7F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonSerialConfig>,false,false>::reference v168; // [rsp+A8h] [rbp-7E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::DungeonSerialConfig> >::type *serial_id; // [rsp+B0h] [rbp-7E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonSerialConfig> >::type *serial_config; // [rsp+B8h] [rbp-7D8h]
  char v171[2000]; // [rsp+C0h] [rbp-7D0h] BYREF

  v3 = (unsigned __int64)v171;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1952LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "37 32 4 11 pass_id:135 48 4 19 target_group_id:150 64 4 18 group_scene_id:156 80 8 14 __for_begi"
                        "n:77 112 8 12 __for_end:77 144 8 15 __for_begin:139 176 8 13 __for_end:139 208 8 15 __for_begin:"
                        "203 240 8 13 __for_end:203 272 8 15 __for_begin:215 304 8 13 __for_end:215 336 8 15 __for_begin:"
                        "252 368 8 13 __for_end:252 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 32 9 <un"
                        "known> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 912 32 9 <unk"
                        "nown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <unknown> 1168 32 9 <unknown> 1232 32 9 <"
                        "unknown> 1296 32 9 <unknown> 1360 32 9 <unknown> 1424 32 9 <unknown> 1488 32 9 <unknown> 1552 32"
                        " 9 <unknown> 1616 32 9 <unknown> 1680 32 9 <unknown> 1744 32 9 <unknown> 1808 32 9 <unknown> 187"
                        "2 48 47 persistent_dungeon_sceneid_to_dungeon_id_map:76";
  *(_QWORD *)(v3 + 16) = DungeonExcelConfigMgr::checkDungeonExcelConfigMap;
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
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862731] = -234881024;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862745] = -219021312;
  v5[536862746] = 62194;
  v5[536862747] = -219021312;
  v5[536862748] = 62194;
  v5[536862749] = -219021312;
  v5[536862750] = 62194;
  v5[536862751] = -219021312;
  v5[536862752] = 62194;
  v5[536862753] = -219021312;
  v5[536862754] = 62194;
  v5[536862755] = -219021312;
  v5[536862756] = 62194;
  v5[536862757] = -219021312;
  v5[536862758] = 62194;
  v5[536862759] = -219021312;
  v5[536862760] = 62194;
  v5[536862761] = -219021312;
  v5[536862762] = 62194;
  v5[536862763] = -219021312;
  v5[536862764] = 62194;
  v5[536862765] = -219021312;
  v5[536862766] = 62194;
  v5[536862767] = -219021312;
  v5[536862768] = 62194;
  v5[536862769] = -219021312;
  v5[536862770] = 62194;
  v5[536862771] = -219021312;
  v5[536862772] = 62194;
  v5[536862773] = -219021312;
  v5[536862774] = 62194;
  v5[536862775] = -219021312;
  v5[536862776] = 62194;
  v5[536862777] = -219021312;
  v5[536862778] = 62194;
  v5[536862780] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  scene_config_mgr = &txt_config_mgr->scene_config_mgr;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 1872));
  __for_range = &this->dungeon_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::DungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::DungeonExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_scene_id = (const char *)(v3 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonExcelConfig>,false> *)(v3 + 112)) )
    {
      v14 = 1;
      goto LABEL_222;
    }
    v154 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false> *const)(v3 + 80));
    dungeon_id = std::get<0ul,unsigned int const,data::DungeonExcelConfig>(v154);
    dungeon_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonExcelConfig>(v154);
    v7 = scene_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config->scene_id);
    }
    scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(v7, dungeon_config->scene_id);
    if ( !scene_config_ptr )
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
        "./src/txt_data_manual/DungeonExcelConfig.cpp",
        "checkDungeonExcelConfigMap",
        82);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 400),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])"dungeon_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, dungeon_id);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])byte_1AC6B8C0);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &dungeon_config->scene_id);
      p_scene_id = byte_1AC59EA0;
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
      goto LABEL_222;
    }
    if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->subtype >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&scene_config_ptr->subtype >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&scene_config_ptr->subtype);
    }
    if ( scene_config_ptr->subtype == SCENE_SUB_TYPE_PERSISTENT_DUNGEON )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->type >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config->type);
      }
      if ( dungeon_config->type != DUNGEON_DREAMLAND )
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
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonExcelConfigMap",
          96);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v15, (const char (*)[59])byte_1AC6B900);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, dungeon_id);
        v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])", scene_id: ");
        p_scene_id = (const char *)&dungeon_config->scene_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &dungeon_config->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_222;
      }
      v19 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              (std::map<unsigned int,unsigned int> *const)(v3 + 1872),
              &dungeon_config->scene_id,
              dungeon_id,
              &dungeon_config->scene_id,
              v8);
      if ( !v19.second )
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
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonExcelConfigMap",
          102);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 528),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v20, (const char (*)[59])byte_1AC6B9A0);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, dungeon_id);
        v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])", scene_id: ");
        p_scene_id = (const char *)&dungeon_config->scene_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &dungeon_config->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_222;
      }
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->involve_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config->involve_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_config->involve_type);
      }
      if ( dungeon_config->involve_type != INVOLVE_ONLY_SINGLE )
      {
        *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 592, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 592),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonExcelConfigMap",
          107);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v24, (const char (*)[56])byte_1AC6BA00);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, dungeon_id);
        v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])", scene_id: ");
        p_scene_id = (const char *)&dungeon_config->scene_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &dungeon_config->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
        *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_222;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->prev_dungeon_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config->prev_dungeon_id);
    }
    if ( dungeon_config->prev_dungeon_id
      && !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(this, dungeon_config->prev_dungeon_id) )
    {
      *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 656, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 656),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DungeonExcelConfig.cpp",
        "checkDungeonExcelConfigMap",
        113);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 656),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])"dungeon_id: ");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, dungeon_id);
      v32 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v31, (const char (*)[15])byte_1AC6BA60);
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v32,
              &dungeon_config->prev_dungeon_id);
      p_scene_id = byte_1AC59EA0;
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
      *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
      goto LABEL_222;
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->pass_jump_dungeon >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config->pass_jump_dungeon >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config->pass_jump_dungeon);
    }
    if ( dungeon_config->pass_jump_dungeon
      && !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(this, dungeon_config->pass_jump_dungeon) )
    {
      *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 720) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 720, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 720),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DungeonExcelConfig.cpp",
        "checkDungeonExcelConfigMap",
        118);
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 720),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v36 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v35, (const char (*)[13])"dungeon_id: ");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, dungeon_id);
      v38 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v37, (const char (*)[21])byte_1AC6BAA0);
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v38,
              &dungeon_config->pass_jump_dungeon);
      p_scene_id = byte_1AC59EA0;
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v39, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
      *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
      goto LABEL_222;
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->pass_jump_dungeon >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config->pass_jump_dungeon >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config->pass_jump_dungeon);
    }
    if ( dungeon_config->pass_jump_dungeon )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->involve_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config->involve_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_config->involve_type);
      }
      if ( dungeon_config->involve_type != INVOLVE_ONLY_SINGLE )
      {
        *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 784) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 784, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 784),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonExcelConfigMap",
          123);
        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 784),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v41 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v40, (const char (*)[13])"dungeon_id: ");
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, dungeon_id);
        p_scene_id = byte_1AC6BAE0;
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v42, (const char (*)[42])byte_1AC6BAE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 784));
        *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_222;
      }
    }
    p_scene_id = (const char *)((((_BYTE)dungeon_config + 68) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->pass_cond >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->pass_cond >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config->pass_cond);
    }
    if ( dungeon_config->pass_cond )
    {
      pass_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonPassExcelConfig(this, dungeon_config->pass_cond);
      if ( pass_config_ptr )
      {
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v49 = (((_BYTE)dungeon_config + 68) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->pass_cond >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->pass_cond >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config->pass_cond);
        }
        pass_cond = dungeon_config->pass_cond;
        v51 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        LOBYTE(v49) = v51 != 0;
        if ( v51 != 0 && v51 <= 3 )
          __asan_report_store4(v3 + 32, v49);
        *(_DWORD *)(v3 + 32) = pass_cond;
        is_err = 0;
        is_multistage_pass_type = 0;
        __for_range_0 = &pass_config_ptr->conds;
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 144, v49);
        *(std::vector<data::DungeonCondConfig>::const_iterator *)(v3 + 144) = std::vector<data::DungeonCondConfig>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 176, v49);
        *(std::vector<data::DungeonCondConfig>::const_iterator *)(v3 + 176) = std::vector<data::DungeonCondConfig>::end(__for_range_0);
        while ( __gnu_cxx::operator!=<data::DungeonCondConfig const*,std::vector<data::DungeonCondConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::DungeonCondConfig*,std::vector<data::DungeonCondConfig> > *)(v3 + 144),
                  (const __gnu_cxx::__normal_iterator<const data::DungeonCondConfig*,std::vector<data::DungeonCondConfig> > *)(v3 + 176)) )
        {
          cond_config = __gnu_cxx::__normal_iterator<data::DungeonCondConfig const*,std::vector<data::DungeonCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DungeonCondConfig*,std::vector<data::DungeonCondConfig> > *const)(v3 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&cond_config->cond_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cond_config->cond_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&cond_config->cond_type);
          }
          if ( cond_config->cond_type == DUNGEON_COND_END_MULTISTAGE_PLAY )
          {
            is_multistage_pass_type = 1;
            if ( std::vector<int>::size(&cond_config->param) > 1 )
            {
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
              v57 = std::vector<int>::operator[](&cond_config->param, 0LL);
              v58 = (unsigned int *)v57;
              if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v57);
              }
              v59 = *v58;
              if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 48, v59);
              *(_DWORD *)(v3 + 48) = v59;
              if ( !LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, *(_DWORD *)(v3 + 48)) )
              {
                is_err = 1;
                *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 976) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 976, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 976),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/DungeonExcelConfig.cpp",
                  "checkDungeonExcelConfigMap",
                  154);
                v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 976),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v61 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v60,
                        (const char (*)[10])"dungeon: ");
                v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, dungeon_id);
                v63 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v62,
                        (const char (*)[12])", pass_id: ");
                v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v63,
                        (const unsigned int *)(v3 + 32));
                v65 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v64,
                        (const char (*)[20])", target_group_id: ");
                v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v65,
                        (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v66, (const char (*)[17])byte_1AC654E0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 976));
                *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = -117901064;
              }
              *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 48);
              v67 = *(unsigned int *)(v3 + 48);
              SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v67);
              v69 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
              if ( v69 != 0 && v69 <= 3 )
              {
                LOBYTE(v67) = v69 != 0;
                __asan_report_store4(v3 + 64, v67);
              }
              *(_DWORD *)(v3 + 64) = SceneIdByGroupId;
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->scene_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&dungeon_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&dungeon_config->scene_id);
              }
              if ( dungeon_config->scene_id != *(_DWORD *)(v3 + 64) )
              {
                is_err = 1;
                *(_DWORD *)(((v3 + 1040) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1040) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1071) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1071) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1040, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1040),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/DungeonExcelConfig.cpp",
                  "checkDungeonExcelConfigMap",
                  160);
                v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1040),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v71 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v70,
                        (const char (*)[10])"dungeon: ");
                v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, dungeon_id);
                v73 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v72,
                        (const char (*)[12])", pass_id: ");
                v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v73,
                        (const unsigned int *)(v3 + 32));
                v75 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v74,
                        (const char (*)[20])", target_group_id: ");
                v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v75,
                        (const unsigned int *)(v3 + 48));
                v77 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v76,
                        (const char (*)[16])byte_1AC6BCA0);
                v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v77,
                        (const unsigned int *)(v3 + 64));
                v79 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v78,
                        (const char (*)[19])byte_1AC6BCE0);
                v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v79,
                        &dungeon_config->scene_id);
                common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v80, (const char (*)[12])byte_1AC6BD20);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1040));
                *(_DWORD *)(((v3 + 1040) >> 3) + 0x7FFF8000) = -117901064;
              }
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->type >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4(&dungeon_config->type);
              }
              if ( dungeon_config->type == DUNGEON_IRODORI_CHESS )
              {
                if ( std::vector<int>::size(&cond_config->param) > 2 )
                {
                  v86 = std::vector<int>::operator[](&cond_config->param, 2uLL);
                  v87 = v86;
                  if ( *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v86 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v86);
                  }
                  if ( !*v87 )
                  {
                    is_err = 1;
                    *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1168) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1199) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 1199) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1168, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1168),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/DungeonExcelConfig.cpp",
                      "checkDungeonExcelConfigMap",
                      175);
                    v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1168),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v89 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                            v88,
                            (const char (*)[10])"dungeon: ");
                    v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, dungeon_id);
                    v91 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                            v90,
                            (const char (*)[12])", pass_id: ");
                    v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v91,
                            (const unsigned int *)(v3 + 32));
                    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      v92,
                      (const char (*)[55])byte_1AC6BDC0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1168));
                    *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = -117901064;
                  }
                }
                else
                {
                  is_err = 1;
                  *(_DWORD *)(((v3 + 1104) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 1104) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1135) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1135) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 1104, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 1104),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/DungeonExcelConfig.cpp",
                    "checkDungeonExcelConfigMap",
                    168);
                  v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1104),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v82 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v81,
                          (const char (*)[10])"dungeon: ");
                  v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, dungeon_id);
                  v84 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v83,
                          (const char (*)[12])", pass_id: ");
                  v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v84,
                          (const unsigned int *)(v3 + 32));
                  common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    v85,
                    (const char (*)[58])byte_1AC6BD60);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1104));
                  *(_DWORD *)(((v3 + 1104) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
            }
            else
            {
              is_err = 1;
              *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 912) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 912, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 912),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/DungeonExcelConfig.cpp",
                "checkDungeonExcelConfigMap",
                147);
              v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 912),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v53 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v52,
                      (const char (*)[10])"dungeon: ");
              v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, dungeon_id);
              v55 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v54,
                      (const char (*)[12])", pass_id: ");
              v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v55,
                      (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v56, (const char (*)[55])byte_1AC6BC00);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 912));
              *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = -117901064;
            }
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          }
          __gnu_cxx::__normal_iterator<data::DungeonCondConfig const*,std::vector<data::DungeonCondConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DungeonCondConfig*,std::vector<data::DungeonCondConfig> > *const)(v3 + 144));
        }
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
        p_scene_id = (const char *)((((_BYTE)dungeon_config + 12) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config->type);
        }
        if ( dungeon_config->type == DUNGEON_IRODORI_CHESS && !is_multistage_pass_type )
        {
          is_err = 1;
          *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1232) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1232, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1232),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DungeonExcelConfig.cpp",
            "checkDungeonExcelConfigMap",
            186);
          v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1232),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v94 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v93, (const char (*)[18])byte_1AC6BE20);
          v95 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, dungeon_id);
          v96 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v95, (const char (*)[12])", pass_id: ");
          v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v96,
                  (const unsigned int *)(v3 + 32));
          p_scene_id = byte_1AC6BE60;
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v97, (const char (*)[40])byte_1AC6BE60);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1232));
          *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = -117901064;
        }
        if ( is_err )
        {
          *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1296) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1296, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1296),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DungeonExcelConfig.cpp",
            "checkDungeonExcelConfigMap",
            192);
          v98 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1296),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v99 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v98, (const char (*)[10])"dungeon: ");
          v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v99, dungeon_id);
          v101 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                   v100,
                   (const char (*)[12])", pass_id: ");
          v102 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v101,
                   (const unsigned int *)(v3 + 32));
          p_scene_id = byte_1AC6BEC0;
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v102, (const char (*)[18])byte_1AC6BEC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1296));
          *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v48 = 0;
        }
        else
        {
          v48 = 1;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 848) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 848, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 848),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonExcelConfigMap",
          132);
        v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 848),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v44 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v43, (const char (*)[13])"dungeon_id: ");
        v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, dungeon_id);
        v46 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v45, (const char (*)[15])byte_1AC6BB40);
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &dungeon_config->pass_cond);
        p_scene_id = byte_1AC59EA0;
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v47, (const char (*)[7])byte_1AC59EA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 848));
        *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v48 = 0;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v48 != 1 )
      {
        v14 = 0;
        goto LABEL_222;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config->first_pass_reward_id);
    }
    if ( dungeon_config->first_pass_reward_id )
    {
      p_scene_id = (const char *)dungeon_config->first_pass_reward_id;
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              (uint32_t)p_scene_id,
                              ITEM_LIMIT_DUNGEON_FIRST_PASS_REWARD) != 1 )
      {
        *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1360) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1391) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1391) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1360, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1360),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonExcelConfigMap",
          199);
        v104 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1360),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v105 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v104, (const char (*)[13])"dungeon_id: ");
        v106 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, dungeon_id);
        v107 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v106, (const char (*)[27])byte_1AC6BF00);
        v108 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v107,
                 &dungeon_config->first_pass_reward_id);
        p_scene_id = byte_1AC6BF40;
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v108, (const char (*)[8])byte_1AC6BF40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1360));
        *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_222;
      }
    }
    __for_range_1 = &dungeon_config->enter_cost_items;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, p_scene_id);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 208) = std::vector<data::IdCountConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 240, p_scene_id);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 240) = std::vector<data::IdCountConfig>::end(__for_range_1);
    while ( 1 )
    {
      p_scene_id = (const char *)(v3 + 240);
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 208),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 240)) )
      {
        v117 = 1;
        goto LABEL_165;
      }
      cost_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 208));
      p_count = &cost_config->count;
      if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_count);
      }
      if ( !cost_config->count )
        goto LABEL_158;
      p_material_config_mgr = &txt_config_mgr->material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&cost_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cost_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cost_config->id);
      }
      if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, cost_config->id) )
LABEL_158:
        v111 = 0;
      else
        v111 = 1;
      if ( v111 )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 208));
    }
    *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1424) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1455) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 1455) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1424, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1424),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/DungeonExcelConfig.cpp",
      "checkDungeonExcelConfigMap",
      207);
    v112 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 1424),
             (const char (*)[16])"[CONFIG_ERROR] ");
    v113 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v112, (const char (*)[13])"dungeon_id: ");
    v114 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v113, dungeon_id);
    v115 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v114, (const char (*)[24])byte_1AC6BF80);
    v116 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v115, &cost_config->id);
    p_scene_id = byte_1AC6BF40;
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v116, (const char (*)[8])byte_1AC6BF40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1424));
    *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v117 = 0;
LABEL_165:
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v117 != 1 )
    {
      v14 = 0;
      goto LABEL_222;
    }
    if ( !std::map<unsigned int,unsigned int>::empty(&dungeon_config->level_config_map) )
    {
      weight = 0;
      __for_range_2 = &dungeon_config->level_config_map;
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 272, p_scene_id);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 272) = std::map<unsigned int,unsigned int>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 304, p_scene_id);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 304) = std::map<unsigned int,unsigned int>::end(__for_range_2);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 272),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 304)) )
      {
        v164 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 272));
        std::get<0ul,unsigned int const,unsigned int>(v164);
        v118 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v164);
        w = v118;
        if ( *(_BYTE *)(((unsigned __int64)v118 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v118 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v118 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v118);
        }
        weight += *w;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 272));
      }
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
      if ( !weight )
      {
        *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1488) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1519) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 1519) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1488, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1488),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonExcelConfigMap",
          221);
        v119 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1488),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v120 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v119, (const char (*)[13])"dungeon_id: ");
        v121 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v120, dungeon_id);
        p_scene_id = byte_1AC6BFC0;
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v121, (const char (*)[29])byte_1AC6BFC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1488));
        *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_222;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->state_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->state_type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config->state_type);
    }
    if ( dungeon_config->state_type != DUNGEON_STATE_TEST )
    {
      *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1552) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1552, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1552),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/txt_data_manual/DungeonExcelConfig.cpp",
        "checkDungeonExcelConfigMap",
        228);
      common::milog::MiLogStream::operator<<<data::DungeonStateType,(data::DungeonStateType*)0>(
        (common::milog::MiLogStream *const)(v3 + 1552),
        &dungeon_config->state_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1552));
      *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_config->scene_id);
      }
      scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, dungeon_config->scene_id);
      if ( scene_script_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->city_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&scene_script_config_ptr->city_id);
        }
        if ( scene_script_config_ptr->city_id )
        {
          city_id = scene_script_config_ptr->city_id;
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->city_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&dungeon_config->city_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&dungeon_config->city_id);
          }
          if ( city_id != dungeon_config->city_id )
          {
            *(_DWORD *)(((v3 + 1616) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1616) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1647) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1647) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1616, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1616),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DungeonExcelConfig.cpp",
              "checkDungeonExcelConfigMap",
              232);
            v123 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1616),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v124 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                     v123,
                     (const char (*)[13])"dungeon_id: ");
            v125 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v124, dungeon_id);
            v126 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                     v125,
                     (const char (*)[45])byte_1AC6C000);
            v127 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                     v126,
                     (const char (*)[17])"dungeon.city_id:");
            v128 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v127,
                     &dungeon_config->city_id);
            v129 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                     v128,
                     (const char (*)[15])" lua city id: ");
            p_scene_id = (const char *)&scene_script_config_ptr->city_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v129,
              &scene_script_config_ptr->city_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1616));
            *(_DWORD *)(((v3 + 1616) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v14 = 0;
            goto LABEL_222;
          }
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config->type);
    }
    if ( dungeon_config->type != DUNGEON_BOSS )
      goto LABEL_205;
    v130 = this;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->serial_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config->serial_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config->serial_id);
    }
    if ( data::DungeonExcelConfigMgrBase::findDungeonSerialConfig(v130, dungeon_config->serial_id) )
LABEL_205:
      v131 = 0;
    else
      v131 = 1;
    if ( v131 )
    {
      *(_DWORD *)(((v3 + 1680) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1680) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1711) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 1711) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1680, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1680),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DungeonExcelConfig.cpp",
        "checkDungeonExcelConfigMap",
        241);
      v132 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 1680),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v133 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v132, (const char (*)[13])"dungeon_id: ");
      v134 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v133, dungeon_id);
      p_scene_id = byte_1AC6C0E0;
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v134, (const char (*)[46])byte_1AC6C0E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1680));
      *(_DWORD *)(((v3 + 1680) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
      goto LABEL_222;
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->statue_drop >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->statue_drop >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config->statue_drop);
    }
    if ( dungeon_config->statue_drop
      && (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            dungeon_config->statue_drop,
                            ITEM_LIMIT_NORMAL_DUNGEON) != 1 )
    {
      break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false> *const)(v3 + 80));
  }
  *(_DWORD *)(((v3 + 1744) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 1744) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1775) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 1775) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1744, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 1744),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/DungeonExcelConfig.cpp",
    "checkDungeonExcelConfigMap",
    247);
  v136 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 1744),
           (const char (*)[16])"[CONFIG_ERROR] ");
  v137 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v136, (const char (*)[13])"dungeon_id: ");
  v138 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v137, dungeon_id);
  v139 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v138, (const char (*)[23])byte_1AC6C140);
  v140 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v139, &dungeon_config->statue_drop);
  p_scene_id = byte_1AC6C180;
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v140, (const char (*)[23])byte_1AC6C180);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1744));
  *(_DWORD *)(((v3 + 1744) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v14 = 0;
LABEL_222:
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v14 == 1 )
  {
    __for_range_3 = &this->dungeon_serial_config_map;
    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 336, p_scene_id);
    *(std::unordered_map<unsigned int,data::DungeonSerialConfig>::iterator *)(v3 + 336) = std::unordered_map<unsigned int,data::DungeonSerialConfig>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 368, p_scene_id);
    *(std::unordered_map<unsigned int,data::DungeonSerialConfig>::iterator *)(v3 + 368) = std::unordered_map<unsigned int,data::DungeonSerialConfig>::end(__for_range_3);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DungeonSerialConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonSerialConfig>,false> *)(v3 + 336),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonSerialConfig>,false> *)(v3 + 368)) )
      {
        v145 = 1;
        goto LABEL_237;
      }
      v168 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonSerialConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonSerialConfig>,false,false> *const)(v3 + 336));
      serial_id = std::get<0ul,unsigned int const,data::DungeonSerialConfig>(v168);
      serial_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonSerialConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonSerialConfig>(v168);
      p_max_take_num = &serial_config->max_take_num;
      if ( *(_BYTE *)(((unsigned __int64)p_max_take_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_max_take_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_take_num >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(p_max_take_num);
      }
      if ( !serial_config->max_take_num )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonSerialConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonSerialConfig>,false,false> *const)(v3 + 336));
    }
    *(_DWORD *)(((v3 + 1808) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1808) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1839) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1839) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1808, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1808),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/DungeonExcelConfig.cpp",
      "checkDungeonExcelConfigMap",
      256);
    v142 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 1808),
             (const char (*)[16])"[CONFIG_ERROR] ");
    v143 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v142, (const char (*)[12])"serial_id: ");
    v144 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v143, serial_id);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v144, (const char (*)[30])byte_1AC6C200);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1808));
    *(_DWORD *)(((v3 + 1808) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v145 = 0;
LABEL_237:
    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
    if ( v145 == 1 )
      v2 = 0;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 1872));
  if ( v171 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 236) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF80F0) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1952LL, v171);
  }
  return v2;
};

// Line 265: range 0000000013A9CCAA-0000000013A9E134
int32_t __cdecl DungeonExcelConfigMgr::checkDungeonPassExcelConfig(
        const DungeonExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v11; // rax
  int *v12; // rdx
  std::vector<int>::const_reference v13; // rax
  unsigned int *v14; // rdx
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const int *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  std::vector<int>::const_reference v25; // rax
  _DWORD *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  std::vector<int>::const_reference v30; // rax
  unsigned int *v31; // rdx
  char v32; // al
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  const int *v37; // rax
  common::milog::MiLogStream *v38; // rax
  std::vector<int>::const_reference v39; // rax
  _DWORD *v40; // rdx
  char v41; // al
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  std::vector<int>::const_reference v45; // rax
  _DWORD *v46; // rdx
  char v47; // al
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  int v51; // eax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  char v55; // al
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rdx
  common::milog::MiLogStream *v58; // rax
  uint32_t in_time_num; // [rsp+2Ch] [rbp-344h]
  data::DungeonPassExcelConfigMap *__for_range; // [rsp+30h] [rbp-340h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false,false>::reference v63; // [rsp+38h] [rbp-338h]
  std::tuple_element<0,std::pair<unsigned int const,data::DungeonPassExcelConfig> >::type *pass_id; // [rsp+40h] [rbp-330h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonPassExcelConfig> >::type *pass_config; // [rsp+48h] [rbp-328h]
  const std::vector<data::DungeonCondConfig> *__for_range_0; // [rsp+50h] [rbp-320h]
  const data::DungeonCondConfig *cond_config; // [rsp+58h] [rbp-318h]
  char v68[784]; // [rsp+60h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 8 15 __for_begin:266 64 8 13 __for_end:266 96 8 15 __for_begin:269 128 8 13 __for_end:269 "
                        "160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 4"
                        "80 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DungeonExcelConfigMgr::checkDungeonPassExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -202116109;
  __for_range = &this->dungeon_pass_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonPassExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::DungeonPassExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonPassExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DungeonPassExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false> *)(v3 + 64)) )
    {
      v51 = 1;
      goto LABEL_97;
    }
    v63 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false,false> *const)(v3 + 32));
    pass_id = std::get<0ul,unsigned int const,data::DungeonPassExcelConfig>(v63);
    pass_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonPassExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonPassExcelConfig>(v63);
    in_time_num = 0;
    __for_range_0 = &pass_config->conds;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::DungeonCondConfig>::const_iterator *)(v3 + 96) = std::vector<data::DungeonCondConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::DungeonCondConfig>::const_iterator *)(v3 + 128) = std::vector<data::DungeonCondConfig>::end(__for_range_0);
    while ( 2 )
    {
      if ( __gnu_cxx::operator!=<data::DungeonCondConfig const*,std::vector<data::DungeonCondConfig>>(
             (const __gnu_cxx::__normal_iterator<const data::DungeonCondConfig*,std::vector<data::DungeonCondConfig> > *)(v3 + 96),
             (const __gnu_cxx::__normal_iterator<const data::DungeonCondConfig*,std::vector<data::DungeonCondConfig> > *)(v3 + 128)) )
      {
        cond_config = __gnu_cxx::__normal_iterator<data::DungeonCondConfig const*,std::vector<data::DungeonCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DungeonCondConfig*,std::vector<data::DungeonCondConfig> > *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&cond_config->cond_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond_config->cond_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cond_config->cond_type);
        }
        switch ( cond_config->cond_type )
        {
          case DUNGEON_COND_KILL_GROUP_MONSTER:
            if ( std::vector<int>::size(&cond_config->param) > 1 )
            {
              v11 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                        &cond_config->param,
                                                                                        1uLL);
              v12 = v11;
              if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v11);
              }
              if ( *v12 <= 0 )
                goto LABEL_30;
              v13 = std::vector<int>::operator[](&cond_config->param, 1uLL);
              v14 = (unsigned int *)v13;
              if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v13);
              }
              if ( data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(&txt_config_mgr->monster_config_mgr, *v14) )
LABEL_30:
                v15 = 0;
              else
                v15 = 1;
              if ( !v15 )
                goto LABEL_76;
              *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
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
                "./src/txt_data_manual/DungeonExcelConfig.cpp",
                "checkDungeonPassExcelConfig",
                284);
              v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 224),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v16,
                      (const char (*)[10])"pass_id: ");
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, pass_id);
              v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v18,
                      (const char (*)[13])"monster_id: ");
              v20 = std::vector<int>::operator[](&cond_config->param, 1uLL);
              v21 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, v20);
              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])byte_1AC6BF40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
              *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v10 = 0;
            }
            else
            {
              *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
                "./src/txt_data_manual/DungeonExcelConfig.cpp",
                "checkDungeonPassExcelConfig",
                278);
              v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 160),
                     (const char (*)[16])"[CONFIG_ERROR] ");
              v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])"pass_id: ");
              v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, pass_id);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v9, (const char (*)[34])byte_1AC6C3E0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
              *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v10 = 0;
            }
            break;
          case DUNGEON_COND_KILL_TYPE_MONSTER:
            if ( std::vector<int>::size(&cond_config->param) > 1 )
            {
              v25 = std::vector<int>::operator[](&cond_config->param, 1uLL);
              v26 = v25;
              if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v25);
              }
              if ( *v26 )
                goto LABEL_76;
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
                "./src/txt_data_manual/DungeonExcelConfig.cpp",
                "checkDungeonPassExcelConfig",
                296);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 352),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v27,
                      (const char (*)[10])"pass_id: ");
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, pass_id);
              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v29, (const char (*)[35])byte_1AC6C4A0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
              *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v10 = 0;
            }
            else
            {
              *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 288, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 288),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/DungeonExcelConfig.cpp",
                "checkDungeonPassExcelConfig",
                291);
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 288),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v22,
                      (const char (*)[10])"pass_id: ");
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, pass_id);
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v24, (const char (*)[33])byte_1AC6C440);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
              *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v10 = 0;
            }
            break;
          case DUNGEON_COND_FINISH_QUEST:
            if ( std::vector<int>::empty(&cond_config->param) )
              goto LABEL_49;
            v30 = std::vector<int>::operator[](&cond_config->param, 0LL);
            v31 = (unsigned int *)v30;
            if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v30);
            }
            if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(&txt_config_mgr->quest_config_mgr, *v31) )
              v32 = 0;
            else
LABEL_49:
              v32 = 1;
            if ( !v32 )
              goto LABEL_76;
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
              "./src/txt_data_manual/DungeonExcelConfig.cpp",
              "checkDungeonPassExcelConfig",
              303);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 416),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v33, (const char (*)[10])"pass_id: ");
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, pass_id);
            v36 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v35,
                    (const char (*)[33])byte_1AC6C500);
            v37 = std::vector<int>::operator[](&cond_config->param, 0LL);
            v38 = common::milog::MiLogStream::operator<<<int,(int *)0>(v36, v37);
            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])byte_1AC6BF40);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v10 = 0;
            break;
          case DUNGEON_COND_KILL_MONSTER_COUNT:
            if ( std::vector<int>::empty(&cond_config->param) )
              goto LABEL_59;
            v39 = std::vector<int>::operator[](&cond_config->param, 0LL);
            v40 = v39;
            if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v39);
            }
            if ( *v40 )
              v41 = 0;
            else
LABEL_59:
              v41 = 1;
            if ( !v41 )
              goto LABEL_76;
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
              "./src/txt_data_manual/DungeonExcelConfig.cpp",
              "checkDungeonPassExcelConfig",
              310);
            v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v43 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v42, (const char (*)[10])"pass_id: ");
            v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, pass_id);
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v44, (const char (*)[36])byte_1AC6C560);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v10 = 0;
            break;
          case DUNGEON_COND_IN_TIME:
            if ( std::vector<int>::empty(&cond_config->param) )
              goto LABEL_69;
            v45 = std::vector<int>::operator[](&cond_config->param, 0LL);
            v46 = v45;
            if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v45);
            }
            if ( *v46 )
              v47 = 0;
            else
LABEL_69:
              v47 = 1;
            if ( !v47 )
            {
              ++in_time_num;
              goto LABEL_76;
            }
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
              "./src/txt_data_manual/DungeonExcelConfig.cpp",
              "checkDungeonPassExcelConfig",
              317);
            v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v49 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v48, (const char (*)[10])"pass_id: ");
            v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, pass_id);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v50, (const char (*)[39])byte_1AC6C5C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v10 = 0;
            break;
          default:
LABEL_76:
            __gnu_cxx::__normal_iterator<data::DungeonCondConfig const*,std::vector<data::DungeonCondConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DungeonCondConfig*,std::vector<data::DungeonCondConfig> > *const)(v3 + 96));
            continue;
        }
      }
      else
      {
        v10 = 1;
      }
      break;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 != 1 )
    {
      v51 = 0;
      goto LABEL_97;
    }
    if ( in_time_num > 1 )
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
        4u,
        "./src/txt_data_manual/DungeonExcelConfig.cpp",
        "checkDungeonPassExcelConfig",
        330);
      v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v53 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v52, (const char (*)[10])"pass_id: ");
      v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, pass_id);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v54, (const char (*)[40])byte_1AC6C620);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      v2 = -1;
      v51 = 0;
      goto LABEL_97;
    }
    if ( in_time_num != 1 )
      goto LABEL_90;
    if ( *(_BYTE *)(((unsigned __int64)&pass_config->logic_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pass_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pass_config->logic_type >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&pass_config->logic_type);
    }
    if ( pass_config->logic_type == LOGIC_AND && std::vector<data::DungeonCondConfig>::size(&pass_config->conds) > 1 )
LABEL_90:
      v55 = 0;
    else
      v55 = 1;
    if ( v55 )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false,false> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 672, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 672),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/DungeonExcelConfig.cpp",
    "checkDungeonPassExcelConfig",
    335);
  v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 672),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v57 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v56, (const char (*)[10])"pass_id: ");
  v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, pass_id);
  common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v58, (const char (*)[58])byte_1AC6C680);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
  v2 = -1;
  v51 = 0;
LABEL_97:
  if ( v51 == 1 )
    v2 = 0;
  if ( v68 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v2;
};

// Line 343: range 0000000013A9E136-0000000013A9E6DC
int32_t __cdecl DungeonExcelConfigMgr::checkDungeonLevelConfig(
        const DungeonExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-16Ch]
  JsonConfigMgr *json_config_mgr; // [rsp+18h] [rbp-168h]
  std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>> *__for_range; // [rsp+20h] [rbp-160h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig> >,false,false>::reference v18; // [rsp+28h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig> > >::type *dungeon_id; // [rsp+30h] [rbp-150h]
  const std::tuple_element<1,std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig> > >::type *__for_range_0; // [rsp+40h] [rbp-140h]
  const data::DungeonLevelEntityConfig *level_config; // [rsp+48h] [rbp-138h]
  char v22[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:346 64 8 13 __for_end:346 96 8 15 __for_begin:348 128 8 13 __for_end:348 1"
                        "60 16 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::checkDungeonLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862727] = -202116109;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  ret = 0;
  __for_range = &this->dungeon_level_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig> >,false> *)(v2 + 64)) )
      break;
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig> >,false,false> *const)(v2 + 32));
    dungeon_id = std::get<0ul,unsigned int const,std::vector<data::DungeonLevelEntityConfig>>(v18);
    __for_range_0 = std::get<1ul,unsigned int const,std::vector<data::DungeonLevelEntityConfig>>(v18);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::DungeonLevelEntityConfig>::const_iterator *)(v2 + 96) = std::vector<data::DungeonLevelEntityConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::DungeonLevelEntityConfig>::const_iterator *)(v2 + 128) = std::vector<data::DungeonLevelEntityConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::DungeonLevelEntityConfig*,std::vector<data::DungeonLevelEntityConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const data::DungeonLevelEntityConfig*,std::vector<data::DungeonLevelEntityConfig> > *)(v2 + 128)) )
    {
      level_config = __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DungeonLevelEntityConfig*,std::vector<data::DungeonLevelEntityConfig> > *const)(v2 + 96));
      *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findLevelEntityConfig((const JsonConfigMgr *const)(v2 + 160), (const std::string *)json_config_mgr);
      v6 = std::operator==<data::ConfigLevelEntity>(0LL, (const std::shared_ptr<data::ConfigLevelEntity> *)(v2 + 160));
      std::shared_ptr<data::ConfigLevelEntity>::~shared_ptr((std::shared_ptr<data::ConfigLevelEntity> *const)(v2 + 160));
      *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
      if ( v6 )
      {
        ret = -1;
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
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonLevelConfig",
          353);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])"dungeon_id ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, dungeon_id);
        v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v9,
                (const char (*)[19])" level_config_id: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &level_config->id);
        v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v11, (const char (*)[28])byte_1AC6C860);
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &level_config->level_config_name);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1AC59EA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DungeonLevelEntityConfig*,std::vector<data::DungeonLevelEntityConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig> >,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 362: range 0000000013A9E6DE-0000000013A9F13E
int32_t __cdecl DungeonExcelConfigMgr::checkDungeonChallengeExcelConfig(
        const DungeonExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::string *p_ability_group_name; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-20Ch]
  JsonConfigMgr *json_config_mgr; // [rsp+18h] [rbp-208h]
  data::DungeonChallengeConfigMap *__for_range; // [rsp+20h] [rbp-200h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonChallengeConfig>,false,false>::reference v26; // [rsp+28h] [rbp-1F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::DungeonChallengeConfig> >::type *id; // [rsp+30h] [rbp-1F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonChallengeConfig> >::type *config; // [rsp+38h] [rbp-1E8h]
  const data::ConfigAbilityGroup *ability_group_config_ptr; // [rsp+40h] [rbp-1E0h]
  const std::vector<std::string> *__for_range_0; // [rsp+48h] [rbp-1D8h]
  const std::string *group_name; // [rsp+50h] [rbp-1D0h]
  const data::ConfigAbilityGroup *ability_group_config_ptr_0; // [rsp+58h] [rbp-1C8h]
  char v33[448]; // [rsp+60h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 8 15 __for_begin:365 64 8 13 __for_end:365 96 8 15 __for_begin:383 128 8 13 __for_end:383 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::checkDungeonChallengeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  ret = 0;
  __for_range = &this->dungeon_challenge_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonChallengeConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::DungeonChallengeConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonChallengeConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DungeonChallengeConfig>::end(__for_range);
  while ( 1 )
  {
    p_ability_group_name = (std::string *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DungeonChallengeConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonChallengeConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonChallengeConfig>,false> *)(v2 + 64)) )
      break;
    v26 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonChallengeConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonChallengeConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::DungeonChallengeConfig>(v26);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonChallengeConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonChallengeConfig>(v26);
    if ( (unsigned __int8)std::string::empty() != 1 )
    {
      ability_group_config_ptr = JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, &config->ability_group_name);
      if ( !ability_group_config_ptr )
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
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonChallengeExcelConfig",
          372);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v6, (const char (*)[43])byte_1AC6C9C0);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
        v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])byte_1AC6CA20);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &config->ability_group_name);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        goto LABEL_39;
      }
      p_ability_group_name = (std::string *)((((_BYTE)ability_group_config_ptr + 4) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr->ability_group_target_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)ability_group_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr->ability_group_target_type >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&ability_group_config_ptr->ability_group_target_type);
      }
      if ( ability_group_config_ptr->ability_group_target_type != ABILITY_GROUP_TARGET_AVATAR )
      {
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonChallengeExcelConfig",
          378);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v10, (const char (*)[61])byte_1AC6CA60);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v12, (const char (*)[18])byte_1AC6CA20);
        p_ability_group_name = &config->ability_group_name;
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &config->ability_group_name);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    __for_range_0 = &config->team_ability_group_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, p_ability_group_name);
    *(std::vector<std::string>::const_iterator *)(v2 + 96) = std::vector<std::string>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, p_ability_group_name);
    *(std::vector<std::string>::const_iterator *)(v2 + 128) = std::vector<std::string>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 128)) )
    {
      group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 96));
      ability_group_config_ptr_0 = JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, group_name);
      if ( ability_group_config_ptr_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr_0->ability_group_target_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)ability_group_config_ptr_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr_0->ability_group_target_type >> 3)
                                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&ability_group_config_ptr_0->ability_group_target_type);
        }
        if ( ability_group_config_ptr_0->ability_group_target_type != ABILITY_GROUP_TARGET_TEAM )
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
            "./src/txt_data_manual/DungeonExcelConfig.cpp",
            "checkDungeonChallengeExcelConfig",
            394);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v18, (const char (*)[59])byte_1AC6CAC0);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
          v21 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v20, (const char (*)[18])byte_1AC6CA20);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, group_name);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
          *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
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
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "checkDungeonChallengeExcelConfig",
          388);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v14, (const char (*)[43])byte_1AC6C9C0);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
        v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v16, (const char (*)[18])byte_1AC6CA20);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, group_name);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
LABEL_39:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonChallengeConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonChallengeConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 404: range 0000000013A9F140-0000000013AA087B
int32_t __cdecl DungeonExcelConfigMgr::rewriteConfig(DungeonExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::set<unsigned int> *v6; // rdx
  std::set<unsigned int> *v7; // rdx
  char *v8; // rsi
  char *v9; // rsi
  std::vector<data::DungeonLevelEntityConfig> *v10; // rdx
  char *v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  std::vector<unsigned int> *p_monday; // rcx
  std::vector<unsigned int> *p_tuesday; // rcx
  std::vector<unsigned int> *p_wednesday; // rcx
  std::vector<unsigned int> *p_thursday; // rcx
  std::vector<unsigned int> *p_friday; // rcx
  std::vector<unsigned int> *p_saturday; // rcx
  std::vector<unsigned int> *p_sunday; // rcx
  unsigned __int64 v21; // rax
  std::vector<std::vector<unsigned int>*,std::allocator<std::vector<unsigned int>*> >::reference v22; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  int v31; // eax
  __int64 v32; // rsi
  std::set<unsigned int> *v33; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  unsigned __int64 v39; // rax
  int v40; // edx
  __int64 TimeByStr; // rsi
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  int v46; // edx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  int v49; // eax
  int v51; // [rsp+10h] [rbp-4D0h]
  int32_t v52; // [rsp+1Ch] [rbp-4C4h]
  int i; // [rsp+3Ch] [rbp-4A4h]
  data::DungeonExcelConfigMap *__for_range; // [rsp+40h] [rbp-4A0h]
  data::DungeonPassExcelConfigMap *__for_range_0; // [rsp+48h] [rbp-498h]
  data::DungeonLevelEntityConfigVec *__for_range_1; // [rsp+50h] [rbp-490h]
  data::DailyDungeonConfigMap *__for_range_2; // [rsp+58h] [rbp-488h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyDungeonConfig>,false,false>::reference v58; // [rsp+60h] [rbp-480h]
  const std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::key_type *random_id; // [rsp+68h] [rbp-478h]
  std::tuple_element<1,std::pair<unsigned int const,data::DailyDungeonConfig> >::type *daily_dungeon_config; // [rsp+70h] [rbp-470h]
  std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::mapped_type *day_map; // [rsp+78h] [rbp-468h]
  std::vector<unsigned int> *__for_range_3; // [rsp+80h] [rbp-460h]
  data::DungeonRosterConfigMap *__for_range_4; // [rsp+88h] [rbp-458h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonRosterConfig>,false,false>::reference v64; // [rsp+90h] [rbp-450h]
  std::tuple_element<1,std::pair<unsigned int const,data::DungeonRosterConfig> >::type *roster_config; // [rsp+A0h] [rbp-440h]
  std::vector<data::DungeonList> *__for_range_5; // [rsp+A8h] [rbp-438h]
  const data::DungeonList *dungeons; // [rsp+B0h] [rbp-430h]
  data::DungeonLevelEntityConfig *level_config; // [rsp+B8h] [rbp-428h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false,false>::reference v69; // [rsp+C0h] [rbp-420h]
  std::tuple_element<1,std::pair<unsigned int const,data::DungeonPassExcelConfig> >::type *dungeon_pass_config; // [rsp+D0h] [rbp-410h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::reference __in; // [rsp+D8h] [rbp-408h]
  const std::set<unsigned int>::value_type *dungeon_id; // [rsp+E0h] [rbp-400h]
  std::tuple_element<1,std::pair<unsigned int const,data::DungeonExcelConfig> >::type *dungeon_config; // [rsp+E8h] [rbp-3F8h]
  char v74[1008]; // [rsp+F0h] [rbp-3F0h] BYREF

  v2 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "23 48 1 9 <unknown> 64 4 14 dungeon_id:439 80 4 9 <unknown> 96 8 15 __for_begin:405 128 8 13 __f"
                        "or_end:405 160 8 15 __for_begin:413 192 8 13 __for_end:413 224 8 15 __for_begin:418 256 8 13 __f"
                        "or_end:418 288 8 15 __for_begin:424 320 8 13 __for_end:424 352 8 15 __for_begin:439 384 8 13 __f"
                        "or_end:439 416 8 15 __for_begin:455 448 8 13 __for_end:455 480 8 15 __for_begin:465 512 8 13 __f"
                        "or_end:465 544 24 16 dungeon_list:427 608 24 13 pool_list:464 672 32 9 <unknown> 736 32 9 <unkno"
                        "wn> 800 32 9 <unknown> 864 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -218959360;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218103808;
  v4[536862749] = -202116109;
  __for_range = &this->dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::DungeonExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonExcelConfig>,false> *)(v2 + 128)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false> *const)(v2 + 96));
    dungeon_id = std::get<0ul,unsigned int const,data::DungeonExcelConfig>(__in);
    dungeon_config = std::get<1ul,unsigned int const,data::DungeonExcelConfig>(__in);
    v6 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
           &this->scene_dungeon_map,
           &dungeon_config->scene_id);
    std::set<unsigned int>::insert(v6, dungeon_id);
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->serial_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config->serial_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config->serial_id);
    }
    if ( dungeon_config->serial_id )
    {
      v7 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
             &this->serial_dungeons_map,
             &dungeon_config->serial_id);
      std::set<unsigned int>::insert(v7, dungeon_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->dungeon_pass_excel_config_map;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::unordered_map<unsigned int,data::DungeonPassExcelConfig>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::DungeonPassExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v5);
  *(std::unordered_map<unsigned int,data::DungeonPassExcelConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::DungeonPassExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    v8 = (char *)(v2 + 192);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false> *)(v2 + 192)) )
      break;
    v69 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false,false> *const)(v2 + 160));
    std::get<0ul,unsigned int const,data::DungeonPassExcelConfig>(v69);
    dungeon_pass_config = std::get<1ul,unsigned int const,data::DungeonPassExcelConfig>(v69);
    common::tools::MiscUtils::removeEmptyElement<data::DungeonCondConfig,data::DungeonCondType data::DungeonCondConfig::*>(
      &dungeon_pass_config->conds,
      (data::DungeonCondType *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonPassExcelConfig>,false,false> *const)(v2 + 160));
  }
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = &this->dungeon_level_entity_config_vec;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v8);
  *(std::vector<data::DungeonLevelEntityConfig>::iterator *)(v2 + 224) = std::vector<data::DungeonLevelEntityConfig>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, v8);
  *(std::vector<data::DungeonLevelEntityConfig>::iterator *)(v2 + 256) = std::vector<data::DungeonLevelEntityConfig>::end(__for_range_1);
  while ( 1 )
  {
    v9 = (char *)(v2 + 256);
    if ( !__gnu_cxx::operator!=<data::DungeonLevelEntityConfig *,std::vector<data::DungeonLevelEntityConfig>>(
            (const __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig*,std::vector<data::DungeonLevelEntityConfig> > *)(v2 + 224),
            (const __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig*,std::vector<data::DungeonLevelEntityConfig> > *)(v2 + 256)) )
      break;
    level_config = __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig *,std::vector<data::DungeonLevelEntityConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig*,std::vector<data::DungeonLevelEntityConfig> > *const)(v2 + 224));
    v10 = std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::operator[](
            &this->dungeon_level_config_map,
            &level_config->id);
    std::vector<data::DungeonLevelEntityConfig>::push_back(v10, level_config);
    __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig *,std::vector<data::DungeonLevelEntityConfig>>::operator++((__gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig*,std::vector<data::DungeonLevelEntityConfig> > *const)(v2 + 224));
  }
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  std::vector<data::DungeonLevelEntityConfig>::clear(&this->dungeon_level_entity_config_vec);
  __for_range_2 = &this->daily_dungeon_config_map;
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 288, v9);
  *(std::unordered_map<unsigned int,data::DailyDungeonConfig>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,data::DailyDungeonConfig>::begin(__for_range_2);
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 320, v9);
  *(std::unordered_map<unsigned int,data::DailyDungeonConfig>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,data::DailyDungeonConfig>::end(__for_range_2);
  while ( 1 )
  {
    v11 = (char *)(v2 + 320);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DailyDungeonConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyDungeonConfig>,false> *)(v2 + 288),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyDungeonConfig>,false> *)(v2 + 320)) )
      break;
    v58 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyDungeonConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyDungeonConfig>,false,false> *const)(v2 + 288));
    random_id = std::get<0ul,unsigned int const,data::DailyDungeonConfig>(v58);
    daily_dungeon_config = std::get<1ul,unsigned int const,data::DailyDungeonConfig>(v58);
    day_map = std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::operator[](
                &this->daily_dungeon_map,
                random_id);
    v12 = ((v2 + 544) >> 3) + 2147450880;
    *(_WORD *)v12 = 0;
    *(_BYTE *)(v12 + 2) = 0;
    v13 = ((v2 + 864) >> 3) + 2147450880;
    *(_DWORD *)v13 = 0;
    *(_WORD *)(v13 + 4) = 0;
    *(_BYTE *)(v13 + 6) = 0;
    p_monday = &daily_dungeon_config->monday;
    if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 864, random_id);
    *(_QWORD *)(v2 + 864) = p_monday;
    p_tuesday = &daily_dungeon_config->tuesday;
    if ( *(_BYTE *)(((v2 + 872) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 872, random_id);
    *(_QWORD *)(v2 + 872) = p_tuesday;
    p_wednesday = &daily_dungeon_config->wednesday;
    if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 880, random_id);
    *(_QWORD *)(v2 + 880) = p_wednesday;
    p_thursday = &daily_dungeon_config->thursday;
    if ( *(_BYTE *)(((v2 + 888) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 888, random_id);
    *(_QWORD *)(v2 + 888) = p_thursday;
    p_friday = &daily_dungeon_config->friday;
    if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 896, random_id);
    *(_QWORD *)(v2 + 896) = p_friday;
    p_saturday = &daily_dungeon_config->saturday;
    if ( *(_BYTE *)(((v2 + 904) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 904, random_id);
    *(_QWORD *)(v2 + 904) = p_saturday;
    p_sunday = &daily_dungeon_config->sunday;
    if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 912, random_id);
    *(_QWORD *)(v2 + 912) = p_sunday;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<std::vector<unsigned int> *>::allocator((std::allocator<std::vector<unsigned int>*> *const)(v2 + 48));
    v11 = (char *)(v2 + 864);
    std::vector<std::vector*<unsigned int,std::allocator<unsigned int>>>::vector(
      (std::vector<std::vector<unsigned int>*,std::allocator<std::vector<unsigned int>*> > *const)(v2 + 544),
      (std::initializer_list<std::vector<unsigned int>*>)__PAIR128__(7LL, v2 + 864),
      (const std::vector<std::vector<unsigned int>*,std::allocator<std::vector<unsigned int>*> >::allocator_type *)(v2 + 48));
    std::allocator<std::vector<unsigned int> *>::~allocator((std::allocator<std::vector<unsigned int>*> *const)(v2 + 48));
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    v21 = ((v2 + 864) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_WORD *)(v21 + 4) = -1800;
    *(_BYTE *)(v21 + 6) = -8;
    for ( i = 0;
          i < std::vector<std::vector*<unsigned int,std::allocator<unsigned int>>>::size((const std::vector<std::vector<unsigned int>*,std::allocator<std::vector<unsigned int>*> > *const)(v2 + 544));
          ++i )
    {
      v22 = std::vector<std::vector*<unsigned int,std::allocator<unsigned int>>>::operator[](
              (std::vector<std::vector<unsigned int>*,std::allocator<std::vector<unsigned int>*> > *const)(v2 + 544),
              i);
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v22);
      __for_range_3 = *v22;
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 352, i);
      *(std::vector<unsigned int>::iterator *)(v2 + 352) = std::vector<unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 384, i);
      *(std::vector<unsigned int>::iterator *)(v2 + 384) = std::vector<unsigned int>::end(__for_range_3);
      while ( 1 )
      {
        v11 = (char *)(v2 + 384);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 352),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 384)) )
        {
          v31 = 1;
          goto LABEL_75;
        }
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
        v23 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 352));
        v24 = (int *)v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        v25 = *v24;
        v26 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
        if ( v26 != 0 && v26 <= 3 )
        {
          LOBYTE(v11) = v26 != 0;
          __asan_report_store4(v2 + 64, v11);
        }
        *(_DWORD *)(v2 + 64) = v25;
        if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(this, *(unsigned int *)(v2 + 64)) )
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
            "./src/txt_data_manual/DungeonExcelConfig.cpp",
            "rewriteConfig",
            443);
          v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])"dungeon_id ");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v2 + 64));
          v30 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v29, (const char (*)[49])byte_1AC6CD40);
          v11 = (char *)random_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, random_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          v52 = -1;
          v31 = 0;
          goto LABEL_75;
        }
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        v32 = (unsigned int)(i + 1);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 80, v32);
        *(_DWORD *)(v2 + 80) = v32;
        v33 = std::map<unsigned int,std::set<unsigned int>>::operator[](
                day_map,
                (std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 80));
        v34 = std::set<unsigned int>::emplace<unsigned int &>(v33, (unsigned int *)(v2 + 64), (unsigned int *)v33);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !v34.second )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 352));
      }
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DungeonExcelConfig.cpp",
        "rewriteConfig",
        448);
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v35, (const char (*)[12])"dungeon_id ");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 64));
      v38 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v37, (const char (*)[22])byte_1AC6CDA0);
      v11 = (char *)random_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, random_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
      v52 = -1;
      v31 = 0;
LABEL_75:
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      if ( v31 != 1 )
      {
        v51 = 0;
        goto LABEL_79;
      }
    }
    v51 = 1;
LABEL_79:
    std::vector<std::vector*<unsigned int,std::allocator<unsigned int>>>::~vector((std::vector<std::vector<unsigned int>*,std::allocator<std::vector<unsigned int>*> > *const)(v2 + 544));
    v39 = ((v2 + 544) >> 3) + 2147450880;
    *(_WORD *)v39 = -1800;
    *(_BYTE *)(v39 + 2) = -8;
    if ( v51 != 1 )
    {
      v40 = 0;
      goto LABEL_83;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyDungeonConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyDungeonConfig>,false,false> *const)(v2 + 288));
  }
  v40 = 1;
LABEL_83:
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
  if ( v40 == 1 )
  {
    __for_range_4 = &this->dungeon_roster_config_map;
    *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 416, v11);
    *(std::unordered_map<unsigned int,data::DungeonRosterConfig>::iterator *)(v2 + 416) = std::unordered_map<unsigned int,data::DungeonRosterConfig>::begin(__for_range_4);
    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 448, v11);
    *(std::unordered_map<unsigned int,data::DungeonRosterConfig>::iterator *)(v2 + 448) = std::unordered_map<unsigned int,data::DungeonRosterConfig>::end(__for_range_4);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::DungeonRosterConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonRosterConfig>,false> *)(v2 + 416),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonRosterConfig>,false> *)(v2 + 448)) )
    {
      v64 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonRosterConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonRosterConfig>,false,false> *const)(v2 + 416));
      std::get<0ul,unsigned int const,data::DungeonRosterConfig>(v64);
      roster_config = std::get<1ul,unsigned int const,data::DungeonRosterConfig>(v64);
      TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(&roster_config->open_time_str);
      if ( *(_BYTE *)(((unsigned __int64)&roster_config->open_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&roster_config->open_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&roster_config->open_time, TimeByStr);
      }
      roster_config->open_time = TimeByStr;
      if ( roster_config->open_time )
      {
        v47 = ((v2 + 608) >> 3) + 2147450880;
        *(_WORD *)v47 = 0;
        *(_BYTE *)(v47 + 2) = 0;
        std::vector<data::DungeonList>::vector((std::vector<data::DungeonList> *const)(v2 + 608));
        __for_range_5 = &roster_config->roster_pool;
        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 480, TimeByStr);
        *(std::vector<data::DungeonList>::iterator *)(v2 + 480) = std::vector<data::DungeonList>::begin(__for_range_5);
        *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 512, TimeByStr);
        *(std::vector<data::DungeonList>::iterator *)(v2 + 512) = std::vector<data::DungeonList>::end(__for_range_5);
        while ( __gnu_cxx::operator!=<data::DungeonList *,std::vector<data::DungeonList>>(
                  (const __gnu_cxx::__normal_iterator<data::DungeonList*,std::vector<data::DungeonList> > *)(v2 + 480),
                  (const __gnu_cxx::__normal_iterator<data::DungeonList*,std::vector<data::DungeonList> > *)(v2 + 512)) )
        {
          dungeons = __gnu_cxx::__normal_iterator<data::DungeonList *,std::vector<data::DungeonList>>::operator*((const __gnu_cxx::__normal_iterator<data::DungeonList*,std::vector<data::DungeonList> > *const)(v2 + 480));
          if ( !std::vector<unsigned int>::empty(&dungeons->dungeon_list) )
            std::vector<data::DungeonList>::push_back((std::vector<data::DungeonList> *const)(v2 + 608), dungeons);
          __gnu_cxx::__normal_iterator<data::DungeonList *,std::vector<data::DungeonList>>::operator++((__gnu_cxx::__normal_iterator<data::DungeonList*,std::vector<data::DungeonList> > *const)(v2 + 480));
        }
        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
        std::vector<data::DungeonList>::swap(&roster_config->roster_pool, (std::vector<data::DungeonList> *)(v2 + 608));
        std::vector<data::DungeonList>::~vector((std::vector<data::DungeonList> *const)(v2 + 608));
        v46 = 1;
      }
      else
      {
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "rewriteConfig",
          460);
        v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v43 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v42, (const char (*)[9])"roster: ");
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &roster_config->id);
        v45 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v44, (const char (*)[25])byte_1AC6CE20);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v45, &roster_config->open_time_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v52 = -1;
        v46 = 0;
      }
      v48 = ((v2 + 608) >> 3) + 2147450880;
      *(_WORD *)v48 = -1800;
      *(_BYTE *)(v48 + 2) = -8;
      if ( v46 != 1 )
      {
        v49 = 0;
        goto LABEL_110;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonRosterConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonRosterConfig>,false,false> *const)(v2 + 416));
    }
    v49 = 1;
LABEL_110:
    if ( v49 == 1 )
      v52 = 0;
  }
  if ( v74 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v52;
};

// Line 480: range 0000000013AA087C-0000000013AA0A3D
const std::vector<data::DungeonLevelEntityConfig> *__fastcall DungeonExcelConfigMgr::findDungeonLevelConfigVec(
        const DungeonExcelConfigMgr *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>> *p_dungeon_level_config_map; // rdx
  std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>> *v6; // rdx
  bool v7; // al
  const std::vector<data::DungeonLevelEntityConfig> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:479 64 8 8 iter:481 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::findDungeonLevelConfigVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_dungeon_level_config_map = &this->dungeon_level_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::find(p_dungeon_level_config_map, (const std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::key_type *)(v2 + 48));
  v6 = &this->dungeon_level_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<data::DungeonLevelEntityConfig>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DungeonLevelEntityConfig> >,false,false> *const)(v2 + 64))->second;
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

// Line 490: range 0000000013AA0A3E-0000000013AA0E0D
__int64 __fastcall DungeonExcelConfigMgr::randDungeonLevelConfigId(
        const DungeonExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::DungeonExcelConfigMap *p_dungeon_excel_config_map; // rdx
  data::DungeonExcelConfigMap *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::pointer v9; // rax
  const data::DungeonExcelConfig *dungeon_config; // [rsp+18h] [rbp-E8h]
  char v11[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 10 select:501 48 4 14 dungeon_id:489 64 8 8 iter:491 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::randDungeonLevelConfigId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_excel_config_map = &this->dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,data::DungeonExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DungeonExcelConfig>::find(
                                                                                              p_dungeon_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::DungeonExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::DungeonExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DungeonExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::DungeonExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false> *const)(v2 + 64));
    dungeon_config = &v9->second;
    if ( std::map<unsigned int,unsigned int>::empty(&v9->second.level_config_map) )
    {
      result = 0LL;
    }
    else
    {
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 32, v2 + 96);
      *(_DWORD *)(v2 + 32) = 0;
      if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
             &dungeon_config->level_config_map,
             (unsigned int *)(v2 + 32),
             0) )
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
          3u,
          "./src/txt_data_manual/DungeonExcelConfig.cpp",
          "randDungeonLevelConfigId",
          504);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          (common::milog::MiLogStream *const)(v2 + 128),
          (const char (*)[44])"weightSelectOne from level_config_map fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 32);
      result = *(unsigned int *)(v2 + 32);
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 510: range 0000000013AA0E0E-0000000013AA0FCF
const std::set<unsigned int> *__fastcall DungeonExcelConfigMgr::findDungeonSetBySceneId(
        const DungeonExcelConfigMgr *const this,
        __int64 scene_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_scene_dungeon_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 scene_id:509 64 8 8 iter:511 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::findDungeonSetBySceneId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = scene_id;
  p_scene_dungeon_map = &this->scene_dungeon_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, scene_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_scene_dungeon_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->scene_dungeon_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 520: range 0000000013AA0FD0-0000000013AA12C2
const std::set<unsigned int> *__fastcall DungeonExcelConfigMgr::findDailyDungeonSet(
        const DungeonExcelConfigMgr *const this,
        __int64 random_id,
        uint32_t day)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>> *p_daily_dungeon_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>> *v7; // rdx
  bool v8; // al
  const std::set<unsigned int> *result; // rax
  bool v10; // al
  std::map<unsigned int,std::set<unsigned int>> *day_map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 13 random_id:519 48 4 7 day:519 64 8 8 iter:521 96 8 9 <unknown> 128 8 12 iter_day:525 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DungeonExcelConfigMgr::findDailyDungeonSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = random_id;
  *(_DWORD *)(v3 + 48) = day;
  p_daily_dungeon_map = &this->daily_dungeon_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, random_id);
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::find(p_daily_dungeon_map, (const std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::key_type *)(v3 + 32));
  v7 = &this->daily_dungeon_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,std::set<unsigned int>>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    day_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::set<unsigned int>> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 128) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                     day_map,
                                                                                     (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 160) = std::map<unsigned int,std::set<unsigned int>>::end(day_map);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 128))->second;
  }
  if ( v13 == (char *)v3 )
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

// Line 533: range 0000000013AA12C4-0000000013AA1485
const std::set<unsigned int> *__fastcall DungeonExcelConfigMgr::findSerialDungeonSet(
        const DungeonExcelConfigMgr *const this,
        __int64 serial_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_serial_dungeons_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 serial_id:532 64 8 8 iter:534 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::findSerialDungeonSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = serial_id;
  p_serial_dungeons_map = &this->serial_dungeons_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, serial_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_serial_dungeons_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->serial_dungeons_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 543: range 0000000013AA1486-0000000013AA171D
bool __cdecl DungeonExcelConfigMgr::isUsedForMpDungeon(const DungeonExcelConfigMgr *const this, uint32_t scene_id)
{
  bool v2; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Self *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  unsigned int *v7; // rdx
  int v8; // eax
  bool result; // al
  const std::set<unsigned int> *dungeon_set_ptr; // [rsp+18h] [rbp-A8h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+28h] [rbp-98h]
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (std::_Rb_tree_const_iterator<unsigned int>::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::_Rb_tree_const_iterator<unsigned int>::_Self *)v4;
  }
  v3->_M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)1102416563;
  v3[1]._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)"2 32 8 15 __for_begin:547 64 8 13 __for_end:547";
  v3[2]._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)DungeonExcelConfigMgr::isUsedForMpDungeon;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  dungeon_set_ptr = DungeonExcelConfigMgr::findDungeonSetBySceneId(this, scene_id);
  if ( !dungeon_set_ptr )
    goto LABEL_21;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], scene_id);
  v3[4]._M_node = std::set<unsigned int>::begin(dungeon_set_ptr)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], scene_id);
  v3[8]._M_node = std::set<unsigned int>::end(dungeon_set_ptr)._M_node;
  while ( std::operator!=(v3 + 4, v3 + 8) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(v3 + 4);
    v7 = (unsigned int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(this, *v7);
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_config_ptr->involve_type);
      }
      if ( dungeon_config_ptr->involve_type != INVOLVE_ONLY_SINGLE )
      {
        v2 = 1;
        v8 = 0;
        goto LABEL_20;
      }
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(v3 + 4);
  }
  v8 = 1;
LABEL_20:
  if ( v8 == 1 )
LABEL_21:
    v2 = 0;
  result = v2;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 561: range 0000000013AA171E-0000000013AA19A9
__int64 __fastcall DungeonExcelConfigMgr::isBanGeneralEnterDungeon(
        const DungeonExcelConfigMgr *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:560 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::isBanGeneralEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->type);
    }
    switch ( dungeon_config_ptr->type )
    {
      case DUNGEON_THEATRE_MECHANICUS:
      case DUNGEON_SUMO_COMBAT:
      case DUNGEON_ROGUELIKE:
      case DUNGEON_POTION:
      case DUNGEON_UGC:
      case DUNGEON_GCG:
      case DUNGEON_CRYSTAL_LINK:
      case DUNGEON_IRODORI_CHESS:
      case DUNGEON_ROGUE_DIARY:
      case DUNGEON_MUQADAS_POTION:
      case DUNGEON_INSTABLE_SPRAY:
      case DUNGEON_FUNGUS_FIGHTER_TRAINING:
      case DUNGEON_FUNGUS_FIGHTER_PLOT:
      case DUNGEON_EFFIGY_CHALLENGE_V2:
      case DUNGEON_CHAR_AMUSEMENT:
      case DUNGEON_MIST_TRIAL:
      case DUNGEON_TEAM_CHAIN:
      case DUNGEON_BRICK_BREAKER:
      case DUNGEON_DUEL_HEART:
        result = 1LL;
        break;
      default:
        result = 0LL;
        break;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/DungeonExcelConfig.cpp",
      "isBanGeneralEnterDungeon",
      565);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[30])"findDungeonExcelConfig fails:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 597: range 0000000013AA19AA-0000000013AA1C35
__int64 __fastcall DungeonExcelConfigMgr::isSpecialReplayDungeon(
        const DungeonExcelConfigMgr *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:596 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::isSpecialReplayDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->type);
    }
    switch ( dungeon_config_ptr->type )
    {
      case DUNGEON_TOWER:
      case DUNGEON_POTION:
      case DUNGEON_CRYSTAL_LINK:
      case DUNGEON_SUMMER_V2:
      case DUNGEON_MUQADAS_POTION:
      case DUNGEON_WIND_FIELD:
      case DUNGEON_FUNGUS_FIGHTER_TRAINING:
      case DUNGEON_FUNGUS_FIGHTER_PLOT:
      case DUNGEON_EFFIGY_CHALLENGE_V2:
      case DUNGEON_MIST_TRIAL:
      case DUNGEON_TEAM_CHAIN:
      case DUNGEON_BRICK_BREAKER:
      case DUNGEON_DUEL_HEART:
        result = 1LL;
        break;
      default:
        result = 0LL;
        break;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/DungeonExcelConfig.cpp",
      "isSpecialReplayDungeon",
      601);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[30])"findDungeonExcelConfig fails:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 627: range 0000000013AA1C36-0000000013AA1EC2
_BOOL8 __fastcall DungeonExcelConfigMgr::isBanMpModeDungeon(
        const DungeonExcelConfigMgr *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  _BOOL8 result; // rax
  unsigned int type; // eax
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-A8h]
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:626 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonExcelConfigMgr::isBanMpModeDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->type);
    }
    type = dungeon_config_ptr->type;
    result = type <= 0x25 && ((1LL << type) & 0x2004040000LL) != 0;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/DungeonExcelConfig.cpp",
      "isBanMpModeDungeon",
      631);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[30])"findDungeonExcelConfig fails:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
