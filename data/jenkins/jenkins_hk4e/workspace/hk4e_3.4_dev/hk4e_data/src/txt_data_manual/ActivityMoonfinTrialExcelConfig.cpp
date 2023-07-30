// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp

// Line 19: range 0000000012C90C98-0000000012C90FBC
int32_t __cdecl ActivityMoonfinTrialExcelConfigMgr::checkConfig(
        ActivityMoonfinTrialExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityMoonfinTrialExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityMoonfinTrialExcelConfigMgr::checkMoonfinTrialPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
      "checkConfig",
      22);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      v5,
      (const char (*)[52])"[MOONFIN_TRIAL] checkMoonfinTrialPreviewConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityMoonfinTrialExcelConfigMgr::checkMoonfinTrialLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
      "checkConfig",
      27);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      v7,
      (const char (*)[50])"[MOONFIN_TRIAL] checkMoonfinTrialLevelConfig fail");
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

// Line 34: range 0000000012C90FBE-0000000012C912E2
int32_t __cdecl ActivityMoonfinTrialExcelConfigMgr::rewriteConfig(
        ActivityMoonfinTrialExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivityMoonfinTrialExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityMoonfinTrialExcelConfigMgr::rewriteMoonfinTrialPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
      "rewriteConfig",
      37);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      v5,
      (const char (*)[54])"[MOONFIN_TRIAL] rewriteMoonfinTrialPreviewConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityMoonfinTrialExcelConfigMgr::rewriteMoonfinTrialLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
      "rewriteConfig",
      42);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      v7,
      (const char (*)[52])"[MOONFIN_TRIAL] rewriteMoonfinTrialLevelConfig fail");
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

// Line 49: range 0000000012C912E4-0000000012C91D1B
int32_t __cdecl ActivityMoonfinTrialExcelConfigMgr::checkMoonfinTrialPreviewConfig(
        const ActivityMoonfinTrialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_activity_id; // rax
  __int64 activity_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  char *v12; // rsi
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  data::MoonfinTrialLevelExcelConfigMap *p_moonfin_trial_level_excel_config_map; // rdx
  data::MoonfinTrialLevelExcelConfigMap *v18; // rdx
  bool v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  int v24; // edx
  int v25; // edx
  FishExcelConfigMgr *p_fish_config_mgr; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  data::MoonfinTrialExcelConfigMap *__for_range; // [rsp+18h] [rbp-228h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false>::reference v33; // [rsp+20h] [rbp-220h]
  std::tuple_element<0,std::pair<unsigned int const,data::MoonfinTrialExcelConfig> >::type *id; // [rsp+28h] [rbp-218h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialExcelConfig> >::type *config; // [rsp+30h] [rbp-210h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-200h]
  char v37[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 11 level_id:58 64 8 14 __for_begin:50 96 8 12 __for_end:50 128 8 14 __for_begin:58 160 8"
                        " 12 __for_end:58 192 8 7 iter:60 224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMoonfinTrialExcelConfigMgr::checkMoonfinTrialPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  __for_range = &this->moonfin_trial_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_49;
    }
    v33 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::MoonfinTrialExcelConfig>(v33);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MoonfinTrialExcelConfig>(v33);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    activity_id = config->activity_id;
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, activity_id) )
    {
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
        "checkMoonfinTrialPreviewConfig",
        55);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v9,
              (const char (*)[21])"invalid activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
      v11 = 0;
      goto LABEL_49;
    }
    __for_range_0 = &config->level_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, activity_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, activity_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v12 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v16 != 0;
      if ( v16 != 0 && v16 <= 3 )
        __asan_report_store4(v3 + 48, v12);
      *(_DWORD *)(v3 + 48) = v15;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      p_moonfin_trial_level_excel_config_map = &this->moonfin_trial_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v12);
      *(std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::const_iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::find(p_moonfin_trial_level_excel_config_map, (const std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::key_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      v18 = &this->moonfin_trial_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v3 + 48);
      *(std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::const_iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::end(v18);
      v19 = std::__detail::operator==<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false> *)(v3 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false> *)(v3 + 224));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v19 )
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
          "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
          "checkMoonfinTrialPreviewConfig",
          63);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                v20,
                (const char (*)[48])"checkMoonfinTrialPreviewConfig fail. level_id: ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])", id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v24 = 0;
      }
      else
      {
        v24 = 1;
      }
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v24 != 1 )
      {
        v25 = 0;
        goto LABEL_39;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    v25 = 1;
LABEL_39:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v25 != 1 )
    {
      v11 = 0;
      goto LABEL_49;
    }
    p_fish_config_mgr = &txt_config_mgr->fish_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->activity_fish_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->activity_fish_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->activity_fish_id);
    }
    if ( !data::FishExcelConfigMgrBase::findFishExcelConfig(p_fish_config_mgr, config->activity_fish_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
    "checkMoonfinTrialPreviewConfig",
    70);
  v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 384),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])byte_1AA6E7C0);
  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &config->activity_fish_id);
  common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])byte_1AA20200);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
  v2 = -1;
  v11 = 0;
