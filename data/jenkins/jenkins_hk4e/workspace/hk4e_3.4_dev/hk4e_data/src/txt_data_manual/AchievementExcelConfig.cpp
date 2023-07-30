// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AchievementExcelConfig.cpp

// Line 40: range 0000000012AA3F5A-0000000012AA4165
int32_t __cdecl AchievementExcelConfigMgr::checkConfig(
        AchievementExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AchievementExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( AchievementExcelConfigMgr::checkAchievementConfig(this, txt_config_mgr)
    || AchievementExcelConfigMgr::checkAchievementGoalConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/AchievementExcelConfig.cpp",
      "checkConfig",
      44);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v6, (const char (*)[50])byte_1AA18200);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
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

// Line 51: range 0000000012AA4166-0000000012AA5021
int32_t __cdecl AchievementExcelConfigMgr::checkAchievementConfig(
        AchievementExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  char v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  __int64 v11; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int32_t result; // eax
  data::AchievementExcelConfigMap *__for_range; // [rsp+18h] [rbp-278h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-270h]
  const unsigned int *id; // [rsp+28h] [rbp-268h]
  std::tuple_element<1,std::pair<unsigned int const,data::AchievementExcelConfig> >::type *config; // [rsp+30h] [rbp-260h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-258h]
  char v44[592]; // [rsp+40h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 14 __for_begin:52 64 8 12 __for_end:52 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AchievementExcelConfigMgr::checkAchievementConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  __for_range = &this->achievement_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AchievementExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AchievementExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AchievementExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AchievementExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AchievementExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AchievementExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AchievementExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_73;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::AchievementExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::AchievementExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v6 = *id;
    if ( !AchievementExcelConfigMgr::isShareWatcherAchievement(this, v6) )
      goto LABEL_17;
    if ( *(char *)(((unsigned __int64)&config->is_delete_watcher_after_finish >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_delete_watcher_after_finish, v6, &config->is_delete_watcher_after_finish);
    if ( config->is_delete_watcher_after_finish )
      v7 = 1;
    else
LABEL_17:
      v7 = 0;
    if ( v7 )
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
        "./src/txt_data_manual/AchievementExcelConfig.cpp",
        "checkAchievementConfig",
        56);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v8, (const char (*)[64])byte_1AA18360);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_73;
    }
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v11 = *id;
    watcher_config_ptr = AchievementExcelConfigMgr::findWatcherConfigByAchievementId(this, v11);
    if ( !watcher_config_ptr )
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
        "./src/txt_data_manual/AchievementExcelConfig.cpp",
        "checkAchievementConfig",
        63);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v12, (const char (*)[66])byte_1AA183C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v10 = 0;
      goto LABEL_73;
    }
    if ( *(char *)(((unsigned __int64)&watcher_config_ptr->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&watcher_config_ptr->is_disuse, v11, &watcher_config_ptr->is_disuse);
    if ( watcher_config_ptr->is_disuse )
    {
      if ( *(char *)(((unsigned __int64)&config->is_disuse >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&config->is_disuse, v11, &config->is_disuse);
      if ( !config->is_disuse )
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
          4u,
          "./src/txt_data_manual/AchievementExcelConfig.cpp",
          "checkAchievementConfig",
          68);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v14, (const char (*)[52])byte_1AA18440);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
        v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])byte_1AA184A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &watcher_config_ptr->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        v2 = -1;
        v10 = 0;
        goto LABEL_73;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&watcher_config_ptr->id);
    }
    v18 = watcher_config_ptr->id;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( v18 != *id && !AchievementExcelConfigMgr::isAchievementMatch(this, watcher_config_ptr->id, *id) )
    {
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
        "./src/txt_data_manual/AchievementExcelConfig.cpp",
        "checkAchievementConfig",
        73);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(v20, (const char (*)[85])byte_1AA184E0);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
      v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v22, (const char (*)[19])byte_1AA18560);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &watcher_config_ptr->id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v10 = 0;
      goto LABEL_73;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->progress);
    }
    if ( !config->progress )
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
        "./src/txt_data_manual/AchievementExcelConfig.cpp",
        "checkAchievementConfig",
        78);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v24, (const char (*)[45])byte_1AA185A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      v2 = -1;
      v10 = 0;
      goto LABEL_73;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->finish_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->finish_reward_id >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&config->finish_reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->finish_reward_id,
                            ITEM_LIMIT_ACHIEVEMENT_REWARD) != 1 )
    {
      if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AchievementExcelConfig.cpp",
        "checkAchievementConfig",
        83);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])byte_1AA18600);
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &config->id);
      v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])byte_1AA18640);
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &config->finish_reward_id);
      common::milog::MiLogStream::operator<<<char [99],(char *[99])0>(v30, (const char (*)[99])byte_1AA18680);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      v2 = -1;
      v10 = 0;
      goto LABEL_73;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->goal_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->goal_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->goal_id);
    }
    if ( config->goal_id
      && !std::unordered_map<unsigned int,data::AchievementGoalExcelConfig>::count(
            &this->achievement_goal_excel_config_map,
            &config->goal_id) )
    {
      break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/AchievementExcelConfig.cpp",
    "checkAchievementConfig",
    88);
  v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])byte_1AA18720);
  v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, id);
  v35 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v34, (const char (*)[17])byte_1AA18760);
  v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &config->goal_id);
  common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v36, (const char (*)[14])byte_1AA187A0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
  v2 = -1;
  v10 = 0;
