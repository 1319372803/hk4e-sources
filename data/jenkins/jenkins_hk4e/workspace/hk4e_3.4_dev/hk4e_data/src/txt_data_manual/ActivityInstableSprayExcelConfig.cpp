// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp

// Line 18: range 0000000012C5475A-0000000012C549DD
int32_t __cdecl ActivityInstableSprayExcelConfigMgr::checkConfig(
        ActivityInstableSprayExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityInstableSprayExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityInstableSprayExcelConfigMgr::checkOverallConfig(this, txt_config_mgr)
    || ActivityInstableSprayExcelConfigMgr::checkStageConfig(this, txt_config_mgr)
    || ActivityInstableSprayExcelConfigMgr::checkDifficultyConfig(this, txt_config_mgr)
    || ActivityInstableSprayExcelConfigMgr::checkLevelConfig(this, txt_config_mgr)
    || ActivityInstableSprayExcelConfigMgr::checkBuffConfig(this, txt_config_mgr)
    || ActivityInstableSprayExcelConfigMgr::checkGachaConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
      "checkConfig",
      26);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v6,
      (const char (*)[38])"check InstableSprayExcelConfig failed");
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

// Line 33: range 0000000012C549DE-0000000012C5512D
int32_t __cdecl ActivityInstableSprayExcelConfigMgr::checkOverallConfig(
        const ActivityInstableSprayExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::vector<data::InstableSprayOverallExcelConfig>::size_type v7; // rax
  int32_t result; // eax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  NewActivityExcelConfigMgr *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  const data::InstableSprayOverallExcelConfig *overall_config; // [rsp+18h] [rbp-178h]
  char v18[368]; // [rsp+20h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityInstableSprayExcelConfigMgr::checkOverallConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  if ( std::vector<data::InstableSprayOverallExcelConfig>::size(&this->instable_spray_overall_excel_config_vec) == 1 )
  {
    overall_config = std::vector<data::InstableSprayOverallExcelConfig>::front(&this->instable_spray_overall_excel_config_vec);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&overall_config->activity_id);
    }
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
           p_new_activity_config_mgr,
           overall_config->activity_id) )
    {
      v12 = &txt_config_mgr->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&overall_config->schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)overall_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config->schedule_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&overall_config->schedule_id);
      }
      if ( data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(v12, overall_config->schedule_id) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&overall_config->weight_down_percent >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&overall_config->weight_down_percent >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&overall_config->weight_down_percent);
        }
        if ( overall_config->weight_down_percent <= 0x64 )
        {
          result = 0;
        }
        else
        {
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
            "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
            "checkOverallConfig",
            52);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v15, (const char (*)[48])byte_1AA616C0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v16,
            &overall_config->weight_down_percent);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          result = -1;
        }
      }
      else
      {
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
          "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
          "checkOverallConfig",
          47);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v13, (const char (*)[35])byte_1AA61660);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &overall_config->schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        result = -1;
      }
    }
    else
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
        4u,
        "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
        "checkOverallConfig",
        42);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v10, (const char (*)[29])byte_1AA61620);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &overall_config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      result = -1;
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
      4u,
      "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
      "checkOverallConfig",
      36);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v5, (const char (*)[59])byte_1AA615C0);
    v7 = std::vector<data::InstableSprayOverallExcelConfig>::size(&this->instable_spray_overall_excel_config_vec);
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v2 + 32, byte_1AA615C0);
    *(_QWORD *)(v2 + 32) = v7;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = -1;
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 58: range 0000000012C5512E-0000000012C55825
int32_t __cdecl ActivityInstableSprayExcelConfigMgr::checkStageConfig(
        const ActivityInstableSprayExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  __int64 dungeon_id; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rax
  const ActivityInstableSprayExcelConfigMgr *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-174h]
  data::InstableSprayStageExcelConfigMap *__for_range; // [rsp+20h] [rbp-170h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false>::reference v21; // [rsp+28h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::InstableSprayStageExcelConfig> >::type *id; // [rsp+30h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InstableSprayStageExcelConfig> >::type *stage_config; // [rsp+38h] [rbp-158h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-150h]
  const unsigned int *level_id; // [rsp+48h] [rbp-148h]
  char v26[320]; // [rsp+50h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 14 __for_begin:60 64 8 12 __for_end:60 96 8 14 __for_begin:67 128 8 12 __for_end:67 160 3"
                        "2 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityInstableSprayExcelConfigMgr::checkStageConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->instable_spray_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false> *)(v2 + 64)) )
  {
    v21 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::InstableSprayStageExcelConfig>(v21);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::InstableSprayStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::InstableSprayStageExcelConfig>(v21);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&stage_config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_config->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&stage_config->dungeon_id);
    }
    dungeon_id = stage_config->dungeon_id;
    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, dungeon_id) )
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
        "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
        "checkStageConfig",
        64);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v7, (const char (*)[39])byte_1AA61800);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])byte_1AA61860);
      dungeon_id = (__int64)&stage_config->dungeon_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &stage_config->dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &stage_config->level_id_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, dungeon_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, dungeon_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
    {
      v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
      level_id = v11;
      v12 = this;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( !data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(v12, *level_id) )
      {
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
          "checkStageConfig",
          72);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v13, (const char (*)[39])byte_1AA618A0);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])byte_1AA61900);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, level_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 80: range 0000000012C55826-0000000012C55838
