// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp

// Line 20: range 0000000012C703A4-0000000012C706C8
int32_t __cdecl ActivityLuminanceStoneChallengeExcelConfigMgr::checkConfig(
        ActivityLuminanceStoneChallengeExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityLuminanceStoneChallengeExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityLuminanceStoneChallengeExcelConfigMgr::checkLuminanceStoneChallengeOverallConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
      "checkConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
      v5,
      (const char (*)[75])"[Luminance Stone Challenge] checkLuminanceStoneChallengeOverallConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityLuminanceStoneChallengeExcelConfigMgr::checkLuminanceStoneChallengeStageConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
      "checkConfig",
      28);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
      v7,
      (const char (*)[73])"[Luminance Stone Challenge] checkLuminanceStoneChallengeStageConfig fail");
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

// Line 35: range 0000000012C706CA-0000000012C709EE
int32_t __cdecl ActivityLuminanceStoneChallengeExcelConfigMgr::rewriteConfig(
        ActivityLuminanceStoneChallengeExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityLuminanceStoneChallengeExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityLuminanceStoneChallengeExcelConfigMgr::rewriteLuminanceStoneChallengeOverallConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
      "rewriteConfig",
      38);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
      v5,
      (const char (*)[77])"[Luminance Stone Challenge] rewriteLuminanceStoneChallengeOverallConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityLuminanceStoneChallengeExcelConfigMgr::rewriteLuminanceStoneChallengeStageConfig(
              this,
              txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
      "rewriteConfig",
      43);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
      v7,
      (const char (*)[75])"[Luminance Stone Challenge] rewriteLuminanceStoneChallengeStageConfig fail");
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

// Line 50: range 0000000012C709F0-0000000012C71472
int32_t __cdecl ActivityLuminanceStoneChallengeExcelConfigMgr::checkLuminanceStoneChallengeOverallConfig(
        ActivityLuminanceStoneChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  ActivityLuminanceStoneChallengeExcelConfigMgr *v10; // rdx
  __int64 final_stage_id; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v16; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // edx
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  int32_t result; // eax
  std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig> *__for_range; // [rsp+10h] [rbp-210h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >::reference v29; // [rsp+18h] [rbp-208h]
  std::tuple_element<0,std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >::type *activity_id; // [rsp+20h] [rbp-200h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-1F8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1E8h]
  const unsigned int *parent_quest_id; // [rsp+40h] [rbp-1E0h]
  char v34[464]; // [rsp+50h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 14 __for_begin:52 64 8 12 __for_end:52 96 8 14 __for_begin:66 128 8 12 __for_end:66 160 3"
                        "2 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityLuminanceStoneChallengeExcelConfigMgr::checkLuminanceStoneChallengeOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->luminance_overall_config_map_;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::iterator *)(v3 + 32) = std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::iterator *)(v3 + 64) = std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >::_Self *)(v3 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >::_Self *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_46;
    }
    v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> > *const)(v3 + 32));
    activity_id = std::get<0ul,unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>(v29);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>(v29);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, *activity_id) )
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
        "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
        "checkLuminanceStoneChallengeOverallConfig",
        57);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
             v7,
             (const char (*)[73])"[Luminance Stone Challenge] cannot find valid activity_id, activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v9 = 0;
      goto LABEL_46;
    }
    v10 = this;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->final_stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->final_stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->final_stage_id);
    }
    final_stage_id = excel_config->final_stage_id;
    if ( !data::ActivityLumianceStoneChallengeExcelConfigMgrBase::findLuminanceStoneChallengeStageExcelConfig(
            v10,
            final_stage_id) )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
        "checkLuminanceStoneChallengeOverallConfig",
        62);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              v12,
              (const char (*)[63])"[Luminance Stone Challenge] cannot find valid final_stage_id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &excel_config->final_stage_id);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])", activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v9 = 0;
      goto LABEL_46;
    }
    __for_range_0 = &excel_config->parent_quest_id_list;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, final_stage_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, final_stage_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
      {
        v20 = 1;
        goto LABEL_36;
      }
      v16 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
      parent_quest_id = v16;
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, *parent_quest_id) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
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
      "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
      "checkLuminanceStoneChallengeOverallConfig",
      70);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            v18,
            (const char (*)[54])"[Luminance Stone Challenge] invalid parent_quest_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, parent_quest_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v20 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v20 != 1 )
    {
      v9 = 0;
      goto LABEL_46;
    }
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->final_gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->final_gallery_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->final_gallery_id);
    }
    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, excel_config->final_gallery_id) )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> > *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
    "checkLuminanceStoneChallengeOverallConfig",
    77);
  v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v23 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
          v22,
          (const char (*)[65])"[Luminance Stone Challenge] cannot find valid final_gallery_id: ");
  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &excel_config->final_gallery_id);
  v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v24, (const char (*)[16])", activity_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, activity_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
  v2 = -1;
  v9 = 0;