LABEL_73:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 96: range 0000000012AA5022-0000000012AA5772
int32_t __cdecl AchievementExcelConfigMgr::checkAchievementGoalConfig(
        AchievementExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_finish_reward_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  data::AchievementGoalExcelConfigMap *__for_range; // [rsp+18h] [rbp-178h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementGoalExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-170h]
  const unsigned int *goal_id; // [rsp+28h] [rbp-168h]
  std::tuple_element<1,std::pair<unsigned int const,data::AchievementGoalExcelConfig> >::type *config; // [rsp+30h] [rbp-160h]
  const std::unordered_set<unsigned int> *s; // [rsp+38h] [rbp-158h]
  char v25[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:97 64 8 12 __for_end:97 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AchievementExcelConfigMgr::checkAchievementGoalConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->achievement_goal_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AchievementGoalExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AchievementGoalExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AchievementGoalExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AchievementGoalExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AchievementGoalExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AchievementGoalExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AchievementGoalExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_33;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementGoalExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementGoalExcelConfig>,false,false> *const)(v3 + 32));
    goal_id = std::get<0ul,unsigned int const,data::AchievementGoalExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::AchievementGoalExcelConfig>(__in);
    p_finish_reward_id = &config->finish_reward_id;
    if ( *(_BYTE *)(((unsigned __int64)p_finish_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_finish_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_finish_reward_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(p_finish_reward_id);
    }
    if ( config->finish_reward_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)goal_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)goal_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)goal_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(goal_id);
      }
      if ( !*goal_id )
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
          "./src/txt_data_manual/AchievementExcelConfig.cpp",
          "checkAchievementGoalConfig",
          103);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])byte_1AA188A0);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, goal_id);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])byte_1AA188E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
        v2 = -1;
        v10 = 0;
        goto LABEL_33;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->finish_reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->finish_reward_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->finish_reward_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              config->finish_reward_id,
                              ITEM_LIMIT_ACHIEVEMENT_GOAL_REWARD) != 1 )
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
          "./src/txt_data_manual/AchievementExcelConfig.cpp",
          "checkAchievementGoalConfig",
          108);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])byte_1AA188A0);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, goal_id);
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])byte_1AA18640);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->finish_reward_id);
        common::milog::MiLogStream::operator<<<char [99],(char *[99])0>(v15, (const char (*)[99])byte_1AA18920);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        v2 = -1;
        v10 = 0;
        goto LABEL_33;
      }
      if ( *(_BYTE *)(((unsigned __int64)goal_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)goal_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)goal_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(goal_id);
      }
      s = AchievementExcelConfigMgr::getAchievementSetByGoalId(this, *goal_id);
      if ( std::unordered_set<unsigned int>::empty(s) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementGoalExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementGoalExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/AchievementExcelConfig.cpp",
    "checkAchievementGoalConfig",
    114);
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v16, (const char (*)[26])byte_1AA189C0);
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, goal_id);
  common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v18, (const char (*)[20])byte_1AA18A00);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v10 = 0;