LABEL_49:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 78: range 0000000012C91D1C-0000000012C92702
int32_t __cdecl ActivityMoonfinTrialExcelConfigMgr::checkMoonfinTrialLevelConfig(
        const ActivityMoonfinTrialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MoonfinTrialActivityLevelType *p_level_type; // rax
  __int64 specific_fish_id; // rsi
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  FishExcelConfigMgr *p_fish_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  char *v16; // rsi
  unsigned int *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int v25; // edx
  int32_t result; // eax
  data::MoonfinTrialLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-1F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false,false>::reference v29; // [rsp+18h] [rbp-1E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::type *id; // [rsp+20h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::type *config; // [rsp+28h] [rbp-1D8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1C0h]
  char v33[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 14 watcher_id:102 64 8 14 __for_begin:79 96 8 12 __for_end:79 128 8 15 __for_begin:102 16"
                        "0 8 13 __for_end:102 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMoonfinTrialExcelConfigMgr::checkMoonfinTrialLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  __for_range = &this->moonfin_trial_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_50;
    }
    v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::MoonfinTrialLevelExcelConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MoonfinTrialLevelExcelConfig>(v29);
    p_level_type = &config->level_type;
    specific_fish_id = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_level_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_level_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_level_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_level_type);
    }
    if ( config->level_type == MOONFIN_TRIAL_ACTIVITY_LEVEL_TYPE_CHALLENGE_TOTAL
      || config->level_type == MOONFIN_TRIAL_ACTIVITY_LEVEL_TYPE_CHALLENGE_SPECIFIC
      || config->level_type == MOONFIN_TRIAL_ACTIVITY_LEVEL_TYPE_CHALLENGE_CONTINUOUS )
    {
      p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->gallery_id);
      }
      if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, config->gallery_id) )
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
          "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
          "checkMoonfinTrialLevelConfig",
          88);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v9, (const char (*)[55])byte_1AA6E900);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->gallery_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        v2 = -1;
        v11 = 0;
        goto LABEL_50;
      }
      specific_fish_id = (((_BYTE)config + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->level_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->level_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->level_type);
      }
      if ( config->level_type == MOONFIN_TRIAL_ACTIVITY_LEVEL_TYPE_CHALLENGE_SPECIFIC )
      {
        p_fish_config_mgr = &txt_config_mgr->fish_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->specific_fish_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->specific_fish_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->specific_fish_id);
        }
        specific_fish_id = config->specific_fish_id;
        if ( !data::FishExcelConfigMgrBase::findFishExcelConfig(p_fish_config_mgr, specific_fish_id) )
          break;
      }
    }
    __for_range_0 = &config->watcher_id;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, specific_fish_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, specific_fish_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v16 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v25 = 1;
        goto LABEL_46;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v17 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v18 = (int *)v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      v20 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v16) = v20 != 0;
        __asan_report_store4(v3 + 48, v16);
      }
      *(_DWORD *)(v3 + 48) = v19;
      if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
              &txt_config_mgr->new_activity_config_mgr,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
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
      "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
      "checkMoonfinTrialLevelConfig",
      107);
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v21, (const char (*)[27])byte_1AA6CD20);
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
    v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])byte_1AA6C300);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v25 = 0;
LABEL_46:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v25 != 1 )
    {
      v11 = 0;
      goto LABEL_50;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
    "checkMoonfinTrialLevelConfig",
    96);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])byte_1AA6E7C0);
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->specific_fish_id);
  common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])byte_1AA20200);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  v2 = -1;
  v11 = 0;
