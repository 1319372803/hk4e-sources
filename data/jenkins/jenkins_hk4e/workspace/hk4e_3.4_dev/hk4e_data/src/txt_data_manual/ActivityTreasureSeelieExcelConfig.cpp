// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp

// Line 20: range 0000000012E3F180-0000000012E3F4DB
int32_t __cdecl ActivityTreasureSeelieExcelConfigMgr::checkConfig(
        ActivityTreasureSeelieExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  char v9[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTreasureSeelieExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  ret = 0;
  if ( ActivityTreasureSeelieExcelConfigMgr::checkTreasureSeelieExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
      "checkConfig",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v5,
      (const char (*)[38])"checkTreasureSeelieExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( ActivityTreasureSeelieExcelConfigMgr::checkTreasureSeelieRegionExcelConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
      "checkConfig",
      29);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v6,
      (const char (*)[38])"checkTreasureSeelieExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    ret = -1;
  }
  result = ret;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 36: range 0000000012E3F4DC-0000000012E3F837
int32_t __cdecl ActivityTreasureSeelieExcelConfigMgr::rewriteConfig(
        ActivityTreasureSeelieExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  char v9[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTreasureSeelieExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  ret = 0;
  if ( ActivityTreasureSeelieExcelConfigMgr::rewriteTreasureSeelieExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
      "rewriteConfig",
      40);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v5,
      (const char (*)[40])"rewriteTreasureSeelieExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( ActivityTreasureSeelieExcelConfigMgr::rewriteTreasureSeelieRegionExcelConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
      "rewriteConfig",
      45);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v6,
      (const char (*)[46])"rewriteTreasureSeelieRegionExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    ret = -1;
  }
  result = ret;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 52: range 0000000012E3F838-0000000012E40475
int32_t __cdecl ActivityTreasureSeelieExcelConfigMgr::checkTreasureSeelieExcelConfig(
        ActivityTreasureSeelieExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  const std::set<unsigned int> *OpenDaySetByScheduleId; // rax
  __int64 v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-20Ch]
  data::TreasureSeelieExcelConfigMap *__for_range; // [rsp+18h] [rbp-208h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieExcelConfig>,false,false>::reference v38; // [rsp+20h] [rbp-200h]
  uint32_t *schedule_id; // [rsp+28h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureSeelieExcelConfig> >::type *config; // [rsp+30h] [rbp-1F0h]
  const data::NewActivityExcelConfig *new_activity_config_ptr; // [rsp+38h] [rbp-1E8h]
  char v42[480]; // [rsp+40h] [rbp-1E0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 14 region_days:76 64 8 14 __for_begin:54 96 8 12 __for_end:54 128 32 9 <unknown> 192 32 9"
                        " <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTreasureSeelieExcelConfigMgr::checkTreasureSeelieExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  ret = 0;
  __for_range = &this->treasure_seelie_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TreasureSeelieExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TreasureSeelieExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TreasureSeelieExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TreasureSeelieExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TreasureSeelieExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureSeelieExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureSeelieExcelConfig>,false> *)(v2 + 96)) )
  {
    v38 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieExcelConfig>,false,false> *const)(v2 + 64));
    schedule_id = std::get<0ul,unsigned int const,data::TreasureSeelieExcelConfig>(v38);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureSeelieExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureSeelieExcelConfig>(v38);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    new_activity_config_ptr = NewActivityExcelConfigMgr::findActivityConfigPtrByScheduleId(
                                p_new_activity_config_mgr,
                                *schedule_id);
    if ( new_activity_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&new_activity_config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)new_activity_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&new_activity_config_ptr->activity_type >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&new_activity_config_ptr->activity_type);
      }
      if ( new_activity_config_ptr->activity_type != NEW_ACTIVITY_TREASURE_SEELIE )
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
          "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
          "checkTreasureSeelieExcelConfig",
          66);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AAB2480);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, schedule_id);
        v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])byte_1AAB2520);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                &new_activity_config_ptr->activity_id);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v13, (const char (*)[30])byte_1AAB2560);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
        "checkTreasureSeelieExcelConfig",
        59);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])byte_1AAB2480);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, schedule_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1AAB24C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->guide_child_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->guide_child_quest_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->guide_child_quest_id);
    }
    if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, config->guide_child_quest_id) )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
        "checkTreasureSeelieExcelConfig",
        73);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])byte_1AAB2480);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, schedule_id);
      v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v17, (const char (*)[20])byte_1AAB25A0);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->guide_child_quest_id);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v19, (const char (*)[27])byte_1AAB25E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    OpenDaySetByScheduleId = ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(this, *schedule_id);
    v21 = (unsigned int)std::set<unsigned int>::size(OpenDaySetByScheduleId);
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v21);
    *(_DWORD *)(v2 + 48) = v21;
    if ( *(_BYTE *)(((unsigned __int64)&config->treasure_days >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->treasure_days >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->treasure_days);
    }
    if ( config->treasure_days < *(_DWORD *)(v2 + 48) )
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
        "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
        "checkTreasureSeelieExcelConfig",
        79);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])byte_1AAB2480);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, schedule_id);
      v25 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v24, (const char (*)[21])byte_1AAB2620);
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->treasure_days);
      v27 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v26, (const char (*)[30])byte_1AAB2660);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->detector_widget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->detector_widget_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->detector_widget_id);
    }
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, config->detector_widget_id) )
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
        4u,
        "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
        "checkTreasureSeelieExcelConfig",
        84);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v29, (const char (*)[8])byte_1AAB2480);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, schedule_id);
      v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v31, (const char (*)[18])byte_1AAB26A0);
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &config->detector_widget_id);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v33, (const char (*)[18])byte_1AA632A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 92: range 0000000012E40476-0000000012E40488
int32_t __cdecl ActivityTreasureSeelieExcelConfigMgr::rewriteTreasureSeelieExcelConfig(
        ActivityTreasureSeelieExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 97: range 0000000012E4048A-0000000012E41E50
int32_t __cdecl ActivityTreasureSeelieExcelConfigMgr::checkTreasureSeelieRegionExcelConfig(
        ActivityTreasureSeelieExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  ActivityTreasureSeelieExcelConfigMgr *v6; // rcx
  uint32_t *p_schedule_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t chest_group_id; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  __int64 v27; // rsi
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  char *v33; // rsi
  unsigned int *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>::size_type v67; // rdx
  __int64 v68; // rsi
  std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>::size_type v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  int32_t ret; // [rsp+1Ch] [rbp-434h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-430h]
  data::TreasureSeelieRegionExcelConfigMap *__for_range; // [rsp+28h] [rbp-428h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>> *__for_range_1; // [rsp+30h] [rbp-420h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> >,false,false>::reference v81; // [rsp+38h] [rbp-418h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> > >::type *schedule_id; // [rsp+40h] [rbp-410h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> > >::type *open_day_to_region_config_map; // [rsp+48h] [rbp-408h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false,false>::reference v84; // [rsp+50h] [rbp-400h]
  std::tuple_element<0,std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig> >::type *region_id; // [rsp+58h] [rbp-3F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig> >::type *region_config; // [rsp+60h] [rbp-3F0h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+68h] [rbp-3E8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+70h] [rbp-3E0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+78h] [rbp-3D8h]
  const RegionScriptConfig *region_script_config_ptr; // [rsp+80h] [rbp-3D0h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+88h] [rbp-3C8h]
  char v92[960]; // [rsp+90h] [rbp-3C0h] BYREF

  v2 = (unsigned __int64)v92;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(928LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 32 4 19 chest_config_id:129 48 4 9 <unknown> 64 8 15 __for_begin:100 96 8 13 __for_end:100 12"
                        "8 8 15 __for_begin:129 160 8 13 __for_end:129 192 8 15 __for_begin:166 224 8 13 __for_end:166 25"
                        "6 8 5 i:168 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9"
                        " <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTreasureSeelieExcelConfigMgr::checkTreasureSeelieRegionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->treasure_seelie_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false> *)(v2 + 96)) )
      break;
    v84 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false,false> *const)(v2 + 64));
    region_id = std::get<0ul,unsigned int const,data::TreasureSeelieRegionExcelConfig>(v84);
    region_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureSeelieRegionExcelConfig>(v84);
    v6 = this;
    p_schedule_id = &region_config->schedule_id;
    if ( *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_schedule_id);
    }
    if ( !data::ActivityTreasureSeelieExcelConfigMgrBase::findTreasureSeelieExcelConfig(v6, region_config->schedule_id) )
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
        "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
        "checkTreasureSeelieRegionExcelConfig",
        104);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])byte_1AAB28E0);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, region_id);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])byte_1AAB2920);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &region_config->schedule_id);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v12, (const char (*)[26])byte_1AAB2960);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&region_config->gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)region_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->gallery_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&region_config->gallery_id);
    }
    gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                           p_gallery_config_mgr,
                           region_config->gallery_id);
    if ( gallery_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&region_config->chest_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config->chest_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&region_config->chest_group_id);
      }
      chest_group_id = region_config->chest_group_id;
      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gallery_config_ptr->control_group_id);
      }
      if ( chest_group_id != gallery_config_ptr->control_group_id )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
          "checkTreasureSeelieRegionExcelConfig",
          117);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])byte_1AAB28E0);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, region_id);
        v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])byte_1AAB29E0);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                &region_config->chest_group_id);
        v25 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v24, (const char (*)[30])byte_1AAB2A20);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &region_config->gallery_id);
        common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v26, (const char (*)[3])" !");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
        "checkTreasureSeelieRegionExcelConfig",
        110);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])byte_1AAB28E0);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, region_id);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])byte_1AA19D20);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &region_config->gallery_id);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v18, (const char (*)[27])byte_1AAB29A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&region_config->chest_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config->chest_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config->chest_group_id);
    }
    v27 = region_config->chest_group_id;
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, v27);
    if ( group_script_config_ptr )
    {
      __for_range_0 = &region_config->chest_config_id_list;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v27);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v27);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v33 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
        v34 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v35 = (int *)v34;
        if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v34);
        }
        v36 = *v35;
        v37 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
        if ( v37 != 0 && v37 <= 3 )
        {
          LOBYTE(v33) = v37 != 0;
          __asan_report_store4(v2 + 32, v33);
        }
        *(_DWORD *)(v2 + 32) = v36;
        gadget_script_config_ptr = GroupScriptConfig::findGadgetConfig(
                                     group_script_config_ptr,
                                     *(unsigned int *)(v2 + 32));
        if ( gadget_script_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->entity_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->entity_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gadget_script_config_ptr->entity_type);
          }
          if ( gadget_script_config_ptr->entity_type != Chest )
          {
            *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 608, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 608),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
              "checkTreasureSeelieRegionExcelConfig",
              139);
            v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v46 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                    v45,
                    (const char (*)[10])byte_1AAB28E0);
            v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, region_id);
            v48 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v47,
                    (const char (*)[21])byte_1AAB2AE0);
            v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v48,
                    (const unsigned int *)(v2 + 32));
            v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v49,
                    (const char (*)[11])byte_1AAB2B20);
            v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v50,
                    &region_config->chest_group_id);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v51, (const char (*)[39])byte_1AAB2BA0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
            *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
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
            "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
            "checkTreasureSeelieRegionExcelConfig",
            134);
          v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v39 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v38, (const char (*)[10])byte_1AAB28E0);
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, region_id);
          v41 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v40, (const char (*)[21])byte_1AAB2AE0);
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  (const unsigned int *)(v2 + 32));
          v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v42, (const char (*)[11])byte_1AAB2B20);
          v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v43,
                  &region_config->chest_group_id);
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v44, (const char (*)[15])byte_1AAB2B60);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&region_config->play_region_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config->play_region_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&region_config->play_region_config_id);
      }
      region_script_config_ptr = GroupScriptConfig::findRegionConfig(
                                   group_script_config_ptr,
                                   region_config->play_region_config_id);
      if ( region_script_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&region_script_config_ptr->shape >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)region_script_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_script_config_ptr->shape >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&region_script_config_ptr->shape);
        }
        if ( region_script_config_ptr->shape != REGION_SPHERE )
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 736, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 736),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
            "checkTreasureSeelieRegionExcelConfig",
            153);
          v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 736),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v60 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v59, (const char (*)[10])byte_1AAB28E0);
          v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, region_id);
          v62 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v61, (const char (*)[24])byte_1AAB2C00);
          v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v62,
                  &region_config->play_region_config_id);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v63, (const char (*)[21])byte_1AAB2C40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
          "checkTreasureSeelieRegionExcelConfig",
          146);
        v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 672),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v53 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v52, (const char (*)[10])byte_1AAB28E0);
        v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, region_id);
        v55 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v54, (const char (*)[24])byte_1AAB2C00);
        v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v55,
                &region_config->play_region_config_id);
        v57 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v56, (const char (*)[11])byte_1AAB2B20);
        v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v57,
                &region_config->chest_group_id);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v58, (const char (*)[15])byte_1AAB2B60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
        "checkTreasureSeelieRegionExcelConfig",
        124);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])byte_1AAB28E0);
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, region_id);
      v31 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v30, (const char (*)[17])byte_1AAB29E0);
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &region_config->chest_group_id);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v32, (const char (*)[24])byte_1AAB2AA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( std::vector<unsigned int>::empty(&region_config->chest_config_id_list) )
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
        "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
        "checkTreasureSeelieRegionExcelConfig",
        161);
      v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v65 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v64, (const char (*)[10])byte_1AAB28E0);
      v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, region_id);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v66, (const char (*)[18])byte_1AAB2C80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
      *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = &this->schedule_id_open_day_to_region_config_map_;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v5);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v5);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>::end(__for_range_1);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> >,false> *)(v2 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> >,false> *)(v2 + 224)) )
  {
    v81 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> >,false,false> *const)(v2 + 192));
    schedule_id = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>(v81);
    open_day_to_region_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>(v81);
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v2 + 224);
    for ( *(_QWORD *)(v2 + 256) = 1LL; ; ++*(_QWORD *)(v2 + 256) )
    {
      v67 = std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>::size(open_day_to_region_config_map);
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 256);
      if ( v67 < *(_QWORD *)(v2 + 256) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v68 = (unsigned int)*(_QWORD *)(v2 + 256);
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 48, v68);
      *(_DWORD *)(v2 + 48) = v68;
      v69 = std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>::count(
              open_day_to_region_config_map,
              (const std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>::key_type *)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( !v69 )
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
          "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
          "checkTreasureSeelieRegionExcelConfig",
          172);
        v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v71 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v70, (const char (*)[10])byte_1AAB2CC0);
        v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, schedule_id);
        v73 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v72, (const char (*)[5])byte_1AAB2D00);
        v74 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v73,
                (const unsigned __int64 *)(v2 + 256));
        common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v74, (const char (*)[58])byte_1AAB2D40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 256);
    }
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> >,false,false> *const)(v2 + 192));
  }
  if ( v92 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8070) = -168430091;
  }
  return ret;
};