LABEL_33:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v25 == (char *)v3 )
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

// Line 123: range 0000000012AA5774-0000000012AA597F
int32_t __cdecl AchievementExcelConfigMgr::rewriteConfig(
        AchievementExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AchievementExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( AchievementExcelConfigMgr::rewriteAchievementConfig(this, txt_config_mgr)
    || AchievementExcelConfigMgr::rewriteAchievementGoalConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/AchievementExcelConfig.cpp",
      "rewriteConfig",
      128);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v6, (const char (*)[50])byte_1AA18A40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
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

// Line 135: range 0000000012AA5980-0000000012AA7A52
int32_t __cdecl AchievementExcelConfigMgr::rewriteAchievementConfig(
        AchievementExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  data::WatcherConfig *v7; // rcx
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  std::unordered_set<unsigned int> *v12; // rdx
  std::tuple_element<0,std::pair<unsigned int const,data::AchievementExcelConfig> >::type *v13; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rax
  unsigned int *v15; // rdx
  char v16; // cl
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  AchievementExcelConfigMgr *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  uint32_t pre_stage_achievement_id; // ecx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  uint32_t *p_pre_stage_achievement_id; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v32; // rax
  unsigned int *v33; // rdx
  char v34; // cl
  unsigned __int64 v35; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *M_cur; // rsi
  unsigned __int64 v37; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v38; // rsi
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  int v46; // edx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v47; // rax
  int *v48; // rdx
  const std::unordered_map<unsigned int,unsigned int>::key_type *v49; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v50; // rax
  _DWORD *v51; // rdx
  char v52; // cl
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v53; // rax
  int *v54; // rdx
  int v55; // ecx
  char v56; // al
  unsigned __int64 v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // r14
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  char *v62; // rsi
  uint32_t v63; // ecx
  AchievementExcelConfigMgr *v65; // rcx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  int v71; // edx
  __int64 v72; // rsi
  uint32_t v73; // ecx
  char v74; // dl
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v75; // rdx
  std::unordered_set<unsigned int> *v76; // rdx
  common::milog::MiLogStream *v77; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *__last; // [rsp+0h] [rbp-5D0h]
  unsigned int v80; // [rsp+8h] [rbp-5C8h]
  unsigned int v81; // [rsp+8h] [rbp-5C8h]
  int v82; // [rsp+8h] [rbp-5C8h]
  int v83; // [rsp+8h] [rbp-5C8h]
  data::AchievementExcelConfigMap *__for_range; // [rsp+20h] [rbp-5B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-5A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::AchievementExcelConfig> >::type *id; // [rsp+30h] [rbp-5A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::AchievementExcelConfig> >::type *config; // [rsp+38h] [rbp-598h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-590h]
  const unsigned int *pre; // [rsp+48h] [rbp-588h]
  const std::unordered_map<unsigned int,unsigned int>::key_type *after; // [rsp+50h] [rbp-580h]
  std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-578h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-570h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v95; // [rsp+68h] [rbp-568h]
  uint32_t *achievement_id; // [rsp+70h] [rbp-560h]
  uint32_t *watcher_id; // [rsp+78h] [rbp-558h]
  data::AchievementExcelConfig *achievement_config_ptr; // [rsp+80h] [rbp-550h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_3; // [rsp+88h] [rbp-548h]
  const std::unordered_set<unsigned int>::value_type *achievement_id_0; // [rsp+90h] [rbp-540h]
  const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *watcher_id_0; // [rsp+98h] [rbp-538h]
  char v102[1328]; // [rsp+A0h] [rbp-530h] BYREF

  v3 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1280LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "25 48 4 6 id:196 64 8 15 __for_begin:137 96 8 13 __for_end:137 128 8 9 <unknown> 160 8 15 __for_"
                        "begin:180 192 8 13 __for_end:180 224 8 15 __for_begin:196 256 8 13 __for_end:196 288 8 15 __for_"
                        "begin:208 320 8 13 __for_end:208 352 8 9 <unknown> 384 8 15 __for_begin:225 416 8 13 __for_end:2"
                        "25 448 24 16 erase_id_vec:179 512 24 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 "
                        "<unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 "
                        "<unknown> 1088 56 20 pre_to_after_map:136 1184 56 22 update_watcher_map:174";
  *(_QWORD *)(v3 + 16) = AchievementExcelConfigMgr::rewriteAchievementConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -234881024;
  v5[536862756] = -218959118;
  v5[536862758] = -218103808;
  v5[536862759] = -202116109;
  std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1088));
  __for_range = &this->achievement_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AchievementExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AchievementExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AchievementExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::AchievementExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AchievementExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AchievementExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AchievementExcelConfig>,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_53;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::AchievementExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::AchievementExcelConfig>(__in);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    v7 = (data::WatcherConfig *)config;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      p_watcher_config_mgr = (WatcherExcelConfigMgr *)id;
      __asan_report_load4(id);
    }
    v8 = *id;
    if ( WatcherExcelConfigMgr::addWatcherConfig(p_watcher_config_mgr, v8, v7) )
    {
      if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 576, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 576),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AchievementExcelConfig.cpp",
        "rewriteAchievementConfig",
        141);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 576),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v9, (const char (*)[55])byte_1AA18D20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
      *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_53;
    }
    if ( *(char *)(((unsigned __int64)&config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_disuse, v8, &config->is_disuse);
    if ( !config->is_disuse )
    {
      v12 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
              &this->goal_to_achievement_map_,
              &config->goal_id);
      std::unordered_set<unsigned int>::insert(v12, id);
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->pre_stage_achievement_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->pre_stage_achievement_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->pre_stage_achievement_id);
    }
    if ( !config->pre_stage_achievement_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v80 = *id;
      v13 = id;
      v14 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->achievement_to_watcher_map_, id);
      v15 = v14;
      v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(v14, v13);
      }
      *v15 = v80;
      goto LABEL_51;
    }
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
           (std::unordered_map<unsigned int,unsigned int> *)(v3 + 1088),
           &config->pre_stage_achievement_id) )
    {
      if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 640, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 640),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AchievementExcelConfig.cpp",
        "rewriteAchievementConfig",
        157);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 640),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v17, (const char (*)[42])byte_1AA18D80);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v18,
              &config->pre_stage_achievement_id);
      v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])byte_1AA18DE0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
      *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_53;
    }
    v21 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->pre_stage_achievement_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->pre_stage_achievement_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->pre_stage_achievement_id);
    }
    if ( !data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(v21, config->pre_stage_achievement_id) )
    {
      if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AchievementExcelConfig.cpp",
        "rewriteAchievementConfig",
        162);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 704),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v22, (const char (*)[38])byte_1AA18E20);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v23,
              &config->pre_stage_achievement_id);
      v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v24, (const char (*)[17])byte_1AA18DE0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_53;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->pre_stage_achievement_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->pre_stage_achievement_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->pre_stage_achievement_id);
    }
    pre_stage_achievement_id = config->pre_stage_achievement_id;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( pre_stage_achievement_id == *id )
      break;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v81 = *id;
    p_pre_stage_achievement_id = &config->pre_stage_achievement_id;
    v32 = std::unordered_map<unsigned int,unsigned int>::operator[](
            (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1088),
            &config->pre_stage_achievement_id);
    v33 = v32;
    v34 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
    if ( v34 != 0 && (char)(((unsigned __int8)v32 & 7) + 3) >= v34 )
    {
      LOBYTE(p_pre_stage_achievement_id) = v34 != 0;
      __asan_report_store4(v32, p_pre_stage_achievement_id);
    }
    *v33 = v81;