LABEL_50:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 116: range 0000000012C92704-0000000012C92A62
int32_t __cdecl ActivityMoonfinTrialExcelConfigMgr::rewriteMoonfinTrialPreviewConfig(
        ActivityMoonfinTrialExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::MoonfinTrialExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::MoonfinTrialExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:117 64 8 13 __for_end:117 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMoonfinTrialExcelConfigMgr::rewriteMoonfinTrialPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->moonfin_trial_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::MoonfinTrialExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MoonfinTrialExcelConfig>(v14);
    v7 = std::map<unsigned int,data::MoonfinTrialExcelConfig>::emplace<unsigned int const&,data::MoonfinTrialExcelConfig const&>(
           &this->moonfin_trial_preview_config_map_,
           &excel_config->activity_id,
           excel_config,
           (const unsigned int *)&this->moonfin_trial_preview_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
    "rewriteMoonfinTrialPreviewConfig",
    121);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v8, (const char (*)[43])byte_1AA6EA20);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->activity_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA1BDC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 129: range 0000000012C92A64-0000000012C932BC
int32_t __cdecl ActivityMoonfinTrialExcelConfigMgr::rewriteMoonfinTrialLevelConfig(
        ActivityMoonfinTrialExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_activity_id; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  data::MoonfinTrialLevelExcelConfigMap *p_moonfin_trial_level_excel_config_map; // rdx
  data::MoonfinTrialLevelExcelConfigMap *v13; // rdx
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false,false>::pointer v18; // rax
  const data::MoonfinTrialLevelExcelConfig *v19; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // edx
  int v25; // eax
  int32_t result; // eax
  data::MoonfinTrialExcelConfigMap *__for_range; // [rsp+18h] [rbp-1E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false>::reference v28; // [rsp+20h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-1D0h]
  std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::mapped_type *level_config_map; // [rsp+38h] [rbp-1C8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1C0h]
  const data::MoonfinTrialLevelExcelConfig *level_config; // [rsp+48h] [rbp-1B8h]
  char v33[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 12 level_id:133 64 8 15 __for_begin:130 96 8 13 __for_end:130 128 8 15 __for_begin:133 16"
                        "0 8 13 __for_end:133 192 8 8 iter:135 224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMoonfinTrialExcelConfigMgr::rewriteMoonfinTrialLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  __for_range = &this->moonfin_trial_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MoonfinTrialExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false> *)(v3 + 96)) )
  {
    v28 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::MoonfinTrialExcelConfig>(v28);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MoonfinTrialExcelConfig>(v28);
    p_activity_id = &excel_config->activity_id;
    level_config_map = std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::operator[](
                         &this->moonfin_trial_activityid_2_level_config_map_,
                         &excel_config->activity_id);
    __for_range_0 = &excel_config->level_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_activity_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_activity_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v7) = v11 != 0;
      if ( v11 != 0 && v11 <= 3 )
        __asan_report_store4(v3 + 48, v7);
      *(_DWORD *)(v3 + 48) = v10;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      p_moonfin_trial_level_excel_config_map = &this->moonfin_trial_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v7);
      *(std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::find(p_moonfin_trial_level_excel_config_map, (const std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::key_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      v13 = &this->moonfin_trial_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v3 + 48);
      *(std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::MoonfinTrialLevelExcelConfig>::end(v13);
      v14 = std::__detail::operator==<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false> *)(v3 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false> *)(v3 + 224));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
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
          "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
          "rewriteMoonfinTrialLevelConfig",
          138);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v15, (const char (*)[62])byte_1AA6EB80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v17 = 0;
      }
      else
      {
        v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>,false,false> *const)(v3 + 192));
        level_config = &v18->second;
        v20 = std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>::emplace<unsigned int const&,data::MoonfinTrialLevelExcelConfig const&>(
                level_config_map,
                &v18->second.level_id,
                &v18->second,
                &v18->second.level_id,
                v19);
        if ( !v20.second )
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
            "./src/txt_data_manual/ActivityMoonfinTrialExcelConfig.cpp",
            "rewriteMoonfinTrialLevelConfig",
            144);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v21, (const char (*)[43])byte_1AA6EA20);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &level_config->level_id);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])byte_1AA1BDC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
      }
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v17 != 1 )
      {
        v24 = 0;
        goto LABEL_37;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    v24 = 1;
LABEL_37:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v24 != 1 )
    {
      v25 = 0;
      goto LABEL_41;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>,false,false> *const)(v3 + 64));
  }
  v25 = 1;
LABEL_41:
  if ( v25 == 1 )
    v2 = 0;
  result = v2;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 153: range 0000000012C932BE-0000000012C9347F