int32_t __cdecl ActivityInstableSprayExcelConfigMgr::checkDifficultyConfig(
        const ActivityInstableSprayExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 84: range 0000000012C5583A-0000000012C5626F
int32_t __cdecl ActivityInstableSprayExcelConfigMgr::checkLevelConfig(
        const ActivityInstableSprayExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  uint32_t *p_gallery_id; // rax
  __int64 gallery_id; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char *v12; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rax
  const ActivityInstableSprayExcelConfigMgr *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v19; // rax
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-204h]
  data::InstableSprayLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-200h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false,false>::reference v29; // [rsp+28h] [rbp-1F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::InstableSprayLevelExcelConfig> >::type *id; // [rsp+30h] [rbp-1F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InstableSprayLevelExcelConfig> >::type *level_config; // [rsp+38h] [rbp-1E8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1E0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-1D8h]
  const unsigned int *trial_avatar_id; // [rsp+50h] [rbp-1D0h]
  const unsigned int *buff_id; // [rsp+58h] [rbp-1C8h]
  char v36[448]; // [rsp+60h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 8 14 __for_begin:86 64 8 12 __for_end:86 96 8 14 __for_begin:93 128 8 12 __for_end:93 160 8"
                        " 15 __for_begin:101 192 8 13 __for_end:101 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityInstableSprayExcelConfigMgr::checkLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  ret = 0;
  __for_range = &this->instable_spray_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::InstableSprayLevelExcelConfig>(v29);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::InstableSprayLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::InstableSprayLevelExcelConfig>(v29);
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    p_gallery_id = &level_config->gallery_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gallery_id);
    }
    gallery_id = level_config->gallery_id;
    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, gallery_id) )
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
        "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
        "checkLevelConfig",
        90);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v8, (const char (*)[41])byte_1AA61A20);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])", Gallery ID: ");
      gallery_id = (__int64)&level_config->gallery_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &level_config->gallery_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &level_config->buff_id_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v12 = (char *)(v2 + 128);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
        break;
      v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
      buff_id = v13;
      v14 = this;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      if ( !data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayBuffExcelConfig(v14, *buff_id) )
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
          "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
          "checkLevelConfig",
          97);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v15, (const char (*)[38])byte_1AA61AC0);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
        v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", Buff ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, buff_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &level_config->trail_avatar_list;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v12);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v12);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192)) )
    {
      v19 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
      trial_avatar_id = v19;
      p_trial_avatar_config_mgr = &txt_config_mgr->trial_avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
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
          "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
          "checkLevelConfig",
          105);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v21, (const char (*)[45])byte_1AA61B60);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
        v24 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v23, (const char (*)[19])byte_1AA61BC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, trial_avatar_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v36 == (char *)v2 )
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

// Line 113: range 0000000012C56270-0000000012C56282
int32_t __cdecl ActivityInstableSprayExcelConfigMgr::checkBuffConfig(
        const ActivityInstableSprayExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 117: range 0000000012C56284-0000000012C56895
int32_t __cdecl ActivityInstableSprayExcelConfigMgr::checkGachaConfig(
        const ActivityInstableSprayExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::InstableSprayGachaExcelConfigMap *p_instable_spray_gacha_excel_config_map; // rdx
  data::InstableSprayGachaExcelConfigMap *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false>::pointer v12; // rax
  char v13; // dl
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::size_type v18; // [rsp+8h] [rbp-158h]
  uint32_t prev_stage_end_time; // [rsp+28h] [rbp-138h]
  char v20[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 5 i:120 64 8 8 iter:122 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityInstableSprayExcelConfigMgr::checkGachaConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  prev_stage_end_time = 0;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, txt_config_mgr);
  for ( *(_DWORD *)(v3 + 48) = 1; ; ++*(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    v18 = *(unsigned int *)(v3 + 48);
    if ( v18 >= std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::size(&this->instable_spray_gacha_excel_config_map) )
      break;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    p_instable_spray_gacha_excel_config_map = &this->instable_spray_gacha_excel_config_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::find(p_instable_spray_gacha_excel_config_map, (const std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    v7 = &this->instable_spray_gacha_excel_config_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::end(v7);
    txt_config_mgr = (const TxtConfigMgr *)(v3 + 96);
    v8 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false> *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
        "checkGachaConfig",
        125);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v9, (const char (*)[46])byte_1AA61CA0);
      txt_config_mgr = (const TxtConfigMgr *)(v3 + 48);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    else
    {
      v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false> *const)(v3 + 64));
      v13 = *(_BYTE *)(((unsigned __int64)&v12->second.stage_end_time >> 3) + 0x7FFF8000);
      LOBYTE(txt_config_mgr) = v13 != 0;
      if ( v13 != 0 && v13 <= 3 )
        __asan_report_load4(&v12->second.stage_end_time);
      if ( v12->second.stage_end_time > prev_stage_end_time )
      {
        prev_stage_end_time = v12->second.stage_end_time;
        v11 = 1;
      }
      else
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
          "./src/txt_data_manual/ActivityInstableSprayExcelConfig.cpp",
          "checkGachaConfig",
          131);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(v14, (const char (*)[73])byte_1AA61D00);
        txt_config_mgr = (const TxtConfigMgr *)(v3 + 48);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
    }
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v11 != 1 )
    {
      v16 = 0;
      goto LABEL_31;
    }
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
  }
  v16 = 1;