LABEL_51:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false> *const)(v3 + 64));
  }
  if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 768, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 768),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/AchievementExcelConfig.cpp",
    "rewriteAchievementConfig",
    167);
  v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 768),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v28 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v27, (const char (*)[44])byte_1AA18E80);
  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &config->pre_stage_achievement_id);
  v30 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v29, (const char (*)[17])byte_1AA18DE0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
  *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_53:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v11 != 1 )
    goto LABEL_147;
  v35 = ((v3 + 1184) >> 3) + 2147450880;
  *(_DWORD *)v35 = 0;
  *(_WORD *)(v35 + 4) = 0;
  *(_BYTE *)(v35 + 6) = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1184));
  while ( 2 )
  {
    __last = std::unordered_map<unsigned int,unsigned int>::end((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1184))._M_cur;
    M_cur = std::unordered_map<unsigned int,unsigned int>::begin((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1184))._M_cur;
    std::unordered_map<unsigned int,unsigned int>::insert<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>>(
      &this->achievement_to_watcher_map_,
      (std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>)M_cur,
      (std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>)__last);
    std::unordered_map<unsigned int,unsigned int>::clear((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1184));
    v37 = ((v3 + 448) >> 3) + 2147450880;
    *(_WORD *)v37 = 0;
    *(_BYTE *)(v37 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 448));
    __for_range_0 = (std::unordered_map<unsigned int,unsigned int> *)(v3 + 1088);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, M_cur);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, M_cur);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_0);
    while ( 2 )
    {
      v38 = (std::unordered_map<unsigned int,unsigned int>::mapped_type *)(v3 + 192);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 160),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 192)) )
      {
        v46 = 1;
        goto LABEL_77;
      }
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      v39 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v38);
      if ( ((unsigned __int8)v39 & 7) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v39->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v39 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v39->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v39, 8LL);
      }
      *(std::pair<unsigned int const,unsigned int> *)(v3 + 128) = *v39;
      pre = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 128));
      after = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 128));
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
              &this->achievement_to_watcher_map_,
              pre) )
      {
LABEL_75:
        std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 160));
        continue;
      }
      break;
    }
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
            &this->achievement_to_watcher_map_,
            after) )
    {
      std::vector<unsigned int>::emplace_back<unsigned int const&>(
        (std::vector<unsigned int> *const)(v3 + 448),
        pre,
        pre);
      v47 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->achievement_to_watcher_map_, pre);
      v48 = (int *)v47;
      if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v47);
      }
      v82 = *v48;
      v49 = after;
      v50 = std::unordered_map<unsigned int,unsigned int>::operator[](
              (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1184),
              after);
      v51 = v50;
      v52 = *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000);
      if ( v52 != 0 && (char)(((unsigned __int8)v50 & 7) + 3) >= v52 )
      {
        LOBYTE(v49) = v52 != 0;
        __asan_report_store4(v50, v49);
      }
      *v51 = v82;
      goto LABEL_75;
    }
    *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 832, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 832),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AchievementExcelConfig.cpp",
      "rewriteAchievementConfig",
      190);
    v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 832),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v41 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v40, (const char (*)[46])byte_1AA18EE0);
    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, after);
    v43 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v42, (const char (*)[5])"pre:");
    v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, pre);
    v45 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v44, (const char (*)[13])" watcher_id:");
    v38 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->achievement_to_watcher_map_, after);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, v38);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
    *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v46 = 0;