// Line 181: range 0000000012E41E52-0000000012E42528
int32_t __cdecl ActivityTreasureSeelieExcelConfigMgr::rewriteTreasureSeelieRegionExcelConfig(
        ActivityTreasureSeelieExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::set<unsigned int> *v5; // rax
  data::TreasureSeelieRegionExcelConfig **v6; // r8
  unsigned int *p_open_day; // rcx
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false,false>,bool> >::type *v8; // rax
  char v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool v12; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false,false>::pointer v13; // rax
  char v14; // dl
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false,false>::pointer v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-16Ch]
  data::TreasureSeelieRegionExcelConfigMap *__for_range; // [rsp+28h] [rbp-168h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-160h]
  std::tuple_element<1,std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig> >::type *region_config; // [rsp+40h] [rbp-150h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>>::mapped_type *open_day_to_region_config_map; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false,false>,bool> >::type *iter; // [rsp+50h] [rbp-140h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false,false>,bool> >::type *is_new; // [rsp+58h] [rbp-138h]
  char v34[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:183 64 8 13 __for_end:183 96 8 9 <unknown> 128 8 9 <unknown> 160 16 9 <unk"
                        "nown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTreasureSeelieExcelConfigMgr::rewriteTreasureSeelieRegionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->treasure_seelie_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::TreasureSeelieRegionExcelConfig>(__in);
    region_config = std::get<1ul,unsigned int const,data::TreasureSeelieRegionExcelConfig>(__in);
    v5 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
           &this->schedule_id_to_open_days_map_,
           &region_config->schedule_id);
    std::set<unsigned int>::insert(v5, &region_config->open_day);
    open_day_to_region_config_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>::operator[](
                                      &this->schedule_id_open_day_to_region_config_map_,
                                      &region_config->schedule_id);
    *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, &region_config->schedule_id);
    *(_QWORD *)(v2 + 96) = region_config;
    p_open_day = &region_config->open_day;
    if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false,false>,bool> *)(v2 + 160) = std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>::emplace<unsigned int &,data::TreasureSeelieRegionExcelConfig*>(open_day_to_region_config_map, p_open_day, (data::TreasureSeelieRegionExcelConfig **)(v2 + 96), p_open_day, v6);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig const*>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false,false>,bool> *)(v2 + 160));
    v8 = std::get<1ul,std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig const*>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false,false>,bool> *)(v2 + 160));
    is_new = v8;
    v9 = 0;
    v10 = (unsigned __int8)v8 & 7;
    v11 = (*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000));
    if ( (_BYTE)v11 )
      __asan_report_load1(v8, v10, v11);
    if ( *is_new )
      goto LABEL_23;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v10);
    *(std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>::end(open_day_to_region_config_map);
    v9 = 1;
    v12 = std::__detail::operator!=<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig const*>,false>(
            iter,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false> *)(v2 + 128));
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig const*>,false,false>::operator->(iter);
    if ( *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v13->second);
    if ( v12 && v13->second != 0LL )
      v14 = 1;
    else