const MoonfinTrialLevelConfigMap *__fastcall ActivityMoonfinTrialExcelConfigMgr::findLevelConfigMapByActivityId(
        const ActivityMoonfinTrialExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>> *p_moonfin_trial_activityid_2_level_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>> *v6; // rdx
  bool v7; // al
  const MoonfinTrialLevelConfigMap *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:152 64 8 8 iter:154 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMoonfinTrialExcelConfigMgr::findLevelConfigMapByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_moonfin_trial_activityid_2_level_config_map = &this->moonfin_trial_activityid_2_level_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::find(p_moonfin_trial_activityid_2_level_config_map, (const std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->moonfin_trial_activityid_2_level_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig> > > *const)(v2 + 64))->second;
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

// Line 163: range 0000000012C93480-0000000012C937FD
const data::MoonfinTrialLevelExcelConfig *__fastcall ActivityMoonfinTrialExcelConfigMgr::findLevelInfoByActivityIdAndGalleryId(
        const ActivityMoonfinTrialExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t gallery_id)
{
  const data::MoonfinTrialLevelExcelConfig *v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>> *p_moonfin_trial_activityid_2_level_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>> *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  uint32_t *p_gallery_id; // rax
  int v12; // eax
  const data::MoonfinTrialLevelExcelConfig *result; // rax
  std::map<unsigned int,data::MoonfinTrialLevelExcelConfig> *__for_range; // [rsp+10h] [rbp-110h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::reference v16; // [rsp+18h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::type *level_info; // [rsp+28h] [rbp-F8h]
  char v18[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 15 activity_id:162 64 8 8 iter:164 96 8 9 <unknown> 128 8 15 __for_begin:170 160 8 13 __for_end:170";
  *(_QWORD *)(v4 + 16) = ActivityMoonfinTrialExcelConfigMgr::findLevelInfoByActivityIdAndGalleryId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 48) = activity_id;
  p_moonfin_trial_activityid_2_level_config_map = &this->moonfin_trial_activityid_2_level_config_map_;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::const_iterator *)(v4 + 64) = std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::find(p_moonfin_trial_activityid_2_level_config_map, (const std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::key_type *)(v4 + 48));
  v8 = &this->moonfin_trial_activityid_2_level_config_map_;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>::end(v8);
  v9 = (char *)(v4 + 96);
  v10 = std::operator==(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig> > >::_Self *)(v4 + 64),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig> > >::_Self *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    v3 = 0LL;
  }
  else
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::MoonfinTrialLevelExcelConfig> > > *const)(v4 + 64))->second;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v9);
    *(std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>::const_iterator *)(v4 + 128) = std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>::begin(__for_range);
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v9);
    *(std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>::const_iterator *)(v4 + 160) = std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>::end(__for_range);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::_Self *)(v4 + 128),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::_Self *)(v4 + 160)) )
    {
      v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> > *const)(v4 + 128));
      std::get<0ul,unsigned int const,data::MoonfinTrialLevelExcelConfig>(v16);
      level_info = (std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MoonfinTrialLevelExcelConfig>(v16);
      p_gallery_id = &level_info->gallery_id;
      if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_gallery_id);
      }
      if ( gallery_id == level_info->gallery_id )
      {
        v3 = level_info;
        v12 = 0;
        goto LABEL_22;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> > *const)(v4 + 128));
    }
    v12 = 1;
LABEL_22:
    if ( v12 == 1 )
      v3 = 0LL;
  }
  result = v3;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 181: range 0000000012C937FE-0000000012C939B9
const data::MoonfinTrialExcelConfig *__fastcall ActivityMoonfinTrialExcelConfigMgr::findPreviewExcelConfigByActivityId(
        const ActivityMoonfinTrialExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::MoonfinTrialExcelConfig> *p_moonfin_trial_preview_config_map; // rdx
  std::map<unsigned int,data::MoonfinTrialExcelConfig> *v6; // rdx
  bool v7; // al
  const data::MoonfinTrialExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:180 64 8 8 iter:182 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMoonfinTrialExcelConfigMgr::findPreviewExcelConfigByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_moonfin_trial_preview_config_map = &this->moonfin_trial_preview_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,data::MoonfinTrialExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::MoonfinTrialExcelConfig>::find(
                                                                                         p_moonfin_trial_preview_config_map,
                                                                                         (const std::map<unsigned int,data::MoonfinTrialExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->moonfin_trial_preview_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::MoonfinTrialExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::MoonfinTrialExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialExcelConfig> > *const)(v2 + 64))->second;
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