LABEL_77:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v46 == 1 )
    {
      __for_range_1 = (std::vector<unsigned int> *)(v3 + 448);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v38);
      *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v38);
      *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v38 = (std::unordered_map<unsigned int,unsigned int>::mapped_type *)(v3 + 256);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256)) )
          break;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v53 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
        v54 = (int *)v53;
        if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v53);
        }
        v55 = *v54;
        v56 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v56 != 0 && v56 <= 3 )
        {
          LOBYTE(v38) = v56 != 0;
          __asan_report_store4(v3 + 48, v38);
        }
        *(_DWORD *)(v3 + 48) = v55;
        std::unordered_map<unsigned int,unsigned int>::erase(
          (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1088),
          (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      v83 = 1;
    }
    else
    {
      v83 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 448));
    v57 = ((v3 + 448) >> 3) + 2147450880;
    *(_WORD *)v57 = -1800;
    *(_BYTE *)(v57 + 2) = -8;
    if ( v83 != 1 )
      goto LABEL_146;
    if ( !std::unordered_map<unsigned int,unsigned int>::empty((const std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1184)) )
      continue;
    break;
  }
  if ( !std::unordered_map<unsigned int,unsigned int>::empty((const std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1088)) )
  {
    *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 896) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 896, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 896),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AchievementExcelConfig.cpp",
      "rewriteAchievementConfig",
      204);
    v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 896),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v59 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v58, (const char (*)[47])byte_1AA18FC0);
    v60 = ((v3 + 512) >> 3) + 2147450880;
    *(_WORD *)v60 = 0;
    *(_BYTE *)(v60 + 2) = 0;
    if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 535) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 23) & 7) >= *(_BYTE *)(((v3 + 535) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 512, 24LL);
    }
    common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,unsigned int>>(
      (std::vector<unsigned int> *)(v3 + 512),
      (const std::unordered_map<unsigned int,unsigned int> *)(v3 + 1088));
    common::milog::MiLogStream::operator<<<unsigned int>(v59, (const std::vector<unsigned int> *)(v3 + 512));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 512));
    v61 = ((v3 + 512) >> 3) + 2147450880;
    *(_WORD *)v61 = -1800;
    *(_BYTE *)(v61 + 2) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
    *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    goto LABEL_146;
  }
  __for_range_2 = &this->achievement_to_watcher_map_;
  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 288, v38);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_2);
  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 320, v38);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_2);
  while ( 2 )
  {
    v62 = (char *)(v3 + 320);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 288),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 320)) )
    {
      v71 = 1;
      goto LABEL_131;
    }
    v95 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 288));
    achievement_id = std::get<0ul,unsigned int const,unsigned int>(v95);
    watcher_id = std::get<1ul,unsigned int const,unsigned int>(v95);
    if ( *(_BYTE *)(((unsigned __int64)achievement_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)achievement_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)achievement_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(achievement_id);
    }
    v63 = *achievement_id;
    if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(watcher_id);
    }
    if ( v63 == *watcher_id || AchievementExcelConfigMgr::isAchievementMatch(this, *achievement_id, *watcher_id) )
    {
LABEL_129:
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 288));
      continue;
    }
    break;
  }
  v65 = this;
  if ( *(_BYTE *)(((unsigned __int64)achievement_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)achievement_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)achievement_id >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(achievement_id);
  }
  achievement_config_ptr = data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(v65, *achievement_id);
  if ( achievement_config_ptr
    && common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,data::WatcherTriggerType>(
         &AchievementExcelConfigMgr::stage_achievement_trigger_type_allow_set,
         &achievement_config_ptr->trigger_config.trigger_type) )
  {
    v72 = ((unsigned __int8)achievement_id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)achievement_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)achievement_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)achievement_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(achievement_id);
    }
    v73 = *achievement_id;
    v74 = *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000);
    if ( v74 != 0 && (char)(((unsigned __int8)watcher_id & 7) + 3) >= v74 )
    {
      LOBYTE(v72) = v74 != 0;
      __asan_report_store4(watcher_id, v72);
    }
    *watcher_id = v73;
    goto LABEL_129;
  }
  *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 960, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 960),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/AchievementExcelConfig.cpp",
    "rewriteAchievementConfig",
    217);
  v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 960),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v68 = common::milog::MiLogStream::operator<<<char [208],(char *[208])0>(v67, (const char (*)[208])byte_1AA19020);
  v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, achievement_id);
  v70 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v69, (const char (*)[11])byte_1AA19120);
  v62 = (char *)watcher_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, watcher_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
  *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v71 = 0;
