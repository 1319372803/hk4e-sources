// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMuqadasPotionExcelConfig.cpp

// Line 19: range 0000000012C939BA-0000000012C93CDE
int32_t __cdecl ActivityMuqadasPotionExcelConfigMgr::checkConfig(
        ActivityMuqadasPotionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMuqadasPotionExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityMuqadasPotionExcelConfigMgr::checkMuqadasPotionConfigData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMuqadasPotionExcelConfig.cpp",
      "checkConfig",
      22);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v5,
      (const char (*)[36])"checkMuqadasPotionConfigData failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityMuqadasPotionExcelConfigMgr::checkMuqadasPotionLevelConfigData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMuqadasPotionExcelConfig.cpp",
      "checkConfig",
      28);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v7,
      (const char (*)[41])"checkMuqadasPotionLevelConfigData failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 36: range 0000000012C93CE0-0000000012C94468
int32_t __cdecl ActivityMuqadasPotionExcelConfigMgr::checkMuqadasPotionConfigData(
        ActivityMuqadasPotionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  NewActivityExcelConfigMgr *v10; // rcx
  __int64 activity_id; // rsi
  data::NewActivityType ActivitiyTypeByActivityId; // edx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  int32_t result; // eax
  data::ActivityMuqadasPotionExcelConfigMap *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionExcelConfig>,false,false>::reference v21; // [rsp+20h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMuqadasPotionExcelConfig> >::type *muqadas_potion_excel_config; // [rsp+30h] [rbp-180h]
  char v23[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 16 activity_type:48 64 8 14 __for_begin:37 96 8 12 __for_end:37 128 32 9 <unknown> 192 32"
                        " 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMuqadasPotionExcelConfigMgr::checkMuqadasPotionConfigData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->activity_muqadas_potion_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMuqadasPotionExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityMuqadasPotionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMuqadasPotionExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityMuqadasPotionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityMuqadasPotionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMuqadasPotionExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMuqadasPotionExcelConfig>,false> *)(v3 + 96)) )
  {
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::ActivityMuqadasPotionExcelConfig>(v21);
    muqadas_potion_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMuqadasPotionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityMuqadasPotionExcelConfig>(v21);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&muqadas_potion_excel_config->activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&muqadas_potion_excel_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&muqadas_potion_excel_config->activity_id);
    }
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
           p_new_activity_config_mgr,
           muqadas_potion_excel_config->activity_id) )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = &txt_config_mgr->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&muqadas_potion_excel_config->activity_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&muqadas_potion_excel_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&muqadas_potion_excel_config->activity_id);
      }
      activity_id = muqadas_potion_excel_config->activity_id;
      ActivitiyTypeByActivityId = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(v10, activity_id);
      v13 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(activity_id) = v13 != 0;
        __asan_report_store4(v3 + 48, activity_id);
      }
      *(_DWORD *)(v3 + 48) = ActivitiyTypeByActivityId;
      if ( *(_DWORD *)(v3 + 48) == 3002 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&muqadas_potion_excel_config->energy_limit >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&muqadas_potion_excel_config->energy_limit >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&muqadas_potion_excel_config->energy_limit);
        }
        if ( muqadas_potion_excel_config->energy_limit )
        {
          v9 = 1;
        }
        else
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
            "./src/txt_data_manual/ActivityMuqadasPotionExcelConfig.cpp",
            "checkMuqadasPotionConfigData",
            57);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            v16,
            (const char (*)[44])"[MUQADAS_POTION] energy_limit can't be zero");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v9 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMuqadasPotionExcelConfig.cpp",
          "checkMuqadasPotionConfigData",
          51);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                v14,
                (const char (*)[53])"[MUQADAS_POTION] activity_type error, activity_type:");
        common::milog::MiLogStream::operator<<<data::NewActivityType,(data::NewActivityType*)0>(
          v15,
          (const data::NewActivityType *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityMuqadasPotionExcelConfig.cpp",
        "checkMuqadasPotionConfigData",
        43);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             v7,
             (const char (*)[38])"[MUQADAS_POTION] invalid activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v8,
        &muqadas_potion_excel_config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v9 != 1 )
    {
      v17 = 0;
      goto LABEL_35;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionExcelConfig>,false,false> *const)(v3 + 64));
  }
  v17 = 1;