LABEL_31:
  if ( v16 == 1 )
    v2 = 0;
  result = v2;
  if ( v20 == (char *)v3 )
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

// Line 140: range 0000000012C56896-0000000012C568A8
int32_t __cdecl ActivityInstableSprayExcelConfigMgr::rewriteConfig(
        ActivityInstableSprayExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 145: range 0000000012C568AA-0000000012C56932
const data::InstableSprayOverallExcelConfig *__cdecl ActivityInstableSprayExcelConfigMgr::getOverallConfig(
        const ActivityInstableSprayExcelConfigMgr *const this)
{
  if ( !(_BYTE)`guard variable for'ActivityInstableSprayExcelConfigMgr::getOverallConfig(void)::dummy
    && __cxa_guard_acquire(&`guard variable for'ActivityInstableSprayExcelConfigMgr::getOverallConfig(void)::dummy) )
  {
    __cxa_guard_release(&`guard variable for'ActivityInstableSprayExcelConfigMgr::getOverallConfig(void)::dummy);
    __cxa_atexit(
      (void (__fastcall *)(void *))data::InstableSprayOverallExcelConfig::~InstableSprayOverallExcelConfig,
      (void *)&ActivityInstableSprayExcelConfigMgr::getOverallConfig(void)const::dummy,
      &_dso_handle);
  }
  if ( std::vector<data::InstableSprayOverallExcelConfig>::empty(&this->instable_spray_overall_excel_config_vec) )
    return &ActivityInstableSprayExcelConfigMgr::getOverallConfig(void)const::dummy;
  else
    return std::vector<data::InstableSprayOverallExcelConfig>::front(&this->instable_spray_overall_excel_config_vec);
};

// Line 155: range 0000000012C56934-0000000012C56C6A
uint32_t __cdecl ActivityInstableSprayExcelConfigMgr::getGachaStageByGalleryTime(
        const ActivityInstableSprayExcelConfigMgr *const this,
        uint32_t seconds)
{
  uint32_t first; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::InstableSprayGachaExcelConfigMap *p_instable_spray_gacha_excel_config_map; // rcx
  data::InstableSprayGachaExcelConfigMap *v7; // rdx
  bool v8; // al
  int v9; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false>::pointer v10; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false>::pointer v11; // rax
  uint32_t result; // eax
  unsigned int i; // [rsp+2Ch] [rbp-B4h]
  char v14[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 9 <unknown> 64 8 8 iter:159 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityInstableSprayExcelConfigMgr::getGachaStageByGalleryTime;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  for ( i = 1;
        (int)i <= std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::size(&this->instable_spray_gacha_excel_config_map);
        ++i )
  {
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    p_instable_spray_gacha_excel_config_map = &this->instable_spray_gacha_excel_config_map;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, i);
    *(_DWORD *)(v3 + 48) = i;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, i);
    *(std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::find(p_instable_spray_gacha_excel_config_map, (const std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    v7 = &this->instable_spray_gacha_excel_config_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::end(v7);
    v8 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false> *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      first = 0;
      v9 = 0;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second.stage_end_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second.stage_end_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second.stage_end_time);
      }
      if ( seconds > v10->second.stage_end_time )
      {
        v9 = 1;
      }
      else
      {
        v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v11);
        }
        first = v11->first;
        v9 = 0;
      }
    }
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v9 != 1 )
      goto LABEL_24;
  }
  first = 0;
LABEL_24:
  result = first;
  if ( v14 == (char *)v3 )
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