LABEL_23:
      v14 = 0;
    if ( v9 )
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
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
        "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
        "rewriteTreasureSeelieRegionExcelConfig",
        191);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])byte_1AAB2480);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &region_config->schedule_id);
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])byte_1AAB2E80);
      v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig const*>,false,false>::operator->(iter);
      if ( *(_BYTE *)(((unsigned __int64)&v19->second >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v19->second);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v19->second->id);
      v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])byte_1AAB2EC0);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &region_config->id);
      v23 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v22, (const char (*)[2])">");
      v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v23, (const char (*)[20])byte_1AAB2F40);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &region_config->open_day);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])byte_1AAB2F80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v34 == (char *)v2 )
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

// Line 200: range 0000000012E4252A-0000000012E42881
const std::set<unsigned int> *__fastcall ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(
        const ActivityTreasureSeelieExcelConfigMgr *const this,
        const std::set<unsigned int> *schedule_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_schedule_id_to_open_days_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  char v11[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 15 schedule_id:199 64 8 8 iter:202 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = (_DWORD)schedule_id;
  if ( !(_BYTE)`guard variable for'ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(unsigned int)::empty_set
    && __cxa_guard_acquire(&`guard variable for'ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(unsigned int)::empty_set) )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)&ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(unsigned int)const::empty_set);
    __cxa_guard_release(&`guard variable for'ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(unsigned int)::empty_set);
    schedule_id = &ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(unsigned int)const::empty_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<unsigned int>::~set,
      (void *)&ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(unsigned int)const::empty_set,
      &_dso_handle);
  }
  p_schedule_id_to_open_days_map = &this->schedule_id_to_open_days_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, schedule_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_schedule_id_to_open_days_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->schedule_id_to_open_days_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  else
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
      "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
      "getOpenDaySetByScheduleId",
      207);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[10])"schudule:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" NOT exist.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = &ActivityTreasureSeelieExcelConfigMgr::getOpenDaySetByScheduleId(unsigned int)const::empty_set;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 212: range 0000000012E42882-0000000012E42E49
const data::TreasureSeelieRegionExcelConfig *__fastcall ActivityTreasureSeelieExcelConfigMgr::findRegionConfigByScheduleIdAndOpenDay(
        const ActivityTreasureSeelieExcelConfigMgr *const this,
        __int64 schedule_id,
        uint32_t open_day)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>> *p_schedule_id_open_day_to_region_config_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const data::TreasureSeelieRegionExcelConfig *result; // rax
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false,false>::pointer v17; // rax
  std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> *open_day_to_region_config_map; // [rsp+18h] [rbp-168h]
  char v20[352]; // [rsp+20h] [rbp-160h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 15 schedule_id:211 48 4 12 open_day:211 64 8 17 schedule_iter:213 96 8 9 <unknown> 128 8 "
                        "12 day_iter:220 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTreasureSeelieExcelConfigMgr::findRegionConfigByScheduleIdAndOpenDay;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 32) = schedule_id;
  *(_DWORD *)(v3 + 48) = open_day;
  p_schedule_id_open_day_to_region_config_map = &this->schedule_id_open_day_to_region_config_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, schedule_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>::find(p_schedule_id_open_day_to_region_config_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>>::key_type *)(v3 + 32));
  v7 = &this->schedule_id_open_day_to_region_config_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      3u,
      "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
      "findRegionConfigByScheduleIdAndOpenDay",
      216);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[10])"schudule:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" NOT exist.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0LL;
  }
  else
  {
    open_day_to_region_config_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>::find(open_day_to_region_config_map, (const std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::unordered_map<unsigned int,const data::TreasureSeelieRegionExcelConfig*>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::TreasureSeelieRegionExcelConfig const*>::end(open_day_to_region_config_map);
    v12 = std::__detail::operator==<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig const*>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
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
        "./src/txt_data_manual/ActivityTreasureSeelieExcelConfig.cpp",
        "findRegionConfigByScheduleIdAndOpenDay",
        223);
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[10])"schudule:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", open day:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" NOT exist.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      result = 0LL;
    }
    else
    {
      v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureSeelieRegionExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::TreasureSeelieRegionExcelConfig*>,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v17->second);
      result = v17->second;
    }
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
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