LABEL_35:
  if ( v17 == 1 )
    v2 = 0;
  result = v2;
  if ( v23 == (char *)v3 )
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
  return result;
};

// Line 66: range 0000000012C9446A-0000000012C94EE4
int32_t __cdecl ActivityMuqadasPotionExcelConfigMgr::checkMuqadasPotionLevelConfigData(
        ActivityMuqadasPotionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_open_day_index; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  __int64 gallery_id; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v15; // rax
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-20Ch]
  data::ActivityMuqadasPotionLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-208h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false,false>::reference v25; // [rsp+20h] [rbp-200h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig> >::type *level_id; // [rsp+28h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig> >::type *muqadas_potion_level_excel_config; // [rsp+30h] [rbp-1F0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-1D8h]
  const unsigned int *trial_avatar_id; // [rsp+50h] [rbp-1D0h]
  char v30[448]; // [rsp+60h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 8 14 __for_begin:68 64 8 12 __for_end:68 96 8 14 __for_begin:94 128 8 12 __for_end:94 160 3"
                        "2 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMuqadasPotionExcelConfigMgr::checkMuqadasPotionLevelConfigData;
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
  ret = 0;
  __for_range = &this->activity_muqadas_potion_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMuqadasPotionLevelExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityMuqadasPotionLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMuqadasPotionLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityMuqadasPotionLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false,false> *const)(v2 + 32));
    level_id = std::get<0ul,unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>(v25);
    muqadas_potion_level_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>(v25);
    p_open_day_index = &muqadas_potion_level_excel_config->open_day_index;
    if ( *(_BYTE *)(((unsigned __int64)p_open_day_index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_open_day_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_open_day_index >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_open_day_index);
    }
    if ( !muqadas_potion_level_excel_config->open_day_index || muqadas_potion_level_excel_config->open_day_index > 7 )
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
        "./src/txt_data_manual/ActivityMuqadasPotionExcelConfig.cpp",
        "checkMuqadasPotionLevelConfigData",
        73);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             v6,
             (const char (*)[58])"checkMuqadasPotionLevelConfigData invalid open_day_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v7,
        &muqadas_potion_level_excel_config->open_day_index);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&muqadas_potion_level_excel_config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&muqadas_potion_level_excel_config->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&muqadas_potion_level_excel_config->dungeon_id);
    }
    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
            p_dungeon_config_mgr,
            muqadas_potion_level_excel_config->dungeon_id) )
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
        "./src/txt_data_manual/ActivityMuqadasPotionExcelConfig.cpp",
        "checkMuqadasPotionLevelConfigData",
        81);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              v9,
              (const char (*)[37])"[MUQADAS_POTION] invalid dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v10,
        &muqadas_potion_level_excel_config->dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&muqadas_potion_level_excel_config->gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)muqadas_potion_level_excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&muqadas_potion_level_excel_config->gallery_id >> 3)
                                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&muqadas_potion_level_excel_config->gallery_id);
    }
    gallery_id = muqadas_potion_level_excel_config->gallery_id;
    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, gallery_id) )
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
        "./src/txt_data_manual/ActivityMuqadasPotionExcelConfig.cpp",
        "checkMuqadasPotionLevelConfigData",
        89);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              v13,
              (const char (*)[37])"[MUQADAS_POTION] invalid gallery_id:");
      gallery_id = (__int64)&muqadas_potion_level_excel_config->gallery_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v14,
        &muqadas_potion_level_excel_config->gallery_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &muqadas_potion_level_excel_config->trial_avatar_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
    {
      v15 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
      trial_avatar_id = v15;
      p_trial_avatar_config_mgr = &txt_config_mgr->trial_avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      if ( !data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(p_trial_avatar_config_mgr, *trial_avatar_id) )
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
          "./src/txt_data_manual/ActivityMuqadasPotionExcelConfig.cpp",
          "checkMuqadasPotionLevelConfigData",
          99);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                v17,
                (const char (*)[42])"[MUQADAS_POTION] invalid trial_avatar_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, trial_avatar_id);
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])", level_id = ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, level_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v30 == (char *)v2 )
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