LABEL_131:
  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
  if ( v71 == 1 )
  {
    __for_range_3 = &this->achievement_to_watcher_map_;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 384, v62);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 384) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 416, v62);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 416) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_3);
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 384),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 416)) )
    {
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      v75 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 384));
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v3 + 416);
      if ( ((unsigned __int8)v75 & 7) >= *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v75->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v75 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v75->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v75, 8LL);
      }
      *(std::pair<unsigned int const,unsigned int> *)(v3 + 352) = *v75;
      achievement_id_0 = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 352));
      watcher_id_0 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 352));
      v76 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
              &this->watcher_to_achievement_map_,
              watcher_id_0);
      std::unordered_set<unsigned int>::insert(v76, achievement_id_0);
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 384));
    }
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1024, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1024),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/txt_data_manual/AchievementExcelConfig.cpp",
      "rewriteAchievementConfig",
      229);
    v77 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            (common::milog::MiLogStream *const)(v3 + 1024),
            (const char (*)[24])byte_1AA19160);
    common::milog::MiLogStream::operator<<<unsigned int,std::unordered_set<unsigned int>>(
      v77,
      &this->watcher_to_achievement_map_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
    *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
    v2 = 0;
  }
LABEL_146:
  std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1184));
LABEL_147:
  std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1088));
  if ( v102 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1280LL, v102);
  }
  return v2;
};