LABEL_46:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 86: range 0000000012C71474-0000000012C72291
int32_t __cdecl ActivityLuminanceStoneChallengeExcelConfigMgr::checkLuminanceStoneChallengeStageConfig(
        ActivityLuminanceStoneChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const unsigned int *v6; // r8
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  unsigned int v22; // ecx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // ecx
  char v29; // al
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-2D8h]
  uint32_t last_day_index; // [rsp+1Ch] [rbp-2D4h]
  data::LuminanceStoneChallengeStageExcelConfigMap *__for_range; // [rsp+20h] [rbp-2D0h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-2C8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v36; // [rsp+30h] [rbp-2C0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stage_id_0; // [rsp+38h] [rbp-2B8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *day_index; // [rsp+40h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false,false>::reference v39; // [rsp+48h] [rbp-2A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >::type *stage_id; // [rsp+50h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >::type *excel_config; // [rsp+58h] [rbp-298h]
  char v42[656]; // [rsp+60h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 4 17 last_stage_id:109 48 8 14 __for_begin:91 80 8 12 __for_end:91 112 8 15 __for_begin:11"
                        "0 144 8 13 __for_end:110 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unkn"
                        "own> 432 48 18 stage_2_day_map:90 512 56 16 bundle_id_set:89";
  *(_QWORD *)(v2 + 16) = ActivityLuminanceStoneChallengeExcelConfigMgr::checkLuminanceStoneChallengeStageConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862735] = -218959118;
  v4[536862737] = -218103808;
  v4[536862738] = -202116109;
  ret = 0;
  last_day_index = 0;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 512));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 432));
  __for_range = &this->luminance_stone_challenge_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false> *)(v2 + 80)) )
      break;
    v39 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false,false> *const)(v2 + 48));
    stage_id = std::get<0ul,unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>(v39);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>(v39);
    std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
      (std::map<unsigned int,unsigned int> *const)(v2 + 432),
      stage_id,
      &excel_config->day_index,
      stage_id,
      v6);
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->bundle_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->bundle_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->bundle_id);
    }
    if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
            p_activity_group_links_config_mgr,
            excel_config->bundle_id) )
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
        "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
        "checkLuminanceStoneChallengeStageConfig",
        97);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
             v8,
             (const char (*)[78])"[Luminance Stone Challenge] findGroupLinksBundleExcelConfig fail. bundle_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->bundle_id);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v12 = std::unordered_set<unsigned int>::insert(
            (std::unordered_set<unsigned int> *const)(v2 + 512),
            &excel_config->bundle_id);
    if ( !v12.second )
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
        "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
        "checkLuminanceStoneChallengeStageConfig",
        103);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              v13,
              (const char (*)[50])"[Luminance Stone Challenge] duplicate bundle_id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &excel_config->bundle_id);
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v5);
  *(_DWORD *)(v2 + 32) = 0;
  __for_range_0 = (std::map<unsigned int,unsigned int> *)(v2 + 432);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, v5);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 112) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, v5);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 144) = std::map<unsigned int,unsigned int>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 112),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 144)) )
  {
    v36 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 112));
    stage_id_0 = std::get<0ul,unsigned int const,unsigned int>(v36);
    v17 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v36);
    day_index = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    if ( last_day_index > *day_index )
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
        "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
        "checkLuminanceStoneChallengeStageConfig",
        114);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v18, (const char (*)[71])byte_1AA67A20);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, stage_id_0);
      v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])", day_index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, day_index);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id_0);
    }
    v22 = *stage_id_0;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    if ( v22 != *(_DWORD *)(v2 + 32) + 1 )
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
        "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
        "checkLuminanceStoneChallengeStageConfig",
        120);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v23, (const char (*)[70])byte_1AA67AE0);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 32));
      v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v25, (const char (*)[17])", cur_stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, stage_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)day_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(day_index);
    }
    last_day_index = *day_index;
    v27 = ((unsigned __int8)stage_id_0 & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id_0);
    }
    v28 = *stage_id_0;
    v29 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v29 != 0 && v29 <= 3 )
    {
      LOBYTE(v27) = v29 != 0;
      __asan_report_store4(v2 + 32, v27);
    }
    *(_DWORD *)(v2 + 32) = v28;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 112));
  }
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 432));
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 512));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
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

// Line 131: range 0000000012C72292-0000000012C725F0
int32_t __cdecl ActivityLuminanceStoneChallengeExcelConfigMgr::rewriteLuminanceStoneChallengeOverallConfig(
        ActivityLuminanceStoneChallengeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::LuminanceStoneChallengeOverallExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::LuminanceStoneChallengeOverallExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:132 64 8 13 __for_end:132 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityLuminanceStoneChallengeExcelConfigMgr::rewriteLuminanceStoneChallengeOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->luminance_stone_challenge_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>(v14);
    v7 = std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::emplace<unsigned int const&,data::LuminanceStoneChallengeOverallExcelConfig const&>(
           &this->luminance_overall_config_map_,
           &excel_config->activity_id,
           excel_config,
           (const unsigned int *)&this->luminance_overall_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
    "rewriteLuminanceStoneChallengeOverallConfig",
    136);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v8, (const char (*)[56])byte_1AA67C60);
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

// Line 144: range 0000000012C725F2-0000000012C72ADE
int32_t __cdecl ActivityLuminanceStoneChallengeExcelConfigMgr::rewriteLuminanceStoneChallengeStageConfig(
        ActivityLuminanceStoneChallengeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v7; // rax
  const data::LuminanceStoneChallengeStageExcelConfig *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  data::LuminanceStoneChallengeStageExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false,false>::reference v19; // [rsp+18h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >::type *stage_id; // [rsp+20h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-118h]
  char v22[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:145 64 8 13 __for_end:145 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityLuminanceStoneChallengeExcelConfigMgr::rewriteLuminanceStoneChallengeStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->luminance_stone_challenge_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_20;
    }
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false,false> *const)(v3 + 32));
    stage_id = std::get<0ul,unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>(v19);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>(v19);
    v7 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->luminance_bundle_2_stage_map_,
           &excel_config->bundle_id,
           stage_id,
           (const unsigned int *)&this->luminance_bundle_2_stage_map_,
           v6);
    if ( !v7.second )
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
        "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
        "rewriteLuminanceStoneChallengeStageConfig",
        149);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              v9,
              (const char (*)[40])"[Luminance Stone Challenge] bundle id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &excel_config->bundle_id);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1AA1BDC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v12 = 0;
      goto LABEL_20;
    }
    v13 = std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::emplace<unsigned int const&,data::LuminanceStoneChallengeStageExcelConfig const&>(
            &this->luminance_stage_excel_map_,
            stage_id,
            excel_config,
            (const unsigned int *)&this->luminance_stage_excel_map_,
            v8);
    if ( !v13.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityLuminanceStoneChallengeExcelConfig.cpp",
    "rewriteLuminanceStoneChallengeStageConfig",
    156);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          v14,
          (const char (*)[39])"[Luminance Stone Challenge] stage id: ");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, stage_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])byte_1AA1BDC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v12 = 0;