// Line 234: range 0000000012AA7A54-0000000012AA7A66
int32_t __cdecl AchievementExcelConfigMgr::rewriteAchievementGoalConfig(
        AchievementExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 239: range 0000000012AA7A68-0000000012AA7B68
bool __cdecl AchievementExcelConfigMgr::isAchievementMatch(
        const AchievementExcelConfigMgr *const this,
        uint32_t id_1,
        uint32_t id_2)
{
  data::WatcherTriggerType trigger_type; // ecx
  const data::AchievementExcelConfig *config_1_ptr; // [rsp+10h] [rbp-10h]
  const data::AchievementExcelConfig *config_2_ptr; // [rsp+18h] [rbp-8h]

  config_1_ptr = data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(this, id_1);
  config_2_ptr = data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(this, id_2);
  if ( !config_1_ptr || !config_2_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_1_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_1_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_1_ptr->trigger_config.trigger_type);
  }
  trigger_type = config_1_ptr->trigger_config.trigger_type;
  if ( *(_BYTE *)(((unsigned __int64)&config_2_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_2_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_2_ptr->trigger_config.trigger_type);
  }
  return trigger_type == config_2_ptr->trigger_config.trigger_type
      && !std::operator!=<std::string,std::allocator<std::string>>(
            &config_1_ptr->trigger_config.param_list,
            &config_2_ptr->trigger_config.param_list);
};

// Line 259: range 0000000012AA7B6A-0000000012AA7BC9
bool __cdecl AchievementExcelConfigMgr::isShareWatcherAchievement(
        const AchievementExcelConfigMgr *const this,
        uint32_t id)
{
  const std::unordered_set<unsigned int> *s; // [rsp+18h] [rbp-8h]

  s = AchievementExcelConfigMgr::getAchievementSetByWatcherId(this, id);
  return std::unordered_set<unsigned int>::empty(s) || std::unordered_set<unsigned int>::size(s) > 1;
};

// Line 276: range 0000000012AA7BCA-0000000012AA7DE7
const std::unordered_set<unsigned int> *__fastcall AchievementExcelConfigMgr::getAchievementSetByGoalId(
        const AchievementExcelConfigMgr *const this,
        const std::unordered_set<unsigned int> *goal_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *p_goal_to_achievement_map; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::unordered_set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 goal_id:275 64 8 8 iter:278 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AchievementExcelConfigMgr::getAchievementSetByGoalId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)goal_id;
  if ( !(_BYTE)`guard variable for'AchievementExcelConfigMgr::getAchievementSetByGoalId(unsigned int)::dummy_set
    && __cxa_guard_acquire(&`guard variable for'AchievementExcelConfigMgr::getAchievementSetByGoalId(unsigned int)::dummy_set) )
  {
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)&AchievementExcelConfigMgr::getAchievementSetByGoalId(unsigned int)const::dummy_set);
    __cxa_guard_release(&`guard variable for'AchievementExcelConfigMgr::getAchievementSetByGoalId(unsigned int)::dummy_set);
    goal_id = &AchievementExcelConfigMgr::getAchievementSetByGoalId(unsigned int)const::dummy_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_set<unsigned int>::~unordered_set,
      (void *)&AchievementExcelConfigMgr::getAchievementSetByGoalId(unsigned int)const::dummy_set,
      &_dso_handle);
  }
  p_goal_to_achievement_map = &this->goal_to_achievement_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, goal_id);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(p_goal_to_achievement_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->goal_to_achievement_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &AchievementExcelConfigMgr::getAchievementSetByGoalId(unsigned int)const::dummy_set;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 287: range 0000000012AA7DE8-0000000012AA800E
const data::AchievementExcelConfig *__fastcall AchievementExcelConfigMgr::findWatcherConfigByAchievementId(
        const AchievementExcelConfigMgr *const this,
        __int64 achievement_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_achievement_to_watcher_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::AchievementExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 achievement_id:286 64 8 8 iter:288 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AchievementExcelConfigMgr::findWatcherConfigByAchievementId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = achievement_id;
  p_achievement_to_watcher_map = &this->achievement_to_watcher_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, achievement_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_achievement_to_watcher_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->achievement_to_watcher_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(this, v9->second);
  }
  if ( v11 == (char *)v2 )
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

// Line 299: range 0000000012AA8010-0000000012AA822D
const std::unordered_set<unsigned int> *__fastcall AchievementExcelConfigMgr::getAchievementSetByWatcherId(
        const AchievementExcelConfigMgr *const this,
        const std::unordered_set<unsigned int> *id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *p_watcher_to_achievement_map; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::unordered_set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:298 64 8 8 iter:301 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AchievementExcelConfigMgr::getAchievementSetByWatcherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)id;
  if ( !(_BYTE)`guard variable for'AchievementExcelConfigMgr::getAchievementSetByWatcherId(unsigned int)::dummy_set
    && __cxa_guard_acquire(&`guard variable for'AchievementExcelConfigMgr::getAchievementSetByWatcherId(unsigned int)::dummy_set) )
  {
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)&AchievementExcelConfigMgr::getAchievementSetByWatcherId(unsigned int)const::dummy_set);
    __cxa_guard_release(&`guard variable for'AchievementExcelConfigMgr::getAchievementSetByWatcherId(unsigned int)::dummy_set);
    id = &AchievementExcelConfigMgr::getAchievementSetByWatcherId(unsigned int)const::dummy_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_set<unsigned int>::~unordered_set,
      (void *)&AchievementExcelConfigMgr::getAchievementSetByWatcherId(unsigned int)const::dummy_set,
      &_dso_handle);
  }
  p_watcher_to_achievement_map = &this->watcher_to_achievement_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(p_watcher_to_achievement_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->watcher_to_achievement_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &AchievementExcelConfigMgr::getAchievementSetByWatcherId(unsigned int)const::dummy_set;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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