LABEL_20:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 164: range 0000000012C72AE0-0000000012C72CDB
__int64 __fastcall ActivityLuminanceStoneChallengeExcelConfigMgr::findLuminanceStageByBundleId(
        const ActivityLuminanceStoneChallengeExcelConfigMgr *const this,
        __int64 bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_luminance_bundle_2_stage_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 bundle_id:163 64 8 8 iter:165 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLuminanceStoneChallengeExcelConfigMgr::findLuminanceStageByBundleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = bundle_id;
  p_luminance_bundle_2_stage_map = &this->luminance_bundle_2_stage_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, bundle_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_luminance_bundle_2_stage_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->luminance_bundle_2_stage_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v9->second;
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

// Line 174: range 0000000012C72CDC-0000000012C72E97
const data::LuminanceStoneChallengeOverallExcelConfig *__fastcall ActivityLuminanceStoneChallengeExcelConfigMgr::findLuminanceOverallConfig(
        const ActivityLuminanceStoneChallengeExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig> *p_luminance_overall_config_map; // rdx
  std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig> *v6; // rdx
  bool v7; // al
  const data::LuminanceStoneChallengeOverallExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:173 64 8 8 iter:175 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLuminanceStoneChallengeExcelConfigMgr::findLuminanceOverallConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_luminance_overall_config_map = &this->luminance_overall_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::find(p_luminance_overall_config_map, (const std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->luminance_overall_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::LuminanceStoneChallengeOverallExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeOverallExcelConfig> > *const)(v2 + 64))->second;
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

// Line 184: range 0000000012C72E98-0000000012C72FB3
const data::LuminanceStoneChallengeStageExcelConfig *__cdecl ActivityLuminanceStoneChallengeExcelConfigMgr::getInitialStageConfig(
        const ActivityLuminanceStoneChallengeExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig> *p_luminance_stage_excel_map; // rdx
  const data::LuminanceStoneChallengeStageExcelConfig *result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLuminanceStoneChallengeExcelConfigMgr::getInitialStageConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( !std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::empty(&this->luminance_stage_excel_map_) )
  {
    p_luminance_stage_excel_map = &this->luminance_stage_excel_map_;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 32, v1);
    *(std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::const_iterator *)(v2 + 32) = std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::begin(p_luminance_stage_excel_map);
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> > *const)(v2 + 32))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 193: range 0000000012C72FB4-0000000012C73222
const data::LuminanceStoneChallengeStageExcelConfig *__fastcall ActivityLuminanceStoneChallengeExcelConfigMgr::findNextStageConfig(
        const ActivityLuminanceStoneChallengeExcelConfigMgr *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig> *p_luminance_stage_excel_map; // rdx
  std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig> *v6; // rdx
  bool v7; // al
  std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig> *v8; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >::_Self *v9; // rax
  bool v10; // al
  const data::LuminanceStoneChallengeStageExcelConfig *result; // rax
  char v12[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 stage_id:192 64 8 8 iter:194 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLuminanceStoneChallengeExcelConfigMgr::findNextStageConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_luminance_stage_excel_map = &this->luminance_stage_excel_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::find(p_luminance_stage_excel_map, (const std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->luminance_stage_excel_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v7 )
    goto LABEL_13;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  v8 = &this->luminance_stage_excel_map_;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v2 + 96);
  *(std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::const_iterator *)(v2 + 128) = std::map<unsigned int,data::LuminanceStoneChallengeStageExcelConfig>::end(v8);
  v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> > *const)(v2 + 64));
  v10 = std::operator!=(
          v9,
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> >::_Self *)(v2 + 128));
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuminanceStoneChallengeStageExcelConfig> > *const)(v2 + 64))->second;
  else
LABEL_13:
    result = 0LL;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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
